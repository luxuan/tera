// Copyright (c) 2015, Baidu.com, Inc. All Rights Reserved
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef TERA_MASTER_MASTER_CLIENT_H_
#define TERA_MASTER_MASTER_CLIENT_H_

#include <string>

#include "proto/master_rpc.pb.h"
#include "proto/rpc_client.h"

DECLARE_int32(tera_rpc_timeout_period);

namespace tera {
namespace master {

class MasterClient : public RpcClient<MasterServer::Stub> {
 public:
  MasterClient(const std::string& server_addr = "",
               int32_t rpc_timeout = FLAGS_tera_rpc_timeout_period);
  virtual ~MasterClient();

  virtual bool CreateTable(const CreateTableRequest* request, CreateTableResponse* response);

  virtual bool DeleteTable(const DeleteTableRequest* request, DeleteTableResponse* response);

  virtual bool DisableTable(const DisableTableRequest* request, DisableTableResponse* response);

  virtual bool EnableTable(const EnableTableRequest* request, EnableTableResponse* response);

  virtual bool UpdateTable(const UpdateTableRequest* request, UpdateTableResponse* response);

  virtual bool UpdateCheck(const UpdateCheckRequest* request, UpdateCheckResponse* response);

  virtual bool SearchTable(const SearchTableRequest* request, SearchTableResponse* response);

  virtual bool ShowTables(const ShowTablesRequest* request, ShowTablesResponse* response);

  virtual bool ShowTabletNodes(const ShowTabletNodesRequest* request,
                               ShowTabletNodesResponse* response);

  virtual bool Register(const RegisterRequest* request, RegisterResponse* response);

  virtual bool Report(const ReportRequest* request, ReportResponse* response);

  virtual bool CmdCtrl(const CmdCtrlRequest* request, CmdCtrlResponse* response);

  virtual bool OperateUser(const OperateUserRequest* request, OperateUserResponse* response);

 private:
  int32_t rpc_timeout_;
};

}  // namespace
}  // namespace

#endif  // TERA_MASTER_MASTER_CLIENT_H_
