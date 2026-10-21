// TypeDefIndex 685
// Namespace: Nekki.SF2.GUI.Shop
// public class ParameterScrollItem : BaseScrollItem
// Fields:
//   protected ResolutionImage _icon; // 0x130
//   protected LabelAlias _value; // 0x138
//   protected LabelAlias _additionalValue; // 0x140
//   protected ParameterProgressBar _progressBar; // 0x148
//   protected LayoutElement _layoutElement; // 0x150
//   protected GameObject _textContainer; // 0x158
//   protected RectTransform _LayoutTransform; // 0x160
//   private string ONONPELCDGE; // 0x168
//   protected const float JHFGGDJCKID = 0;
//   protected const float PDBGFCPEHLN = 0;
//   protected string LBMOMAIHCEM; // 0x170
//   protected string GCPECKMCAEM; // 0x178
//   protected GBNEKHAJILA NDFDLJPANOL; // 0x180
//   protected float HJNKDGDBDML; // 0x184
//   protected float GPJAHLLAHEA; // 0x188
//   protected float DNIGDKAHPIG; // 0x18C
//   protected float GMCNKDKMHII; // 0x190
//   protected float CCIKLAFHFAH; // 0x194
//   protected int KENACCCGOJE; // 0x198
//   protected int PDJAHMFOPPE; // 0x19C
//   protected int BKNPEHNLJKB; // 0x1A0
//   protected Tween JNGAEMFFEJF; // 0x1A8
//   protected Tween CKLCNHJNDPJ; // 0x1B0
//   private TouchHandler NDPGGBECMDD; // 0x1B8

// ===== public void SetValue(int CJNHFNHJHPE, int NBHHBBOJJME, float PNEIGGOFIOA = 0)  [RVA 0x3030680]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$SetValue @ RVA 0x3030680

void Nekki_SF2_GUI_Shop_ParameterScrollItem__SetValue
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t CJNHFNHJHPE,
               int32_t NBHHBBOJJME,float PNEIGGOFIOA,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ParameterScrollItem__SetTextValue
            (__this,CJNHFNHJHPE,NBHHBBOJJME,PNEIGGOFIOA,method);
  Nekki_SF2_GUI_Shop_ParameterScrollItem__SetProgressBarValue
            (__this,CJNHFNHJHPE,NBHHBBOJJME,PNEIGGOFIOA,method);
  return;
}


// ===== public void set_MinHeight(float CJNHFNHJHPE)  [RVA 0x303082C]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$set_MinHeight @ RVA 0x303082C

void Nekki_SF2_GUI_Shop_ParameterScrollItem__set_MinHeight
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  
  pUVar1 = (__this->fields)._layoutElement;
  if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03130848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._34_set_minHeight.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._34_set_minHeight.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ResolutionImage get_Icon()  [RVA 0x3030850]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$get_Icon @ RVA 0x3030850

Nekki_SF2_GUI_ResolutionImage_o *
Nekki_SF2_GUI_Shop_ParameterScrollItem__get_Icon
          (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._icon;
}


// ===== public void Init(string KGLJICLJHEL, string NEJHIEOHMCF, int CJNHFNHJHPE, int NBHHBBOJJME, bool DCJABCJDDDL, string MHHLKEOKCOB, float AIOABLFEKGN = 1)  [RVA 0x3030858]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$Init @ RVA 0x3030858

void Nekki_SF2_GUI_Shop_ParameterScrollItem__Init
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,System_String_o *KGLJICLJHEL,
               System_String_o *NEJHIEOHMCF,int32_t CJNHFNHJHPE,int32_t NBHHBBOJJME,bool DCJABCJDDDL
               ,System_String_o *MHHLKEOKCOB,float AIOABLFEKGN,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ParameterProgressBar_o *pNVar1;
  MethodInfo *pMVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  System_String_o *JPPLEGNJFMJ;
  
  pMVar2 = (MethodInfo *)(ulong)(uint)NBHHBBOJJME;
  if ((DAT_04565cfa & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04565cfa = 1;
  }
  Nekki_SF2_GUI_Shop_ParameterScrollItem__PKNFJBEGCOK
            (__this,KGLJICLJHEL,DCJABCJDDDL,MHHLKEOKCOB,pMVar2);
  pNVar1 = (__this->fields)._progressBar;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_ParameterProgressBar_o *)0x0) {
    (*(pNVar1->klass->vtable)._4_Init.methodPtr)(pNVar1,(pNVar1->klass->vtable)._4_Init.method);
    pNVar3 = (__this->fields)._icon;
    JPPLEGNJFMJ = (__this->fields).ONONPELCDGE;
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar2 = (MethodInfo *)0x0;
    KKCBGIBKOCP__PFJIHMIKHNL(pNVar3,JPPLEGNJFMJ,NEJHIEOHMCF,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._icon;
    if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_Alpha(pNVar3,AIOABLFEKGN,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_ParameterScrollItem__SetTextValue
                (__this,CJNHFNHJHPE,NBHHBBOJJME,0.0,pMVar2);
      Nekki_SF2_GUI_Shop_ParameterScrollItem__SetProgressBarValue
                (__this,CJNHFNHJHPE,NBHHBBOJJME,0.0,pMVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ResetValue()  [RVA 0x3030BF8]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$ResetValue @ RVA 0x3030BF8

void Nekki_SF2_GUI_Shop_ParameterScrollItem__ResetValue
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Shop_ParameterProgressBar_o *pNVar4;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_04565cfb & 1) == 0) {
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04565cfb = 1;
  }
  pNVar2 = (__this->fields)._value;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
              (pNVar2,StringLiteral_1567/*"0"*/,(pNVar2->klass->vtable)._75_set_text.method);
    pNVar2 = (__this->fields)._additionalValue;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,StringLiteral_1567/*"0"*/,(pNVar2->klass->vtable)._75_set_text.method);
      pNVar2 = (__this->fields)._additionalValue;
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._progressBar;
        if (pNVar4 != (Nekki_SF2_GUI_Shop_ParameterProgressBar_o *)0x0) {
          (*(pNVar4->klass->vtable)._6_SetValue.methodPtr)
                    (0,0,pNVar4,(pNVar4->klass->vtable)._6_SetValue.method);
          pNVar2 = (__this->fields)._value;
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            __this_00 = (__this->fields)._textContainer;
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
              if (bVar1) {
                bVar1 = true;
              }
              else {
                pNVar2 = (__this->fields)._additionalValue;
                if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
                   (pUVar3 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
                   pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03130d04;
                bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
              }
              if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(__this_00,bVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03130d04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void BLCHKPABFKL(int CJNHFNHJHPE, float PNEIGGOFIOA = 0)  [RVA 0x3030D08]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$BLCHKPABFKL @ RVA 0x3030D08

void Nekki_SF2_GUI_Shop_ParameterScrollItem__BLCHKPABFKL
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t CJNHFNHJHPE,
               float PNEIGGOFIOA,MethodInfo *method)

{
  DG_Tweening_Tween_o **OCBEBGEKOIA;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this_00;
  DG_Tweening_Core_DOGetter_int__o *getter;
  DG_Tweening_Core_DOSetter_int__o *setter;
  DG_Tweening_Core_TweenerCore_int__int__NoOptions__o *pDVar1;
  
  __this_00 = __this;
  if ((DAT_04565cfc & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ParameterScrollItem_BGDKJCJBHAB__);
    __this_00 = (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)
                FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ParameterScrollItem_JDDOJIOMAMI__);
    DAT_04565cfc = 1;
  }
  OCBEBGEKOIA = &(__this->fields).CKLCNHJNDPJ;
  Nekki_SF2_GUI_Shop_ParameterScrollItem__CCPABLFBFFA(__this_00,OCBEBGEKOIA,method);
  if (PNEIGGOFIOA == 0.0) {
    Nekki_SF2_GUI_Shop_ParameterScrollItem__JDDOJIOMAMI(__this,CJNHFNHJHPE,method);
    return;
  }
  getter = (DG_Tweening_Core_DOGetter_int__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<int>_TypeInfo);
  DG_Tweening_Core_DOGetter<int>___ctor();
  setter = (DG_Tweening_Core_DOSetter_int__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<int>_TypeInfo);
  DG_Tweening_Core_DOSetter<int>___ctor();
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__To(getter,setter,CJNHFNHJHPE,PNEIGGOFIOA,(MethodInfo *)0x0);
  *OCBEBGEKOIA = (DG_Tweening_Tween_o *)pDVar1;
  thunk_FUN_01c20e04(OCBEBGEKOIA,pDVar1);
  return;
}


// ===== public float get_RightLimit()  [RVA 0x3031008]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$get_RightLimit @ RVA 0x3031008

float Nekki_SF2_GUI_Shop_ParameterScrollItem__get_RightLimit
                (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Roster_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  float fVar2;
  
  if ((DAT_04565cfd & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565cfd = 1;
    method = extraout_x1;
  }
  if (((__this->fields).HJNKDGDBDML < 0.0) || (fVar2 = (__this->fields).GPJAHLLAHEA, fVar2 < 0.0)) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
      method = extraout_x1_01;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = Roster__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    fVar2 = (__this->fields).DNIGDKAHPIG * (float)iVar1 + (float)(__this->fields).KENACCCGOJE;
  }
  return fVar2;
}


// ===== protected void BHMPLDGKFCI(int CJNHFNHJHPE, float PNEIGGOFIOA)  [RVA 0x30310D4]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$BHMPLDGKFCI @ RVA 0x30310D4

void Nekki_SF2_GUI_Shop_ParameterScrollItem__BHMPLDGKFCI
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t CJNHFNHJHPE,
               float PNEIGGOFIOA,MethodInfo *method)

{
  DG_Tweening_Tween_o **OCBEBGEKOIA;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *__this_01;
  DG_Tweening_Core_DOGetter_int__o *getter;
  DG_Tweening_Core_DOSetter_int__o *setter;
  DG_Tweening_Core_TweenerCore_int__int__NoOptions__o *pDVar2;
  System_String_o *pSVar3;
  
  __this_00 = __this;
  if ((DAT_04565cfe & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ParameterScrollItem_APEIAAPLOHN__);
    __this_00 = (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)
                FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ParameterScrollItem_HLOKKFDFLHO__);
    DAT_04565cfe = 1;
  }
  OCBEBGEKOIA = &(__this->fields).JNGAEMFFEJF;
  Nekki_SF2_GUI_Shop_ParameterScrollItem__CCPABLFBFFA(__this_00,OCBEBGEKOIA,method);
  pNVar1 = (__this->fields)._value;
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,0 < CJNHFNHJHPE,(MethodInfo *)0x0);
    if (CJNHFNHJHPE < 1) {
      return;
    }
    if (0.0 < PNEIGGOFIOA) {
      getter = (DG_Tweening_Core_DOGetter_int__o *)
               thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<int>_TypeInfo);
      DG_Tweening_Core_DOGetter<int>___ctor();
      setter = (DG_Tweening_Core_DOSetter_int__o *)
               thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<int>_TypeInfo);
      DG_Tweening_Core_DOSetter<int>___ctor();
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar2 = DG_Tweening_DOTween__To(getter,setter,CJNHFNHJHPE,PNEIGGOFIOA,(MethodInfo *)0x0);
      *OCBEBGEKOIA = (DG_Tweening_Tween_o *)pDVar2;
      thunk_FUN_01c20e04(OCBEBGEKOIA,pDVar2);
      return;
    }
    (__this->fields).PDJAHMFOPPE = CJNHFNHJHPE;
    pNVar1 = (__this->fields)._value;
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0313129c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                (pNVar1,pSVar3,(pNVar1->klass->vtable)._75_set_text.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OnReturnToPool()  [RVA 0x30312A4]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$OnReturnToPool @ RVA 0x30312A4

void Nekki_SF2_GUI_Shop_ParameterScrollItem__OnReturnToPool
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Nekki_SF2_GUI_Common_TouchHandler_o *pNVar2;
  
  if ((DAT_04565cff & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565cff = 1;
  }
  Nekki_SF2_GUI_BaseScrollItem__OnReturnToPool
            ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  pNVar2 = (__this->fields).NDPGGBECMDD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).NDPGGBECMDD;
    if ((pNVar2 != (Nekki_SF2_GUI_Common_TouchHandler_o *)0x0) &&
       (__this_00 = (pNVar2->fields).OMEOMGINDAD,
       __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public TouchHandler get_TouchHandler()  [RVA 0x3031338]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$get_TouchHandler @ RVA 0x3031338

Nekki_SF2_GUI_Common_TouchHandler_o *
Nekki_SF2_GUI_Shop_ParameterScrollItem__get_TouchHandler
          (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_TouchHandler_o **ppNVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  Il2CppObject *pIVar3;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_Transform_o *parent;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_TouchHandler_o *pNVar4;
  undefined8 uVar5;
  UnityEngine_Vector2_o UVar6;
  
  if ((DAT_04565d00 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<Image>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<TouchHandler>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_13895/*"TouchHandler"*/);
    DAT_04565d00 = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields).NDPGGBECMDD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  ppNVar1 = &(__this->fields).NDPGGBECMDD;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_00,StringLiteral_13895/*"TouchHandler"*/,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            (__this_00,Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
      pIVar3 = UnityEngine_GameObject__AddComponent<object>
                         (__this_00,Method_UnityEngine_GameObject_AddComponent<Image>__);
      if (pIVar3 != (Il2CppObject *)0x0) {
        uVar5 = 0x3f800000;
        (*pIVar3->klass->vtable[0x17].methodPtr)
                  (0x3f800000,0x3f800000,0x3f800000,0,pIVar3,pIVar3->klass->vtable[0x17].method);
        (*(__this->klass->vtable)._51_get_Size.methodPtr)
                  (__this,(__this->klass->vtable)._51_get_Size.method);
        __this_02 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                              ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
          UVar6 = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
            UVar6.fields.y = (float)uVar5;
            UnityEngine_RectTransform__set_sizeDelta(__this_01,UVar6,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            UnityEngine_Transform__SetParent
                      ((UnityEngine_Transform_o *)__this_01,parent,false,(MethodInfo *)0x0);
            UnityEngine_Transform__SetAsLastSibling
                      ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
            pNVar4 = (Nekki_SF2_GUI_Common_TouchHandler_o *)
                     UnityEngine_GameObject__AddComponent<object>
                               (__this_00,Method_UnityEngine_GameObject_AddComponent<TouchHandler>__
                               );
            (__this->fields).NDPGGBECMDD = pNVar4;
            thunk_FUN_01c20e04(ppNVar1,pNVar4);
            goto LAB_031314ec;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031314ec:
  return *ppNVar1;
}


// ===== public void set_AtlasName(string CJNHFNHJHPE)  [RVA 0x3031508]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$set_AtlasName @ RVA 0x3031508

void Nekki_SF2_GUI_Shop_ParameterScrollItem__set_AtlasName
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).ONONPELCDGE = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).ONONPELCDGE);
  return;
}


// ===== public float get_MinHeight()  [RVA 0x3031518]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$get_MinHeight @ RVA 0x3031518

float Nekki_SF2_GUI_Shop_ParameterScrollItem__get_MinHeight
                (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  float fVar2;
  
  pUVar1 = (__this->fields)._layoutElement;
  if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03131534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*(pUVar1->klass->vtable)._33_get_minHeight.methodPtr)
                             (pUVar1,(pUVar1->klass->vtable)._33_get_minHeight.method);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void APEIAAPLOHN(int KEFILECBPMF)  [RVA 0x303153C]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$APEIAAPLOHN @ RVA 0x303153C

void Nekki_SF2_GUI_Shop_ParameterScrollItem__APEIAAPLOHN
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t KEFILECBPMF,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_04565d01 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    DAT_04565d01 = 1;
  }
  (__this->fields).PDJAHMFOPPE = KEFILECBPMF;
  pNVar2 = (__this->fields)._value;
  if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = BJFCCEEPHOF__POMAAOILGAL(KEFILECBPMF,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031315c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
              (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void JDDOJIOMAMI(int CJNHFNHJHPE)  [RVA 0x3030E84]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$JDDOJIOMAMI @ RVA 0x3030E84

void Nekki_SF2_GUI_Shop_ParameterScrollItem__JDDOJIOMAMI
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  BHEDGAKGKPO_StaticFields *pBVar1;
  undefined8 *puVar2;
  int iVar3;
  Il2CppObject *arg0;
  UnityEngine_GameObject_o *__this_00;
  BHEDGAKGKPO_StaticFields *pBVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  System_String_o *pSVar9;
  int32_t local_34;
  
  if ((DAT_04565d02 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_1091/*"({0})"*/);
    FUN_01bab630(&StringLiteral_1005/*"(+{0})"*/);
    DAT_04565d02 = 1;
  }
  (__this->fields).BKNPEHNLJKB = CJNHFNHJHPE;
  puVar2 = &StringLiteral_1005/*"(+{0})"*/;
  if (CJNHFNHJHPE < 1) {
    puVar2 = &StringLiteral_1091/*"({0})"*/;
  }
  pNVar8 = (__this->fields)._additionalValue;
  pSVar9 = (System_String_o *)*puVar2;
  local_34 = CJNHFNHJHPE;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  pSVar9 = System_String__Format(pSVar9,arg0,(MethodInfo *)0x0);
  if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
              (pNVar8,pSVar9,(pNVar8->klass->vtable)._75_set_text.method);
    pNVar8 = (__this->fields)._additionalValue;
    iVar3 = (__this->fields).BKNPEHNLJKB;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pBVar4 = BHEDGAKGKPO_TypeInfo->static_fields;
    if (iVar3 < 1) {
      lVar6 = 0xc;
      lVar5 = 8;
      lVar7 = 4;
      pBVar1 = pBVar4;
    }
    else {
      pBVar1 = (BHEDGAKGKPO_StaticFields *)&pBVar4->CCMHDEKHFCO;
      lVar6 = 0x1c;
      lVar5 = 0x18;
      lVar7 = 0x14;
    }
    if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar8->klass->vtable)._23_set_color.methodPtr)
                ((pBVar1->GNNEMOOOOCI).fields.r,
                 *(undefined4 *)((long)&(pBVar4->GNNEMOOOOCI).fields.r + lVar7),
                 *(undefined4 *)((long)&(pBVar4->GNNEMOOOOCI).fields.r + lVar5),
                 *(undefined4 *)((long)&(pBVar4->GNNEMOOOOCI).fields.r + lVar6),pNVar8,
                 (pNVar8->klass->vtable)._23_set_color.method);
      pNVar8 = (__this->fields)._additionalValue;
      if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        iVar3 = (__this->fields).BKNPEHNLJKB;
        __this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_00,iVar3 != 0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void KFMNMGGDHFD(int CJNHFNHJHPE, ParameterScrollItem.GKCLGEGMGCD DPJIDNBJIBG = 0, float PNEIGGOFIOA = 0)  [RVA 0x30315C8]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$KFMNMGGDHFD @ RVA 0x30315C8

void Nekki_SF2_GUI_Shop_ParameterScrollItem__KFMNMGGDHFD
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t CJNHFNHJHPE,
               int32_t DPJIDNBJIBG,float PNEIGGOFIOA,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ParameterProgressBar_o *pNVar1;
  undefined4 uVar2;
  undefined4 in_register_00005004;
  
  uVar2 = (*(__this->klass->vtable)._53_NLFAIJPCCLI.methodPtr)
                    ((float)CJNHFNHJHPE,__this,(__this->klass->vtable)._53_NLFAIJPCCLI.method);
  pNVar1 = (__this->fields)._progressBar;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_ParameterProgressBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0313161c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._5_SetValue.methodPtr)
              (uVar2,CONCAT44(in_register_00005004,PNEIGGOFIOA),pNVar1,(ulong)(uint)DPJIDNBJIBG,
               (pNVar1->klass->vtable)._5_SetValue.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_MinWidth(float CJNHFNHJHPE)  [RVA 0x3031624]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$set_MinWidth @ RVA 0x3031624

void Nekki_SF2_GUI_Shop_ParameterScrollItem__set_MinWidth
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  
  pUVar1 = (__this->fields)._layoutElement;
  if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* try { // try from 03131634 to 032316e7 has its CatchHandler @ 03131634
                       catch() { ... } // from try @ 03131634 with catch @ 03131634
                       catch() { ... } // from try @ 03131710 with catch @ 03131634
                       catch() { ... } // from try @ 0313174c with catch @ 03131634
                       catch() { ... } // from try @ 03131794 with catch @ 03131634 */
                    /* WARNING: Could not recover jumptable at 0x03131640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._32_set_minWidth.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._32_set_minWidth.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void CCPABLFBFFA(ref Tween OCBEBGEKOIA)  [RVA 0x3030E4C]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$CCPABLFBFFA @ RVA 0x3030E4C

void Nekki_SF2_GUI_Shop_ParameterScrollItem__CCPABLFBFFA
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,DG_Tweening_Tween_o **OCBEBGEKOIA,
               MethodInfo *method)

{
  if (*OCBEBGEKOIA != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(*OCBEBGEKOIA,false,(MethodInfo *)0x0);
    *OCBEBGEKOIA = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(OCBEBGEKOIA,0);
    return;
  }
  return;
}


// ===== private int BGDKJCJBHAB()  [RVA 0x3031648]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$BGDKJCJBHAB @ RVA 0x3031648

int32_t Nekki_SF2_GUI_Shop_ParameterScrollItem__BGDKJCJBHAB
                  (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields).BKNPEHNLJKB;
}


// ===== public void SetTextValue(int CJNHFNHJHPE, int NBHHBBOJJME, float PNEIGGOFIOA = 0)  [RVA 0x30306C0]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$SetTextValue @ RVA 0x30306C0

void Nekki_SF2_GUI_Shop_ParameterScrollItem__SetTextValue
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t CJNHFNHJHPE,
               int32_t NBHHBBOJJME,float PNEIGGOFIOA,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *__this_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)NBHHBBOJJME;
  Nekki_SF2_GUI_Shop_ParameterScrollItem__BHMPLDGKFCI(__this,CJNHFNHJHPE,PNEIGGOFIOA,method_00);
  Nekki_SF2_GUI_Shop_ParameterScrollItem__BLCHKPABFKL
            (__this,NBHHBBOJJME - CJNHFNHJHPE,PNEIGGOFIOA,method_00);
  pNVar2 = (__this->fields)._value;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    __this_00 = (__this->fields)._textContainer;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = true;
      }
      else {
        pNVar2 = (__this->fields)._additionalValue;
        if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03130758;
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      }
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,bVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03130758:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string get_AttributeName()  [RVA 0x3031650]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$get_AttributeName @ RVA 0x3031650

System_String_o *
Nekki_SF2_GUI_Shop_ParameterScrollItem__get_AttributeName
          (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields).LBMOMAIHCEM;
}


// ===== public void SetProgressBarValue(int KHNGEAFKJIP, int NBHHBBOJJME, float PNEIGGOFIOA = 0)  [RVA 0x303075C]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$SetProgressBarValue @ RVA 0x303075C

void Nekki_SF2_GUI_Shop_ParameterScrollItem__SetProgressBarValue
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t KHNGEAFKJIP,
               int32_t NBHHBBOJJME,float PNEIGGOFIOA,MethodInfo *method)

{
  undefined8 uVar1;
  Il2CppMethodPointer pIVar2;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_c *pNVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 in_register_00005004;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(in_register_00005004,PNEIGGOFIOA);
  uVar4 = (ulong)(uint)NBHHBBOJJME;
  uVar5 = (ulong)(uint)KHNGEAFKJIP;
  pIVar2 = (__this->klass->vtable)._52_KFMNMGGDHFD.methodPtr;
  if (NBHHBBOJJME < KHNGEAFKJIP) {
    (*pIVar2)(uVar6,__this,uVar4,0);
    (*(__this->klass->vtable)._52_KFMNMGGDHFD.methodPtr)
              (uVar6,__this,uVar5,2,(__this->klass->vtable)._52_KFMNMGGDHFD.method);
    pNVar3 = __this->klass;
    uVar1 = 1;
    uVar5 = uVar4;
  }
  else {
    (*pIVar2)(uVar6,__this,uVar5,0,(__this->klass->vtable)._52_KFMNMGGDHFD.method);
    (*(__this->klass->vtable)._52_KFMNMGGDHFD.methodPtr)
              (uVar6,__this,uVar4,1,(__this->klass->vtable)._52_KFMNMGGDHFD.method);
    pNVar3 = __this->klass;
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x03130828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pNVar3->vtable)._52_KFMNMGGDHFD.methodPtr)
            (uVar6,__this,uVar5,uVar1,(pNVar3->vtable)._52_KFMNMGGDHFD.method);
  return;
}


// ===== private void PKNFJBEGCOK(string AGPODGHEAIO, bool DCJABCJDDDL, string MHHLKEOKCOB)  [RVA 0x3030964]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$PKNFJBEGCOK @ RVA 0x3030964

void Nekki_SF2_GUI_Shop_ParameterScrollItem__PKNFJBEGCOK
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,System_String_o *AGPODGHEAIO,
               bool DCJABCJDDDL,System_String_o *MHHLKEOKCOB,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o **ppSVar2;
  bool bVar3;
  int32_t JLAFGLDIFOC;
  ABCMPMHNMAP_o *__this_00;
  IHDFIJGDCBL_o *pIVar4;
  DNICJALNLEB_o *__this_01;
  ALJBCELIEHC_o *__this_02;
  Roster_o *__this_03;
  NFEOGKEAFHL_o *pNVar5;
  float fVar6;
  undefined8 uVar7;
  
  if ((DAT_04565d03 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_9367/*"Needed barScale not exist."*/);
    DAT_04565d03 = 1;
  }
  ppSVar2 = &(__this->fields).LBMOMAIHCEM;
  (__this->fields).LBMOMAIHCEM = AGPODGHEAIO;
  thunk_FUN_01c20e04(ppSVar2,AGPODGHEAIO);
  ppSVar1 = &(__this->fields).GCPECKMCAEM;
  (__this->fields).GCPECKMCAEM = MHHLKEOKCOB;
  thunk_FUN_01c20e04(ppSVar1,MHHLKEOKCOB);
  bVar3 = System_String__IsNullOrEmpty((__this->fields).GCPECKMCAEM,(MethodInfo *)0x0);
  if (bVar3) {
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = GameUtils_TypeInfo->static_fields->EDKELIKNDEP;
    if (__this_00 == (ABCMPMHNMAP_o *)0x0) goto LAB_03130bf4;
    pIVar4 = ABCMPMHNMAP__GAPOKDOKDGD(__this_00,*ppSVar2,(MethodInfo *)0x0);
    if (pIVar4 != (IHDFIJGDCBL_o *)0x0) {
      ppSVar2 = &(pIVar4->fields).FFDAPDCFBDO;
    }
    *ppSVar1 = *ppSVar2;
    thunk_FUN_01c20e04(ppSVar1);
  }
  bVar3 = System_String__IsNullOrEmpty(*ppSVar1,(MethodInfo *)0x0);
  if (bVar3) {
    uVar7 = NEON_fmov(0xbf800000,4);
    (__this->fields).HJNKDGDBDML = (float)(int)uVar7;
    (__this->fields).GPJAHLLAHEA = (float)(int)((ulong)uVar7 >> 0x20);
    (__this->fields).DNIGDKAHPIG = 1.0;
    (__this->fields).KENACCCGOJE = 0;
    return;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = GameUtils_TypeInfo->static_fields->CKACCOEFOEA;
  if (__this_01 == (DNICJALNLEB_o *)0x0) {
LAB_03130bf4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_02 = DNICJALNLEB__HNJLNPEEMOK(__this_01,*ppSVar1,(MethodInfo *)0x0);
  if (__this_02 == (ALJBCELIEHC_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_9367/*"Needed barScale not exist."*/,(MethodInfo *)0x0);
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_03 == (Roster_o *)0x0) goto LAB_03130bf4;
  JLAFGLDIFOC = Roster__EOEAKGGDBFH(__this_03,(MethodInfo *)0x0);
  if (DCJABCJDDDL) {
    pNVar5 = ALJBCELIEHC__PBBGPDCKBLO(__this_02,JLAFGLDIFOC,(MethodInfo *)0x0);
    if (pNVar5 == (NFEOGKEAFHL_o *)0x0) {
      pNVar5 = ALJBCELIEHC__NOKMFGNBKHE(__this_02,(MethodInfo *)0x0);
LAB_03130b88:
      (__this->fields).GPJAHLLAHEA = 0.0;
      (__this->fields).HJNKDGDBDML = 0.0;
      if (pNVar5 == (NFEOGKEAFHL_o *)0x0) goto LAB_03130bbc;
    }
  }
  else {
    pNVar5 = ALJBCELIEHC__FCNIFPFAFAF(__this_02,JLAFGLDIFOC,(MethodInfo *)0x0);
    if (pNVar5 == (NFEOGKEAFHL_o *)0x0) {
      pNVar5 = ALJBCELIEHC__ILDMHAKLLJC(__this_02,(MethodInfo *)0x0);
      goto LAB_03130b88;
    }
  }
  (__this->fields).HJNKDGDBDML = (float)(pNVar5->fields).OAJHHJBAINM;
  (__this->fields).GPJAHLLAHEA = (float)(pNVar5->fields).DJNEKDHLEHN;
  (__this->fields).DNIGDKAHPIG = (pNVar5->fields).MJHEJPAHPGF;
  (__this->fields).KENACCCGOJE = (pNVar5->fields).GHKNFJJOIDM;
LAB_03130bbc:
  fVar6 = (__this_02->fields).LDNOMBGGMHF;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  (__this->fields).GMCNKDKMHII = fVar6;
  fVar6 = (__this_02->fields).AKPNOPAEKEF;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  (__this->fields).CCIKLAFHFAH = fVar6;
  (__this->fields).NDFDLJPANOL = (__this_02->fields).BGHFADDGPAD;
  return;
}


// ===== private int HLOKKFDFLHO()  [RVA 0x3031658]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$HLOKKFDFLHO @ RVA 0x3031658

int32_t Nekki_SF2_GUI_Shop_ParameterScrollItem__HLOKKFDFLHO
                  (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields).PDJAHMFOPPE;
}


// ===== public float get_MinWidth()  [RVA 0x3031660]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$get_MinWidth @ RVA 0x3031660

float Nekki_SF2_GUI_Shop_ParameterScrollItem__get_MinWidth
                (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  float fVar2;
  
  pUVar1 = (__this->fields)._layoutElement;
  if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0313167c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*(pUVar1->klass->vtable)._31_get_minWidth.methodPtr)
                             (pUVar1,(pUVar1->klass->vtable)._31_get_minWidth.method);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string get_AtlasName()  [RVA 0x3031684]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$get_AtlasName @ RVA 0x3031684

System_String_o *
Nekki_SF2_GUI_Shop_ParameterScrollItem__get_AtlasName
          (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields).ONONPELCDGE;
}


// ===== public float get_LeftLimit()  [RVA 0x303168C]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$get_LeftLimit @ RVA 0x303168C

float Nekki_SF2_GUI_Shop_ParameterScrollItem__get_LeftLimit
                (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Roster_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  float fVar2;
  
  if ((DAT_04565d04 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565d04 = 1;
    method = extraout_x1;
  }
  fVar2 = (__this->fields).HJNKDGDBDML;
  if ((fVar2 < 0.0) || ((__this->fields).GPJAHLLAHEA < 0.0)) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_00;
    }
                    /* try { // try from 031316e8 to 032316f3 has its CatchHandler @ 03131758 */
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 031316f8 to 032316fb has its CatchHandler @ 03131754 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
      method = extraout_x1_01;
    }
                    /* try { // try from 03131708 to 0323170f has its CatchHandler @ 0313174c */
                    /* try { // try from 03131710 to 03231747 has its CatchHandler @ 03131634 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031316f8 with catch @ 03131754
                        */
      FUN_01bab8c8();
    }
    iVar1 = Roster__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    fVar2 = (__this->fields).DNIGDKAHPIG * (float)iVar1 + (float)(__this->fields).KENACCCGOJE;
  }
                    /* try { // try from 03131748 to 0323174b has its CatchHandler @ 03131750 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03131708 with catch @ 0313174c
                       try { // try from 0313174c to 0323176f has its CatchHandler @ 03131634 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03131748 with catch @ 03131750
                        */
  return fVar2;
}


// ===== public void .ctor()  [RVA 0x3031758]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$.ctor @ RVA 0x3031758

void Nekki_SF2_GUI_Shop_ParameterScrollItem___ctor
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031316e8 with catch @ 03131758
                        */
                    /* try { // try from 03131770 to 03231773 has its CatchHandler @ 03131780 */
  if ((DAT_04565d05 & 1) == 0) {
                    /* catch() { ... } // from try @ 03131770 with catch @ 03131780 */
    FUN_01bab630(&StringLiteral_3209/*"Attributes."*/);
    DAT_04565d05 = 1;
  }
                    /* try { // try from 0313178c to 03231793 has its CatchHandler @ 031317a8 */
                    /* try { // try from 03131794 to 0323179f has its CatchHandler @ 03131634 */
  (__this->fields).ONONPELCDGE = StringLiteral_3209/*"Attributes."*/;
  thunk_FUN_01c20e04(&(__this->fields).ONONPELCDGE);
                    /* try { // try from 031317a0 to 032317a7 has its CatchHandler @ 031317a8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0313178c with catch @ 031317a8
                       catch(type#2 @ 00000000) { ... } // from try @ 031317a0 with catch @ 031317a8
                        */
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected virtual float NLFAIJPCCLI(float CJNHFNHJHPE)  [RVA 0x30317B0]
// Nekki.SF2.GUI.Shop.ParameterScrollItem$$NLFAIJPCCLI @ RVA 0x30317B0

float Nekki_SF2_GUI_Shop_ParameterScrollItem__NLFAIJPCCLI
                (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,float CJNHFNHJHPE,
                MethodInfo *method)

{
  MethodInfo *extraout_x1;
  GameUtils_StaticFields *pMVar1;
  float fVar2;
  float fVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if ((DAT_04565d06 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04565d06 = 1;
    method = extraout_x1;
  }
  fVar2 = Nekki_SF2_GUI_Shop_ParameterScrollItem__get_RightLimit(__this,method);
  if ((__this->fields).NDFDLJPANOL == 0) {
    fVar3 = powf(CJNHFNHJHPE / fVar2,(__this->fields).GMCNKDKMHII);
    fVar2 = 0.0;
    if (fVar3 < 0.0) goto LAB_0313187c;
  }
  else {
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar1 = GameUtils_TypeInfo->static_fields;
    local_50.fakeValueActive = (pMVar1->EEBCCADECEJ).fields.fakeValueActive;
    local_50.inited = (pMVar1->EEBCCADECEJ).fields.inited;
    local_50._18_2_ = *(undefined2 *)&(pMVar1->EEBCCADECEJ).fields.field_0x12;
    local_50.hiddenValueOldByte4.fields = (pMVar1->EEBCCADECEJ).fields.hiddenValueOldByte4.fields;
    local_50.fakeValue = (pMVar1->EEBCCADECEJ).fields.fakeValue;
    local_50.currentCryptoKey = (pMVar1->EEBCCADECEJ).fields.currentCryptoKey;
    local_50.hiddenValue = (pMVar1->EEBCCADECEJ).fields.hiddenValue;
    fVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_50,
                       (MethodInfo *)0x0);
    fVar3 = exp2f(((CJNHFNHJHPE - fVar2) * (__this->fields).GMCNKDKMHII) / fVar3);
  }
  fVar2 = fVar3;
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
LAB_0313187c:
  fVar3 = (__this->fields).CCIKLAFHFAH;
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}

