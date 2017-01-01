/*
 *  Copyright (c) 2016, https://github.com/nebula-im
 *  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// TODO(@benqi): 使用zrpc-code-gen代码生成工具自动生成

#ifndef	MESSENGER_ZRPC_MESSAGING_SERVICE_H_
#define	MESSENGER_ZRPC_MESSAGING_SERVICE_H_

#include "proto/api/cc/misc.pb.h"
#include "proto/api/cc/messaging.pb.h"
#include "proto/api/cc/groups.pb.h"

#include "base/base_zrpc_service.h"

class ZRpcMessagingService : public BaseZRpcService {
public:
  virtual ~ZRpcMessagingService() = default;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  virtual int SendMessage(const zproto::SendMessageReq& request, zproto::SeqDateRsp* response);
  virtual int MessageReceived(const zproto::MessageReceivedReq& request, zproto::VoidRsp* response);
  virtual int MessageRead(const zproto::MessageReadReq& request, zproto::VoidRsp* response);
  virtual int DeleteMessage(const zproto::DeleteMessageReq& request, zproto::SeqRsp* response);
  virtual int ClearChat(const zproto::ClearChatReq& request, zproto::SeqRsp* response);
  virtual int DeleteChat(const zproto::DeleteChatReq& request, zproto::SeqRsp* response);

  virtual int LoadHistory(const zproto::LoadHistoryReq& request, zproto::LoadHistoryRsp* response);
};

#endif

