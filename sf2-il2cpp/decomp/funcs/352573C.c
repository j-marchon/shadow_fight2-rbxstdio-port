// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$BEGNFALPJKP @ RVA 0x352573C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__BEGNFALPJKP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t *piVar2;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this_00;
  LabelButton_o *pLVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_String_o *pSVar5;
  System_String_o *str3;
  ProgressBar_o *pPVar6;
  NLFLMJPNOLF_o *pNVar7;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar8;
  Nekki_SF2_GUI_LabelAlias_o *pNVar9;
  
  if ((DAT_045689fc & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&StringLiteral_2436);
    FUN_01bab630(&StringLiteral_1492);
    DAT_045689fc = 1;
  }
  pNVar7 = (__this->fields).PMHMLJDMHFP;
  if (pNVar7 != (NLFLMJPNOLF_o *)0x0) {
    __this_00 = (__this->fields)._tablePlayers;
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__Reload
                (__this_00,pNVar7,(MethodInfo *)0x0);
      pLVar3 = (__this->fields)._leaveButton;
      if ((pLVar3 != (LabelButton_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive
                  (pUVar4,(__this->fields).DNFCMDCBGHC == false,(MethodInfo *)0x0);
        pLVar3 = (__this->fields)._cancelButton;
        if ((pLVar3 != (LabelButton_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar4,(__this->fields).DNFCMDCBGHC,(MethodInfo *)0x0);
          pLVar3 = (__this->fields)._raidButton;
          if ((pLVar3 != (LabelButton_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar4,(__this->fields).DNFCMDCBGHC,(MethodInfo *)0x0)
            ;
            pNVar7 = (__this->fields).PMHMLJDMHFP;
            if ((pNVar7 != (NLFLMJPNOLF_o *)0x0) &&
               (pGVar8 = (pNVar7->fields).MABPCBMOECE,
               pGVar8 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
              pNVar9 = (__this->fields)._playersCountLabel;
              piVar1 = &(__this->fields).NDOHFCNNKFA;
              (__this->fields).NDOHFCNNKFA = (pGVar8->fields).count;
              pSVar5 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
              piVar2 = &(__this->fields).PLNOPJFFELC;
              str3 = System_Int32__ToString((int32_t)piVar2,(MethodInfo *)0x0);
              pSVar5 = System_String__Concat
                                 (StringLiteral_2436,pSVar5,StringLiteral_1492,str3,
                                  (MethodInfo *)0x0);
              if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                (*(pNVar9->klass->vtable)._75_set_text.methodPtr)
                          (pNVar9,pSVar5,(pNVar9->klass->vtable)._75_set_text.method);
                pPVar6 = (__this->fields)._playersProgressBar;
                if (pPVar6 != (ProgressBar_o *)0x0) {
                  (*(pPVar6->klass->vtable)._8_SetValue.methodPtr)
                            ((float)(__this->fields).NDOHFCNNKFA /
                             (float)(__this->fields).PLNOPJFFELC,0,pPVar6,0,
                             (pPVar6->klass->vtable)._8_SetValue.method);
                  pLVar3 = (__this->fields)._raidButton;
                  if (pLVar3 != (LabelButton_o *)0x0) {
                    UnityEngine_UI_Selectable__set_interactable
                              ((UnityEngine_UI_Selectable_o *)pLVar3,*piVar2 <= *piVar1,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

