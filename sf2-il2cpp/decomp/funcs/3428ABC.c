// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$UpdateCooldownFinishTime @ RVA 0x3428ABC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__UpdateCooldownFinishTime
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,int64_t LFJGFLNMBMC,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  int64_t local_28;
  
  local_28 = LFJGFLNMBMC;
  if ((DAT_04568124 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10871);
    DAT_04568124 = 1;
  }
  pSVar1 = System_Int64__ToString((int64_t)&local_28,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_10871,pSVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  if (0 < local_28) {
    (__this->fields).HODAIAEDHBL = local_28 + 1000;
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__CIHKNMDAPBG(__this,method_00);
  }
  return;
}

