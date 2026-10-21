// KCPFIELGGLA$$.ctor @ RVA 0x34CD4A0

void KCPFIELGGLA___ctor(KCPFIELGGLA_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456868c & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo);
    DAT_0456868c = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
  ppGVar1 = &(__this->fields).EHBNKDHKJNI;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

