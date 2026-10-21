// CMOAIOLDOIJ$$.ctor @ RVA 0x31BE5DC

void CMOAIOLDOIJ___ctor(CMOAIOLDOIJ_o *__this,OLCBPIHLPEC_o *OMPNCGNDGMI,MethodInfo *method)

{
  System_String_o **ppSVar1;
  PLIIGOCLJDL_o *__this_00;
  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *pJVar2;
  PGICCMFLDPI_o *pPVar3;
  
  if ((DAT_04566c03 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_10925);
    DAT_04566c03 = 1;
  }
  ODKDFMHHLIP___ctor((ODKDFMHHLIP_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super.DNPAFIFHKIP = 1;
  if (OMPNCGNDGMI == (OLCBPIHLPEC_o *)0x0) {
    return;
  }
  (__this->fields).ACHHIFCBPHD = (OMPNCGNDGMI->fields).IAEBJKOPDAO;
  thunk_FUN_01c20e04();
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  if (__this_00 != (PLIIGOCLJDL_o *)0x0) {
    pJVar2 = PLIIGOCLJDL__PDEBCPPCEJP(__this_00,(OMPNCGNDGMI->fields).NGODFBDEMLE,(MethodInfo *)0x0)
    ;
    ppSVar1 = (System_String_o **)&StringLiteral_10925;
    if (pJVar2 != (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
      ppSVar1 = &(pJVar2->fields).KJAIPLMIAGP;
    }
    (__this->fields).KJAIPLMIAGP = *ppSVar1;
    thunk_FUN_01c20e04();
    (__this->fields).super.ABCHAOKFLGL = (OMPNCGNDGMI->fields).EGELDFKMOCJ;
    thunk_FUN_01c20e04();
    pPVar3 = (OMPNCGNDGMI->fields).MIINPPOCPCN;
    if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
      (__this->fields).super.HCNDEELOKHA = (pPVar3->fields).GDKPGIBMFPA;
      (__this->fields).super.MOIGDPBNMNI = (OMPNCGNDGMI->fields).EMDNDLOODLG;
      (__this->fields).BMPDKEOBAKN = (OMPNCGNDGMI->fields).NGODFBDEMLE;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

