// GPJEDNEEAFK$$PCIIAGJFNPG @ RVA 0x30F2788

float GPJEDNEEAFK__PCIIAGJFNPG(GPJEDNEEAFK_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool bVar1;
  FPLCEOJCPOD_o *__this_00;
  MGNDHCBAPEN_float__string__o *pMVar2;
  PJKHAJKEHEL_o *pPVar3;
  int32_t local_14;
  
  local_14 = 0;
  if ((((BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) ||
       (pPVar3 = (BCKBBGCOMJD->fields).FAPMJJBOFEF, pPVar3 == (PJKHAJKEHEL_o *)0x0)) ||
      (pMVar2 = (__this->fields).FPJGEAFCMGA, pMVar2 == (MGNDHCBAPEN_float__string__o *)0x0)) ||
     (__this_00 = (pPVar3->fields).ACHJNNOKEDK, __this_00 == (FPLCEOJCPOD_o *)0x0))
  goto LAB_031f281c;
                    /* try { // try from 031f27bc to 032f27e3 has its CatchHandler @ 031f2628 */
  bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                    (__this_00,(pMVar2->fields).DOKHHBGJICA,&local_14,true,false,(MethodInfo *)0x0);
  if (bVar1) {
    pMVar2 = (__this->fields).FPJGEAFCMGA;
    if (pMVar2 == (MGNDHCBAPEN_float__string__o *)0x0) goto LAB_031f281c;
    bVar1 = System_String__IsNullOrEmpty((pMVar2->fields).DOKHHBGJICA,(MethodInfo *)0x0);
                    /* try { // try from 031f27e4 to 032f27eb has its CatchHandler @ 031f27fc */
    if (!bVar1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f2758 with catch @ 031f27f8
                        */
      pMVar2 = (__this->fields).FPJGEAFCMGA;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f27e4 with catch @ 031f27fc
                        */
      if (pMVar2 != (MGNDHCBAPEN_float__string__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f2734 with catch @ 031f2800
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f2714 with catch @ 031f2804
                        */
        return (pMVar2->fields).PHPELPFMOII * (float)local_14;
      }
      goto LAB_031f281c;
    }
  }
  pMVar2 = (__this->fields).FPJGEAFCMGA;
                    /* try { // try from 031f27ec to 032f281b has its CatchHandler @ 031f2628 */
  if (pMVar2 != (MGNDHCBAPEN_float__string__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f2754 with catch @ 031f27f0
                        */
    return (pMVar2->fields).PHPELPFMOII;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f2730 with catch @ 031f27f4
                        */
  }
LAB_031f281c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031f281c to 032f281f has its CatchHandler @ 031f2840 */
  FUN_01bab8c8();
}

