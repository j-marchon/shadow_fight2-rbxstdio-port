// PNLFHHJGDLI$$NAGFLIBNEFO @ RVA 0x33261B8

void PNLFHHJGDLI__NAGFLIBNEFO(System_String_o **DIHAKADKIKM,MethodInfo *method)

{
  uint16_t uVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456788a & 1) == 0) {
    FUN_01bab630(&StringLiteral_1377);
    DAT_0456788a = 1;
    method = extraout_x1;
  }
  if (*DIHAKADKIKM != (System_String_o *)0x0) {
    uVar1 = System_String__get_Chars(*DIHAKADKIKM,0,(MethodInfo *)0x0);
    if (uVar1 == 0x2e) {
      return;
    }
    pSVar2 = System_String__Concat(StringLiteral_1377,*DIHAKADKIKM,(MethodInfo *)0x0);
    *DIHAKADKIKM = pSVar2;
    thunk_FUN_01c20e04(DIHAKADKIKM,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

