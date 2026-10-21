// FDHCLNDLIDG$$Equals @ RVA 0x314B750

bool FDHCLNDLIDG__Equals(FDHCLNDLIDG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045667bd & 1) == 0) {
    FUN_01bab630(&FDHCLNDLIDG_TypeInfo);
    DAT_045667bd = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)FDHCLNDLIDG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = FDHCLNDLIDG__Equals(__this,(FDHCLNDLIDG_o *)IBKIPBJJCPG,method);
  return bVar1;
}

