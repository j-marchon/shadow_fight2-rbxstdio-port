// IHMIMECHIAN$$.ctor @ RVA 0x343C558

void IHMIMECHIAN___ctor(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_int__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681e1 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<int>_TypeInfo);
    DAT_045681e1 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_int__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<int>_TypeInfo,method);
  Google_Protobuf_Collections_RepeatedField<int>___ctor
            (__this_00,Method_Google_Protobuf_Collections_RepeatedField<int>__ctor__);
  ppGVar1 = &(__this->fields).IKCCLDMOOKP;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

