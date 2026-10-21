// GPKDMPJJEOO$$Equals @ RVA 0x319D9FC

bool GPKDMPJJEOO__Equals(GPKDMPJJEOO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566abb & 1) == 0) {
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    DAT_04566abb = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)GPKDMPJJEOO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = GPKDMPJJEOO__Equals(__this,(GPKDMPJJEOO_o *)IBKIPBJJCPG,method);
  return bVar1;
}

