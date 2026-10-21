// Sf2.Timers$$FrameDelay @ RVA 0x3096AF8

System_IDisposable_o *
Sf2_Timers__FrameDelay(System_Action_o *CPECAEHDDDB,int32_t HLFBBLPFKEO,MethodInfo *method)

{
  System_Action_o *method_00;
  Sf2_Timers_o *__this;
  OOGBHOMNILJ_o *__this_00;
  System_IDisposable_o *pSVar1;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)(ulong)(uint)HLFBBLPFKEO;
  method_00 = CPECAEHDDDB;
  if ((DAT_045660de & 1) == 0) {
    method_00 = (System_Action_o *)FUN_01bab630(&OOGBHOMNILJ_TypeInfo);
    DAT_045660de = 1;
  }
  __this = Sf2_Timers__AIHNLLGNBLC((MethodInfo *)method_00);
  __this_00 = (OOGBHOMNILJ_o *)thunk_FUN_01bda818(OOGBHOMNILJ_TypeInfo);
  OOGBHOMNILJ___ctor(__this_00,CPECAEHDDDB,HLFBBLPFKEO,(MethodInfo *)0x0);
  if (__this != (Sf2_Timers_o *)0x0) {
    pSVar1 = Sf2_Timers__NKLGCNHLBAF(__this,(HPPHKOJNEPB_o *)__this_00,method_01);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

