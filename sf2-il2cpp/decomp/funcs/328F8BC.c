// BKKENCMPLLF$$MJBHKOJAFOH @ RVA 0x328F8BC

System_String_o * BKKENCMPLLF__MJBHKOJAFOH(BKKENCMPLLF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  BKKENCMPLLF_Fields *pBVar2;
  
  pBVar2 = &__this->fields;
  if (pBVar2->HONOOAELMFJ != (System_String_o *)0x0) {
    pSVar1 = System_String__TrimEnd(pBVar2->HONOOAELMFJ,(MethodInfo *)0x0);
    pBVar2->HONOOAELMFJ = pSVar1;
    thunk_FUN_01c20e04(pBVar2,pSVar1);
    return pBVar2->HONOOAELMFJ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

