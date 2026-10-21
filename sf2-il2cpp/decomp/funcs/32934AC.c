// IKBGLDJFIJH$$BOLHJAOMBCB @ RVA 0x32934AC

void IKBGLDJFIJH__BOLHJAOMBCB
               (IKBGLDJFIJH_o *__this,System_Action_array *DLOFGOGAGAA,MethodInfo *method)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (DLOFGOGAGAA == (System_Action_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (int)DLOFGOGAGAA->max_length) {
                    /* try { // try from 033934d0 to 034934e7 has its CatchHandler @ 03393524 */
    uVar3 = 0;
    uVar2 = DLOFGOGAGAA->max_length & 0xffffffff;
    do {
      if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 033934e8 to 03493557 has its CatchHandler @ 03393214 */
      IKBGLDJFIJH__DPPHJFGLGGK(__this,DLOFGOGAGAA->m_Items[uVar3],method);
      uVar1 = (uint)DLOFGOGAGAA->max_length;
      uVar2 = (ulong)uVar1;
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)uVar1);
  }
  return;
}

