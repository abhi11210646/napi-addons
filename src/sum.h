#include <napi.h>

Napi::Value Sum(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();

  if (info.Length() < 2)
  {
    Napi::TypeError::New(env, "WrongNumber of arguments.").ThrowAsJavaScriptException();
    return env.Null();
  }

  if (!(info[0].IsNumber() && info[1].IsNumber()))
  {
    Napi::TypeError::New(env, "Only numeric arguments allowed.").ThrowAsJavaScriptException();
    return env.Null();
  }

  double x = info[0].As<Napi::Number>().DoubleValue();
  double y = info[1].As<Napi::Number>().DoubleValue();
  return Napi::Number::New(env, x + y);
}

Napi::Value SumCB(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();
  if (!info[2].IsFunction())
  {
    Napi::TypeError::New(env, "Callback function not passed").ThrowAsJavaScriptException();
    return env.Null();
  }
  Napi::Function cb = info[2].As<Napi::Function>();
  cb.Call(env.Global(), {Sum(info)});
  return env.Null();
}
