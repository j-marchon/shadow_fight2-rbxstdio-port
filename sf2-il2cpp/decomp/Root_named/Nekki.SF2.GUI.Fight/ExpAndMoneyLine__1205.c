// TypeDefIndex 1205
// Namespace: Nekki.SF2.GUI.Fight
// public class ExpAndMoneyLine : MonoBehaviour, MCNGELCOMNG
// Fields:
//   private IconAndText exp; // 0x20
//   private IconAndText moneyCount; // 0x28
//   private float moneyAddTime; // 0x30
//   private Sequence HCLACPMIFEB; // 0x38
//   private Sequence FKHAMLFIAIG; // 0x40
//   private UnityEvent JLKPBAGACID; // 0x48
//   private float HIPCFGDMJGF; // 0x50
//   private long PBPKEPIIAEJ; // 0x58
//   private long LOGNCHJEHMN; // 0x60
//   private long ODEAKOGFMPE; // 0x68
//   private long PGGDJIGFIHK; // 0x70
//   private bool ABIOEEDDMJN; // 0x78
//   private const float JMFHCHGMOFP = 2;
//   private const float GPAKOCEDFIG = 1.2;
//   private Func<long, string> BHBICCNLODE; // 0x80

// ===== public void Init(long COAIOPFEFHM, long DCDLMCEEOCC, Func<long, string> CDBMJENDHFM)  [RVA 0x312B2BC]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$Init @ RVA 0x312B2BC

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__Init
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,int64_t COAIOPFEFHM,
               int64_t DCDLMCEEOCC,System_Func_long__string__o *CDBMJENDHFM,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  Roster_o *pAVar2;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar3;
  System_Func_long__string__o **ppSVar4;
  
  if ((DAT_04566692 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566692 = 1;
  }
  ppSVar4 = &(__this->fields).BHBICCNLODE;
  *ppSVar4 = CDBMJENDHFM;
  (__this->fields).ABIOEEDDMJN = true;
  (__this->fields).PBPKEPIIAEJ = COAIOPFEFHM;
  (__this->fields).LOGNCHJEHMN = 0;
  (__this->fields).ODEAKOGFMPE = DCDLMCEEOCC;
  (__this->fields).PGGDJIGFIHK = 0;
  thunk_FUN_01c20e04(ppSVar4,CDBMJENDHFM);
  pNVar3 = (__this->fields).moneyCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).moneyCount;
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
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar2 == (Roster_o *)0x0) || (pNVar3 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Fight_IconAndText__SetIcon(pNVar3,(pAVar2->fields).FAAJGHKHEBI,(MethodInfo *)0x0);
  }
  Nekki_SF2_GUI_Fight_ExpAndMoneyLine__VisibleExpAndMoney(__this,false,method_00);
  return;
}


// ===== private long GOPCEIJEELD()  [RVA 0x312B530]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$GOPCEIJEELD @ RVA 0x312B530

int64_t Nekki_SF2_GUI_Fight_ExpAndMoneyLine__GOPCEIJEELD
                  (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,MethodInfo *method)

{
  return (__this->fields).LOGNCHJEHMN;
}


// ===== private long LGKAMGAJOCJ()  [RVA 0x312B538]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$LGKAMGAJOCJ @ RVA 0x312B538

int64_t Nekki_SF2_GUI_Fight_ExpAndMoneyLine__LGKAMGAJOCJ
                  (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,MethodInfo *method)

{
  return (__this->fields).PGGDJIGFIHK;
}


// ===== private void LDIMAGHKOPB(int KEFILECBPMF)  [RVA 0x312B540]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$LDIMAGHKOPB @ RVA 0x312B540

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__LDIMAGHKOPB
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,int32_t KEFILECBPMF,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Fight_IconAndText_o *__this_00;
  
  __this_00 = (__this->fields).moneyCount;
  if (__this_00 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
    Nekki_SF2_GUI_Fight_IconAndText__SetFontSize(__this_00,KEFILECBPMF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CMCCFDDPKKJ()  [RVA 0x312B55C]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$CMCCFDDPKKJ @ RVA 0x312B55C

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__CMCCFDDPKKJ
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  DG_Tweening_Sequence_o *pDVar4;
  Il2CppObject *__this_00;
  DG_Tweening_Core_DOGetter_int__o *getter;
  DG_Tweening_Core_DOSetter_int__o *setter;
  DG_Tweening_Core_TweenerCore_int__int__NoOptions__o *t;
  MethodInfo *extraout_x1;
  DG_Tweening_Sequence_o **ppDVar5;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_04566693 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ExpAndMoneyLine_LDIMAGHKOPB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ExpAndMoneyLine_NLGIILGAJGL_AICJGKEGNGI__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ExpAndMoneyLine_NLGIILGAJGL_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566693 = 1;
    method = extraout_x1;
  }
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DG_Tweening_DOTween_TypeInfo,method);
  }
  pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  ppDVar5 = &(__this->fields).FKHAMLFIAIG;
  *ppDVar5 = pDVar4;
  thunk_FUN_01c20e04(ppDVar5,pDVar4);
  pNVar6 = (__this->fields).moneyCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (Il2CppObject *)
                thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ExpAndMoneyLine_NLGIILGAJGL_TypeInfo);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    pNVar6 = (__this->fields).moneyCount;
    if ((pNVar6 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
       (iVar3 = Nekki_SF2_GUI_Fight_IconAndText__GetFontSize(pNVar6,(MethodInfo *)0x0),
       __this_00 != (Il2CppObject *)0x0)) {
      *(int32_t *)&__this_00[1].klass = iVar3;
      pNVar6 = (__this->fields).moneyCount;
      if (pNVar6 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
        Nekki_SF2_GUI_Fight_IconAndText__SetBestFit(pNVar6,true,(MethodInfo *)0x0);
        getter = (DG_Tweening_Core_DOGetter_int__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<int>_TypeInfo);
        DG_Tweening_Core_DOGetter<int>___ctor();
        setter = (DG_Tweening_Core_DOSetter_int__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<int>_TypeInfo);
        DG_Tweening_Core_DOSetter<int>___ctor();
        iVar1 = *(int *)&__this_00[1].klass;
        fVar8 = (__this->fields).moneyAddTime;
        fVar9 = (__this->fields).HIPCFGDMJGF;
        if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        fVar7 = (float)iVar1 * 1.2;
        iVar3 = -0x80000000;
        if (fVar7 != INFINITY) {
          iVar3 = (int)fVar7;
        }
        t = DG_Tweening_DOTween__To(getter,setter,iVar3,fVar8 + fVar9,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append
                  (*ppDVar5,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void OOFDHGENFIG(long KEFILECBPMF)  [RVA 0x312B784]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$OOFDHGENFIG @ RVA 0x312B784

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__OOFDHGENFIG
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,int64_t KEFILECBPMF,MethodInfo *method
               )

{
  int64_t *__this_00;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Fight_IconAndText_o *__this_01;
  
  __this_00 = &(__this->fields).LOGNCHJEHMN;
  *__this_00 = KEFILECBPMF;
  __this_01 = (__this->fields).exp;
  CJNHFNHJHPE = System_Int64__ToString((int64_t)__this_00,(MethodInfo *)0x0);
  if (__this_01 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
    Nekki_SF2_GUI_Fight_IconAndText__SetText(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RemoveListener(UnityAction IELDNEAAPBE)  [RVA 0x312B7B4]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$RemoveListener @ RVA 0x312B7B4

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__RemoveListener
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,
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


// ===== private void IGFOCPCDHJN(long KEFILECBPMF)  [RVA 0x312B7D0]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$IGFOCPCDHJN @ RVA 0x312B7D0

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__IGFOCPCDHJN
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,int64_t KEFILECBPMF,MethodInfo *method
               )

{
  System_String_o *CJNHFNHJHPE;
  System_Func_long__string__o *pSVar1;
  Nekki_SF2_GUI_Fight_IconAndText_o *__this_00;
  
  pSVar1 = (__this->fields).BHBICCNLODE;
  (__this->fields).PGGDJIGFIHK = KEFILECBPMF;
  if (pSVar1 != (System_Func_long__string__o *)0x0) {
    __this_00 = (__this->fields).moneyCount;
    CJNHFNHJHPE = (System_String_o *)
                  (*(code *)(pSVar1->fields).super.super.invoke_impl)
                            ((pSVar1->fields).super.super.method_code,KEFILECBPMF,
                             (pSVar1->fields).super.super.method);
    if (__this_00 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
      Nekki_SF2_GUI_Fight_IconAndText__SetText(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FinishAnimation()  [RVA 0x312B810]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$FinishAnimation @ RVA 0x312B810

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__FinishAnimation
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  int64_t *__this_00;
  System_String_o *pSVar2;
  int64_t iVar3;
  MethodInfo *in_x2;
  System_Func_long__string__o *pSVar4;
  DG_Tweening_Sequence_o **ppDVar5;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar6;
  
  if ((DAT_04566694 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566694 = 1;
  }
  ppDVar5 = &(__this->fields).HCLACPMIFEB;
  if (*ppDVar5 != (DG_Tweening_Sequence_o *)0x0) {
    in_x2 = (MethodInfo *)0x0;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar5,false,(MethodInfo *)0x0);
    *ppDVar5 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar5,0);
  }
  ppDVar5 = &(__this->fields).FKHAMLFIAIG;
  if (*ppDVar5 != (DG_Tweening_Sequence_o *)0x0) {
    in_x2 = (MethodInfo *)0x0;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar5,false,(MethodInfo *)0x0);
    *ppDVar5 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar5,0);
  }
  Nekki_SF2_GUI_Fight_ExpAndMoneyLine__VisibleExpAndMoney(__this,true,in_x2);
  pNVar6 = (__this->fields).exp;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = &(__this->fields).LOGNCHJEHMN;
    *__this_00 = (__this->fields).PBPKEPIIAEJ;
    pNVar6 = (__this->fields).exp;
    pSVar2 = System_Int64__ToString((int64_t)__this_00,(MethodInfo *)0x0);
    if (pNVar6 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) goto LAB_0322b968;
    Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar6,pSVar2,(MethodInfo *)0x0);
  }
  pNVar6 = (__this->fields).moneyCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  iVar3 = (__this->fields).ODEAKOGFMPE;
  pSVar4 = (__this->fields).BHBICCNLODE;
  (__this->fields).PGGDJIGFIHK = iVar3;
  if (pSVar4 != (System_Func_long__string__o *)0x0) {
    pNVar6 = (__this->fields).moneyCount;
    pSVar2 = (System_String_o *)
             (*(code *)(pSVar4->fields).super.super.invoke_impl)
                       ((pSVar4->fields).super.super.method_code,iVar3,
                        (pSVar4->fields).super.super.method);
    if (pNVar6 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
      Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar6,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0322b968:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AddListener(UnityAction IELDNEAAPBE)  [RVA 0x312B96C]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$AddListener @ RVA 0x312B96C

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__AddListener
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,
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


// ===== public void VisibleExpAndMoney(bool CCOCAIEPCOJ)  [RVA 0x312B3EC]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$VisibleExpAndMoney @ RVA 0x312B3EC

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__VisibleExpAndMoney
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,bool CCOCAIEPCOJ,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_Func_long__string__o *pSVar4;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar5;
  
  if ((DAT_04566695 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566695 = 1;
  }
  pNVar5 = (__this->fields).exp;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).exp;
    pSVar2 = System_Int64__ToString((int64_t)&(__this->fields).LOGNCHJEHMN,(MethodInfo *)0x0);
    if (pNVar5 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) goto LAB_0322b52c;
    Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar5,pSVar2,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).exp;
    if ((pNVar5 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0322b52c;
    UnityEngine_GameObject__SetActive(pUVar3,CCOCAIEPCOJ,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields).moneyCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pSVar4 = (__this->fields).BHBICCNLODE;
  if (pSVar4 != (System_Func_long__string__o *)0x0) {
    pNVar5 = (__this->fields).moneyCount;
    pSVar2 = (System_String_o *)
             (*(code *)(pSVar4->fields).super.super.invoke_impl)
                       ((pSVar4->fields).super.super.method_code,(__this->fields).PGGDJIGFIHK,
                        (pSVar4->fields).super.super.method);
    if (pNVar5 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
      Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar5,pSVar2,(MethodInfo *)0x0);
      pNVar5 = (__this->fields).moneyCount;
      if ((pNVar5 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,CCOCAIEPCOJ,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0322b52c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ICONPKJNHCP()  [RVA 0x312B988]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$ICONPKJNHCP @ RVA 0x312B988

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__ICONPKJNHCP
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *pDVar2;
  DG_Tweening_Core_DOGetter_long__o *pDVar3;
  DG_Tweening_Core_DOSetter_long__o *pDVar4;
  DG_Tweening_Core_TweenerCore_long__long__NoOptions__o *pDVar5;
  DG_Tweening_TweenCallback_o *callback;
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *extraout_x1;
  DG_Tweening_Sequence_o **ppDVar6;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar7;
  int64_t endValue;
  float fVar8;
  float fVar9;
  
  if ((DAT_04566696 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<long>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<long>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ExpAndMoneyLine_GEPPKNKMHEE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ExpAndMoneyLine_GOPCEIJEELD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ExpAndMoneyLine_IGFOCPCDHJN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ExpAndMoneyLine_LGKAMGAJOCJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ExpAndMoneyLine_OOFDHGENFIG__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04566696 = 1;
    method = extraout_x1;
  }
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DG_Tweening_DOTween_TypeInfo,method);
  }
  pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  ppDVar6 = &(__this->fields).HCLACPMIFEB;
  *ppDVar6 = pDVar2;
  thunk_FUN_01c20e04(ppDVar6,pDVar2);
  pNVar7 = (__this->fields).moneyCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields).exp;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pDVar3 = (DG_Tweening_Core_DOGetter_long__o *)
               thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<long>_TypeInfo);
      DG_Tweening_Core_DOGetter<long>___ctor();
      pDVar4 = (DG_Tweening_Core_DOSetter_long__o *)
               thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<long>_TypeInfo);
      DG_Tweening_Core_DOSetter<long>___ctor();
      endValue = (__this->fields).ODEAKOGFMPE;
      fVar8 = (__this->fields).moneyAddTime;
      fVar9 = (__this->fields).HIPCFGDMJGF;
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar5 = DG_Tweening_DOTween__To(pDVar3,pDVar4,endValue,fVar8 + fVar9,(MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__Append
                ((__this->fields).HCLACPMIFEB,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
      pDVar3 = (DG_Tweening_Core_DOGetter_long__o *)
               thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<long>_TypeInfo);
      DG_Tweening_Core_DOGetter<long>___ctor();
      pDVar4 = (DG_Tweening_Core_DOSetter_long__o *)
               thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<long>_TypeInfo);
      DG_Tweening_Core_DOSetter<long>___ctor();
      pDVar5 = DG_Tweening_DOTween__To
                         (pDVar3,pDVar4,(__this->fields).PBPKEPIIAEJ,
                          (__this->fields).moneyAddTime + (__this->fields).HIPCFGDMJGF,
                          (MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__Join
                ((__this->fields).HCLACPMIFEB,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
      pDVar2 = (__this->fields).HCLACPMIFEB;
      callback = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,callback,(MethodInfo *)0x0);
      return;
    }
  }
  __this_00 = (__this->fields).JLKPBAGACID;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void StartAnimation()  [RVA 0x312BC50]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$StartAnimation @ RVA 0x312BC50

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__StartAnimation
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *in_x2;
  
  if ((__this->fields).ABIOEEDDMJN == false) {
    Nekki_SF2_GUI_Fight_ExpAndMoneyLine__ICONPKJNHCP(__this,method);
    return;
  }
  Nekki_SF2_GUI_Fight_ExpAndMoneyLine__VisibleExpAndMoney(__this,true,in_x2);
  __this_00 = (__this->fields).JLKPBAGACID;
  (__this->fields).ABIOEEDDMJN = false;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x312BC94]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$.ctor @ RVA 0x312BC94

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine___ctor
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566697 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04566697 = 1;
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


// ===== private void GEPPKNKMHEE()  [RVA 0x312BD00]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$GEPPKNKMHEE @ RVA 0x312BD00

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__GEPPKNKMHEE
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,MethodInfo *method)

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


// ===== public void UpdateVideoRewardMoney(long CBBJMNGHMIF)  [RVA 0x312BD1C]
// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$UpdateVideoRewardMoney @ RVA 0x312BD1C

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__UpdateVideoRewardMoney
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,int64_t CBBJMNGHMIF,MethodInfo *method
               )

{
  MethodInfo *method_00;
  
  (__this->fields).HIPCFGDMJGF = 2.0;
  (__this->fields).ODEAKOGFMPE = (__this->fields).ODEAKOGFMPE + CBBJMNGHMIF;
  Nekki_SF2_GUI_Fight_ExpAndMoneyLine__ICONPKJNHCP(__this,(MethodInfo *)CBBJMNGHMIF);
  Nekki_SF2_GUI_Fight_ExpAndMoneyLine__CMCCFDDPKKJ(__this,method_00);
  return;
}

