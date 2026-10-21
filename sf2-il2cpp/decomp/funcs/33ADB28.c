// ACAEKBNCODE$$ELDMBCFMOKO @ RVA 0x33ADB28

void ACAEKBNCODE__ELDMBCFMOKO
               (ACAEKBNCODE_o *__this,int32_t OGPGLGPMEPD,ONPHBGJDFBM_o *HBHPFKJMGCK,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  
  if ((DAT_04567d24 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ONPHBGJDFBM>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ONPHBGJDFBM>_ContainsKey__);
    FUN_01bab630(&StringLiteral_11274);
    DAT_04567d24 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).PGDGCNKLKMN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                      (pSVar2,OGPGLGPMEPD,
                       Method_System_Collections_Generic_Dictionary<int,_ONPHBGJDFBM>_ContainsKey__)
    ;
    if (bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_11274,(MethodInfo *)0x0);
      return;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).PGDGCNKLKMN;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary<int,_object>__Add
                (pSVar2,OGPGLGPMEPD,(Il2CppObject *)HBHPFKJMGCK,
                 Method_System_Collections_Generic_Dictionary<int,_ONPHBGJDFBM>_Add__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

