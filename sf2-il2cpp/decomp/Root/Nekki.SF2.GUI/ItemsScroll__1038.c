// TypeDefIndex 1038
// Namespace: Nekki.SF2.GUI
// public class ItemsScroll : SFScrollRect
// Fields:
//   public ItemsScroll.ScrollEndEvent onScrollEnd; // 0x138
//   public UnityEvent onDragBegin; // 0x140
//   private float _MinScrollVelocity; // 0x148
//   private float _AutoscrollDuration; // 0x14C
//   public bool AutoscrollIsOn; // 0x150
//   private bool _Scrolling; // 0x151
//   public BaseScrollContent scrollContent; // 0x158
//   public bool MoveOnlyScrollingOrth; // 0x160
//   private bool CLEJOEBNAHF; // 0x161
//   private Tween OGBOMAHLDKN; // 0x168

// ===== public void Init()  [RVA 0x30D0A48]
// Nekki.SF2.GUI.ItemsScroll$$Init @ RVA 0x30D0A48

void Nekki_SF2_GUI_ItemsScroll__Init(Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar4;
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *__this_00;
  UnityEngine_RectTransform_o **ppUVar5;
  Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o *__this_01;
  
  if ((DAT_045662ff & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_ItemsScroll_NDEKHPPANMF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ItemsScroll_NPBFAJABJLH__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_AddListener__);
    DAT_045662ff = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields).scrollContent;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields).scrollContent;
    if (pNVar4 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      __this_00 = (pNVar4->fields).onSelectItem;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<BaseScrollItem>_TypeInfo);
      UnityEngine_Events_UnityAction<object>___ctor();
      if (__this_00 != (Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__AddListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar2,
                   Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_AddListener__);
        pNVar4 = (__this->fields).scrollContent;
        pUVar3 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pNVar4 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
          if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar3->klass != UnityEngine_RectTransform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pUVar3);
          }
          ppUVar5 = &(pNVar4->fields)._Center_k__BackingField;
          *ppUVar5 = pUVar3;
          thunk_FUN_01c20e04(ppUVar5,pUVar3);
          pNVar4 = (__this->fields).scrollContent;
          if (pNVar4 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
            __this_01 = (pNVar4->fields).onClickItem;
            pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction<BaseScrollItem>_TypeInfo);
            UnityEngine_Events_UnityAction<object>___ctor();
            if (__this_01 != (Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent<object>__AddListener
                        ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar2,
                         Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_AddListener__);
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


// ===== public void set_EnableDragging(bool CJNHFNHJHPE)  [RVA 0x30D0BE8]
// Nekki.SF2.GUI.ItemsScroll$$set_EnableDragging @ RVA 0x30D0BE8

void Nekki_SF2_GUI_ItemsScroll__set_EnableDragging
               (Nekki_SF2_GUI_ItemsScroll_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).super.field_0x111 = CJNHFNHJHPE;
  if (!CJNHFNHJHPE) {
    (__this->fields).CLEJOEBNAHF = false;
  }
  return;
}


// ===== private void KKMNFLPCAHN(Vector2 EMPKHNEPHPO)  [RVA 0x30D0BFC]
// Nekki.SF2.GUI.ItemsScroll$$KKMNFLPCAHN @ RVA 0x30D0BFC

void Nekki_SF2_GUI_ItemsScroll__KKMNFLPCAHN
               (Nekki_SF2_GUI_ItemsScroll_o *__this,UnityEngine_Vector2_o EMPKHNEPHPO,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar3;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04566300 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566300 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).scrollContent;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if ((__this->fields).MoveOnlyScrollingOrth == false) {
    pNVar3 = (__this->fields).scrollContent;
    if ((pNVar3 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      value.fields.z = 0.0;
      value.fields._0_8_ = EMPKHNEPHPO.fields;
      UnityEngine_Transform__set_position(pUVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((__this->fields).super.m_Horizontal != false) {
      pNVar3 = (__this->fields).scrollContent;
      if (pNVar3 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) goto LAB_031d0d04;
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetPositionX(pUVar2,EMPKHNEPHPO.fields.x,(MethodInfo *)0x0);
    }
    if ((__this->fields).super.m_Vertical == false) {
      return;
    }
    pNVar3 = (__this->fields).scrollContent;
    if (pNVar3 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetPositionX(pUVar2,EMPKHNEPHPO.fields.y,(MethodInfo *)0x0);
      return;
    }
  }
LAB_031d0d04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void NDEKHPPANMF(BaseScrollItem IKKAMAMLIKA)  [RVA 0x30D0D08]
// Nekki.SF2.GUI.ItemsScroll$$NDEKHPPANMF @ RVA 0x30D0D08

void Nekki_SF2_GUI_ItemsScroll__NDEKHPPANMF
               (Nekki_SF2_GUI_ItemsScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ItemsScroll__ScrollToItem(__this,IKKAMAMLIKA,1.0,method);
  return;
}


// ===== private bool LNMEGJPCAGF()  [RVA 0x30D0E50]
// Nekki.SF2.GUI.ItemsScroll$$LNMEGJPCAGF @ RVA 0x30D0E50

bool Nekki_SF2_GUI_ItemsScroll__LNMEGJPCAGF(Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields).super.CDHNBOKGCCN.fields.x;
  fVar1 = (__this->fields).super.CDHNBOKGCCN.fields.y;
  if (DAT_045602fb == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045602fb = '\x01';
    method = extraout_x1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
  }
  return (__this->fields)._MinScrollVelocity < SQRT(fVar2 * fVar2 + fVar1 * fVar1);
}


// ===== public void set_Scrolling(bool CJNHFNHJHPE)  [RVA 0x30D0EC8]
// Nekki.SF2.GUI.ItemsScroll$$set_Scrolling @ RVA 0x30D0EC8

void Nekki_SF2_GUI_ItemsScroll__set_Scrolling
               (Nekki_SF2_GUI_ItemsScroll_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._Scrolling = CJNHFNHJHPE;
  return;
}


// ===== private void CCPABLFBFFA()  [RVA 0x30D0ED4]
// Nekki.SF2.GUI.ItemsScroll$$CCPABLFBFFA @ RVA 0x30D0ED4

void Nekki_SF2_GUI_ItemsScroll__CCPABLFBFFA(Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields).OGBOMAHLDKN;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    ppDVar1 = &(__this->fields).OGBOMAHLDKN;
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== public override void OnEndDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x30D0F10]
// Nekki.SF2.GUI.ItemsScroll$$OnEndDrag @ RVA 0x30D0F10

void Nekki_SF2_GUI_ItemsScroll__OnEndDrag
               (Nekki_SF2_GUI_ItemsScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  MethodInfo *method_00;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04566301 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566301 = 1;
  }
  if ((__this->fields).super.field_0x111 != '\0') {
    Nekki_SF2_GUI_SFScrollRect__OnEndDrag
              ((Nekki_SF2_GUI_SFScrollRect_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
    (__this->fields).CLEJOEBNAHF = false;
    if ((__this->fields).AutoscrollIsOn != false) {
      fVar2 = (__this->fields).super.CDHNBOKGCCN.fields.x;
      fVar3 = (__this->fields).super.CDHNBOKGCCN.fields.y;
      fVar4 = fVar2 * fVar2 + fVar3 * fVar3;
      if (0.001 < fVar4) {
        if ((__this->fields).super.m_Horizontal == false) {
          fVar2 = 0.0;
          if ((__this->fields).super.m_Vertical != false) {
            fVar2 = fVar3 * 0.5;
          }
        }
        else {
          fVar2 = fVar2 * 0.5;
        }
        pNVar1 = (__this->fields).scrollContent;
        if (pNVar1 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
          IKKAMAMLIKA = (pNVar1->fields)._SelectedItem_k__BackingField;
          if (DAT_045602fb == '\0') {
            FUN_01bab630(&System_Math_TypeInfo);
            DAT_045602fb = '\x01';
          }
          if (((System_Math_TypeInfo->_2).cctor_finished == 0) &&
             (thunk_FUN_01ba7564(), (System_Math_TypeInfo->_2).cctor_finished == 0)) {
            thunk_FUN_01ba7564();
          }
          if (ABS((__this->fields)._MinScrollVelocity) < ABS(SQRT(fVar4))) {
            pNVar1 = (__this->fields).scrollContent;
            if (pNVar1 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) goto LAB_031d10ec;
            IKKAMAMLIKA = Nekki_SF2_GUI_BaseScrollContent__GetNearestItem
                                    (pNVar1,-fVar2,(MethodInfo *)0x0);
          }
          pNVar1 = (__this->fields).scrollContent;
          if (pNVar1 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
            method_00 = (MethodInfo *)0x0;
            fVar2 = Nekki_SF2_GUI_BaseScrollContent__GetDistanceToCenter
                              (pNVar1,IKKAMAMLIKA,(MethodInfo *)0x0);
            fVar4 = (__this->fields).super.CDHNBOKGCCN.fields.x;
            fVar3 = (__this->fields).super.CDHNBOKGCCN.fields.y;
            if (DAT_045602fb == '\0') {
              FUN_01bab630(&System_Math_TypeInfo);
              DAT_045602fb = '\x01';
            }
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            fVar2 = ABS((float)(int)(fVar2 / SQRT(fVar4 * fVar4 + fVar3 * fVar3)));
            if (0.5 < fVar2) {
              fVar2 = 0.5;
            }
            Nekki_SF2_GUI_ItemsScroll__ScrollToItem(__this,IKKAMAMLIKA,fVar2,method_00);
            return;
          }
        }
LAB_031d10ec:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}


// ===== private Vector2 JCANALKPKAB()  [RVA 0x30D10F8]
// Nekki.SF2.GUI.ItemsScroll$$JCANALKPKAB @ RVA 0x30D10F8

UnityEngine_Vector2_o
Nekki_SF2_GUI_ItemsScroll__JCANALKPKAB(Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector3_o UVar6;
  
  if ((DAT_04566302 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566302 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).scrollContent;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar4 = 0.0;
  fVar3 = 0.0;
  if (bVar1) {
    pNVar2 = (__this->fields).scrollContent;
    if ((pNVar2 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar6 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    fVar4 = UVar6.fields.y;
    fVar3 = UVar6.fields.x;
  }
  UVar5.fields.y = fVar4;
  UVar5.fields.x = fVar3;
  return (UnityEngine_Vector2_o)UVar5.fields;
}


// ===== protected void NPBFAJABJLH(BaseScrollItem IKKAMAMLIKA)  [RVA 0x30D118C]
// Nekki.SF2.GUI.ItemsScroll$$NPBFAJABJLH @ RVA 0x30D118C

void Nekki_SF2_GUI_ItemsScroll__NPBFAJABJLH
               (Nekki_SF2_GUI_ItemsScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  return;
}


// ===== public float get_MinScrollVelocity()  [RVA 0x30D1190]
// Nekki.SF2.GUI.ItemsScroll$$get_MinScrollVelocity @ RVA 0x30D1190

float Nekki_SF2_GUI_ItemsScroll__get_MinScrollVelocity
                (Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  return (__this->fields)._MinScrollVelocity;
}


// ===== private Vector2 POIGDAOKGCK()  [RVA 0x30D10FC]
// Nekki.SF2.GUI.ItemsScroll$$POIGDAOKGCK @ RVA 0x30D10FC

UnityEngine_Vector2_o
Nekki_SF2_GUI_ItemsScroll__POIGDAOKGCK(Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector2_o UVar6;
  
  if ((DAT_04566302 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566302 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).scrollContent;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar4 = 0.0;
  fVar3 = 0.0;
  if (bVar1) {
    pNVar2 = (__this->fields).scrollContent;
    if ((pNVar2 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar5 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    fVar4 = UVar5.fields.y;
    fVar3 = UVar5.fields.x;
  }
  UVar6.fields.y = fVar4;
  UVar6.fields.x = fVar3;
  return (UnityEngine_Vector2_o)UVar6.fields;
}


// ===== public void set_AutoscrollDuration(float CJNHFNHJHPE)  [RVA 0x30D1198]
// Nekki.SF2.GUI.ItemsScroll$$set_AutoscrollDuration @ RVA 0x30D1198

void Nekki_SF2_GUI_ItemsScroll__set_AutoscrollDuration
               (Nekki_SF2_GUI_ItemsScroll_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._AutoscrollDuration = CJNHFNHJHPE;
  return;
}


// ===== public void set_MinScrollVelocity(float CJNHFNHJHPE)  [RVA 0x30D11A0]
// Nekki.SF2.GUI.ItemsScroll$$set_MinScrollVelocity @ RVA 0x30D11A0

void Nekki_SF2_GUI_ItemsScroll__set_MinScrollVelocity
               (Nekki_SF2_GUI_ItemsScroll_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MinScrollVelocity = CJNHFNHJHPE;
  return;
}


// ===== public bool get_EnableDragging()  [RVA 0x30D10F0]
// Nekki.SF2.GUI.ItemsScroll$$get_EnableDragging @ RVA 0x30D10F0

bool Nekki_SF2_GUI_ItemsScroll__get_EnableDragging
               (Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  return (bool)(__this->fields).super.field_0x111;
}


// ===== public override void OnBeginDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x30D11A8]
// Nekki.SF2.GUI.ItemsScroll$$OnBeginDrag @ RVA 0x30D11A8

void Nekki_SF2_GUI_ItemsScroll__OnBeginDrag
               (Nekki_SF2_GUI_ItemsScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *method_00;
  
  if ((__this->fields).super.field_0x111 == '\0') {
    return;
  }
  Nekki_SF2_GUI_SFScrollRect__OnBeginDrag
            ((Nekki_SF2_GUI_SFScrollRect_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  Nekki_SF2_GUI_ItemsScroll__CCPABLFBFFA(__this,method_00);
  __this_00 = (__this->fields).onDragBegin;
  (__this->fields).CLEJOEBNAHF = true;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ScrollToItem(BaseScrollItem IKKAMAMLIKA, float PNEIGGOFIOA)  [RVA 0x30D0D10]
// Nekki.SF2.GUI.ItemsScroll$$ScrollToItem @ RVA 0x30D0D10

void Nekki_SF2_GUI_ItemsScroll__ScrollToItem
               (Nekki_SF2_GUI_ItemsScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               float PNEIGGOFIOA,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Nekki_SF2_GUI_BaseScrollContent_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar2;
  undefined4 extraout_var;
  undefined8 in_d1;
  undefined8 uVar3;
  undefined8 in_d2;
  undefined4 uVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector2_o EMPKHNEPHPO;
  UnityEngine_Vector2_o EMPKHNEPHPO_00;
  undefined4 uVar4;
  
  uVar5 = (undefined4)((ulong)in_d2 >> 0x20);
  uVar4 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((__this->fields).CLEJOEBNAHF != false) {
    return;
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    UVar7 = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
    uVar3 = CONCAT44(uVar4,UVar7.fields.y);
    if (IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
      fVar2 = (float)(*(IKKAMAMLIKA->klass->vtable)._45_get_CenterPosition.methodPtr)
                               (CONCAT44(extraout_var,UVar7.fields.x),uVar3,
                                CONCAT44(uVar5,UVar7.fields.z),IKKAMAMLIKA,
                                (IKKAMAMLIKA->klass->vtable)._45_get_CenterPosition.method);
      __this_00 = (__this->fields).scrollContent;
      if ((__this_00 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) &&
         (pUVar1 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_Transform_o *)0x0)) {
        UVar8 = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
        fVar6 = (UVar7.fields.x - fVar2) + UVar8.fields.x;
        fVar2 = (UVar7.fields.y - (float)uVar3) + UVar8.fields.y;
        if (0.001 < PNEIGGOFIOA) {
          (*(__this->klass->vtable)._44_StopMovement.methodPtr)
                    (__this,(__this->klass->vtable)._44_StopMovement.method);
          EMPKHNEPHPO.fields.y = fVar2;
          EMPKHNEPHPO.fields.x = fVar6;
          Nekki_SF2_GUI_ItemsScroll__MGGKMCMKAPB(__this,EMPKHNEPHPO,PNEIGGOFIOA,method_01);
          return;
        }
        EMPKHNEPHPO_00.fields.y = fVar2;
        EMPKHNEPHPO_00.fields.x = fVar6;
        Nekki_SF2_GUI_ItemsScroll__KKMNFLPCAHN(__this,EMPKHNEPHPO_00,method_00);
        __this_01 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).onScrollEnd;
        if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__Invoke(__this_01,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x031d0e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(__this->klass->vtable)._44_StopMovement.methodPtr)
                    (__this,(__this->klass->vtable)._44_StopMovement.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MGGKMCMKAPB(Vector2 EMPKHNEPHPO, float PNEIGGOFIOA)  [RVA 0x30D11F0]
// Nekki.SF2.GUI.ItemsScroll$$MGGKMCMKAPB @ RVA 0x30D11F0

void Nekki_SF2_GUI_ItemsScroll__MGGKMCMKAPB
               (Nekki_SF2_GUI_ItemsScroll_o *__this,UnityEngine_Vector2_o EMPKHNEPHPO,
               float PNEIGGOFIOA,MethodInfo *method)

{
  DG_Tweening_Core_DOGetter_Vector2__o *getter;
  DG_Tweening_Core_DOSetter_Vector2__o *setter;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *pDVar1;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *extraout_x1;
  DG_Tweening_Tween_o *t;
  
  if ((DAT_04566303 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<Vector2>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<Vector2>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ItemsScroll_GFLOBMPEFEI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ItemsScroll_JCANALKPKAB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ItemsScroll_MDIDNJLOKNC__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Tween>__);
    DAT_04566303 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_ItemsScroll__CCPABLFBFFA(__this,method);
  getter = (DG_Tweening_Core_DOGetter_Vector2__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<Vector2>_TypeInfo);
  DG_Tweening_Core_DOGetter<Vector2>___ctor();
  setter = (DG_Tweening_Core_DOSetter_Vector2__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<Vector2>_TypeInfo);
  DG_Tweening_Core_DOSetter<Vector2>___ctor();
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__To(getter,setter,EMPKHNEPHPO,PNEIGGOFIOA,(MethodInfo *)0x0);
  (__this->fields).OGBOMAHLDKN = (DG_Tweening_Tween_o *)pDVar1;
  thunk_FUN_01c20e04(&(__this->fields).OGBOMAHLDKN);
  t = (__this->fields).OGBOMAHLDKN;
  action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__OnComplete<object>
            ((Il2CppObject *)t,action,Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Tween>__
            );
  return;
}


// ===== private void MDIDNJLOKNC(Vector2 JGMCOMCBLPG)  [RVA 0x30D1398]
// Nekki.SF2.GUI.ItemsScroll$$MDIDNJLOKNC @ RVA 0x30D1398

void Nekki_SF2_GUI_ItemsScroll__MDIDNJLOKNC
               (Nekki_SF2_GUI_ItemsScroll_o *__this,UnityEngine_Vector2_o JGMCOMCBLPG,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar3;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04566300 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566300 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).scrollContent;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if ((__this->fields).MoveOnlyScrollingOrth == false) {
    pNVar3 = (__this->fields).scrollContent;
    if ((pNVar3 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      value.fields.z = 0.0;
      value.fields._0_8_ = JGMCOMCBLPG.fields;
      UnityEngine_Transform__set_position(pUVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((__this->fields).super.m_Horizontal != false) {
      pNVar3 = (__this->fields).scrollContent;
      if (pNVar3 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) goto LAB_031d0d04;
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetPositionX(pUVar2,JGMCOMCBLPG.fields.x,(MethodInfo *)0x0);
    }
    if ((__this->fields).super.m_Vertical == false) {
      return;
    }
    pNVar3 = (__this->fields).scrollContent;
    if (pNVar3 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetPositionX(pUVar2,JGMCOMCBLPG.fields.y,(MethodInfo *)0x0);
      return;
    }
  }
LAB_031d0d04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_Scrolling()  [RVA 0x30D139C]
// Nekki.SF2.GUI.ItemsScroll$$get_Scrolling @ RVA 0x30D139C

bool Nekki_SF2_GUI_ItemsScroll__get_Scrolling
               (Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  return (__this->fields)._Scrolling;
}


// ===== public float get_AutoscrollDuration()  [RVA 0x30D13A4]
// Nekki.SF2.GUI.ItemsScroll$$get_AutoscrollDuration @ RVA 0x30D13A4

float Nekki_SF2_GUI_ItemsScroll__get_AutoscrollDuration
                (Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  return (__this->fields)._AutoscrollDuration;
}


// ===== public void .ctor()  [RVA 0x30D13AC]
// Nekki.SF2.GUI.ItemsScroll$$.ctor @ RVA 0x30D13AC

void Nekki_SF2_GUI_ItemsScroll___ctor(Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566304 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ItemsScroll_ScrollEndEvent_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04566304 = 1;
    method = extraout_x1;
  }
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_ItemsScroll_ScrollEndEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  (__this->fields).onScrollEnd = (Nekki_SF2_GUI_ItemsScroll_ScrollEndEvent_o *)pUVar1;
  thunk_FUN_01c20e04(&(__this->fields).onScrollEnd,pUVar1);
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  (__this->fields).onDragBegin = pUVar1;
  thunk_FUN_01c20e04(&(__this->fields).onDragBegin,pUVar1);
  (__this->fields)._AutoscrollDuration = 1.0;
  (__this->fields).AutoscrollIsOn = true;
  Nekki_SF2_GUI_SFScrollRect___ctor((Nekki_SF2_GUI_SFScrollRect_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void GFLOBMPEFEI()  [RVA 0x30D1470]
// Nekki.SF2.GUI.ItemsScroll$$GFLOBMPEFEI @ RVA 0x30D1470

void Nekki_SF2_GUI_ItemsScroll__GFLOBMPEFEI(Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  (*(__this->klass->vtable)._44_StopMovement.methodPtr)
            (__this,(__this->klass->vtable)._44_StopMovement.method);
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).onScrollEnd;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void StopMovement()  [RVA 0x30D14A0]
// Nekki.SF2.GUI.ItemsScroll$$StopMovement @ RVA 0x30D14A0

void Nekki_SF2_GUI_ItemsScroll__StopMovement(Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SFScrollRect__StopMovement((Nekki_SF2_GUI_SFScrollRect_o *)__this,(MethodInfo *)0x0)
  ;
  (__this->fields)._Scrolling = false;
  return;
}

