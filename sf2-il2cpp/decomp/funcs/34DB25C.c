// DBOOKMFPFNI$$Equals @ RVA 0x34DB25C

bool DBOOKMFPFNI__Equals(DBOOKMFPFNI_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456870f & 1) == 0) {
    FUN_01bab630(&DBOOKMFPFNI_TypeInfo);
    DAT_0456870f = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)DBOOKMFPFNI_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = DBOOKMFPFNI__Equals(__this,(DBOOKMFPFNI_o *)IBKIPBJJCPG,method);
  return bVar1;
}

