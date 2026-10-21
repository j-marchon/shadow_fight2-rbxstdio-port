// Nekki.SF2.GUI.Map.RaidQuestsButton$$OnDestroy @ RVA 0x3485FE8

void Nekki_SF2_GUI_Map_RaidQuestsButton__OnDestroy
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045683ad & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_045683ad = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Map_RaidQuestsButton__AIFHOHIMLFM(__this,method_00);
    SFButton__OnDestroy((SFButton_o *)__this,(MethodInfo *)0x0);
    return;
  }
  return;
}

