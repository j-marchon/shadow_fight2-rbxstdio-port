// IBKEPOJPLBG$$MDJOIMMJAIC @ RVA 0x34CC790

bool IBKEPOJPLBG__MDJOIMMJAIC(IBKEPOJPLBG_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PKHMIGFEJCL_o *pPVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456867b & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_0456867b = 1;
    method = extraout_x1;
  }
  pPVar2 = (__this->fields).super.IJOKKFKPBEP;
  pSVar3 = (__this->fields).MLPKGJACOFA;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo,method);
  }
  pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(pPVar2,pSVar3,(MethodInfo *)0x0);
  bVar1 = IBKEPOJPLBG__ENGFHFALHNC(pSVar3,method_00);
  if (bVar1) {
    bVar1 = AMIINPEKKFB__FBNGEGEDKOA(pSVar3,(MethodInfo *)0x0);
    return bVar1;
  }
  pPVar2 = (__this->fields).super.IJOKKFKPBEP;
  pSVar3 = (__this->fields).HIHHACDOFBF;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(pPVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 035cc84c to 036cc873 has its CatchHandler @ 035cca30 */
  bVar1 = AMIINPEKKFB__BDMNJJAAHAJ(pSVar3,(MethodInfo *)0x0);
  return bVar1;
}

