// KJNCNBJIJPC$$.ctor @ RVA 0x331A8FC

void KJNCNBJIJPC___ctor(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o **ppGVar1;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o **ppGVar2;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *__this_02;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o **ppGVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567814 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>__ctor__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>__ctor__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_TypeInfo);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_TypeInfo);
    DAT_04567814 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
  ppGVar1 = &(__this->fields).DDEAFMPDPBJ;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  __this_01 = (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
             Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>__ctor__);
  ppGVar2 = &(__this->fields).EACBGCPPLBO;
  *ppGVar2 = __this_01;
  thunk_FUN_01c20e04(ppGVar2,__this_01);
  __this_02 = (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
             Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>__ctor__);
  ppGVar3 = &(__this->fields).KELNJLBBHEC;
  *ppGVar3 = __this_02;
  thunk_FUN_01c20e04(ppGVar3,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

