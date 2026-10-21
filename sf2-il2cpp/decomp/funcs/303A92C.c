// LJNJDFEAIOH$$ECOKPPHJIIH @ RVA 0x303A92C

void LJNJDFEAIOH__ECOKPPHJIIH(LJNJDFEAIOH_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar3;
  
  if ((DAT_04565d74 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJFPEINHCDP>__);
    FUN_01bab630(&StringLiteral_20000);
    DAT_04565d74 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_20000,(MethodInfo *)0x0);
      return;
    }
    pNVar3 = (__this->fields).PDEAGAFHDFI;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      if ((pNVar3->fields)._BOGAKJOFOEK_k__BackingField != false) {
        return;
      }
      pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OJFPEINHCDP>__);
      if (pIVar2 != (Il2CppObject *)0x0) {
        LJNJDFEAIOH__MHJKLCKMFMO(__this,(KDADMJGPAOM_o *)pIVar2[2].klass,method);
        LJNJDFEAIOH__KBAHEGDFCBI(__this,pIVar2[1].monitor,method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

