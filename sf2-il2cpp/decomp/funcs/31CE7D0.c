// HCKCBFOGMMJ$$NKLNDGMMAAH @ RVA 0x31CE7D0

void HCKCBFOGMMJ__NKLNDGMMAAH(HCKCBFOGMMJ_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  LFELBGMCDHD_o *pLVar3;
  int32_t EGJLNEOGECM;
  MethodInfo *in_x3;
  Il2CppObject *pIVar4;
  
  if ((DAT_04566c8c & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cd7d8 with catch @ 032ce7f4
                        */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cd7c4 with catch @ 032ce7f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cd7a8 with catch @ 032ce7fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cd790 with catch @ 032ce800
                        */
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<LFELBGMCDHD>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cd774 with catch @ 032ce804
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cd758 with catch @ 032ce808
                        */
    FUN_01bab630(&HCKCBFOGMMJ_NCDAOAEGGBC_TypeInfo);
    FUN_01bab630(&StringLiteral_5956);
                    /* try { // try from 032ce820 to 033ce837 has its CatchHandler @ 032ce8dc */
    DAT_04566c8c = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar4 = (IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField;
  if (pIVar4 == (Il2CppObject *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 032ce8cc to 033ce8db has its CatchHandler @ 032ce8dc */
                    /* catch() { ... } // from try @ 032ce820 with catch @ 032ce8dc
                       catch() { ... } // from try @ 032ce8cc with catch @ 032ce8dc */
                    /* try { // try from 032ce8e0 to 033ce8e3 has its CatchHandler @ 032ce8ec */
    UnityEngine_Debug__LogError(StringLiteral_5956,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 032ce838 to 033ce8cb has its CatchHandler @ 032ccf88 */
  bVar1 = (HCKCBFOGMMJ_NCDAOAEGGBC_TypeInfo->_2).naturalAligment;
  if ((bVar1 <= (pIVar4->klass->_2).naturalAligment) &&
     ((pIVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)HCKCBFOGMMJ_NCDAOAEGGBC_TypeInfo)) {
    bVar2 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar2) {
      pLVar3 = (LFELBGMCDHD_o *)
               KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<LFELBGMCDHD>__);
      HCKCBFOGMMJ__JCMMLIKICBK(__this,pLVar3,method);
      pLVar3 = HCKCBFOGMMJ__GCNKHODLPFF(__this,(IBMLPPNMDCI_o *)pIVar4[1].klass,method);
      EGJLNEOGECM = *(int32_t *)&pIVar4[1].monitor;
    }
    else {
                    /* try { // try from 032ce8e4 to 033ce8ef has its CatchHandler @ 032ccf88 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032ce8e0 with catch @ 032ce8ec
                        */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_5956,(MethodInfo *)0x0);
      EGJLNEOGECM = *(int32_t *)&pIVar4[1].monitor;
      pLVar3 = (LFELBGMCDHD_o *)0x0;
    }
    HCKCBFOGMMJ__HHAFBOFFEHA(__this,pLVar3,EGJLNEOGECM,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pIVar4);
}

