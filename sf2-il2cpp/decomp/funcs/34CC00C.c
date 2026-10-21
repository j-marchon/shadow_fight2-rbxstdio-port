// GOJLGHMMDBO$$NNGAAEJDJKO @ RVA 0x34CC00C

void GOJLGHMMDBO__NNGAAEJDJKO
               (GOJLGHMMDBO_o *__this,int64_t PICHJGIALAM,int64_t GOGCALFMMAH,int64_t PICMJBJHGDO,
               float IGDMJMLLKCG,float NCKIMMBNHHA,float NFFEBDBLNBK,float IKIIOACDEND,
               float HNOCIHBEOGA,System_Collections_Generic_List_float__o *NOGACFODKIP,
               MethodInfo *method)

{
  int64_t iVar1;
  long lVar2;
  long lVar3;
  ILHHCILGBCB_o *pIVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_04568676 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568676 = 1;
  }
  pIVar4 = (__this->fields).BHPMOKPBIOL;
  if (pIVar4 != (ILHHCILGBCB_o *)0x0) {
    lVar2 = (pIVar4->fields).HBJALEJFBAA;
    (pIVar4->fields).BBFGEKKPMIL = (pIVar4->fields).BBFGEKKPMIL + PICHJGIALAM;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = MGNPHCAAEIO__ADEEECDDBPN(GOGCALFMMAH,0,(MethodInfo *)0x0);
    (pIVar4->fields).HBJALEJFBAA = iVar1 + lVar2;
    pIVar4 = (__this->fields).BHPMOKPBIOL;
    if (pIVar4 != (ILHHCILGBCB_o *)0x0) {
      fVar6 = (float)PICHJGIALAM;
      (pIVar4->fields).OANNDNBNCOC = (pIVar4->fields).OANNDNBNCOC + PICMJBJHGDO;
      lVar2 = (pIVar4->fields).CBBHLGAPOCB;
                    /* try { // try from 035cc0ec to 036cc113 has its CatchHandler @ 035cc2e8 */
      fVar5 = (float)(int)(fVar6 * IGDMJMLLKCG) * (float)(__this->fields).KODJDFKIJFJ + 0.5;
      iVar1 = -0x8000000000000000;
      if (fVar5 != INFINITY) {
        iVar1 = (long)fVar5;
      }
      iVar1 = MGNPHCAAEIO__ADEEECDDBPN(iVar1,0,(MethodInfo *)0x0);
      (pIVar4->fields).CBBHLGAPOCB = iVar1 + lVar2;
      pIVar4 = (__this->fields).BHPMOKPBIOL;
      if (pIVar4 != (ILHHCILGBCB_o *)0x0) {
        lVar2 = (pIVar4->fields).CKGOPICDKMO;
                    /* try { // try from 035cc148 to 036cc173 has its CatchHandler @ 035cc2e4 */
        fVar5 = (float)(int)(fVar6 * NCKIMMBNHHA) * (float)(__this->fields).GNGEACPLJAG + 0.5;
        iVar1 = -0x8000000000000000;
        if (fVar5 != INFINITY) {
          iVar1 = (long)fVar5;
        }
        iVar1 = MGNPHCAAEIO__ADEEECDDBPN(iVar1,0,(MethodInfo *)0x0);
        (pIVar4->fields).CKGOPICDKMO = iVar1 + lVar2;
        pIVar4 = (__this->fields).BHPMOKPBIOL;
        if (pIVar4 != (ILHHCILGBCB_o *)0x0) {
          fVar5 = (float)(int)(fVar6 * IKIIOACDEND) + 0.5;
          lVar3 = (pIVar4->fields).MDEJIIBDAIE;
          lVar2 = -0x8000000000000000;
          if (fVar5 != INFINITY) {
            lVar2 = (long)fVar5;
          }
                    /* try { // try from 035cc1b0 to 036cc1b7 has its CatchHandler @ 035cc2dc */
          iVar1 = MGNPHCAAEIO__ADEEECDDBPN(lVar2 * (__this->fields).OODAOEGNBGP,0,(MethodInfo *)0x0)
          ;
          (pIVar4->fields).MDEJIIBDAIE = iVar1 + lVar3;
          pIVar4 = (__this->fields).BHPMOKPBIOL;
                    /* try { // try from 035cc1c0 to 036cc1c7 has its CatchHandler @ 035cc2d4 */
          if ((pIVar4 != (ILHHCILGBCB_o *)0x0) &&
             (NOGACFODKIP != (System_Collections_Generic_List_float__o *)0x0)) {
                    /* try { // try from 035cc1d0 to 036cc1db has its CatchHandler @ 035cc2cc */
            lVar2 = (pIVar4->fields).PDDMIAGJHBA;
                    /* try { // try from 035cc1e0 to 036cc203 has its CatchHandler @ 035cc2d0 */
            fVar5 = System_Collections_Generic_List<float>__get_Item
                              (NOGACFODKIP,(__this->fields).DIMGKENDINF,
                               Method_System_Collections_Generic_List<float>_get_Item__);
            fVar5 = (float)(int)(fVar5 * fVar6) + 0.5;
                    /* try { // try from 035cc204 to 036cc29f has its CatchHandler @ 035cbfcc */
            iVar1 = -0x8000000000000000;
            if (fVar5 != INFINITY) {
              iVar1 = (long)fVar5;
            }
            iVar1 = MGNPHCAAEIO__ADEEECDDBPN(iVar1,0,(MethodInfo *)0x0);
            (pIVar4->fields).PDDMIAGJHBA = iVar1 + lVar2;
            pIVar4 = (__this->fields).BHPMOKPBIOL;
            if (pIVar4 != (ILHHCILGBCB_o *)0x0) {
              lVar2 = (pIVar4->fields).NLFJFKCJEAC;
              fVar5 = (float)(int)(fVar6 * HNOCIHBEOGA) * (float)(__this->fields).PJIABIIHIFD + 0.5;
              iVar1 = -0x8000000000000000;
              if (fVar5 != INFINITY) {
                iVar1 = (long)fVar5;
              }
              iVar1 = MGNPHCAAEIO__ADEEECDDBPN(iVar1,0,(MethodInfo *)0x0);
              (pIVar4->fields).NLFJFKCJEAC = iVar1 + lVar2;
              pIVar4 = (__this->fields).BHPMOKPBIOL;
              if (pIVar4 != (ILHHCILGBCB_o *)0x0) {
                    /* try { // try from 035cc2a0 to 036cc2a7 has its CatchHandler @ 035cc2ec */
                    /* try { // try from 035cc2a8 to 036cc2ab has its CatchHandler @ 035cc2e0 */
                    /* try { // try from 035cc2ac to 036cc2af has its CatchHandler @ 035cc2d8 */
                    /* try { // try from 035cc2b0 to 036cc2b3 has its CatchHandler @ 035cc2c8 */
                (pIVar4->fields).JLANKGCLFPC =
                     (pIVar4->fields).CBBHLGAPOCB + (pIVar4->fields).HBJALEJFBAA +
                     (pIVar4->fields).CKGOPICDKMO + (pIVar4->fields).MDEJIIBDAIE +
                     (pIVar4->fields).PDDMIAGJHBA + (pIVar4->fields).NLFJFKCJEAC;
                (pIVar4->fields).JJBAIGCDEMD = (pIVar4->fields).OANNDNBNCOC;
                    /* try { // try from 035cc2b4 to 036cc2b7 has its CatchHandler @ 035cbfcc */
                    /* try { // try from 035cc2b8 to 036cc2bb has its CatchHandler @ 035cc2c4 */
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035cc2bc to 036cc2fb has its CatchHandler @ 035cbfcc */
  FUN_01bab8c8();
}

