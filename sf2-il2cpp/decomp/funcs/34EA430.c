// OLKKAIFGGAK$$DNGHAMDEGAA @ RVA 0x34EA430

void OLKKAIFGGAK__DNGHAMDEGAA
               (OLKKAIFGGAK_o *__this,OLKKAIFGGAK_o *OJIHFGOBCGO,ECENNHNBAME_o *NLEBDPHNIDI,
               float LINBBAKAFCP,OLKKAIFGGAK_OGCKCABMHLC_o *OADIPDDBIDH,MethodInfo *method)

{
  NKDMOOEFPHJ_o *pNVar1;
  OLKKAIFGGAK_OGCKCABMHLC_o *pOVar2;
  FCJBEKHDLAF_o *pFVar3;
  OLKKAIFGGAK_o *pOVar4;
  OLKKAIFGGAK_o *pOVar5;
  OLKKAIFGGAK_o *pOVar6;
  
  pOVar5 = __this;
  if ((DAT_04568786 & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04568786 = 1;
  }
  do {
    pOVar4 = pOVar5;
    pOVar5 = (pOVar4->fields).NFMBPIPEKGF;
  } while (pOVar5 != (OLKKAIFGGAK_o *)0x0);
  pOVar5 = OJIHFGOBCGO;
  if (OJIHFGOBCGO != (OLKKAIFGGAK_o *)0x0) {
    do {
      pOVar6 = pOVar5;
      pOVar5 = (pOVar6->fields).NFMBPIPEKGF;
    } while (pOVar5 != (OLKKAIFGGAK_o *)0x0);
    if ((pOVar4 != (OLKKAIFGGAK_o *)0x0) &&
       (pNVar1 = (pOVar4->fields).LLMNNPKEGMB, pNVar1 != (NKDMOOEFPHJ_o *)0x0)) {
      NKDMOOEFPHJ__KBBHCAAFDCO(pNVar1,true,NLEBDPHNIDI,LINBBAKAFCP,(MethodInfo *)0x0);
      pNVar1 = (pOVar6->fields).LLMNNPKEGMB;
      if (pNVar1 != (NKDMOOEFPHJ_o *)0x0) {
        NKDMOOEFPHJ__KBBHCAAFDCO(pNVar1,false,NLEBDPHNIDI,LINBBAKAFCP,(MethodInfo *)0x0);
        pOVar2 = (__this->fields).MMIDFMEOACB;
        if ((pOVar2 != (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) &&
           (pNVar1 = (pOVar6->fields).LLMNNPKEGMB, pNVar1 != (NKDMOOEFPHJ_o *)0x0)) {
          NKDMOOEFPHJ__BHEJHLJJNLD
                    (pNVar1,(pOVar2->fields).BBFPCBEFOLN,(pOVar2->fields).EPPIJIGMFFJ,
                     (MethodInfo *)0x0);
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7f == '\0') {
            FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
            DAT_04565b7f = '\x01';
          }
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pFVar3 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
          if (pFVar3 != (FCJBEKHDLAF_o *)0x0) {
            pOVar5 = (pFVar3->fields).LAMENNMGPBN;
            if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 035ea59c to 036ea68b has its CatchHandler @ 035ea59c
                       catch() { ... } // from try @ 035ea59c with catch @ 035ea59c
                       catch() { ... } // from try @ 035ea700 with catch @ 035ea59c
                       catch() { ... } // from try @ 035ea7ac with catch @ 035ea59c
                       catch() { ... } // from try @ 035ea7d4 with catch @ 035ea59c
                       catch() { ... } // from try @ 035ea808 with catch @ 035ea59c */
            DKEOKAONIIB__KBBHCAAFDCO(pOVar5 == OJIHFGOBCGO,OADIPDDBIDH,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

