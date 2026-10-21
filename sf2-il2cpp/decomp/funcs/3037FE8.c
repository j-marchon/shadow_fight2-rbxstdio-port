// LJNJDFEAIOH$$APOKKNPGGNP @ RVA 0x3037FE8

void LJNJDFEAIOH__APOKKNPGGNP(LJNJDFEAIOH_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_01;
  AKOMJPINHEN_o *__this_02;
  
  if ((DAT_04565d7c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10988);
    DAT_04565d7c = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__DHMIJAAHPEI(__this_00,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10988,(MethodInfo *)0x0);
      return;
    }
    if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateChatChannel
                (__this_01,2,true,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
      if (__this_02 != (AKOMJPINHEN_o *)0x0) {
        AKOMJPINHEN__MCAIDEFDJHF(__this_02,(__this->fields).IHODMKCBNKJ,(MethodInfo *)0x0);
        NDPMLPGANCI__NPDADBCINPL(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

