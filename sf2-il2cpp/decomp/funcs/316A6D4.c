// FAIJGJCCKJC$$OIEONLNFHKC @ RVA 0x316A6D4

bool FAIJGJCCKJC__OIEONLNFHKC(FAIJGJCCKJC_o *__this,MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar2;
  int64_t iVar3;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar4;
  
  if ((DAT_045668ee & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045668ee = 1;
  }
  if ((__this->fields).FBBBEHLGDJK == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    bVar1 = HOOAAGABMBL__OIEONLNFHKC((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
    return bVar1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    iVar2 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    iVar3 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
    pJVar4 = (__this->fields).FBBBEHLGDJK;
    if (pJVar4 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
      return (pJVar4->fields).NFKHJPMMNLM <= iVar3 + iVar2 &&
             iVar3 + iVar2 < (pJVar4->fields).CEGNAMELGID;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

