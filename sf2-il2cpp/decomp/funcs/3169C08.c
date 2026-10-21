// GKKKJLJFGBG$$Equals @ RVA 0x3169C08

bool GKKKJLJFGBG__Equals(GKKKJLJFGBG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045668df & 1) == 0) {
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    DAT_045668df = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)GKKKJLJFGBG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = GKKKJLJFGBG__Equals(__this,(GKKKJLJFGBG_o *)IBKIPBJJCPG,method);
  return bVar1;
}

