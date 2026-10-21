// Nekki.SF2.GUI.Profile.InfoPanel$$PPGCAKOPAJI @ RVA 0x333AD98

void Nekki_SF2_GUI_Profile_InfoPanel__PPGCAKOPAJI
               (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,System_String_o *JLNPKGGFFDD,
               bool BALACEGEDBN,int32_t CFBDPNLELPP,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pNVar1 = (__this->fields)._TitleLabel;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,CFBDPNLELPP,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._TitleLabel;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar1,JLNPKGGFFDD,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._TitleLabel;
      if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,BALACEGEDBN,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

