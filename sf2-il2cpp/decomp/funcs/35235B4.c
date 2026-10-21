// Nekki.SF2.GUI.Shop.Forge.RecipePropertiesUI$$NCMIHHJLDPG @ RVA 0x35235B4

void Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__NCMIHHJLDPG
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *__this,
               System_Action_GameObject__o *ACOFKBGCMHA,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  DEKKGJNMFEB_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  MethodInfo *method_00;
  MDLDFLDGLND_o *pMVar6;
  int iVar7;
  
  if ((DAT_045689eb & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045689eb = 1;
  }
  if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((__this_01 != (ACHLOMELAJE_o *)0x0) &&
     (iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_01,(MethodInfo *)0x0),
     __this_00 != (DEKKGJNMFEB_o *)0x0)) {
    iVar1 = DEKKGJNMFEB__HNBCOIJFCCA(__this_00,iVar1,(MethodInfo *)0x0);
    if (0 < (__this->fields).EMPBBAGMIFD) {
      iVar7 = 0;
      do {
        pMVar6 = (__this->fields).CJBEIFPMJMH;
        if (pMVar6 == (MDLDFLDGLND_o *)0x0) goto LAB_03623770;
        iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pMVar6->fields)._IMHPFEFJIGN_k__BackingField.fields,(MethodInfo *)0x0);
        pMVar6 = (__this->fields).CJBEIFPMJMH;
        if (pMVar6 == (MDLDFLDGLND_o *)0x0) goto LAB_03623770;
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pMVar6->fields)._INNMKAKBLBD_k__BackingField.fields,(MethodInfo *)0x0);
        pMVar6 = (__this->fields).CJBEIFPMJMH;
        if (pMVar6 == (MDLDFLDGLND_o *)0x0) goto LAB_03623770;
        iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pMVar6->fields)._IMHPFEFJIGN_k__BackingField.fields,(MethodInfo *)0x0);
        pMVar6 = (__this->fields).CJBEIFPMJMH;
        if (pMVar6 == (MDLDFLDGLND_o *)0x0) goto LAB_03623770;
        method_00 = (MethodInfo *)0x0;
        iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pMVar6->fields)._INNMKAKBLBD_k__BackingField.fields,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__GJKBKFHCCPG
                  (__this,ABS((float)(iVar3 + iVar2) * 0.5) + (float)iVar1,(float)(iVar4 + iVar1),
                   (float)(iVar5 + iVar1),ACOFKBGCMHA,method_00);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (__this->fields).EMPBBAGMIFD);
    }
    return;
  }
LAB_03623770:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

