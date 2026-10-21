// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$LIHNMMLMLHD @ RVA 0x358CBE8

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__LIHNMMLMLHD
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *pSVar6;
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this_00;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  long lVar8;
  Il2CppClass *pIVar9;
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_c *pNVar10;
  Nekki_SF2_GUI_LabelAlias_o *pNVar11;
  ulong uVar12;
  int32_t *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((DAT_04568d59 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_11959);
    DAT_04568d59 = 1;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).lblController,
             StringLiteral_1,(MethodInfo *)0x0);
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar4 = Method_System_Array_Empty<string>__;
  lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar8 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar8 = *(long *)(lVar4 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01b81620();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  uVar15 = StringLiteral_11959;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar3->klass;
    uVar14 = **(undefined8 **)(lVar4 + 0xb8);
    uVar1._0_1_ = (pIVar9->_2).rank;
    uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar13 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar9->vtable + (*piVar13 + 0xc);
          goto LAB_0368cd3c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0368cd3c:
    pSVar6 = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar15,uVar14,pVVar5->method);
    __this_00 = (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *)
                EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                          (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    pSVar7 = Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__JHMNGFCLGGE(__this_00,method_00);
    lVar4 = Method_System_Array_Empty<string>__;
    lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar8 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar8 = *(long *)(lVar4 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01b81620();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *)0x0) {
      pNVar10 = __this_00->klass;
      uVar15 = **(undefined8 **)(lVar4 + 0xb8);
      uVar2._0_1_ = (pNVar10->_2).rank;
      uVar2._1_1_ = (pNVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar13 = &((pNVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar5 = &(pNVar10->vtable)._0_Equals + (*piVar13 + 0xc);
            goto LAB_0368ce10;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this_00,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0368ce10:
      pSVar7 = (System_String_o *)(*pVVar5->methodPtr)(__this_00,pSVar7,uVar15,pVVar5->method);
      pSVar6 = System_String__Concat(pSVar6,pSVar7,(MethodInfo *)0x0);
      pNVar11 = (__this->fields).lblController;
      if (pNVar11 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0368ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar11->klass->vtable)._75_set_text.methodPtr)
                  (pNVar11,pSVar6,(pNVar11->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

