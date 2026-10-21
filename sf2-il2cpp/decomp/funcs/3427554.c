// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$SetRaidEndedState @ RVA 0x3427554

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetRaidEndedState
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,bool INMJNAJNOAE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  ProgressLabelButton_o *__this_00;
  LabelButton_o *pLVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_0456811a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_TypeInfo);
    DAT_0456811a = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetTimerVisible(__this,false,method);
  pNVar1 = (__this->fields)._finishHimLabel;
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._btnFight;
    if ((__this_00 != (ProgressLabelButton_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pLVar3 = (__this->fields)._btnFinalFight;
      if ((pLVar3 != (LabelButton_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._waitingResultLabel;
        if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          pLVar3 = (__this->fields)._btnExit;
          if ((pLVar3 != (LabelButton_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FDPLPNKKGGO(__this,method_00);
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FMAEMJENECC(__this,method_01);
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HCCNPDEPLJA(__this,method_02);
            if (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_TypeInfo->static_fields->FPJJPFJDKNP !=
                false) {
              return;
            }
            if (INMJNAJNOAE) {
              EDFDANKEBGF__HFBADEKPCAB((MethodInfo *)0x0);
            }
            else {
              EDFDANKEBGF__OOBBKGHAAHF((MethodInfo *)0x0);
            }
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_TypeInfo->static_fields->FPJJPFJDKNP = true;
            __this_01 = (__this->fields)._completedIcon;
            if ((__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,INMJNAJNOAE,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

