// IBMLPPNMDCI$$.ctor @ RVA 0x30F618C

void IBMLPPNMDCI___ctor(IBMLPPNMDCI_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566458 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<long>_TypeInfo);
    DAT_04566458 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_long__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<long>_TypeInfo,method);
  Google_Protobuf_Collections_RepeatedField<long>___ctor
            (__this_00,Method_Google_Protobuf_Collections_RepeatedField<long>__ctor__);
  ppGVar1 = &(__this->fields).EHBNKDHKJNI;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

