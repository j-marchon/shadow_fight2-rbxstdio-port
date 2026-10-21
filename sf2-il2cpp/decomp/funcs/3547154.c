// LEGDPJHPEOB$$MIANEPDADJJ @ RVA 0x3547154

void LEGDPJHPEOB__MIANEPDADJJ
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  HOOAAGABMBL_o *pHVar4;
  GGLKHCAIGDI_o *pGVar5;
  System_Object_array *args;
  undefined8 uVar6;
  ACHLOMELAJE_o *pAVar7;
  GGLKHCAIGDI_Fields *pGVar8;
  UnityEngine_Object_o *x;
  System_String_o *pSVar9;
  
  if ((DAT_04568b19 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_10699);
    FUN_01bab630(&StringLiteral_4949);
    FUN_01bab630(&StringLiteral_4946);
    DAT_04568b19 = 1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0364740c;
  pSVar9 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar1 = System_String__op_Equality(pSVar9,StringLiteral_4946,(MethodInfo *)0x0);
  if (bVar1) {
    if ((x == (UnityEngine_Object_o *)0x0) ||
       (pNVar3 = (Nekki_SF2_GUI_Shop_ItemsPanel_o *)x[0xf].fields.m_CachedPtr,
       pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) goto LAB_0364740c;
    pHVar4 = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(pNVar3,(MethodInfo *)0x0);
    if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
      pNVar3 = (Nekki_SF2_GUI_Shop_ItemsPanel_o *)x[0xf].fields.m_CachedPtr;
      if (((pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) ||
          (pHVar4 = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(pNVar3,(MethodInfo *)0x0),
          pHVar4 == (HOOAAGABMBL_o *)0x0)) ||
         (pGVar8 = (GGLKHCAIGDI_Fields *)&(pHVar4->fields)._COIPKAKHDFP_k__BackingField,
         JDGILABGBGH == (MMFIDKMDADC_o *)0x0)) goto LAB_0364740c;
      goto LAB_03647424;
    }
    pGVar8 = (GGLKHCAIGDI_Fields *)string_TypeInfo->static_fields;
  }
  else {
    bVar1 = System_String__op_Equality(pSVar9,StringLiteral_4949,(MethodInfo *)0x0);
    if (!bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
        pSVar9 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        if ((pSVar9 != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pSVar9,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        {
          uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar6,0);
        }
        if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = (Il2CppObject *)pSVar9;
        thunk_FUN_01c20e04(args->m_Items,pSVar9);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_10699,args,(MethodInfo *)0x0);
        return;
      }
      goto LAB_0364740c;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar7 == (ACHLOMELAJE_o *)0x0) goto LAB_0364740c;
    if ((pAVar7->fields).EANIPGPKLOA != false) {
      if ((x == (UnityEngine_Object_o *)0x0) ||
         (x[0xb].monitor == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0)) goto LAB_0364740c;
      pGVar5 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe
                         (x[0xb].monitor,(MethodInfo *)0x0);
      if (pGVar5 != (GGLKHCAIGDI_o *)0x0) {
        if ((x[0xb].monitor == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) ||
           (pGVar5 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe
                               (x[0xb].monitor,(MethodInfo *)0x0), pGVar5 == (GGLKHCAIGDI_o *)0x0))
        goto LAB_0364740c;
        pGVar8 = &pGVar5->fields;
        goto joined_r0x03647408;
      }
    }
    pGVar8 = (GGLKHCAIGDI_Fields *)string_TypeInfo->static_fields;
  }
joined_r0x03647408:
  if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
LAB_03647424:
    (JDGILABGBGH->fields).HPACPFLKHPK = pGVar8->_COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04(&JDGILABGBGH->fields);
    return;
  }
LAB_0364740c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

