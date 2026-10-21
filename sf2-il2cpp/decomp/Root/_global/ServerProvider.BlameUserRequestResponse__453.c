// TypeDefIndex 453
// Namespace: 
// [Serializable]
// private class ServerProvider.BlameUserRequestResponse
// Fields:
//   public const string data_ok = "ok";
//   public const string data_error = "error";
//   public string data; // 0x10
//   public string value; // 0x18

// ===== public void .ctor()  [RVA 0x357958C]
// Core.Network.ServerProvider.BlameUserRequestResponse$$.ctor @ RVA 0x357958C

void Core_Network_ServerProvider_BlameUserRequestResponse___ctor
               (Core_Network_ServerProvider_BlameUserRequestResponse_o *__this,MethodInfo *method)

{
  if ((DAT_04568cb4 & 1) == 0) {
    FUN_01bab630(&StringLiteral_18068/*"error"*/);
    DAT_04568cb4 = 1;
  }
  (__this->fields).data = StringLiteral_18068/*"error"*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

