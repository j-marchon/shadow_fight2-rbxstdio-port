// Nekki.SF2.GUI.Map.MapScene$$FFPMJPGAIEN @ RVA 0x3587FAC

void Nekki_SF2_GUI_Map_MapScene__FFPMJPGAIEN
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar2;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *exists;
  UnityEngine_UI_Button_o *pUVar3;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *pNVar4;
  
  if ((DAT_04568d0d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d0d = 1;
    method = extraout_x1;
  }
  exists = (__this->fields).OPPIFBJOLBI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar2 = (__this->fields).FMIFNIIJJNK;
  if (pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    pUVar3 = (pNVar2->fields).RaidMapScrollButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar2 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar2 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
         (pUVar3 = (pNVar2->fields).RaidMapScrollButton, pUVar3 == (UnityEngine_UI_Button_o *)0x0))
      goto LAB_036880a8;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar3,false,(MethodInfo *)0x0);
    }
    pNVar2 = (__this->fields).FMIFNIIJJNK;
    if (pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
      pNVar4 = (pNVar2->fields).RaidToggleButton;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar2 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
         (pNVar4 = (pNVar2->fields).RaidToggleButton,
         pNVar4 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) {
        Nekki_SF2_GUI_Map_RaidToggleButton__set_interactable(pNVar4,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_036880a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

