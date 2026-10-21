// DBOOKMFPFNI$$Equals @ RVA 0x34DB2C0

bool DBOOKMFPFNI__Equals(DBOOKMFPFNI_o *__this,DBOOKMFPFNI_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (DBOOKMFPFNI_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((__this->fields).LPFKPMGBOGB == (IBKIPBJJCPG->fields).LPFKPMGBOGB) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

