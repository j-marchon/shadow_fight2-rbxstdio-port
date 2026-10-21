// Nekki.SF2.GUI.Map.MapScene$$OGHJAMAKPFJ @ RVA 0x3585228

void Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ
               (Nekki_SF2_GUI_Map_MapScene_o *__this,bool CMPKOOEKFKF,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar2;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *pNVar3;
  
  if ((DAT_04568cf1 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568cf1 = 1;
  }
  pNVar2 = (__this->fields).FMIFNIIJJNK;
  if (pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    pNVar3 = (pNVar2->fields).RaidToggleButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = MGNPHCAAEIO__MPGHOPABJNB((MethodInfo *)0x0);
    pNVar2 = (__this->fields).FMIFNIIJJNK;
    if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
       (pNVar3 = (pNVar2->fields).RaidToggleButton,
       pNVar3 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) {
      Nekki_SF2_GUI_Map_RaidToggleButton__set_interactable
                (pNVar3,bVar1 && CMPKOOEKFKF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

