// LHKALFIIJKB$$BDHOPPBMMCH @ RVA 0x3500980

void LHKALFIIJKB__BDHOPPBMMCH
               (System_String_o *CEHOJOFLMFF,System_Byte_array *KBHEDDFCBMM,MethodInfo *method)

{
  bool bVar1;
  LHKALFIIJKB_c *method_00;
  System_String_o *AAIHDEKMIJG;
  CFGLKHFFEKA_o *FMPJLBLNHMC;
  undefined8 extraout_x1;
  undefined1 auVar2 [16];
  
  if ((DAT_04568851 & 1) == 0) {
    FUN_01bab630(&CFGLKHFFEKA_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568851 = 1;
  }
  if ((KBHEDDFCBMM == (System_Byte_array *)0x0) ||
     (bVar1 = System_String__IsNullOrEmpty(CEHOJOFLMFF,(MethodInfo *)0x0), bVar1)) {
    return;
  }
  method_00 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
  }
  AAIHDEKMIJG = LHKALFIIJKB__FPOJCJJJGAD((MethodInfo *)method_00);
  NEHNBJKKABI__IGOPCLNJIGA(AAIHDEKMIJG,KBHEDDFCBMM,(MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  FMPJLBLNHMC = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
  if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CFGLKHFFEKA_TypeInfo);
  }
  bVar1 = CFGLKHFFEKA__ONPEKFBMDKM(FMPJLBLNHMC,CEHOJOFLMFF,(MethodInfo *)0x0);
  auVar2._1_7_ = 0;
  auVar2[0] = bVar1;
  auVar2._8_8_ = extraout_x1;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    auVar2 = thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
  }
  if (!bVar1) {
    LHKALFIIJKB__LMFIKNOJNPJ(auVar2._0_8_);
    return;
  }
  LHKALFIIJKB__KAHONNFANOI(true,auVar2._8_8_);
  return;
}

