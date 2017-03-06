// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: api.proto
#ifndef GRPC_api_2eproto__INCLUDED
#define GRPC_api_2eproto__INCLUDED

#include "api.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace Api {

class TransactionRepository GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status find(::grpc::ClientContext* context, const ::Api::Query& request, ::Api::TransactionResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Api::TransactionResponse>> Asyncfind(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Api::TransactionResponse>>(AsyncfindRaw(context, request, cq));
    }
    virtual ::grpc::Status fetch(::grpc::ClientContext* context, const ::Api::Query& request, ::Api::TransactionResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Api::TransactionResponse>> Asyncfetch(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Api::TransactionResponse>>(AsyncfetchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::Api::Query, ::Api::Transaction>> fetchStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::Api::Query, ::Api::Transaction>>(fetchStreamRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::Api::Query, ::Api::Transaction>> AsyncfetchStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::Api::Query, ::Api::Transaction>>(AsyncfetchStreamRaw(context, cq, tag));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Api::TransactionResponse>* AsyncfindRaw(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Api::TransactionResponse>* AsyncfetchRaw(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::Api::Query, ::Api::Transaction>* fetchStreamRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::Api::Query, ::Api::Transaction>* AsyncfetchStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status find(::grpc::ClientContext* context, const ::Api::Query& request, ::Api::TransactionResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Api::TransactionResponse>> Asyncfind(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Api::TransactionResponse>>(AsyncfindRaw(context, request, cq));
    }
    ::grpc::Status fetch(::grpc::ClientContext* context, const ::Api::Query& request, ::Api::TransactionResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Api::TransactionResponse>> Asyncfetch(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Api::TransactionResponse>>(AsyncfetchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::Api::Query, ::Api::Transaction>> fetchStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::Api::Query, ::Api::Transaction>>(fetchStreamRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::Api::Query, ::Api::Transaction>> AsyncfetchStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::Api::Query, ::Api::Transaction>>(AsyncfetchStreamRaw(context, cq, tag));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::Api::TransactionResponse>* AsyncfindRaw(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::Api::TransactionResponse>* AsyncfetchRaw(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientReaderWriter< ::Api::Query, ::Api::Transaction>* fetchStreamRaw(::grpc::ClientContext* context) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReaderWriter< ::Api::Query, ::Api::Transaction>* AsyncfetchStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_find_;
    const ::grpc::RpcMethod rpcmethod_fetch_;
    const ::grpc::RpcMethod rpcmethod_fetchStream_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status find(::grpc::ServerContext* context, const ::Api::Query* request, ::Api::TransactionResponse* response);
    virtual ::grpc::Status fetch(::grpc::ServerContext* context, const ::Api::Query* request, ::Api::TransactionResponse* response);
    virtual ::grpc::Status fetchStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::Api::Transaction, ::Api::Query>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_find : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_find() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_find() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find(::grpc::ServerContext* context, const ::Api::Query* request, ::Api::TransactionResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestfind(::grpc::ServerContext* context, ::Api::Query* request, ::grpc::ServerAsyncResponseWriter< ::Api::TransactionResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_fetch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_fetch() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_fetch() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status fetch(::grpc::ServerContext* context, const ::Api::Query* request, ::Api::TransactionResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestfetch(::grpc::ServerContext* context, ::Api::Query* request, ::grpc::ServerAsyncResponseWriter< ::Api::TransactionResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_fetchStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_fetchStream() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_fetchStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status fetchStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::Api::Transaction, ::Api::Query>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestfetchStream(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::Api::Transaction, ::Api::Query>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(2, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_find<WithAsyncMethod_fetch<WithAsyncMethod_fetchStream<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_find : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_find() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_find() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find(::grpc::ServerContext* context, const ::Api::Query* request, ::Api::TransactionResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_fetch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_fetch() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_fetch() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status fetch(::grpc::ServerContext* context, const ::Api::Query* request, ::Api::TransactionResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_fetchStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_fetchStream() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_fetchStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status fetchStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::Api::Transaction, ::Api::Query>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

class AssetRepository GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status find(::grpc::ClientContext* context, const ::Api::Query& request, ::Api::AssetResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Api::AssetResponse>> Asyncfind(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Api::AssetResponse>>(AsyncfindRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Api::AssetResponse>* AsyncfindRaw(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status find(::grpc::ClientContext* context, const ::Api::Query& request, ::Api::AssetResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Api::AssetResponse>> Asyncfind(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Api::AssetResponse>>(AsyncfindRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::Api::AssetResponse>* AsyncfindRaw(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_find_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status find(::grpc::ServerContext* context, const ::Api::Query* request, ::Api::AssetResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_find : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_find() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_find() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find(::grpc::ServerContext* context, const ::Api::Query* request, ::Api::AssetResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestfind(::grpc::ServerContext* context, ::Api::Query* request, ::grpc::ServerAsyncResponseWriter< ::Api::AssetResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_find<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_find : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_find() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_find() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find(::grpc::ServerContext* context, const ::Api::Query* request, ::Api::AssetResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

class Sumeragi GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    //  =+===+=
    // ==+=T=+==
    //   |   |
    //   |   |   This is gate at the entrance of sumeragi...
    virtual ::grpc::Status Torii(::grpc::ClientContext* context, const ::Api::Transaction& request, ::Api::StatusResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Api::StatusResponse>> AsyncTorii(::grpc::ClientContext* context, const ::Api::Transaction& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Api::StatusResponse>>(AsyncToriiRaw(context, request, cq));
    }
    // sumeragi uses.
    virtual ::grpc::Status Verify(::grpc::ClientContext* context, const ::Api::ConsensusEvent& request, ::Api::StatusResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Api::StatusResponse>> AsyncVerify(::grpc::ClientContext* context, const ::Api::ConsensusEvent& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Api::StatusResponse>>(AsyncVerifyRaw(context, request, cq));
    }
    // WIP It used by Hijiri. Name is think in progress
    virtual ::grpc::Status Kagami(::grpc::ClientContext* context, const ::Api::Query& request, ::Api::StatusResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Api::StatusResponse>> AsyncKagami(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Api::StatusResponse>>(AsyncKagamiRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Api::StatusResponse>* AsyncToriiRaw(::grpc::ClientContext* context, const ::Api::Transaction& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Api::StatusResponse>* AsyncVerifyRaw(::grpc::ClientContext* context, const ::Api::ConsensusEvent& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Api::StatusResponse>* AsyncKagamiRaw(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Torii(::grpc::ClientContext* context, const ::Api::Transaction& request, ::Api::StatusResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Api::StatusResponse>> AsyncTorii(::grpc::ClientContext* context, const ::Api::Transaction& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Api::StatusResponse>>(AsyncToriiRaw(context, request, cq));
    }
    ::grpc::Status Verify(::grpc::ClientContext* context, const ::Api::ConsensusEvent& request, ::Api::StatusResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Api::StatusResponse>> AsyncVerify(::grpc::ClientContext* context, const ::Api::ConsensusEvent& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Api::StatusResponse>>(AsyncVerifyRaw(context, request, cq));
    }
    ::grpc::Status Kagami(::grpc::ClientContext* context, const ::Api::Query& request, ::Api::StatusResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Api::StatusResponse>> AsyncKagami(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Api::StatusResponse>>(AsyncKagamiRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::Api::StatusResponse>* AsyncToriiRaw(::grpc::ClientContext* context, const ::Api::Transaction& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::Api::StatusResponse>* AsyncVerifyRaw(::grpc::ClientContext* context, const ::Api::ConsensusEvent& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::Api::StatusResponse>* AsyncKagamiRaw(::grpc::ClientContext* context, const ::Api::Query& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_Torii_;
    const ::grpc::RpcMethod rpcmethod_Verify_;
    const ::grpc::RpcMethod rpcmethod_Kagami_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    //  =+===+=
    // ==+=T=+==
    //   |   |
    //   |   |   This is gate at the entrance of sumeragi...
    virtual ::grpc::Status Torii(::grpc::ServerContext* context, const ::Api::Transaction* request, ::Api::StatusResponse* response);
    // sumeragi uses.
    virtual ::grpc::Status Verify(::grpc::ServerContext* context, const ::Api::ConsensusEvent* request, ::Api::StatusResponse* response);
    // WIP It used by Hijiri. Name is think in progress
    virtual ::grpc::Status Kagami(::grpc::ServerContext* context, const ::Api::Query* request, ::Api::StatusResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Torii : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Torii() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Torii() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Torii(::grpc::ServerContext* context, const ::Api::Transaction* request, ::Api::StatusResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestTorii(::grpc::ServerContext* context, ::Api::Transaction* request, ::grpc::ServerAsyncResponseWriter< ::Api::StatusResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Verify : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Verify() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Verify() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Verify(::grpc::ServerContext* context, const ::Api::ConsensusEvent* request, ::Api::StatusResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestVerify(::grpc::ServerContext* context, ::Api::ConsensusEvent* request, ::grpc::ServerAsyncResponseWriter< ::Api::StatusResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Kagami : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Kagami() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_Kagami() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Kagami(::grpc::ServerContext* context, const ::Api::Query* request, ::Api::StatusResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestKagami(::grpc::ServerContext* context, ::Api::Query* request, ::grpc::ServerAsyncResponseWriter< ::Api::StatusResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Torii<WithAsyncMethod_Verify<WithAsyncMethod_Kagami<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Torii : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Torii() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Torii() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Torii(::grpc::ServerContext* context, const ::Api::Transaction* request, ::Api::StatusResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Verify : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Verify() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Verify() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Verify(::grpc::ServerContext* context, const ::Api::ConsensusEvent* request, ::Api::StatusResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Kagami : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Kagami() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_Kagami() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Kagami(::grpc::ServerContext* context, const ::Api::Query* request, ::Api::StatusResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace Api


#endif  // GRPC_api_2eproto__INCLUDED
