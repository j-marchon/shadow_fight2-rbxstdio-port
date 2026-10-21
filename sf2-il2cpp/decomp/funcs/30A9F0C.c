// HCKHJECBIJC$$Equals @ RVA 0x30A9F0C

bool HCKHJECBIJC__Equals(HCKHJECBIJC_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566197 & 1) == 0) {
    FUN_01bab630(&HCKHJECBIJC_TypeInfo);
    DAT_04566197 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)HCKHJECBIJC_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = HCKHJECBIJC__Equals(__this,(HCKHJECBIJC_o *)IBKIPBJJCPG,method);
  return bVar1;
}

