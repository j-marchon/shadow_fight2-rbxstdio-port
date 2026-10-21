// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$Init @ RVA 0x3075C0C

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  bool bVar1;
  int32_t IMCJLJNEMKH;
  Nekki_SF2_GUI_Scripts_LoadingCircle_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_02;
  ACHLOMELAJE_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_04565fa5 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17301);
    FUN_01bab630(&StringLiteral_9299);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_3363);
    DAT_04565fa5 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_1,
             StringLiteral_9679,StringLiteral_17301,2,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._loadingCircle;
  (__this->fields).PBACPHGLOFJ = 0;
  if (__this_00 != (Nekki_SF2_GUI_Scripts_LoadingCircle_o *)0x0) {
    Nekki_SF2_GUI_Scripts_LoadingCircle__Play(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._loadingMessage;
    if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._scroll;
      if (__this_02 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__Init(__this_02,(MethodInfo *)0x0);
        (__this->fields).BKLFHONPJGH = StringLiteral_9299;
        thunk_FUN_01c20e04(&(__this->fields).BKLFHONPJGH);
        pUVar2 = (__this->fields)._clansHint;
        if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar2 = UnityEngine_GameObject__get_gameObject(pUVar2,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          method_03 = (MethodInfo *)0x0;
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__CFPJAFNAAME(__this,method_00);
          Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__SetArrowBtnsTouchEnable
                    (__this,true,method_03);
          Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__CBMBNAKAFMH(__this,method_01);
          pNVar3 = (__this->fields)._additionalBg;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
          if (bVar1) {
            pNVar3 = (__this->fields)._additionalBg;
            if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03175e38;
            method_03 = (MethodInfo *)0x0;
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (pNVar3,StringLiteral_3363,(MethodInfo *)0x0);
          }
          IMCJLJNEMKH = NFFDIPBFJHP__MHAFJGEAOIF((MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__CPMHIEJENLD
                    (__this,IMCJLJNEMKH,method_03);
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
          __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_03 != (ACHLOMELAJE_o *)0x0) {
            bVar1 = ACHLOMELAJE__HPDCJKNJELO(__this_03,(MethodInfo *)0x0);
            if (bVar1) {
              Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__HHKOPHFBCOM(__this,method_02);
              return;
            }
            Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__PNHAKBHMLMO(__this,method_02);
            return;
          }
        }
      }
    }
  }
LAB_03175e38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

