/*
 *
 *    Copyright (c) 2020-2022 Project CHIP Authors
 *    Copyright (c) 2020 Google LLC.
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 *    @file
 *          Platform-specific configuration overrides for the CHIP Inet
 *          Layer on NXP platforms using the NXP SDK.
 *
 */

#pragma once

#include <stdint.h>

// ==================== Platform Adaptations ====================

#ifndef INET_CONFIG_ERROR_TYPE
#define INET_CONFIG_ERROR_TYPE int32_t
#endif // INET_CONFIG_ERROR_TYPE

#ifndef INET_CONFIG_NO_ERROR
#define INET_CONFIG_NO_ERROR 0
#endif // INET_CONFIG_NO_ERROR

#ifndef INET_CONFIG_ERROR_MIN
#define INET_CONFIG_ERROR_MIN 1000000
#endif // INET_CONFIG_ERROR_MIN

#ifndef INET_CONFIG_ERROR_MAX
#define INET_CONFIG_ERROR_MAX 1000999
#endif // INET_CONFIG_ERROR_MAX

// ========== Platform-specific Configuration Overrides =========

#ifndef INET_CONFIG_NUM_TCP_ENDPOINTS
#define INET_CONFIG_NUM_TCP_ENDPOINTS 4
#endif // INET_CONFIG_NUM_TCP_ENDPOINTS

#ifndef INET_CONFIG_NUM_UDP_ENDPOINTS
#define INET_CONFIG_NUM_UDP_ENDPOINTS 4
#endif // INET_CONFIG_NUM_UDP_ENDPOINTS
