// Nekki.SF2.GUI.Profile.InfoPanel$$get_TrickPlayButton @ RVA 0x333B38C

LabelButton_o *
Nekki_SF2_GUI_Profile_InfoPanel__get_TrickPlayButton
          (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_TrickContent_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  LabelButton_o *pLVar3;
  
  pNVar2 = (__this->fields)._TrickContent;
  if ((pNVar2 != (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    pLVar3 = (LabelButton_o *)0x0;
    if (bVar1) {
      pNVar2 = (__this->fields)._TrickContent;
      if (pNVar2 == (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) goto LAB_0343b3d0;
      pLVar3 = (pNVar2->fields)._ShowButton;
    }
    return pLVar3;
  }
LAB_0343b3d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

