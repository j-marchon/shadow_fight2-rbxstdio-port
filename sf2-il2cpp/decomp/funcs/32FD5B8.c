// PGICCMFLDPI$$Equals @ RVA 0x32FD5B8

bool PGICCMFLDPI__Equals(PGICCMFLDPI_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045676fa & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_045676fa = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)PGICCMFLDPI_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = PGICCMFLDPI__Equals(__this,(PGICCMFLDPI_o *)IBKIPBJJCPG,method);
  return bVar1;
}

