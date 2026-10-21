// Nekki.SF2.GUI.Dialogs.SettingsDialog$$UpdateLabels @ RVA 0x348400C

void Nekki_SF2_GUI_Dialogs_SettingsDialog__UpdateLabels
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Nekki_SF2_GUI_Dialogs_SettingsDialog_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this_00;
  Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this_01;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *in_x3;
  Il2CppClass *pIVar5;
  ulong uVar6;
  int32_t *piVar7;
  Nekki_SF2_GUI_LabelAlias_o *BHLFJNNLJBF;
  
  pNVar2 = __this;
  if ((DAT_045683a3 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_11971);
    FUN_01bab630(&StringLiteral_11961);
    pNVar2 = (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)FUN_01bab630(&StringLiteral_11970);
    DAT_045683a3 = 1;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
            (pNVar2,(__this->fields).lblMusic,StringLiteral_11970,in_x3);
  Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
            (__this_00,(__this->fields).lblSound,StringLiteral_11971,in_x3);
  Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
            (__this_01,(__this->fields).lblCredits,StringLiteral_11961,in_x3);
  BHLFJNNLJBF = (__this->fields).lblLanguage;
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar5 = pIVar3->klass;
    uVar1._0_1_ = (pIVar5->_2).rank;
    uVar1._1_1_ = (pIVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pIVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar4 = pIVar5->vtable + (*piVar7 + 6);
          goto LAB_03584120;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,6);
LAB_03584120:
    pNVar2 = (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)(*pVVar4->methodPtr)(pIVar3,pVVar4->method);
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
                (pNVar2,BHLFJNNLJBF,(System_String_o *)(pNVar2->fields).super._topStripe,in_x3);
                    /* WARNING: Could not recover jumptable at 0x0358415c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._34_IKJLLOJAIIO.methodPtr)
                (__this,(__this->klass->vtable)._34_IKJLLOJAIIO.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

