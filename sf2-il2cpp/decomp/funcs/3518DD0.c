// PLIIGOCLJDL$$LEKFDCNMHOJ @ RVA 0x3518DD0

void PLIIGOCLJDL__LEKFDCNMHOJ(PLIIGOCLJDL_o *__this,MethodInfo *method)

{
  int32_t IOENJHOKBOE;
  NFFDIPBFJHP_o *pNVar1;
  System_Action_KEFHDOHHHML__o *IELDNEAAPBE;
  PLIIGOCLJDL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  GLPEFEEGCPM_o *pGVar2;
  FADHMEJJCPO_o *pFVar3;
  System_Action_JCFJFJCKLKG__o *pSVar4;
  
  if ((DAT_04568954 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_PLIIGOCLJDL_GKJBIDCCAGA__);
    DAT_04568954 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar1 != (NFFDIPBFJHP_o *)0x0) {
    pGVar2 = (pNVar1->fields).NEACDFLBNFO;
    if ((pGVar2 != (GLPEFEEGCPM_o *)0x0) &&
       (pFVar3 = (pGVar2->fields).PBBGNHKFEPG, pFVar3 != (FADHMEJJCPO_o *)0x0)) {
      IOENJHOKBOE = (pFVar3->fields).PDOMCPONBNB;
      IELDNEAAPBE = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      PLIIGOCLJDL__GPCPNCGBFOM(__this_00,IOENJHOKBOE,1,IELDNEAAPBE,in_x4);
      return;
    }
    pSVar4 = (__this->fields).DAHKCOIPIBD;
    if (pSVar4 != (System_Action_JCFJFJCKLKG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03618eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar4->fields).super.super.invoke_impl)
                ((pSVar4->fields).super.super.method_code,0,(pSVar4->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

