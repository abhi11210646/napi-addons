#include <napi.h>
#include "sum.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  exports.Set(Napi::String::New(env, "sum"),
        Napi::Function::New(env, Sum));
  return exports;
}

NODE_API_MODULE(addon, InitAll)
