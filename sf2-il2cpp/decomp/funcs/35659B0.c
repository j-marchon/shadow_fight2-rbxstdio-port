// CADIGFIBFEN$$Equals @ RVA 0x35659B0

bool CADIGFIBFEN__Equals(CADIGFIBFEN_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568bef & 1) == 0) {
    FUN_01bab630(&CADIGFIBFEN_TypeInfo);
    DAT_04568bef = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)CADIGFIBFEN_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = CADIGFIBFEN__Equals(__this,(CADIGFIBFEN_o *)IBKIPBJJCPG,method);
  return bVar1;
}

