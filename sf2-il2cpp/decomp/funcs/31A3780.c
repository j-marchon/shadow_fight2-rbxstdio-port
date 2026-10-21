// HGADMOBFBBF$$Equals @ RVA 0x31A3780

bool HGADMOBFBBF__Equals(HGADMOBFBBF_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566aee & 1) == 0) {
    FUN_01bab630(&HGADMOBFBBF_TypeInfo);
    DAT_04566aee = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)HGADMOBFBBF_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = HGADMOBFBBF__Equals(__this,(HGADMOBFBBF_o *)IBKIPBJJCPG,method);
  return bVar1;
}

