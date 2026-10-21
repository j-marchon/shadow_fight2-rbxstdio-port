// TypeDefIndex 2516
// Namespace: Nekki.SF2.GUI.Fight
// public class TextLine : MonoBehaviour, MCNGELCOMNG
// Fields:
//   private LabelAlias textLabel; // 0x20
//   private LabelAlias statValue; // 0x28
//   private Vector2 basePos; // 0x30
//   private float textMoveTime; // 0x38
//   private Vector2 LGEHFOCNFGF; // 0x3C
//   private string CFJPINKJPOD; // 0x48
//   private bool LAJBMFKIADL; // 0x50
//   private Sequence NPGLPGLADBF; // 0x58
//   private UnityEvent JLKPBAGACID; // 0x60

// ===== public void AddListener(UnityAction IELDNEAAPBE)  [RVA 0x338E3D4]
// Nekki.SF2.GUI.Fight.TextLine$$AddListener @ RVA 0x338E3D4

void Nekki_SF2_GUI_Fight_TextLine__AddListener
               (Nekki_SF2_GUI_Fight_TextLine_o *__this,UnityEngine_Events_UnityAction_o *IELDNEAAPBE
               ,MethodInfo *method)

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


// ===== private void MKAJPEEDCCI()  [RVA 0x338E3F0]
// Nekki.SF2.GUI.Fight.TextLine$$MKAJPEEDCCI @ RVA 0x338E3F0

void Nekki_SF2_GUI_Fight_TextLine__MKAJPEEDCCI
               (Nekki_SF2_GUI_Fight_TextLine_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).statValue;
  if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FinishAnimation()  [RVA 0x338E41C]
// Nekki.SF2.GUI.Fight.TextLine$$FinishAnimation @ RVA 0x338E41C

void Nekki_SF2_GUI_Fight_TextLine__FinishAnimation
               (Nekki_SF2_GUI_Fight_TextLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  DG_Tweening_Sequence_o **ppDVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567c00 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c00 = 1;
    method = extraout_x1;
  }
  ppDVar2 = &(__this->fields).NPGLPGLADBF;
  if (*ppDVar2 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar2,false,(MethodInfo *)0x0);
    *ppDVar2 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar2,0);
    method = extraout_x1_00;
  }
  pNVar3 = (__this->fields).textLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).textLabel;
    if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_0348e544;
    value.fields.z = 0.0;
    value.fields._0_8_ = (__this->fields).LGEHFOCNFGF.fields;
    UnityEngine_Transform__set_localPosition(__this_00,value,(MethodInfo *)0x0);
  }
  if ((__this->fields).CFJPINKJPOD != (System_String_o *)0x0) {
    pNVar3 = (__this->fields).statValue;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).statValue;
      if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).statValue;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0348e534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                    (pNVar3,(__this->fields).CFJPINKJPOD,(pNVar3->klass->vtable)._75_set_text.method
                    );
          return;
        }
      }
LAB_0348e544:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private void NAIMKJJOJBM()  [RVA 0x338E548]
// Nekki.SF2.GUI.Fight.TextLine$$NAIMKJJOJBM @ RVA 0x338E548

void Nekki_SF2_GUI_Fight_TextLine__NAIMKJJOJBM
               (Nekki_SF2_GUI_Fight_TextLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_04567c01 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c01 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).statValue;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).statValue;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,(__this->fields).CFJPINKJPOD,(pNVar2->klass->vtable)._75_set_text.method);
      __this_00 = (__this->fields).JLKPBAGACID;
      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void ABMBPAFIICE()  [RVA 0x338E5E8]
// Nekki.SF2.GUI.Fight.TextLine$$ABMBPAFIICE @ RVA 0x338E5E8

void Nekki_SF2_GUI_Fight_TextLine__ABMBPAFIICE
               (Nekki_SF2_GUI_Fight_TextLine_o *__this,MethodInfo *method)

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


// ===== public void .ctor()  [RVA 0x338E604]
// Nekki.SF2.GUI.Fight.TextLine$$.ctor @ RVA 0x338E604

void Nekki_SF2_GUI_Fight_TextLine___ctor(Nekki_SF2_GUI_Fight_TextLine_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c02 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04567c02 = 1;
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


// ===== public void RemoveListener(UnityAction IELDNEAAPBE)  [RVA 0x338E670]
// Nekki.SF2.GUI.Fight.TextLine$$RemoveListener @ RVA 0x338E670

void Nekki_SF2_GUI_Fight_TextLine__RemoveListener
               (Nekki_SF2_GUI_Fight_TextLine_o *__this,UnityEngine_Events_UnityAction_o *IELDNEAAPBE
               ,MethodInfo *method)

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


// ===== private void NFFKNHDMGJA()  [RVA 0x338E68C]
// Nekki.SF2.GUI.Fight.TextLine$$NFFKNHDMGJA @ RVA 0x338E68C

void Nekki_SF2_GUI_Fight_TextLine__NFFKNHDMGJA
               (Nekki_SF2_GUI_Fight_TextLine_o *__this,MethodInfo *method)

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
  
  if ((DAT_04567c03 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_TextLine_ABMBPAFIICE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_TextLine_MKAJPEEDCCI__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04567c03 = 1;
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


// ===== public void Init(string EHNFGMGKCHO, string CJNHFNHJHPE, string LAPCDGMAIAI = "", Nullable<Color> IOHGBEHDHDP)  [RVA 0x338E814]
// Nekki.SF2.GUI.Fight.TextLine$$Init @ RVA 0x338E814

void Nekki_SF2_GUI_Fight_TextLine__Init
               (Nekki_SF2_GUI_Fight_TextLine_o *__this,System_String_o *EHNFGMGKCHO,
               System_String_o *CJNHFNHJHPE,System_String_o *LAPCDGMAIAI,
               System_Nullable_Color__o *IOHGBEHDHDP,MethodInfo *method)

{
  bool bVar1;
  System_String_o *arg1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  System_String_o **ppSVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Color_o UVar6;
  
  if ((DAT_04567c04 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Color>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Color>_get_Value__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_22230/*"{"*/);
    FUN_01bab630(&StringLiteral_22448/*"{0}{1}"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    DAT_04567c04 = 1;
  }
  ppSVar3 = &(__this->fields).CFJPINKJPOD;
  *ppSVar3 = CJNHFNHJHPE;
  (__this->fields).LAJBMFKIADL = true;
  thunk_FUN_01c20e04(ppSVar3,CJNHFNHJHPE);
  pNVar4 = (__this->fields).textLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && (bVar1 = System_String__IsNullOrEmpty(EHNFGMGKCHO,(MethodInfo *)0x0), !bVar1)) {
    if (LAPCDGMAIAI != (System_String_o *)0x0) {
      arg1 = System_String__Concat
                       (StringLiteral_22230/*"{"*/,LAPCDGMAIAI,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0);
      EHNFGMGKCHO = System_String__Format
                              (StringLiteral_22448/*"{0}{1}"*/,(Il2CppObject *)EHNFGMGKCHO,(Il2CppObject *)arg1,
                               (MethodInfo *)0x0);
    }
    pNVar4 = (__this->fields).textLabel;
    if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0348ea54;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,EHNFGMGKCHO,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).textLabel;
    if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_0348ea54;
    UVar5 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).textLabel;
    (__this->fields).LGEHFOCNFGF.fields.x = UVar5.fields.x;
    (__this->fields).LGEHFOCNFGF.fields.y = UVar5.fields.y;
    if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_0348ea54;
    UVar5.fields.z = 0.0;
    UVar5.fields._0_8_ = (__this->fields).basePos.fields;
    UnityEngine_Transform__set_localPosition(pUVar2,UVar5,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields).statValue;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar4 = (__this->fields).statValue;
  if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
              (pNVar4,*ppSVar3,(pNVar4->klass->vtable)._75_set_text.method);
    if ((IOHGBEHDHDP->fields).hasValue != false) {
      pNVar4 = (__this->fields).statValue;
      UVar6 = System_Nullable<Color>__get_Value
                        (IOHGBEHDHDP,Method_System_Nullable<Color>_get_Value__);
      if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0348ea54;
      (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                (UVar6.fields.r,UVar6.fields.g,UVar6.fields.b,UVar6.fields.a,pNVar4,
                 (pNVar4->klass->vtable)._23_set_color.method);
    }
    pNVar4 = (__this->fields).statValue;
    if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0348ea54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void StartAnimation()  [RVA 0x338EA58]
// Nekki.SF2.GUI.Fight.TextLine$$StartAnimation @ RVA 0x338EA58

void Nekki_SF2_GUI_Fight_TextLine__StartAnimation
               (Nekki_SF2_GUI_Fight_TextLine_o *__this,MethodInfo *method)

{
  if ((__this->fields).LAJBMFKIADL != false) {
    Nekki_SF2_GUI_Fight_TextLine__NFFKNHDMGJA(__this,method);
    (__this->fields).LAJBMFKIADL = false;
    return;
  }
  Nekki_SF2_GUI_Fight_TextLine__NAIMKJJOJBM(__this,method);
  return;
}

