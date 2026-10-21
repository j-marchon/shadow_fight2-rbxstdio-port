// OLKKAIFGGAK$$NABOCMIDLJI @ RVA 0x34ED5F4

int32_t OLKKAIFGGAK__NABOCMIDLJI(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OPNFCOGALLI_o *__this_00;
  MMDPNDAECII_o *pMVar2;
  
                    /* try { // try from 035ed5f4 to 036ed61b has its CatchHandler @ 035ed184 */
  pMVar2 = (__this->fields).GJLEPEPAOKD;
  if (pMVar2 == (MMDPNDAECII_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pMVar2->fields).BNHJIKJAHHF == false) {
    __this_00 = (__this->fields).OAKOFJJIOFF;
                    /* catch() { ... } // from try @ 035ed5f0 with catch @ 035ed614 */
                    /* try { // try from 035ed61c to 036ed62f has its CatchHandler @ 035ed69c */
    if ((__this_00 != (OPNFCOGALLI_o *)0x0) &&
       ((__this_00->fields).NDBPNFLAKDL != (ECENNHNBAME_o *)0x0)) {
      iVar1 = OPNFCOGALLI__NABOCMIDLJI(__this_00,(MethodInfo *)0x0);
      return iVar1;
    }
    iVar1 = -1;
  }
  else {
    iVar1 = (pMVar2->fields).AGHCNFGKHCH;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035ed374 with catch @ 035ed630
                       try { // try from 035ed630 to 036ed64b has its CatchHandler @ 035ed184 */
  return iVar1;
}

