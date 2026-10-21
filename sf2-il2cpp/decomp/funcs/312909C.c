// JMCDPBKILIN$$Equals @ RVA 0x312909C

bool JMCDPBKILIN__Equals(JMCDPBKILIN_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566679 & 1) == 0) {
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    DAT_04566679 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)JMCDPBKILIN_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = JMCDPBKILIN__Equals(__this,(JMCDPBKILIN_o *)IBKIPBJJCPG,method);
  return bVar1;
}

