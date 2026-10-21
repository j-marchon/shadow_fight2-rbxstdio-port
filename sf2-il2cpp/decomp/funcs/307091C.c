// EEGDOGKBLNG$$AGCALOAKJEK @ RVA 0x307091C

void EEGDOGKBLNG__AGCALOAKJEK(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  bool bVar1;
  KAMBBJFPLGM_o *pKVar2;
  MethodInfo_27F86F8 *in_x3;
  EOLFEKNCPLM_o *pEVar3;
  GKLPDMLELJF_o *pGVar4;
  System_Nullable_long__o __this_00;
  undefined8 local_30;
  int64_t iStack_28;
  
  if ((DAT_04565f61 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>__ctor__);
    DAT_04565f61 = 1;
  }
  pKVar2 = (__this->fields).MLAAJICBOAD;
  if ((pKVar2 != (KAMBBJFPLGM_o *)0x0) &&
     (bVar1 = KAMBBJFPLGM__ODJAMCJCHGG(pKVar2,(MethodInfo *)0x0), bVar1)) {
    pKVar2 = (__this->fields).MLAAJICBOAD;
    if ((pKVar2 != (KAMBBJFPLGM_o *)0x0) &&
       (pEVar3 = (pKVar2->fields).FLAFELDNABC, pEVar3 != (EOLFEKNCPLM_o *)0x0)) {
      pGVar4 = (pEVar3->fields).MCOPPCNPAHF;
      local_30 = 0;
      iStack_28 = 0;
      __this_00.fields.value = 0;
      __this_00.fields._0_8_ = &local_30;
      System_Nullable<long>___ctor(__this_00,Method_System_Nullable<long>__ctor__,in_x3);
      if (pGVar4 != (GKLPDMLELJF_o *)0x0) {
        (pGVar4->fields).ADEIKPGDIPM.fields.value = iStack_28;
        *(undefined8 *)&(pGVar4->fields).ADEIKPGDIPM.fields = local_30;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

