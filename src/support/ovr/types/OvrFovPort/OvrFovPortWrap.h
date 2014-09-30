/*
 * Copyright (c) 2013-2014 Geocent - Published under the MIT License.
 * See LICENSE for the full text of the license.
 */

#ifndef SRC_SUPPORT_OVR_TYPES_OVRFOVPORT_OVRFOVPORTWRAP_H_
#define SRC_SUPPORT_OVR_TYPES_OVRFOVPORT_OVRFOVPORTWRAP_H_

#include <node.h>
#include <nan/nan.h>

#include <OVR_CAPI.h>

/*! \class OvrFovPortWrap
 * 
 * Node wrapped object class for OvrFovPort.
 */
class OvrFovPortWrap : public node::ObjectWrap {
 private:
    ovrFovPort _ovrFovPort;

    OvrFovPortWrap();
    ~OvrFovPortWrap();
    static v8::Persistent<v8::Function> constructor;
    static NAN_GETTER(GetObjectProperty);

 public:
    static void Initialize(v8::Handle<v8::Object> target);
    static NAN_METHOD(New);
    static v8::Handle<v8::Value> NewInstance();
    ovrFovPort* GetWrapped();
};

#endif  // SRC_SUPPORT_OVR_TYPES_OVRFOVPORT_OVRFOVPORTWRAP_H_