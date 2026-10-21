// GALHNMPIEHA$$DCELPLDINGL @ RVA 0x3165D88

void GALHNMPIEHA__DCELPLDINGL(GALHNMPIEHA_o *__this,BDMABHJEEGD_o *JOBNGBCPEGO,MethodInfo *method)

{
  int64_t iVar1;
  ACHLOMELAJE_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  HCKHJECBIJC_o *__this_02;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  int iVar2;
  
  method_00 = (MethodInfo *)JOBNGBCPEGO;
  if ((DAT_045668b7 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_GALHNMPIEHA_HBFNKBOBHHL__);
    FUN_01bab630(&HCKHJECBIJC_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_17578);
    DAT_045668b7 = 1;
    method_00 = extraout_x1;
  }
  iVar1 = GALHNMPIEHA__EEADODOOCCB(JOBNGBCPEGO,method_00);
  iVar2 = (int)iVar1;
  if (0 < iVar2) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      iVar1 = ACHLOMELAJE__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
      if (iVar1 < iVar2) {
        JJPNLEPEAFM__DOEMOKNGHNI((MethodInfo *)0x0);
        return;
      }
      __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      __this_02 = (HCKHJECBIJC_o *)thunk_FUN_01bda818(HCKHJECBIJC_TypeInfo);
      HCKHJECBIJC___ctor(__this_02,(MethodInfo *)0x0);
      if ((JOBNGBCPEGO != (BDMABHJEEGD_o *)0x0) && (__this_02 != (HCKHJECBIJC_o *)0x0)) {
        (__this_02->fields).GCDBBHAFJPN = (JOBNGBCPEGO->fields).OHMDCKEDOGH;
        (__this_02->fields).CCCDGBNPNOD = iVar2;
        BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17578,
                     (Google_Protobuf_IMessage_o *)__this_02,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

