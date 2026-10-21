// MEPKDDGONGE$$Equals @ RVA 0x3179714

bool MEPKDDGONGE__Equals(MEPKDDGONGE_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456697a & 1) == 0) {
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    DAT_0456697a = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)MEPKDDGONGE_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = MEPKDDGONGE__Equals(__this,(MEPKDDGONGE_o *)IBKIPBJJCPG,method);
  return bVar1;
}

