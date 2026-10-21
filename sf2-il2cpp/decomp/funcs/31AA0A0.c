// OOBBAGLCFPF$$FLMDOPMDKID @ RVA 0x31AA0A0

bool OOBBAGLCFPF__FLMDOPMDKID(AADKBCFCLKK_o *IHODMKCBNKJ,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  NODLJPNGNBG_o *pNVar5;
  int64_t iVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  KDADMJGPAOM_o *pKVar7;
  ICBMOMGINFH_o *pIVar8;
  float fVar9;
  
  if (IHODMKCBNKJ != (AADKBCFCLKK_o *)0x0) {
    pNVar5 = CHDGOFBHAFI__AFHLHFMLNEO
                       ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                        (IHODMKCBNKJ->fields).MPAIPMANDEO,(MethodInfo *)0x0);
    if ((pNVar5 == (NODLJPNGNBG_o *)0x0) ||
       (pKVar7 = (IHODMKCBNKJ->fields).LHFLMBNKPHF, pKVar7 == (KDADMJGPAOM_o *)0x0)) {
LAB_032aa194:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar8 = (pNVar5->fields).PMMFPJJOPKE;
    if ((pKVar7->fields).PDGEHKCPGDK < 1) {
      iVar4 = OOBBAGLCFPF__FKFDENOLEKK(IHODMKCBNKJ,method_00);
      fVar9 = OOBBAGLCFPF__OECPILPMHCA(IHODMKCBNKJ,method_01);
      bVar3 = (float)iVar4 <= fVar9;
      method_02 = extraout_x1;
    }
    else {
      bVar3 = false;
      method_02 = method_00;
    }
    iVar6 = OOBBAGLCFPF__EMCFJLGHAOE(IHODMKCBNKJ,method_02);
    if (iVar6 < -9999) {
      pKVar7 = (IHODMKCBNKJ->fields).LHFLMBNKPHF;
      if (pKVar7 == (KDADMJGPAOM_o *)0x0) goto LAB_032aa194;
      bVar1 = 0 < (pKVar7->fields).PDGEHKCPGDK;
    }
    else {
      bVar1 = false;
    }
    bVar2 = OOBBAGLCFPF__LJEHOIFPLJK(IHODMKCBNKJ,method_03);
    OOBBAGLCFPF__EMCFJLGHAOE(IHODMKCBNKJ,method_04);
                    /* try { // try from 032aa15c to 033aa42f has its CatchHandler @ 032aa15c
                       catch() { ... } // from try @ 032aa15c with catch @ 032aa15c
                       catch() { ... } // from try @ 032aa5b0 with catch @ 032aa15c
                       catch() { ... } // from try @ 032aa7d0 with catch @ 032aa15c
                       catch() { ... } // from try @ 032aaa00 with catch @ 032aa15c
                       catch() { ... } // from try @ 032aace0 with catch @ 032aa15c
                       catch() { ... } // from try @ 032aada8 with catch @ 032aa15c
                       catch() { ... } // from try @ 032aaea4 with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab0c4 with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab17c with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab1bc with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab5e8 with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab618 with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab630 with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab678 with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab6b8 with catch @ 032aa15c */
    if (!(bool)(bVar3 | pIVar8 != (ICBMOMGINFH_o *)0x0 | bVar1) && !bVar2) {
      if ((IHODMKCBNKJ->fields).IOLELGMBJFL == false) {
        return false;
      }
      bVar3 = OOBBAGLCFPF__IFFNMNFGOII(IHODMKCBNKJ,method_05);
      return !bVar3;
    }
  }
  return true;
}

