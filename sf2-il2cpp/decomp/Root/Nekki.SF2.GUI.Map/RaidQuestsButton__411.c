// TypeDefIndex 411
// Namespace: Nekki.SF2.GUI.Map
// public class RaidQuestsButton : ResolutionButton
// Fields:
//   private ResolutionImage _image; // 0x1A8
//   private LabelAlias _label; // 0x1B0
//   private bool JOBALMMDPAF; // 0x1B8

// ===== private void DLDJLKECDAN()  [RVA 0x3485F2C]
// Nekki.SF2.GUI.Map.RaidQuestsButton$$DLDJLKECDAN @ RVA 0x3485F2C

void Nekki_SF2_GUI_Map_RaidQuestsButton__DLDJLKECDAN
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  BHEDGAKGKPO_StaticFields *pBVar3;
  
  if ((DAT_045683ac & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_045683ac = 1;
  }
  __this_00 = (__this->fields)._image;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._label;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._label;
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
                    /* WARNING: Could not recover jumptable at 0x03585fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                  ((pBVar3->LDIIEEOLEMM).fields.r,(pBVar3->LDIIEEOLEMM).fields.g,
                   (pBVar3->LDIIEEOLEMM).fields.b,(pBVar3->LDIIEEOLEMM).fields.a,pNVar2,
                   (pNVar2->klass->vtable)._23_set_color.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x3485FE8]
// Nekki.SF2.GUI.Map.RaidQuestsButton$$OnDestroy @ RVA 0x3485FE8

void Nekki_SF2_GUI_Map_RaidQuestsButton__OnDestroy
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045683ad & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_045683ad = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Map_RaidQuestsButton__AIFHOHIMLFM(__this,method_00);
    SFButton__OnDestroy((SFButton_o *)__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== protected override void Awake()  [RVA 0x3486174]
// Nekki.SF2.GUI.Map.RaidQuestsButton$$Awake @ RVA 0x3486174

void Nekki_SF2_GUI_Map_RaidQuestsButton__Awake
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *pKVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  GALHNMPIEHA_o *pGVar3;
  System_Action_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_045683ae & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 035861a8 to 036861cf has its CatchHandler @ 035864dc */
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidQuestsButton_CJPKPFBKMNP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidQuestsButton_GBAMAIPLADF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidQuestsButton_LBHEKMPNMGK__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045683ae = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
                    /* try { // try from 03586204 to 0368622f has its CatchHandler @ 035864d8 */
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).JOBALMMDPAF == false)) {
    (__this->fields).JOBALMMDPAF = true;
    Nekki_SF2_GUI_ResolutionButton__Awake
              ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03586240 to 03686247 has its CatchHandler @ 035864b8 */
    pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
      method_01 = method_00;
      if ((pKVar2->fields).super._MGGBEPKMPCF_k__BackingField != false) {
                    /* try { // try from 03586250 to 03686257 has its CatchHandler @ 035864c0 */
        Nekki_SF2_GUI_Map_RaidQuestsButton__EFJFDCNMFJC(__this,method_00);
        method_01 = extraout_x1_00;
      }
      Nekki_SF2_GUI_Map_RaidQuestsButton__DLDJLKECDAN(__this,method_01);
      Nekki_SF2_GUI_Map_RaidQuestsButton__ICECOGOGGJE(__this,method_02);
                    /* try { // try from 03586268 to 0368626f has its CatchHandler @ 035864c4 */
      __this_00 = (__this->fields).super.super.super.m_OnClick;
      if (__this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
                    /* try { // try from 03586274 to 0368627b has its CatchHandler @ 035864bc */
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.super.super.m_OnClick;
                    /* try { // try from 03586284 to 0368628b has its CatchHandler @ 035864cc */
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0358628c to 0368629f has its CatchHandler @ 035864d0 */
                    /* try { // try from 035862a4 to 036862af has its CatchHandler @ 035864d4 */
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 035862b0 to 03686317 has its CatchHandler @ 035864e0 */
          UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_RaidQuestsButton__AIFHOHIMLFM(__this,method_03);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pGVar3 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
          pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
                    /* try { // try from 03586318 to 03686497 has its CatchHandler @ 03585cbc */
          if (pGVar3 != (GALHNMPIEHA_o *)0x0) {
            GALHNMPIEHA__COKCPKHDHDN(pGVar3,pSVar4,(MethodInfo *)0x0);
            pGVar3 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
            pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pGVar3 != (GALHNMPIEHA_o *)0x0) {
              GALHNMPIEHA__DGOGCOKGHKF(pGVar3,pSVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public static RaidQuestsButton Instantiate(RectTransform ODNJEHJPBGA)  [RVA 0x3486724]
// Nekki.SF2.GUI.Map.RaidQuestsButton$$Instantiate @ RVA 0x3486724

Nekki_SF2_GUI_Map_RaidQuestsButton_o *
Nekki_SF2_GUI_Map_RaidQuestsButton__Instantiate
          (UnityEngine_RectTransform_o *ODNJEHJPBGA,MethodInfo *method)

{
  Il2CppObject *original;
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *pNVar1;
  
  if ((DAT_045683af & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidQuestsButton>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_10414/*"Prefabs/Raids/RaidQuestsButton"*/);
    DAT_045683af = 1;
  }
  original = UnityEngine_Resources__Load<object>
                       (StringLiteral_10414/*"Prefabs/Raids/RaidQuestsButton"*/,Method_UnityEngine_Resources_Load<GameObject>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  __this = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     (original,(UnityEngine_Transform_o *)ODNJEHJPBGA,
                      Method_UnityEngine_Object_Instantiate<GameObject>__);
  if ((__this != (UnityEngine_GameObject_o *)0x0) &&
     (pNVar1 = (Nekki_SF2_GUI_Map_RaidQuestsButton_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (__this,Method_UnityEngine_GameObject_GetComponent<RaidQuestsButton>__),
     pNVar1 != (Nekki_SF2_GUI_Map_RaidQuestsButton_o *)0x0)) {
    (*((Il2CppClass *)pNVar1->klass)->vtable[4].methodPtr)
              (pNVar1,((Il2CppClass *)pNVar1->klass)->vtable[4].method);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LBHEKMPNMGK()  [RVA 0x3486818]
// Nekki.SF2.GUI.Map.RaidQuestsButton$$LBHEKMPNMGK @ RVA 0x3486818

void Nekki_SF2_GUI_Map_RaidQuestsButton__LBHEKMPNMGK
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  GALHNMPIEHA_o *pGVar3;
  System_String_o *pSVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  UnityEngine_GameObject_o *pUVar6;
  long lVar7;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  int32_t iStack_24;
  
  if ((DAT_045683b2 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9093/*"MiscSprites.notification_ellipse"*/);
    FUN_01bab630(&StringLiteral_9092/*"MiscSprites.notification_circle"*/);
    DAT_045683b2 = 1;
    method = extraout_x1;
  }
  pNVar8 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pNVar8 = (__this->fields)._label;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar3 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    if (pGVar3 != (GALHNMPIEHA_o *)0x0) {
      iStack_24 = (pGVar3->fields)._BADKBIBHMEJ_k__BackingField;
      pSVar4 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
      if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                  (pNVar8,pSVar4,(pNVar8->klass->vtable)._75_set_text.method);
        pNVar5 = (__this->fields)._image;
        if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
          pGVar3 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
          if ((pGVar3 != (GALHNMPIEHA_o *)0x0) && (pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive
                      (pUVar6,0 < (pGVar3->fields)._BADKBIBHMEJ_k__BackingField,(MethodInfo *)0x0);
            pNVar8 = (__this->fields)._label;
            if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              pUVar6 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
              pGVar3 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
              if ((pGVar3 != (GALHNMPIEHA_o *)0x0) && (pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive
                          (pUVar6,0 < (pGVar3->fields)._BADKBIBHMEJ_k__BackingField,
                           (MethodInfo *)0x0);
                pNVar5 = (__this->fields)._image;
                if ((pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                   (pUVar6 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
                   pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                  bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
                  if (!bVar2) {
                    return;
                  }
                  pNVar8 = (__this->fields)._label;
                  if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    pNVar5 = (__this->fields)._image;
                    lVar7 = (*(pNVar8->klass->vtable)._74_get_text.methodPtr)
                                      (pNVar8,(pNVar8->klass->vtable)._74_get_text.method);
                    if ((lVar7 != 0) && (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
                      puVar1 = &StringLiteral_9092/*"MiscSprites.notification_circle"*/;
                      if (1 < *(int *)(lVar7 + 0x10)) {
                        puVar1 = &StringLiteral_9093/*"MiscSprites.notification_ellipse"*/;
                      }
                      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                                (pNVar5,(System_String_o *)*puVar1,(MethodInfo *)0x0);
                      pNVar5 = (__this->fields)._image;
                      if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                        (*(pNVar5->klass->vtable)._45_SetNativeSize.methodPtr)
                                  (pNVar5,(pNVar5->klass->vtable)._45_SetNativeSize.method);
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
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void CJPKPFBKMNP()  [RVA 0x348681C]
// Nekki.SF2.GUI.Map.RaidQuestsButton$$CJPKPFBKMNP @ RVA 0x348681C

void Nekki_SF2_GUI_Map_RaidQuestsButton__CJPKPFBKMNP
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  GALHNMPIEHA_o *__this_00;
  System_String_o *pSVar4;
  System_String_o *HCAAAAMDCNO;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *x;
  
  if ((DAT_045683b1 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_18262/*"fire_active"*/);
    FUN_01bab630(&StringLiteral_19891/*"nofire"*/);
    FUN_01bab630(&StringLiteral_18259/*"fire"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_10836/*"RaidDailyMap."*/);
    FUN_01bab630(&StringLiteral_19892/*"nofire_active"*/);
    DAT_045683b1 = 1;
    method = extraout_x1;
  }
  x = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  UnityEngine_UI_Selectable__set_transition
            ((UnityEngine_UI_Selectable_o *)__this,2,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  if (__this_00 != (GALHNMPIEHA_o *)0x0) {
    bVar3 = GALHNMPIEHA__KCAJCGDCFCA(__this_00,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_18259/*"fire"*/;
    if (!bVar3) {
      puVar1 = &StringLiteral_19891/*"nofire"*/;
    }
    puVar2 = (undefined8 *)&StringLiteral_18262/*"fire_active"*/;
    if (!bVar3) {
      puVar2 = &StringLiteral_19892/*"nofire_active"*/;
    }
    pSVar4 = System_String__Concat(StringLiteral_10836/*"RaidDailyMap."*/,(System_String_o *)*puVar1,(MethodInfo *)0x0)
    ;
    Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
              ((Nekki_SF2_GUI_ResolutionButton_o *)__this,StringLiteral_14092/*"UI/Atlases/"*/,pSVar4,
               (MethodInfo *)0x0);
    Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
              ((Nekki_SF2_GUI_ResolutionButton_o *)__this,StringLiteral_14092/*"UI/Atlases/"*/,pSVar4,
               (MethodInfo *)0x0);
    pSVar4 = StringLiteral_14092/*"UI/Atlases/"*/;
    HCAAAAMDCNO = System_String__Concat
                            (StringLiteral_10836/*"RaidDailyMap."*/,(System_String_o *)*puVar2,(MethodInfo *)0x0);
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              ((Nekki_SF2_GUI_ResolutionButton_o *)__this,pSVar4,HCAAAAMDCNO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void GBAMAIPLADF()  [RVA 0x3486820]
// Nekki.SF2.GUI.Map.RaidQuestsButton$$GBAMAIPLADF @ RVA 0x3486820

void Nekki_SF2_GUI_Map_RaidQuestsButton__GBAMAIPLADF(MethodInfo *method)

{
  JJPNLEPEAFM__ENALHJGHEEN((MethodInfo *)0x0);
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  return;
}


// ===== private void AIFHOHIMLFM()  [RVA 0x3486060]
// Nekki.SF2.GUI.Map.RaidQuestsButton$$AIFHOHIMLFM @ RVA 0x3486060

void Nekki_SF2_GUI_Map_RaidQuestsButton__AIFHOHIMLFM
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  GALHNMPIEHA_o *pGVar1;
  System_Action_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045683b0 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidQuestsButton_CJPKPFBKMNP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidQuestsButton_LBHEKMPNMGK__);
    DAT_045683b0 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pGVar1 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pGVar1 != (GALHNMPIEHA_o *)0x0) {
    GALHNMPIEHA__BIDBPFJNEJI(pGVar1,pSVar2,(MethodInfo *)0x0);
    pGVar1 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pGVar1 != (GALHNMPIEHA_o *)0x0) {
      GALHNMPIEHA__GAFJAEKNLPL(pGVar1,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x348683C]
// Nekki.SF2.GUI.Map.RaidQuestsButton$$.ctor @ RVA 0x348683C

void Nekki_SF2_GUI_Map_RaidQuestsButton___ctor
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton___ctor
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void EFJFDCNMFJC()  [RVA 0x3486384]
// Nekki.SF2.GUI.Map.RaidQuestsButton$$EFJFDCNMFJC @ RVA 0x3486384

void Nekki_SF2_GUI_Map_RaidQuestsButton__EFJFDCNMFJC
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  GALHNMPIEHA_o *__this_00;
  System_String_o *pSVar4;
  System_String_o *HCAAAAMDCNO;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *x;
  
  if ((DAT_045683b1 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_18262/*"fire_active"*/);
    FUN_01bab630(&StringLiteral_19891/*"nofire"*/);
    FUN_01bab630(&StringLiteral_18259/*"fire"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_10836/*"RaidDailyMap."*/);
    FUN_01bab630(&StringLiteral_19892/*"nofire_active"*/);
    DAT_045683b1 = 1;
    method = extraout_x1;
  }
  x = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  UnityEngine_UI_Selectable__set_transition
            ((UnityEngine_UI_Selectable_o *)__this,2,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  if (__this_00 != (GALHNMPIEHA_o *)0x0) {
    bVar3 = GALHNMPIEHA__KCAJCGDCFCA(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03586498 to 0368649b has its CatchHandler @ 035864e4 */
    puVar1 = &StringLiteral_18259/*"fire"*/;
                    /* try { // try from 0358649c to 0368649f has its CatchHandler @ 035864c8 */
                    /* try { // try from 035864a0 to 036864a3 has its CatchHandler @ 035864e4 */
                    /* try { // try from 035864a4 to 036864a7 has its CatchHandler @ 03585cbc */
                    /* try { // try from 035864a8 to 036864ab has its CatchHandler @ 035864b4 */
    if (!bVar3) {
      puVar1 = &StringLiteral_19891/*"nofire"*/;
    }
                    /* try { // try from 035864ac to 036864fb has its CatchHandler @ 03585cbc */
                    /* catch() { ... } // from try @ 035864a8 with catch @ 035864b4 */
                    /* catch() { ... } // from try @ 03586240 with catch @ 035864b8 */
                    /* catch() { ... } // from try @ 03586274 with catch @ 035864bc */
    puVar2 = (undefined8 *)&StringLiteral_18262/*"fire_active"*/;
                    /* catch() { ... } // from try @ 03586250 with catch @ 035864c0 */
    if (!bVar3) {
      puVar2 = &StringLiteral_19892/*"nofire_active"*/;
    }
                    /* catch() { ... } // from try @ 03586268 with catch @ 035864c4 */
    pSVar4 = System_String__Concat(StringLiteral_10836/*"RaidDailyMap."*/,(System_String_o *)*puVar1,(MethodInfo *)0x0)
    ;
                    /* catch() { ... } // from try @ 0358649c with catch @ 035864c8 */
                    /* catch() { ... } // from try @ 03586284 with catch @ 035864cc */
                    /* catch() { ... } // from try @ 0358628c with catch @ 035864d0 */
                    /* catch() { ... } // from try @ 035862a4 with catch @ 035864d4 */
                    /* catch() { ... } // from try @ 03586204 with catch @ 035864d8 */
                    /* catch() { ... } // from try @ 035861a8 with catch @ 035864dc */
                    /* catch() { ... } // from try @ 035862b0 with catch @ 035864e0 */
                    /* catch() { ... } // from try @ 03586498 with catch @ 035864e4
                       catch() { ... } // from try @ 035864a0 with catch @ 035864e4 */
    Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
              ((Nekki_SF2_GUI_ResolutionButton_o *)__this,StringLiteral_14092/*"UI/Atlases/"*/,pSVar4,
               (MethodInfo *)0x0);
    Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
              ((Nekki_SF2_GUI_ResolutionButton_o *)__this,StringLiteral_14092/*"UI/Atlases/"*/,pSVar4,
               (MethodInfo *)0x0);
    pSVar4 = StringLiteral_14092/*"UI/Atlases/"*/;
                    /* try { // try from 035864fc to 036864ff has its CatchHandler @ 0358650c */
                    /* catch() { ... } // from try @ 035864fc with catch @ 0358650c */
    HCAAAAMDCNO = System_String__Concat
                            (StringLiteral_10836/*"RaidDailyMap."*/,(System_String_o *)*puVar2,(MethodInfo *)0x0);
                    /* try { // try from 0358651c to 03686583 has its CatchHandler @ 03586598 */
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              ((Nekki_SF2_GUI_ResolutionButton_o *)__this,pSVar4,HCAAAAMDCNO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ICECOGOGGJE()  [RVA 0x3486534]
// Nekki.SF2.GUI.Map.RaidQuestsButton$$ICECOGOGGJE @ RVA 0x3486534

void Nekki_SF2_GUI_Map_RaidQuestsButton__ICECOGOGGJE
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  GALHNMPIEHA_o *pGVar3;
  System_String_o *pSVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  UnityEngine_GameObject_o *pUVar6;
  long lVar7;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  int32_t local_24;
  
  if ((DAT_045683b2 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9093/*"MiscSprites.notification_ellipse"*/);
                    /* try { // try from 03586584 to 0368658f has its CatchHandler @ 03585cbc */
    FUN_01bab630(&StringLiteral_9092/*"MiscSprites.notification_circle"*/);
    DAT_045683b2 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03586590 to 03686597 has its CatchHandler @ 03586598 */
  pNVar8 = (__this->fields)._label;
                    /* catch() { ... } // from try @ 0358651c with catch @ 03586598
                       catch() { ... } // from try @ 03586590 with catch @ 03586598 */
                    /* try { // try from 0358659c to 03686873 has its CatchHandler @ 0358659c
                       catch() { ... } // from try @ 0358659c with catch @ 0358659c
                       catch() { ... } // from try @ 03586e0c with catch @ 0358659c
                       catch() { ... } // from try @ 03586fd8 with catch @ 0358659c
                       catch() { ... } // from try @ 0358719c with catch @ 0358659c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pNVar8 = (__this->fields)._label;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar3 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    if (pGVar3 != (GALHNMPIEHA_o *)0x0) {
      local_24 = (pGVar3->fields)._BADKBIBHMEJ_k__BackingField;
      pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                  (pNVar8,pSVar4,(pNVar8->klass->vtable)._75_set_text.method);
        pNVar5 = (__this->fields)._image;
        if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
          pGVar3 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
          if ((pGVar3 != (GALHNMPIEHA_o *)0x0) && (pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive
                      (pUVar6,0 < (pGVar3->fields)._BADKBIBHMEJ_k__BackingField,(MethodInfo *)0x0);
            pNVar8 = (__this->fields)._label;
            if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              pUVar6 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
              pGVar3 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
              if ((pGVar3 != (GALHNMPIEHA_o *)0x0) && (pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive
                          (pUVar6,0 < (pGVar3->fields)._BADKBIBHMEJ_k__BackingField,
                           (MethodInfo *)0x0);
                pNVar5 = (__this->fields)._image;
                if ((pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                   (pUVar6 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
                   pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                  bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
                  if (!bVar2) {
                    return;
                  }
                  pNVar8 = (__this->fields)._label;
                  if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    pNVar5 = (__this->fields)._image;
                    lVar7 = (*(pNVar8->klass->vtable)._74_get_text.methodPtr)
                                      (pNVar8,(pNVar8->klass->vtable)._74_get_text.method);
                    if ((lVar7 != 0) && (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
                      puVar1 = &StringLiteral_9092/*"MiscSprites.notification_circle"*/;
                      if (1 < *(int *)(lVar7 + 0x10)) {
                        puVar1 = &StringLiteral_9093/*"MiscSprites.notification_ellipse"*/;
                      }
                      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                                (pNVar5,(System_String_o *)*puVar1,(MethodInfo *)0x0);
                      pNVar5 = (__this->fields)._image;
                      if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                        (*(pNVar5->klass->vtable)._45_SetNativeSize.methodPtr)
                                  (pNVar5,(pNVar5->klass->vtable)._45_SetNativeSize.method);
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
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

