// PNHGEFAOFFE$$OOFKMPOACEI @ RVA 0x3180154

void PNHGEFAOFFE__OOFKMPOACEI(PNHGEFAOFFE_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  DGGBFKNKEAH_o *pDVar3;
  MethodInfo *extraout_x1;
  undefined8 extraout_x1_00;
  FEFHGAHGKBK_o *pFVar4;
  PABDDHCGGID_o *pPVar5;
  undefined1 auVar6 [16];
  
                    /* try { // try from 0328015c to 03380183 has its CatchHandler @ 0328037c */
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
    DAT_045655e8 = '\x01';
    method = extraout_x1;
  }
  pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
                    /* try { // try from 03280190 to 03380197 has its CatchHandler @ 03280360 */
  auVar1._8_8_ = 0;
  auVar1._0_8_ = method;
  auVar6 = auVar1 << 0x40;
  if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
                    /* try { // try from 03280198 to 033801a3 has its CatchHandler @ 0328035c */
    bVar2 = DGGBFKNKEAH__PKIJIAGMPAJ(pDVar3,(MethodInfo *)0x0);
    auVar6._1_7_ = 0;
    auVar6[0] = bVar2;
    auVar6._8_8_ = extraout_x1_00;
    if (bVar2) {
                    /* try { // try from 032801a4 to 0338032b has its CatchHandler @ 0327dc98 */
      if (DAT_045655e8 == '\0') {
        auVar6 = FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
        DAT_045655e8 = '\x01';
      }
      pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
      if (((pDVar3 == (DGGBFKNKEAH_o *)0x0) ||
          (pFVar4 = (pDVar3->fields).NANHMGNOPME, pFVar4 == (FEFHGAHGKBK_o *)0x0)) ||
         (pPVar5 = (pFVar4->fields).BFFEOCLPJCD, pPVar5 == (PABDDHCGGID_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pPVar5->fields)._IONHCJGNJFK_k__BackingField == false) {
        PNHGEFAOFFE__LMIACIOFGEC(auVar6._0_8_,auVar6._8_8_);
        return;
      }
    }
  }
  PNHGEFAOFFE__LPHIJEDBBFO(auVar6._0_8_,auVar6._8_8_);
  return;
}

