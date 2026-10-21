// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$EPIOBJFNMGG @ RVA 0x306BD24

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__EPIOBJFNMGG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,KEFHDOHHHML_o *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this_00;
  EEOMEMBBGNA_o *pEVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_04565f3a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565f3a = 1;
  }
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    GCIFMNHADDF__IDKIMGGFFNH(__this_00,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar2 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    if (pEVar2 != (EEOMEMBBGNA_o *)0x0) {
      EEOMEMBBGNA__FOJEJJGMIGP(pEVar2,1,(MethodInfo *)0x0);
      pEVar2 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if (pEVar2 != (EEOMEMBBGNA_o *)0x0) {
        EEOMEMBBGNA__HINLKLNCNDB(pEVar2,(MethodInfo *)0x0);
        method_00 = extraout_x1;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_00;
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
          method_00 = extraout_x1_01;
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_02;
        }
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
          if ((pAVar3->fields).MLJFALOOLGI == false) {
            return;
          }
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__HGKGACOAGLK(__this,method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

