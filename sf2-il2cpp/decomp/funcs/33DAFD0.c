// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$LPNCEHPFOAF @ RVA 0x33DAFD0

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__LPNCEHPFOAF
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o *__this_02;
  DEKKGJNMFEB_o *__this_03;
  System_Collections_Generic_List_GGLKHCAIGDI__o *pSVar3;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar5;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar6;
  AMJMGFCCAKN_o *__this_04;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o **ppNVar7;
  System_Collections_Generic_List_GGLKHCAIGDI__o **ppSVar8;
  GGLKHCAIGDI_o **ppGVar9;
  
  if ((DAT_04567e73 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_Clear__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<GGLKHCAIGDI>_Invoke__);
    DAT_04567e73 = 1;
    method = extraout_x1;
  }
  (__this->fields).LJCKJIAEIGD = false;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar5->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    __this_01 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,(__this->fields).PCBECBEFJOI,(MethodInfo *)0x0);
    if ((__this_01 == (IGFGDDANEPE_o *)0x0) ||
       (iVar2 = IGFGDDANEPE__LDJLMEFOMLG(__this_01,(MethodInfo *)0x0), iVar2 < 1)) {
      pSVar3 = (__this->fields).OKIANCELJJF;
      if (pSVar3 != (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
        iVar2 = (pSVar3->fields)._size;
        (pSVar3->fields)._size = 0;
        (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
        if (0 < iVar2) {
          System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
        }
        ppNVar7 = &(__this->fields)._LDAHBFIIBJJ_k__BackingField;
        *ppNVar7 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0;
        thunk_FUN_01c20e04(ppNVar7,0);
        pNVar4 = (__this->fields)._TableView;
        (__this->fields).MALOHNFLOGO = false;
        if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
          Nekki_SF2_GUI_TableView__ReloadData(pNVar4,(MethodInfo *)0x0);
          __this_02 = (__this->fields)._OnRecipeSelected;
          if (__this_02 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o *)0x0) {
            UnityEngine_Events_UnityEvent<object>__Invoke
                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,(Il2CppObject *)0x0,
                       Method_UnityEngine_Events_UnityEvent<GGLKHCAIGDI>_Invoke__);
            return;
          }
        }
      }
    }
    else {
      __this_04 = (__this_01->fields).HJLEJIJKJKD;
      if (__this_04 == (AMJMGFCCAKN_o *)0x0) {
        bVar1 = false;
      }
      else {
        bVar1 = AMJMGFCCAKN__FLMFEBPHFIP(__this_04,(MethodInfo *)0x0);
      }
      (__this->fields).MALOHNFLOGO = bVar1;
      if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_03 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_03 != (DEKKGJNMFEB_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        pSVar3 = DEKKGJNMFEB__NFKLPHNDMNO(__this_03,__this_01,(MethodInfo *)0x0);
        ppSVar8 = &(__this->fields).OKIANCELJJF;
        *ppSVar8 = pSVar3;
        thunk_FUN_01c20e04(ppSVar8);
        pNVar4 = (__this->fields)._TableView;
        if ((pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
           (pNVar6 = (pNVar4->fields).IDIMFLMKDMD, pNVar6 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0)
           ) {
          (pNVar6->fields).super.field_0x111 = (__this->fields).MALOHNFLOGO ^ 1;
          Nekki_SF2_GUI_TableView__ReloadData(pNVar4,(MethodInfo *)0x0);
          if ((__this->fields).MALOHNFLOGO == false) {
            return;
          }
          ppGVar9 = &(__this->fields).DMAFCPPFLEN;
          *ppGVar9 = (GGLKHCAIGDI_o *)0x0;
          thunk_FUN_01c20e04(ppGVar9,0);
          pNVar4 = (__this->fields)._TableView;
          if (__this_04 == (AMJMGFCCAKN_o *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__NMPMNEEHKEL
                              (__this,(__this_04->fields).PHAGOJCOMPN,method_00);
          }
          if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
            Nekki_SF2_GUI_TableView__ScrollToCell(pNVar4,iVar2,0.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

