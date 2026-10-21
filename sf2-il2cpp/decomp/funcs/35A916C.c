// KEGDLHPEJBG$$Equals @ RVA 0x35A916C

bool KEGDLHPEJBG__Equals(KEGDLHPEJBG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568e31 & 1) == 0) {
    FUN_01bab630(&KEGDLHPEJBG_TypeInfo);
    DAT_04568e31 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KEGDLHPEJBG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KEGDLHPEJBG__Equals(__this,(KEGDLHPEJBG_o *)IBKIPBJJCPG,method);
  return bVar1;
}

