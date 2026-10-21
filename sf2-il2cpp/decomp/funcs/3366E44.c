// CJFBGEEIPBA$$GPIFDPAIBNH @ RVA 0x3366E44

bool CJFBGEEIPBA__GPIFDPAIBNH(CJFBGEEIPBA_o *__this,NLFLMJPNOLF_o *AOMBONOOJFP,MethodInfo *method)

{
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar1;
  int64_t iVar2;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  
  if ((DAT_04567aca & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    DAT_04567aca = 1;
  }
  if (AOMBONOOJFP != (NLFLMJPNOLF_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      iVar1 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
      __this_01 = (AOMBONOOJFP->fields).MABPCBMOECE;
      if (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
        if ((__this_01->fields).count < 1) {
          return false;
        }
        iVar2 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                          (__this_01,0,
                           Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
        return iVar2 == iVar1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

