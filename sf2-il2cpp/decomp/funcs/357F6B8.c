// EOLFEKNCPLM$$Equals @ RVA 0x357F6B8

bool EOLFEKNCPLM__Equals(EOLFEKNCPLM_o *__this,EOLFEKNCPLM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_ByteString_o *lhs;
  Google_Protobuf_ByteString_o *rhs;
  
  if ((DAT_04568cc3 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04568cc3 = 1;
  }
  if (IBKIPBJJCPG != (EOLFEKNCPLM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).MCOPPCNPAHF,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).MCOPPCNPAHF,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).PLJJCOHGICK,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).PLJJCOHGICK,(MethodInfo *)0x0),
       bVar1)) {
      lhs = (__this->fields).OACFBJNMHCM;
      rhs = (IBKIPBJJCPG->fields).OACFBJNMHCM;
      if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = Google_Protobuf_ByteString__op_Inequality(lhs,rhs,(MethodInfo *)0x0);
      if ((((!bVar1) && ((__this->fields).LEEKCALJFJN == (IBKIPBJJCPG->fields).LEEKCALJFJN)) &&
          ((__this->fields).IINFDIJOFIG == (IBKIPBJJCPG->fields).IINFDIJOFIG)) &&
         ((__this->fields).ODDCBFOLIGB == (IBKIPBJJCPG->fields).ODDCBFOLIGB)) {
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}

