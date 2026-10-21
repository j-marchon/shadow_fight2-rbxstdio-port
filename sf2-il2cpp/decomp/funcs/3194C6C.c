// OLHGMELLLFK$$Equals @ RVA 0x3194C6C

bool OLHGMELLLFK__Equals(OLHGMELLLFK_o *__this,OLHGMELLLFK_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_ByteString_o *lhs;
  Google_Protobuf_ByteString_o *rhs;
  
  if ((DAT_04566a5e & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04566a5e = 1;
  }
  if (IBKIPBJJCPG != (OLHGMELLLFK_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    lhs = (__this->fields).OACFBJNMHCM;
    rhs = (IBKIPBJJCPG->fields).OACFBJNMHCM;
    if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = Google_Protobuf_ByteString__op_Inequality(lhs,rhs,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

