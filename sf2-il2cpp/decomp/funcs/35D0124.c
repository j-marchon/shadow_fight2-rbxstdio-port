// BPBGAAHBFKH$$Equals @ RVA 0x35D0124

bool BPBGAAHBFKH__Equals(BPBGAAHBFKH_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568fdb & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    DAT_04568fdb = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)BPBGAAHBFKH_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = BPBGAAHBFKH__Equals(__this,(BPBGAAHBFKH_o *)IBKIPBJJCPG,method);
  return bVar1;
}

