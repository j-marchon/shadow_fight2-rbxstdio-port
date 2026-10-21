// AKOMJPINHEN$$HEJHGFDOMMG @ RVA 0x308DE18

void AKOMJPINHEN__HEJHGFDOMMG(AKOMJPINHEN_o *__this,NLFLMJPNOLF_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *__this_00;
  ADOCEKEFHJN_o *__this_01;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_02;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_03;
  int64_t iVar2;
  EEGDOGKBLNG_o *__this_04;
  int64_t iVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04566087 & 1) == 0) {
    FUN_01bab630(&ADOCEKEFHJN_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    DAT_04566087 = 1;
  }
  if (IMMNELPBGIF == (NLFLMJPNOLF_o *)0x0) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
    bVar1 = CHDGOFBHAFI__BHHNJDDGDHF(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    __this_01 = (ADOCEKEFHJN_o *)thunk_FUN_01bda818(ADOCEKEFHJN_TypeInfo);
    method_01 = (MethodInfo *)0x3;
    ADOCEKEFHJN___ctor(__this_01,IMMNELPBGIF,3,(MethodInfo *)0x0);
    AKOMJPINHEN__GCNOBMBNIAA(__this,__this_01,method_01);
    __this_02 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_02 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_02,0x35,(MethodInfo *)0x0);
      __this_03 = (IMMNELPBGIF->fields).MABPCBMOECE;
      if (__this_03 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
        if ((__this_03->fields).count < 1) {
          return;
        }
        iVar2 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                          (__this_03,0,
                           Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
        }
        __this_04 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (__this_04 != (EEGDOGKBLNG_o *)0x0) {
          iVar3 = EEGDOGKBLNG__APCMGOCHMGC(__this_04,(MethodInfo *)0x0);
          if (iVar2 == iVar3) {
            return;
          }
          KFCFGKEHPNK__EECLBEHBHFI(8,method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

