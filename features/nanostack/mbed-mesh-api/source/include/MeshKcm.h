/*
 * Copyright (c) 2020 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __INCLUDE_MESH_KCM__
#define __INCLUDE_MESH_KCM__
#include "ns_types.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * \brief Initialize Wi-SUN network name
 *
 * \param network_name_buf Buffer for the network name
 * \param network_name_buf_len Length of provided buffer
 *
 */
void mesh_kcm_wisun_network_name_init(char *network_name_buf, size_t network_name_buf_len);


#ifdef __cplusplus
}
#endif
#endif /* __INCLUDE_MESH_KCM__ */
