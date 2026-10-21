// Nekki.SF2.GUI.Map.MapButtonViewBase$$Update @ RVA 0x31B85CC

void Nekki_SF2_GUI_Map_MapButtonViewBase__Update
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  Nekki_SF2_GUI_Map_MapButtonViewBase__OPOJHCGBBBM(__this,method);
  if ((__this->fields).super.DFGLKIENEIH == false) {
    return;
  }
  pUVar2 = (__this->fields)._hintRoot;
  if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeInHierarchy(pUVar3,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pUVar2 = (__this->fields)._hintRoot;
    (__this->fields).super.DFGLKIENEIH = false;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Map_IRaidKeysView__AMOJAGCNKAB(pUVar3,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

