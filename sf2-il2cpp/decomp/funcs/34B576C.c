// OJEHKJHEBID$$Equals @ RVA 0x34B576C

bool OJEHKJHEBID__Equals(OJEHKJHEBID_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568580 & 1) == 0) {
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    DAT_04568580 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OJEHKJHEBID_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OJEHKJHEBID__Equals(__this,(OJEHKJHEBID_o *)IBKIPBJJCPG,method);
  return bVar1;
}

