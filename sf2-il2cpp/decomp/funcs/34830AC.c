// Nekki.SF2.GUI.Dialogs.SettingsDialog$$IKJLLOJAIIO @ RVA 0x34830AC

void Nekki_SF2_GUI_Dialogs_SettingsDialog__IKJLLOJAIIO
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this_00;
  Nekki_SF2_GUI_ResolutionButton_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_LabelAlias_o *BHLFJNNLJBF;
  undefined8 *puVar3;
  
  __this_00 = __this;
  if ((DAT_0456838c & 1) == 0) {
    FUN_01bab630(&StringLiteral_11972);
    FUN_01bab630(&StringLiteral_11964);
    FUN_01bab630(&StringLiteral_16816);
    __this_00 = (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)FUN_01bab630(&StringLiteral_11973);
    DAT_0456838c = 1;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
            (__this_00,(__this->fields).lblSupport,StringLiteral_11973,in_x3);
  BHLFJNNLJBF = (__this->fields).lblGameCenter;
  bVar1 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0);
  bVar2 = false;
  puVar3 = &StringLiteral_11964;
  if (bVar1) {
    bVar2 = IMAPABEJECG__FCBJDMNEPGB((MethodInfo *)0x0);
    if (!bVar2) {
      puVar3 = &StringLiteral_16816;
    }
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)(ulong)bVar2,BHLFJNNLJBF,
             (System_String_o *)*puVar3,in_x3);
  __this_01 = (__this->fields).btnItunes;
  if ((__this_01 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
     (__this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
     __this_02 != (UnityEngine_GameObject_o *)0x0)) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
    if (bVar2) {
      Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
                ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)0x1,(__this->fields).lblItunes,
                 StringLiteral_11972,in_x3);
    }
                    /* WARNING: Could not recover jumptable at 0x035831a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._35_JBFCMIMJLCF.methodPtr)
              (__this,(__this->klass->vtable)._35_JBFCMIMJLCF.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

