// GKKKJLJFGBG$$Equals @ RVA 0x3169C6C

bool GKKKJLJFGBG__Equals(GKKKJLJFGBG_o *__this,GKKKJLJFGBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *__this_01;
  
  if ((DAT_045668e5 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_Equals__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_Equals__);
    DAT_045668e5 = 1;
  }
  if (IBKIPBJJCPG != (GKKKJLJFGBG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    __this_00 = (__this->fields).DFKIAOPJPCE;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
LAB_03269d24:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Google_Protobuf_Collections_RepeatedField<int>__Equals
                      (__this_00,
                       (Google_Protobuf_Collections_RepeatedField_T__o *)
                       (IBKIPBJJCPG->fields).DFKIAOPJPCE,
                       Method_Google_Protobuf_Collections_RepeatedField<int>_Equals__);
    if (bVar1) {
      __this_01 = (__this->fields).LJDACDDNJOD;
      if (__this_01 == (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0)
      goto LAB_03269d24;
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).LJDACDDNJOD,
                         Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_Equals__);
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

