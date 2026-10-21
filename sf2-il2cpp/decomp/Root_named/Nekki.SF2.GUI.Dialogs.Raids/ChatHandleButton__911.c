// TypeDefIndex 911
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class ChatHandleButton : ResolutionButton, NJHCMIIJCBO
// Fields:
//   private ResolutionImage _buttonImage; // 0x1A8
//   private ResolutionImage _unreadMessageIndicator; // 0x1B0
//   private LabelAlias _unreadMsgLabel; // 0x1B8
//   private float _minScale; // 0x1C0
//   private float _maxScale; // 0x1C4
//   private float _scaleDuration; // 0x1C8
//   private Vector2 _openPosition; // 0x1CC
//   private Vector2 _closePosition; // 0x1D4
//   private ChatHandleButton.LDLNFCPAKMF ONCKKFAODHL; // 0x1DC
//   private FNONKACJHKO JMEFJLDILIJ; // 0x1E0

// ===== public ChatHandleButton.LDLNFCPAKMF get_State()  [RVA 0x3099F98]
// Nekki.SF2.GUI.Dialogs.Raids.ChatHandleButton$$get_State @ RVA 0x3099F98

int32_t Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__get_State
                  (Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *__this,MethodInfo *method)

{
  return (__this->fields).ONCKKFAODHL;
}


// ===== public void set_State(ChatHandleButton.LDLNFCPAKMF CJNHFNHJHPE)  [RVA 0x3099FA0]
// Nekki.SF2.GUI.Dialogs.Raids.ChatHandleButton$$set_State @ RVA 0x3099FA0

void Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__set_State
               (Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_Vector3_o value;
  
  if ((DAT_0456610a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456610a = 1;
  }
  (__this->fields).ONCKKFAODHL = CJNHFNHJHPE;
  pNVar4 = (__this->fields)._buttonImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pNVar4 = (__this->fields)._buttonImage;
    if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      bVar3 = (__this->fields).ONCKKFAODHL != 0;
      lVar1 = 0x1d0;
      if (bVar3) {
        lVar1 = 0x1d8;
      }
      lVar2 = 0x1cc;
      if (bVar3) {
        lVar2 = 0x1d4;
      }
      value.fields.y = *(undefined4 *)((long)&__this->klass + lVar1);
      value.fields.x = *(undefined4 *)((long)&__this->klass + lVar2);
      value.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(__this_00,value,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void Init()  [RVA 0x309A070]
// Nekki.SF2.GUI.Dialogs.Raids.ChatHandleButton$$Init @ RVA 0x309A070

void Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *in_x2;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_0456610b & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_OnClick__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456610b = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__set_State(__this,1,in_x2);
  Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__SetUnreadedMsgCount(__this,0,in_x2);
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.super.super.m_OnClick;
  call = (UnityEngine_Events_UnityAction_o *)
         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
  UnityEngine_Events_UnityAction___ctor();
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetUnreadedCount()  [RVA 0x309A2B4]
// Nekki.SF2.GUI.Dialogs.Raids.ChatHandleButton$$GetUnreadedCount @ RVA 0x309A2B4

int32_t Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__GetUnreadedCount
                  (Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *__this,MethodInfo *method)

{
  FNONKACJHKO_o *pFVar1;
  
  pFVar1 = (__this->fields).JMEFJLDILIJ;
  if (pFVar1 != (FNONKACJHKO_o *)0x0) {
    return (pFVar1->fields).MGKJNCPJJPO;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetUnreadedMsgCount(int DFIBGGDJPLM)  [RVA 0x309A118]
// Nekki.SF2.GUI.Dialogs.Raids.ChatHandleButton$$SetUnreadedMsgCount @ RVA 0x309A118

void Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__SetUnreadedMsgCount
               (Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *__this,int32_t DFIBGGDJPLM,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar2;
  DG_Tweening_Sequence_o *s;
  UnityEngine_Transform_o *pUVar3;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar4;
  FNONKACJHKO_o *pFVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  int32_t local_24;
  
  local_24 = DFIBGGDJPLM;
  if ((DAT_0456610c & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456610c = 1;
  }
  pNVar6 = (__this->fields)._unreadMessageIndicator;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pNVar7 = (__this->fields)._unreadMsgLabel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      pFVar5 = (__this->fields).JMEFJLDILIJ;
      if (pFVar5 != (FNONKACJHKO_o *)0x0) {
        (pFVar5->fields).MGKJNCPJJPO = DFIBGGDJPLM;
        pNVar6 = (__this->fields)._unreadMessageIndicator;
        if ((pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_00,0 < DFIBGGDJPLM,(MethodInfo *)0x0);
          pNVar7 = (__this->fields)._unreadMsgLabel;
          pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
          if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                      (pNVar7,pSVar2,(pNVar7->klass->vtable)._75_set_text.method);
            if (DFIBGGDJPLM < 1) {
              return;
            }
            if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
            pNVar6 = (__this->fields)._unreadMessageIndicator;
            if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
              pUVar3 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
              pDVar4 = DG_Tweening_ShortcutExtensions__DOScale
                                 (pUVar3,(__this->fields)._maxScale,(__this->fields)._scaleDuration,
                                  (MethodInfo *)0x0);
              DG_Tweening_TweenSettingsExtensions__Append
                        (s,(DG_Tweening_Tween_o *)pDVar4,(MethodInfo *)0x0);
              pNVar6 = (__this->fields)._unreadMessageIndicator;
              if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                pUVar3 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
                pDVar4 = DG_Tweening_ShortcutExtensions__DOScale
                                   (pUVar3,(__this->fields)._minScale,
                                    (__this->fields)._scaleDuration,(MethodInfo *)0x0);
                DG_Tweening_TweenSettingsExtensions__Append
                          (s,(DG_Tweening_Tween_o *)pDVar4,(MethodInfo *)0x0);
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


// ===== private void OnClick()  [RVA 0x309A2D0]
// Nekki.SF2.GUI.Dialogs.Raids.ChatHandleButton$$OnClick @ RVA 0x309A2D0

void Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__OnClick
               (Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar2;
  Nekki_SF2_GUI_Shop_SidePanel_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456610d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    DAT_0456610d = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
  }
  pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__TryOpenChat(pNVar2,(MethodInfo *)0x0);
    if (bVar1) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
      if ((pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) ||
         (__this_00 = (pNVar2->fields)._sidePanel,
         __this_00 == (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0)) goto LAB_0319a368;
      Nekki_SF2_GUI_Shop_SidePanel__OnClick(__this_00,(MethodInfo *)0x0);
    }
    EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
    return;
  }
LAB_0319a368:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x309A36C]
// Nekki.SF2.GUI.Dialogs.Raids.ChatHandleButton$$.ctor @ RVA 0x309A36C

void Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *__this,MethodInfo *method)

{
  FNONKACJHKO_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456610e & 1) == 0) {
    FUN_01bab630(&FNONKACJHKO_TypeInfo);
    DAT_0456610e = 1;
    method = extraout_x1;
  }
  (__this->fields)._scaleDuration = 0.1;
  (__this->fields)._minScale = 0.5;
  (__this->fields)._maxScale = 0.75;
  __this_00 = (FNONKACJHKO_o *)thunk_FUN_01bda818(FNONKACJHKO_TypeInfo,method);
  FNONKACJHKO___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).JMEFJLDILIJ = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).JMEFJLDILIJ,__this_00);
  Nekki_SF2_GUI_ResolutionButton___ctor
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  return;
}

