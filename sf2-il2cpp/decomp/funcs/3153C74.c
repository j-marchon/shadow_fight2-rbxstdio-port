// HBLHCCMEEEC$$Equals @ RVA 0x3153C74

bool HBLHCCMEEEC__Equals(HBLHCCMEEEC_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456681e & 1) == 0) {
    FUN_01bab630(&HBLHCCMEEEC_TypeInfo);
    DAT_0456681e = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)HBLHCCMEEEC_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = HBLHCCMEEEC__Equals(__this,(HBLHCCMEEEC_o *)IBKIPBJJCPG,method);
  return bVar1;
}

