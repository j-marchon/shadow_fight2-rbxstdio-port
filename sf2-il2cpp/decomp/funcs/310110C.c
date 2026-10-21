// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$EIPMJGAAKFP @ RVA 0x310110C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__EIPMJGAAKFP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  NFFDIPBFJHP_o *__this_00;
  NDPMLPGANCI_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  GLPEFEEGCPM_o *CJNHFNHJHPE;
  
  if ((DAT_045664bf & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<PBGDDCFGPJI>__);
    DAT_045664bf = 1;
  }
  if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar1 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<PBGDDCFGPJI>__);
    method_01 = extraout_x1;
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (CJNHFNHJHPE = pIVar1[1].monitor, CJNHFNHJHPE != (GLPEFEEGCPM_o *)0x0)) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
      if (__this_00 == (NFFDIPBFJHP_o *)0x0) goto LAB_032011e4;
      NFFDIPBFJHP__PFMBOAKNNOI(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__AKOPPOBKDCA(__this,method_00);
      method_01 = extraout_x1_00;
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__JBEGLHIMFPE(__this,method_01);
    __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__PHFCKPKDMBK(__this_01,false,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_032011e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

