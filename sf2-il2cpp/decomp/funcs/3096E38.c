// Sf2.Timers$$ConditionDelay @ RVA 0x3096E38

System_IDisposable_o *
Sf2_Timers__ConditionDelay
          (System_Action_o *CPECAEHDDDB,System_Func_bool__o *OIIPBHPGODN,MethodInfo *method)

{
  System_Action_o *method_00;
  Sf2_Timers_o *__this;
  GIMHCFFEEJN_o *__this_00;
  System_IDisposable_o *pSVar1;
  
  method_00 = CPECAEHDDDB;
  if ((DAT_045660e2 & 1) == 0) {
    method_00 = (System_Action_o *)FUN_01bab630(&GIMHCFFEEJN_TypeInfo);
    DAT_045660e2 = 1;
  }
  __this = Sf2_Timers__AIHNLLGNBLC((MethodInfo *)method_00);
  __this_00 = (GIMHCFFEEJN_o *)thunk_FUN_01bda818(GIMHCFFEEJN_TypeInfo);
  GIMHCFFEEJN___ctor(__this_00,CPECAEHDDDB,OIIPBHPGODN,(MethodInfo *)0x0);
  if (__this != (Sf2_Timers_o *)0x0) {
    pSVar1 = Sf2_Timers__NKLGCNHLBAF(__this,(HPPHKOJNEPB_o *)__this_00,(MethodInfo *)OIIPBHPGODN);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

