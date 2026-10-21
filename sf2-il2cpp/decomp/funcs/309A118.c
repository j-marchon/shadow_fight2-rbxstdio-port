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

