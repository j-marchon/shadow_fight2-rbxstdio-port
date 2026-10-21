// Nekki.SF2.GUI.Shop.InfoPanelContent$$MABIFJPJJIE @ RVA 0x3006330

System_String_o *
Nekki_SF2_GUI_Shop_InfoPanelContent__MABIFJPJJIE
          (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int32_t JPIEHMHGPEO,int64_t FOHFEBNEFKO,
          System_String_o *FNLDECDGPBF,MethodInfo *method)

{
  System_String_o **ppSVar1;
  int64_t OIHNACKJOJG;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_00;
  HBNENINHPGF_o *pHVar2;
  System_String_o *str3;
  System_String_o *pSVar3;
  float fVar4;
  
  if ((DAT_04565b6d & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_2422);
    FUN_01bab630(&StringLiteral_548);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565b6d = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
  if (__this_00 != (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) {
    pHVar2 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO(__this_00,FNLDECDGPBF,(MethodInfo *)0x0);
    ppSVar1 = (System_String_o **)&StringLiteral_1;
    if (pHVar2 != (HBNENINHPGF_o *)0x0) {
      ppSVar1 = &(pHVar2->fields)._PGCEKJLODEJ_k__BackingField;
    }
    pSVar3 = *ppSVar1;
    if (0 < JPIEHMHGPEO) {
      fVar4 = (float)FOHFEBNEFKO / ((float)JPIEHMHGPEO / 100.0 + 1.0);
      OIHNACKJOJG = -0x7ffffffffffffff8;
      if (fVar4 != INFINITY) {
        OIHNACKJOJG = ((long)fVar4 / 10) * 10;
      }
      pSVar3 = Nekki_SF2_GUI_Shop_InfoPanelContent__BPODLFGBCDE
                         (pSVar3,OIHNACKJOJG,FOHFEBNEFKO,JPIEHMHGPEO,method);
      return pSVar3;
    }
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    str3 = BJFCCEEPHOF__POMAAOILGAL(FOHFEBNEFKO,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat
                       (StringLiteral_2422,pSVar3,StringLiteral_548,str3,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

