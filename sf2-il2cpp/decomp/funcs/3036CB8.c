// MFBNFJGBPBB$$JBAMHPFEPLG @ RVA 0x3036CB8

int32_t MFBNFJGBPBB__JBAMHPFEPLG
                  (PKHMIGFEJCL_o *HLAGOHADLKH,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  int32_t iVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar2;
  double dVar3;
  
  if ((DAT_04565d49 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d49 = 1;
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar2 = MFBNFJGBPBB__INBNIPOEFGO(HLAGOHADLKH,OOGPLJBADCD,method);
  if (pEVar2 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
    dVar3 = (pEVar2->fields).HNFHNNLOLGK;
    iVar1 = -0x80000000;
    if (dVar3 != INFINITY) {
      iVar1 = (int)dVar3;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

