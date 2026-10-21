// Nekki.SF2.GUI.Shop.ShopScene$$JFCGHINAKCH @ RVA 0x3432FD4

void Nekki_SF2_GUI_Shop_ShopScene__JFCGHINAKCH
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this_01;
  System_Action_o *CPECAEHDDDB;
  int32_t HONPNKFABKF;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  FFHKCJAOPLI_o *pFVar2;
  ACHLOMELAJE_o *pAVar3;
  LPAPAMPGDFN_o *pLVar4;
  
  if ((DAT_0456817a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_CJDBBCECPGF__);
    DAT_0456817a = 1;
  }
  pFVar2 = (__this->fields).GLGDPPHDDAJ;
  if (pFVar2 == (FFHKCJAOPLI_o *)0x0) {
    Nekki_SF2_GUI_Shop_ShopScene__GoToSlider(__this,1,false,in_x3);
    __this_01 = (__this->fields).GJIPOBCNEPG;
    if (__this_01 != (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) {
      HONPNKFABKF = 1;
LAB_035330c4:
      Nekki_SF2_GUI_Shop_ShopBottomPanel__ScrollOnStartTo(__this_01,HONPNKFABKF,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Shop_ShopScene__GoToSlider(__this,(pFVar2->fields).HPPDIEDAKEC,false,in_x3);
    pFVar2 = (__this->fields).GLGDPPHDDAJ;
    if (pFVar2 != (FFHKCJAOPLI_o *)0x0) {
      if (((pFVar2->fields).HPPDIEDAKEC == 8) &&
         ((pFVar2->fields).CJLNOJMBNPN == (HOOAAGABMBL_o *)0x0)) {
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
        if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField !=
            (ACHLOMELAJE_o *)0x0) {
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
             (pLVar4 = (pAVar3->fields).LMCDOMHENMC, pLVar4 == (LPAPAMPGDFN_o *)0x0))
          goto LAB_035331c4;
          if (0 < (pLVar4->fields).AMIMEMOELHE) {
            CPECAEHDDDB = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            method_00 = Method_Nekki_SF2_GUI_Shop_ShopScene_CJDBBCECPGF__;
            System_Action___ctor();
            Nekki_SF2_GUI_Shop_ShopScene__GFFNHPFGAFJ(__this,CPECAEHDDDB,method_00);
          }
        }
      }
      else {
        __this_00 = (__this->fields)._ItemsPanel;
        if (__this_00 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035331c4;
        method_00 = (MethodInfo *)0x0;
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem
                  (__this_00,(pFVar2->fields).CJLNOJMBNPN,0.0,(MethodInfo *)0x0);
      }
      pFVar2 = (__this->fields).GLGDPPHDDAJ;
      if (pFVar2 != (FFHKCJAOPLI_o *)0x0) {
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pFVar2->fields).NBAFFAONHFO,(MethodInfo *)0x0);
        if (!bVar1) {
          pFVar2 = (__this->fields).GLGDPPHDDAJ;
          if (pFVar2 == (FFHKCJAOPLI_o *)0x0) goto LAB_035331c4;
          Nekki_SF2_GUI_Shop_ShopScene__OpenForgeAndSetRecipe
                    (__this,(pFVar2->fields).NBAFFAONHFO,method_00);
        }
        pFVar2 = (__this->fields).GLGDPPHDDAJ;
        if ((pFVar2 != (FFHKCJAOPLI_o *)0x0) &&
           (__this_01 = (__this->fields).GJIPOBCNEPG,
           __this_01 != (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0)) {
          HONPNKFABKF = (pFVar2->fields).HPPDIEDAKEC;
          goto LAB_035330c4;
        }
      }
    }
  }
LAB_035331c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

