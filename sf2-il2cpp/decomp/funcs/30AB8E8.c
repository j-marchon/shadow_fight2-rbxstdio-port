// IMBPILFKGEO$$Equals @ RVA 0x30AB8E8

bool IMBPILFKGEO__Equals(IMBPILFKGEO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456619f & 1) == 0) {
    FUN_01bab630(&IMBPILFKGEO_TypeInfo);
    DAT_0456619f = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)IMBPILFKGEO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = IMBPILFKGEO__Equals(__this,(IMBPILFKGEO_o *)IBKIPBJJCPG,method);
  return bVar1;
}

