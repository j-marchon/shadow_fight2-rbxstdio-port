// LKAFKHBBNOH$$Equals @ RVA 0x318D8B0

bool LKAFKHBBNOH__Equals(LKAFKHBBNOH_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566a1d & 1) == 0) {
    FUN_01bab630(&LKAFKHBBNOH_TypeInfo);
    DAT_04566a1d = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)LKAFKHBBNOH_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = LKAFKHBBNOH__Equals(__this,(LKAFKHBBNOH_o *)IBKIPBJJCPG,method);
  return bVar1;
}

