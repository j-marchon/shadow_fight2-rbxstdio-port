// Nekki.SF2.GUI.Map.MapScene$$IOFENOLJOOO @ RVA 0x3588FF4

bool Nekki_SF2_GUI_Map_MapScene__IOFENOLJOOO(MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  GALHNMPIEHA_o *pGVar4;
  GCIFMNHADDF_o *pGVar5;
  EEGDOGKBLNG_o *__this;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  ACHLOMELAJE_o *pAVar6;
  LPAPAMPGDFN_o *pLVar7;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  
  if ((DAT_04568d1a & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d1a = 1;
  }
  bVar2 = GALHNMPIEHA__EBPPGDNPHGG((MethodInfo *)0x0);
  if (bVar2) {
    if (DAT_04565e5a == '\0') {
      FUN_01bab630(&KJFLIAMBKEB_TypeInfo);
      DAT_04565e5a = '\x01';
    }
    iVar1 = KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB;
    if ((iVar1 == 5) || (iVar1 == 3)) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pGVar4 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
      if (pGVar4 == (GALHNMPIEHA_o *)0x0) {
LAB_036891e4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pGVar4->fields)._MBJGPIOFAEE_k__BackingField != (BPBGAAHBFKH_o *)0x0) {
        pGVar5 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pGVar5 == (GCIFMNHADDF_o *)0x0) goto LAB_036891e4;
        x = (pGVar5->fields)._AOOFDKJAALA_k__BackingField;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if ((pAVar6 == (ACHLOMELAJE_o *)0x0) ||
             (pLVar7 = (pAVar6->fields).LMCDOMHENMC, pLVar7 == (LPAPAMPGDFN_o *)0x0))
          goto LAB_036891e4;
          if ((pLVar7->fields).AMIMEMOELHE == 0x32) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
            if (__this == (EEGDOGKBLNG_o *)0x0) goto LAB_036891e4;
            iVar3 = EEGDOGKBLNG__NJNJAECEPCP(__this,(MethodInfo *)0x0);
            if (iVar3 != 3) {
              __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
              if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_036891e4;
              iVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_ScheduledQuestsCount
                                (__this_00,(MethodInfo *)0x0);
              if (iVar3 == 0) {
                if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar2 = FGKGKDEJCOG__PBHLPMFKMAH((MethodInfo *)0x0);
                return bVar2;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

