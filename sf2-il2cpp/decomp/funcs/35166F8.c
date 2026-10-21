// GEIHBHEDJJM$$COMCFINCJII @ RVA 0x35166F8

bool GEIHBHEDJJM__COMCFINCJII(System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  
  if ((DAT_04568932 & 1) == 0) {
    FUN_01bab630(&MDKJJDGLPKO_TypeInfo);
    DAT_04568932 = 1;
  }
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(OOGPLJBADCD,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = false;
  }
  else {
    if (OOGPLJBADCD == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = System_String__get_Chars(OOGPLJBADCD,0,(MethodInfo *)0x0);
    if ((((uVar2 != 0x5f) &&
         (uVar2 = System_String__get_Chars(OOGPLJBADCD,0,(MethodInfo *)0x0), uVar2 != 0x40)) &&
        (uVar2 = System_String__get_Chars(OOGPLJBADCD,0,(MethodInfo *)0x0), uVar2 != 0x3f)) &&
       (uVar2 = System_String__get_Chars(OOGPLJBADCD,0,(MethodInfo *)0x0), uVar2 != 0x24)) {
      uVar2 = System_String__get_Chars(OOGPLJBADCD,0,(MethodInfo *)0x0);
      if ((MDKJJDGLPKO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MDKJJDGLPKO_TypeInfo);
      }
      bVar1 = MDKJJDGLPKO__BKEPHAHEMPM(uVar2,(MethodInfo *)0x0);
      return bVar1;
    }
    bVar1 = true;
  }
  return bVar1;
}

