// JJPNLEPEAFM$$ENALHJGHEEN @ RVA 0x35359DC

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__ENALHJGHEEN(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this;
  
  if ((DAT_04568a8b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a8b = 1;
  }
  x = GCIFMNHADDF__ACDDKABEBAP(0xdc,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this,0x29,(MethodInfo *)0x0);
  }
  return x;
}

