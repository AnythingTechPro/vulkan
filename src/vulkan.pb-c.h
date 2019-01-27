/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: vulkan.proto */

#ifndef PROTOBUF_C_vulkan_2eproto__INCLUDED
#define PROTOBUF_C_vulkan_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _PInputTransaction PInputTransaction;
typedef struct _POutputTransaction POutputTransaction;
typedef struct _PTransaction PTransaction;
typedef struct _PUnspentOutputTransaction PUnspentOutputTransaction;
typedef struct _PUnspentTransaction PUnspentTransaction;
typedef struct _PBlock PBlock;
typedef struct _PWallet PWallet;
typedef struct _PEmpty PEmpty;
typedef struct _PPacket PPacket;
typedef struct _MIncomingBlock MIncomingBlock;
typedef struct _MIncomingTransaction MIncomingTransaction;
typedef struct _MGetBlockHeightRequest MGetBlockHeightRequest;
typedef struct _MGetBlockHeightResponse MGetBlockHeightResponse;
typedef struct _MGetBlockRequest MGetBlockRequest;
typedef struct _MGetBlockResponse MGetBlockResponse;
typedef struct _MGetTransactionRequest MGetTransactionRequest;
typedef struct _MGetTransactionResponse MGetTransactionResponse;


/* --- enums --- */


/* --- messages --- */

struct  _PInputTransaction
{
  ProtobufCMessage base;
  ProtobufCBinaryData transaction;
  uint32_t txout_index;
  ProtobufCBinaryData signature;
  ProtobufCBinaryData public_key;
};
#define PINPUT_TRANSACTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pinput_transaction__descriptor) \
    , {0,NULL}, 0, {0,NULL}, {0,NULL} }


struct  _POutputTransaction
{
  ProtobufCMessage base;
  uint64_t amount;
  ProtobufCBinaryData address;
};
#define POUTPUT_TRANSACTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&poutput_transaction__descriptor) \
    , 0, {0,NULL} }


struct  _PTransaction
{
  ProtobufCMessage base;
  ProtobufCBinaryData id;
  size_t n_txins;
  PInputTransaction **txins;
  size_t n_txouts;
  POutputTransaction **txouts;
};
#define PTRANSACTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ptransaction__descriptor) \
    , {0,NULL}, 0,NULL, 0,NULL }


struct  _PUnspentOutputTransaction
{
  ProtobufCMessage base;
  uint64_t amount;
  ProtobufCBinaryData address;
  protobuf_c_boolean spent;
};
#define PUNSPENT_OUTPUT_TRANSACTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&punspent_output_transaction__descriptor) \
    , 0, {0,NULL}, 0 }


struct  _PUnspentTransaction
{
  ProtobufCMessage base;
  ProtobufCBinaryData id;
  protobuf_c_boolean coinbase;
  size_t n_unspent_txouts;
  PUnspentOutputTransaction **unspent_txouts;
};
#define PUNSPENT_TRANSACTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&punspent_transaction__descriptor) \
    , {0,NULL}, 0, 0,NULL }


struct  _PBlock
{
  ProtobufCMessage base;
  uint32_t version;
  uint32_t bits;
  ProtobufCBinaryData previous_hash;
  ProtobufCBinaryData hash;
  uint32_t timestamp;
  uint32_t nonce;
  ProtobufCBinaryData merkle_root;
  size_t n_transactions;
  PTransaction **transactions;
};
#define PBLOCK__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pblock__descriptor) \
    , 0, 0, {0,NULL}, {0,NULL}, 0, 0, {0,NULL}, 0,NULL }


struct  _PWallet
{
  ProtobufCMessage base;
  ProtobufCBinaryData secret_key;
  ProtobufCBinaryData public_key;
  ProtobufCBinaryData address;
  uint64_t balance;
};
#define PWALLET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pwallet__descriptor) \
    , {0,NULL}, {0,NULL}, {0,NULL}, 0 }


struct  _PEmpty
{
  ProtobufCMessage base;
};
#define PEMPTY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pempty__descriptor) \
     }


struct  _PPacket
{
  ProtobufCMessage base;
  uint32_t id;
  uint32_t message_size;
  ProtobufCBinaryData message;
};
#define PPACKET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ppacket__descriptor) \
    , 0, 0, {0,NULL} }


struct  _MIncomingBlock
{
  ProtobufCMessage base;
  PBlock *block;
};
#define MINCOMING_BLOCK__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&mincoming_block__descriptor) \
    , NULL }


struct  _MIncomingTransaction
{
  ProtobufCMessage base;
  PTransaction *transaction;
};
#define MINCOMING_TRANSACTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&mincoming_transaction__descriptor) \
    , NULL }


struct  _MGetBlockHeightRequest
{
  ProtobufCMessage base;
};
#define MGET_BLOCK_HEIGHT_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&mget_block_height_request__descriptor) \
     }


struct  _MGetBlockHeightResponse
{
  ProtobufCMessage base;
  uint64_t height;
  ProtobufCBinaryData hash;
};
#define MGET_BLOCK_HEIGHT_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&mget_block_height_response__descriptor) \
    , 0, {0,NULL} }


struct  _MGetBlockRequest
{
  ProtobufCMessage base;
  int64_t height;
  ProtobufCBinaryData hash;
};
#define MGET_BLOCK_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&mget_block_request__descriptor) \
    , 0, {0,NULL} }


struct  _MGetBlockResponse
{
  ProtobufCMessage base;
  uint64_t height;
  PBlock *block;
};
#define MGET_BLOCK_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&mget_block_response__descriptor) \
    , 0, NULL }


struct  _MGetTransactionRequest
{
  ProtobufCMessage base;
  ProtobufCBinaryData id;
  ProtobufCBinaryData input_hash;
};
#define MGET_TRANSACTION_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&mget_transaction_request__descriptor) \
    , {0,NULL}, {0,NULL} }


struct  _MGetTransactionResponse
{
  ProtobufCMessage base;
  PTransaction *transaction;
};
#define MGET_TRANSACTION_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&mget_transaction_response__descriptor) \
    , NULL }


/* PInputTransaction methods */
void   pinput_transaction__init
                     (PInputTransaction         *message);
size_t pinput_transaction__get_packed_size
                     (const PInputTransaction   *message);
size_t pinput_transaction__pack
                     (const PInputTransaction   *message,
                      uint8_t             *out);
size_t pinput_transaction__pack_to_buffer
                     (const PInputTransaction   *message,
                      ProtobufCBuffer     *buffer);
PInputTransaction *
       pinput_transaction__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pinput_transaction__free_unpacked
                     (PInputTransaction *message,
                      ProtobufCAllocator *allocator);
/* POutputTransaction methods */
void   poutput_transaction__init
                     (POutputTransaction         *message);
size_t poutput_transaction__get_packed_size
                     (const POutputTransaction   *message);
size_t poutput_transaction__pack
                     (const POutputTransaction   *message,
                      uint8_t             *out);
size_t poutput_transaction__pack_to_buffer
                     (const POutputTransaction   *message,
                      ProtobufCBuffer     *buffer);
POutputTransaction *
       poutput_transaction__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   poutput_transaction__free_unpacked
                     (POutputTransaction *message,
                      ProtobufCAllocator *allocator);
/* PTransaction methods */
void   ptransaction__init
                     (PTransaction         *message);
size_t ptransaction__get_packed_size
                     (const PTransaction   *message);
size_t ptransaction__pack
                     (const PTransaction   *message,
                      uint8_t             *out);
size_t ptransaction__pack_to_buffer
                     (const PTransaction   *message,
                      ProtobufCBuffer     *buffer);
PTransaction *
       ptransaction__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ptransaction__free_unpacked
                     (PTransaction *message,
                      ProtobufCAllocator *allocator);
/* PUnspentOutputTransaction methods */
void   punspent_output_transaction__init
                     (PUnspentOutputTransaction         *message);
size_t punspent_output_transaction__get_packed_size
                     (const PUnspentOutputTransaction   *message);
size_t punspent_output_transaction__pack
                     (const PUnspentOutputTransaction   *message,
                      uint8_t             *out);
size_t punspent_output_transaction__pack_to_buffer
                     (const PUnspentOutputTransaction   *message,
                      ProtobufCBuffer     *buffer);
PUnspentOutputTransaction *
       punspent_output_transaction__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   punspent_output_transaction__free_unpacked
                     (PUnspentOutputTransaction *message,
                      ProtobufCAllocator *allocator);
/* PUnspentTransaction methods */
void   punspent_transaction__init
                     (PUnspentTransaction         *message);
size_t punspent_transaction__get_packed_size
                     (const PUnspentTransaction   *message);
size_t punspent_transaction__pack
                     (const PUnspentTransaction   *message,
                      uint8_t             *out);
size_t punspent_transaction__pack_to_buffer
                     (const PUnspentTransaction   *message,
                      ProtobufCBuffer     *buffer);
PUnspentTransaction *
       punspent_transaction__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   punspent_transaction__free_unpacked
                     (PUnspentTransaction *message,
                      ProtobufCAllocator *allocator);
/* PBlock methods */
void   pblock__init
                     (PBlock         *message);
size_t pblock__get_packed_size
                     (const PBlock   *message);
size_t pblock__pack
                     (const PBlock   *message,
                      uint8_t             *out);
size_t pblock__pack_to_buffer
                     (const PBlock   *message,
                      ProtobufCBuffer     *buffer);
PBlock *
       pblock__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pblock__free_unpacked
                     (PBlock *message,
                      ProtobufCAllocator *allocator);
/* PWallet methods */
void   pwallet__init
                     (PWallet         *message);
size_t pwallet__get_packed_size
                     (const PWallet   *message);
size_t pwallet__pack
                     (const PWallet   *message,
                      uint8_t             *out);
size_t pwallet__pack_to_buffer
                     (const PWallet   *message,
                      ProtobufCBuffer     *buffer);
PWallet *
       pwallet__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pwallet__free_unpacked
                     (PWallet *message,
                      ProtobufCAllocator *allocator);
/* PEmpty methods */
void   pempty__init
                     (PEmpty         *message);
size_t pempty__get_packed_size
                     (const PEmpty   *message);
size_t pempty__pack
                     (const PEmpty   *message,
                      uint8_t             *out);
size_t pempty__pack_to_buffer
                     (const PEmpty   *message,
                      ProtobufCBuffer     *buffer);
PEmpty *
       pempty__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pempty__free_unpacked
                     (PEmpty *message,
                      ProtobufCAllocator *allocator);
/* PPacket methods */
void   ppacket__init
                     (PPacket         *message);
size_t ppacket__get_packed_size
                     (const PPacket   *message);
size_t ppacket__pack
                     (const PPacket   *message,
                      uint8_t             *out);
size_t ppacket__pack_to_buffer
                     (const PPacket   *message,
                      ProtobufCBuffer     *buffer);
PPacket *
       ppacket__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ppacket__free_unpacked
                     (PPacket *message,
                      ProtobufCAllocator *allocator);
/* MIncomingBlock methods */
void   mincoming_block__init
                     (MIncomingBlock         *message);
size_t mincoming_block__get_packed_size
                     (const MIncomingBlock   *message);
size_t mincoming_block__pack
                     (const MIncomingBlock   *message,
                      uint8_t             *out);
size_t mincoming_block__pack_to_buffer
                     (const MIncomingBlock   *message,
                      ProtobufCBuffer     *buffer);
MIncomingBlock *
       mincoming_block__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   mincoming_block__free_unpacked
                     (MIncomingBlock *message,
                      ProtobufCAllocator *allocator);
/* MIncomingTransaction methods */
void   mincoming_transaction__init
                     (MIncomingTransaction         *message);
size_t mincoming_transaction__get_packed_size
                     (const MIncomingTransaction   *message);
size_t mincoming_transaction__pack
                     (const MIncomingTransaction   *message,
                      uint8_t             *out);
size_t mincoming_transaction__pack_to_buffer
                     (const MIncomingTransaction   *message,
                      ProtobufCBuffer     *buffer);
MIncomingTransaction *
       mincoming_transaction__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   mincoming_transaction__free_unpacked
                     (MIncomingTransaction *message,
                      ProtobufCAllocator *allocator);
/* MGetBlockHeightRequest methods */
void   mget_block_height_request__init
                     (MGetBlockHeightRequest         *message);
size_t mget_block_height_request__get_packed_size
                     (const MGetBlockHeightRequest   *message);
size_t mget_block_height_request__pack
                     (const MGetBlockHeightRequest   *message,
                      uint8_t             *out);
size_t mget_block_height_request__pack_to_buffer
                     (const MGetBlockHeightRequest   *message,
                      ProtobufCBuffer     *buffer);
MGetBlockHeightRequest *
       mget_block_height_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   mget_block_height_request__free_unpacked
                     (MGetBlockHeightRequest *message,
                      ProtobufCAllocator *allocator);
/* MGetBlockHeightResponse methods */
void   mget_block_height_response__init
                     (MGetBlockHeightResponse         *message);
size_t mget_block_height_response__get_packed_size
                     (const MGetBlockHeightResponse   *message);
size_t mget_block_height_response__pack
                     (const MGetBlockHeightResponse   *message,
                      uint8_t             *out);
size_t mget_block_height_response__pack_to_buffer
                     (const MGetBlockHeightResponse   *message,
                      ProtobufCBuffer     *buffer);
MGetBlockHeightResponse *
       mget_block_height_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   mget_block_height_response__free_unpacked
                     (MGetBlockHeightResponse *message,
                      ProtobufCAllocator *allocator);
/* MGetBlockRequest methods */
void   mget_block_request__init
                     (MGetBlockRequest         *message);
size_t mget_block_request__get_packed_size
                     (const MGetBlockRequest   *message);
size_t mget_block_request__pack
                     (const MGetBlockRequest   *message,
                      uint8_t             *out);
size_t mget_block_request__pack_to_buffer
                     (const MGetBlockRequest   *message,
                      ProtobufCBuffer     *buffer);
MGetBlockRequest *
       mget_block_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   mget_block_request__free_unpacked
                     (MGetBlockRequest *message,
                      ProtobufCAllocator *allocator);
/* MGetBlockResponse methods */
void   mget_block_response__init
                     (MGetBlockResponse         *message);
size_t mget_block_response__get_packed_size
                     (const MGetBlockResponse   *message);
size_t mget_block_response__pack
                     (const MGetBlockResponse   *message,
                      uint8_t             *out);
size_t mget_block_response__pack_to_buffer
                     (const MGetBlockResponse   *message,
                      ProtobufCBuffer     *buffer);
MGetBlockResponse *
       mget_block_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   mget_block_response__free_unpacked
                     (MGetBlockResponse *message,
                      ProtobufCAllocator *allocator);
/* MGetTransactionRequest methods */
void   mget_transaction_request__init
                     (MGetTransactionRequest         *message);
size_t mget_transaction_request__get_packed_size
                     (const MGetTransactionRequest   *message);
size_t mget_transaction_request__pack
                     (const MGetTransactionRequest   *message,
                      uint8_t             *out);
size_t mget_transaction_request__pack_to_buffer
                     (const MGetTransactionRequest   *message,
                      ProtobufCBuffer     *buffer);
MGetTransactionRequest *
       mget_transaction_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   mget_transaction_request__free_unpacked
                     (MGetTransactionRequest *message,
                      ProtobufCAllocator *allocator);
/* MGetTransactionResponse methods */
void   mget_transaction_response__init
                     (MGetTransactionResponse         *message);
size_t mget_transaction_response__get_packed_size
                     (const MGetTransactionResponse   *message);
size_t mget_transaction_response__pack
                     (const MGetTransactionResponse   *message,
                      uint8_t             *out);
size_t mget_transaction_response__pack_to_buffer
                     (const MGetTransactionResponse   *message,
                      ProtobufCBuffer     *buffer);
MGetTransactionResponse *
       mget_transaction_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   mget_transaction_response__free_unpacked
                     (MGetTransactionResponse *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*PInputTransaction_Closure)
                 (const PInputTransaction *message,
                  void *closure_data);
typedef void (*POutputTransaction_Closure)
                 (const POutputTransaction *message,
                  void *closure_data);
typedef void (*PTransaction_Closure)
                 (const PTransaction *message,
                  void *closure_data);
typedef void (*PUnspentOutputTransaction_Closure)
                 (const PUnspentOutputTransaction *message,
                  void *closure_data);
typedef void (*PUnspentTransaction_Closure)
                 (const PUnspentTransaction *message,
                  void *closure_data);
typedef void (*PBlock_Closure)
                 (const PBlock *message,
                  void *closure_data);
typedef void (*PWallet_Closure)
                 (const PWallet *message,
                  void *closure_data);
typedef void (*PEmpty_Closure)
                 (const PEmpty *message,
                  void *closure_data);
typedef void (*PPacket_Closure)
                 (const PPacket *message,
                  void *closure_data);
typedef void (*MIncomingBlock_Closure)
                 (const MIncomingBlock *message,
                  void *closure_data);
typedef void (*MIncomingTransaction_Closure)
                 (const MIncomingTransaction *message,
                  void *closure_data);
typedef void (*MGetBlockHeightRequest_Closure)
                 (const MGetBlockHeightRequest *message,
                  void *closure_data);
typedef void (*MGetBlockHeightResponse_Closure)
                 (const MGetBlockHeightResponse *message,
                  void *closure_data);
typedef void (*MGetBlockRequest_Closure)
                 (const MGetBlockRequest *message,
                  void *closure_data);
typedef void (*MGetBlockResponse_Closure)
                 (const MGetBlockResponse *message,
                  void *closure_data);
typedef void (*MGetTransactionRequest_Closure)
                 (const MGetTransactionRequest *message,
                  void *closure_data);
typedef void (*MGetTransactionResponse_Closure)
                 (const MGetTransactionResponse *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor pinput_transaction__descriptor;
extern const ProtobufCMessageDescriptor poutput_transaction__descriptor;
extern const ProtobufCMessageDescriptor ptransaction__descriptor;
extern const ProtobufCMessageDescriptor punspent_output_transaction__descriptor;
extern const ProtobufCMessageDescriptor punspent_transaction__descriptor;
extern const ProtobufCMessageDescriptor pblock__descriptor;
extern const ProtobufCMessageDescriptor pwallet__descriptor;
extern const ProtobufCMessageDescriptor pempty__descriptor;
extern const ProtobufCMessageDescriptor ppacket__descriptor;
extern const ProtobufCMessageDescriptor mincoming_block__descriptor;
extern const ProtobufCMessageDescriptor mincoming_transaction__descriptor;
extern const ProtobufCMessageDescriptor mget_block_height_request__descriptor;
extern const ProtobufCMessageDescriptor mget_block_height_response__descriptor;
extern const ProtobufCMessageDescriptor mget_block_request__descriptor;
extern const ProtobufCMessageDescriptor mget_block_response__descriptor;
extern const ProtobufCMessageDescriptor mget_transaction_request__descriptor;
extern const ProtobufCMessageDescriptor mget_transaction_response__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_vulkan_2eproto__INCLUDED */
