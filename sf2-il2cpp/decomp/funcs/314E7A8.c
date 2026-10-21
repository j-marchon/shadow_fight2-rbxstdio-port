// KBLFOOJFIIG$$Equals @ RVA 0x314E7A8

bool KBLFOOJFIIG__Equals(KBLFOOJFIIG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045667ee & 1) == 0) {
    FUN_01bab630(&KBLFOOJFIIG_TypeInfo);
    DAT_045667ee = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KBLFOOJFIIG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KBLFOOJFIIG__Equals(__this,(KBLFOOJFIIG_o *)IBKIPBJJCPG,method);
  return bVar1;
}

