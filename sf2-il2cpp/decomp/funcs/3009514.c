// Nekki.SF2.GUI.Shop.InfoPanelContent$$ALIIMHNKFNO @ RVA 0x3009514

void Nekki_SF2_GUI_Shop_InfoPanelContent__ALIIMHNKFNO
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *arg1;
  System_String_o *str1;
  HOOAAGABMBL_o *pHVar3;
  System_String_o *str0;
  int64_t local_40;
  int64_t iStack_38;
  int64_t iStack_30;
  undefined8 uStack_28;
  
  if ((DAT_04565b65 & 1) == 0) {
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    FUN_01bab630(&StringLiteral_22481);
    FUN_01bab630(&StringLiteral_14785);
    FUN_01bab630(&StringLiteral_9095);
    DAT_04565b65 = 1;
  }
  pNVar2 = (__this->fields)._descriptionDonate;
  if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pHVar3 = (__this->fields).BBODGCMLKFP;
    if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
      str0 = (pHVar3->fields)._OICGFKLBNPE_k__BackingField;
      bVar1 = System_String__op_Equality
                        ((pHVar3->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_14785,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pHVar3 = (__this->fields).BBODGCMLKFP;
        if (pHVar3 == (HOOAAGABMBL_o *)0x0) goto LAB_03109634;
        iStack_38 = (pHVar3->fields)._OFDIEEPACGC_k__BackingField.fields.hiddenValue;
        local_40 = (pHVar3->fields)._OFDIEEPACGC_k__BackingField.fields.currentCryptoKey;
        uStack_28._0_1_ = (pHVar3->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValueActive;
        uStack_28._1_1_ = (pHVar3->fields)._OFDIEEPACGC_k__BackingField.fields.inited;
        uStack_28._2_6_ =
             *(undefined6 *)&(pHVar3->fields)._OFDIEEPACGC_k__BackingField.fields.field_0x1a;
        iStack_30 = (pHVar3->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValue;
        arg1 = (Il2CppObject *)
               thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,&local_40)
        ;
        str1 = System_String__Format(StringLiteral_22481,StringLiteral_9095,arg1,(MethodInfo *)0x0);
        str0 = System_String__Concat(str0,str1,(MethodInfo *)0x0);
      }
      pNVar2 = (__this->fields)._descriptionDonate;
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,str0,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03109634:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

