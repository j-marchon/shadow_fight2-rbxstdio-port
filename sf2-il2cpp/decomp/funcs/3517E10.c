// PLIIGOCLJDL$$KIHAOHALAPH @ RVA 0x3517E10

void PLIIGOCLJDL__KIHAOHALAPH(PLIIGOCLJDL_o *__this,MethodInfo *method)

{
  int32_t IOENJHOKBOE;
  EEGDOGKBLNG_o *pEVar1;
  System_Action_KEFHDOHHHML__o *IELDNEAAPBE;
  PLIIGOCLJDL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  System_Action_JCFJFJCKLKG__o *pSVar2;
  
  if ((DAT_04568962 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_PLIIGOCLJDL_FLCFHCNPFLF__);
    DAT_04568962 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
    IOENJHOKBOE = (pEVar1->fields)._DHPJJLCDAJD_k__BackingField;
    if (0 < IOENJHOKBOE) {
      IELDNEAAPBE = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      PLIIGOCLJDL__GPCPNCGBFOM(__this_00,IOENJHOKBOE,1,IELDNEAAPBE,in_x4);
      return;
    }
    pSVar2 = (__this->fields).FDHOMPFPAJF;
    if (pSVar2 != (System_Action_JCFJFJCKLKG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03617ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,0,(pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

