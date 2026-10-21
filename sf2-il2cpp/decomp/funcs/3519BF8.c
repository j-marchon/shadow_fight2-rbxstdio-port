// Nekki.SF2.GUI.Fight.IconAndText$$HMOMDLHAJJE @ RVA 0x3519BF8

void Nekki_SF2_GUI_Fight_IconAndText__HMOMDLHAJJE
               (Nekki_SF2_GUI_Fight_IconAndText_o *__this,MethodInfo *method)

{
  bool bVar1;
  long *plVar2;
  MethodInfo *extraout_x1;
  UnityEngine_UI_LayoutElement_o *x;
  Nekki_SF2_GUI_ResolutionImageLE_o *pNVar3;
  Nekki_SF2_GUI_LabelAliasLE_o *pNVar4;
  
  if ((DAT_0456896a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456896a = 1;
    method = extraout_x1;
  }
  x = (__this->fields).layoutElement;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).icon;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).icon;
      if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) ||
         (plVar2 = *(long **)&(pNVar3->fields).super.UseCacheForSingleSprites, plVar2 == (long *)0x0
         )) goto LAB_03619cf8;
      (**(code **)(*plVar2 + 0x328))(plVar2,*(undefined8 *)(*plVar2 + 0x330));
    }
    pNVar4 = (__this->fields).text;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar4 = (__this->fields).text;
      if ((pNVar4 != (Nekki_SF2_GUI_LabelAliasLE_o *)0x0) &&
         (plVar2 = *(long **)&(pNVar4->fields).super._ToUpperCase, plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x03619ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x328))(plVar2,*(undefined8 *)(*plVar2 + 0x330));
        return;
      }
LAB_03619cf8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

