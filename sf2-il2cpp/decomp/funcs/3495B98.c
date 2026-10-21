// NGKBNOEJLPH$$DJHEKGGEMGB @ RVA 0x3495B98

float NGKBNOEJLPH__DJHEKGGEMGB(NGKBNOEJLPH_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  uint OAFGMHOFEKM;
  int32_t OAFGMHOFEKM_00;
  OLKKAIFGGAK_o *pOVar1;
  OCMLPCKBHPN_c *pOVar2;
  MethodInfo *in_x3;
  long lVar3;
  long lVar4;
  OPNFCOGALLI_o *pOVar5;
  float fVar6;
  
  if ((DAT_04568470 & 1) == 0) {
    __this = (NGKBNOEJLPH_o *)FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04568470 = 1;
  }
  if ((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
     (pOVar1 = (BCKBBGCOMJD->fields).BPJMMBGIMNC, __this = (NGKBNOEJLPH_o *)(OCMLPCKBHPN_c *)0x0,
     pOVar1 != (OLKKAIFGGAK_o *)0x0)) {
    pOVar1 = OLKKAIFGGAK__IPJMKMJAIMK(pOVar1,(MethodInfo *)0x0);
    OAFGMHOFEKM = NGKBNOEJLPH__NPFGMAOAAED((NGKBNOEJLPH_o *)pOVar1,BCKBBGCOMJD,pOVar1,in_x3);
    pOVar1 = (BCKBBGCOMJD->fields).BPJMMBGIMNC;
    __this = (NGKBNOEJLPH_o *)(ulong)OAFGMHOFEKM;
    if (pOVar1 != (OLKKAIFGGAK_o *)0x0) {
      pOVar1 = OLKKAIFGGAK__IPJMKMJAIMK(pOVar1,(MethodInfo *)0x0);
      OAFGMHOFEKM_00 = NGKBNOEJLPH__NPFGMAOAAED((NGKBNOEJLPH_o *)pOVar1,pOVar1,BCKBBGCOMJD,in_x3);
      pOVar5 = (BCKBBGCOMJD->fields).OAKOFJJIOFF;
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo);
      }
      if (DAT_045684d5 == '\0') {
        FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
        DAT_045684d5 = '\x01';
      }
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = (NGKBNOEJLPH_o *)OCMLPCKBHPN_TypeInfo;
      if (pOVar5 != (OPNFCOGALLI_o *)0x0) {
        pOVar2 = (OCMLPCKBHPN_c *)
                 OPNFCOGALLI__OCJAHBKIFNO
                           (pOVar5,OCMLPCKBHPN_TypeInfo->static_fields->CIFOHMOFKHJ,OAFGMHOFEKM,
                            (MethodInfo *)0x0);
        pOVar1 = (BCKBBGCOMJD->fields).BPJMMBGIMNC;
        __this = (NGKBNOEJLPH_o *)pOVar2;
        if ((pOVar1 != (OLKKAIFGGAK_o *)0x0) &&
           (pOVar1 = OLKKAIFGGAK__IPJMKMJAIMK(pOVar1,(MethodInfo *)0x0),
           __this = (NGKBNOEJLPH_o *)(OCMLPCKBHPN_c *)0x0, pOVar1 != (OLKKAIFGGAK_o *)0x0)) {
          pOVar5 = (pOVar1->fields).OAKOFJJIOFF;
          if (DAT_045684d5 == '\0') {
            FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
            DAT_045684d5 = '\x01';
          }
          if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this = (NGKBNOEJLPH_o *)OCMLPCKBHPN_TypeInfo;
          if (pOVar5 != (OPNFCOGALLI_o *)0x0) {
            __this = (NGKBNOEJLPH_o *)
                     OPNFCOGALLI__OCJAHBKIFNO
                               (pOVar5,OCMLPCKBHPN_TypeInfo->static_fields->CIFOHMOFKHJ,
                                OAFGMHOFEKM_00,(MethodInfo *)0x0);
            if ((pOVar2 == (OCMLPCKBHPN_c *)0x0) ||
               ((OCMLPCKBHPN_c *)__this == (OCMLPCKBHPN_c *)0x0)) {
              fVar6 = 0.0;
            }
            else {
              lVar3 = *(long *)&(pOVar2->_1).this_arg.bits;
              if ((lVar3 == 0) ||
                 (lVar4 = *(long *)&(((OCMLPCKBHPN_c *)__this)->_1).this_arg.bits, lVar4 == 0))
              goto LAB_03595d30;
              fVar6 = ABS(*(float *)(lVar3 + 0x10) - *(float *)(lVar4 + 0x10));
            }
            return fVar6;
          }
        }
      }
    }
  }
LAB_03595d30:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

