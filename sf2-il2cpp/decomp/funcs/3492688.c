// ALOGBMGGBEP$$Equals @ RVA 0x3492688

bool ALOGBMGGBEP__Equals(ALOGBMGGBEP_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456842a & 1) == 0) {
    FUN_01bab630(&ALOGBMGGBEP_TypeInfo);
    DAT_0456842a = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)ALOGBMGGBEP_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = ALOGBMGGBEP__Equals(__this,(ALOGBMGGBEP_o *)IBKIPBJJCPG,method);
  return bVar1;
}

