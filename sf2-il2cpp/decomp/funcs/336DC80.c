// JHNJPLCNBHC$$GIENGNEGHPJ @ RVA 0x336DC80

void JHNJPLCNBHC__GIENGNEGHPJ(JHNJPLCNBHC_o *__this,EHCCNKFIPPA_o *KOKHLOCPDIK,MethodInfo *method)

{
  CJCCEHEKBPD_o *pCVar1;
  NILLKLHKLHG_o *__this_00;
  MMFIDKMDADC_o *__this_01;
  CJCCEHEKBPD_o *pCVar2;
  System_String_o *KGLJICLJHEL;
  System_String_o **ppSVar3;
  CJCCEHEKBPD_o **ppCVar4;
  float fVar5;
  
  if ((DAT_04567afd & 1) == 0) {
    FUN_01bab630(&CJCCEHEKBPD_TypeInfo);
    DAT_04567afd = 1;
  }
  HJNEOLCKEMD__GIENGNEGHPJ((HJNEOLCKEMD_o *)__this,KOKHLOCPDIK,(MethodInfo *)0x0);
  KGLJICLJHEL = (__this->fields).super.super._COIPKAKHDFP_k__BackingField;
  fVar5 = (__this->fields).EGOKMNOIJBP;
  pCVar1 = (CJCCEHEKBPD_o *)thunk_FUN_01bda818(CJCCEHEKBPD_TypeInfo);
  CJCCEHEKBPD___ctor(pCVar1,KGLJICLJHEL,fVar5,(MethodInfo *)0x0);
  ppCVar4 = &(__this->fields).FEGLHAMGOFP;
  *ppCVar4 = pCVar1;
  thunk_FUN_01c20e04(ppCVar4,pCVar1);
  pCVar1 = *ppCVar4;
  if (pCVar1 == (CJCCEHEKBPD_o *)0x0) goto LAB_0346dd88;
  (pCVar1->fields)._IPNDDFLCJIL_k__BackingField = (__this->fields).JOPGHOBJOCL;
  __this_00 = (__this->fields).KIFDEDHNJCA;
  if (__this_00 == (NILLKLHKLHG_o *)0x0) {
    (pCVar1->fields)._GJNIMFABNDM_k__BackingField = 0.0;
  }
  else {
    __this_01 = NILLKLHKLHG__CHKGAHCDFJF(__this_00,false,(MethodInfo *)0x0);
    if (__this_01 == (MMFIDKMDADC_o *)0x0) goto LAB_0346dd88;
    fVar5 = MMFIDKMDADC__OFFODGKLGOP(__this_01,(MethodInfo *)0x0);
    pCVar2 = *ppCVar4;
    (pCVar1->fields)._GJNIMFABNDM_k__BackingField = fVar5;
    pCVar1 = pCVar2;
    if (pCVar2 == (CJCCEHEKBPD_o *)0x0) goto LAB_0346dd88;
  }
  ppSVar3 = &(pCVar1->fields)._GPEFIOMJHNN_k__BackingField;
  *ppSVar3 = (__this->fields).DINIOKEPIIP;
  thunk_FUN_01c20e04(ppSVar3);
  pCVar1 = (__this->fields).FEGLHAMGOFP;
  if (pCVar1 != (CJCCEHEKBPD_o *)0x0) {
    (pCVar1->fields)._IJMMLDDCHFB_k__BackingField = (__this->fields).MOOOFNAMCME;
    CJCCEHEKBPD__DEBAOCBBOMP(pCVar1,(MethodInfo *)0x0);
    return;
  }
LAB_0346dd88:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

