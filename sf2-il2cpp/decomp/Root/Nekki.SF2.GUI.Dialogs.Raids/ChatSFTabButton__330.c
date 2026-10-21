// TypeDefIndex 330
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class ChatSFTabButton : ResolutionButton, NJHCMIIJCBO
// Fields:
//   private ResolutionImage _newMsgCircle; // 0x1A8
//   private ResolutionImage _newMsgEllipse; // 0x1B0
//   private LabelAlias _unreadMsgLabel; // 0x1B8
//   private LabelAlias _tabCaptionLabel; // 0x1C0
//   private float _minScale; // 0x1C8
//   private float _maxScale; // 0x1CC
//   private float _scaleDuration; // 0x1D0
//   private FNONKACJHKO JMEFJLDILIJ; // 0x1D8

// ===== public string get_Alias()  [RVA 0x334AD64]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFTabButton$$get_Alias @ RVA 0x334AD64

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton__get_Alias
          (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_045679f3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045679f3 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._tabCaptionLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)0x0;
  if (bVar1) {
    pNVar3 = (__this->fields)._tabCaptionLabel;
    if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = *(System_String_o **)&(pNVar3->fields)._useLabelLineSpacing;
  }
  return pSVar2;
}


// ===== public void set_Alias(string CJNHFNHJHPE)  [RVA 0x334ADE4]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFTabButton$$set_Alias @ RVA 0x334ADE4

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton__set_Alias
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_045679f4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045679f4 = 1;
  }
  pNVar2 = (__this->fields)._tabCaptionLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._tabCaptionLabel;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void Init()  [RVA 0x334AE7C]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFTabButton$$Init @ RVA 0x334AE7C

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton__SetUnreadedMsgCount(__this,0,in_x2);
  return;
}


// ===== protected override void OnClick(PointerEventData MELGPLLNBGH)  [RVA 0x334B0F0]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFTabButton$$OnClick @ RVA 0x334B0F0

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton__OnClick
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,MethodInfo *method)

{
  SFButton__OnClick((SFButton_o *)__this,MELGPLLNBGH,(MethodInfo *)0x0);
  if ((__this->fields).super.super.super.super.m_Interactable != false) {
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public int GetUnreadedCount()  [RVA 0x334B120]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFTabButton$$GetUnreadedCount @ RVA 0x334B120

int32_t Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton__GetUnreadedCount
                  (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *__this,MethodInfo *method)

{
  FNONKACJHKO_o *pFVar1;
  
  pFVar1 = (__this->fields).JMEFJLDILIJ;
  if (pFVar1 != (FNONKACJHKO_o *)0x0) {
    return (pFVar1->fields).MGKJNCPJJPO;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetUnreadedMsgCount(int DFIBGGDJPLM)  [RVA 0x334AE84]
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


// ===== public void .ctor()  [RVA 0x334B13C]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFTabButton$$.ctor @ RVA 0x334B13C

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *__this,MethodInfo *method)

{
  FNONKACJHKO_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045679f6 & 1) == 0) {
    FUN_01bab630(&FNONKACJHKO_TypeInfo);
    DAT_045679f6 = 1;
    method = extraout_x1;
  }
  (__this->fields)._scaleDuration = 0.1;
  (__this->fields)._minScale = 0.35;
  (__this->fields)._maxScale = 0.7;
  __this_00 = (FNONKACJHKO_o *)thunk_FUN_01bda818(FNONKACJHKO_TypeInfo,method);
  FNONKACJHKO___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).JMEFJLDILIJ = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).JMEFJLDILIJ,__this_00);
  Nekki_SF2_GUI_ResolutionButton___ctor
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  return;
}

