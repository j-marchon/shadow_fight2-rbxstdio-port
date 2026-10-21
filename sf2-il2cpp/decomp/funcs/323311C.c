// BFLFFPLIIFM$$Equals @ RVA 0x323311C

bool BFLFFPLIIFM__Equals(BFLFFPLIIFM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566ff2 & 1) == 0) {
    FUN_01bab630(&BFLFFPLIIFM_TypeInfo);
    DAT_04566ff2 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)BFLFFPLIIFM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = BFLFFPLIIFM__Equals(__this,(BFLFFPLIIFM_o *)IBKIPBJJCPG,method);
  return bVar1;
}

