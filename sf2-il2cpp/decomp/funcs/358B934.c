// EnterScreen$$OnDestroy @ RVA 0x358B934

void EnterScreen__OnDestroy(EnterScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar1;
  System_Collections_Generic_List_EnterScreen__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04568d3f & 1) == 0) {
    FUN_01bab630(&EnterScreen_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EnterScreen>_Remove__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    DAT_04568d3f = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->HasEverShownChat != false)
  {
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
    }
    pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
    if (pNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) goto LAB_0368ba0c;
    (*(pNVar1->klass->vtable)._20_Show.methodPtr)(pNVar1,(pNVar1->klass->vtable)._20_Show.method);
    method = extraout_x1_01;
  }
  if ((EnterScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EnterScreen_TypeInfo,method);
  }
  __this_00 = EnterScreen_TypeInfo->static_fields->PHPCCHBPFNA;
  if (__this_00 != (System_Collections_Generic_List_EnterScreen__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
               Method_System_Collections_Generic_List<EnterScreen>_Remove__);
    return;
  }
LAB_0368ba0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

