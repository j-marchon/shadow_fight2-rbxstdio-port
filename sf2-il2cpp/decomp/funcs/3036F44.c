// MFBNFJGBPBB$$GFJPJGCLMLP @ RVA 0x3036F44

int64_t MFBNFJGBPBB__GFJPJGCLMLP
                  (PKHMIGFEJCL_o *HLAGOHADLKH,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  int64_t iVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar2;
  double dVar3;
  
  if ((DAT_04565d50 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d50 = 1;
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar2 = MFBNFJGBPBB__INBNIPOEFGO(HLAGOHADLKH,OOGPLJBADCD,method);
  if (pEVar2 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
    dVar3 = (pEVar2->fields).HNFHNNLOLGK;
    iVar1 = -0x8000000000000000;
    if (dVar3 != INFINITY) {
      iVar1 = (long)dVar3;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

