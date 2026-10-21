// ENFPENIMCIK$$Equals @ RVA 0x3378788

bool ENFPENIMCIK__Equals(ENFPENIMCIK_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567b59 & 1) == 0) {
    FUN_01bab630(&ENFPENIMCIK_TypeInfo);
    DAT_04567b59 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)ENFPENIMCIK_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
                    /* try { // try from 034787e0 to 035787e7 has its CatchHandler @ 03479c88 */
  bVar1 = ENFPENIMCIK__Equals(__this,(ENFPENIMCIK_o *)IBKIPBJJCPG,method);
  return bVar1;
}

