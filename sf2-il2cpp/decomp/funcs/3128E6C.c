// JMCDPBKILIN$$.ctor @ RVA 0x3128E6C

void JMCDPBKILIN___ctor(JMCDPBKILIN_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456667b & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_TypeInfo);
    DAT_0456667b = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>__ctor__);
  ppGVar1 = &(__this->fields).MJIIHOLHNCK;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

