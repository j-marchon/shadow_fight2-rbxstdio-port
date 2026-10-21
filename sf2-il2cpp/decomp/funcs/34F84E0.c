// OLKKAIFGGAK.IEMCMOPNPEA$$.ctor @ RVA 0x34F84E0

void OLKKAIFGGAK_IEMCMOPNPEA___ctor(OLKKAIFGGAK_IEMCMOPNPEA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456880d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_TypeInfo);
    DAT_0456880d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>__ctor__);
  (__this->fields).EHJHKEEDKBE =
       (System_Collections_Generic_Dictionary_string__List_OIGAJAKPPEO___o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

