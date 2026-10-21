// BKMLILFFPIH$$Equals @ RVA 0x304742C

bool BKMLILFFPIH__Equals(BKMLILFFPIH_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565de8 & 1) == 0) {
    FUN_01bab630(&BKMLILFFPIH_TypeInfo);
    DAT_04565de8 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)BKMLILFFPIH_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = BKMLILFFPIH__Equals(__this,(BKMLILFFPIH_o *)IBKIPBJJCPG,method);
  return bVar1;
}

