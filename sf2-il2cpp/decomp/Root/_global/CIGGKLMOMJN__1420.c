// TypeDefIndex 1420
// Namespace: 
// [Extension]
// public static class CIGGKLMOMJN
// Fields:

// ===== public static byte[] OLPAJOBJKAP(IMessage JPLEIGKMFDA)  [RVA 0x317F748]
// CIGGKLMOMJN$$OLPAJOBJKAP @ RVA 0x317F748

System_Byte_array *
CIGGKLMOMJN__OLPAJOBJKAP(Google_Protobuf_IMessage_o *JPLEIGKMFDA,MethodInfo *method)

{
  System_IO_MemoryStream_o *__this;
  System_Byte_array *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045669b0 & 1) == 0) {
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    DAT_045669b0 = 1;
    method = extraout_x1;
  }
  __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo,method);
  System_IO_MemoryStream___ctor(__this,(MethodInfo *)0x0);
  Google_Protobuf_MessageExtensions__WriteTo
            (JPLEIGKMFDA,(System_IO_Stream_o *)__this,(MethodInfo *)0x0);
  if (__this != (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0327f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar1 = (System_Byte_array *)
             (*(__this->klass->vtable)._42_ToArray.methodPtr)
                       (__this,(__this->klass->vtable)._42_ToArray.method);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static IMessage GIGMOMOGDAC(byte[] LLAICPOILGF, Type ACCIHBHMFPN)  [RVA 0x317F7C4]
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

