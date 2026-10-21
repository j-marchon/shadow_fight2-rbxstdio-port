// PMFNDKKBEKN$$NMAPGPBDPAN @ RVA 0x35AC67C

void PMFNDKKBEKN__NMAPGPBDPAN(PMFNDKKBEKN_o *__this,AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  int32_t iVar1;
  OLKPEJMEBPJ_o *__this_00;
  int iVar2;
  PAMEPBLOLPB_o *pPVar3;
  
  __this_00 = (__this->fields).super.LFJPDELEIHG;
  if (__this_00 == (OLKPEJMEBPJ_o *)0x0) {
    iVar2 = 1;
  }
  else {
    iVar1 = OLKPEJMEBPJ__LIIDJOLDBBF(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
    pPVar3 = (FBFPLEFCDOK->fields).JPBIBBBMCCD;
    if (pPVar3 != (PAMEPBLOLPB_o *)0x0) {
      iVar1 = 1;
      if ((pPVar3->fields).AAECGBAMDEL < (FBFPLEFCDOK->fields).MKMGFKDKKBG * iVar2) {
        iVar1 = 2;
      }
      (FBFPLEFCDOK->fields).HHJIJKJCEOF = iVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

