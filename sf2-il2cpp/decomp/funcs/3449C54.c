// NDPMLPGANCI$$DHMIJAAHPEI @ RVA 0x3449C54

void NDPMLPGANCI__DHMIJAAHPEI(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar2;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04568266 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568266 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
  }
  pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    bVar1 = EEGDOGKBLNG__NMFKMEFIIMP(__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      NDPMLPGANCI__KJGGEPNHOBK((NDPMLPGANCI_o *)(ulong)bVar1,method_00);
      return;
    }
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateChatChannel(pNVar2,3,true,(MethodInfo *)0x0)
      ;
      pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
      if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateChatChannel
                  (pNVar2,2,false,(MethodInfo *)0x0);
        NDPMLPGANCI__NPDADBCINPL(__this,method_01);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

