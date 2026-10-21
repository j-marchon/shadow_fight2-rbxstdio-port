// BKKENCMPLLF$$KGIPHDHPGDL @ RVA 0x328F6B0

void BKKENCMPLLF__KGIPHDHPGDL
               (BKKENCMPLLF_o *__this,System_Action_KEFHDOHHHML__o *CPECAEHDDDB,MethodInfo *method)

{
  int32_t iVar1;
  DMOPGPMINJD_o *__this_00;
  EEOMEMBBGNA_o *__this_01;
  System_Action_KEFHDOHHHML__o *extraout_x1;
  System_Action_KEFHDOHHHML__o *method_00;
  
  method_00 = CPECAEHDDDB;
  if ((DAT_04567308 & 1) == 0) {
    FUN_01bab630(&DMOPGPMINJD_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567308 = 1;
    method_00 = extraout_x1;
  }
  iVar1 = BKKENCMPLLF__ODCJNJBFOLB(__this,(MethodInfo *)method_00);
  if (iVar1 != 0) {
    return;
  }
  __this_00 = (DMOPGPMINJD_o *)thunk_FUN_01bda818(DMOPGPMINJD_TypeInfo);
  DMOPGPMINJD___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (DMOPGPMINJD_o *)0x0) {
    DMOPGPMINJD__HCOCAAIGNNL(__this_00,(__this->fields).HONOOAELMFJ,(MethodInfo *)0x0);
    (__this_00->fields).MMIHELOLFPP = (__this->fields)._OGOHLLOEANF_k__BackingField;
    thunk_FUN_01c20e04();
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    if (__this_01 != (EEOMEMBBGNA_o *)0x0) {
      EEOMEMBBGNA__DJCJMBPPIHK(__this_01,__this_00,CPECAEHDDDB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

