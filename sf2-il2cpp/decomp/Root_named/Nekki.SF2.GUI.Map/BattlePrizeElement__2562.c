// TypeDefIndex 2562
// Namespace: Nekki.SF2.GUI.Map
// public class BattlePrizeElement : MonoBehaviour
// Fields:
//   private const bool DIHCPMAEELN = True;
//   private const int CJKNJNPNBOI = 20;
//   private const int PFBJHIOAAAD = 40;
//   private float _offsetX; // 0x20
//   private float _maxTextHeight; // 0x24
//   private ResolutionImage _icon; // 0x28
//   private LabelAlias _value; // 0x30
//   private Action NFECDKAEFJL; // 0x38
//   private bool IKBBLGEBDGM; // 0x40
//   private int CKPLHEOCNEC; // 0x44
//   private LayoutElement KDONJHIKBON; // 0x48

// ===== public void remove_OnRendered(Action CJNHFNHJHPE)  [RVA 0x339C75C]
// Nekki.SF2.GUI.Map.BattlePrizeElement$$remove_OnRendered @ RVA 0x339C75C

void Nekki_SF2_GUI_Map_BattlePrizeElement__remove_OnRendered
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04567c87 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567c87 = 1;
  }
  ppSVar4 = &(__this->fields).NFECDKAEFJL;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void .ctor()  [RVA 0x339C7F8]
// Nekki.SF2.GUI.Map.BattlePrizeElement$$.ctor @ RVA 0x339C7F8

void Nekki_SF2_GUI_Map_BattlePrizeElement___ctor
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar2;
  
  if ((DAT_04567c88 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_KMPAHBPEMPC__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_TypeInfo);
    DAT_04567c88 = 1;
    method = extraout_x1;
  }
  (__this->fields)._offsetX = 10.0;
  (__this->fields)._maxTextHeight = 100.0;
  if ((Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_TypeInfo->static_fields->__9__20_0;
  if (pSVar2 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_TypeInfo->static_fields->__9__20_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  ppSVar1 = &(__this->fields).NFECDKAEFJL;
  *ppSVar1 = pSVar2;
  thunk_FUN_01c20e04(ppSVar1,pSVar2);
  (__this->fields).CKPLHEOCNEC = 10000;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void OnDestroy()  [RVA 0x339C8FC]
// Nekki.SF2.GUI.Map.BattlePrizeElement$$OnDestroy @ RVA 0x339C8FC

void Nekki_SF2_GUI_Map_BattlePrizeElement__OnDestroy
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  if ((DAT_04567c89 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattlePrizeElement_MAPALKNGENO__);
    DAT_04567c89 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._value;
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_TextPic__remove_OnRendered
              ((Nekki_SF2_GUI_TextPic_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Awake()  [RVA 0x339C98C]
// Nekki.SF2.GUI.Map.BattlePrizeElement$$Awake @ RVA 0x339C98C

void Nekki_SF2_GUI_Map_BattlePrizeElement__Awake
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  
  if ((DAT_04567c8a & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattlePrizeElement_IELLHBNEHDC__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    DAT_04567c8a = 1;
  }
  pIVar1 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  source = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar1,(MethodInfo *)0x0);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  pIVar1 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<Unit>
                     ((System_IObservable_T__o *)source,onNext,
                      Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar1,(UnityEngine_Component_o *)__this,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}


// ===== private void BGFNABFMNIN()  [RVA 0x339CA78]
// Nekki.SF2.GUI.Map.BattlePrizeElement$$BGFNABFMNIN @ RVA 0x339CA78

void Nekki_SF2_GUI_Map_BattlePrizeElement__BGFNABFMNIN
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  MethodInfo *extraout_x1;
  BHEDGAKGKPO_StaticFields *pBVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04567c8b & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04567c8b = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._value;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo,method);
  }
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pBVar2 = BHEDGAKGKPO_TypeInfo->static_fields;
    (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
              ((pBVar2->FHIAKPJBBCB).fields.r,(pBVar2->FHIAKPJBBCB).fields.g,
               (pBVar2->FHIAKPJBBCB).fields.b,(pBVar2->FHIAKPJBBCB).fields.a,pNVar3,
               (pNVar3->klass->vtable)._23_set_color.method);
    pNVar1 = (__this->fields)._icon;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      (__this->fields).CKPLHEOCNEC = -1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(string NEJHIEOHMCF, long CJNHFNHJHPE, int NJBICBHLOMO, float KAMCMPFEKFI = 1)  [RVA 0x339CB28]
// Nekki.SF2.GUI.Map.BattlePrizeElement$$Init @ RVA 0x339CB28

void Nekki_SF2_GUI_Map_BattlePrizeElement__Init
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,System_String_o *NEJHIEOHMCF,
               int64_t CJNHFNHJHPE,int32_t NJBICBHLOMO,float KAMCMPFEKFI,MethodInfo *method)

{
  undefined4 uVar1;
  bool bVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_RectTransform_o *__this_00;
  System_Action_o *CJNHFNHJHPE_00;
  UnityEngine_Object_o *exists;
  System_String_o *pSVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  UnityEngine_UI_LayoutElement_o **ppUVar7;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567c8c & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattlePrizeElement_MAPALKNGENO__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ContentSizeFitter>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<LayoutElement>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9080/*"MiscSprites"*/);
    DAT_04567c8c = 1;
  }
  pUVar3 = (UnityEngine_UI_LayoutElement_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<LayoutElement>__);
  ppUVar7 = &(__this->fields).KDONJHIKBON;
  *ppUVar7 = pUVar3;
  thunk_FUN_01c20e04(ppUVar7,pUVar3);
  pNVar5 = (__this->fields)._icon;
  if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar1 = StringLiteral_9080/*"MiscSprites"*/._4_4_;
    (pNVar5->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_9080/*"MiscSprites"*/;
    (pNVar5->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
    thunk_FUN_01c20e04(&(pNVar5->fields).super.m_PixelsPerUnitMultiplier);
    pNVar5 = (__this->fields)._icon;
    if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,NEJHIEOHMCF,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._icon;
      if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar5->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar5,(pNVar5->klass->vtable)._45_SetNativeSize.method);
        pNVar5 = (__this->fields)._icon;
        if ((pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_00 = UnityEngine_UI_Graphic__get_rectTransform
                                  ((UnityEngine_UI_Graphic_o *)pNVar5,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
          value.fields.y = KAMCMPFEKFI;
          value.fields.x = KAMCMPFEKFI;
          value.fields.z = 0.0;
          UnityEngine_Transform__set_localScale
                    ((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
          pNVar6 = (__this->fields)._value;
          CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            Nekki_SF2_GUI_TextPic__add_OnRendered
                      ((Nekki_SF2_GUI_TextPic_o *)pNVar6,CJNHFNHJHPE_00,(MethodInfo *)0x0);
            pNVar6 = (__this->fields)._value;
            if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              UnityEngine_UI_Text__set_verticalOverflow
                        ((UnityEngine_UI_Text_o *)pNVar6,1,(MethodInfo *)0x0);
              pNVar6 = (__this->fields)._value;
              if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                UnityEngine_UI_Text__set_horizontalOverflow
                          ((UnityEngine_UI_Text_o *)pNVar6,1,(MethodInfo *)0x0);
                pNVar6 = (__this->fields)._value;
                if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  UnityEngine_UI_Text__set_resizeTextForBestFit
                            ((UnityEngine_UI_Text_o *)pNVar6,false,(MethodInfo *)0x0);
                  pNVar6 = (__this->fields)._value;
                  if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    exists = (UnityEngine_Object_o *)
                             UnityEngine_Component__GetComponent<object>
                                       ((UnityEngine_Component_o *)pNVar6,
                                        Method_UnityEngine_Component_GetComponent<ContentSizeFitter>__
                                       );
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
                    }
                    bVar2 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
                    if (bVar2) {
                      if (exists == (UnityEngine_Object_o *)0x0) goto LAB_0349ce28;
                      UnityEngine_Behaviour__set_enabled
                                ((UnityEngine_Behaviour_o *)exists,false,(MethodInfo *)0x0);
                    }
                    pNVar6 = (__this->fields)._value;
                    if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      (*(pNVar6->klass->vtable)._23_set_color.methodPtr)
                                (0,0,0,0x3a83126f,pNVar6,
                                 (pNVar6->klass->vtable)._23_set_color.method);
                      pNVar5 = (__this->fields)._icon;
                      if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                        (*(pNVar5->klass->vtable)._23_set_color.methodPtr)
                                  (0,0,0,0x3a83126f,pNVar5,
                                   (pNVar5->klass->vtable)._23_set_color.method);
                        pNVar6 = (__this->fields)._value;
                        if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                          Nekki_SF2_GUI_LabelAlias__Clear(pNVar6,(MethodInfo *)0x0);
                          pNVar6 = (__this->fields)._value;
                          if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                            Nekki_SF2_GUI_LabelAlias__set_UseLabelFontSize
                                      (pNVar6,true,(MethodInfo *)0x0);
                            pNVar6 = (__this->fields)._value;
                            if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                              Nekki_SF2_GUI_LabelAlias__set_LabelFontSize
                                        (pNVar6,NJBICBHLOMO,(MethodInfo *)0x0);
                              pNVar6 = (__this->fields)._value;
                              if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
                                thunk_FUN_01ba7564();
                              }
                              pSVar4 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
                              if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                (*(pNVar6->klass->vtable)._75_set_text.methodPtr)
                                          (pNVar6,pSVar4,(pNVar6->klass->vtable)._75_set_text.method
                                          );
                                pNVar6 = (__this->fields)._value;
                                if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                  Nekki_SF2_GUI_TextPic__Invalidate
                                            ((Nekki_SF2_GUI_TextPic_o *)pNVar6,(MethodInfo *)0x0);
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
LAB_0349ce28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MAPALKNGENO()  [RVA 0x339CE2C]
// Nekki.SF2.GUI.Map.BattlePrizeElement$$MAPALKNGENO @ RVA 0x339CE2C

void Nekki_SF2_GUI_Map_BattlePrizeElement__MAPALKNGENO
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Action_o *pSVar2;
  
  iVar1 = (__this->fields).CKPLHEOCNEC;
  pSVar2 = (__this->fields).NFECDKAEFJL;
  (__this->fields).IKBBLGEBDGM = true;
  if (0 < iVar1) {
    iVar1 = 1;
  }
  (__this->fields).CKPLHEOCNEC = iVar1;
  if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0349ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ODOKFKCAILG()  [RVA 0x339CE68]
// Nekki.SF2.GUI.Map.BattlePrizeElement$$ODOKFKCAILG @ RVA 0x339CE68

void Nekki_SF2_GUI_Map_BattlePrizeElement__ODOKFKCAILG
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Rect_o UVar13;
  UnityEngine_Rect_o UVar14;
  
  pNVar1 = (__this->fields)._value;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    fVar7 = (pNVar1->fields).super._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.y;
    fVar9 = (pNVar1->fields).super._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z;
    pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      fVar7 = fVar7 + fVar7;
      fVar9 = fVar9 + fVar9;
      if (fVar7 <= 20.0) {
        fVar7 = 20.0;
      }
      if (fVar9 <= 40.0) {
        fVar9 = 40.0;
      }
      value.fields.y = fVar9;
      value.fields.x = fVar7;
      UnityEngine_RectTransform__set_sizeDelta(pUVar2,value,(MethodInfo *)0x0);
      fVar6 = (__this->fields)._maxTextHeight;
      pNVar3 = (__this->fields)._icon;
      if (fVar9 <= fVar6) {
        fVar6 = fVar9;
      }
      if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar13 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._icon;
        if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar11 = UnityEngine_Transform__get_localScale
                             ((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._icon;
          if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar14 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
            pNVar3 = (__this->fields)._icon;
            if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
               (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                                   ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
              UVar12 = UnityEngine_Transform__get_localScale
                                 ((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
              pNVar3 = (__this->fields)._icon;
              if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                pUVar4 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionX
                          (pUVar4,fVar7 * -0.5 + (__this->fields)._offsetX * -0.5,(MethodInfo *)0x0)
                ;
                pNVar1 = (__this->fields)._value;
                if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  fVar10 = UVar13.fields.m_Width * UVar11.fields.x;
                  pUVar4 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
                    /* try { // try from 0349cfa4 to 0359d06b has its CatchHandler @ 0349cfa4
                       catch() { ... } // from try @ 0349cfa4 with catch @ 0349cfa4
                       catch() { ... } // from try @ 0349d11c with catch @ 0349cfa4
                       catch() { ... } // from try @ 0349d1a0 with catch @ 0349cfa4
                       catch() { ... } // from try @ 0349d1a8 with catch @ 0349cfa4
                       catch() { ... } // from try @ 0349d254 with catch @ 0349cfa4 */
                  UnityEngine_TransformExtensions__SetLocalPositionX
                            (pUVar4,fVar10 * 0.5 + (__this->fields)._offsetX * 0.5,(MethodInfo *)0x0
                            );
                  pUVar5 = (__this->fields).KDONJHIKBON;
                  fVar9 = UVar14.fields.m_Height * UVar12.fields.y;
                  if (fVar9 <= fVar6) {
                    fVar9 = fVar6;
                  }
                  if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    uVar8 = (ulong)(uint)(fVar7 + fVar10 + (__this->fields)._offsetX);
                    (*(pUVar5->klass->vtable)._32_set_minWidth.methodPtr)
                              (uVar8,pUVar5,(pUVar5->klass->vtable)._32_set_minWidth.method);
                    pUVar5 = (__this->fields).KDONJHIKBON;
                    if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                      (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
                                (uVar8,pUVar5,(pUVar5->klass->vtable)._36_set_preferredWidth.method)
                      ;
                      pUVar5 = (__this->fields).KDONJHIKBON;
                      if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                        (*(pUVar5->klass->vtable)._34_set_minHeight.methodPtr)
                                  ((ulong)(uint)fVar9,pUVar5,
                                   (pUVar5->klass->vtable)._34_set_minHeight.method);
                        pUVar5 = (__this->fields).KDONJHIKBON;
                        if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0349d040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
                                    ((ulong)(uint)fVar9,pUVar5,
                                     (pUVar5->klass->vtable)._38_set_preferredHeight.method);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x339D048]
// Nekki.SF2.GUI.Map.BattlePrizeElement$$Update @ RVA 0x339D048

void Nekki_SF2_GUI_Map_BattlePrizeElement__Update
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  int iVar1;
  
  if ((__this->fields).IKBBLGEBDGM != false) {
    (__this->fields).IKBBLGEBDGM = false;
    Nekki_SF2_GUI_Map_BattlePrizeElement__ODOKFKCAILG(__this,method);
    method = extraout_x1;
  }
  iVar1 = (__this->fields).CKPLHEOCNEC;
  if (iVar1 == 0) {
                    /* try { // try from 0349d06c to 0359d093 has its CatchHandler @ 0349d1c4 */
    Nekki_SF2_GUI_Map_BattlePrizeElement__BGFNABFMNIN(__this,method);
    iVar1 = (__this->fields).CKPLHEOCNEC;
  }
  (__this->fields).CKPLHEOCNEC = iVar1 + -1;
  return;
}


// ===== private void IELLHBNEHDC(Unit HOKBHLPPCAH)  [RVA 0x339D088]
// Nekki.SF2.GUI.Map.BattlePrizeElement$$IELLHBNEHDC @ RVA 0x339D088

void Nekki_SF2_GUI_Map_BattlePrizeElement__IELLHBNEHDC(long __this)

{
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Rect_o UVar9;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  
  __this_00 = *(UnityEngine_UI_Graphic_o **)(__this + 0x30);
  if (__this_00 != (UnityEngine_UI_Graphic_o *)0x0) {
    fVar4 = *(float *)&__this_00[1].fields.m_OnDirtyVertsCallback;
    fVar5 = *(float *)((long)&__this_00[1].fields.m_OnDirtyVertsCallback + 4);
    pUVar1 = UnityEngine_UI_Graphic__get_rectTransform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      fVar4 = fVar4 + fVar4;
      fVar5 = fVar5 + fVar5;
      if (fVar4 <= 20.0) {
        fVar4 = 20.0;
      }
      if (fVar5 <= 40.0) {
        fVar5 = 40.0;
      }
      value.fields.y = fVar5;
      value.fields.x = fVar4;
      UnityEngine_RectTransform__set_sizeDelta(pUVar1,value,(MethodInfo *)0x0);
      fVar7 = *(float *)(__this + 0x24);
      if (fVar5 <= *(float *)(__this + 0x24)) {
        fVar7 = fVar5;
      }
      if ((*(UnityEngine_UI_Graphic_o **)(__this + 0x28) != (UnityEngine_UI_Graphic_o *)0x0) &&
         (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                             (*(UnityEngine_UI_Graphic_o **)(__this + 0x28),(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar8 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
        if ((*(UnityEngine_UI_Graphic_o **)(__this + 0x28) != (UnityEngine_UI_Graphic_o *)0x0) &&
           (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                               (*(UnityEngine_UI_Graphic_o **)(__this + 0x28),(MethodInfo *)0x0),
           pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar10 = UnityEngine_Transform__get_localScale
                             ((UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
          if ((*(UnityEngine_UI_Graphic_o **)(__this + 0x28) != (UnityEngine_UI_Graphic_o *)0x0) &&
             (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                                 (*(UnityEngine_UI_Graphic_o **)(__this + 0x28),(MethodInfo *)0x0),
             pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar9 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
            if ((*(UnityEngine_UI_Graphic_o **)(__this + 0x28) != (UnityEngine_UI_Graphic_o *)0x0)
               && (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                                      (*(UnityEngine_UI_Graphic_o **)(__this + 0x28),
                                       (MethodInfo *)0x0),
                  pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
              UVar11 = UnityEngine_Transform__get_localScale
                                 ((UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
              if (*(UnityEngine_Component_o **)(__this + 0x28) != (UnityEngine_Component_o *)0x0) {
                pUVar2 = UnityEngine_Component__get_transform
                                   (*(UnityEngine_Component_o **)(__this + 0x28),(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionX
                          (pUVar2,fVar4 * -0.5 + *(float *)(__this + 0x20) * -0.5,(MethodInfo *)0x0)
                ;
                if (*(UnityEngine_Component_o **)(__this + 0x30) != (UnityEngine_Component_o *)0x0)
                {
                  fVar6 = UVar8.fields.m_Width * UVar10.fields.x;
                  pUVar2 = UnityEngine_Component__get_transform
                                     (*(UnityEngine_Component_o **)(__this + 0x30),(MethodInfo *)0x0
                                     );
                  UnityEngine_TransformExtensions__SetLocalPositionX
                            (pUVar2,fVar6 * 0.5 + *(float *)(__this + 0x20) * 0.5,(MethodInfo *)0x0)
                  ;
                  plVar3 = *(long **)(__this + 0x48);
                  fVar5 = UVar9.fields.m_Height * UVar11.fields.y;
                  if (fVar5 <= fVar7) {
                    fVar5 = fVar7;
                  }
                  if (plVar3 != (long *)0x0) {
                    fVar4 = fVar4 + fVar6 + *(float *)(__this + 0x20);
                    (**(code **)(*plVar3 + 0x338))(fVar4,plVar3,*(undefined8 *)(*plVar3 + 0x340));
                    plVar3 = *(long **)(__this + 0x48);
                    if (plVar3 != (long *)0x0) {
                      (**(code **)(*plVar3 + 0x378))(fVar4,plVar3,*(undefined8 *)(*plVar3 + 0x380));
                      plVar3 = *(long **)(__this + 0x48);
                      if (plVar3 != (long *)0x0) {
                        (**(code **)(*plVar3 + 0x358))
                                  (fVar5,plVar3,*(undefined8 *)(*plVar3 + 0x360));
                        plVar3 = *(long **)(__this + 0x48);
                        if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0349d040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (**(code **)(*plVar3 + 0x398))
                                    (fVar5,plVar3,*(undefined8 *)(*plVar3 + 0x3a0));
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnRendered(Action CJNHFNHJHPE)  [RVA 0x339D08C]
// Nekki.SF2.GUI.Map.BattlePrizeElement$$add_OnRendered @ RVA 0x339D08C

void Nekki_SF2_GUI_Map_BattlePrizeElement__add_OnRendered
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04567c8d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567c8d = 1;
  }
  ppSVar4 = &(__this->fields).NFECDKAEFJL;
                    /* try { // try from 0349d0c8 to 0359d0ef has its CatchHandler @ 0349d1c0 */
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
                    /* try { // try from 0349d114 to 0359d11b has its CatchHandler @ 0349d1b0 */
                    /* try { // try from 0349d11c to 0359d197 has its CatchHandler @ 0349cfa4 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

