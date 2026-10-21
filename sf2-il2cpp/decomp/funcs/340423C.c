// MGNPHCAAEIO$$OIPLCHEIFNJ @ RVA 0x340423C

void MGNPHCAAEIO__OIPLCHEIFNJ(MethodInfo *method)

{
  EEGDOGKBLNG_o *pEVar1;
  KKLJIDJBFEI_o *__this;
  PGICCMFLDPI_o *pPVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  int64_t MANHAGLPBBB;
  
  if ((DAT_04568009 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_17842);
    FUN_01bab630(&StringLiteral_21521);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_17813);
    DAT_04568009 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
    MANHAGLPBBB = (pEVar1->fields).NCMLGNEFKBF;
    __this = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if ((__this != (KKLJIDJBFEI_o *)0x0) &&
       (pPVar2 = KKLJIDJBFEI__MPBLBEGCAKP(__this,(MethodInfo *)0x0), pPVar2 != (PGICCMFLDPI_o *)0x0)
       ) {
      pSVar3 = StringLiteral_17813;
      if (-1 < MANHAGLPBBB) {
        if (MANHAGLPBBB <= (pPVar2->fields).GDKPGIBMFPA / 1000) {
          return;
        }
        method_00 = extraout_x1;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_00;
        }
        pSVar3 = MGNPHCAAEIO__HIIEINMMNGG(MANHAGLPBBB,method_00);
        pSVar3 = System_String__Concat
                           (StringLiteral_17842,pSVar3,StringLiteral_22500,(MethodInfo *)0x0);
      }
      JJPNLEPEAFM__JNDPLPKDPCP
                (StringLiteral_21521,pSVar3,StringLiteral_9679,StringLiteral_1,
                 (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,true,true,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

