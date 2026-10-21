// Nekki.SF2.GUI.Dialogs.Raids.ChatMessageView$$OnNewMessage @ RVA 0x358F968

void Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__OnNewMessage
               (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this,ODKDFMHHLIP_o *IHNKCJHDDKD,
               MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  long lVar4;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *pNVar5;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Color_o CJNHFNHJHPE;
  
  if ((DAT_04568d6b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MessageItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d6b = 1;
  }
  x = (UnityEngine_Object_o *)(__this->fields)._messageItemPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pNVar6 = (__this->fields)._messagesScroll;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar3) {
      pUVar7 = (__this->fields)._messageItemPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar7 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar7,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
         (__this_00 = (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *)
                      UnityEngine_GameObject__GetComponent<object>
                                (pUVar7,Method_UnityEngine_GameObject_GetComponent<MessageItem>__),
         __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *)0x0)) {
        (*(__this_00->klass->vtable)._52_Init.methodPtr)
                  (__this_00,IHNKCJHDDKD,(__this_00->klass->vtable)._52_Init.method);
        pNVar6 = (__this->fields)._messagesScroll;
        if ((pNVar6 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
           (lVar4 = *(long *)&(pNVar6->fields)._snapEase, lVar4 != 0)) {
          lVar1 = 0x48;
          if ((*(uint *)(lVar4 + 0x18) & 1) != 0) {
            lVar1 = 0x4c;
          }
          uVar2 = *(uint *)((long)&__this->klass + lVar1);
          CJNHFNHJHPE.fields.a = (float)(uVar2 >> 0x18) / 255.0;
          CJNHFNHJHPE.fields.b = (float)(uVar2 >> 0x10 & 0xff) / 255.0;
          CJNHFNHJHPE.fields.g = (float)(uVar2 >> 8 & 0xff) / 255.0;
          CJNHFNHJHPE.fields.r = (float)(uVar2 & 0xff) / 255.0;
          Nekki_SF2_GUI_Dialogs_Raids_MessageItem__set_ColorBG
                    (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
          pNVar6 = (__this->fields)._messagesScroll;
          if (pNVar6 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
            Nekki_SF2_GUI_SimpleScroll__AddItem
                      (pNVar6,(Nekki_SF2_GUI_BaseScrollItem_o *)__this_00,true,(MethodInfo *)0x0);
            __this_01 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetAsFirstSibling(__this_01,(MethodInfo *)0x0);
              pNVar5 = (__this->fields).super.FLLHHEODKPH;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar3 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (!bVar3) {
                return;
              }
              pNVar5 = (__this->fields).super.FLLHHEODKPH;
              if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
                Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OnNewMessageInChannel
                          (pNVar5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

