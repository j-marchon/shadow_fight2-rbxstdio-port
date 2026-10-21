// Nekki.SF2.GUI.Map.MapScene$$ReloadZones @ RVA 0x3587CF8

void Nekki_SF2_GUI_Map_MapScene__ReloadZones
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this_00;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  System_String_o *pSVar3;
  OOMHDDBCBJP_o *BANHBMINMMP;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *in_x2;
  ACHLOMELAJE_o *pAVar4;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o **ppNVar5;
  PKHMIGFEJCL_o *pPVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_04568d0b & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568d0b = 1;
  }
  __this_00 = (__this->fields).MGIJJGGPFJB;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapButtonsPanel__RemoveMapButtons(__this_00,(MethodInfo *)0x0);
    pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
      Nekki_SF2_GUI_Map_MapContainer__Clear(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
      if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
        Nekki_SF2_GUI_Map_MapContainer__AddStoryZones(pNVar1,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Map_MapScene__HNEBBPHILEA(__this,method_00);
        ppNVar5 = &(__this->fields).CAJCGACFIHD;
        *ppNVar5 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
        thunk_FUN_01c20e04(ppNVar5,0);
        (__this->fields).IAAABJBDEMK = 0;
        pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          pPVar6 = (pNVar2->fields).QuestParameters;
          pSVar3 = MMOGKBGEPGM__GKMAFGODLLG(0x10,(MethodInfo *)0x0);
          if (pPVar6 != (PKHMIGFEJCL_o *)0x0) {
            ppSVar7 = &(pPVar6->fields).CHFDDNODLGP;
            *ppSVar7 = pSVar3;
            thunk_FUN_01c20e04(ppSVar7,pSVar3);
            Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method_01);
            Nekki_SF2_GUI_Map_MapScene__IIFBNHGGKBH(__this,method_02);
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
            if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
              BANHBMINMMP = NLPJLHOEAOE__JIOEHAPGADN((pAVar4->fields).DHDPPCNPAIE,(MethodInfo *)0x0)
              ;
              Nekki_SF2_GUI_Map_MapScene__SelectBattle(__this,BANHBMINMMP,0.0,in_x2);
              Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_03);
              Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,method_04);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

