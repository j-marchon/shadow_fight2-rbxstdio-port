// EEGDOGKBLNG$$GNNNAFFIPKI @ RVA 0x3071A30

bool EEGDOGKBLNG__GNNNAFFIPKI(EEGDOGKBLNG_o *__this,System_String_o *BNMOJBMGDDN,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_00;
  KAMBBJFPLGM_o *pKVar2;
  
  if ((DAT_04565f79 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_Contains__);
    DAT_04565f79 = 1;
  }
  pKVar2 = (__this->fields).MLAAJICBOAD;
  if (pKVar2 != (KAMBBJFPLGM_o *)0x0) {
    __this_00 = (pKVar2->fields).HBIHNBPPEEO;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Contains
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Il2CppObject *)BNMOJBMGDDN,
                         Method_Google_Protobuf_Collections_RepeatedField<string>_Contains__);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

