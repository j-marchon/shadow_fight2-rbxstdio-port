// JCFJFJCKLKG$$Equals @ RVA 0x3331A1C

bool JCFJFJCKLKG__Equals(JCFJFJCKLKG_o *__this,JCFJFJCKLKG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *__this_00;
  
  if ((DAT_04567910 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_Equals__);
    DAT_04567910 = 1;
  }
  if (IBKIPBJJCPG != (JCFJFJCKLKG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((__this->fields).PDOMCPONBNB == (IBKIPBJJCPG->fields).PDOMCPONBNB) {
      __this_00 = (__this->fields).LFOCACIGEFK;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).LFOCACIGEFK,
                         Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_Equals__);
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

