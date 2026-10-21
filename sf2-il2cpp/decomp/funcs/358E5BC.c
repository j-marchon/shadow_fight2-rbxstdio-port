// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$IIHMBEPEFDJ @ RVA 0x358E5BC

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__IIHMBEPEFDJ
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  KPKMEEIPCJA_o *pKVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  KPKMEEIPCJA_c *pKVar7;
  ulong uVar8;
  int32_t *piVar9;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar10;
  
                    /* try { // try from 0368e5f4 to 0378e61b has its CatchHandler @ 0368e8a4 */
  if ((DAT_04568d5e & 1) == 0) {
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&KPKMEEIPCJA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_11936);
    FUN_01bab630(&StringLiteral_11951);
    FUN_01bab630(&StringLiteral_11947);
                    /* try { // try from 0368e650 to 0378e69b has its CatchHandler @ 0368e8ac */
    FUN_01bab630(&StringLiteral_11941);
    FUN_01bab630(&StringLiteral_11944);
    DAT_04568d5e = 1;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).btnGraphics,
             StringLiteral_11941,0xb,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).btnLocationResolution
             ,StringLiteral_11944,0xc,(MethodInfo *)0x0);
                    /* try { // try from 0368e6a0 to 0378e6a7 has its CatchHandler @ 0368e8a0 */
                    /* try { // try from 0368e6ac to 0378e6b7 has its CatchHandler @ 0368e894 */
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).btnController,
             StringLiteral_11936,0xd,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).btnWithdrawGDPR,
             StringLiteral_11951,0x10,(MethodInfo *)0x0);
                    /* try { // try from 0368e6d0 to 0378e6db has its CatchHandler @ 0368e890 */
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0368e6dc to 0378e863 has its CatchHandler @ 0368e3f4 */
  pKVar4 = IFAMAAGNCBJ__GEGPHEPFMAO((MethodInfo *)0x0);
  if (pKVar4 != (KPKMEEIPCJA_o *)0x0) {
    pKVar7 = pKVar4->klass;
    uVar1._0_1_ = (pKVar7->_2).rank;
    uVar1._1_1_ = (pKVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pKVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)KPKMEEIPCJA_TypeInfo) {
          pVVar5 = pKVar7->vtable + (*piVar9 + 1);
          goto LAB_0368e744;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pKVar4,KPKMEEIPCJA_TypeInfo,1);
LAB_0368e744:
    iVar3 = (*pVVar5->methodPtr)(pKVar4,pVVar5->method);
    if (iVar3 != 1) {
      Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
                ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,
                 (__this->fields).btnShowPrivacyOptions,StringLiteral_11947,0x11,(MethodInfo *)0x0);
      method_00 = extraout_x1_01;
      goto LAB_0368e7e0;
    }
  }
  pNVar10 = (__this->fields).btnShowPrivacyOptions;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar10,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar2) {
    pNVar10 = (__this->fields).btnShowPrivacyOptions;
    if ((((pNVar10 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) ||
         (pUVar6 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
         pUVar6 == (UnityEngine_Transform_o *)0x0)) ||
        (pUVar6 = UnityEngine_Transform__get_parent(pUVar6,(MethodInfo *)0x0),
        pUVar6 == (UnityEngine_Transform_o *)0x0)) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
LAB_0368e7e0:
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__IJCCOHCPGIM(__this,method_00);
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OIAIFGDLFHJ(__this,method_01);
  return;
}

