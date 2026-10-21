// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$OHNGNOIEJLH @ RVA 0x352DBD4

Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *
Nekki_SF2_GUI_Dialogs_Raids_MessageItem__OHNGNOIEJLH
          (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,UnityEngine_GameObject_o *DKIDCBPNMPD,
          MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *pNVar2;
  
  if ((DAT_04568a3b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MessageItemContent>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a3b = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)DKIDCBPNMPD,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    return (Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)0x0;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = (UnityEngine_GameObject_o *)
              UnityEngine_Object__Instantiate<object>
                        ((Il2CppObject *)DKIDCBPNMPD,
                         Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_GetComponent<MessageItemContent>__);
    return pNVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

