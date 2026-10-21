// PNLFHHJGDLI$$DHFILBENKMM @ RVA 0x332675C

void PNLFHHJGDLI__DHFILBENKMM(System_String_o **DIHAKADKIKM,MethodInfo *method)

{
  uint16_t uVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567894 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1492);
    DAT_04567894 = 1;
    method = extraout_x1;
  }
  pSVar2 = *DIHAKADKIKM;
  if (pSVar2 != (System_String_o *)0x0) {
    uVar1 = System_String__get_Chars(pSVar2,(pSVar2->fields)._stringLength + -1,(MethodInfo *)0x0);
    if (uVar1 == 0x2f) {
      return;
    }
    pSVar2 = System_String__Concat(*DIHAKADKIKM,StringLiteral_1492,(MethodInfo *)0x0);
    *DIHAKADKIKM = pSVar2;
    thunk_FUN_01c20e04(DIHAKADKIKM,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

