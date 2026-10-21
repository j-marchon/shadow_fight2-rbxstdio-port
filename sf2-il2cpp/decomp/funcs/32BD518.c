// MainMenuRaidRatingPanel$$AKPDIPJLNGK @ RVA 0x32BD518

void MainMenuRaidRatingPanel__AKPDIPJLNGK
               (MainMenuRaidRatingPanel_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar2;
  KGBIBHEFBHA_o *HEHMPFLAEGE;
  MethodInfo *method_00;
  Google_Protobuf_Collections_RepeatedField_T__o *__this_01;
  int index;
  
  if ((DAT_045674a8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<GLPEFEEGCPM>__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__);
    DAT_045674a8 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar1 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<GLPEFEEGCPM>__);
    if (pIVar1 == (Il2CppObject *)0x0) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      iVar2 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
      __this_01 = pIVar1[2].monitor;
      if (__this_01 != (Google_Protobuf_Collections_RepeatedField_T__o *)0x0) {
        index = 0;
        do {
          if ((__this_01->fields).count <= index) {
            return;
          }
          method_00 = Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__;
          HEHMPFLAEGE = (KGBIBHEFBHA_o *)
                        Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                  (__this_01,index,
                                   (MethodInfo_295F6AC *)
                                   Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__
                                  );
          if (HEHMPFLAEGE == (KGBIBHEFBHA_o *)0x0) break;
          if ((HEHMPFLAEGE->fields).ANAJGHJEEOC == iVar2) {
            MainMenuRaidRatingPanel__ENOENFMAGCF(__this,HEHMPFLAEGE,method_00);
          }
          __this_01 = pIVar1[2].monitor;
          index = index + 1;
        } while (__this_01 != (Google_Protobuf_Collections_RepeatedField_T__o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

