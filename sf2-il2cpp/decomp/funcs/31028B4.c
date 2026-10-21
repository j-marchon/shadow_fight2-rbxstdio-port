// GDLJOHLHGIP$$MAHFCKJGBPP @ RVA 0x31028B4

void GDLJOHLHGIP__MAHFCKJGBPP(GDLJOHLHGIP_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  System_String_o *JAKHFEHMBIC;
  bool bVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *method_00;
  System_String_o *local_38;
  
                    /* try { // try from 032028c4 to 033028cf has its CatchHandler @ 0320233c */
                    /* try { // try from 032028d0 to 033028d7 has its CatchHandler @ 032028d8 */
                    /* catch() { ... } // from try @ 0320285c with catch @ 032028d8
                       catch() { ... } // from try @ 032028d0 with catch @ 032028d8 */
                    /* try { // try from 032028dc to 03302a3f has its CatchHandler @ 032028dc
                       catch() { ... } // from try @ 032028dc with catch @ 032028dc
                       catch() { ... } // from try @ 03202c94 with catch @ 032028dc
                       catch() { ... } // from try @ 03202d3c with catch @ 032028dc
                       catch() { ... } // from try @ 03202d44 with catch @ 032028dc
                       catch() { ... } // from try @ 03202d6c with catch @ 032028dc
                       catch() { ... } // from try @ 03202e64 with catch @ 032028dc */
  if ((DAT_045664d0 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045664d0 = 1;
  }
  method_00 = (MethodInfo *)0x0;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  local_38 = StringLiteral_1;
  GDLJOHLHGIP__DLICHIJMCLK(__this,&local_38,method_00);
  JAKHFEHMBIC = local_38;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = MGNPHCAAEIO__IENLGCHOJAB(JAKHFEHMBIC,(MethodInfo *)0x0);
  if (bVar1) {
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
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ACHLOMELAJE__JFKFMHKDPEK(__this_00,local_38,(MethodInfo *)0x0);
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

