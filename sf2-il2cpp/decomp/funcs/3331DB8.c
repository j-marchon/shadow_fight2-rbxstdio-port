// JCFJFJCKLKG$$Equals @ RVA 0x3331DB8

bool JCFJFJCKLKG__Equals(JCFJFJCKLKG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567915 & 1) == 0) {
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    DAT_04567915 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)JCFJFJCKLKG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = JCFJFJCKLKG__Equals(__this,(JCFJFJCKLKG_o *)IBKIPBJJCPG,method);
  return bVar1;
}

