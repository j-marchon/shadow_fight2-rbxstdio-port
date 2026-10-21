// FDHCLNDLIDG$$Equals @ RVA 0x314B354

bool FDHCLNDLIDG__Equals(FDHCLNDLIDG_o *__this,FDHCLNDLIDG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (FDHCLNDLIDG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).FFOIEHLJLDA,(IBKIPBJJCPG->fields).FFOIEHLJLDA,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

