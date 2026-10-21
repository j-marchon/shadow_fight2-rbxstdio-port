// IPPEHAJADOO$$NACPECDBOFC @ RVA 0x31422FC

bool IPPEHAJADOO__NACPECDBOFC
               (OLKKAIFGGAK_o *FKIKCJCJBFD,OLKKAIFGGAK_o *BKPIEEMDOJO,int32_t ACCIHBHMFPN,
               MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_o *pOVar2;
  
                    /* try { // try from 03242304 to 03342323 has its CatchHandler @ 032423bc */
                    /* try { // try from 03242328 to 0334232f has its CatchHandler @ 032423a0 */
  bVar1 = true;
  switch(ACCIHBHMFPN) {
  case 1:
    break;
  case 2:
    if (BKPIEEMDOJO == FKIKCJCJBFD) goto switchD_0324232c_default;
    goto LAB_03242348;
  case 3:
    if (BKPIEEMDOJO == (OLKKAIFGGAK_o *)0x0) {
LAB_032423a4:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032422e8 with catch @ 032423a4 */
      FUN_01bab8c8();
    }
    pOVar2 = (BKPIEEMDOJO->fields).NFMBPIPEKGF;
    goto LAB_03242398;
  case 4:
                    /* try { // try from 03242360 to 03342367 has its CatchHandler @ 032427e0 */
    if (BKPIEEMDOJO == (OLKKAIFGGAK_o *)0x0) goto LAB_032423a4;
    BKPIEEMDOJO = OLKKAIFGGAK__GMBBOANEBJJ(BKPIEEMDOJO,4,(MethodInfo *)0x0);
    break;
  case 5:
    goto switchD_0324232c_caseD_5;
  case 6:
    if (BKPIEEMDOJO == (OLKKAIFGGAK_o *)0x0) goto LAB_032423a4;
                    /* try { // try from 03242384 to 03342387 has its CatchHandler @ 032423a8 */
                    /* try { // try from 03242388 to 033423f3 has its CatchHandler @ 03241cd4 */
                    /* catch() { ... } // from try @ 032422c4 with catch @ 0324238c */
                    /* catch() { ... } // from try @ 03242280 with catch @ 03242390 */
    pOVar2 = OLKKAIFGGAK__GMBBOANEBJJ(BKPIEEMDOJO,6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032422c8 with catch @ 03242394 */
LAB_03242398:
                    /* catch() { ... } // from try @ 03242244 with catch @ 03242398 */
    bVar1 = pOVar2 == FKIKCJCJBFD;
    goto switchD_0324232c_caseD_5;
  default:
    goto switchD_0324232c_default;
  }
  if (BKPIEEMDOJO == FKIKCJCJBFD) {
LAB_03242348:
    bVar1 = true;
  }
  else {
switchD_0324232c_default:
    bVar1 = false;
  }
switchD_0324232c_caseD_5:
                    /* catch() { ... } // from try @ 03242298 with catch @ 0324239c */
                    /* catch() { ... } // from try @ 03242328 with catch @ 032423a0 */
  return bVar1;
}

