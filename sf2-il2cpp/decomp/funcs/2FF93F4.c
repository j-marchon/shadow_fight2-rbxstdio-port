// JMDPBFOCHHP$$NNCKFAHCIBE @ RVA 0x2FF93F4

JMDPBFOCHHP_EBEGCDCOHHJ_o *
JMDPBFOCHHP__NNCKFAHCIBE(JMDPBFOCHHP_o *__this,int32_t CBJKJCKDKJB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  JMDPBFOCHHP_EBEGCDCOHHJ_o *pJVar3;
  JMDPBFOCHHP_NMAJABPDEPE_o *pJVar4;
  
  if ((DAT_04565abc & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_EBEGCDCOHHJ>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_EBEGCDCOHHJ>_get_Item__
                );
    DAT_04565abc = 1;
  }
  pJVar4 = (__this->fields)._IGLEEEJGEEJ_k__BackingField;
  if ((pJVar4 != (JMDPBFOCHHP_NMAJABPDEPE_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(pJVar4->fields).HJGMOINDJAK,
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                      (pSVar2,CBJKJCKDKJB,
                       Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_EBEGCDCOHHJ>_ContainsKey__
                      );
    if (!bVar1) {
      return (JMDPBFOCHHP_EBEGCDCOHHJ_o *)0x0;
    }
    pJVar4 = (__this->fields)._IGLEEEJGEEJ_k__BackingField;
    if ((pJVar4 != (JMDPBFOCHHP_NMAJABPDEPE_o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                 (pJVar4->fields).HJGMOINDJAK,
       pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
      pJVar3 = (JMDPBFOCHHP_EBEGCDCOHHJ_o *)
               System_Collections_Generic_Dictionary<int,_object>__get_Item
                         (pSVar2,CBJKJCKDKJB,
                          Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_EBEGCDCOHHJ>_get_Item__
                         );
      return pJVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

