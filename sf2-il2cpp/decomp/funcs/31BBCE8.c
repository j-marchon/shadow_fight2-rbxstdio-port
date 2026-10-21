// FAACNCKMEJM$$Equals @ RVA 0x31BBCE8

bool FAACNCKMEJM__Equals(FAACNCKMEJM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566be6 & 1) == 0) {
    FUN_01bab630(&FAACNCKMEJM_TypeInfo);
    DAT_04566be6 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)FAACNCKMEJM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = FAACNCKMEJM__Equals(__this,(FAACNCKMEJM_o *)IBKIPBJJCPG,method);
  return bVar1;
}

