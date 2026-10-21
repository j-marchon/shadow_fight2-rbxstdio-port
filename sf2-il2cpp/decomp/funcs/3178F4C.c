// MEPKDDGONGE$$.ctor @ RVA 0x3178F4C

void MEPKDDGONGE___ctor(MEPKDDGONGE_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_string__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_string__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566977 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<string>_TypeInfo);
    DAT_04566977 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_string__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<string>_TypeInfo,method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<string>__ctor__);
  ppGVar1 = &(__this->fields).IECICFJIDPO;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

