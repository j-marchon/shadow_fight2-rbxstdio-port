// KKGHPKOFEHM$$Equals @ RVA 0x308DAE4

bool KKGHPKOFEHM__Equals(KKGHPKOFEHM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566074 & 1) == 0) {
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    DAT_04566074 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KKGHPKOFEHM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KKGHPKOFEHM__Equals(__this,(KKGHPKOFEHM_o *)IBKIPBJJCPG,method);
  return bVar1;
}

