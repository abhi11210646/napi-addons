#include <napi.h>

Napi::Value Sum(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();
  int arg0 = info[0].As<Napi::Number>();
   int res = 0, i;
  for (i = 1; i <= arg0; i++)
    res += i;
  return Napi::Number::New(env, res);
}
