// LJNJDFEAIOH$$HFBLMGCOOHJ @ RVA 0x3038150

void LJNJDFEAIOH__HFBLMGCOOHJ(LJNJDFEAIOH_o *__this,AADKBCFCLKK_o *IIPPMAOIKHB,MethodInfo *method)

{
  int iVar1;
  IBMLPPNMDCI_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_01;
  Il2CppObject *pIVar2;
  HCKCBFOGMMJ_o *__this_02;
  System_Action_LFELBGMCDHD__o *BLMFLPJJMPF;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_03;
  int index;
  
  if ((DAT_04565d5e & 1) == 0) {
    FUN_01bab630(&System_Action<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_LJNJDFEAIOH_NKLNDGMMAAH__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__);
    DAT_04565d5e = 1;
  }
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo);
  IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
  if ((IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) &&
     (__this_01 = (IIPPMAOIKHB->fields).MPAIPMANDEO,
     __this_01 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0)) {
    iVar1 = (__this_01->fields).count;
    if (iVar1 < 1) {
LAB_0313825c:
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_LFELBGMCDHD__o *)
                    thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (HCKCBFOGMMJ_o *)0x0) {
        HCKCBFOGMMJ__EFCMPBGIEGJ(__this_02,__this_00,BLMFLPJJMPF,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      index = 0;
      do {
        pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,index,
                            Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__
                           );
        if (((__this_00 == (IBMLPPNMDCI_o *)0x0) || (pIVar2 == (Il2CppObject *)0x0)) ||
           (__this_03 = (__this_00->fields).EHBNKDHKJNI,
           __this_03 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) break;
        Google_Protobuf_Collections_RepeatedField<long>__Add
                  (__this_03,(int64_t)pIVar2[1].monitor,
                   Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
        index = index + 1;
        if (iVar1 == index) goto LAB_0313825c;
        __this_01 = (IIPPMAOIKHB->fields).MPAIPMANDEO;
      } while (__this_01 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

