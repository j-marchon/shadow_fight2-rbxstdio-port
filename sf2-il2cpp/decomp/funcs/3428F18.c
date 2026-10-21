// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$Init @ RVA 0x3428F18

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  ProgressBar_o *pPVar3;
  ProgressLabelButton_o *pPVar4;
  LabelButton_o *pLVar5;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *pNVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  BHEDGAKGKPO_StaticFields *pBVar8;
  UnityEngine_Events_UnityEvent_o *pUVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_0456812a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_IAKHIFOFLGO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_LFBBOGGALOC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_MCDEEDAKMGB__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_17789);
    FUN_01bab630(&StringLiteral_10849);
    FUN_01bab630(&StringLiteral_21202);
    FUN_01bab630(&StringLiteral_1922);
    FUN_01bab630(&StringLiteral_1938);
    FUN_01bab630(&StringLiteral_21200);
    DAT_0456812a = 1;
    method = extraout_x1;
  }
  (__this->fields).HODAIAEDHBL = 0;
  (__this->fields).HOFACOGJODC = true;
  (__this->fields).KOPPGDKAEBP = 5;
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  pNVar1 = (__this->fields)._name;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._name;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                (ZEXT416((uint)(pBVar8->FHIAKPJBBCB).fields.r),(pBVar8->FHIAKPJBBCB).fields.g,
                 (pBVar8->FHIAKPJBBCB).fields.b,(pBVar8->FHIAKPJBBCB).fields.a,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      pNVar1 = (__this->fields)._waitingResultLabel;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._waitingResultLabel;
        if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
          (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                    (ZEXT416((uint)(pBVar8->FHIAKPJBBCB).fields.r),(pBVar8->FHIAKPJBBCB).fields.g,
                     (pBVar8->FHIAKPJBBCB).fields.b,(pBVar8->FHIAKPJBBCB).fields.a,pNVar1,
                     (pNVar1->klass->vtable)._23_set_color.method);
          pNVar1 = (__this->fields)._waitingResultLabel;
          if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
            __this_00 = (__this->fields)._completedIcon;
            if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
              pPVar3 = (__this->fields)._bossLifeBar;
              if (pPVar3 != (ProgressBar_o *)0x0) {
                (*(pPVar3->klass->vtable)._11_SetValueBorders.methodPtr)
                          (ZEXT816(0),0x3f800000,pPVar3,
                           (pPVar3->klass->vtable)._11_SetValueBorders.method);
                pPVar3 = (__this->fields)._bossLifeBar;
                if (pPVar3 != (ProgressBar_o *)0x0) {
                  (*(pPVar3->klass->vtable)._8_SetValue.methodPtr)
                            (ZEXT816(0x3f800000),0,pPVar3,0,
                             (pPVar3->klass->vtable)._8_SetValue.method);
                  pNVar1 = (__this->fields)._bossLifeValue;
                  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                              (pNVar1,StringLiteral_1938,(pNVar1->klass->vtable)._75_set_text.method
                              );
                    pNVar1 = (__this->fields)._bossLifeValue;
                    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
                      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                                (ZEXT416((uint)(pBVar8->FHIAKPJBBCB).fields.r),
                                 (pBVar8->FHIAKPJBBCB).fields.g,(pBVar8->FHIAKPJBBCB).fields.b,
                                 (pBVar8->FHIAKPJBBCB).fields.a,pNVar1,
                                 (pNVar1->klass->vtable)._23_set_color.method);
                      pNVar1 = (__this->fields)._finishHimLabel;
                      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                        Nekki_SF2_GUI_LabelAlias__set_Alias
                                  (pNVar1,StringLiteral_10849,(MethodInfo *)0x0);
                        pNVar1 = (__this->fields)._finishHimLabel;
                        if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                          pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
                          (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                                    (ZEXT416((uint)(pBVar8->FHIAKPJBBCB).fields.r),
                                     (pBVar8->FHIAKPJBBCB).fields.g,(pBVar8->FHIAKPJBBCB).fields.b,
                                     (pBVar8->FHIAKPJBBCB).fields.a,pNVar1,
                                     (pNVar1->klass->vtable)._23_set_color.method);
                          pNVar1 = (__this->fields)._finishHimLabel;
                          if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                             (pUVar2 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)pNVar1,
                                                  (MethodInfo *)0x0),
                             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
                            pNVar1 = (__this->fields)._timeLabel;
                            (__this->fields).PBACPHGLOFJ = 0;
                            if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                              pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
                              (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                                        (ZEXT416((uint)(pBVar8->FHIAKPJBBCB).fields.r),
                                         (pBVar8->FHIAKPJBBCB).fields.g,
                                         (pBVar8->FHIAKPJBBCB).fields.b,
                                         (pBVar8->FHIAKPJBBCB).fields.a,pNVar1,
                                         (pNVar1->klass->vtable)._23_set_color.method);
                              pNVar1 = (__this->fields)._timeLabel;
                              if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                                          (pNVar1,StringLiteral_1922,
                                           (pNVar1->klass->vtable)._75_set_text.method);
                                pPVar4 = (__this->fields)._btnFight;
                                if (pPVar4 != (ProgressLabelButton_o *)0x0) {
                                  ProgressLabelButton__Init(pPVar4,(MethodInfo *)0x0);
                                  pPVar4 = (__this->fields)._btnFight;
                                  if (pPVar4 != (ProgressLabelButton_o *)0x0) {
                                    LabelButton__set_Alias
                                              ((LabelButton_o *)pPVar4,StringLiteral_21200,
                                               (MethodInfo *)0x0);
                                    pLVar5 = (__this->fields)._btnFinalFight;
                                    if (pLVar5 != (LabelButton_o *)0x0) {
                                      LabelButton__set_ButtonColor(pLVar5,2,(MethodInfo *)0x0);
                                      pLVar5 = (__this->fields)._btnFinalFight;
                                      if (pLVar5 != (LabelButton_o *)0x0) {
                                        LabelButton__set_Alias
                                                  (pLVar5,StringLiteral_21202,(MethodInfo *)0x0);
                                        pLVar5 = (__this->fields)._btnExit;
                                        if (pLVar5 != (LabelButton_o *)0x0) {
                                          LabelButton__set_ButtonColor(pLVar5,0,(MethodInfo *)0x0);
                                          pLVar5 = (__this->fields)._btnExit;
                                          if (pLVar5 != (LabelButton_o *)0x0) {
                                            LabelButton__set_Alias
                                                      (pLVar5,StringLiteral_17789,(MethodInfo *)0x0)
                                            ;
                                            pLVar5 = (__this->fields)._btnExit;
                                            if ((pLVar5 != (LabelButton_o *)0x0) &&
                                               (pUVar2 = UnityEngine_Component__get_gameObject
                                                                   ((UnityEngine_Component_o *)
                                                                    pLVar5,(MethodInfo *)0x0),
                                               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                                              UnityEngine_GameObject__SetActive
                                                        (pUVar2,false,(MethodInfo *)0x0);
                                              pNVar6 = 
                                                  Nekki_SF2_GUI_Map_RaidQuestsButton__Instantiate
                                                            ((__this->fields).
                                                             _raidQuestsButtonSpawnPosition,
                                                             (MethodInfo *)0x0);
                                              (__this->fields).OBCKMMPHFNP = pNVar6;
                                              thunk_FUN_01c20e04(&(__this->fields).OBCKMMPHFNP);
                                              auVar10 = NEON_fmov(0x3f800000,4);
                                              (__this->fields).MOFFPNNIMBJ = 0;
                                              (__this->fields).CMEBGPLHEGM = 0;
                                              (__this->fields).FNBDHKCAFMJ = 0.0;
                                              (__this->fields).PIDNBPCOAOM.fields.b =
                                                   (float)(int)auVar10._8_8_;
                                              (__this->fields).PIDNBPCOAOM.fields.a =
                                                   (float)(int)((ulong)auVar10._8_8_ >> 0x20);
                                              (__this->fields).PIDNBPCOAOM.fields.r =
                                                   (float)(int)auVar10._0_8_;
                                              (__this->fields).PIDNBPCOAOM.fields.g =
                                                   (float)(int)((ulong)auVar10._0_8_ >> 0x20);
                                              Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__MIHNIBCCKAA
                                                        (__this,method_00);
                                              pPVar4 = (__this->fields)._btnFight;
                                              (__this->fields).JAJAHBKJECF = false;
                                              if (pPVar4 != (ProgressLabelButton_o *)0x0) {
                                                pUVar9 = (UnityEngine_Events_UnityEvent_o *)
                                                         (pPVar4->fields).super.super.super.super.
                                                         m_OnClick;
                                                pUVar7 = (UnityEngine_Events_UnityAction_o *)
                                                         thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 03529354 to 03629363 has its CatchHandler @ 03529354
                       catch() { ... } // from try @ 03529354 with catch @ 03529354
                       catch() { ... } // from try @ 035293a0 with catch @ 03529354
                       catch() { ... } // from try @ 035293d8 with catch @ 03529354
                       catch() { ... } // from try @ 03529438 with catch @ 03529354 */
                                                UnityEngine_Events_UnityAction___ctor();
                                                if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0
                                                   ) {
                    /* try { // try from 03529364 to 03629367 has its CatchHandler @ 035293a4 */
                                                  UnityEngine_Events_UnityEvent__AddListener
                                                            (pUVar9,pUVar7,(MethodInfo *)0x0);
                                                  pLVar5 = (__this->fields)._btnFinalFight;
                                                  if (pLVar5 != (LabelButton_o *)0x0) {
                    /* try { // try from 0352937c to 0362938f has its CatchHandler @ 035293a8 */
                                                    pUVar9 = (UnityEngine_Events_UnityEvent_o *)
                                                             (pLVar5->fields).super.super.super.
                                                             m_OnClick;
                                                    pUVar7 = (UnityEngine_Events_UnityAction_o *)
                                                             thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                                                  UnityEngine_Events_UnityAction___ctor();
                    /* try { // try from 0352939c to 0362939f has its CatchHandler @ 035293a0 */
                                                  if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)
                                                                0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0352939c with catch @ 035293a0
                       try { // try from 035293a0 to 036293bf has its CatchHandler @ 03529354 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03529364 with catch @ 035293a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0352937c with catch @ 035293a8
                        */
                                                    UnityEngine_Events_UnityEvent__AddListener
                                                              (pUVar9,pUVar7,(MethodInfo *)0x0);
                                                    pLVar5 = (__this->fields)._btnExit;
                                                    if (pLVar5 != (LabelButton_o *)0x0) {
                    /* try { // try from 035293c0 to 036293d7 has its CatchHandler @ 03529430 */
                                                      pUVar9 = (UnityEngine_Events_UnityEvent_o *)
                                                               (pLVar5->fields).super.super.super.
                                                               m_OnClick;
                                                      pUVar7 = (UnityEngine_Events_UnityAction_o *)
                                                               thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 035293d8 to 0362941f has its CatchHandler @ 03529354 */
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)
                                                                0x0) {
                                                    UnityEngine_Events_UnityEvent__AddListener
                                                              (pUVar9,pUVar7,(MethodInfo *)0x0);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
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

