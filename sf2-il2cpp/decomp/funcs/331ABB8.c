// KJNCNBJIJPC$$Equals @ RVA 0x331ABB8

bool KJNCNBJIJPC__Equals(KJNCNBJIJPC_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456780a & 1) == 0) {
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    DAT_0456780a = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KJNCNBJIJPC_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KJNCNBJIJPC__Equals(__this,(KJNCNBJIJPC_o *)IBKIPBJJCPG,method);
  return bVar1;
}

