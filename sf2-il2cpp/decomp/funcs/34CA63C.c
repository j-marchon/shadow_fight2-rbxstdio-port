// Nekki.SF2.GUI.Fight.StyleBar$$SetSkewBackground @ RVA 0x34CA63C

void Nekki_SF2_GUI_Fight_StyleBar__SetSkewBackground
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,float JLNCOIIGIDA,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImageSkew_o *pNVar2;
  
  if ((DAT_0456865f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456865f = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).background;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).background;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImageSkew__set_SkewAngle(pNVar2,JLNCOIIGIDA,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

