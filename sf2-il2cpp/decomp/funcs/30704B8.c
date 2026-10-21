// EEGDOGKBLNG$$LLNLBFAEJNC @ RVA 0x30704B8

void EEGDOGKBLNG__LLNLBFAEJNC(EEGDOGKBLNG_o *__this,KAMBBJFPLGM_o *MCCKDBNBCPM,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  PIADCKMDDAK_o *OAOLCGAIILM;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int index;
  
  if ((DAT_04565f76 & 1) == 0) {
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    FUN_01bab630(&StringLiteral_4294);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565f76 = 1;
  }
  if ((__this->fields).MLAAJICBOAD == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_4294,StringLiteral_1,(MethodInfo *)0x0);
  EEGDOGKBLNG__AMLHEDJMKEC(__this,method_00);
  if ((MCCKDBNBCPM != (KAMBBJFPLGM_o *)0x0) &&
     (__this_00 = (MCCKDBNBCPM->fields).LEJBLHJFJHP,
     __this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    iVar1 = (__this_00->fields).count;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      method_01 = Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__;
      OAOLCGAIILM = (PIADCKMDDAK_o *)
                    Google_Protobuf_Collections_RepeatedField<object>__get_Item
                              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                               (MethodInfo_295F6AC *)
                               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                              );
      EEGDOGKBLNG__LLNLBFAEJNC(__this,OAOLCGAIILM,method_01);
      if (iVar1 + -1 == index) {
        return;
      }
      __this_00 = (MCCKDBNBCPM->fields).LEJBLHJFJHP;
      index = index + 1;
    } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

