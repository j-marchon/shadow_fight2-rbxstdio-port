// BEPJMNAHCAD$$JFHCEDEEBHF @ RVA 0x318A094

void BEPJMNAHCAD__JFHCEDEEBHF
               (BEPJMNAHCAD_o *__this,CNDPAJOLKFN_o *EKEMKOCPHPO,CNDPAJOLKFN_o *MJNAHMEKOLE,
               int32_t DFIBGGDJPLM,MethodInfo *method)

{
  CNDPAJOLKFN_o *pCVar1;
  BEPJMNAHCAD_HKFNKBEOOHP_o *pBVar2;
  
  pBVar2 = (__this->fields).AGIAJGHBKAF;
                    /* try { // try from 0328a0a0 to 0338a0a3 has its CatchHandler @ 0328a124 */
                    /* try { // try from 0328a0a4 to 0338a0e7 has its CatchHandler @ 03289dac */
  if ((pBVar2 != (BEPJMNAHCAD_HKFNKBEOOHP_o *)0x0) &&
     (pCVar1 = (pBVar2->fields).EKEMKOCPHPO, pCVar1 != (CNDPAJOLKFN_o *)0x0)) {
    CNDPAJOLKFN__FOOHBJNHOKK(pCVar1,EKEMKOCPHPO,(MethodInfo *)0x0);
    pBVar2 = (__this->fields).AGIAJGHBKAF;
    if ((pBVar2 != (BEPJMNAHCAD_HKFNKBEOOHP_o *)0x0) &&
       (pCVar1 = (pBVar2->fields).MJNAHMEKOLE, pCVar1 != (CNDPAJOLKFN_o *)0x0)) {
      CNDPAJOLKFN__FOOHBJNHOKK(pCVar1,MJNAHMEKOLE,(MethodInfo *)0x0);
      pBVar2 = (__this->fields).AGIAJGHBKAF;
      if (pBVar2 != (BEPJMNAHCAD_HKFNKBEOOHP_o *)0x0) {
        (pBVar2->fields).DFIBGGDJPLM = DFIBGGDJPLM;
                    /* try { // try from 0328a0e8 to 0338a103 has its CatchHandler @ 0328a1ac */
        (pBVar2->fields).OPNIEBGMEPI = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

