// NFNBHPOJFNJ$$.ctor @ RVA 0x335EFC8

void NFNBHPOJFNJ___ctor(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_Text_StringBuilder_o **ppSVar2;
  System_Action_o *CJNHFNHJHPE;
  System_Action_bool__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
                    /* try { // try from 0345eff8 to 0355f003 has its CatchHandler @ 0345e6d4 */
                    /* try { // try from 0345f004 to 0355f00b has its CatchHandler @ 0345f00c */
  if ((DAT_04567a65 & 1) == 0) {
                    /* catch() { ... } // from try @ 0345eef4 with catch @ 0345f00c
                       catch() { ... } // from try @ 0345ef88 with catch @ 0345f00c
                       catch() { ... } // from try @ 0345f004 with catch @ 0345f00c */
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_NFNBHPOJFNJ_BHLHBBKAFHH__);
    FUN_01bab630(&Method_NFNBHPOJFNJ_OONAFIABOCC__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_04567a65 = 1;
    method = extraout_x1;
  }
  (__this->fields).GBHILJJMGGK = 2;
  (__this->fields).JIFKMAOOFDI = 2;
  pSVar1 = (System_Text_StringBuilder_o *)
           thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(pSVar1,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).DGPKPHAHOJP;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(pSVar1,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).BEDMFFEAEDI;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  NFNBHPOJFNJ__BNDFCFMCCEJ(__this,method_00);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  CJNHFNHJHPE_00 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  Nekki_SF2_Core_ApplicationController__add_OnPause(CJNHFNHJHPE_00,(MethodInfo *)0x0);
  NFNBHPOJFNJ__KLNMLOOCAAO(__this,method_01);
  return;
}

