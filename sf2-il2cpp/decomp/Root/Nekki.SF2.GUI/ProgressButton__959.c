// TypeDefIndex 959
// Namespace: Nekki.SF2.GUI
// public class ProgressButton : ResolutionButton
// Fields:
//   private Image _picCircleProgressBar; // 0x1A8
//   private Image _picComplete; // 0x1B0
//   private Image _picCompleteEffect; // 0x1B8
//   private float LNEKHPJLPOO; // 0x1C0
//   private float FIJAPKDMBAL; // 0x1C4
//   private float OFJCMEKNOBA; // 0x1C8
//   private float MPOILFINEKH; // 0x1CC
//   private float NMCDFKMOKGI; // 0x1D0
//   private float GIAEIHPHEMB; // 0x1D4
//   private float GNFLLECKGFP; // 0x1D8
//   private const float IEGAGCAJGJI = 0;
//   private const float AFAOLAEMPCC = 100;
//   private float CCIKLAFHFAH; // 0x1DC
//   private float FFAANJKJBFJ; // 0x1E0
//   private float CPCHMIPKLCO; // 0x1E4
//   private Tween OGBOMAHLDKN; // 0x1E8
//   private Sequence KAICJDBACPJ; // 0x1F0

// ===== public void SetPercentage(float MGMCFABFCIF, float FKIENOGJHNN)  [RVA 0x30ADAA0]
// Nekki.SF2.GUI.ProgressButton$$SetPercentage @ RVA 0x30ADAA0

void Nekki_SF2_GUI_ProgressButton__SetPercentage
               (Nekki_SF2_GUI_ProgressButton_o *__this,float MGMCFABFCIF,float FKIENOGJHNN,
               MethodInfo *method)

{
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  float endValue;
  float fVar2;
  
  if ((DAT_045661ba & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ProgressButton_CCPHMDPNFKM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ProgressButton_PJEPCOCGGMH__);
    DAT_045661ba = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_ProgressButton__CCPABLFBFFA(__this,method);
  endValue = (__this->fields).FFAANJKJBFJ;
  fVar2 = (__this->fields).CCIKLAFHFAH;
  if (MGMCFABFCIF <= endValue) {
    endValue = MGMCFABFCIF;
  }
  if (MGMCFABFCIF < fVar2) {
    endValue = fVar2;
  }
  if ((__this->fields).CPCHMIPKLCO != endValue) {
    if (FKIENOGJHNN / 60.0 == 0.0) {
      Nekki_SF2_GUI_ProgressButton__PNJAKFADLMH(__this,endValue,method_00);
      return;
    }
    getter = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    setter = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
                    /* try { // try from 031adbc8 to 032add37 has its CatchHandler @ 031adbc8
                       catch() { ... } // from try @ 031adbc8 with catch @ 031adbc8
                       catch() { ... } // from try @ 031ade58 with catch @ 031adbc8
                       catch() { ... } // from try @ 031adf58 with catch @ 031adbc8
                       catch() { ... } // from try @ 031adfe0 with catch @ 031adbc8
                       catch() { ... } // from try @ 031ae1f4 with catch @ 031adbc8
                       catch() { ... } // from try @ 031ae208 with catch @ 031adbc8 */
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar1 = DG_Tweening_DOTween__To(getter,setter,endValue,FKIENOGJHNN / 60.0,(MethodInfo *)0x0);
    (__this->fields).OGBOMAHLDKN = (DG_Tweening_Tween_o *)pDVar1;
    thunk_FUN_01c20e04(&(__this->fields).OGBOMAHLDKN);
    return;
  }
  return;
}


// ===== public float GetPercentage()  [RVA 0x30ADDB0]
// Nekki.SF2.GUI.ProgressButton$$GetPercentage @ RVA 0x30ADDB0

float Nekki_SF2_GUI_ProgressButton__GetPercentage
                (Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
                    /* try { // try from 031addb0 to 032addbb has its CatchHandler @ 031adf80 */
  return (__this->fields).CPCHMIPKLCO;
}


// ===== public void Init()  [RVA 0x30ADDB8]
// Nekki.SF2.GUI.ProgressButton$$Init @ RVA 0x30ADDB8

void Nekki_SF2_GUI_ProgressButton__Init(Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_UI_Image_o *pUVar3;
  
                    /* try { // try from 031addc0 to 032addcb has its CatchHandler @ 031adf9c */
                    /* try { // try from 031addd0 to 032adde7 has its CatchHandler @ 031adf98 */
  if ((DAT_045661bb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661bb = 1;
    method = extraout_x1;
  }
  pUVar3 = (__this->fields)._picComplete;
                    /* try { // try from 031addf8 to 032addff has its CatchHandler @ 031adf88 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 031ade04 to 032ade1b has its CatchHandler @ 031adf7c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields)._picComplete;
                    /* try { // try from 031ade20 to 032ade43 has its CatchHandler @ 031adf8c */
    if ((pUVar3 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031ade98;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._picCompleteEffect;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031ade48 to 032ade57 has its CatchHandler @ 031adf94 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
                    /* try { // try from 031ade58 to 032ade7f has its CatchHandler @ 031adbc8 */
  if (bVar1) {
    pUVar3 = (__this->fields)._picCompleteEffect;
    if ((pUVar3 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) {
LAB_031ade98:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    method_00 = extraout_x1_01;
  }
                    /* try { // try from 031ade80 to 032ade97 has its CatchHandler @ 031adf64 */
  Nekki_SF2_GUI_ProgressButton__CCPABLFBFFA(__this,method_00);
  Nekki_SF2_GUI_ProgressButton__PNJAKFADLMH(__this,(__this->fields).CCIKLAFHFAH,method_01);
  return;
}


// ===== public void AddPercentage(float GBLKICMLIHH)  [RVA 0x30ADEB8]
// Nekki.SF2.GUI.ProgressButton$$AddPercentage @ RVA 0x30ADEB8

void Nekki_SF2_GUI_ProgressButton__AddPercentage
               (Nekki_SF2_GUI_ProgressButton_o *__this,float GBLKICMLIHH,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_ProgressButton__CCPABLFBFFA(__this,method);
                    /* try { // try from 031aded4 to 032adedf has its CatchHandler @ 031adf60 */
  Nekki_SF2_GUI_ProgressButton__PNJAKFADLMH
            (__this,(__this->fields).CPCHMIPKLCO + GBLKICMLIHH,method_00);
  return;
}


// ===== private void MJNHMBGHPFP()  [RVA 0x30ADEE4]
// Nekki.SF2.GUI.ProgressButton$$MJNHMBGHPFP @ RVA 0x30ADEE4

void Nekki_SF2_GUI_ProgressButton__MJNHMBGHPFP
               (Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Image_o *pUVar2;
  
                    /* try { // try from 031adee4 to 032adefb has its CatchHandler @ 031adf90 */
                    /* try { // try from 031adefc to 032adf03 has its CatchHandler @ 031adf78 */
  if ((DAT_045661bc & 1) == 0) {
                    /* try { // try from 031adf08 to 032adf27 has its CatchHandler @ 031adf68 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661bc = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_ProgressButton__IGFAAFAFHAE(__this,method);
  pUVar2 = (__this->fields)._picCompleteEffect;
                    /* try { // try from 031adf28 to 032adf4f has its CatchHandler @ 031adf5c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._picCompleteEffect;
                    /* try { // try from 031adf54 to 032adf57 has its CatchHandler @ 031adfac */
    if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 031adf58 to 032adfc7 has its CatchHandler @ 031adbc8 */
                    /* catch() { ... } // from try @ 031adf28 with catch @ 031adf5c */
                    /* catch() { ... } // from try @ 031aded4 with catch @ 031adf60 */
                    /* catch() { ... } // from try @ 031ade80 with catch @ 031adf64 */
                    /* catch() { ... } // from try @ 031adf08 with catch @ 031adf68 */
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031adefc with catch @ 031adf78 */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 031adeb4 with catch @ 031adf6c */
                    /* catch() { ... } // from try @ 031adea0 with catch @ 031adf70 */
                    /* catch() { ... } // from try @ 031addac with catch @ 031adf74 */
  return;
}


// ===== public void ResetPercentage()  [RVA 0x30ADE9C]
// Nekki.SF2.GUI.ProgressButton$$ResetPercentage @ RVA 0x30ADE9C

void Nekki_SF2_GUI_ProgressButton__ResetPercentage
               (Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
                    /* try { // try from 031adea0 to 032adeaf has its CatchHandler @ 031adf70 */
  Nekki_SF2_GUI_ProgressButton__CCPABLFBFFA(__this,method);
                    /* try { // try from 031adeb4 to 032adecf has its CatchHandler @ 031adf6c */
  Nekki_SF2_GUI_ProgressButton__PNJAKFADLMH(__this,(__this->fields).CCIKLAFHFAH,method_00);
  return;
}


// ===== public float get_Min()  [RVA 0x30ADFB8]
// Nekki.SF2.GUI.ProgressButton$$get_Min @ RVA 0x30ADFB8

float Nekki_SF2_GUI_ProgressButton__get_Min
                (Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
  return (__this->fields).CCIKLAFHFAH;
}


// ===== public void .ctor()  [RVA 0x30ADFC0]
// Nekki.SF2.GUI.ProgressButton$$.ctor @ RVA 0x30ADFC0

void Nekki_SF2_GUI_ProgressButton___ctor(Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
                    /* try { // try from 031adfc8 to 032adfdf has its CatchHandler @ 031ae200 */
  (__this->fields).NMCDFKMOKGI = 1.0;
  (__this->fields).OFJCMEKNOBA = 0.3;
  (__this->fields).MPOILFINEKH = 0.2;
  (__this->fields).LNEKHPJLPOO = 0.84;
  (__this->fields).FIJAPKDMBAL = 1.13;
  (__this->fields).FFAANJKJBFJ = 100.0;
                    /* try { // try from 031adfe0 to 032ae1e3 has its CatchHandler @ 031adbc8 */
  Nekki_SF2_GUI_ResolutionButton___ctor
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private float PJEPCOCGGMH()  [RVA 0x30ADFE4]
// Nekki.SF2.GUI.ProgressButton$$PJEPCOCGGMH @ RVA 0x30ADFE4

float Nekki_SF2_GUI_ProgressButton__PJEPCOCGGMH
                (Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
  return (__this->fields).CPCHMIPKLCO;
}


// ===== private void CCPHMDPNFKM(float KEFILECBPMF)  [RVA 0x30ADFEC]
// Nekki.SF2.GUI.ProgressButton$$CCPHMDPNFKM @ RVA 0x30ADFEC

void Nekki_SF2_GUI_ProgressButton__CCPHMDPNFKM
               (Nekki_SF2_GUI_ProgressButton_o *__this,float KEFILECBPMF,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *pUVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_045661bd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661bd = 1;
    method = extraout_x1;
  }
  fVar4 = (__this->fields).FFAANJKJBFJ;
  fVar5 = (__this->fields).CCIKLAFHFAH;
  pUVar3 = (__this->fields)._picComplete;
  if (KEFILECBPMF <= fVar4) {
    fVar4 = KEFILECBPMF;
  }
  if (KEFILECBPMF < fVar5) {
    fVar4 = fVar5;
  }
  (__this->fields).CPCHMIPKLCO = fVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    fVar4 = (__this->fields).CPCHMIPKLCO;
    if (fVar4 <= (__this->fields).CCIKLAFHFAH) {
      pUVar3 = (__this->fields)._picComplete;
      if ((pUVar3 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031addac;
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      fVar4 = (__this->fields).CPCHMIPKLCO;
    }
    if ((__this->fields).FFAANJKJBFJ <= fVar4) {
      pUVar3 = (__this->fields)._picComplete;
      if ((pUVar3 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031addac;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    }
  }
  pUVar3 = (__this->fields)._picCircleProgressBar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (bVar1) {
    pUVar3 = (__this->fields)._picCircleProgressBar;
    if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) {
LAB_031addac:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_UI_Image__set_fillAmount
              (pUVar3,(__this->fields).CPCHMIPKLCO / (__this->fields).FFAANJKJBFJ,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1_01;
  }
  if ((__this->fields).CPCHMIPKLCO < 100.0) {
    Nekki_SF2_GUI_ProgressButton__MJNHMBGHPFP(__this,method_00);
    return;
  }
  Nekki_SF2_GUI_ProgressButton__AAMAKOBPOBO(__this,method_00);
  return;
}


// ===== public void SetProgBarValueBorders(float PEOMJHJICCM, float GKBCJOEFFCP)  [RVA 0x30ADFF0]
// Nekki.SF2.GUI.ProgressButton$$SetProgBarValueBorders @ RVA 0x30ADFF0

void Nekki_SF2_GUI_ProgressButton__SetProgBarValueBorders
               (Nekki_SF2_GUI_ProgressButton_o *__this,float PEOMJHJICCM,float GKBCJOEFFCP,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).FFAANJKJBFJ;
  fVar2 = (__this->fields).CCIKLAFHFAH;
  (__this->fields).FFAANJKJBFJ = GKBCJOEFFCP;
  (__this->fields).CCIKLAFHFAH = PEOMJHJICCM;
  (__this->fields).CPCHMIPKLCO =
       (GKBCJOEFFCP - PEOMJHJICCM) * ((fVar1 - fVar2) / ((__this->fields).CPCHMIPKLCO - fVar2)) +
       PEOMJHJICCM;
  return;
}


// ===== protected override void Awake()  [RVA 0x30AE024]
// Nekki.SF2.GUI.ProgressButton$$Awake @ RVA 0x30AE024

void Nekki_SF2_GUI_ProgressButton__Awake(Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton__Awake
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super.super._EnableClickAnimation = false;
  return;
}


// ===== private void PNJAKFADLMH(float MGMCFABFCIF)  [RVA 0x30ADC50]
// Nekki.SF2.GUI.ProgressButton$$PNJAKFADLMH @ RVA 0x30ADC50

void Nekki_SF2_GUI_ProgressButton__PNJAKFADLMH
               (Nekki_SF2_GUI_ProgressButton_o *__this,float MGMCFABFCIF,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *pUVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_045661bd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661bd = 1;
    method = extraout_x1;
  }
  fVar4 = (__this->fields).FFAANJKJBFJ;
  fVar5 = (__this->fields).CCIKLAFHFAH;
  pUVar3 = (__this->fields)._picComplete;
  if (MGMCFABFCIF <= fVar4) {
    fVar4 = MGMCFABFCIF;
  }
  if (MGMCFABFCIF < fVar5) {
    fVar4 = fVar5;
  }
  (__this->fields).CPCHMIPKLCO = fVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    fVar4 = (__this->fields).CPCHMIPKLCO;
    if (fVar4 <= (__this->fields).CCIKLAFHFAH) {
      pUVar3 = (__this->fields)._picComplete;
      if ((pUVar3 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031addac;
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      fVar4 = (__this->fields).CPCHMIPKLCO;
    }
    if ((__this->fields).FFAANJKJBFJ <= fVar4) {
      pUVar3 = (__this->fields)._picComplete;
      if ((pUVar3 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031addac;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    }
  }
  pUVar3 = (__this->fields)._picCircleProgressBar;
                    /* try { // try from 031add38 to 032add3f has its CatchHandler @ 031adfb0 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031add4c to 032add53 has its CatchHandler @ 031adfa8 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (bVar1) {
    pUVar3 = (__this->fields)._picCircleProgressBar;
    if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) {
LAB_031addac:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031addac to 032addaf has its CatchHandler @ 031adf74 */
      FUN_01bab8c8();
    }
    UnityEngine_UI_Image__set_fillAmount
              (pUVar3,(__this->fields).CPCHMIPKLCO / (__this->fields).FFAANJKJBFJ,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1_01;
  }
                    /* try { // try from 031add74 to 032add7b has its CatchHandler @ 031adfa4 */
                    /* try { // try from 031add7c to 032add83 has its CatchHandler @ 031adfa0 */
  if ((__this->fields).CPCHMIPKLCO < 100.0) {
                    /* try { // try from 031add90 to 032add97 has its CatchHandler @ 031adf84 */
    Nekki_SF2_GUI_ProgressButton__MJNHMBGHPFP(__this,method_00);
    return;
  }
  Nekki_SF2_GUI_ProgressButton__AAMAKOBPOBO(__this,method_00);
  return;
}


// ===== private void CCPABLFBFFA()  [RVA 0x30ADC14]
// Nekki.SF2.GUI.ProgressButton$$CCPABLFBFFA @ RVA 0x30ADC14

void Nekki_SF2_GUI_ProgressButton__CCPABLFBFFA
               (Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

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


// ===== private void AAMAKOBPOBO()  [RVA 0x30AE040]
// Nekki.SF2.GUI.ProgressButton$$AAMAKOBPOBO @ RVA 0x30AE040

void Nekki_SF2_GUI_ProgressButton__AAMAKOBPOBO
               (Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  DG_Tweening_Sequence_o *pDVar3;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar4;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *pUVar6;
  
  if ((DAT_045661be & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661be = 1;
    method = extraout_x1;
  }
  pUVar6 = (__this->fields)._picCompleteEffect;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pUVar6 = (__this->fields)._picCompleteEffect;
  if ((pUVar6 != (UnityEngine_UI_Image_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._picCompleteEffect;
    if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalScale
                (pUVar2,(__this->fields).LNEKHPJLPOO,(MethodInfo *)0x0);
      Nekki_SF2_GUI_ProgressButton__IGFAAFAFHAE(__this,method_00);
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      (__this->fields).KAICJDBACPJ = pDVar3;
      thunk_FUN_01c20e04(&(__this->fields).KAICJDBACPJ);
      pDVar3 = (__this->fields).KAICJDBACPJ;
      pDVar4 = DG_Tweening_DOTweenModuleUI__DOFade
                         ((__this->fields)._picCompleteEffect,(__this->fields).NMCDFKMOKGI,
                          (__this->fields).GNFLLECKGFP,(MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__Append
                (pDVar3,(DG_Tweening_Tween_o *)pDVar4,(MethodInfo *)0x0);
      pUVar6 = (__this->fields)._picCompleteEffect;
      if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
        pDVar3 = (__this->fields).KAICJDBACPJ;
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
        pDVar5 = DG_Tweening_ShortcutExtensions__DOScale
                           (pUVar2,(__this->fields).FIJAPKDMBAL,(__this->fields).OFJCMEKNOBA,
                            (MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append
                  (pDVar3,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__AppendInterval
                  ((__this->fields).KAICJDBACPJ,(__this->fields).MPOILFINEKH,(MethodInfo *)0x0);
        pUVar6 = (__this->fields)._picCompleteEffect;
        if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
          pDVar3 = (__this->fields).KAICJDBACPJ;
          pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
          pDVar5 = DG_Tweening_ShortcutExtensions__DOScale
                             (pUVar2,(__this->fields).LNEKHPJLPOO,(__this->fields).OFJCMEKNOBA,
                              (MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__Append
                    (pDVar3,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
          pDVar3 = (__this->fields).KAICJDBACPJ;
          pDVar4 = DG_Tweening_DOTweenModuleUI__DOFade
                             ((__this->fields)._picCompleteEffect,(__this->fields).GIAEIHPHEMB,
                              (__this->fields).GNFLLECKGFP,(MethodInfo *)0x0);
                    /* try { // try from 031ae1e4 to 032ae1f3 has its CatchHandler @ 031ae1fc */
                    /* try { // try from 031ae1f4 to 032ae203 has its CatchHandler @ 031adbc8 */
          DG_Tweening_TweenSettingsExtensions__Append
                    (pDVar3,(DG_Tweening_Tween_o *)pDVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float get_Max()  [RVA 0x30AE1FC]
// Nekki.SF2.GUI.ProgressButton$$get_Max @ RVA 0x30AE1FC

float Nekki_SF2_GUI_ProgressButton__get_Max
                (Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 031ae1e4 with catch @ 031ae1fc */
                    /* catch() { ... } // from try @ 031adfc8 with catch @ 031ae200 */
  return (__this->fields).FFAANJKJBFJ;
}


// ===== private void IGFAAFAFHAE()  [RVA 0x30ADF7C]
// Nekki.SF2.GUI.ProgressButton$$IGFAAFAFHAE @ RVA 0x30ADF7C

void Nekki_SF2_GUI_ProgressButton__IGFAAFAFHAE
               (Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  DG_Tweening_Sequence_o *t;
  
                    /* catch() { ... } // from try @ 031ade04 with catch @ 031adf7c */
                    /* catch() { ... } // from try @ 031addb0 with catch @ 031adf80 */
                    /* catch() { ... } // from try @ 031add90 with catch @ 031adf84 */
  t = (__this->fields).KAICJDBACPJ;
                    /* catch() { ... } // from try @ 031addf8 with catch @ 031adf88 */
  if (t != (DG_Tweening_Sequence_o *)0x0) {
                    /* catch() { ... } // from try @ 031ade20 with catch @ 031adf8c */
                    /* catch() { ... } // from try @ 031adee4 with catch @ 031adf90 */
                    /* catch() { ... } // from try @ 031ade48 with catch @ 031adf94 */
    ppDVar1 = &(__this->fields).KAICJDBACPJ;
                    /* catch() { ... } // from try @ 031addd0 with catch @ 031adf98 */
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,false,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031addc0 with catch @ 031adf9c */
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
                    /* catch() { ... } // from try @ 031add7c with catch @ 031adfa0 */
                    /* catch() { ... } // from try @ 031add74 with catch @ 031adfa4 */
                    /* catch() { ... } // from try @ 031add4c with catch @ 031adfa8 */
                    /* catch() { ... } // from try @ 031adf54 with catch @ 031adfac */
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
                    /* catch() { ... } // from try @ 031add38 with catch @ 031adfb0 */
  return;
}

