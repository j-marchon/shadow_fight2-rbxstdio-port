// TypeDefIndex 1076
// Namespace: Nekki.SF2.GUI.Fight
// public class ValueLine : MonoBehaviour, MCNGELCOMNG
// Fields:
//   private LabelAlias textLabel; // 0x20
//   private IconAndText valueLabel; // 0x28
//   private Vector2 basePos; // 0x30
//   private float textMoveTime; // 0x38
//   private float valueAddTime; // 0x3C
//   private Vector2 LGEHFOCNFGF; // 0x40
//   private long CFJPINKJPOD; // 0x48
//   private long MCFPIEOBLLM; // 0x50
//   private bool LAJBMFKIADL; // 0x58
//   private Sequence NPGLPGLADBF; // 0x60
//   private Sequence FNMDIKCCJAN; // 0x68
//   private UnityEvent JLKPBAGACID; // 0x70

// ===== private void EILGKEOFAJE()  [RVA 0x30DEE40]
// Nekki.SF2.GUI.Fight.ValueLine$$EILGKEOFAJE @ RVA 0x30DEE40

void Nekki_SF2_GUI_Fight_ValueLine__EILGKEOFAJE
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar2;
  
                    /* try { // try from 031dee5c to 032dee67 has its CatchHandler @ 031dea20 */
  if ((DAT_0456638a & 1) == 0) {
                    /* try { // try from 031dee68 to 032dee6f has its CatchHandler @ 031dee70 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031dedf4 with catch @ 031dee70
                       catch(type#2 @ 00000000) { ... } // from try @ 031dee68 with catch @ 031dee70
                        */
    DAT_0456638a = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).valueLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).valueLabel;
    if ((pNVar2 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void Init(string EHNFGMGKCHO, long CJNHFNHJHPE, Nullable<Color> IOHGBEHDHDP)  [RVA 0x30DEED4]
// Nekki.SF2.GUI.Fight.ValueLine$$Init @ RVA 0x30DEED4

void Nekki_SF2_GUI_Fight_ValueLine__Init
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,System_String_o *EHNFGMGKCHO,
               int64_t CJNHFNHJHPE,System_Nullable_Color__o *IOHGBEHDHDP,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_NumberFormatInfo_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *CJNHFNHJHPE_00;
  UnityEngine_GameObject_o *__this_01;
  int64_t *__this_02;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  UnityEngine_Color_o EFJKPCADGJH;
  UnityEngine_Vector3_o UVar5;
  
  if ((DAT_0456638b & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Color>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Color>_get_Value__);
    FUN_01bab630(&System_Globalization_NumberFormatInfo_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_9281/*"N0"*/);
    DAT_0456638b = 1;
  }
  __this_02 = &(__this->fields).MCFPIEOBLLM;
  *__this_02 = 0;
  (__this->fields).LAJBMFKIADL = true;
  (__this->fields).CFJPINKJPOD = CJNHFNHJHPE;
  __this_00 = (System_Globalization_NumberFormatInfo_o *)
              thunk_FUN_01bda818(System_Globalization_NumberFormatInfo_TypeInfo);
  System_Globalization_NumberFormatInfo___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (System_Globalization_NumberFormatInfo_o *)0x0) goto LAB_031df104;
  System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
            (__this_00,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
  pNVar4 = (__this->fields).textLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && (bVar1 = System_String__IsNullOrEmpty(EHNFGMGKCHO,(MethodInfo *)0x0), !bVar1)) {
    pNVar4 = (__this->fields).textLabel;
    if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_031df104;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,EHNFGMGKCHO,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).textLabel;
    if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_031df104;
    UVar5 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).textLabel;
    (__this->fields).LGEHFOCNFGF.fields.x = UVar5.fields.x;
    (__this->fields).LGEHFOCNFGF.fields.y = UVar5.fields.y;
    if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_031df104;
    UVar5.fields.z = 0.0;
    UVar5.fields._0_8_ = (__this->fields).basePos.fields;
    UnityEngine_Transform__set_localPosition(pUVar2,UVar5,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).valueLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 031df058 to 032df1cb has its CatchHandler @ 031df058
                       catch() { ... } // from try @ 031df058 with catch @ 031df058
                       catch() { ... } // from try @ 031df2e8 with catch @ 031df058
                       catch() { ... } // from try @ 031df3c0 with catch @ 031df058
                       catch() { ... } // from try @ 031df3c8 with catch @ 031df058
                       catch() { ... } // from try @ 031df484 with catch @ 031df058 */
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).valueLabel;
  CJNHFNHJHPE_00 =
       System_Int64__ToString
                 ((int64_t)__this_02,StringLiteral_9281/*"N0"*/,(System_IFormatProvider_o *)__this_00,
                  (MethodInfo *)0x0);
  if (pNVar3 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
    Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar3,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    if ((IOHGBEHDHDP->fields).hasValue != false) {
      pNVar3 = (__this->fields).valueLabel;
      EFJKPCADGJH = System_Nullable<Color>__get_Value
                              (IOHGBEHDHDP,Method_System_Nullable<Color>_get_Value__);
      if (pNVar3 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) goto LAB_031df104;
      Nekki_SF2_GUI_Fight_IconAndText__SetTextColor(pNVar3,EFJKPCADGJH,(MethodInfo *)0x0);
    }
    pNVar3 = (__this->fields).valueLabel;
    if ((pNVar3 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_031df104:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KCHPGFNJJPA()  [RVA 0x30DF108]
// Nekki.SF2.GUI.Fight.ValueLine$$KCHPGFNJJPA @ RVA 0x30DF108

void Nekki_SF2_GUI_Fight_ValueLine__KCHPGFNJJPA
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Globalization_NumberFormatInfo_o *__this_01;
  DG_Tweening_Sequence_o *pDVar2;
  DG_Tweening_Core_DOGetter_long__o *getter;
  DG_Tweening_Core_DOSetter_long__o *setter;
  DG_Tweening_Core_TweenerCore_long__long__NoOptions__o *t;
  DG_Tweening_TweenCallback_o *callback;
  UnityEngine_Events_UnityEvent_o *__this_02;
  MethodInfo *extraout_x1;
  DG_Tweening_Sequence_o **ppDVar3;
  Nekki_SF2_GUI_Fight_IconAndText_o *x;
  int64_t endValue;
  float duration;
  
  if ((DAT_0456638c & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<long>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<long>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC_FBJDHDNHOAC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC_JFODEOJOHGB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC_NCOHGDFHGHK__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC_TypeInfo);
    FUN_01bab630(&System_Globalization_NumberFormatInfo_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    DAT_0456638c = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC_TypeInfo,method);
                    /* try { // try from 031df1cc to 032df1f3 has its CatchHandler @ 031df3dc */
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_01 = (System_Globalization_NumberFormatInfo_o *)
                thunk_FUN_01bda818(System_Globalization_NumberFormatInfo_TypeInfo);
    System_Globalization_NumberFormatInfo___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Globalization_NumberFormatInfo_o *)0x0) {
                    /* try { // try from 031df228 to 032df253 has its CatchHandler @ 031df3d8 */
      System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
                (__this_01,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
      __this_00[1].monitor = __this_01;
      thunk_FUN_01c20e04(&__this_00[1].monitor,__this_01);
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      ppDVar3 = &(__this->fields).FNMDIKCCJAN;
      *ppDVar3 = pDVar2;
      thunk_FUN_01c20e04(ppDVar3,pDVar2);
      x = (__this->fields).valueLabel;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 031df288 to 032df2e7 has its CatchHandler @ 031df3e4 */
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        getter = (DG_Tweening_Core_DOGetter_long__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<long>_TypeInfo);
        DG_Tweening_Core_DOGetter<long>___ctor();
        setter = (DG_Tweening_Core_DOSetter_long__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<long>_TypeInfo);
                    /* try { // try from 031df2e8 to 032df3b3 has its CatchHandler @ 031df058 */
        DG_Tweening_Core_DOSetter<long>___ctor();
        endValue = (__this->fields).CFJPINKJPOD;
        duration = (__this->fields).valueAddTime;
        if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        t = DG_Tweening_DOTween__To(getter,setter,endValue,duration,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append
                  (*ppDVar3,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
        pDVar2 = *ppDVar3;
        callback = (DG_Tweening_TweenCallback_o *)
                   thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,callback,(MethodInfo *)0x0);
        return;
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


// ===== public void FinishAnimation()  [RVA 0x30DF3B4]
// Nekki.SF2.GUI.Fight.ValueLine$$FinishAnimation @ RVA 0x30DF3B4

void Nekki_SF2_GUI_Fight_ValueLine__FinishAnimation
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_NumberFormatInfo_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  int64_t *__this_03;
  DG_Tweening_Sequence_o **ppDVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar4;
  UnityEngine_Vector3_o value;
  
                    /* try { // try from 031df3b4 to 032df3b7 has its CatchHandler @ 031df3d4 */
                    /* try { // try from 031df3b8 to 032df3bf has its CatchHandler @ 031df3e0 */
                    /* try { // try from 031df3c0 to 032df3c3 has its CatchHandler @ 031df058 */
                    /* try { // try from 031df3c4 to 032df3c7 has its CatchHandler @ 031df3d0 */
                    /* try { // try from 031df3c8 to 032df3fb has its CatchHandler @ 031df058 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031df3c4 with catch @ 031df3d0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031df3b4 with catch @ 031df3d4
                        */
  if ((DAT_0456638d & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031df228 with catch @ 031df3d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031df1cc with catch @ 031df3dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031df3b8 with catch @ 031df3e0
                        */
    FUN_01bab630(&System_Globalization_NumberFormatInfo_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031df288 with catch @ 031df3e4
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
                    /* try { // try from 031df3fc to 032df3ff has its CatchHandler @ 031df40c */
    FUN_01bab630(&StringLiteral_9281/*"N0"*/);
                    /* catch() { ... } // from try @ 031df3fc with catch @ 031df40c */
    DAT_0456638d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Globalization_NumberFormatInfo_o *)
              thunk_FUN_01bda818(System_Globalization_NumberFormatInfo_TypeInfo,method);
                    /* try { // try from 031df41c to 032df483 has its CatchHandler @ 031df498 */
  System_Globalization_NumberFormatInfo___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Globalization_NumberFormatInfo_o *)0x0) {
    System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
              (__this_00,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
    ppDVar2 = &(__this->fields).NPGLPGLADBF;
    if (*ppDVar2 != (DG_Tweening_Sequence_o *)0x0) {
      DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar2,false,(MethodInfo *)0x0);
      *ppDVar2 = (DG_Tweening_Sequence_o *)0x0;
      thunk_FUN_01c20e04(ppDVar2,0);
    }
    ppDVar2 = &(__this->fields).FNMDIKCCJAN;
    if (*ppDVar2 != (DG_Tweening_Sequence_o *)0x0) {
                    /* try { // try from 031df484 to 032df48f has its CatchHandler @ 031df058 */
      DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar2,false,(MethodInfo *)0x0);
                    /* try { // try from 031df490 to 032df497 has its CatchHandler @ 031df498 */
      *ppDVar2 = (DG_Tweening_Sequence_o *)0x0;
      thunk_FUN_01c20e04(ppDVar2,0);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031df41c with catch @ 031df498
                       catch(type#2 @ 00000000) { ... } // from try @ 031df490 with catch @ 031df498
                        */
    pNVar3 = (__this->fields).textLabel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).textLabel;
      if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (__this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_031df584;
      value.fields.z = 0.0;
      value.fields._0_8_ = (__this->fields).LGEHFOCNFGF.fields;
      UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
    }
    pNVar4 = (__this->fields).valueLabel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar4 = (__this->fields).valueLabel;
    if ((pNVar4 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
      __this_03 = &(__this->fields).MCFPIEOBLLM;
      *__this_03 = (__this->fields).CFJPINKJPOD;
      pNVar4 = (__this->fields).valueLabel;
      CJNHFNHJHPE = System_Int64__ToString
                              ((int64_t)__this_03,StringLiteral_9281/*"N0"*/,
                               (System_IFormatProvider_o *)__this_00,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
        Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_031df584:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DHFJNHPCJNL()  [RVA 0x30DF588]
// Nekki.SF2.GUI.Fight.ValueLine$$DHFJNHPCJNL @ RVA 0x30DF588

void Nekki_SF2_GUI_Fight_ValueLine__DHFJNHPCJNL
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,MethodInfo *method)

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


// ===== public void RemoveListener(UnityAction IELDNEAAPBE)  [RVA 0x30DF5A4]
// Nekki.SF2.GUI.Fight.ValueLine$$RemoveListener @ RVA 0x30DF5A4

void Nekki_SF2_GUI_Fight_ValueLine__RemoveListener
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,
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


// ===== public void StartAnimation()  [RVA 0x30DF5C0]
// Nekki.SF2.GUI.Fight.ValueLine$$StartAnimation @ RVA 0x30DF5C0

void Nekki_SF2_GUI_Fight_ValueLine__StartAnimation
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,MethodInfo *method)

{
  if ((__this->fields).LAJBMFKIADL != false) {
    Nekki_SF2_GUI_Fight_ValueLine__NFFKNHDMGJA(__this,method);
    (__this->fields).LAJBMFKIADL = false;
    return;
  }
  Nekki_SF2_GUI_Fight_ValueLine__KCHPGFNJJPA(__this,method);
  return;
}


// ===== public void AddListener(UnityAction IELDNEAAPBE)  [RVA 0x30DF778]
// Nekki.SF2.GUI.Fight.ValueLine$$AddListener @ RVA 0x30DF778

void Nekki_SF2_GUI_Fight_ValueLine__AddListener
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,
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


// ===== public void .ctor()  [RVA 0x30DF794]
// Nekki.SF2.GUI.Fight.ValueLine$$.ctor @ RVA 0x30DF794

void Nekki_SF2_GUI_Fight_ValueLine___ctor
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456638e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_0456638e = 1;
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


// ===== private void NFFKNHDMGJA()  [RVA 0x30DF5F0]
// Nekki.SF2.GUI.Fight.ValueLine$$NFFKNHDMGJA @ RVA 0x30DF5F0

void Nekki_SF2_GUI_Fight_ValueLine__NFFKNHDMGJA
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,MethodInfo *method)

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
  
  if ((DAT_0456638f & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ValueLine_DHFJNHPCJNL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ValueLine_EILGKEOFAJE__);
    DAT_0456638f = 1;
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

