// JMDPBFOCHHP$$MJHBGJIIKEB @ RVA 0x2FF9534

JMDPBFOCHHP_BGJBFFKJHHD_o *
JMDPBFOCHHP__MJHBGJIIKEB(JMDPBFOCHHP_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  JMDPBFOCHHP_BGJBFFKJHHD_o *pJVar3;
  JMDPBFOCHHP_KJLILNPHJHI_o *pJVar4;
  
  if ((DAT_04565abe & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>_get_Item__
                );
    DAT_04565abe = 1;
  }
  pJVar4 = (__this->fields).OGPANCKIAED;
  if (pJVar4 == (JMDPBFOCHHP_KJLILNPHJHI_o *)0x0) {
    return (JMDPBFOCHHP_BGJBFFKJHHD_o *)0x0;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pJVar4->fields).EHGOHNHDKPP;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>_ContainsKey__
                      );
    if (!bVar1) {
      return (JMDPBFOCHHP_BGJBFFKJHHD_o *)0x0;
    }
    pJVar4 = (__this->fields).OGPANCKIAED;
    if ((pJVar4 != (JMDPBFOCHHP_KJLILNPHJHI_o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (pJVar4->fields).EHGOHNHDKPP,
       pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      pJVar3 = (JMDPBFOCHHP_BGJBFFKJHHD_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                          Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>_get_Item__
                         );
      return pJVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

