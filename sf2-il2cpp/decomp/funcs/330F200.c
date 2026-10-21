// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$LNAECHIOFNK @ RVA 0x330F200

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LNAECHIOFNK
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool_conflict bVar1;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  bool value;
  
  pNVar2 = (__this->fields)._prevConsumable;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    bVar1 = (__this->fields).OCMNMHFIJCJ;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      value = (bool)(CJNHFNHJHPE & (bVar1 ^ 0xffU));
      UnityEngine_GameObject__SetActive(pUVar3,value,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._nextConsumable;
      if ((pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

