// KAMBBJFPLGM$$.ctor @ RVA 0x311B79C

void KAMBBJFPLGM___ctor(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o **ppGVar2;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_string__o **ppGVar3;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o **ppGVar4;
  MethodInfo *extraout_x1;
  
  if ((DAT_045665ec & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>__ctor__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<string>_TypeInfo);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_TypeInfo);
    DAT_045665ec = 1;
    method = extraout_x1;
  }
  pGVar1 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
           thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo,method
                             );
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
             Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
  ppGVar2 = &(__this->fields).LEJBLHJFJHP;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  pGVar1 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
           thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
             Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
  ppGVar2 = &(__this->fields).AKFPFIHIHOC;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  __this_00 = (Google_Protobuf_Collections_RepeatedField_string__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<string>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<string>__ctor__);
  ppGVar3 = &(__this->fields).HBIHNBPPEEO;
  *ppGVar3 = __this_00;
  thunk_FUN_01c20e04(ppGVar3,__this_00);
  __this_01 = (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
             Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>__ctor__);
  ppGVar4 = &(__this->fields).FDELJPKNGKF;
  *ppGVar4 = __this_01;
  thunk_FUN_01c20e04(ppGVar4,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

