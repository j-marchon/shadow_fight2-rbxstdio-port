// CDAAECGFKON$$Equals @ RVA 0x3211BE0

bool CDAAECGFKON__Equals(CDAAECGFKON_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566e97 & 1) == 0) {
    FUN_01bab630(&CDAAECGFKON_TypeInfo);
    DAT_04566e97 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)CDAAECGFKON_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = CDAAECGFKON__Equals(__this,(CDAAECGFKON_o *)IBKIPBJJCPG,method);
  return bVar1;
}

