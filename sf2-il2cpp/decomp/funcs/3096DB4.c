// Sf2.Timers$$TimeDelay @ RVA 0x3096DB4

System_IDisposable_o *
Sf2_Timers__TimeDelay(System_Action_o *CPECAEHDDDB,float KDNLAOJBFMH,MethodInfo *method)

{
  System_Action_o *method_00;
  Sf2_Timers_o *__this;
  NKLLKOKEMOJ_o *__this_00;
  System_IDisposable_o *pSVar1;
  MethodInfo *method_01;
  
  method_00 = CPECAEHDDDB;
  if ((DAT_045660e0 & 1) == 0) {
    method_00 = (System_Action_o *)FUN_01bab630(&NKLLKOKEMOJ_TypeInfo);
    DAT_045660e0 = 1;
  }
  __this = Sf2_Timers__AIHNLLGNBLC((MethodInfo *)method_00);
  __this_00 = (NKLLKOKEMOJ_o *)thunk_FUN_01bda818(NKLLKOKEMOJ_TypeInfo);
  method_01 = (MethodInfo *)0x0;
  NKLLKOKEMOJ___ctor(__this_00,CPECAEHDDDB,KDNLAOJBFMH,(MethodInfo *)0x0);
  if (__this != (Sf2_Timers_o *)0x0) {
    pSVar1 = Sf2_Timers__NKLGCNHLBAF(__this,(HPPHKOJNEPB_o *)__this_00,method_01);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

