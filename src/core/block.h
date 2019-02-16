// Copyright (c) 2019, The Vulkan Developers.
//
// This file is part of Vulkan.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// You should have received a copy of the MIT License
// along with Vulkan. If not, see <https://opensource.org/licenses/MIT>.

#pragma once

#include <stdint.h>

#include "common/util.h"

#include "blockchainparams.h"
#include "transaction.h"
#include "vulkan.pb-c.h"

#ifdef __cplusplus
extern "
{
#endif

#define BLOCK_HEADER_SIZE (HASH_SIZE + HASH_SIZE + 8 + 4 + 4 + 4 + 4)

typedef struct Block
{
  uint32_t version;
  uint32_t bits;

  uint8_t previous_hash[HASH_SIZE];
  uint8_t hash[HASH_SIZE];

  uint32_t timestamp;
  uint32_t nonce;
  uint64_t already_generated_coins;

  uint8_t merkle_root[HASH_SIZE];
  uint32_t transaction_count;
  transaction_t **transactions;
} block_t;

static block_t genesis_block = {
  .version = BLOCK_VERSION,
  .bits = INITIAL_DIFFICULTY_BITS,
  .previous_hash = {
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00
  },
  .hash = {
    0x40, 0xe2, 0xba, 0xde,
    0x03, 0xe4, 0x0f, 0xf7,
    0xa1, 0x21, 0x20, 0xb3,
    0xc6, 0xa3, 0xfb, 0xd4,
    0xbe, 0x84, 0xde, 0xf4,
    0xbc, 0xea, 0xc2, 0x2f,
    0x4a, 0xd5, 0xd7, 0x7a,
    0x96, 0x5c, 0x0f, 0xfd
  },
  .timestamp = GENESIS_TIMESTAMP,
  .nonce = GENESIS_NONCE,
  .already_generated_coins = 0,
  .merkle_root = {
    0xe3, 0xb0, 0xc4, 0x42,
    0xfc, 0x1c, 0x14, 0x9a,
    0xfb, 0xf4, 0xc8, 0x99,
    0x6f, 0xb9, 0x24, 0x27,
    0xae, 0x41, 0xe4, 0x64,
    0x55, 0x93, 0x4c, 0xa4,
    0x95, 0x99, 0x1b, 0x78,
    0x52, 0xb8, 0x00, 0x00
  }
};

block_t *make_block(void);
int free_block(block_t *block);
int hash_block(block_t *block);
int get_block_header(uint8_t *block_header, block_t *block);
uint32_t get_block_header_size(block_t *block);
int valid_block_hash(block_t *block);
int print_block(block_t *block);

int compare_block_hash(uint8_t *hash, uint8_t *other_hash);
int compare_block(block_t *block, block_t *other_block);
int compare_with_genesis_block(block_t *block);

int valid_block(block_t *block);
int valid_merkle_root(block_t *block);

int compute_merkle_root(uint8_t *merkle_root, block_t *block);
int compute_self_merkle_root(block_t *block);

PBlock *block_to_proto(block_t *block);
int free_proto_block(PBlock *proto_block);
int block_to_serialized(uint8_t **buffer, uint32_t *buffer_len, block_t *block);
block_t *block_from_proto(PBlock *proto_block);
block_t *block_from_serialized(uint8_t *buffer, uint32_t buffer_len);

#ifdef __cplusplus
}
#endif