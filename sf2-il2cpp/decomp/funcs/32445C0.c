// CHDGOFBHAFI$$BNMEANHFGEB @ RVA 0x32445C0

void CHDGOFBHAFI__BNMEANHFGEB(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  int iVar1;
  IBMLPPNMDCI_o *__this_00;
  Il2CppObject *pIVar2;
  HCKCBFOGMMJ_o *__this_01;
  System_Action_LFELBGMCDHD__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  AADKBCFCLKK_o *pAVar3;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_02;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *pGVar4;
  int index;
  
  if ((DAT_045670a8 & 1) == 0) {
    FUN_01bab630(&System_Action<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_BOPPNNMNDCB__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__);
    DAT_045670a8 = 1;
    method = extraout_x1;
  }
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo,method);
  IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
  pAVar3 = (__this->fields).AABMLCNHHPN;
  if ((pAVar3 != (AADKBCFCLKK_o *)0x0) &&
     (pGVar4 = (pAVar3->fields).MPAIPMANDEO,
     pGVar4 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0)) {
    iVar1 = (pGVar4->fields).count;
    if (iVar1 < 1) {
LAB_033446d4:
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_LFELBGMCDHD__o *)
                    thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (HCKCBFOGMMJ_o *)0x0) {
        HCKCBFOGMMJ__EFCMPBGIEGJ(__this_01,__this_00,BLMFLPJJMPF,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      index = 0;
      do {
        pGVar4 = (pAVar3->fields).MPAIPMANDEO;
        if ((((pGVar4 == (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) ||
             (pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                 ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,index,
                                  Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__
                                 ), __this_00 == (IBMLPPNMDCI_o *)0x0)) ||
            (pIVar2 == (Il2CppObject *)0x0)) ||
           (__this_02 = (__this_00->fields).EHBNKDHKJNI,
           __this_02 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) break;
        Google_Protobuf_Collections_RepeatedField<long>__Add
                  (__this_02,(int64_t)pIVar2[1].monitor,
                   Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
        index = index + 1;
        if (iVar1 == index) goto LAB_033446d4;
        pAVar3 = (__this->fields).AABMLCNHHPN;
      } while (pAVar3 != (AADKBCFCLKK_o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

