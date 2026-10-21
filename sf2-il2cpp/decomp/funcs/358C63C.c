// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$IKJLLOJAIIO @ RVA 0x358C63C

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__IKJLLOJAIIO
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04568d4e & 1) == 0) {
    FUN_01bab630(&StringLiteral_11962);
    DAT_04568d4e = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__LAGIJBLHBDP(__this,method);
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__JHFKMNBFHKB(__this,method_00);
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__LIHNMMLMLHD(__this,method_01);
  pNVar1 = (__this->fields).lblMusicAdv;
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).lblSoundAdv;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
                ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).lblWithdrawGDPR,
                 StringLiteral_11962,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

