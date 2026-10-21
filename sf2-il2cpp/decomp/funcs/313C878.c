// POLAJNLKPAK$$.ctor @ RVA 0x313C878

void POLAJNLKPAK___ctor(POLAJNLKPAK_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__POLAJNLKPAK_MEEBKGDAIGB__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566735 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>__ctor__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_MEEBKGDAIGB>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_MEEBKGDAIGB>_TypeInfo);
    DAT_04566735 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_TypeInfo
                              ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,
             Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>__ctor__);
  (__this->fields).JPGEBIDNGPB =
       (System_Collections_Generic_Dictionary_string__POLAJNLKPAK_ACFKGGIJHBH__o *)pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_MEEBKGDAIGB>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,
             Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_MEEBKGDAIGB>__ctor__);
  ppSVar2 = &(__this->fields).DBGJIKCFLGB;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__POLAJNLKPAK_MEEBKGDAIGB__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

