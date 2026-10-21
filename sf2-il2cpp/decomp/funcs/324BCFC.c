// ELBBEAGGAOH$$Equals @ RVA 0x324BCFC

bool ELBBEAGGAOH__Equals(ELBBEAGGAOH_o *__this,ELBBEAGGAOH_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *__this_00;
  Google_Protobuf_ByteString_o *lhs;
  Google_Protobuf_ByteString_o *rhs;
  
  if ((DAT_045670fa & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_Equals__);
    DAT_045670fa = 1;
  }
  if (IBKIPBJJCPG != (ELBBEAGGAOH_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).CBHDCHDBFGB,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).CBHDCHDBFGB,(MethodInfo *)0x0);
    if (((((bVar1) &&
          (bVar1 = System_Object__Equals
                             ((Il2CppObject *)(__this->fields).IFDHENIKFKC,
                              (Il2CppObject *)(IBKIPBJJCPG->fields).IFDHENIKFKC,(MethodInfo *)0x0),
          bVar1)) &&
         (bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).DNKENJFJOMD,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).DNKENJFJOMD,(MethodInfo *)0x0),
         bVar1)) &&
        ((bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).FFDNNGLMPJJ,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).FFDNNGLMPJJ,(MethodInfo *)0x0),
         bVar1 && (bVar1 = System_Object__Equals
                                     ((Il2CppObject *)(__this->fields).KEIBPDJHHBB,
                                      (Il2CppObject *)(IBKIPBJJCPG->fields).KEIBPDJHHBB,
                                      (MethodInfo *)0x0), bVar1)))) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).MIINPPOCPCN,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0),
       bVar1)) {
      lhs = (__this->fields).DKOBFIICAFM;
      rhs = (IBKIPBJJCPG->fields).DKOBFIICAFM;
      if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = Google_Protobuf_ByteString__op_Inequality(lhs,rhs,(MethodInfo *)0x0);
      if ((!bVar1) && ((__this->fields).EMNNAEAIMNH == (IBKIPBJJCPG->fields).EMNNAEAIMNH)) {
        __this_00 = (__this->fields).OOPOHLJPBHE;
        if (__this_00 == (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                           (Google_Protobuf_Collections_RepeatedField_T__o *)
                           (IBKIPBJJCPG->fields).OOPOHLJPBHE,
                           Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_Equals__);
        if (bVar1) {
          bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
          return bVar1;
        }
      }
    }
  }
  return false;
}

