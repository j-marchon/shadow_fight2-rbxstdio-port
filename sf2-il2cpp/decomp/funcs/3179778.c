// MEPKDDGONGE$$Equals @ RVA 0x3179778

bool MEPKDDGONGE__Equals(MEPKDDGONGE_o *__this,MEPKDDGONGE_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_00;
  
  if ((DAT_0456697b & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_Equals__);
    DAT_0456697b = 1;
  }
  if (IBKIPBJJCPG != (MEPKDDGONGE_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((__this->fields).CCCDGBNPNOD == (IBKIPBJJCPG->fields).CCCDGBNPNOD) {
      __this_00 = (__this->fields).IECICFJIDPO;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).IECICFJIDPO,
                         Method_Google_Protobuf_Collections_RepeatedField<string>_Equals__);
      if (bVar1) {
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}

