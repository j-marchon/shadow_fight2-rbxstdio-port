// CFJANHACGMG$$GCBGEBGFNHI @ RVA 0x35982E0

void CFJANHACGMG__GCBGEBGFNHI(System_String_o *EIJDDKJONFO,bool ECDLGJPEBEF,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  GCFHEEKPCPJ_o *__this;
  
  if ((DAT_04568db0 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
                    /* try { // try from 03698338 to 0379833f has its CatchHandler @ 0369858c */
    FUN_01bab630(&MGAGKCEDNNN_TypeInfo);
    DAT_04568db0 = 1;
  }
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0369835c to 03798363 has its CatchHandler @ 0369857c */
  bVar1 = ANFOHCGLHID__DMEJHHPGDFA((MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 03698378 to 0379837f has its CatchHandler @ 03698484 */
    if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = EOOEOHKLOFJ__EGFIEDINDAC(EIJDDKJONFO,(MethodInfo *)0x0);
    if ((!bVar1) || (ECDLGJPEBEF)) {
      if ((MGAGKCEDNNN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = (GCFHEEKPCPJ_o *)MGAGKCEDNNN_TypeInfo->static_fields->EGHMLJDHLPK;
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036983e0 to 03798403 has its CatchHandler @ 03698470 */
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
      }
      pSVar2 = EOAOCPLIKOI__HBOAEIBACIE((MethodInfo *)0x0);
      pMVar3 = extraout_x1;
      if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03698404 to 03798417 has its CatchHandler @ 0369846c */
        thunk_FUN_01ba7564(CFJANHACGMG_TypeInfo);
        pMVar3 = extraout_x1_00;
      }
      pMVar3 = (MethodInfo *)CFJANHACGMG__DPHMDPHEIKO(pSVar2,pMVar3);
      if (__this != (GCFHEEKPCPJ_o *)0x0) {
        pSVar2 = GCFHEEKPCPJ__FHFDAFKBACH
                           (__this,EIJDDKJONFO,(System_String_o *)pMVar3,(MethodInfo *)0x0);
                    /* try { // try from 03698430 to 03798437 has its CatchHandler @ 03698584 */
        CFJANHACGMG__LIJHLLAPAAA(EIJDDKJONFO,pSVar2,pMVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* try { // try from 03698394 to 0379839b has its CatchHandler @ 03698480 */
  return;
}

