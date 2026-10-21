// NODLJPNGNBG$$Equals @ RVA 0x3090D30

bool NODLJPNGNBG__Equals(NODLJPNGNBG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456609d & 1) == 0) {
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    DAT_0456609d = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)NODLJPNGNBG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = NODLJPNGNBG__Equals(__this,(NODLJPNGNBG_o *)IBKIPBJJCPG,method);
  return bVar1;
}

