// Nekki.SF2.GUI.SFScrollRect$$JMLCAJLBDEK @ RVA 0x323DF7C

void Nekki_SF2_GUI_SFScrollRect__JMLCAJLBDEK
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  
  if ((DAT_0456706d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456706d = 1;
    method = extraout_x1;
  }
  pUVar4 = (__this->fields).m_VerticalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).m_VerticalScrollbarVisibility != 0)) {
    pUVar4 = (__this->fields).m_VerticalScrollbar;
    if ((pUVar4 == (UnityEngine_UI_Scrollbar_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0333e0e4;
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    bVar2 = Nekki_SF2_GUI_SFScrollRect__CMDGHBNNBGN(__this,method_00);
    if (bVar1 != bVar2) {
      pUVar4 = (__this->fields).m_VerticalScrollbar;
      if (pUVar4 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333e0e4;
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_SFScrollRect__CMDGHBNNBGN(__this,method_01);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0333e0e4;
      UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
    }
  }
  pUVar4 = (__this->fields).m_HorizontalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  if ((!bVar1) || ((__this->fields).m_HorizontalScrollbarVisibility == 0)) {
    return;
  }
  pUVar4 = (__this->fields).m_HorizontalScrollbar;
  if ((pUVar4 != (UnityEngine_UI_Scrollbar_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    bVar2 = Nekki_SF2_GUI_SFScrollRect__IBJHGENBANK(__this,method_02);
    if (bVar1 == bVar2) {
      return;
    }
    pUVar4 = (__this->fields).m_HorizontalScrollbar;
    if (pUVar4 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_SFScrollRect__IBJHGENBANK(__this,method_03);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0333e0e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

