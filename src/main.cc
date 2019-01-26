#include <napi.h>
#include "sum.h"
#include "factorial.h"

using namespace Napi;


Napi::Object Init(Napi::Env env, Napi::Object exports) {
  exports.Set(Napi::String::New(env, "sum"),
        Napi::Function::New(env, Sum));
  exports.Set(Napi::String::New(env, "factorial"),
        Napi::Function::New(env, Factorial));
  return exports;
}

NODE_API_MODULE(addon, Init)
