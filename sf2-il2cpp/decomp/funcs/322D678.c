// DEKKGJNMFEB$$.ctor @ RVA 0x322D678

void DEKKGJNMFEB___ctor(DEKKGJNMFEB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GGCMECLCOMJ__o *__this_00;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_01;
  System_Collections_Generic_List_GGLKHCAIGDI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566fba & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GGCMECLCOMJ>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GGCMECLCOMJ>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<GGLKHCAIGDI>_TypeInfo);
    DAT_04566fba = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_GGCMECLCOMJ__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GGCMECLCOMJ>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GGCMECLCOMJ>__ctor__);
  (__this->fields).CGDCBPHBFDE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_GGLKHCAIGDI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GGLKHCAIGDI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<GGLKHCAIGDI>__ctor__);
  ppSVar1 = &(__this->fields).OKIANCELJJF;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

