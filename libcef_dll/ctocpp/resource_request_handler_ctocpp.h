// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=7d93191b6f6cc58914df4909e3170d11fc826452$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_RESOURCE_REQUEST_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_RESOURCE_REQUEST_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_resource_request_handler_capi.h"
#include "include/cef_resource_request_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefResourceRequestHandlerCToCpp
    : public CefCToCppRefCounted<CefResourceRequestHandlerCToCpp,
                                 CefResourceRequestHandler,
                                 cef_resource_request_handler_t> {
 public:
  CefResourceRequestHandlerCToCpp();
  virtual ~CefResourceRequestHandlerCToCpp();

  // CefResourceRequestHandler methods.
  CefRefPtr<CefCookieAccessFilter> GetCookieAccessFilter(
      CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame,
      CefRefPtr<CefRequest> request) override;
  ReturnValue OnBeforeResourceLoad(CefRefPtr<CefBrowser> browser,
                                   CefRefPtr<CefFrame> frame,
                                   CefRefPtr<CefRequest> request,
                                   CefRefPtr<CefCallback> callback) override;
  CefRefPtr<CefResourceHandler> GetResourceHandler(
      CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame,
      CefRefPtr<CefRequest> request) override;
  void OnResourceRedirect(CefRefPtr<CefBrowser> browser,
                          CefRefPtr<CefFrame> frame,
                          CefRefPtr<CefRequest> request,
                          CefRefPtr<CefResponse> response,
                          CefString& new_url) override;
  bool OnResourceResponse(CefRefPtr<CefBrowser> browser,
                          CefRefPtr<CefFrame> frame,
                          CefRefPtr<CefRequest> request,
                          CefRefPtr<CefResponse> response) override;
  CefRefPtr<CefResponseFilter> GetResourceResponseFilter(
      CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame,
      CefRefPtr<CefRequest> request,
      CefRefPtr<CefResponse> response) override;
  void OnResourceLoadComplete(CefRefPtr<CefBrowser> browser,
                              CefRefPtr<CefFrame> frame,
                              CefRefPtr<CefRequest> request,
                              CefRefPtr<CefResponse> response,
                              URLRequestStatus status,
                              int64_t received_content_length) override;
  void OnProtocolExecution(CefRefPtr<CefBrowser> browser,
                           CefRefPtr<CefFrame> frame,
                           CefRefPtr<CefRequest> request,
                           bool& allow_os_execution) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_RESOURCE_REQUEST_HANDLER_CTOCPP_H_
