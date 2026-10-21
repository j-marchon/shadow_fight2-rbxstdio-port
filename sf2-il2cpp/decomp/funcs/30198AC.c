// ECENNHNBAME$$OCLGKBPDEBI @ RVA 0x30198AC

GBKCLIFGIFN_o * ECENNHNBAME__OCLGKBPDEBI(ECENNHNBAME_o *__this,MethodInfo *method)

{
  GBKCLIFGIFN_o *pGVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar2;
  System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK;
  
  if ((DAT_04565bed & 1) == 0) {
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    DAT_04565bed = 1;
    method = extraout_x1;
  }
  pEVar2 = (__this->fields).DMGLMCBIAGL;
  if (pEVar2 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) {
    AHEFOIOKDOK = (pEVar2->fields).KPFGHBEKJIM;
    if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_00;
    }
    pGVar1 = ECENNHNBAME__CNBIDPCPDJN(AHEFOIOKDOK,method);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

