// KCPFIELGGLA$$Equals @ RVA 0x34CD050

bool KCPFIELGGLA__Equals(KCPFIELGGLA_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568685 & 1) == 0) {
    FUN_01bab630(&KCPFIELGGLA_TypeInfo);
    DAT_04568685 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KCPFIELGGLA_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KCPFIELGGLA__Equals(__this,(KCPFIELGGLA_o *)IBKIPBJJCPG,method);
  return bVar1;
}

