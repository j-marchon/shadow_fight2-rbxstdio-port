// CBPENMDOJDB$$Equals @ RVA 0x31039B0

bool CBPENMDOJDB__Equals(CBPENMDOJDB_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045664dc & 1) == 0) {
    FUN_01bab630(&CBPENMDOJDB_TypeInfo);
    DAT_045664dc = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)CBPENMDOJDB_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
                    /* try { // try from 03203a0c to 03303b57 has its CatchHandler @ 03203a0c
                       catch() { ... } // from try @ 03203a0c with catch @ 03203a0c
                       catch() { ... } // from try @ 03203bb0 with catch @ 03203a0c
                       catch() { ... } // from try @ 03203c7c with catch @ 03203a0c
                       catch() { ... } // from try @ 03203cc8 with catch @ 03203a0c
                       catch() { ... } // from try @ 03203cf8 with catch @ 03203a0c
                       catch() { ... } // from try @ 03203d38 with catch @ 03203a0c
                       catch() { ... } // from try @ 03203d58 with catch @ 03203a0c
                       catch() { ... } // from try @ 03203d88 with catch @ 03203a0c */
  bVar1 = CBPENMDOJDB__Equals(__this,(CBPENMDOJDB_o *)IBKIPBJJCPG,method);
  return bVar1;
}

