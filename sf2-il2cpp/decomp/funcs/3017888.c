// ECENNHNBAME.MNDFKOHIAHI$$.ctor @ RVA 0x3017888

void ECENNHNBAME_MNDFKOHIAHI___ctor(ECENNHNBAME_MNDFKOHIAHI_o *__this,MethodInfo *method)

{
  MethodInfo_2639E28 *in_x4;
  System_Collections_Generic_KeyValuePair_object__object__o __this_00;
  Il2CppObject local_40;
  
  if ((DAT_04565bfc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565bfc = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  local_40.klass = (Il2CppClass *)0x0;
  local_40.monitor = (System_String_o *)0x0;
  __this_00.fields.value = StringLiteral_1;
  __this_00.fields.key = &local_40;
  System_Collections_Generic_KeyValuePair<object,_object>___ctor
            (__this_00,StringLiteral_1,
             Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__,in_x4);
  (__this->fields).MJBOGDFFGKL.fields.value = local_40.monitor;
  (__this->fields).MJBOGDFFGKL.fields.key = (System_String_o *)local_40.klass;
  thunk_FUN_01c20e04(&__this->fields,0);
  (__this->fields)._FCHBJLJDDOH_k__BackingField = true;
  return;
}

