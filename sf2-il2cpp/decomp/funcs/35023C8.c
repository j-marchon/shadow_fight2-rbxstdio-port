// OBCMNBDBNFO$$Equals @ RVA 0x35023C8

bool OBCMNBDBNFO__Equals(OBCMNBDBNFO_o *__this,OBCMNBDBNFO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *__this_00;
  
  if ((DAT_04568862 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_Equals__);
    DAT_04568862 = 1;
  }
  if (IBKIPBJJCPG != (OBCMNBDBNFO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).HHNJEEMAEIH == (IBKIPBJJCPG->fields).HHNJEEMAEIH) &&
         ((__this->fields).MGFICIOBKAI == (IBKIPBJJCPG->fields).MGFICIOBKAI)) &&
        ((__this->fields).AKBMEEECABK == (IBKIPBJJCPG->fields).AKBMEEECABK)) &&
       ((((__this->fields).GCELGJPAMAA == (IBKIPBJJCPG->fields).GCELGJPAMAA &&
         ((__this->fields).JEAFOMDCLHD == (IBKIPBJJCPG->fields).JEAFOMDCLHD)) &&
        ((__this->fields).OKHEECOKPBF == (IBKIPBJJCPG->fields).OKHEECOKPBF)))) {
      __this_00 = (__this->fields).CFIKNGMJBLI;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).CFIKNGMJBLI,
                         Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_Equals__);
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

