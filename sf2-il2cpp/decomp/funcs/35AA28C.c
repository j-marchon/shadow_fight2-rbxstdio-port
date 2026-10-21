// EMBNHHOCCBH$$Equals @ RVA 0x35AA28C

bool EMBNHHOCCBH__Equals(EMBNHHOCCBH_o *__this,EMBNHHOCCBH_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_00;
  
  if ((DAT_04568e42 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Equals__);
    DAT_04568e42 = 1;
  }
  if (IBKIPBJJCPG != (EMBNHHOCCBH_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    __this_00 = (__this->fields).MJIIHOLHNCK;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                       (Google_Protobuf_Collections_RepeatedField_T__o *)
                       (IBKIPBJJCPG->fields).MJIIHOLHNCK,
                       Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Equals__);
    if ((bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).OPHCNELIOLD,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

