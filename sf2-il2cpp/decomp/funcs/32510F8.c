// EKEOAECFDDI$$.ctor @ RVA 0x32510F8

void EKEOAECFDDI___ctor(EKEOAECFDDI_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567132 & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_04567132 = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

