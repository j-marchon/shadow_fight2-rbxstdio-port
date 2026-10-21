// GJFEBGNFFBA$$.cctor @ RVA 0x32538AC

void GJFEBGNFFBA___cctor(MethodInfo *method)

{
  System_Diagnostics_Stopwatch_o *__this;
  
  if ((DAT_04567149 & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    FUN_01bab630(&System_Diagnostics_Stopwatch_TypeInfo);
    DAT_04567149 = 1;
  }
  __this = (System_Diagnostics_Stopwatch_o *)
           thunk_FUN_01bda818(System_Diagnostics_Stopwatch_TypeInfo);
  System_Diagnostics_Stopwatch___ctor(__this,(MethodInfo *)0x0);
  GJFEBGNFFBA_TypeInfo->static_fields->BBLPIKDNJPI = __this;
  thunk_FUN_01c20e04(GJFEBGNFFBA_TypeInfo->static_fields,__this);
  return;
}

