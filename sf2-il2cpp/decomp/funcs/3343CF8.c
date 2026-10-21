// BAGFBDIEEDA$$ONCJPMNKDIM @ RVA 0x3343CF8

void BAGFBDIEEDA__ONCJPMNKDIM
               (CABNDLLKIEL_o *IKKAMAMLIKA,Il2CppObject *ABEGHKPGAAD,System_String_o *IHNKCJHDDKD,
               MethodInfo *method)

{
  System_String_o *JLNPKGGFFDD;
  
                    /* try { // try from 03443d00 to 03543d07 has its CatchHandler @ 03443d08 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03443c64 with catch @ 03443d08
                       catch(type#2 @ 00000000) { ... } // from try @ 03443cec with catch @ 03443d08
                       catch(type#2 @ 00000000) { ... } // from try @ 03443d00 with catch @ 03443d08
                        */
  if ((DAT_045679b2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_045679b2 = 1;
  }
  JLNPKGGFFDD = StringLiteral_1;
  if (IHNKCJHDDKD != (System_String_o *)0x0) {
    JLNPKGGFFDD = IHNKCJHDDKD;
  }
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)IKKAMAMLIKA,JLNPKGGFFDD,(MethodInfo *)0x0);
  return;
}

