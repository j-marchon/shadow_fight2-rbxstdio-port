// NCJBDBGIPNF$$.ctor @ RVA 0x31977B0

void NCJBDBGIPNF___ctor(NCJBDBGIPNF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_Func_string__bool___string__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a83 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_TypeInfo);
    DAT_04566a83 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_TypeInfo
                              ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>__ctor__
            );
  ppSVar2 = &(__this->fields).MLPDIICEKIO;
  *ppSVar2 = (System_Collections_Generic_Dictionary_Func_string__bool___string__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>__ctor__
            );
  ppSVar2 = &(__this->fields).GCDPLFELIBF;
  *ppSVar2 = (System_Collections_Generic_Dictionary_Func_string__bool___string__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

