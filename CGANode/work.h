#pragma once 

void StartWork(const Nan::FunctionCallbackInfo<v8::Value>& info);
void CraftItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
void AssessItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
void AsyncWaitWorkingResult(const Nan::FunctionCallbackInfo<v8::Value>& info);
void SetImmediateDoneWork(const Nan::FunctionCallbackInfo<v8::Value>& info);
void GetCraftStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
void GetImmediateDoneWorkState(const Nan::FunctionCallbackInfo<v8::Value>& info);