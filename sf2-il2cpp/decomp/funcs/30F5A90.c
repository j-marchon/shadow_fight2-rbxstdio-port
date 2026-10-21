// Nekki.SF2.GUI.InfoButton$$PBGLGLCDHKF @ RVA 0x30F5A90

void Nekki_SF2_GUI_InfoButton__PBGLGLCDHKF(Nekki_SF2_GUI_InfoButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  
  (__this->fields).BHBGJMCEHCC = (DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).BHBGJMCEHCC,0);
  pNVar1 = (__this->fields)._highlight;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_Alpha(pNVar1,0.0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._highlight;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

