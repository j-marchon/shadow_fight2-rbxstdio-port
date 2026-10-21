// KMAOIKKMFJF$$Equals @ RVA 0x3032EE4

bool KMAOIKKMFJF__Equals(KMAOIKKMFJF_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565d16 & 1) == 0) {
    FUN_01bab630(&KMAOIKKMFJF_TypeInfo);
    DAT_04565d16 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KMAOIKKMFJF_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KMAOIKKMFJF__Equals(__this,(KMAOIKKMFJF_o *)IBKIPBJJCPG,method);
  return bVar1;
}

