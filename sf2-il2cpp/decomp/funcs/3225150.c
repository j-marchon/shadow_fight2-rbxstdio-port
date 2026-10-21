// GLPEFEEGCPM$$.ctor @ RVA 0x3225150

void GLPEFEEGCPM___ctor(GLPEFEEGCPM_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f74 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_TypeInfo);
    DAT_04566f74 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>__ctor__);
  ppGVar1 = &(__this->fields).MPAIPMANDEO;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

