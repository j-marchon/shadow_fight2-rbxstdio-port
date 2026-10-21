// FAIJGJCCKJC$$PDECHBMCBDB @ RVA 0x316A4B8

NMAHEBEALAB_o *
FAIJGJCCKJC__PDECHBMCBDB(FAIJGJCCKJC_o *__this,int32_t CDLNPAAECKM,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar1;
  int64_t iVar2;
  NMAHEBEALAB_o *pNVar3;
  
  if ((DAT_045668eb & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045668eb = 1;
  }
  if (CDLNPAAECKM == 0) {
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_00 == (KKLJIDJBFEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    iVar2 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
    CDLNPAAECKM = (int)iVar2 + (int)iVar1;
  }
  pNVar3 = HOOAAGABMBL__PDECHBMCBDB((HOOAAGABMBL_o *)__this,CDLNPAAECKM,(MethodInfo *)0x0);
  return pNVar3;
}

