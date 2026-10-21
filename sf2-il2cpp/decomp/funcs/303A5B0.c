// LJNJDFEAIOH$$JGLGAMMLMGF @ RVA 0x303A5B0

void LJNJDFEAIOH__JGLGAMMLMGF(LJNJDFEAIOH_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  GKLPDMLELJF_o *HEHMPFLAEGE;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_00;
  
  if ((DAT_04565d72 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<GKLPDMLELJF>__);
    FUN_01bab630(&StringLiteral_20021);
    DAT_04565d72 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_20021,(MethodInfo *)0x0);
      return;
    }
    __this_00 = (__this->fields).PDEAGAFHDFI;
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      if ((__this_00->fields)._BOGAKJOFOEK_k__BackingField != false) {
        return;
      }
      HEHMPFLAEGE = (GKLPDMLELJF_o *)
                    KEFHDOHHHML__PFNEPJAFEDF<object>
                              (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<GKLPDMLELJF>__);
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdateInsertedPlayer
                (__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

