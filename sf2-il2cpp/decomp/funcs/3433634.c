// Nekki.SF2.GUI.Shop.ShopScene$$FJHEDBMBEFI @ RVA 0x3433634

void Nekki_SF2_GUI_Shop_ShopScene__FJHEDBMBEFI
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CAIFMHMOEEP,
               int32_t LFHPEEKGNDO,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *pHVar2;
  HJNDPNIMBBG_o *__this_01;
  ACHLOMELAJE_o *pAVar3;
  PJKHAJKEHEL_o *pPVar4;
  Nekki_SF2_GUI_Shop_ShopScene_StaticFields *pNVar5;
  OLKKAIFGGAK_o *__this_02;
  Nekki_SF2_Core_Fights_ModelContainer_o *pNVar6;
  UnityEngine_Color_o EFJKPCADGJH;
  
  if ((DAT_04568191 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_TypeInfo);
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_8772);
    FUN_01bab630(&StringLiteral_11017);
    DAT_04568191 = 1;
  }
  pHVar2 = CAIFMHMOEEP;
  if (CAIFMHMOEEP == (HOOAAGABMBL_o *)0x0) {
    __this_00 = (__this->fields)._ItemsPanel;
    if (__this_00 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_03533894;
    pHVar2 = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this_00,(MethodInfo *)0x0);
    if (pHVar2 == (HOOAAGABMBL_o *)0x0) {
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
      pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar3 == (ACHLOMELAJE_o *)0x0) ||
         (pPVar4 = (pAVar3->fields).MFLNIMCFPDK, pPVar4 == (PJKHAJKEHEL_o *)0x0)) goto LAB_03533894;
      pHVar2 = (pPVar4->fields).PEMECEBIJDM;
      if (pHVar2 == (HOOAAGABMBL_o *)0x0) {
        return;
      }
    }
  }
  bVar1 = System_String__op_Equality
                    ((pHVar2->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_14870,
                     (MethodInfo *)0x0);
  if (((bVar1) ||
      (bVar1 = System_String__op_Equality
                         ((pHVar2->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_8772,
                          (MethodInfo *)0x0), bVar1)) ||
     (bVar1 = System_String__op_Equality
                        ((pHVar2->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11017,
                         (MethodInfo *)0x0), bVar1)) {
    pNVar6 = (__this->fields)._ModelContainer;
    if ((Nekki_SF2_GUI_Shop_ShopScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar6 == (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) goto LAB_03533894;
    pNVar5 = Nekki_SF2_GUI_Shop_ShopScene_TypeInfo->static_fields;
  }
  else {
    pNVar6 = (__this->fields)._ModelContainer;
    if ((Nekki_SF2_GUI_Shop_ShopScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar6 == (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) goto LAB_03533894;
    pNVar5 = (Nekki_SF2_GUI_Shop_ShopScene_StaticFields *)
             &Nekki_SF2_GUI_Shop_ShopScene_TypeInfo->static_fields->ForceSlowRenderFramesShort;
  }
  Nekki_SF2_Core_Fights_ModelContainer__set_ForceSlowFrames
            (pNVar6,pNVar5->ForceSlowRenderFramesLong,(MethodInfo *)0x0);
  pNVar6 = (__this->fields)._ModelContainer;
  if (pNVar6 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__UpdateModel_ItemInfo
              (pNVar6,CAIFMHMOEEP,LFHPEEKGNDO,(pHVar2->fields)._GMPAEDFIIHF_k__BackingField,
               (MethodInfo *)0x0);
    pNVar6 = (__this->fields)._ModelContainer;
    if (pNVar6 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
      __this_02 = (pNVar6->fields).MAODNBMLDEG;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7e == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7e = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
      if ((__this_01 != (HJNDPNIMBBG_o *)0x0) &&
         (EFJKPCADGJH = HJNDPNIMBBG__EMBBBGLKPNN(__this_01,(MethodInfo *)0x0),
         __this_02 != (OLKKAIFGGAK_o *)0x0)) {
        OLKKAIFGGAK__HLCMLOBHLDA(__this_02,EFJKPCADGJH,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03533894:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

