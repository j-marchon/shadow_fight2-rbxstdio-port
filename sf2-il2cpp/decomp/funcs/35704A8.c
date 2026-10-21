// NLDPAHFABGL$$Equals @ RVA 0x35704A8

bool NLDPAHFABGL__Equals(NLDPAHFABGL_o *__this,NLDPAHFABGL_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 036704a8 to 037704af has its CatchHandler @ 03672fb0 */
                    /* try { // try from 036704b0 to 037704db has its CatchHandler @ 036731b4 */
  if (IBKIPBJJCPG != (NLDPAHFABGL_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 036704dc to 03770503 has its CatchHandler @ 036732f4 */
    if ((((__this->fields).ADEIKPGDIPM == (IBKIPBJJCPG->fields).ADEIKPGDIPM) &&
        ((__this->fields).IFDGNOKADMK == (IBKIPBJJCPG->fields).IFDGNOKADMK)) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).MIINPPOCPCN,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* try { // try from 03670510 to 03770517 has its CatchHandler @ 03672fac */
  return false;
}

