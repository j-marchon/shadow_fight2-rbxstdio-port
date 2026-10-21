// MFBNFJGBPBB$$EDBBDECOKAF @ RVA 0x3036B40

bool MFBNFJGBPBB__EDBBDECOKAF
               (PKHMIGFEJCL_o *HLAGOHADLKH,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar1;
  double dVar2;
  
  if ((DAT_04565d48 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d48 = 1;
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = MFBNFJGBPBB__INBNIPOEFGO(HLAGOHADLKH,OOGPLJBADCD,method);
  if (pEVar1 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
    dVar2 = (pEVar1->fields).HNFHNNLOLGK;
    return dVar2 != INFINITY && 0 < (int)dVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

