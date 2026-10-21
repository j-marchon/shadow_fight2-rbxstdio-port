// GGDHPLABCGI$$Equals @ RVA 0x30720A4

bool GGDHPLABCGI__Equals(GGDHPLABCGI_o *__this,GGDHPLABCGI_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (GGDHPLABCGI_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).PDOMCPONBNB == (IBKIPBJJCPG->fields).PDOMCPONBNB) &&
       ((__this->fields).EMDNDLOODLG == (IBKIPBJJCPG->fields).EMDNDLOODLG)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

