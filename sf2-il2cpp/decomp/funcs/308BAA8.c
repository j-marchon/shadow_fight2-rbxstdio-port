// IEFEBEDLHNN$$IPLOAGNCEHJ @ RVA 0x308BAA8

void IEFEBEDLHNN__IPLOAGNCEHJ(IEFEBEDLHNN_o *__this,float ONAOBFPPMAL,MethodInfo *method)

{
  CNDPAJOLKFN_o *pCVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0318bab4 to 0328bd4f has its CatchHandler @ 0318b5e8 */
  if ((DAT_0456605c & 1) == 0) {
    FUN_01bab630(&IEFEBEDLHNN_TypeInfo);
    DAT_0456605c = 1;
    method = extraout_x1;
  }
  if ((IEFEBEDLHNN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IEFEBEDLHNN_TypeInfo,method);
  }
  pCVar1 = IEFEBEDLHNN_TypeInfo->static_fields->LGIKFIENPIG;
  if (pCVar1 != (CNDPAJOLKFN_o *)0x0) {
    CNDPAJOLKFN__FOOHBJNHOKK(pCVar1,(__this->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
    pCVar1 = IEFEBEDLHNN_TypeInfo->static_fields->LGIKFIENPIG;
    if (pCVar1 != (CNDPAJOLKFN_o *)0x0) {
      CNDPAJOLKFN__LOPALOLIHBH(pCVar1,(__this->fields).BJKKHONDAKP,(MethodInfo *)0x0);
      if ((__this->fields).LAIDIGOPNLB != false) {
        if ((IEFEBEDLHNN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pCVar1 = IEFEBEDLHNN_TypeInfo->static_fields->LGIKFIENPIG;
        if (pCVar1 == (CNDPAJOLKFN_o *)0x0) goto LAB_0318bbec;
        CNDPAJOLKFN__PGLILPKGILI(pCVar1,1.0 - (__this->fields).DDMMFMCNPON,(MethodInfo *)0x0);
      }
      if ((IEFEBEDLHNN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pCVar1 = IEFEBEDLHNN_TypeInfo->static_fields->LGIKFIENPIG;
      if (pCVar1 != (CNDPAJOLKFN_o *)0x0) {
        CNDPAJOLKFN__LFENGGKOJDO(pCVar1,(__this->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
        pCVar1 = IEFEBEDLHNN_TypeInfo->static_fields->LGIKFIENPIG;
        if (pCVar1 != (CNDPAJOLKFN_o *)0x0) {
          (pCVar1->fields).super.JOLEIODMLFL = (pCVar1->fields).super.JOLEIODMLFL + ONAOBFPPMAL;
          pCVar1 = (__this->fields).BJKKHONDAKP;
          if (pCVar1 != (CNDPAJOLKFN_o *)0x0) {
            CNDPAJOLKFN__FOOHBJNHOKK(pCVar1,(__this->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
            pCVar1 = (__this->fields).CNMHHKAMGPI;
            if (pCVar1 != (CNDPAJOLKFN_o *)0x0) {
              CNDPAJOLKFN__FOOHBJNHOKK
                        (pCVar1,IEFEBEDLHNN_TypeInfo->static_fields->LGIKFIENPIG,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0318bbec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

