// Nekki.SF2.GUI.Dialogs.NotificationsGame.<>c$$CBHMHHCPPCB @ RVA 0x30F83EC

void Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c__CBHMHHCPPCB
               (Nekki_SF2_GUI_Dialogs_NotificationsGame___c_o *__this,Il2CppObject *data,
               MethodInfo *method)

{
  undefined4 *puVar1;
  System_String_o *pSVar2;
  System_String_o *str3;
  undefined4 local_34;
  
  if ((DAT_04566480 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
    FUN_01bab630(&StringLiteral_4988);
    FUN_01bab630(&StringLiteral_373);
    DAT_04566480 = 1;
  }
  local_34 = 0;
  if (data == (Il2CppObject *)0x0) {
    local_34 = 0;
  }
  else {
    if ((data->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(data);
    }
    puVar1 = (undefined4 *)thunk_FUN_01bda96c();
    local_34 = *puVar1;
  }
  pSVar2 = System_Int32__ToString
                     ((int32_t)Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields,
                      (MethodInfo *)0x0);
  str3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(StringLiteral_4988,pSVar2,StringLiteral_373,str3,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->DHLNILFLNKE =
       Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->DHLNILFLNKE + 1;
  return;
}

