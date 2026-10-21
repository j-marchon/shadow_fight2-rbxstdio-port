// ACNHFHJOHLH$$.cctor @ RVA 0x34D362C

void ACNHFHJOHLH___cctor(MethodInfo *method)

{
  System_Text_StringBuilder_o *__this;
  
  if ((DAT_045686c6 & 1) == 0) {
    FUN_01bab630(&ACNHFHJOHLH_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_045686c6 = 1;
  }
  __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  ACNHFHJOHLH_TypeInfo->static_fields->KHHGPLOMHBB = __this;
  thunk_FUN_01c20e04(ACNHFHJOHLH_TypeInfo->static_fields,__this);
  return;
}

