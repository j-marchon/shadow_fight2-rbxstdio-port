// CDBANCEFAAK$$MAHFCKJGBPP @ RVA 0x3081B48

void CDBANCEFAAK__MAHFCKJGBPP(CDBANCEFAAK_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  UnityEngine_Transform_o *INPDGILCEBL;
  System_Action_RaidInfoSprite__o *pSVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *exists;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o **ppNVar3;
  ProgressLabelButton_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar4;
  
  if ((DAT_04565ffc & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    FUN_01bab630(&Method_CDBANCEFAAK_FCHKBFCNOJL__);
    FUN_01bab630(&Method_CDBANCEFAAK_HNHLJHHKELD__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10842);
    DAT_04565ffc = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if (DAT_045660f3 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
    DAT_045660f3 = '\x01';
  }
  exists = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if (bVar1) {
    if (exists != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      ppNVar3 = &(__this->fields).EFAPPLILPJP;
      *ppNVar3 = (exists->fields)._raidInfoSprite;
      thunk_FUN_01c20e04(ppNVar3);
      if (*ppNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
        __this_01 = ((*ppNVar3)->fields)._btnFight;
        __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
        if ((__this_01 != (ProgressLabelButton_o *)0x0) &&
           (INPDGILCEBL = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           __this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0)) {
          Nekki_SF2_GUI_Tutorial_ArrowCanvas__ShowArrow
                    (__this_00,INPDGILCEBL,
                     (UnityEngine_Vector2_o)(__this->fields).JDIMEBGEJFE.fields,
                     (__this->fields).GBJHFDKDAIB,(MethodInfo *)0x0);
          pNVar4 = (__this->fields).EFAPPLILPJP;
          pSVar2 = (System_Action_RaidInfoSprite__o *)
                   thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__add_OnFightBtnClick
                      (pNVar4,pSVar2,(MethodInfo *)0x0);
            pNVar4 = (__this->fields).EFAPPLILPJP;
            pSVar2 = (System_Action_RaidInfoSprite__o *)
                     thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
            System_Action<object>___ctor();
            if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__add_OnExitBtnClick
                        (pNVar4,pSVar2,(MethodInfo *)0x0);
              AKJJAPEHKCG__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)__this_01,(MethodInfo *)0x0);
              SFButton__set_IsFlashing((SFButton_o *)__this_01,true,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_10842,(MethodInfo *)0x0);
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

