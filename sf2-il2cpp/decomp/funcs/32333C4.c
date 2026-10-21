// Nekki.SF2.GUI.Common.HintCanvas$$get_IsShowingAnyHint @ RVA 0x32333C4

bool Nekki_SF2_GUI_Common_HintCanvas__get_IsShowingAnyHint
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_HintBox_o *pNVar2;
  
  if ((DAT_04566ffb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ffb = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).DMKLEIPIGKO;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).DMKLEIPIGKO;
    if ((pNVar2 != (Nekki_SF2_GUI_HintBox_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

