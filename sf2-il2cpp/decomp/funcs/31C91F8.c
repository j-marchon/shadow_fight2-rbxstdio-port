// DBNIPENAEKO$$.ctor @ RVA 0x31C91F8

void DBNIPENAEKO___ctor(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566c51 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566c51 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>__ctor__);
  ppGVar1 = &(__this->fields).BMMFCMJLFKN;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  (__this->fields).BHMHGIBMMMB = StringLiteral_1;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

