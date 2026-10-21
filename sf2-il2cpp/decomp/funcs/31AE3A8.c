// Nekki.SF2.GUI.LabelAlias$$HBHAKJAFIDP @ RVA 0x31AE3A8

void Nekki_SF2_GUI_LabelAlias__HBHAKJAFIDP(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  int value;
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  float local_14;
  
  if ((DAT_04566b64 & 1) == 0) {
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04566b64 = 1;
    method = extraout_x1;
  }
  local_14 = 0.0;
  if ((__this->fields)._useLocalizationFont != false) {
    iVar2 = (__this->fields)._fontType;
    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KGFBAIBBNNH_TypeInfo,method);
    }
    bVar1 = KGFBAIBBNNH__MAJPEEKDPJJ(iVar2,&local_14,(MethodInfo *)0x0);
    if (bVar1) {
      value = -0x80000000;
      if (local_14 != INFINITY) {
        value = (int)local_14;
      }
      iVar2 = UnityEngine_UI_Text__get_fontSize((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
      if (iVar2 != value) {
        UnityEngine_UI_Text__set_fontSize((UnityEngine_UI_Text_o *)__this,value,(MethodInfo *)0x0);
        UnityEngine_UI_Text__set_resizeTextMaxSize
                  ((UnityEngine_UI_Text_o *)__this,value,(MethodInfo *)0x0);
      }
    }
  }
  return;
}

