// Nekki.SF2.GUI.Map.RaidKey$$OnClick @ RVA 0x31B41BC

void Nekki_SF2_GUI_Map_RaidKey__OnClick(Nekki_SF2_GUI_Map_RaidKey_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  MethodInfo *method_00;
  NPKKNCCEIND_o *pNVar1;
  
  __this_00 = (__this->fields)._hint;
  (__this->fields).AIBKGCEBLND = 1;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).GKENNLODDNO;
    if ((pNVar1 != (NPKKNCCEIND_o *)0x0) &&
       (__this_01 = (__this->fields)._hintAlias, __this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_01,(pNVar1->fields).PCAIPKLGAHP,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

