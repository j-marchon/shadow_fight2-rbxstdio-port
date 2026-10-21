// PBBLIKILADK$$MAHFCKJGBPP @ RVA 0x35962A4

void PBBLIKILADK__MAHFCKJGBPP(PBBLIKILADK_o *__this,PKHMIGFEJCL_o *OKBIKHHKOEN,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *pAVar2;
  NDPMLPGANCI_o *__this_00;
  long lVar3;
  
  if ((DAT_04568da3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04568da3 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,OKBIKHHKOEN,(MethodInfo *)0x0);
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__BCBNBDFOIEA(pAVar2,(bool)(__this->fields).super.field_0x51,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar2,false,(MethodInfo *)0x0);
      __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (NDPMLPGANCI_o *)0x0) {
        iVar1 = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
        if (iVar1 == 5) {
          lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01b81620();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01b81620();
          }
          if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8) ==
              (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_03696418;
          Nekki_SF2_GUI_Map_MapScene__UpdateRaidToggleBtn_EnableAndActive
                    ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                     (MethodInfo *)0x0);
        }
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03696418:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

