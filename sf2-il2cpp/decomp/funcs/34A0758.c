// KOCAEDNKMJE$$AJJLBBCJAAL @ RVA 0x34A0758

System_String_o *
KOCAEDNKMJE__AJJLBBCJAAL(KOCAEDNKMJE_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  System_String_o **ppSVar2;
  System_String_StaticFields HBDNGIDONHG;
  
  if ((DAT_04568496 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5816);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5817);
    FUN_01bab630(&byte___TypeInfo);
    __this = (KOCAEDNKMJE_o *)FUN_01bab630(&string_TypeInfo);
    DAT_04568496 = 1;
  }
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if (OPAEPDIIOEB->max_length == 0) {
      ppSVar2 = &string_TypeInfo->static_fields->Empty;
    }
    else {
      if ((int)OPAEPDIIOEB->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0(__this);
      }
      ppSVar2 = OPAEPDIIOEB->m_Items;
    }
    HBDNGIDONHG.Empty = *ppSVar2;
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__RefreshQuest_Debug
                (__this_00,HBDNGIDONHG.Empty,(MethodInfo *)0x0);
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5816,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      method_00 = (MethodInfo *)0x0;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5817,
                 (MethodInfo *)0x0);
      pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,method_00);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

