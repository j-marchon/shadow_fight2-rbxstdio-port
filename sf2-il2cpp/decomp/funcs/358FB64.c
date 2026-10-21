// Nekki.SF2.GUI.Dialogs.Raids.ChatMessageView$$OnUpdateMessage @ RVA 0x358FB64

void Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__OnUpdateMessage
               (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this,ODKDFMHHLIP_o *IHNKCJHDDKD,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t index;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar5;
  
  if ((DAT_04568d6c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MessageItem_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d6c = 1;
  }
  pNVar5 = (__this->fields)._messagesScroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  __this_00 = (__this->fields).super.FLLHHEODKPH;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
    index = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__GetIndexBy
                      (__this_00,IHNKCJHDDKD,(MethodInfo *)0x0);
    if (index < 0) {
      return;
    }
    pNVar5 = (__this->fields)._messagesScroll;
    if ((pNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
       (__this_01 = *(System_Collections_Generic_List_object__o **)&(pNVar5->fields)._snapEase,
       __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
      if ((__this_01->fields)._size <= index) {
        return;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         (__this_01,index,
                          Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar4 = pIVar3->klass;
        bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_TypeInfo->_2).naturalAligment;
        if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
           ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_MessageItem_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x0368fc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pIVar4->vtable[0x35].methodPtr)(pIVar3,IHNKCJHDDKD,pIVar4->vtable[0x35].method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

