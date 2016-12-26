/*
 *  Copyright (c) 2016, https://github.com/nebula-im/imengine
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

#ifndef IMENGINGE_DAL_GROUP_DAO_H_
#define IMENGINGE_DAL_GROUP_DAO_H_

#include "dal/group_do.h"

struct GroupDAO : public BaseDAO {
  virtual ~GroupDAO() = default;
  
  static GroupDAO& GetInstance();

  virtual int CheckExists(const std::string& creator_user_id, uint64_t client_group_id) = 0;
  virtual int64_t Create(GroupDO& group) = 0;
  virtual int GetGroup(const std::string& group_id, GroupDO& group) = 0;
};

#endif
