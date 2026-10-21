// BPBGAAHBFKH$$.ctor @ RVA 0x35CF848

void BPBGAAHBFKH___ctor(BPBGAAHBFKH_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568fd8 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_TypeInfo);
    DAT_04568fd8 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>__ctor__);
  ppGVar1 = &(__this->fields).IGPJEDLPAGI;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

