// ELBBEAGGAOH$$.ctor @ RVA 0x324BAA8

void ELBBEAGGAOH___ctor(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o **ppGVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_045670f8 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_TypeInfo);
    DAT_045670f8 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_ByteString_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04561f53 == '\0') {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04561f53 = '\x01';
    method = extraout_x1_01;
  }
  if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_ByteString_TypeInfo,method);
  }
  (__this->fields).DKOBFIICAFM = Google_Protobuf_ByteString_TypeInfo->static_fields->empty;
  thunk_FUN_01c20e04();
  __this_00 = (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>__ctor__);
  ppGVar1 = &(__this->fields).OOPOHLJPBHE;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

