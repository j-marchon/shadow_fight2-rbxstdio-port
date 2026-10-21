// ABCMPMHNMAP$$.ctor @ RVA 0x31742B4

void ABCMPMHNMAP___ctor(ABCMPMHNMAP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_IHDFIJGDCBL__o *__this_01;
  System_Collections_Generic_List_IHDFIJGDCBL__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456694c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IHDFIJGDCBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_IHDFIJGDCBL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IHDFIJGDCBL>_TypeInfo);
    DAT_0456694c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_IHDFIJGDCBL>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_IHDFIJGDCBL>__ctor__);
  (__this->fields).DLJKMENIJJF =
       (System_Collections_Generic_Dictionary_string__IHDFIJGDCBL__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_IHDFIJGDCBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IHDFIJGDCBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IHDFIJGDCBL>__ctor__);
  ppSVar1 = &(__this->fields).ACHJNNOKEDK;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

