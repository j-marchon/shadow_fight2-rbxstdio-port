// Nekki.SF2.GUI.Dialogs.NotificationsGame$$LFLEKGKEMDG @ RVA 0x30F673C

void Nekki_SF2_GUI_Dialogs_NotificationsGame__LFLEKGKEMDG
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_object__o **ppSVar2;
  System_Action_object__o *pSVar3;
  uint local_24;
  
  if ((DAT_04566463 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04566463 = 1;
  }
  ppSVar2 = &(__this->fields).BLNMHHKCCOD;
  pSVar3 = *ppSVar2;
  if (pSVar3 != (System_Action_object__o *)0x0) {
    *ppSVar2 = (System_Action_object__o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
    local_24 = (uint)CJNHFNHJHPE;
    uVar1 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,uVar1,(pSVar3->fields).super.super.method);
  }
  return;
}

