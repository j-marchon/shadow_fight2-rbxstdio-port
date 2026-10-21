// Nekki.SF2.GUI.Shop.InfoPanelContent$$HDADGIDKFGF @ RVA 0x3007738

bool Nekki_SF2_GUI_Shop_InfoPanelContent__HDADGIDKFGF
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  IIHMKHNLJKD_o *pIVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04565b73 & 1) == 0) {
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
    FUN_01bab630(&StringLiteral_9257);
    DAT_04565b73 = 1;
    method = extraout_x1;
  }
  if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ACHLOMELAJE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b86 == '\0') {
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
    DAT_04565b86 = '\x01';
    method = extraout_x1_01;
  }
  if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ACHLOMELAJE_TypeInfo,method);
  }
  pIVar4 = ACHLOMELAJE_TypeInfo->static_fields->BFJCOMHPDJC;
  if (pIVar4 != (IIHMKHNLJKD_o *)0x0) {
    IIHMKHNLJKD__JJCEPPADHNK(pIVar4,StringLiteral_9257,(MethodInfo *)0x0);
    if (DAT_04565b86 == '\0') {
      FUN_01bab630(&ACHLOMELAJE_TypeInfo);
      DAT_04565b86 = '\x01';
    }
    if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar4 = ACHLOMELAJE_TypeInfo->static_fields->BFJCOMHPDJC;
    if (pIVar4 != (IIHMKHNLJKD_o *)0x0) {
      bVar1 = IIHMKHNLJKD__NKNLFKGBOPK(pIVar4,StringLiteral_9257,(MethodInfo *)0x0);
      if (!bVar1) {
        return true;
      }
      if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b86 == '\0') {
        FUN_01bab630(&ACHLOMELAJE_TypeInfo);
        DAT_04565b86 = '\x01';
      }
      if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar4 = ACHLOMELAJE_TypeInfo->static_fields->BFJCOMHPDJC;
      if (pIVar4 != (IIHMKHNLJKD_o *)0x0) {
        iVar2 = IIHMKHNLJKD__OAKGGOAHHAA(pIVar4,StringLiteral_9257,(MethodInfo *)0x0);
        if (DAT_04565b86 == '\0') {
          FUN_01bab630(&ACHLOMELAJE_TypeInfo);
          DAT_04565b86 = '\x01';
        }
        if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pIVar4 = ACHLOMELAJE_TypeInfo->static_fields->BFJCOMHPDJC;
        if (pIVar4 != (IIHMKHNLJKD_o *)0x0) {
          iVar3 = IIHMKHNLJKD__HLIPFHGLPKN(pIVar4,StringLiteral_9257,(MethodInfo *)0x0);
          return iVar3 < iVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

