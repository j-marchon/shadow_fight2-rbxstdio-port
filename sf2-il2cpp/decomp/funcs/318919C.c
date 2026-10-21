// PHLKGOCKIGP$$COOGOEJJHMK @ RVA 0x318919C

bool PHLKGOCKIGP__COOGOEJJHMK(System_String_o *JENJDCENCHA,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this;
  
  if (DAT_04566ab2 == '\0') {
    FUN_01bab630(&PHLKGOCKIGP_TypeInfo);
    DAT_04566ab2 = '\x01';
  }
  PHLKGOCKIGP_TypeInfo->static_fields->_AGGOFPAGILE_k__BackingField = JENJDCENCHA;
  thunk_FUN_01c20e04(PHLKGOCKIGP_TypeInfo->static_fields,JENJDCENCHA);
  __this = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this,10,(MethodInfo *)0x0);
    if (DAT_04566ab2 == '\0') {
      FUN_01bab630(&PHLKGOCKIGP_TypeInfo);
      DAT_04566ab2 = '\x01';
    }
    PHLKGOCKIGP_TypeInfo->static_fields->_AGGOFPAGILE_k__BackingField = (System_String_o *)0x0;
    thunk_FUN_01c20e04(PHLKGOCKIGP_TypeInfo->static_fields,0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

