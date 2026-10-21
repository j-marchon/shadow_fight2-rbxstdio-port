// Nekki.SF2.GUI.Dialogs.Raids.ChatSFTabButton$$SetUnreadedMsgCount @ RVA 0x334AE84

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton__SetUnreadedMsgCount
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *__this,int32_t DFIBGGDJPLM,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  System_String_o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *parent;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar7;
  FNONKACJHKO_o *pFVar8;
  Nekki_SF2_GUI_ResolutionImage_o **ppNVar9;
  int32_t local_24;
  
  local_24 = DFIBGGDJPLM;
  if ((DAT_045679f5 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045679f5 = 1;
  }
  pFVar8 = (__this->fields).JMEFJLDILIJ;
  if (pFVar8 != (FNONKACJHKO_o *)0x0) {
    (pFVar8->fields).MGKJNCPJJPO = DFIBGGDJPLM;
    if (DFIBGGDJPLM < 1) {
      pNVar4 = (__this->fields)._newMsgCircle;
      if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._newMsgEllipse;
        if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._unreadMsgLabel;
          if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      pNVar2 = (__this->fields)._unreadMsgLabel;
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._newMsgCircle;
        if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,DFIBGGDJPLM < 10,(MethodInfo *)0x0);
          pNVar4 = (__this->fields)._newMsgEllipse;
          if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,9 < DFIBGGDJPLM,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._unreadMsgLabel;
            pSVar5 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                        (pNVar2,pSVar5,(pNVar2->klass->vtable)._75_set_text.method);
              pNVar2 = (__this->fields)._unreadMsgLabel;
              if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
                if (DFIBGGDJPLM < 10) {
                  ppNVar9 = &(__this->fields)._newMsgCircle;
                }
                else {
                  ppNVar9 = &(__this->fields)._newMsgEllipse;
                }
                if ((*ppNVar9 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                   (parent = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)*ppNVar9,(MethodInfo *)0x0),
                   pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__SetParent(pUVar6,parent,false,(MethodInfo *)0x0);
                  pNVar4 = *ppNVar9;
                  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  bVar1 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar1) {
                    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                    if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0344b0ec;
                    pUVar6 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
                    pDVar7 = DG_Tweening_ShortcutExtensions__DOScaleX
                                       (pUVar6,(__this->fields)._minScale,
                                        (__this->fields)._scaleDuration,(MethodInfo *)0x0);
                    DG_Tweening_TweenSettingsExtensions__Append
                              (s,(DG_Tweening_Tween_o *)pDVar7,(MethodInfo *)0x0);
                    pUVar6 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
                    pDVar7 = DG_Tweening_ShortcutExtensions__DOScaleX
                                       (pUVar6,(__this->fields)._maxScale,
                                        (__this->fields)._scaleDuration,(MethodInfo *)0x0);
                    DG_Tweening_TweenSettingsExtensions__Append
                              (s,(DG_Tweening_Tween_o *)pDVar7,(MethodInfo *)0x0);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0344b0ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

