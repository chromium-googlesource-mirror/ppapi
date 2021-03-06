// Copyright (c) 2010 The Native Client Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef PPAPI_PROXY_PLUGIN_URL_RESPONSE_INFO_H_
#define PPAPI_PROXY_PLUGIN_URL_RESPONSE_INFO_H_

#include "native_client/src/include/nacl_macros.h"
#include "ppapi/c/dev/ppb_url_response_info_dev.h"

namespace ppapi_proxy {

// Implements the plugin (i.e., .nexe) side of the PPB_URLResponseInfo
// interface.
class PluginURLResponseInfo {
 public:
  static const PPB_URLResponseInfo_Dev* GetInterface();

 private:
  NACL_DISALLOW_COPY_AND_ASSIGN(PluginURLResponseInfo);
};

}  // namespace ppapi_proxy

#endif  // PPAPI_PROXY_PLUGIN_URL_RESPONSE_INFO_H_
