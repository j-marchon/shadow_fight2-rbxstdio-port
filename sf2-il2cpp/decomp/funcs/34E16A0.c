// DJOGJDHNNJC$$JAKINMONMNJ @ RVA 0x34E16A0

System_String_o * DJOGJDHNNJC__JAKINMONMNJ(DJOGJDHNNJC_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  DBIINAFCKME_o *pDVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject **ppIVar4;
  Il2CppObject *local_18;
  
  if ((DAT_04568736 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10086);
    FUN_01bab630(&StringLiteral_5245);
    DAT_04568736 = 1;
  }
  local_18 = (Il2CppObject *)0x0;
  iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  if (iVar2 == 0) {
    ppIVar4 = (Il2CppObject **)&StringLiteral_10086;
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar3 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
    if ((pDVar3 == (DBIINAFCKME_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields).HBEMBIJGEJL,
       __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)(pDVar3->fields).MIGGLEOLMPE,&local_18,
                       Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    ppIVar4 = &local_18;
    if (!bVar1) {
      ppIVar4 = (Il2CppObject **)&StringLiteral_5245;
    }
  }
  return (System_String_o *)*ppIVar4;
}

