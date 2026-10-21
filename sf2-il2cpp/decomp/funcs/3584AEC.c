// Nekki.SF2.GUI.Map.MapScene$$IIFBNHGGKBH @ RVA 0x3584AEC

void Nekki_SF2_GUI_Map_MapScene__IIFBNHGGKBH
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *pNVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar2;
  DNELIPCHKLK_o *pDVar3;
  
  if ((DAT_04568d01 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568d01 = 1;
    method = extraout_x1;
  }
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    pDVar3 = (pAVar2->fields).DHDPPCNPAIE;
    pNVar1 = (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *)
             thunk_FUN_01bda818(Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_TypeInfo);
    Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ___ctor(pNVar1,pDVar3,(MethodInfo *)0x0);
    (__this->fields).JIPJNLEIIFC = pNVar1;
    thunk_FUN_01c20e04(&(__this->fields).JIPJNLEIIFC,pNVar1);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      pDVar3 = ACHLOMELAJE__FNLFKFPFDKM(pAVar2,(MethodInfo *)0x0);
      pNVar1 = (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *)
               thunk_FUN_01bda818(Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_TypeInfo);
      Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ___ctor(pNVar1,pDVar3,(MethodInfo *)0x0);
      (__this->fields).FLAMCGAKENN = pNVar1;
      thunk_FUN_01c20e04(&(__this->fields).FLAMCGAKENN,pNVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

