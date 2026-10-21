// TypeDefIndex 1278
// Namespace: Nekki.SF2.GUI
// [AddComponentMenu("UI_Nekki/LabelAliasTMP")]
// public class LabelAliasTMP : TextMeshProUGUI, EAENIPPJFOG
// Fields:
//   private bool _useLocalizationFont; // 0x79D
//   private CHPMAHFBEJC _fontType; // 0x7A0
//   private bool _useLabelFontSize; // 0x7A4
//   private int _labelFontSize; // 0x7A8
//   private string _Alias; // 0x7B0
//   private bool _ToUpperCase; // 0x7B8

// ===== public bool get_UseLocalizationFont()  [RVA 0x314EEE0]
// Nekki.SF2.GUI.LabelAliasTMP$$get_UseLocalizationFont @ RVA 0x314EEE0

bool Nekki_SF2_GUI_LabelAliasTMP__get_UseLocalizationFont
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  return (bool)*(undefined1 *)((long)&(__this->fields).super.m_EnvMapMatrix.fields.m01 + 1);
}


// ===== public string get_Alias()  [RVA 0x314EEE8]
// Nekki.SF2.GUI.LabelAliasTMP$$get_Alias @ RVA 0x314EEE8

System_String_o *
Nekki_SF2_GUI_LabelAliasTMP__get_Alias(Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  return *(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12;
}


// ===== public CHPMAHFBEJC get_FontType()  [RVA 0x314EEF0]
// Nekki.SF2.GUI.LabelAliasTMP$$get_FontType @ RVA 0x314EEF0

int32_t Nekki_SF2_GUI_LabelAliasTMP__get_FontType
                  (Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  return (int32_t)(__this->fields).super.m_EnvMapMatrix.fields.m11;
}


// ===== private void HBHAKJAFIDP()  [RVA 0x314EEF8]
// Nekki.SF2.GUI.LabelAliasTMP$$HBHAKJAFIDP @ RVA 0x314EEF8

void Nekki_SF2_GUI_LabelAliasTMP__HBHAKJAFIDP
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  float local_24;
  
  if ((DAT_045667f7 & 1) == 0) {
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_045667f7 = 1;
    method = extraout_x1;
  }
  local_24 = 0.0;
  if (*(char *)&(__this->fields).super.m_EnvMapMatrix.fields.m21 != '\0') {
    fVar1 = (__this->fields).super.m_EnvMapMatrix.fields.m31;
    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KGFBAIBBNNH_TypeInfo,method);
    }
    bVar2 = KGFBAIBBNNH__MAJPEEKDPJJ((int32_t)fVar1,&local_24,(MethodInfo *)0x0);
    if (bVar2) {
                    /* try { // try from 0324ef8c to 0334f193 has its CatchHandler @ 0324ef8c
                       catch() { ... } // from try @ 0324ef8c with catch @ 0324ef8c
                       catch() { ... } // from try @ 0324f284 with catch @ 0324ef8c
                       catch() { ... } // from try @ 0324f380 with catch @ 0324ef8c
                       catch() { ... } // from try @ 0324f3c0 with catch @ 0324ef8c
                       catch() { ... } // from try @ 0324f400 with catch @ 0324ef8c */
      fVar1 = -2.1474836e+09;
      if (local_24 != INFINITY) {
        fVar1 = (float)(int)local_24;
      }
      if (UnityEngine_Mathf_TypeInfo->static_fields->Epsilon <=
          ABS(*(float *)((long)&(__this->fields).super.super.m_StyleSheet + 4) - fVar1)) {
        TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)__this,fVar1,(MethodInfo *)0x0);
        TMPro_TMP_Text__set_fontSizeMax((TMPro_TMP_Text_o *)__this,fVar1,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// ===== public bool get_UseLabelFontSize()  [RVA 0x314EFF0]
// Nekki.SF2.GUI.LabelAliasTMP$$get_UseLabelFontSize @ RVA 0x314EFF0

bool Nekki_SF2_GUI_LabelAliasTMP__get_UseLabelFontSize
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  return (bool)*(undefined1 *)&(__this->fields).super.m_EnvMapMatrix.fields.m21;
}


// ===== public void set_FontType(CHPMAHFBEJC CJNHFNHJHPE)  [RVA 0x314EFF8]
// Nekki.SF2.GUI.LabelAliasTMP$$set_FontType @ RVA 0x314EFF8

void Nekki_SF2_GUI_LabelAliasTMP__set_FontType
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields).super.m_EnvMapMatrix.fields.m11 == (float)CJNHFNHJHPE) {
    return;
  }
  (__this->fields).super.m_EnvMapMatrix.fields.m11 = (float)CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAliasTMP__GOLOBCMKJFJ(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== public void set_Alias(string CJNHFNHJHPE)  [RVA 0x314F094]
// Nekki.SF2.GUI.LabelAliasTMP$$set_Alias @ RVA 0x314F094

void Nekki_SF2_GUI_LabelAliasTMP__set_Alias
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  bVar1 = System_String__op_Equality
                    (*(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12,
                     CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  *(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).super.m_EnvMapMatrix.fields.m12,CJNHFNHJHPE);
  Nekki_SF2_GUI_LabelAliasTMP__GBPDDFOIDPG(__this,method_00);
  return;
}


// ===== public void .ctor()  [RVA 0x314F1B4]
// Nekki.SF2.GUI.LabelAliasTMP$$.ctor @ RVA 0x314F1B4

void Nekki_SF2_GUI_LabelAliasTMP___ctor(Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
                    /* try { // try from 0324f1d8 to 0334f1e3 has its CatchHandler @ 0324f384 */
  if ((DAT_045667f8 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&TMPro_TextMeshProUGUI_TypeInfo);
    DAT_045667f8 = 1;
  }
  *(undefined1 *)((long)&(__this->fields).super.m_EnvMapMatrix.fields.m01 + 1) = 1;
                    /* try { // try from 0324f208 to 0334f283 has its CatchHandler @ 0324f39c */
  *(undefined1 *)&(__this->fields).super.m_EnvMapMatrix.fields.m21 = 1;
  *(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12 =
       string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(&(__this->fields).super.m_EnvMapMatrix.fields.m12);
  if ((TMPro_TextMeshProUGUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  TMPro_TextMeshProUGUI___ctor((TMPro_TextMeshProUGUI_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void set_text(string CJNHFNHJHPE)  [RVA 0x314F24C]
// Nekki.SF2.GUI.LabelAliasTMP$$set_text @ RVA 0x314F24C

void Nekki_SF2_GUI_LabelAliasTMP__set_text
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  MethodInfo *method_00;
  
  if ((DAT_045667f9 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_045667f9 = 1;
  }
                    /* try { // try from 0324f284 to 0334f36f has its CatchHandler @ 0324ef8c */
  a = TMPro_TMP_Text__get_text((TMPro_TMP_Text_o *)__this,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__op_Equality(a,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_LabelAliasTMP__set_Alias(__this,string_TypeInfo->static_fields->Empty,method_00);
  TMPro_TMP_Text__set_text((TMPro_TMP_Text_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== public void set_UseLocalizationFont(bool CJNHFNHJHPE)  [RVA 0x314F2D8]
// Nekki.SF2.GUI.LabelAliasTMP$$set_UseLocalizationFont @ RVA 0x314F2D8

void Nekki_SF2_GUI_LabelAliasTMP__set_UseLocalizationFont
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((bool)*(char *)((long)&(__this->fields).super.m_EnvMapMatrix.fields.m01 + 1) == CJNHFNHJHPE) {
    return;
  }
  *(bool *)((long)&(__this->fields).super.m_EnvMapMatrix.fields.m01 + 1) = CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAliasTMP__GOLOBCMKJFJ(__this,(MethodInfo *)(ulong)CJNHFNHJHPE);
  return;
}


// ===== public void Clear()  [RVA 0x314F2F4]
// Nekki.SF2.GUI.LabelAliasTMP$$Clear @ RVA 0x314F2F4

void Nekki_SF2_GUI_LabelAliasTMP__Clear(Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((DAT_045667fa & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_045667fa = 1;
  }
  method_00 = (MethodInfo *)0x0;
  TMPro_TMP_Text__set_text
            ((TMPro_TMP_Text_o *)__this,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
  Nekki_SF2_GUI_LabelAliasTMP__set_Alias(__this,string_TypeInfo->static_fields->Empty,method_00);
  return;
}


// ===== private void GBPDDFOIDPG()  [RVA 0x314F0E0]
// Nekki.SF2.GUI.LabelAliasTMP$$GBPDDFOIDPG @ RVA 0x314F0E0

void Nekki_SF2_GUI_LabelAliasTMP__GBPDDFOIDPG
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  char cVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *pSVar3;
  
  if ((DAT_045667fb & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_045667fb = 1;
  }
  bVar2 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if ((!bVar2) &&
     (bVar2 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__), bVar2)) {
    bVar2 = PCOEHCPGBBG__EDHHJAMCOJH
                      (*(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12,
                       (MethodInfo *)0x0);
    method_00 = extraout_x1;
    if (!bVar2) {
      pSVar3 = *(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12;
      cVar1 = *(char *)&(__this->fields).super.m_EnvMapMatrix.fields.m32;
      if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = KGFBAIBBNNH__KKFDNDIPEHH(pSVar3,cVar1 != '\0',(MethodInfo *)0x0);
      TMPro_TMP_Text__set_text((TMPro_TMP_Text_o *)__this,pSVar3,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
    }
                    /* try { // try from 0324f194 to 0334f19b has its CatchHandler @ 0324f394 */
    Nekki_SF2_GUI_LabelAliasTMP__GOLOBCMKJFJ(__this,method_00);
    Nekki_SF2_GUI_LabelAliasTMP__HBHAKJAFIDP(__this,method_01);
    return;
  }
                    /* try { // try from 0324f1a8 to 0334f1c7 has its CatchHandler @ 0324f398 */
  return;
}


// ===== private void JKGKKANLCGA(Unit HOKBHLPPCAH)  [RVA 0x314F35C]
// Nekki.SF2.GUI.LabelAliasTMP$$JKGKKANLCGA @ RVA 0x314F35C

void Nekki_SF2_GUI_LabelAliasTMP__JKGKKANLCGA(Nekki_SF2_GUI_LabelAliasTMP_o *__this)

{
  char cVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method;
  MethodInfo *method_00;
  System_String_o *pSVar3;
  
  if ((DAT_045667fb & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_045667fb = 1;
  }
  bVar2 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if ((!bVar2) &&
     (bVar2 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__), bVar2)) {
    bVar2 = PCOEHCPGBBG__EDHHJAMCOJH
                      (*(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12,
                       (MethodInfo *)0x0);
    method = extraout_x1;
    if (!bVar2) {
      pSVar3 = *(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12;
      cVar1 = *(char *)&(__this->fields).super.m_EnvMapMatrix.fields.m32;
      if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = KGFBAIBBNNH__KKFDNDIPEHH(pSVar3,cVar1 != '\0',(MethodInfo *)0x0);
      TMPro_TMP_Text__set_text((TMPro_TMP_Text_o *)__this,pSVar3,(MethodInfo *)0x0);
      method = extraout_x1_00;
    }
    Nekki_SF2_GUI_LabelAliasTMP__GOLOBCMKJFJ(__this,method);
    Nekki_SF2_GUI_LabelAliasTMP__HBHAKJAFIDP(__this,method_00);
    return;
  }
  return;
}


// ===== public void set_UseLabelFontSize(bool CJNHFNHJHPE)  [RVA 0x314F360]
// Nekki.SF2.GUI.LabelAliasTMP$$set_UseLabelFontSize @ RVA 0x314F360

void Nekki_SF2_GUI_LabelAliasTMP__set_UseLabelFontSize
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((bool)*(char *)&(__this->fields).super.m_EnvMapMatrix.fields.m21 == CJNHFNHJHPE) {
                    /* try { // try from 0324f370 to 0334f373 has its CatchHandler @ 0324f38c */
    return;
  }
                    /* try { // try from 0324f374 to 0334f377 has its CatchHandler @ 0324f388 */
  *(bool *)&(__this->fields).super.m_EnvMapMatrix.fields.m21 = CJNHFNHJHPE;
                    /* try { // try from 0324f378 to 0334f37f has its CatchHandler @ 0324f390 */
  Nekki_SF2_GUI_LabelAliasTMP__HBHAKJAFIDP(__this,(MethodInfo *)(ulong)CJNHFNHJHPE);
  return;
}


// ===== private void GOLOBCMKJFJ()  [RVA 0x314F010]
// Nekki.SF2.GUI.LabelAliasTMP$$GOLOBCMKJFJ @ RVA 0x314F010

void Nekki_SF2_GUI_LabelAliasTMP__GOLOBCMKJFJ
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  float BMLIMNBPGIJ;
  bool bVar1;
  MethodInfo *extraout_x1;
  TMPro_TMP_FontAsset_o *local_18;
  
  if ((DAT_045667fc & 1) == 0) {
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_045667fc = 1;
    method = extraout_x1;
  }
  local_18 = (TMPro_TMP_FontAsset_o *)0x0;
  if (*(char *)((long)&(__this->fields).super.m_EnvMapMatrix.fields.m01 + 1) != '\0') {
    BMLIMNBPGIJ = (__this->fields).super.m_EnvMapMatrix.fields.m11;
    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KGFBAIBBNNH_TypeInfo,method);
    }
    bVar1 = KGFBAIBBNNH__HLFAHBDLOHL((int32_t)BMLIMNBPGIJ,&local_18,(MethodInfo *)0x0);
    if (bVar1) {
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)__this,local_18,(MethodInfo *)0x0);
    }
  }
  return;
}


// ===== public int get_LabelFontSize()  [RVA 0x314F37C]
// Nekki.SF2.GUI.LabelAliasTMP$$get_LabelFontSize @ RVA 0x314F37C

int32_t Nekki_SF2_GUI_LabelAliasTMP__get_LabelFontSize
                  (Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
                    /* try { // try from 0324f380 to 0334f3bb has its CatchHandler @ 0324ef8c */
  return (int32_t)(__this->fields).super.m_EnvMapMatrix.fields.m31;
}


// ===== protected override void Awake()  [RVA 0x314F384]
// Nekki.SF2.GUI.LabelAliasTMP$$Awake @ RVA 0x314F384

void Nekki_SF2_GUI_LabelAliasTMP__Awake(Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  MethodInfo *method_00;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324f1d8 with catch @ 0324f384
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324f374 with catch @ 0324f388
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324f370 with catch @ 0324f38c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324f378 with catch @ 0324f390
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324f194 with catch @ 0324f394
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324f1a8 with catch @ 0324f398
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324f208 with catch @ 0324f39c
                        */
  if ((DAT_045667fd & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
                    /* try { // try from 0324f3bc to 0334f3bf has its CatchHandler @ 0324f3e8 */
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
                    /* try { // try from 0324f3c0 to 0334f3f7 has its CatchHandler @ 0324ef8c */
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_LabelAliasTMP_JKGKKANLCGA__);
                    /* catch() { ... } // from try @ 0324f3bc with catch @ 0324f3e8 */
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    DAT_045667fd = 1;
  }
                    /* try { // try from 0324f3f8 to 0334f3ff has its CatchHandler @ 0324f414 */
                    /* try { // try from 0324f400 to 0334f40b has its CatchHandler @ 0324ef8c */
  TMPro_TextMeshProUGUI__Awake((TMPro_TextMeshProUGUI_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0324f40c to 0334f413 has its CatchHandler @ 0324f414 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0324f3f8 with catch @ 0324f414
                       catch(type#2 @ 00000000) { ... } // from try @ 0324f40c with catch @ 0324f414
                        */
  (*(__this->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this,0,(__this->klass->vtable)._25_set_raycastTarget.method);
  Nekki_SF2_GUI_LabelAliasTMP__GBPDDFOIDPG(__this,method_00);
  bVar1 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                    (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
  if (bVar1) {
    pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    source = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar2,(MethodInfo *)0x0);
    onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
    System_Action<Unit>___ctor();
    pIVar2 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<Unit>
                       ((System_IObservable_T__o *)source,onNext,
                        Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar2,(UnityEngine_Component_o *)__this,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    return;
  }
  return;
}


// ===== public bool get_ToUpperCase()  [RVA 0x314F4C4]
// Nekki.SF2.GUI.LabelAliasTMP$$get_ToUpperCase @ RVA 0x314F4C4

bool Nekki_SF2_GUI_LabelAliasTMP__get_ToUpperCase
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  return (bool)*(undefined1 *)&(__this->fields).super.m_EnvMapMatrix.fields.m32;
}


// ===== public void set_ToUpperCase(bool CJNHFNHJHPE)  [RVA 0x314F4CC]
// Nekki.SF2.GUI.LabelAliasTMP$$set_ToUpperCase @ RVA 0x314F4CC

void Nekki_SF2_GUI_LabelAliasTMP__set_ToUpperCase
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *method_00;
  
  if ((bool)*(char *)&(__this->fields).super.m_EnvMapMatrix.fields.m32 != CJNHFNHJHPE) {
    CJNHFNHJHPE_00 = *(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12;
    *(bool *)&(__this->fields).super.m_EnvMapMatrix.fields.m32 = CJNHFNHJHPE;
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE_00,(MethodInfo *)0x0);
    if (!bVar1) {
      Nekki_SF2_GUI_LabelAliasTMP__GBPDDFOIDPG(__this,method_00);
      return;
    }
  }
  return;
}


// ===== public void set_LabelFontSize(int CJNHFNHJHPE)  [RVA 0x314F50C]
// Nekki.SF2.GUI.LabelAliasTMP$$set_LabelFontSize @ RVA 0x314F50C

void Nekki_SF2_GUI_LabelAliasTMP__set_LabelFontSize
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields).super.m_EnvMapMatrix.fields.m31 == (float)CJNHFNHJHPE) {
    return;
  }
  (__this->fields).super.m_EnvMapMatrix.fields.m31 = (float)CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAliasTMP__HBHAKJAFIDP(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== public override string get_text()  [RVA 0x314F524]
// Nekki.SF2.GUI.LabelAliasTMP$$get_text @ RVA 0x314F524

System_String_o *
Nekki_SF2_GUI_LabelAliasTMP__get_text(Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = TMPro_TMP_Text__get_text((TMPro_TMP_Text_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

