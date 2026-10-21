// GPJEDNEEAFK$$IHNDOGKLJOM @ RVA 0x30F2820

float GPJEDNEEAFK__IHNDOGKLJOM(GPJEDNEEAFK_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool bVar1;
  FPLCEOJCPOD_o *__this_00;
  MGNDHCBAPEN_float__string__o *pMVar2;
  PJKHAJKEHEL_o *pPVar3;
  int32_t local_14;
  
                    /* try { // try from 031f2820 to 032f2847 has its CatchHandler @ 031f2628 */
  local_14 = 0;
                    /* catch() { ... } // from try @ 031f281c with catch @ 031f2840 */
                    /* try { // try from 031f2848 to 032f284f has its CatchHandler @ 031f2864 */
  if ((((BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) ||
       (pPVar3 = (BCKBBGCOMJD->fields).FAPMJJBOFEF, pPVar3 == (PJKHAJKEHEL_o *)0x0)) ||
      (pMVar2 = (__this->fields).LHBGKMGNOEP, pMVar2 == (MGNDHCBAPEN_float__string__o *)0x0)) ||
     (__this_00 = (pPVar3->fields).ACHJNNOKEDK, __this_00 == (FPLCEOJCPOD_o *)0x0))
  goto LAB_031f28b4;
                    /* try { // try from 031f2850 to 032f285b has its CatchHandler @ 031f2628 */
                    /* try { // try from 031f285c to 032f2863 has its CatchHandler @ 031f2864 */
  bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                    (__this_00,(pMVar2->fields).DOKHHBGJICA,&local_14,true,false,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031f2848 with catch @ 031f2864
                       catch(type#2 @ 00000000) { ... } // from try @ 031f285c with catch @ 031f2864
                        */
  if (bVar1) {
    pMVar2 = (__this->fields).LHBGKMGNOEP;
    if (pMVar2 == (MGNDHCBAPEN_float__string__o *)0x0) goto LAB_031f28b4;
    bVar1 = System_String__IsNullOrEmpty((pMVar2->fields).DOKHHBGJICA,(MethodInfo *)0x0);
    if (!bVar1) {
      pMVar2 = (__this->fields).LHBGKMGNOEP;
      if (pMVar2 != (MGNDHCBAPEN_float__string__o *)0x0) {
        return (pMVar2->fields).PHPELPFMOII * (float)local_14;
      }
      goto LAB_031f28b4;
    }
  }
  pMVar2 = (__this->fields).LHBGKMGNOEP;
  if (pMVar2 != (MGNDHCBAPEN_float__string__o *)0x0) {
    return (pMVar2->fields).PHPELPFMOII;
  }
LAB_031f28b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

