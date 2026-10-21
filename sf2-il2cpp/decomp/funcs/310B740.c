// BJEFHIBMHEJ$$Equals @ RVA 0x310B740

bool BJEFHIBMHEJ__Equals(BJEFHIBMHEJ_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566541 & 1) == 0) {
    FUN_01bab630(&BJEFHIBMHEJ_TypeInfo);
    DAT_04566541 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)BJEFHIBMHEJ_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = BJEFHIBMHEJ__Equals(__this,(BJEFHIBMHEJ_o *)IBKIPBJJCPG,method);
  return bVar1;
}

