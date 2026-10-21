// CJFBGEEIPBA$$JJCBOPEDCBA @ RVA 0x3364EA8

bool CJFBGEEIPBA__JJCBOPEDCBA(CJFBGEEIPBA_o *__this,NLFLMJPNOLF_o *AOMBONOOJFP,MethodInfo *method)

{
  bool bVar1;
  EEGDOGKBLNG_o *__this_00;
  int64_t item;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  
  if ((DAT_04567aae & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Contains__);
    DAT_04567aae = 1;
  }
  if (AOMBONOOJFP != (NLFLMJPNOLF_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      item = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
      __this_01 = (AOMBONOOJFP->fields).MABPCBMOECE;
      if (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
        bVar1 = Google_Protobuf_Collections_RepeatedField<long>__Contains
                          (__this_01,item,
                           Method_Google_Protobuf_Collections_RepeatedField<long>_Contains__);
        return bVar1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

