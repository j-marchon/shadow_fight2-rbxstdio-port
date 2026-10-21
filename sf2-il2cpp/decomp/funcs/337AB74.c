// NIGMCJIMBHO$$Equals @ RVA 0x337AB74

bool NIGMCJIMBHO__Equals(NIGMCJIMBHO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567b81 & 1) == 0) {
    FUN_01bab630(&NIGMCJIMBHO_TypeInfo);
    DAT_04567b81 = 1;
  }
                    /* try { // try from 0347aba4 to 0357aba7 has its CatchHandler @ 0347b6e0 */
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)NIGMCJIMBHO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
                    /* try { // try from 0347abc8 to 0357ac4f has its CatchHandler @ 0347b84c */
  bVar1 = NIGMCJIMBHO__Equals(__this,(NIGMCJIMBHO_o *)IBKIPBJJCPG,method);
  return bVar1;
}

