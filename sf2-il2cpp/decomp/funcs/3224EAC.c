// GLPEFEEGCPM$$Equals @ RVA 0x3224EAC

bool GLPEFEEGCPM__Equals(GLPEFEEGCPM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566f6e & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    DAT_04566f6e = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)GLPEFEEGCPM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = GLPEFEEGCPM__Equals(__this,(GLPEFEEGCPM_o *)IBKIPBJJCPG,method);
  return bVar1;
}

