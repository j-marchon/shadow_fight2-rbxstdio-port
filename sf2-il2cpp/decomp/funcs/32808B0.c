// FMIEFKAKOMG$$Equals @ RVA 0x32808B0

bool FMIEFKAKOMG__Equals(FMIEFKAKOMG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456728d & 1) == 0) {
    FUN_01bab630(&FMIEFKAKOMG_TypeInfo);
    DAT_0456728d = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)FMIEFKAKOMG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = FMIEFKAKOMG__Equals(__this,(FMIEFKAKOMG_o *)IBKIPBJJCPG,method);
  return bVar1;
}

