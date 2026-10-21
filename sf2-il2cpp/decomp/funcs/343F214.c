// OMFJHNMDIBF$$Equals @ RVA 0x343F214

bool OMFJHNMDIBF__Equals(OMFJHNMDIBF_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568207 & 1) == 0) {
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    DAT_04568207 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OMFJHNMDIBF_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
                    /* try { // try from 0353f274 to 0363f27f has its CatchHandler @ 0353f5dc */
  bVar1 = OMFJHNMDIBF__Equals(__this,(OMFJHNMDIBF_o *)IBKIPBJJCPG,method);
  return bVar1;
}

