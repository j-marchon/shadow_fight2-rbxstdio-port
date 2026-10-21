// NGOFOPOGBMJ$$Equals @ RVA 0x34E58F0

bool NGOFOPOGBMJ__Equals(NGOFOPOGBMJ_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456875f & 1) == 0) {
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    DAT_0456875f = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)NGOFOPOGBMJ_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = NGOFOPOGBMJ__Equals(__this,(NGOFOPOGBMJ_o *)IBKIPBJJCPG,method);
  return bVar1;
}

