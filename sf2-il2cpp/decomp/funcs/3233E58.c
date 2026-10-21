// DLOALGNBPNL$$Equals @ RVA 0x3233E58

bool DLOALGNBPNL__Equals(DLOALGNBPNL_o *__this,DLOALGNBPNL_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *__this_00;
  
  if ((DAT_04567002 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Equals__);
    DAT_04567002 = 1;
  }
  if (IBKIPBJJCPG != (DLOALGNBPNL_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    __this_00 = (__this->fields).EHBNKDHKJNI;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                       (Google_Protobuf_Collections_RepeatedField_T__o *)
                       (IBKIPBJJCPG->fields).EHBNKDHKJNI,
                       Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Equals__);
    if (bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

