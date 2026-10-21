// KBLFOOJFIIG$$Equals @ RVA 0x314E80C

bool KBLFOOJFIIG__Equals(KBLFOOJFIIG_o *__this,KBLFOOJFIIG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (KBLFOOJFIIG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((__this->fields).GDKPGIBMFPA == (IBKIPBJJCPG->fields).GDKPGIBMFPA) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

