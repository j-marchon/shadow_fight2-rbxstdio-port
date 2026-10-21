// TypeDefIndex 513
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class ChatMessageView : ChatSFView, KOPGBBHMPDP
// Fields:
//   private SimpleScroll _messagesScroll; // 0x30
//   private EditBox _editBox; // 0x38
//   private GameObject _messageItemPrefab; // 0x40
//   private Color32 _evenMessageColor; // 0x48
//   private Color32 _unevenMessageColor; // 0x4C
//   private ResolutionButton _SendTextButton; // 0x50
//   private CKLIGNAPKFO PHBLHKJMDJK; // 0x58

// ===== public CKLIGNAPKFO get_MsgChannel()  [RVA 0x358F794]
// Nekki.SF2.GUI.Dialogs.Raids.ChatMessageView$$get_MsgChannel @ RVA 0x358F794

int32_t Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__get_MsgChannel
                  (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this,MethodInfo *method)

{
  return *(int32_t *)&(__this->fields)._SendTextButton;
}


// ===== public void set_MsgChannel(CKLIGNAPKFO CJNHFNHJHPE)  [RVA 0x358F79C]
// Nekki.SF2.GUI.Dialogs.Raids.ChatMessageView$$set_MsgChannel @ RVA 0x358F79C

void Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__set_MsgChannel
               (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  *(int32_t *)&(__this->fields)._SendTextButton = CJNHFNHJHPE;
  return;
}


// ===== public override void Init(ChatSFViewController ELHFHAPBFMI)  [RVA 0x358F7A4]
// Nekki.SF2.GUI.Dialogs.Raids.ChatMessageView$$Init @ RVA 0x358F7A4

void Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *ELHFHAPBFMI,MethodInfo *method)

{
  int32_t BOFAKAEIMME;
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o **ppNVar2;
  KPBOJBLLKPJ_o *__this_00;
  UnityEngine_Color32_Fields __this_01;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  
  if ((DAT_04568d69 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10812/*"RaidChat.button_send_1"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_04568d69 = 1;
  }
  pNVar3 = (__this->fields)._messagesScroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._messagesScroll;
    if (pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_0368f894;
    Nekki_SF2_GUI_SimpleScroll__Init(pNVar3,(MethodInfo *)0x0);
  }
  ppNVar2 = &(__this->fields).super.FLLHHEODKPH;
  *ppNVar2 = ELHFHAPBFMI;
  thunk_FUN_01c20e04(ppNVar2,ELHFHAPBFMI);
  if (ELHFHAPBFMI != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
    BOFAKAEIMME = (ELHFHAPBFMI->fields).FIACGKGFFJP;
    *(int32_t *)&(__this->fields)._SendTextButton = BOFAKAEIMME;
    __this_00 = (ELHFHAPBFMI->fields).EBBJNLDAMCC;
    if (__this_00 != (KPBOJBLLKPJ_o *)0x0) {
      KPBOJBLLKPJ__DCLLOBOHLME(__this_00,BOFAKAEIMME,(KOPGBBHMPDP_o *)__this,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._unevenMessageColor.fields;
      if (__this_01 != (UnityEngine_Color32_Fields)0x0) {
        Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                  ((Nekki_SF2_GUI_ResolutionButton_o *)__this_01,StringLiteral_14092/*"UI/Atlases/"*/,
                   StringLiteral_10812/*"RaidChat.button_send_1"*/,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0368f894:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x358F898]
// Nekki.SF2.GUI.Dialogs.Raids.ChatMessageView$$OnDestroy @ RVA 0x358F898

void Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this,MethodInfo *method)

{
  KPBOJBLLKPJ_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *pNVar1;
  
  pNVar1 = (__this->fields).super.FLLHHEODKPH;
  if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) &&
     (__this_00 = (pNVar1->fields).EBBJNLDAMCC, __this_00 != (KPBOJBLLKPJ_o *)0x0)) {
    KPBOJBLLKPJ__KMJIIFFEJLH
              (__this_00,(pNVar1->fields).FIACGKGFFJP,(KOPGBBHMPDP_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetEditBoxVisible(bool CJNHFNHJHPE)  [RVA 0x358F8C4]
// Nekki.SF2.GUI.Dialogs.Raids.ChatMessageView$$SetEditBoxVisible @ RVA 0x358F8C4

void Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__SetEditBoxVisible
               (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar2;
  
  if ((DAT_04568d6a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d6a = 1;
  }
  pNVar2 = (__this->fields)._editBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._editBox;
    if ((pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void OnNewMessage(ODKDFMHHLIP IHNKCJHDDKD)  [RVA 0x358F968]
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


// ===== public void OnUpdateMessage(ODKDFMHHLIP IHNKCJHDDKD)  [RVA 0x358FB64]
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


// ===== public void OnRemoveMessage(int DPJIDNBJIBG)  [RVA 0x358FC9C]
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


// ===== public void OnChannelReset()  [RVA 0x358FFC4]
// Nekki.SF2.GUI.Dialogs.Raids.ChatMessageView$$OnChannelReset @ RVA 0x358FFC4

void Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__OnChannelReset
               (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  ODKDFMHHLIP_o *IHNKCJHDDKD;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  int CKMDPHJOKAF;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *pNVar3;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  
  if ((DAT_04568d6e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d6e = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).super.FLLHHEODKPH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pNVar4 = (__this->fields)._messagesScroll;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      pNVar4 = (__this->fields)._messagesScroll;
      if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar4,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).super.FLLHHEODKPH;
        if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
          CKMDPHJOKAF = 0;
          do {
            iVar2 = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__GetMessagesCount
                              (pNVar3,(MethodInfo *)0x0);
            if (iVar2 <= CKMDPHJOKAF) {
              return;
            }
            pNVar3 = (__this->fields).super.FLLHHEODKPH;
            if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) break;
            method_00 = (MethodInfo *)0x0;
            IHNKCJHDDKD = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__GetMessage
                                    (pNVar3,CKMDPHJOKAF,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__OnNewMessage(__this,IHNKCJHDDKD,method_00);
            pNVar3 = (__this->fields).super.FLLHHEODKPH;
            CKMDPHJOKAF = CKMDPHJOKAF + 1;
          } while (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void OnSendMsgPressed()  [RVA 0x35900B0]
// Nekki.SF2.GUI.Dialogs.Raids.ChatMessageView$$OnSendMsgPressed @ RVA 0x35900B0

void Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__OnSendMsgPressed
               (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *pNVar2;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar3;
  
  if ((DAT_04568d6f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568d6f = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).super.FLLHHEODKPH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 0369011c to 037902d3 has its CatchHandler @ 0369011c
                       catch() { ... } // from try @ 0369011c with catch @ 0369011c
                       catch() { ... } // from try @ 0369037c with catch @ 0369011c
                       catch() { ... } // from try @ 036904e8 with catch @ 0369011c
                       catch() { ... } // from try @ 036904f0 with catch @ 0369011c
                       catch() { ... } // from try @ 036905a4 with catch @ 0369011c */
    pNVar3 = (__this->fields)._editBox;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields)._editBox;
      if ((pNVar3 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) &&
         (pNVar2 = (__this->fields).super.FLLHHEODKPH,
         pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0)) {
        Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__SendMessage
                  (pNVar2,(pNVar3->fields).super.m_Text,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._editBox;
        if (pNVar3 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
          UnityEngine_UI_InputField__set_text
                    ((UnityEngine_UI_InputField_o *)pNVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void .ctor()  [RVA 0x359019C]
// Nekki.SF2.GUI.Dialogs.Raids.ChatMessageView$$.ctor @ RVA 0x359019C

void Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)__this,(MethodInfo *)0x0);
  return;
}

