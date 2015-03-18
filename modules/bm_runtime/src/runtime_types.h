/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef runtime_TYPES_H
#define runtime_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace bm_runtime {

struct TableOperationErrorCode {
  enum type {
    TABLE_FULL = 1,
    INVALID_HANDLE = 2,
    ERROR = 3
  };
};

extern const std::map<int, const char*> _TableOperationErrorCode_VALUES_TO_NAMES;

typedef int32_t BmEntryHandle;

typedef std::vector<std::string>  BmActionData;

typedef struct _InvalidTableOperation__isset {
  _InvalidTableOperation__isset() : what(false) {}
  bool what;
} _InvalidTableOperation__isset;

class InvalidTableOperation : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "8BBB3D0C3B370CB38F2D1340BB79F0AA";
  static const uint8_t binary_fingerprint[16]; // = {0x8B,0xBB,0x3D,0x0C,0x3B,0x37,0x0C,0xB3,0x8F,0x2D,0x13,0x40,0xBB,0x79,0xF0,0xAA};

  InvalidTableOperation() : what((TableOperationErrorCode::type)0) {
  }

  virtual ~InvalidTableOperation() throw() {}

  TableOperationErrorCode::type what;

  _InvalidTableOperation__isset __isset;

  void __set_what(const TableOperationErrorCode::type val) {
    what = val;
  }

  bool operator == (const InvalidTableOperation & rhs) const
  {
    if (!(what == rhs.what))
      return false;
    return true;
  }
  bool operator != (const InvalidTableOperation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidTableOperation & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(InvalidTableOperation &a, InvalidTableOperation &b);

} // namespace

#endif
