// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$LNAECHIOFNK @ RVA 0x317E918

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__LNAECHIOFNK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pNVar1 = (__this->fields)._slideForward;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._slideBackward;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

