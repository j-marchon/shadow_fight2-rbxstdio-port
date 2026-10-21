// FIMAAAOEIGM$$Equals @ RVA 0x34260D8

bool FIMAAAOEIGM__Equals(FIMAAAOEIGM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456810e & 1) == 0) {
    FUN_01bab630(&FIMAAAOEIGM_TypeInfo);
    DAT_0456810e = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)FIMAAAOEIGM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = FIMAAAOEIGM__Equals(__this,(FIMAAAOEIGM_o *)IBKIPBJJCPG,method);
  return bVar1;
}

