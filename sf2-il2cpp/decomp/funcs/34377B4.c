// Nekki.SF2.GUI.Shop.ShopScene$$OMOHFLMFCOG @ RVA 0x34377B4

void Nekki_SF2_GUI_Shop_ShopScene__OMOHFLMFCOG
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  GGLKHCAIGDI_o *pGVar3;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *NKCMBEFHFII;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this_01;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_02;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar4;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar5;
  
  if ((DAT_045681a4 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045681a4 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
LAB_03537980:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((IMMNELPBGIF->klass->_1).element_class !=
      (Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  piVar2 = (int *)thunk_FUN_01bda96c();
  if (*piVar2 == 1) {
    pNVar5 = (__this->fields)._ForgePanel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      pNVar5 = (__this->fields)._ForgePanel;
      if (pNVar5 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
                    /* try { // try from 03537870 to 0363795f has its CatchHandler @ 03537870
                       catch() { ... } // from try @ 03537870 with catch @ 03537870
                       catch() { ... } // from try @ 03537a44 with catch @ 03537870
                       catch() { ... } // from try @ 03537a64 with catch @ 03537870
                       catch() { ... } // from try @ 03537ae8 with catch @ 03537870
                       catch() { ... } // from try @ 03537b38 with catch @ 03537870
                       catch() { ... } // from try @ 03537b70 with catch @ 03537870 */
        if ((pNVar5->fields).PCBECBEFJOI == (HOOAAGABMBL_o *)0x0) {
          return;
        }
        pGVar3 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe(pNVar5,(MethodInfo *)0x0);
        if (pGVar3 == (GGLKHCAIGDI_o *)0x0) {
          return;
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
        pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
            (pNVar5 = (__this->fields)._ForgePanel,
            pNVar5 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0)) &&
           (__this_00 = (pAVar4->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
          NKCMBEFHFII = GGHCLMEFIGO__JNFIBDBHNOA
                                  (__this_00,(pNVar5->fields).PCBECBEFJOI,(MethodInfo *)0x0);
          if (NKCMBEFHFII == (IGFGDDANEPE_o *)0x0) {
            return;
          }
          pNVar5 = (__this->fields)._ForgePanel;
          if (pNVar5 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
            pGVar3 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe
                               (pNVar5,(MethodInfo *)0x0);
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
            }
            NLPJLHOEAOE__KNHMJABJGIP(NKCMBEFHFII,pGVar3,(MethodInfo *)0x0);
            __this_01 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent(__this,method_00);
            if (__this_01 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) {
              Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshButtons
                        (__this_01,(MethodInfo *)0x0);
              pNVar5 = (__this->fields)._ForgePanel;
              if (pNVar5 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
                Nekki_SF2_GUI_Shop_Forge_ForgePanel__set_ItemInfo
                          (pNVar5,(NKCMBEFHFII->fields).PCBECBEFJOI,(MethodInfo *)0x0);
                __this_02 = (__this->fields).CCKIFMALFBA;
                    /* try { // try from 03537960 to 03637967 has its CatchHandler @ 03537b1c */
                if (__this_02 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
                  Nekki_SF2_GUI_Menu_MainMenu__UpdateMaterials(__this_02,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto LAB_03537980;
    }
  }
                    /* try { // try from 03537978 to 03637983 has its CatchHandler @ 03537b14 */
  return;
}

