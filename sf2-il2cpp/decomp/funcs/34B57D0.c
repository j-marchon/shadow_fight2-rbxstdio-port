// OJEHKJHEBID$$Equals @ RVA 0x34B57D0

bool OJEHKJHEBID__Equals(OJEHKJHEBID_o *__this,OJEHKJHEBID_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_01;
  
  if ((DAT_0456858b & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_Equals__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_Equals__);
    DAT_0456858b = 1;
  }
  if (IBKIPBJJCPG != (OJEHKJHEBID_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).ADEIKPGDIPM == (IBKIPBJJCPG->fields).ADEIKPGDIPM) &&
         (bVar1 = System_String__op_Inequality
                            ((__this->fields).GJNOEAKNMOG,(IBKIPBJJCPG->fields).GJNOEAKNMOG,
                             (MethodInfo *)0x0), !bVar1)) &&
        ((__this->fields).HAKDPKINDPN == (IBKIPBJJCPG->fields).HAKDPKINDPN)) &&
       ((((__this->fields).GPDALMOAKGG == (IBKIPBJJCPG->fields).GPDALMOAKGG &&
         ((__this->fields).IBFEHEDKGAL == (IBKIPBJJCPG->fields).IBFEHEDKGAL)) &&
        (bVar1 = System_Object__Equals
                           ((Il2CppObject *)(__this->fields).MMIHELOLFPP,
                            (Il2CppObject *)(IBKIPBJJCPG->fields).MMIHELOLFPP,(MethodInfo *)0x0),
        bVar1)))) {
      __this_00 = (__this->fields).MABPCBMOECE;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
LAB_035b58f0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).MABPCBMOECE,
                         Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_Equals__);
      if (bVar1) {
        __this_01 = (__this->fields).MJIHCLLODMF;
        if (__this_01 == (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0)
        goto LAB_035b58f0;
        bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                           (Google_Protobuf_Collections_RepeatedField_T__o *)
                           (IBKIPBJJCPG->fields).MJIHCLLODMF,
                           Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_Equals__);
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

