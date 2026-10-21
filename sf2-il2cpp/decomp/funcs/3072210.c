// GGDHPLABCGI$$Equals @ RVA 0x3072210

bool GGDHPLABCGI__Equals(GGDHPLABCGI_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565f82 & 1) == 0) {
    FUN_01bab630(&GGDHPLABCGI_TypeInfo);
    DAT_04565f82 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)GGDHPLABCGI_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = GGDHPLABCGI__Equals(__this,(GGDHPLABCGI_o *)IBKIPBJJCPG,method);
  return bVar1;
}

