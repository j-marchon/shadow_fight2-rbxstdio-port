// IJBEKFLAPNK$$LFENGGKOJDO @ RVA 0x33916A4

void IJBEKFLAPNK__LFENGGKOJDO
               (IJBEKFLAPNK_o *__this,float LINBBAKAFCP,System_String_o *JGHIJMJNJLE,
               System_String_o *ANGBPBINHBL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  float fVar4;
  
  if ((DAT_04567c21 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_get_Item__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_set_Item__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_set_Item__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_float>_TypeInfo);
    DAT_04567c21 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIGFEBEBGCK;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)JGHIJMJNJLE,
                       Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_ContainsKey__
                      );
    if (!bVar1) {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).AIGFEBEBGCK;
      pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_float>_TypeInfo);
      System_Collections_Generic_Dictionary<object,_float>___ctor
                (pSVar3,Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03491824;
      System_Collections_Generic_Dictionary<object,_object>__set_Item
                (pSVar2,(Il2CppObject *)JGHIJMJNJLE,(Il2CppObject *)pSVar3,
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_set_Item__
                );
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIGFEBEBGCK
    ;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 System_Collections_Generic_Dictionary<object,_object>__get_Item
                           (pSVar2,(Il2CppObject *)JGHIJMJNJLE,
                            Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_get_Item__
                           ), pSVar3 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0
       )) {
      bVar1 = System_Collections_Generic_Dictionary<object,_float>__ContainsKey
                        (pSVar3,(Il2CppObject *)ANGBPBINHBL,
                         Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
      if (bVar1) {
        fVar4 = System_Collections_Generic_Dictionary<object,_float>__get_Item
                          (pSVar3,(Il2CppObject *)ANGBPBINHBL,
                           Method_System_Collections_Generic_Dictionary<string,_float>_get_Item__);
        LINBBAKAFCP = fVar4 + LINBBAKAFCP;
      }
      System_Collections_Generic_Dictionary<object,_float>__set_Item
                (pSVar3,(Il2CppObject *)ANGBPBINHBL,LINBBAKAFCP,
                 Method_System_Collections_Generic_Dictionary<string,_float>_set_Item__);
      return;
    }
  }
LAB_03491824:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

