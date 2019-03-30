#include <napi.h>
#include "utility.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports)
{
      exports.Set(Napi::String::New(env, "sum"), Napi::Function::New(env, Sum));
      exports.Set(Napi::String::New(env, "sumCB"), Napi::Function::New(env, SumCB));
      exports.Set(Napi::String::New(env, "convertToObj"), Napi::Function::New(env, convertToObj));
      return exports;
}

NODE_API_MODULE(addon, InitAll)
