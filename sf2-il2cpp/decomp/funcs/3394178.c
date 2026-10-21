// KDADMJGPAOM$$Equals @ RVA 0x3394178

bool KDADMJGPAOM__Equals(KDADMJGPAOM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567c42 & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    DAT_04567c42 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KDADMJGPAOM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KDADMJGPAOM__Equals(__this,(KDADMJGPAOM_o *)IBKIPBJJCPG,method);
  return bVar1;
}

