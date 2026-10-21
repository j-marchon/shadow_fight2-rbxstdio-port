// AADKBCFCLKK$$Equals @ RVA 0x3439760

bool AADKBCFCLKK__Equals(AADKBCFCLKK_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045681b9 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    DAT_045681b9 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)AADKBCFCLKK_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
                    /* try { // try from 035397b4 to 03639957 has its CatchHandler @ 035397b4
                       catch() { ... } // from try @ 035397b4 with catch @ 035397b4
                       catch() { ... } // from try @ 03539d30 with catch @ 035397b4
                       catch() { ... } // from try @ 03539d6c with catch @ 035397b4
                       catch() { ... } // from try @ 03539e5c with catch @ 035397b4
                       catch() { ... } // from try @ 03539e68 with catch @ 035397b4
                       catch() { ... } // from try @ 03539e78 with catch @ 035397b4
                       catch() { ... } // from try @ 03539fbc with catch @ 035397b4 */
  bVar1 = AADKBCFCLKK__Equals(__this,(AADKBCFCLKK_o *)IBKIPBJJCPG,method);
  return bVar1;
}

