// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$HBBGAJGBIJG @ RVA 0x35AED64

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__HBBGAJGBIJG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  UnityEngine_CanvasGroup_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  int32_t *piVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *pMVar4;
  SFButton_o *pSVar5;
  IFFFKKMMKFO_o *pIVar6;
  GKLPDMLELJF_o *pGVar7;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  
  if ((DAT_04568e73 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04568e73 = 1;
  }
  pSVar5 = (__this->fields)._damageHintButton;
  if ((pSVar5 != (SFButton_o *)0x0) &&
     (pUVar1 = (pSVar5->fields).super.m_OnClick,
     pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._chestHintButton;
    if ((pSVar5 != (SFButton_o *)0x0) &&
       (pUVar1 = (pSVar5->fields).super.m_OnClick,
       pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._canvasGroup;
      if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_alpha(__this_00,1.0,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._chest;
        if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          pMVar4 = (MethodInfo *)0x0;
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_01,StringLiteral_1,(MethodInfo *)0x0)
          ;
          Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__AENLKMEMLLP(__this,method_00);
          pIVar6 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
          if (pIVar6 != (IFFFKKMMKFO_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__KJBGMCODLFB
                      (__this,(pIVar6->fields)._IPNPNPOLCFO_k__BackingField,pMVar4);
            pIVar6 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
            if ((pIVar6 != (IFFFKKMMKFO_o *)0x0) &&
               (pGVar7 = (pIVar6->fields)._IPNPNPOLCFO_k__BackingField,
               pGVar7 != (GKLPDMLELJF_o *)0x0)) {
              Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__AFODJIOPDLD
                        (__this,(pGVar7->fields).LLBEKLPKDHK,pMVar4);
              pIVar6 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
              if (pIVar6 != (IFFFKKMMKFO_o *)0x0) {
                piVar2 = &(pIVar6->fields).KOPODBECOEJ;
                pMVar4 = extraout_x1;
                if (-1 < *piVar2) {
                  pNVar8 = (__this->fields)._playerPosition;
                  pSVar3 = System_Int32__ToString((int32_t)piVar2,(MethodInfo *)0x0);
                  if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_036aee90;
                  (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                            (pNVar8,pSVar3,(pNVar8->klass->vtable)._75_set_text.method);
                  pMVar4 = extraout_x1_00;
                }
                Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__FDFHMHPOHKA(__this,pMVar4);
                Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__NCMPNFLGPPE(__this,method_01);
                Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__OENMKDCFDIF(__this,method_02);
                Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__NJBBDBHJKNN(__this,method_03);
                Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__PHMCJLDOJPD(__this,method_04);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_036aee90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

