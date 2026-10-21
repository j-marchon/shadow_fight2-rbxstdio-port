// CIGGKLMOMJN$$GIGMOMOGDAC @ RVA 0x317F7C4

Google_Protobuf_IMessage_o *
CIGGKLMOMJN__GIGMOMOGDAC
          (System_Byte_array *LLAICPOILGF,System_Type_o *ACCIHBHMFPN,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Google_Protobuf_IMessage_o *message;
  
  if ((DAT_045669b1 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_IMessage_TypeInfo);
    DAT_045669b1 = 1;
  }
  if (LLAICPOILGF == (System_Byte_array *)0x0) {
    message = (Google_Protobuf_IMessage_o *)0x0;
  }
  else {
    pIVar1 = System_Activator__CreateInstance(ACCIHBHMFPN,(MethodInfo *)0x0);
    message = (Google_Protobuf_IMessage_o *)
              thunk_FUN_01bda71c(pIVar1,Google_Protobuf_IMessage_TypeInfo);
    Google_Protobuf_MessageExtensions__MergeFrom(message,LLAICPOILGF,(MethodInfo *)0x0);
  }
  return message;
}

