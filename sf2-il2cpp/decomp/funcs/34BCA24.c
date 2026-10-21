// PBGDDCFGPJI$$Equals @ RVA 0x34BCA24

bool PBGDDCFGPJI__Equals(PBGDDCFGPJI_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045685ed & 1) == 0) {
    FUN_01bab630(&PBGDDCFGPJI_TypeInfo);
    DAT_045685ed = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)PBGDDCFGPJI_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = PBGDDCFGPJI__Equals(__this,(PBGDDCFGPJI_o *)IBKIPBJJCPG,method);
  return bVar1;
}

