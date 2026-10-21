// TypeDefIndex 1284
// Namespace: Nekki.SF2.GUI.Fight
// public class TextAndMoneyLine : MonoBehaviour, MCNGELCOMNG
// Fields:
//   private LabelAlias textLabel; // 0x20
//   private IconAndText moneyCount; // 0x28
//   private IconAndText rubyCount; // 0x30
//   private Vector2 basePos; // 0x38
//   private float textMoveTime; // 0x40
//   private float moneyAddTime; // 0x44
//   private Vector2 LGEHFOCNFGF; // 0x48
//   private long ODEAKOGFMPE; // 0x50
//   private long PGGDJIGFIHK; // 0x58
//   private long HGFBBMJNBPI; // 0x60
//   private long BJGBAECJNAD; // 0x68
//   private bool LAJBMFKIADL; // 0x70
//   private Sequence NPGLPGLADBF; // 0x78
//   private Sequence FNMDIKCCJAN; // 0x80
//   private UnityEvent JLKPBAGACID; // 0x88
//   private Func<long, string> BHBICCNLODE; // 0x90

// ===== private void KCHPGFNJJPA()  [RVA 0x31502E8]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$KCHPGFNJJPA @ RVA 0x31502E8

void Nekki_SF2_GUI_Fight_TextAndMoneyLine__KCHPGFNJJPA
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Globalization_NumberFormatInfo_o *__this_01;
  DG_Tweening_Sequence_o *pDVar2;
  DG_Tweening_Core_DOGetter_long__o *pDVar3;
  DG_Tweening_Core_DOSetter_long__o *pDVar4;
  DG_Tweening_Core_TweenerCore_long__long__NoOptions__o *pDVar5;
  DG_Tweening_TweenCallback_o *callback;
  UnityEngine_Events_UnityEvent_o *__this_02;
  MethodInfo *extraout_x1;
  DG_Tweening_Sequence_o **ppDVar6;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar7;
  int64_t iVar8;
  float fVar9;
  
  if ((DAT_04566803 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_COHHMJJFAAD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_DKFLJLGIHMF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_FBJDHDNHOAC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_JFODEOJOHGB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_NCOHGDFHGHK__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<long>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<long>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&System_Globalization_NumberFormatInfo_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    DAT_04566803 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_01 = (System_Globalization_NumberFormatInfo_o *)
                thunk_FUN_01bda818(System_Globalization_NumberFormatInfo_TypeInfo);
    System_Globalization_NumberFormatInfo___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Globalization_NumberFormatInfo_o *)0x0) {
      System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
                (__this_01,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
      __this_00[1].monitor = __this_01;
      thunk_FUN_01c20e04(&__this_00[1].monitor,__this_01);
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      ppDVar6 = &(__this->fields).FNMDIKCCJAN;
      *ppDVar6 = pDVar2;
      thunk_FUN_01c20e04(ppDVar6,pDVar2);
      pNVar7 = (__this->fields).moneyCount;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar7 = (__this->fields).rubyCount;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pDVar3 = (DG_Tweening_Core_DOGetter_long__o *)
                   thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<long>_TypeInfo);
          DG_Tweening_Core_DOGetter<long>___ctor();
          pDVar4 = (DG_Tweening_Core_DOSetter_long__o *)
                   thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<long>_TypeInfo);
          DG_Tweening_Core_DOSetter<long>___ctor();
          iVar8 = (__this->fields).ODEAKOGFMPE;
          fVar9 = (__this->fields).moneyAddTime;
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pDVar5 = DG_Tweening_DOTween__To(pDVar3,pDVar4,iVar8,fVar9,(MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__Append
                    ((__this->fields).FNMDIKCCJAN,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
          if (0 < (__this->fields).HGFBBMJNBPI) {
            pDVar3 = (DG_Tweening_Core_DOGetter_long__o *)
                     thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<long>_TypeInfo);
            DG_Tweening_Core_DOGetter<long>___ctor();
            pDVar4 = (DG_Tweening_Core_DOSetter_long__o *)
                     thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<long>_TypeInfo);
            DG_Tweening_Core_DOSetter<long>___ctor();
            iVar8 = (__this->fields).HGFBBMJNBPI;
            fVar9 = (__this->fields).moneyAddTime;
            if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pDVar5 = DG_Tweening_DOTween__To(pDVar3,pDVar4,iVar8,fVar9,(MethodInfo *)0x0);
            DG_Tweening_TweenSettingsExtensions__Join
                      (*ppDVar6,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
          }
          pDVar2 = *ppDVar6;
          callback = (DG_Tweening_TweenCallback_o *)
                     thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
          DG_Tweening_TweenCallback___ctor();
          DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,callback,(MethodInfo *)0x0);
          return;
        }
      }
      __this_02 = (__this->fields).JLKPBAGACID;
      if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__Invoke(__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void StartAnimation()  [RVA 0x3150678]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$StartAnimation @ RVA 0x3150678

void Nekki_SF2_GUI_Fight_TextAndMoneyLine__StartAnimation
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,MethodInfo *method)

{
  if ((__this->fields).LAJBMFKIADL != false) {
    Nekki_SF2_GUI_Fight_TextAndMoneyLine__NFFKNHDMGJA(__this,method);
    (__this->fields).LAJBMFKIADL = false;
    return;
  }
  Nekki_SF2_GUI_Fight_TextAndMoneyLine__KCHPGFNJJPA(__this,method);
  return;
}


// ===== public void Init(string EHNFGMGKCHO, long DCDLMCEEOCC, long IPGOFHMGFOI, Func<long, string> CDBMJENDHFM, string LAPCDGMAIAI = "")  [RVA 0x3150830]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$Init @ RVA 0x3150830

void Nekki_SF2_GUI_Fight_TextAndMoneyLine__Init
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,System_String_o *EHNFGMGKCHO,
               int64_t DCDLMCEEOCC,int64_t IPGOFHMGFOI,System_Func_long__string__o *CDBMJENDHFM,
               System_String_o *LAPCDGMAIAI,MethodInfo *method)

{
  bool bVar1;
  System_Func_long__string__o **ppSVar2;
  System_Globalization_NumberFormatInfo_o *__this_00;
  System_String_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  ACHLOMELAJE_o *pAVar6;
  System_Func_long__string__o *pSVar7;
  int64_t *__this_01;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar8;
  Nekki_SF2_GUI_LabelAlias_o *pNVar9;
  UnityEngine_Vector3_o UVar10;
  
  if ((DAT_04566804 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Globalization_NumberFormatInfo_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_22230/*"{"*/);
    FUN_01bab630(&StringLiteral_22448/*"{0}{1}"*/);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_9281/*"N0"*/);
    DAT_04566804 = 1;
  }
  (__this->fields).ODEAKOGFMPE = DCDLMCEEOCC;
  (__this->fields).PGGDJIGFIHK = 0;
  (__this->fields).LAJBMFKIADL = true;
  ppSVar2 = &(__this->fields).BHBICCNLODE;
  *ppSVar2 = CDBMJENDHFM;
  thunk_FUN_01c20e04(ppSVar2,CDBMJENDHFM);
  __this_01 = &(__this->fields).BJGBAECJNAD;
  *__this_01 = 0;
  (__this->fields).HGFBBMJNBPI = IPGOFHMGFOI;
  __this_00 = (System_Globalization_NumberFormatInfo_o *)
              thunk_FUN_01bda818(System_Globalization_NumberFormatInfo_TypeInfo);
  System_Globalization_NumberFormatInfo___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (System_Globalization_NumberFormatInfo_o *)0x0) goto LAB_03250ba8;
  System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
            (__this_00,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
  pNVar9 = (__this->fields).textLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && (bVar1 = System_String__IsNullOrEmpty(EHNFGMGKCHO,(MethodInfo *)0x0), !bVar1)) {
    if (LAPCDGMAIAI != (System_String_o *)0x0) {
      pSVar3 = System_String__Concat
                         (StringLiteral_22230/*"{"*/,LAPCDGMAIAI,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0);
      EHNFGMGKCHO = System_String__Format
                              (StringLiteral_22448/*"{0}{1}"*/,(Il2CppObject *)EHNFGMGKCHO,
                               (Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    }
    pNVar9 = (__this->fields).textLabel;
    if (pNVar9 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03250ba8;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar9,EHNFGMGKCHO,(MethodInfo *)0x0);
    pNVar9 = (__this->fields).textLabel;
    if ((pNVar9 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03250ba8;
    UVar10 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
    pNVar9 = (__this->fields).textLabel;
    (__this->fields).LGEHFOCNFGF.fields.x = UVar10.fields.x;
    (__this->fields).LGEHFOCNFGF.fields.y = UVar10.fields.y;
    if ((pNVar9 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03250ba8;
    UVar10.fields.z = 0.0;
    UVar10.fields._0_8_ = (__this->fields).basePos.fields;
    UnityEngine_Transform__set_localPosition(pUVar4,UVar10,(MethodInfo *)0x0);
  }
  pNVar8 = (__this->fields).moneyCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar8 = (__this->fields).moneyCount;
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
    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar6 == (ACHLOMELAJE_o *)0x0) || (pNVar8 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0))
    goto LAB_03250ba8;
    Nekki_SF2_GUI_Fight_IconAndText__SetIcon(pNVar8,(pAVar6->fields).FAAJGHKHEBI,(MethodInfo *)0x0);
    pSVar7 = (__this->fields).BHBICCNLODE;
    if (pSVar7 == (System_Func_long__string__o *)0x0) goto LAB_03250ba8;
    pNVar8 = (__this->fields).moneyCount;
    pSVar3 = (System_String_o *)
             (*(code *)(pSVar7->fields).super.super.invoke_impl)
                       ((pSVar7->fields).super.super.method_code,(__this->fields).PGGDJIGFIHK,
                        (pSVar7->fields).super.super.method);
    if (pNVar8 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) goto LAB_03250ba8;
    Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar8,pSVar3,(MethodInfo *)0x0);
    pNVar8 = (__this->fields).moneyCount;
    if ((pNVar8 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03250ba8;
    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
  }
  pNVar8 = (__this->fields).rubyCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar8 = (__this->fields).rubyCount;
  pSVar3 = System_Int64__ToString
                     ((int64_t)__this_01,StringLiteral_9281/*"N0"*/,(System_IFormatProvider_o *)__this_00,
                      (MethodInfo *)0x0);
  if (pNVar8 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
    Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar8,pSVar3,(MethodInfo *)0x0);
    pNVar8 = (__this->fields).rubyCount;
    if ((pNVar8 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03250ba8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FCLFAFOPCNN()  [RVA 0x3150BAC]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$FCLFAFOPCNN @ RVA 0x3150BAC

void Nekki_SF2_GUI_Fight_TextAndMoneyLine__FCLFAFOPCNN
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields).JLKPBAGACID;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HLEAJLEGAFL()  [RVA 0x3150BC8]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$HLEAJLEGAFL @ RVA 0x3150BC8

void Nekki_SF2_GUI_Fight_TextAndMoneyLine__HLEAJLEGAFL
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar3;
  
  if ((DAT_04566805 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566805 = 1;
    method = extraout_x1;
  }
  if ((0 < (__this->fields).ODEAKOGFMPE) || ((__this->fields).HGFBBMJNBPI < 1)) {
    pNVar3 = (__this->fields).moneyCount;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).moneyCount;
      if ((pNVar3 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03250cc8;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    }
  }
  if (0 < (__this->fields).HGFBBMJNBPI) {
    pNVar3 = (__this->fields).rubyCount;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).rubyCount;
      if ((pNVar3 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        return;
      }
LAB_03250cc8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void AddListener(UnityAction IELDNEAAPBE)  [RVA 0x3150CCC]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$AddListener @ RVA 0x3150CCC

void Nekki_SF2_GUI_Fight_TextAndMoneyLine__AddListener
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,
               UnityEngine_Events_UnityAction_o *IELDNEAAPBE,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields).JLKPBAGACID;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__AddListener(__this_00,IELDNEAAPBE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FinishAnimation()  [RVA 0x3150CE8]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$FinishAnimation @ RVA 0x3150CE8

void Nekki_SF2_GUI_Fight_TextAndMoneyLine__FinishAnimation
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_NumberFormatInfo_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  int64_t iVar4;
  System_Func_long__string__o *pSVar5;
  int64_t *__this_02;
  DG_Tweening_Sequence_o **ppDVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar8;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04566806 & 1) == 0) {
    FUN_01bab630(&System_Globalization_NumberFormatInfo_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_9281/*"N0"*/);
    DAT_04566806 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Globalization_NumberFormatInfo_o *)
              thunk_FUN_01bda818(System_Globalization_NumberFormatInfo_TypeInfo,method);
  System_Globalization_NumberFormatInfo___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (System_Globalization_NumberFormatInfo_o *)0x0) goto LAB_03250f60;
  System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
            (__this_00,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
  ppDVar6 = &(__this->fields).NPGLPGLADBF;
  if (*ppDVar6 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar6,false,(MethodInfo *)0x0);
    *ppDVar6 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar6,0);
  }
  ppDVar6 = &(__this->fields).FNMDIKCCJAN;
  if (*ppDVar6 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar6,false,(MethodInfo *)0x0);
    *ppDVar6 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar6,0);
  }
  pNVar7 = (__this->fields).textLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields).textLabel;
    if ((pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_03250f60;
    value.fields.z = 0.0;
    value.fields._0_8_ = (__this->fields).LGEHFOCNFGF.fields;
    UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
  }
  if ((0 < (__this->fields).ODEAKOGFMPE) || ((__this->fields).HGFBBMJNBPI < 1)) {
    pNVar8 = (__this->fields).moneyCount;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar8 = (__this->fields).moneyCount;
      if ((pNVar8 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03250f60;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      iVar4 = (__this->fields).ODEAKOGFMPE;
      pSVar5 = (__this->fields).BHBICCNLODE;
      (__this->fields).PGGDJIGFIHK = iVar4;
      if (pSVar5 == (System_Func_long__string__o *)0x0) goto LAB_03250f60;
      pNVar8 = (__this->fields).moneyCount;
      pSVar3 = (System_String_o *)
               (*(code *)(pSVar5->fields).super.super.invoke_impl)
                         ((pSVar5->fields).super.super.method_code,iVar4,
                          (pSVar5->fields).super.super.method);
      if (pNVar8 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) goto LAB_03250f60;
      Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar8,pSVar3,(MethodInfo *)0x0);
    }
  }
  if (0 < (__this->fields).HGFBBMJNBPI) {
    pNVar8 = (__this->fields).rubyCount;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar8 = (__this->fields).rubyCount;
      if ((pNVar8 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        __this_02 = &(__this->fields).BJGBAECJNAD;
        *__this_02 = (__this->fields).HGFBBMJNBPI;
        pNVar8 = (__this->fields).rubyCount;
        pSVar3 = System_Int64__ToString
                           ((int64_t)__this_02,StringLiteral_9281/*"N0"*/,
                            (System_IFormatProvider_o *)__this_00,(MethodInfo *)0x0);
        if (pNVar8 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
          Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar8,pSVar3,(MethodInfo *)0x0);
          return;
        }
      }
LAB_03250f60:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3150F64]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$.ctor @ RVA 0x3150F64

void Nekki_SF2_GUI_Fight_TextAndMoneyLine___ctor
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566807 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04566807 = 1;
    method = extraout_x1;
  }
  __this_00 = (UnityEngine_Events_UnityEvent_o *)
              thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).JLKPBAGACID;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void RemoveListener(UnityAction IELDNEAAPBE)  [RVA 0x3150FD0]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$RemoveListener @ RVA 0x3150FD0

void Nekki_SF2_GUI_Fight_TextAndMoneyLine__RemoveListener
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,
               UnityEngine_Events_UnityAction_o *IELDNEAAPBE,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields).JLKPBAGACID;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__RemoveListener(__this_00,IELDNEAAPBE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NFFKNHDMGJA()  [RVA 0x31506A8]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$NFFKNHDMGJA @ RVA 0x31506A8

void Nekki_SF2_GUI_Fight_TextAndMoneyLine__NFFKNHDMGJA
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *pDVar2;
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *pDVar3;
  MethodInfo *extraout_x1;
  DG_Tweening_Sequence_o **ppDVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  UnityEngine_Vector3_o endValue;
  
  if ((DAT_04566808 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_TextAndMoneyLine_FCLFAFOPCNN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_TextAndMoneyLine_HLEAJLEGAFL__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04566808 = 1;
    method = extraout_x1;
  }
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DG_Tweening_DOTween_TypeInfo,method);
  }
  pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  ppDVar4 = &(__this->fields).NPGLPGLADBF;
  *ppDVar4 = pDVar2;
  thunk_FUN_01c20e04(ppDVar4,pDVar2);
  pNVar5 = (__this->fields).textLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).textLabel;
    if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pDVar2 = (__this->fields).NPGLPGLADBF;
    target = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
    endValue.fields.z = 0.0;
    endValue.fields._0_8_ = (__this->fields).LGEHFOCNFGF.fields;
    t = DG_Tweening_ShortcutExtensions__DOLocalMove
                  (target,endValue,(__this->fields).textMoveTime,false,(MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__Append(pDVar2,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
  }
  pDVar2 = (__this->fields).NPGLPGLADBF;
  pDVar3 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,pDVar3,(MethodInfo *)0x0);
  pDVar2 = (__this->fields).NPGLPGLADBF;
  pDVar3 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,pDVar3,(MethodInfo *)0x0);
  return;
}

