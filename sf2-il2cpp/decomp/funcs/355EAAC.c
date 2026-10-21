// Nekki.SF2.GUI.Fight.ScreenModel$$get_MaxStyle @ RVA 0x355EAAC

int32_t Nekki_SF2_GUI_Fight_ScreenModel__get_MaxStyle
                  (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_StylePanel_o *pNVar3;
  
  if ((DAT_04568ba7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ba7 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._stylePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._stylePanel;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = (pNVar3->fields).HOBABLEHLDI;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

