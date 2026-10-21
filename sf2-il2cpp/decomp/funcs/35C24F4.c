// OJKCDJCBOBL$$Equals @ RVA 0x35C24F4

bool OJKCDJCBOBL__Equals(OJKCDJCBOBL_o *__this,OJKCDJCBOBL_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  
  if ((DAT_04568f43 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Equals__);
    DAT_04568f43 = 1;
  }
  if (IBKIPBJJCPG != (OJKCDJCBOBL_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    __this_00 = (__this->fields).OHMDCKEDOGH;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Google_Protobuf_Collections_RepeatedField<long>__Equals
                      (__this_00,
                       (Google_Protobuf_Collections_RepeatedField_T__o *)
                       (IBKIPBJJCPG->fields).OHMDCKEDOGH,
                       Method_Google_Protobuf_Collections_RepeatedField<long>_Equals__);
    if (bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

