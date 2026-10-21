// Nekki.SF2.GUI.Dialogs.Raids.ChatMessageView$$OnRemoveMessage @ RVA 0x358FC9C

void Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__OnRemoveMessage
               (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  UnityEngine_Color32_o *pUVar6;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *pNVar7;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar8;
  UnityEngine_Color_o CJNHFNHJHPE;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568d6d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MessageItem_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d6d = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pNVar8 = (__this->fields)._messagesScroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pNVar8 = (__this->fields)._messagesScroll;
    if ((pNVar8 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) ||
       (pSVar5 = *(System_Collections_Generic_List_object__o **)&(pNVar8->fields)._snapEase,
       pSVar5 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_0368ff40;
    if (DPJIDNBJIBG < (pSVar5->fields)._size) {
      IKKAMAMLIKA = (Nekki_SF2_GUI_BaseScrollItem_o *)
                    System_Collections_Generic_List<object>__get_Item
                              (pSVar5,DPJIDNBJIBG,
                               Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      pNVar8 = (__this->fields)._messagesScroll;
      if (pNVar8 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_0368ff40;
      Nekki_SF2_GUI_SimpleScroll__Delete(pNVar8,IKKAMAMLIKA,(MethodInfo *)0x0);
      pNVar8 = (__this->fields)._messagesScroll;
      if ((pNVar8 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) ||
         (pSVar5 = *(System_Collections_Generic_List_object__o **)&(pNVar8->fields)._snapEase,
         pSVar5 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_0368ff40;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,pSVar5,
                 Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
      bVar3 = false;
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_70,
                                Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                               ), bVar4) {
        if (bVar3) {
          if ((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *)local_70.fields._current ==
              (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *)0x0) goto LAB_0368ff3c;
          bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_TypeInfo->_2).naturalAligment;
          if (((((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_c *)(local_70.fields._current)->klass)->_2
               ).naturalAligment < bVar2) ||
             (pUVar6 = (UnityEngine_Color32_o *)&(__this->fields)._evenMessageColor.fields.r,
             (((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_c *)(local_70.fields._current)->klass)->_2).
             typeHierarchy[(ulong)bVar2 - 1] !=
             (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_MessageItem_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
        }
        else {
          if ((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *)local_70.fields._current ==
              (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *)0x0) {
LAB_0368ff3c:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_TypeInfo->_2).naturalAligment;
          if (((((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_c *)(local_70.fields._current)->klass)->_2
               ).naturalAligment < bVar2) ||
             (pUVar6 = &(__this->fields)._evenMessageColor,
             (((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_c *)(local_70.fields._current)->klass)->_2).
             typeHierarchy[(ulong)bVar2 - 1] !=
             (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_MessageItem_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
        }
        uVar1._0_1_ = *(uint8_t *)&(pUVar6->fields).rgba;
        uVar1._1_1_ = *(uint8_t *)((long)&(pUVar6->fields).rgba + 1);
        uVar1._2_1_ = *(uint8_t *)((long)&(pUVar6->fields).rgba + 2);
        uVar1._3_1_ = *(uint8_t *)((long)&(pUVar6->fields).rgba + 3);
        CJNHFNHJHPE.fields.a = (float)(uVar1 >> 0x18) / 255.0;
        CJNHFNHJHPE.fields.b = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
        CJNHFNHJHPE.fields.g = (float)(uVar1 >> 8 & 0xff) / 255.0;
        CJNHFNHJHPE.fields.r = (float)(uVar1 & 0xff) / 255.0;
        Nekki_SF2_GUI_Dialogs_Raids_MessageItem__set_ColorBG
                  ((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *)local_70.fields._current,CJNHFNHJHPE
                   ,(MethodInfo *)0x0);
        bVar3 = (bool)(bVar3 ^ 1);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    }
    pNVar7 = (__this->fields).super.FLLHHEODKPH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar3) {
      pNVar7 = (__this->fields).super.FLLHHEODKPH;
      if (pNVar7 == (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
LAB_0368ff40:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OnNewMessageInChannel
                (pNVar7,(MethodInfo *)0x0);
    }
  }
  return;
}

