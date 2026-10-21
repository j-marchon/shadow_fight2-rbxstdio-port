// DMOPGPMINJD$$Equals @ RVA 0x30BADEC

bool DMOPGPMINJD__Equals(DMOPGPMINJD_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566239 & 1) == 0) {
    FUN_01bab630(&DMOPGPMINJD_TypeInfo);
    DAT_04566239 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)DMOPGPMINJD_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = DMOPGPMINJD__Equals(__this,(DMOPGPMINJD_o *)IBKIPBJJCPG,method);
  return bVar1;
}

