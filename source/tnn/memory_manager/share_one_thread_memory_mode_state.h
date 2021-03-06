// Tencent is pleased to support the open source community by making TNN available.
//
// Copyright (C) 2020 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

#ifndef TNN_SOURCE_TNN_MEMORY_MANAGER_SHARE_ONE_THREAD_MEMORY_MODE_STATE_H_
#define TNN_SOURCE_TNN_MEMORY_MANAGER_SHARE_ONE_THREAD_MEMORY_MODE_STATE_H_

#include <thread>
#include "tnn/memory_manager/memory_mode_state.h"

namespace TNN_NS {

class ShareOneThreadMemoryModeState : public MemoryModeState {
public:
    // @brief default constructor
    ShareOneThreadMemoryModeState();

    // @brief get memory mode state status, different memory mode may
    // need different conditions.
    virtual Status GetStatus();

private:
    std::thread::id init_thread_id_;
};

}  // namespace TNN_NS

#endif  // TNN_SOURCE_TNN_MEMORY_MANAGER_SHARE_ONE_THREAD_MEMORY_MODE_STATE_H_
