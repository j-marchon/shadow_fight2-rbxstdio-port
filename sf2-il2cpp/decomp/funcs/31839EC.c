// Nekki.SF2.GUI.Fight.VsScreen$$FMONKFODIAA @ RVA 0x31839EC

void Nekki_SF2_GUI_Fight_VsScreen__FMONKFODIAA
               (Nekki_SF2_GUI_Fight_VsScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pNVar1 = (__this->fields).nameLeft;
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).nameRight;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

