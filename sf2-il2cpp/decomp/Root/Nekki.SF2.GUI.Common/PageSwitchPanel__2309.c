// TypeDefIndex 2309
// Namespace: Nekki.SF2.GUI.Common
// public class PageSwitchPanel : UIModule
// Fields:
//   private SFButton _NextPageButton; // 0x28
//   private SFButton _PrevPageButton; // 0x30
//   private PageSwitchPanel.PageSwitchEvent _OnPageSwitched; // 0x38

// ===== private void BEBGOPNMHON(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x3314154]
// Nekki.SF2.GUI.Common.PageSwitchPanel$$BEBGOPNMHON @ RVA 0x3314154

void Nekki_SF2_GUI_Common_PageSwitchPanel__BEBGOPNMHON
               (Nekki_SF2_GUI_Common_PageSwitchPanel_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  SFButton_o *__this_00;
  
  if (AAJGEHHPMGH == 0x14) {
    bVar1 = AKJJAPEHKCG__MNKFDLHJPAA
                      ((UnityEngine_UI_Selectable_o *)(__this->fields)._NextPageButton,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    __this_00 = (__this->fields)._NextPageButton;
  }
  else {
    if ((AAJGEHHPMGH != 0x12) ||
       (bVar1 = AKJJAPEHKCG__MNKFDLHJPAA
                          ((UnityEngine_UI_Selectable_o *)(__this->fields)._PrevPageButton,
                           (MethodInfo *)0x0), bVar1)) {
      return;
    }
    __this_00 = (__this->fields)._PrevPageButton;
  }
  if (__this_00 != (SFButton_o *)0x0) {
    SFButton__SetStatePressed(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KEBEOGHDCMM()  [RVA 0x33141B4]
// Nekki.SF2.GUI.Common.PageSwitchPanel$$KEBEOGHDCMM @ RVA 0x33141B4

void Nekki_SF2_GUI_Common_PageSwitchPanel__KEBEOGHDCMM
               (Nekki_SF2_GUI_Common_PageSwitchPanel_o *__this,MethodInfo *method)

{
  int32_t in_w2;
  MethodInfo *in_x4;
  
  Nekki_SF2_GUI_Common_PageSwitchPanel__GKHAKLDEIJI(__this,(int32_t)method,in_w2,0x14,in_x4);
  return;
}


// ===== public PageSwitchPanel.PageSwitchEvent get_OnPageSwitched()  [RVA 0x33142A8]
// Nekki.SF2.GUI.Common.PageSwitchPanel$$get_OnPageSwitched @ RVA 0x33142A8

Nekki_SF2_GUI_Common_PageSwitchPanel_PageSwitchEvent_o *
Nekki_SF2_GUI_Common_PageSwitchPanel__get_OnPageSwitched
          (Nekki_SF2_GUI_Common_PageSwitchPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnPageSwitched;
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x33142B0]
// Nekki.SF2.GUI.Common.PageSwitchPanel$$CLNAOMIIBLH @ RVA 0x33142B0

void Nekki_SF2_GUI_Common_PageSwitchPanel__CLNAOMIIBLH
               (Nekki_SF2_GUI_Common_PageSwitchPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__o *pSVar3;
  SFButton_o *pSVar4;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  
  if ((DAT_045677ca & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PageSwitchPanel_ADIHLMELFML__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PageSwitchPanel_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PageSwitchPanel_GKHAKLDEIJI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PageSwitchPanel_KEBEOGHDCMM__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045677ca = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._NextPageButton;
  if (pSVar4 != (SFButton_o *)0x0) {
    pUVar5 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
    pUVar1 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(pUVar5,pUVar1,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._PrevPageButton;
      if (pSVar4 != (SFButton_o *)0x0) {
        pUVar5 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
        pUVar1 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__RemoveListener(pUVar5,pUVar1,(MethodInfo *)0x0);
          pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
          if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
            __this_00 = (pNVar2->fields).KIHMKIEFOEI;
            pSVar3 = (System_Action_T0__T1__T2__o *)
                     thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
            System_Action<Int32Enum,_int,_Int32Enum>___ctor();
            if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
              FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                        ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar3,
                         Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
              pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
              if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                __this_01 = (pNVar2->fields).GMLEPHMBMPD;
                pSVar3 = (System_Action_T0__T1__T2__o *)
                         thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                if (__this_01 != (JPGJLKENNCC_o *)0x0) {
                  FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                            ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar3,
                             Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x3314474]
// Nekki.SF2.GUI.Common.PageSwitchPanel$$GIENGNEGHPJ @ RVA 0x3314474

void Nekki_SF2_GUI_Common_PageSwitchPanel__GIENGNEGHPJ
               (Nekki_SF2_GUI_Common_PageSwitchPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__o *pSVar3;
  System_Enum_o *pSVar4;
  SFButton_o *pSVar5;
  UnityEngine_Events_UnityEvent_o *pUVar6;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_045677cb & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PageSwitchPanel_ADIHLMELFML__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PageSwitchPanel_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PageSwitchPanel_GKHAKLDEIJI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PageSwitchPanel_KEBEOGHDCMM__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045677cb = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pSVar5 = (__this->fields)._NextPageButton;
  if (pSVar5 != (SFButton_o *)0x0) {
    pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pSVar5->fields).super.m_OnClick;
    pUVar1 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar1,(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._PrevPageButton;
      if (pSVar5 != (SFButton_o *)0x0) {
        pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pSVar5->fields).super.m_OnClick;
        pUVar1 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar1,(MethodInfo *)0x0);
          pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
          if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
            __this_00 = (pNVar2->fields).KIHMKIEFOEI;
            pSVar3 = (System_Action_T0__T1__T2__o *)
                     thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
            System_Action<Int32Enum,_int,_Int32Enum>___ctor();
            local_34 = 0;
            pSVar4 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_34);
            if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
              FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                        ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar3,pSVar4,
                         Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
              pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
              if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                __this_01 = (pNVar2->fields).GMLEPHMBMPD;
                pSVar3 = (System_Action_T0__T1__T2__o *)
                         thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                local_38 = 0;
                pSVar4 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_38);
                if (__this_01 != (JPGJLKENNCC_o *)0x0) {
                  FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                            ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar3,pSVar4,
                             Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GKHAKLDEIJI(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x33141BC]
// Nekki.SF2.GUI.Common.PageSwitchPanel$$GKHAKLDEIJI @ RVA 0x33141BC

void Nekki_SF2_GUI_Common_PageSwitchPanel__GKHAKLDEIJI
               (Nekki_SF2_GUI_Common_PageSwitchPanel_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  SFButton_o *pSVar2;
  UnityEngine_Events_UnityEvent_int__o *__this_00;
  int32_t arg0;
  
  if ((DAT_045677cc & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_Invoke__,NAIJBCMHBFK,OPHMGAKOJLP);
    DAT_045677cc = 1;
  }
  if (AAJGEHHPMGH == 0x14) {
    bVar1 = AKJJAPEHKCG__MNKFDLHJPAA
                      ((UnityEngine_UI_Selectable_o *)(__this->fields)._NextPageButton,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    EDFDANKEBGF__KHJIBEJGONJ(0.85,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._NextPageButton;
    if (pSVar2 != (SFButton_o *)0x0) {
      SFButton__SetStateNormal(pSVar2,(MethodInfo *)0x0);
      __this_00 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields)._OnPageSwitched;
      if (__this_00 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
        arg0 = 1;
        goto LAB_03414294;
      }
    }
  }
  else {
    if ((AAJGEHHPMGH != 0x12) ||
       (bVar1 = AKJJAPEHKCG__MNKFDLHJPAA
                          ((UnityEngine_UI_Selectable_o *)(__this->fields)._PrevPageButton,
                           (MethodInfo *)0x0), bVar1)) {
      return;
    }
    EDFDANKEBGF__KHJIBEJGONJ(0.85,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._PrevPageButton;
    if (pSVar2 != (SFButton_o *)0x0) {
      SFButton__SetStateNormal(pSVar2,(MethodInfo *)0x0);
      __this_00 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields)._OnPageSwitched;
      if (__this_00 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
        arg0 = -1;
LAB_03414294:
        UnityEngine_Events_UnityEvent<int>__Invoke
                  (__this_00,arg0,Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ADIHLMELFML()  [RVA 0x3314680]
// Nekki.SF2.GUI.Common.PageSwitchPanel$$ADIHLMELFML @ RVA 0x3314680

void Nekki_SF2_GUI_Common_PageSwitchPanel__ADIHLMELFML
               (Nekki_SF2_GUI_Common_PageSwitchPanel_o *__this,MethodInfo *method)

{
  int32_t in_w2;
  MethodInfo *in_x4;
  
  Nekki_SF2_GUI_Common_PageSwitchPanel__GKHAKLDEIJI(__this,(int32_t)method,in_w2,0x12,in_x4);
  return;
}


// ===== public void .ctor()  [RVA 0x3314688]
// Nekki.SF2.GUI.Common.PageSwitchPanel$$.ctor @ RVA 0x3314688

void Nekki_SF2_GUI_Common_PageSwitchPanel___ctor
               (Nekki_SF2_GUI_Common_PageSwitchPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_PageSwitchPanel_PageSwitchEvent_o *__this_00;
  Nekki_SF2_GUI_Common_PageSwitchPanel_PageSwitchEvent_o **ppNVar1;
  MethodInfo *extraout_x1;
  undefined1 auVar2 [16];
  
  if ((DAT_045677cd & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_PageSwitchPanel_PageSwitchEvent_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_045677cd = 1;
    method = extraout_x1;
  }
  auVar2 = thunk_FUN_01bda818(Nekki_SF2_GUI_Common_PageSwitchPanel_PageSwitchEvent_TypeInfo,method);
  __this_00 = auVar2._0_8_;
  Nekki_SF2_GUI_Common_PageSwitchPanel_PageSwitchEvent___ctor(__this_00,auVar2._8_8_);
  ppNVar1 = &(__this->fields)._OnPageSwitched;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

