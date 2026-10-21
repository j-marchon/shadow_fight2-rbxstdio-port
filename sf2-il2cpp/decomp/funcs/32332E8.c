// Nekki.SF2.GUI.Common.HintCanvas$$Update @ RVA 0x32332E8

void Nekki_SF2_GUI_Common_HintCanvas__Update
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *y;
  
  if ((DAT_04566ff6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ff6 = 1;
    method = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_Common_HintCanvas__get_IsShowingAnyHint(__this,method);
  if ((bVar1) &&
     ((iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0), 0 < iVar2 ||
      (bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0), bVar1)))) {
    x = (UnityEngine_Object_o *)(__this->fields).EMFLDKEFCLG;
    if ((UnityEngine_EventSystems_EventSystem_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    y = (UnityEngine_Object_o *)(pUVar3->fields).m_CurrentSelected;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,y,(MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_Common_HintCanvas__HideHint(__this,method_00);
      return;
    }
  }
  return;
}

