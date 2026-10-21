// GPKDMPJJEOO$$.ctor @ RVA 0x319DB04

void GPKDMPJJEOO___ctor(GPKDMPJJEOO_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_MapField_string__string__o *__this_00;
  Google_Protobuf_Collections_MapField_string__string__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566abc & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField<string,_string>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_MapField<string,_string>_TypeInfo);
    DAT_04566abc = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_MapField_string__string__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_MapField<string,_string>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_MapField<object,_object>___ctor
            ((Google_Protobuf_Collections_MapField_TKey__TValue__o *)__this_00,
             Method_Google_Protobuf_Collections_MapField<string,_string>__ctor__);
  ppGVar1 = &(__this->fields).PPDLPBMONBL;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

