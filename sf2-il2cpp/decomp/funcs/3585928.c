// Nekki.SF2.GUI.Map.MapScene$$EHJIAIJGNHJ @ RVA 0x3585928

void Nekki_SF2_GUI_Map_MapScene__EHJIAIJGNHJ
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar3;
  Nekki_SF2_GUI_Map_MapCurrencyPanel_o *pNVar4;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *pNVar5;
  UnityEngine_UI_Button_o *pUVar6;
  
  if ((DAT_04568cfa & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568cfa = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).FMIFNIIJJNK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).FMIFNIIJJNK;
  if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    pNVar4 = (pNVar3->fields).RaidKeysPanel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar3 = (__this->fields).FMIFNIIJJNK;
      if (((pNVar3 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
          (pNVar4 = (pNVar3->fields).RaidKeysPanel,
          pNVar4 == (Nekki_SF2_GUI_Map_MapCurrencyPanel_o *)0x0)) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03685a90;
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    }
    pNVar3 = (__this->fields).FMIFNIIJJNK;
    if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
      pNVar5 = (pNVar3->fields)._RaidDailyQuestsButton_k__BackingField;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar5,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar3 = (__this->fields).FMIFNIIJJNK;
        if (((pNVar3 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
            (pNVar5 = (pNVar3->fields)._RaidDailyQuestsButton_k__BackingField,
            pNVar5 == (Nekki_SF2_GUI_Map_RaidQuestsButton_o *)0x0)) ||
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03685a90;
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      }
      pNVar3 = (__this->fields).FMIFNIIJJNK;
      if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
        pUVar6 = (pNVar3->fields).RaidMapScrollButton;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pNVar3 = (__this->fields).FMIFNIIJJNK;
        if (((pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
            (pUVar6 = (pNVar3->fields).RaidMapScrollButton, pUVar6 != (UnityEngine_UI_Button_o *)0x0
            )) && (pUVar2 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
                  pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03685a90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

