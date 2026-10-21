// Nekki.SF2.GUI.LabelAlias$$CNHCLPKCGJE @ RVA 0x31AE49C

void Nekki_SF2_GUI_LabelAlias__CNHCLPKCGJE(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  float COIHIJIIEAA;
  float local_24;
  
  if ((DAT_04566b69 & 1) == 0) {
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04566b69 = 1;
    method = extraout_x1;
  }
  local_24 = 0.0;
  bVar1 = (__this->fields)._useLabelFontSize;
  COIHIJIIEAA = (float)(__this->fields)._labelFontSize;
  if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KGFBAIBBNNH_TypeInfo,method);
  }
  bVar2 = KGFBAIBBNNH__PJJEHJMAIIH(bVar1 != false,COIHIJIIEAA,&local_24,(MethodInfo *)0x0);
  if (bVar2) {
    UnityEngine_UI_Text__set_lineSpacing((UnityEngine_UI_Text_o *)__this,local_24,(MethodInfo *)0x0)
    ;
  }
  return;
}

