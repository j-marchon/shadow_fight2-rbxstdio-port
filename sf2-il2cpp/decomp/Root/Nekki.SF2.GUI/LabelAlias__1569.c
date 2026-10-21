// TypeDefIndex 1569
// Namespace: Nekki.SF2.GUI
// [AddComponentMenu("UI_Nekki/LabelAlias")]
// public class LabelAlias : TextPic, JLHPDPJDNDN, EAENIPPJFOG
// Fields:
//   private bool _useLocalizationFont; // 0x1C8
//   private CHPMAHFBEJC _fontType; // 0x1CC
//   private bool _useLabelFontSize; // 0x1D0
//   private int _labelFontSize; // 0x1D4
//   private bool _useLabelLineSpacing; // 0x1D8
//   private float _labelLineSpacing; // 0x1DC
//   private string _Alias; // 0x1E0
//   private bool _ToUpperCase; // 0x1E8

// ===== public void .ctor()  [RVA 0x31AE310]
// Nekki.SF2.GUI.LabelAlias$$.ctor @ RVA 0x31AE310

void Nekki_SF2_GUI_LabelAlias___ctor(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  if ((DAT_04566b63 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_TypeInfo);
    DAT_04566b63 = 1;
  }
  *(undefined1 *)&(__this->fields).super.OIHEBGFLFLH = 1;
  (__this->fields)._useLocalizationFont = true;
  *(System_String_o **)&(__this->fields)._useLabelLineSpacing =
       string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(&(__this->fields)._useLabelLineSpacing);
  if ((Nekki_SF2_GUI_TextPic_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_TextPic___ctor((Nekki_SF2_GUI_TextPic_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void HBHAKJAFIDP()  [RVA 0x31AE3A8]
// Nekki.SF2.GUI.LabelAlias$$HBHAKJAFIDP @ RVA 0x31AE3A8

void Nekki_SF2_GUI_LabelAlias__HBHAKJAFIDP(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  int value;
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  float local_14;
  
  if ((DAT_04566b64 & 1) == 0) {
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04566b64 = 1;
    method = extraout_x1;
  }
  local_14 = 0.0;
  if ((__this->fields)._useLocalizationFont != false) {
    iVar2 = (__this->fields)._fontType;
    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KGFBAIBBNNH_TypeInfo,method);
    }
    bVar1 = KGFBAIBBNNH__MAJPEEKDPJJ(iVar2,&local_14,(MethodInfo *)0x0);
    if (bVar1) {
      value = -0x80000000;
      if (local_14 != INFINITY) {
        value = (int)local_14;
      }
      iVar2 = UnityEngine_UI_Text__get_fontSize((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
      if (iVar2 != value) {
        UnityEngine_UI_Text__set_fontSize((UnityEngine_UI_Text_o *)__this,value,(MethodInfo *)0x0);
        UnityEngine_UI_Text__set_resizeTextMaxSize
                  ((UnityEngine_UI_Text_o *)__this,value,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// ===== public void set_LabelFontSize(int CJNHFNHJHPE)  [RVA 0x31AE46C]
// Nekki.SF2.GUI.LabelAlias$$set_LabelFontSize @ RVA 0x31AE46C

void Nekki_SF2_GUI_LabelAlias__set_LabelFontSize
               (Nekki_SF2_GUI_LabelAlias_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._fontType == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._fontType = CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias__HBHAKJAFIDP(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== public void set_LabelLineSpacing(float CJNHFNHJHPE)  [RVA 0x31AE484]
// Nekki.SF2.GUI.LabelAlias$$set_LabelLineSpacing @ RVA 0x31AE484

void Nekki_SF2_GUI_LabelAlias__set_LabelLineSpacing
               (Nekki_SF2_GUI_LabelAlias_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  if ((float)(__this->fields)._labelFontSize == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._labelFontSize = (int32_t)CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias__CNHCLPKCGJE(__this,method);
  return;
}


// ===== protected override void Awake()  [RVA 0x31AE52C]
// Nekki.SF2.GUI.LabelAlias$$Awake @ RVA 0x31AE52C

void Nekki_SF2_GUI_LabelAlias__Awake(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  MethodInfo *method_00;
  
  if ((DAT_04566b65 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_LabelAlias_JNDEHBOKKAN__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    DAT_04566b65 = 1;
  }
  Nekki_SF2_GUI_TextPic__Awake((Nekki_SF2_GUI_TextPic_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this,0,(__this->klass->vtable)._25_set_raycastTarget.method);
  Nekki_SF2_GUI_LabelAlias__GBPDDFOIDPG(__this,method_00);
  bVar1 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                    (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
  if (bVar1) {
                    /* try { // try from 032ae5f8 to 033ae68b has its CatchHandler @ 032ae5f8
                       catch() { ... } // from try @ 032ae5f8 with catch @ 032ae5f8
                       catch() { ... } // from try @ 032ae6c4 with catch @ 032ae5f8
                       catch() { ... } // from try @ 032ae70c with catch @ 032ae5f8
                       catch() { ... } // from try @ 032ae738 with catch @ 032ae5f8
                       catch() { ... } // from try @ 032ae770 with catch @ 032ae5f8 */
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


// ===== private void GBPDDFOIDPG()  [RVA 0x31AE66C]
// Nekki.SF2.GUI.LabelAlias$$GBPDDFOIDPG @ RVA 0x31AE66C

void Nekki_SF2_GUI_LabelAlias__GBPDDFOIDPG(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  char cVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_String_o *pSVar3;
  
  if ((DAT_04566b66 & 1) == 0) {
                    /* try { // try from 032ae68c to 033ae693 has its CatchHandler @ 032ae71c */
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04566b66 = 1;
  }
                    /* try { // try from 032ae6a4 to 033ae6af has its CatchHandler @ 032ae718 */
  bVar2 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 032ae6b4 to 033ae6c3 has its CatchHandler @ 032ae710 */
                    /* try { // try from 032ae6c4 to 033ae707 has its CatchHandler @ 032ae5f8 */
  if ((!bVar2) &&
     (bVar2 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__), bVar2)) {
    bVar2 = PCOEHCPGBBG__EDHHJAMCOJH
                      (*(System_String_o **)&(__this->fields)._useLabelLineSpacing,(MethodInfo *)0x0
                      );
    method_00 = extraout_x1;
    if (!bVar2) {
      pSVar3 = *(System_String_o **)&(__this->fields)._useLabelLineSpacing;
      cVar1 = *(char *)&(__this->fields)._Alias;
      if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 032ae708 to 033ae70b has its CatchHandler @ 032ae714 */
      pSVar3 = KGFBAIBBNNH__KKFDNDIPEHH(pSVar3,cVar1 != '\0',(MethodInfo *)0x0);
                    /* try { // try from 032ae70c to 033ae733 has its CatchHandler @ 032ae5f8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ae6b4 with catch @ 032ae710
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ae708 with catch @ 032ae714
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ae6a4 with catch @ 032ae718
                        */
      Nekki_SF2_GUI_TextPic__set_text((Nekki_SF2_GUI_TextPic_o *)__this,pSVar3,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ae68c with catch @ 032ae71c
                        */
    Nekki_SF2_GUI_LabelAlias__GOLOBCMKJFJ(__this,method_00);
    Nekki_SF2_GUI_LabelAlias__HBHAKJAFIDP(__this,method_01);
                    /* try { // try from 032ae734 to 033ae737 has its CatchHandler @ 032ae760 */
                    /* try { // try from 032ae738 to 033ae767 has its CatchHandler @ 032ae5f8 */
    Nekki_SF2_GUI_LabelAlias__CNHCLPKCGJE(__this,method_02);
    return;
  }
  return;
}


// ===== public void set_FontType(CHPMAHFBEJC CJNHFNHJHPE)  [RVA 0x31AE7CC]
// Nekki.SF2.GUI.LabelAlias$$set_FontType @ RVA 0x31AE7CC

void Nekki_SF2_GUI_LabelAlias__set_FontType
               (Nekki_SF2_GUI_LabelAlias_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if (*(int *)((long)&(__this->fields).super.OIHEBGFLFLH + 4) == CJNHFNHJHPE) {
    return;
  }
  *(int32_t *)((long)&(__this->fields).super.OIHEBGFLFLH + 4) = CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias__GOLOBCMKJFJ(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== public bool get_UseLocalizationFont()  [RVA 0x31AE7E4]
// Nekki.SF2.GUI.LabelAlias$$get_UseLocalizationFont @ RVA 0x31AE7E4

bool Nekki_SF2_GUI_LabelAlias__get_UseLocalizationFont
               (Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  return (bool)*(undefined1 *)&(__this->fields).super.OIHEBGFLFLH;
}


// ===== public void set_Alias(string CJNHFNHJHPE)  [RVA 0x31A61F0]
// Nekki.SF2.GUI.LabelAlias$$set_Alias @ RVA 0x31A61F0

void Nekki_SF2_GUI_LabelAlias__set_Alias
               (Nekki_SF2_GUI_LabelAlias_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  bVar1 = System_String__op_Equality
                    (*(System_String_o **)&(__this->fields)._useLabelLineSpacing,CJNHFNHJHPE,
                     (MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  *(System_String_o **)&(__this->fields)._useLabelLineSpacing = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields)._useLabelLineSpacing,CJNHFNHJHPE);
  Nekki_SF2_GUI_LabelAlias__GBPDDFOIDPG(__this,method_00);
  return;
}


// ===== public void set_UseLabelFontSize(bool CJNHFNHJHPE)  [RVA 0x31AE7EC]
// Nekki.SF2.GUI.LabelAlias$$set_UseLabelFontSize @ RVA 0x31AE7EC

void Nekki_SF2_GUI_LabelAlias__set_UseLabelFontSize
               (Nekki_SF2_GUI_LabelAlias_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._useLocalizationFont == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._useLocalizationFont = CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias__HBHAKJAFIDP(__this,(MethodInfo *)(ulong)CJNHFNHJHPE);
  return;
}


// ===== public void set_UseLabelLineSpacing(bool CJNHFNHJHPE)  [RVA 0x31AE808]
// Nekki.SF2.GUI.LabelAlias$$set_UseLabelLineSpacing @ RVA 0x31AE808

void Nekki_SF2_GUI_LabelAlias__set_UseLabelLineSpacing
               (Nekki_SF2_GUI_LabelAlias_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._useLabelFontSize == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._useLabelFontSize = CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias__CNHCLPKCGJE(__this,(MethodInfo *)(ulong)CJNHFNHJHPE);
  return;
}


// ===== public override void set_text(string CJNHFNHJHPE)  [RVA 0x31AE824]
// Nekki.SF2.GUI.LabelAlias$$set_text @ RVA 0x31AE824

void Nekki_SF2_GUI_LabelAlias__set_text
               (Nekki_SF2_GUI_LabelAlias_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04566b67 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04566b67 = 1;
  }
  a = Nekki_SF2_GUI_TextPic__get_text((Nekki_SF2_GUI_TextPic_o *)__this,(MethodInfo *)0x0);
  method_01 = (MethodInfo *)0x0;
  bVar1 = System_String__op_Equality(a,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_LabelAlias__set_Alias(__this,string_TypeInfo->static_fields->Empty,method_01);
  Nekki_SF2_GUI_TextPic__set_text((Nekki_SF2_GUI_TextPic_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 032ae8ac to 033ae8d3 has its CatchHandler @ 032aeac0 */
  Nekki_SF2_GUI_LabelAlias__GOLOBCMKJFJ(__this,method_00);
  return;
}


// ===== public void Clear()  [RVA 0x31AE8B8]
// Nekki.SF2.GUI.LabelAlias$$Clear @ RVA 0x31AE8B8

void Nekki_SF2_GUI_LabelAlias__Clear(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((DAT_04566b68 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04566b68 = 1;
  }
  method_00 = (MethodInfo *)0x0;
  Nekki_SF2_GUI_TextPic__set_text
            ((Nekki_SF2_GUI_TextPic_o *)__this,string_TypeInfo->static_fields->Empty,
             (MethodInfo *)0x0);
                    /* try { // try from 032ae908 to 033ae933 has its CatchHandler @ 032aeabc */
  Nekki_SF2_GUI_LabelAlias__set_Alias(__this,string_TypeInfo->static_fields->Empty,method_00);
  return;
}


// ===== public int get_LabelFontSize()  [RVA 0x31AE920]
// Nekki.SF2.GUI.LabelAlias$$get_LabelFontSize @ RVA 0x31AE920

int32_t Nekki_SF2_GUI_LabelAlias__get_LabelFontSize
                  (Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  return (__this->fields)._fontType;
}


// ===== public override string get_text()  [RVA 0x31AE928]
// Nekki.SF2.GUI.LabelAlias$$get_text @ RVA 0x31AE928

System_String_o *
Nekki_SF2_GUI_LabelAlias__get_text(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Nekki_SF2_GUI_TextPic__get_text((Nekki_SF2_GUI_TextPic_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool get_ToUpperCase()  [RVA 0x31AE930]
// Nekki.SF2.GUI.LabelAlias$$get_ToUpperCase @ RVA 0x31AE930

bool Nekki_SF2_GUI_LabelAlias__get_ToUpperCase
               (Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  return (bool)*(undefined1 *)&(__this->fields)._Alias;
}


// ===== public float get_LabelLineSpacing()  [RVA 0x31AE938]
// Nekki.SF2.GUI.LabelAlias$$get_LabelLineSpacing @ RVA 0x31AE938

float Nekki_SF2_GUI_LabelAlias__get_LabelLineSpacing
                (Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  return (float)(__this->fields)._labelFontSize;
}


// ===== private void CNHCLPKCGJE()  [RVA 0x31AE49C]
// Nekki.SF2.GUI.LabelAlias$$CNHCLPKCGJE @ RVA 0x31AE49C

void Nekki_SF2_GUI_LabelAlias__CNHCLPKCGJE(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  float COIHIJIIEAA;
  float local_24;
  
  if ((DAT_04566b69 & 1) == 0) {
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04566b69 = 1;
    method = extraout_x1;
  }
  local_24 = 0.0;
  bVar1 = (__this->fields)._useLabelFontSize;
  COIHIJIIEAA = (float)(__this->fields)._labelFontSize;
  if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KGFBAIBBNNH_TypeInfo,method);
  }
  bVar2 = KGFBAIBBNNH__PJJEHJMAIIH(bVar1 != false,COIHIJIIEAA,&local_24,(MethodInfo *)0x0);
  if (bVar2) {
    UnityEngine_UI_Text__set_lineSpacing((UnityEngine_UI_Text_o *)__this,local_24,(MethodInfo *)0x0)
    ;
  }
  return;
}


// ===== public string get_Alias()  [RVA 0x31AE940]
// Nekki.SF2.GUI.LabelAlias$$get_Alias @ RVA 0x31AE940

System_String_o *
Nekki_SF2_GUI_LabelAlias__get_Alias(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  return *(System_String_o **)&(__this->fields)._useLabelLineSpacing;
}


// ===== private void GOLOBCMKJFJ()  [RVA 0x31AE748]
// Nekki.SF2.GUI.LabelAlias$$GOLOBCMKJFJ @ RVA 0x31AE748

void Nekki_SF2_GUI_LabelAlias__GOLOBCMKJFJ(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  int32_t BMLIMNBPGIJ;
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_Font_o *local_18;
  
  if ((DAT_04566b6a & 1) == 0) {
                    /* catch() { ... } // from try @ 032ae734 with catch @ 032ae760 */
                    /* try { // try from 032ae768 to 033ae76f has its CatchHandler @ 032ae784 */
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
                    /* try { // try from 032ae770 to 033ae77b has its CatchHandler @ 032ae5f8 */
    DAT_04566b6a = 1;
    method = extraout_x1;
  }
  local_18 = (UnityEngine_Font_o *)0x0;
                    /* try { // try from 032ae77c to 033ae783 has its CatchHandler @ 032ae784 */
  if (*(char *)&(__this->fields).super.OIHEBGFLFLH != '\0') {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032ae768 with catch @ 032ae784
                       catch(type#2 @ 00000000) { ... } // from try @ 032ae77c with catch @ 032ae784
                        */
                    /* try { // try from 032ae788 to 033ae8ab has its CatchHandler @ 032ae788
                       catch() { ... } // from try @ 032ae788 with catch @ 032ae788
                       catch() { ... } // from try @ 032ae9e0 with catch @ 032ae788
                       catch() { ... } // from try @ 032aea88 with catch @ 032ae788
                       catch() { ... } // from try @ 032aea90 with catch @ 032ae788
                       catch() { ... } // from try @ 032aeb58 with catch @ 032ae788 */
    BMLIMNBPGIJ = *(int32_t *)((long)&(__this->fields).super.OIHEBGFLFLH + 4);
    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KGFBAIBBNNH_TypeInfo,method);
    }
    bVar1 = KGFBAIBBNNH__EPNEGIJAJHI(BMLIMNBPGIJ,&local_18,(MethodInfo *)0x0);
    if (bVar1) {
      UnityEngine_UI_Text__set_font((UnityEngine_UI_Text_o *)__this,local_18,(MethodInfo *)0x0);
    }
  }
  return;
}


// ===== private void JNDEHBOKKAN(Unit HOKBHLPPCAH)  [RVA 0x31AE948]
// Nekki.SF2.GUI.LabelAlias$$JNDEHBOKKAN @ RVA 0x31AE948

void Nekki_SF2_GUI_LabelAlias__JNDEHBOKKAN(Nekki_SF2_GUI_LabelAlias_o *__this)

{
  char cVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *pSVar3;
  
  if ((DAT_04566b66 & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04566b66 = 1;
  }
  bVar2 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if ((!bVar2) &&
     (bVar2 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__), bVar2)) {
    bVar2 = PCOEHCPGBBG__EDHHJAMCOJH
                      (*(System_String_o **)&(__this->fields)._useLabelLineSpacing,(MethodInfo *)0x0
                      );
    method = extraout_x1;
    if (!bVar2) {
      pSVar3 = *(System_String_o **)&(__this->fields)._useLabelLineSpacing;
      cVar1 = *(char *)&(__this->fields)._Alias;
      if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = KGFBAIBBNNH__KKFDNDIPEHH(pSVar3,cVar1 != '\0',(MethodInfo *)0x0);
      Nekki_SF2_GUI_TextPic__set_text((Nekki_SF2_GUI_TextPic_o *)__this,pSVar3,(MethodInfo *)0x0);
      method = extraout_x1_00;
    }
    Nekki_SF2_GUI_LabelAlias__GOLOBCMKJFJ(__this,method);
    Nekki_SF2_GUI_LabelAlias__HBHAKJAFIDP(__this,method_00);
    Nekki_SF2_GUI_LabelAlias__CNHCLPKCGJE(__this,method_01);
    return;
  }
  return;
}


// ===== public bool get_UseLabelLineSpacing()  [RVA 0x31AE94C]
// Nekki.SF2.GUI.LabelAlias$$get_UseLabelLineSpacing @ RVA 0x31AE94C

bool Nekki_SF2_GUI_LabelAlias__get_UseLabelLineSpacing
               (Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  return (__this->fields)._useLabelFontSize;
}


// ===== public void set_ToUpperCase(bool CJNHFNHJHPE)  [RVA 0x31AE954]
// Nekki.SF2.GUI.LabelAlias$$set_ToUpperCase @ RVA 0x31AE954

void Nekki_SF2_GUI_LabelAlias__set_ToUpperCase
               (Nekki_SF2_GUI_LabelAlias_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if ((bool)*(char *)&(__this->fields)._Alias != CJNHFNHJHPE) {
                    /* try { // try from 032ae970 to 033ae977 has its CatchHandler @ 032aeab0 */
    *(bool *)&(__this->fields)._Alias = CJNHFNHJHPE;
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                      (*(System_String_o **)&(__this->fields)._useLabelLineSpacing,(MethodInfo *)0x0
                      );
                    /* try { // try from 032ae97c to 033ae983 has its CatchHandler @ 032aeab4 */
    if (!bVar1) {
      Nekki_SF2_GUI_LabelAlias__GBPDDFOIDPG(__this,method_00);
      return;
    }
  }
  return;
}


// ===== public void set_UseLocalizationFont(bool CJNHFNHJHPE)  [RVA 0x31AE994]
// Nekki.SF2.GUI.LabelAlias$$set_UseLocalizationFont @ RVA 0x31AE994

void Nekki_SF2_GUI_LabelAlias__set_UseLocalizationFont
               (Nekki_SF2_GUI_LabelAlias_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 032ae994 to 033ae99b has its CatchHandler @ 032aeaa0 */
  if ((bool)*(char *)&(__this->fields).super.OIHEBGFLFLH == CJNHFNHJHPE) {
                    /* try { // try from 032ae9a4 to 033ae9ab has its CatchHandler @ 032aeaa8 */
    return;
  }
  *(bool *)&(__this->fields).super.OIHEBGFLFLH = CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias__GOLOBCMKJFJ(__this,(MethodInfo *)(ulong)CJNHFNHJHPE);
  return;
}


// ===== public bool get_UseLabelFontSize()  [RVA 0x31AE9B0]
// Nekki.SF2.GUI.LabelAlias$$get_UseLabelFontSize @ RVA 0x31AE9B0

bool Nekki_SF2_GUI_LabelAlias__get_UseLabelFontSize
               (Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
                    /* try { // try from 032ae9b0 to 033ae9b7 has its CatchHandler @ 032aea9c */
  return (__this->fields)._useLocalizationFont;
}


// ===== public CHPMAHFBEJC get_FontType()  [RVA 0x31AE9B8]
// Nekki.SF2.GUI.LabelAlias$$get_FontType @ RVA 0x31AE9B8

int32_t Nekki_SF2_GUI_LabelAlias__get_FontType
                  (Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  return *(int32_t *)((long)&(__this->fields).super.OIHEBGFLFLH + 4);
}

