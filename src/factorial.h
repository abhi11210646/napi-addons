#include <napi.h>
using namespace Napi;

Napi::Value Factorial(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int arg0 = info[0].As<Napi::Number>().DoubleValue();
  long long int res = 1, i; 
  for (i = 2; i <= arg0; i++) res *= i;
  return Napi::Number::New(env, res);
}

