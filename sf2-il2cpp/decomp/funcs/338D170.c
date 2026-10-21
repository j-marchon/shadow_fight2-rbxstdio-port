// AJJPCMDCAOB$$NMIMHEDLAME @ RVA 0x338D170

int32_t AJJPCMDCAOB__NMIMHEDLAME
                  (AJJPCMDCAOB_o *__this,HEOCHMFJJLH_o *FMPJLBLNHMC,HEOCHMFJJLH_o *IHEPHBIPLPM,
                  MethodInfo *method)

{
  int32_t iVar1;
  float in_s1;
  
                    /* catch() { ... } // from try @ 0348ce34 with catch @ 0348d170
                       catch() { ... } // from try @ 0348d054 with catch @ 0348d170 */
                    /* catch() { ... } // from try @ 0348ce24 with catch @ 0348d174
                       catch() { ... } // from try @ 0348d04c with catch @ 0348d174 */
                    /* catch() { ... } // from try @ 0348cc88 with catch @ 0348d178
                       catch() { ... } // from try @ 0348ccd8 with catch @ 0348d178
                       catch() { ... } // from try @ 0348cd9c with catch @ 0348d178
                       catch() { ... } // from try @ 0348ceb4 with catch @ 0348d178
                       catch() { ... } // from try @ 0348cf00 with catch @ 0348d178
                       catch() { ... } // from try @ 0348cf4c with catch @ 0348d178
                       catch() { ... } // from try @ 0348d038 with catch @ 0348d178
                       catch() { ... } // from try @ 0348d044 with catch @ 0348d178
                       catch() { ... } // from try @ 0348d060 with catch @ 0348d178
                       catch() { ... } // from try @ 0348d06c with catch @ 0348d178
                       catch() { ... } // from try @ 0348d078 with catch @ 0348d178
                       catch() { ... } // from try @ 0348d09c with catch @ 0348d178 */
  if ((FMPJLBLNHMC != (HEOCHMFJJLH_o *)0x0) && (IHEPHBIPLPM != (HEOCHMFJJLH_o *)0x0)) {
                    /* try { // try from 0348d190 to 0358d1a7 has its CatchHandler @ 0348d2a4 */
    iVar1 = System_Single__CompareTo
                      ((IHEPHBIPLPM->fields).BKCFPHNEONL,in_s1,
                       (MethodInfo *)&(FMPJLBLNHMC->fields).BKCFPHNEONL);
    if (iVar1 != 0) {
      return iVar1;
    }
                    /* try { // try from 0348d1a8 to 0358d293 has its CatchHandler @ 0348caec */
    iVar1 = System_Int32__CompareTo
                      ((int)FMPJLBLNHMC + 0x20,(IHEPHBIPLPM->fields).MAOCPNLGKLP,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

