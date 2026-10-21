// CFJANHACGMG$$LOGMODDMLHP @ RVA 0x3597F70

void CFJANHACGMG__LOGMODDMLHP
               (System_String_o *EIJDDKJONFO,System_Byte_array *OCMMDIHLKMH,bool ECDLGJPEBEF,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  GCFHEEKPCPJ_o *__this;
  
  if ((DAT_04568dad & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&MGAGKCEDNNN_TypeInfo);
    DAT_04568dad = 1;
  }
                    /* try { // try from 03697fe8 to 03797fef has its CatchHandler @ 03698608 */
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = ANFOHCGLHID__DMEJHHPGDFA((MethodInfo *)0x0);
  if (bVar1) {
    if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03698010 to 03798017 has its CatchHandler @ 036985f8 */
      thunk_FUN_01ba7564();
    }
    bVar1 = EOOEOHKLOFJ__EGFIEDINDAC(EIJDDKJONFO,(MethodInfo *)0x0);
    if ((!bVar1) || (ECDLGJPEBEF)) {
                    /* try { // try from 03698048 to 0379804f has its CatchHandler @ 03698230 */
      if ((MGAGKCEDNNN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = (GCFHEEKPCPJ_o *)MGAGKCEDNNN_TypeInfo->static_fields->EGHMLJDHLPK;
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
      }
      pSVar2 = EOAOCPLIKOI__HBOAEIBACIE((MethodInfo *)0x0);
                    /* try { // try from 03698094 to 037980b7 has its CatchHandler @ 03698218 */
      pMVar3 = extraout_x1;
      if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(CFJANHACGMG_TypeInfo);
        pMVar3 = extraout_x1_00;
      }
      pMVar3 = (MethodInfo *)CFJANHACGMG__DPHMDPHEIKO(pSVar2,pMVar3);
      if (__this != (GCFHEEKPCPJ_o *)0x0) {
        pSVar2 = GCFHEEKPCPJ__IDDPLJLECPA
                           (__this,OCMMDIHLKMH,(System_String_o *)pMVar3,(MethodInfo *)0x0);
                    /* try { // try from 036980c4 to 037980cb has its CatchHandler @ 03698220 */
        CFJANHACGMG__LIJHLLAPAAA(EIJDDKJONFO,pSVar2,pMVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* try { // try from 0369802c to 03798033 has its CatchHandler @ 03698234 */
  return;
}

