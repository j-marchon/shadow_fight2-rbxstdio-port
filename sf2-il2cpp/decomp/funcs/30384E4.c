// LJNJDFEAIOH$$NKIFNICEBFF @ RVA 0x30384E4

void LJNJDFEAIOH__NKIFNICEBFF(LJNJDFEAIOH_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  AADKBCFCLKK_o *DKMMBMBMJBO;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar1;
  
  if ((DAT_04565d5f & 1) == 0) {
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<AADKBCFCLKK>__);
    DAT_04565d5f = 1;
  }
  pNVar1 = (__this->fields).PDEAGAFHDFI;
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
    if ((pNVar1->fields)._BOGAKJOFOEK_k__BackingField != false) {
      return;
    }
    if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
      DKMMBMBMJBO = (AADKBCFCLKK_o *)
                    KEFHDOHHHML__PFNEPJAFEDF<object>
                              (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<AADKBCFCLKK>__);
      LJNJDFEAIOH__IGLJNCEHFOI(__this,DKMMBMBMJBO,method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

