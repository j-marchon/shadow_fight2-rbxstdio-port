// TypeDefIndex 2618
// Namespace: Nekki.SF2.GUI.Dialogs
// public class BaseDialog : SFMonoBehaviour<object>, HAFLPBGEGCI
// Fields:
//   public const int BASE_TEXT_FONT_SIZE = 103;
//   public const int BASE_LINE_HEIGHT = 180;
//   private const int GHNMHLGBFLD = 64;
//   private const int MAIEAHIHLNO = 86;
//   private const int JKKNKFPKALE = 100;
//   private const int BHLGICDLDBE = 64;
//   private const int OBHIFLGDPHF = 272;
//   private const int KFJOAFBCAEK = 544;
//   private const int CLLBNAGHMCM = 60;
//   private const int BHDMNIGJGFE = 152;
//   protected List<Button> EHGPDKENGAP; // 0x28
//   protected List<LBMOOFGGPEB> DIKHJEINHID; // 0x30
//   protected ResolutionImage _topStripe; // 0x38
//   protected ResolutionImage _bottomStripe; // 0x40
//   protected GameObject _content; // 0x48
//   protected LabelAlias _header; // 0x50
//   protected LabelButton _btnCancel; // 0x58
//   protected LabelButton _btnOK; // 0x60
//   protected bool _hideDialogCanvasBackgnd; // 0x68
//   protected string DMNJBHNNEKI; // 0x70
//   protected bool FCBFEJDLODF; // 0x78
//   protected string NIEHEOKFPAN; // 0x80
//   protected bool AHHAONPHEPD; // 0x88
//   protected LabelButton.MANJLBPDELA FKKACPDDADI; // 0x8C
//   protected string LLBBHINDIDB; // 0x90
//   protected bool KJLEAJNIFPA; // 0x98
//   protected LabelButton.MANJLBPDELA FHLAKGNIFAF; // 0x9C
//   public bool IsIgnoreBack; // 0xA0
//   public bool IsQuestDialog; // 0xA1
//   protected BaseDialog.OFBBBIDKKOD JOLPNMNNKCJ; // 0xA4
//   private RectTransform MCMBIPEKNLK; // 0xA8
//   private RectTransform FKAGEHHHMAB; // 0xB0
//   public bool IsPausing; // 0xB8
//   private bool <BOGAKJOFOEK>k__BackingField; // 0xB9
//   private bool ELKILAILDGG; // 0xBA
//   public MIHMAJCLOEG DialogIdentifier; // 0xBC
//   private RectTransform EFGNJDHAIDC; // 0xC0

// ===== protected virtual float OFGMFNANEGD()  [RVA 0x33ADF64]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$OFGMFNANEGD @ RVA 0x33ADF64

/* WARNING: Removing unreachable block (ram,0x034ae00c) */

float Nekki_SF2_GUI_Dialogs_BaseDialog__OFGMFNANEGD
                (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  float fVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  
  if ((DAT_04567d2b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d2b = 1;
    method = extraout_x1;
  }
  x = (UnityEngine_Object_o *)(__this->fields)._content;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    fVar2 = 272.0;
  }
  else {
    __this_00 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO(__this,method_00);
    if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar4 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    fVar3 = UVar4.fields.m_Height * 0.5 + 60.0;
    fVar2 = 272.0;
    if (272.0 <= fVar3) {
      fVar2 = fVar3;
    }
  }
  return fVar2;
}


// ===== public virtual void SetTextPositionXByImage(bool CIEJDOKPHIA)  [RVA 0x33AE088]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$SetTextPositionXByImage @ RVA 0x33AE088

void Nekki_SF2_GUI_Dialogs_BaseDialog__SetTextPositionXByImage
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,bool CIEJDOKPHIA,MethodInfo *method)

{
  return;
}


// ===== public virtual void SetImageRotation(float BIMDFEIIHBH)  [RVA 0x33AE08C]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$SetImageRotation @ RVA 0x33AE08C

void Nekki_SF2_GUI_Dialogs_BaseDialog__SetImageRotation
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,float BIMDFEIIHBH,MethodInfo *method)

{
  return;
}


// ===== private void MMHCNDPCGGP()  [RVA 0x33AE090]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$MMHCNDPCGGP @ RVA 0x33AE090

void Nekki_SF2_GUI_Dialogs_BaseDialog__MMHCNDPCGGP
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
  if ((DAT_04567d2c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_5002/*"DIALOG BACKGND INPUT BLOCKER"*/);
    DAT_04567d2c = 1;
    method = extraout_x1;
  }
  ppUVar2 = &(__this->fields).FKAGEHHHMAB;
  pUVar3 = *ppUVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pUVar3 = Nekki_SF2_GUI_Dialogs_BaseDialog__JLBIECFKGPL(__this,StringLiteral_5002/*"DIALOG BACKGND INPUT BLOCKER"*/,method_00);
                    /* try { // try from 034ae128 to 035ae12f has its CatchHandler @ 034ae1a4 */
  (__this->fields).FKAGEHHHMAB = pUVar3;
                    /* try { // try from 034ae130 to 035ae133 has its CatchHandler @ 034ad8dc */
  thunk_FUN_01c20e04(ppUVar2,pUVar3);
                    /* try { // try from 034ae134 to 035ae137 has its CatchHandler @ 034ae180 */
  pUVar3 = (__this->fields).FKAGEHHHMAB;
                    /* try { // try from 034ae138 to 035ae13b has its CatchHandler @ 034ae17c */
                    /* try { // try from 034ae13c to 035ae13f has its CatchHandler @ 034ae170 */
                    /* try { // try from 034ae140 to 035ae143 has its CatchHandler @ 034ae16c */
                    /* try { // try from 034ae144 to 035ae147 has its CatchHandler @ 034ae168 */
  if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 034ae148 to 035ae14b has its CatchHandler @ 034ae154 */
                    /* try { // try from 034ae14c to 035ae1bb has its CatchHandler @ 034ad8dc */
                    /* catch() { ... } // from try @ 034ae148 with catch @ 034ae154 */
                    /* catch() { ... } // from try @ 034add5c with catch @ 034ae158 */
    UnityEngine_Transform__SetAsFirstSibling(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034addbc with catch @ 034ae15c */
  FUN_01bab8c8();
}


// ===== public RectTransform get_RectTransform()  [RVA 0x33AE320]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$get_RectTransform @ RVA 0x33AE320

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Dialogs_BaseDialog__get_RectTransform
          (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
  if ((DAT_04567d2d & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d2d = 1;
    method = extraout_x1;
  }
  ppUVar2 = &(__this->fields).EFGNJDHAIDC;
  pUVar3 = *ppUVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    (__this->fields).EFGNJDHAIDC = pUVar3;
    thunk_FUN_01c20e04(ppUVar2,pUVar3);
  }
  return *ppUVar2;
}


// ===== public void .ctor()  [RVA 0x33AE3C8]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$.ctor @ RVA 0x33AE3C8

void Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Button__o *__this_00;
  System_Collections_Generic_List_Button__o **ppSVar1;
  System_Collections_Generic_List_LBMOOFGGPEB__o *__this_01;
  System_Collections_Generic_List_LBMOOFGGPEB__o **ppSVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034ae3f4 to 035ae41b has its CatchHandler @ 034ae704 */
  if ((DAT_04567d2e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LBMOOFGGPEB>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<Button>_TypeInfo);
                    /* try { // try from 034ae450 to 035ae47b has its CatchHandler @ 034ae700 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567d2e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_Button__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Button>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Button>__ctor__);
  ppSVar1 = &(__this->fields).EHGPDKENGAP;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_LBMOOFGGPEB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LBMOOFGGPEB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<LBMOOFGGPEB>__ctor__);
  ppSVar2 = &(__this->fields).DIKHJEINHID;
  *ppSVar2 = __this_01;
                    /* try { // try from 034ae4b0 to 035ae4bb has its CatchHandler @ 034ae6f8 */
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  (__this->fields).DMNJBHNNEKI = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).FCBFEJDLODF = true;
                    /* try { // try from 034ae4cc to 035ae4d3 has its CatchHandler @ 034ae6f0 */
  (__this->fields).NIEHEOKFPAN = StringLiteral_1/*""*/;
                    /* try { // try from 034ae4d8 to 035ae4df has its CatchHandler @ 034ae6f4 */
  thunk_FUN_01c20e04();
  (__this->fields).AHHAONPHEPD = true;
  (__this->fields).FKKACPDDADI = 1;
  (__this->fields).LLBBHINDIDB = StringLiteral_1/*""*/;
                    /* try { // try from 034ae4f0 to 035ae4ff has its CatchHandler @ 034ae6e4 */
  thunk_FUN_01c20e04();
  (__this->fields).KJLEAJNIFPA = true;
  (__this->fields).IsPausing = true;
                    /* try { // try from 034ae50c to 035ae513 has its CatchHandler @ 034ae6ac */
  Nekki_SF2_GUI_SFMonoBehaviour<object>___ctor
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
  return;
}


// ===== public void EnableTouchBlock(bool CJNHFNHJHPE)  [RVA 0x33AE51C]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$EnableTouchBlock @ RVA 0x33AE51C

void Nekki_SF2_GUI_Dialogs_BaseDialog__EnableTouchBlock
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  UnityEngine_RectTransform_o *pUVar2;
  
                    /* try { // try from 034ae51c to 035ae523 has its CatchHandler @ 034ae6c0 */
  method_00 = (MethodInfo *)(ulong)CJNHFNHJHPE;
                    /* try { // try from 034ae524 to 035ae543 has its CatchHandler @ 034ae6ec */
  if ((DAT_04567d2f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d2f = 1;
    method_00 = extraout_x1;
  }
  if (!CJNHFNHJHPE) {
                    /* try { // try from 034ae550 to 035ae557 has its CatchHandler @ 034ae6e0 */
    pUVar2 = (__this->fields).MCMBIPEKNLK;
                    /* try { // try from 034ae560 to 035ae567 has its CatchHandler @ 034ae6bc */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034ae568 to 035ae573 has its CatchHandler @ 034ae6d8 */
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1_00;
    if (bVar1) {
                    /* try { // try from 034ae584 to 035ae58b has its CatchHandler @ 034ae6dc */
      return;
    }
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__JCAEMPMAFHO(__this,method_00);
                    /* try { // try from 034ae594 to 035ae59b has its CatchHandler @ 034ae6b8 */
  pUVar2 = (__this->fields).MCMBIPEKNLK;
                    /* try { // try from 034ae59c to 035ae5a7 has its CatchHandler @ 034ae6d4 */
  if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void OnClose(object IMMNELPBGIF)  [RVA 0x33AE6B0]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$OnClose @ RVA 0x33AE6B0

void Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this_00;
  BackKeyManager_o *__this_01;
  UnityEngine_Object_o *pUVar2;
  
                    /* catch() { ... } // from try @ 034ae68c with catch @ 034ae6b0 */
                    /* catch() { ... } // from try @ 034ae5c0 with catch @ 034ae6b4 */
                    /* catch() { ... } // from try @ 034ae594 with catch @ 034ae6b8 */
                    /* catch() { ... } // from try @ 034ae560 with catch @ 034ae6bc */
                    /* catch() { ... } // from try @ 034ae51c with catch @ 034ae6c0 */
                    /* catch() { ... } // from try @ 034ae688 with catch @ 034ae6c4 */
                    /* catch() { ... } // from try @ 034ae684 with catch @ 034ae6c8 */
  if ((DAT_04567d30 & 1) == 0) {
                    /* catch() { ... } // from try @ 034ae680 with catch @ 034ae6cc */
                    /* catch() { ... } // from try @ 034ae67c with catch @ 034ae6d0 */
                    /* catch() { ... } // from try @ 034ae59c with catch @ 034ae6d4 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 034ae568 with catch @ 034ae6d8 */
                    /* catch() { ... } // from try @ 034ae584 with catch @ 034ae6dc */
                    /* catch() { ... } // from try @ 034ae550 with catch @ 034ae6e0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
                    /* catch() { ... } // from try @ 034ae4f0 with catch @ 034ae6e4 */
                    /* catch() { ... } // from try @ 034ae678 with catch @ 034ae6e8 */
    DAT_04567d30 = 1;
  }
                    /* catch() { ... } // from try @ 034ae524 with catch @ 034ae6ec */
                    /* catch() { ... } // from try @ 034ae4cc with catch @ 034ae6f0 */
  if ((__this->fields).ELKILAILDGG == false) {
                    /* catch() { ... } // from try @ 034ae4d8 with catch @ 034ae6f4 */
                    /* catch() { ... } // from try @ 034ae4b0 with catch @ 034ae6f8 */
    (__this->fields).ELKILAILDGG = true;
                    /* catch() { ... } // from try @ 034ae670 with catch @ 034ae6fc */
                    /* catch() { ... } // from try @ 034ae450 with catch @ 034ae700 */
                    /* catch() { ... } // from try @ 034ae3f4 with catch @ 034ae704 */
    Nekki_SF2_GUI_SFMonoBehaviour<object>__CallEvent
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,IMMNELPBGIF,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
  }
                    /* try { // try from 034ae71c to 035ae71f has its CatchHandler @ 034ae730 */
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    GCIFMNHADDF__LDLLGJNAKKP(__this_00,__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034ae71c with catch @ 034ae730 */
    __this_01 = BackKeyManager__get_Instance((MethodInfo *)0x0);
    if (__this_01 != (BackKeyManager_o *)0x0) {
                    /* try { // try from 034ae740 to 035ae7af has its CatchHandler @ 034ae7c4 */
      BackKeyManager__RemoveBackKeyController(__this_01,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
      if ((__this->fields)._BOGAKJOFOEK_k__BackingField != false) {
        pUVar2 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
                    /* try { // try from 034ae7c8 to 035aeb1b has its CatchHandler @ 034ae7c8
                       catch() { ... } // from try @ 034ae7c8 with catch @ 034ae7c8
                       catch() { ... } // from try @ 034af408 with catch @ 034ae7c8
                       catch() { ... } // from try @ 034af664 with catch @ 034ae7c8
                       catch() { ... } // from try @ 034af734 with catch @ 034ae7c8
                       catch() { ... } // from try @ 034af884 with catch @ 034ae7c8
                       catch() { ... } // from try @ 034af8b0 with catch @ 034ae7c8
                       catch() { ... } // from try @ 034af8c0 with catch @ 034ae7c8
                       catch() { ... } // from try @ 034afa0c with catch @ 034ae7c8 */
          return;
        }
      }
      pUVar2 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034ae7b0 to 035ae7bb has its CatchHandler @ 034ae264 */
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
                    /* try { // try from 034ae7bc to 035ae7c3 has its CatchHandler @ 034ae7c4 */
                    /* catch() { ... } // from try @ 034ae740 with catch @ 034ae7c4
                       catch() { ... } // from try @ 034ae7bc with catch @ 034ae7c4 */
      UnityEngine_Object__Destroy(pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void KHKLLNFCMME()  [RVA 0x33AE7D8]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$KHKLLNFCMME @ RVA 0x33AE7D8

void Nekki_SF2_GUI_Dialogs_BaseDialog__KHKLLNFCMME
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._18_GLANJNFACKI.methodPtr)
            (__this,(__this->klass->vtable)._18_GLANJNFACKI.method);
  (*(__this->klass->vtable)._24_UpdateHeaderPosition.methodPtr)
            (__this,(__this->klass->vtable)._24_UpdateHeaderPosition.method);
                    /* WARNING: Could not recover jumptable at 0x034ae818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._21_IGDDKJJMDLP.methodPtr)
            (__this,(__this->klass->vtable)._21_IGDDKJJMDLP.method);
  return;
}


// ===== private void JCAEMPMAFHO()  [RVA 0x33AE5C0]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$JCAEMPMAFHO @ RVA 0x33AE5C0

void Nekki_SF2_GUI_Dialogs_BaseDialog__JCAEMPMAFHO
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
                    /* try { // try from 034ae5c0 to 035ae5c7 has its CatchHandler @ 034ae6b4 */
                    /* try { // try from 034ae5c8 to 035ae66f has its CatchHandler @ 034ae264 */
  if ((DAT_04567d31 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_5003/*"DIALOG INPUT BLOCKER"*/);
    DAT_04567d31 = 1;
    method = extraout_x1;
  }
  ppUVar2 = &(__this->fields).MCMBIPEKNLK;
  pUVar3 = *ppUVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pUVar3 = Nekki_SF2_GUI_Dialogs_BaseDialog__JLBIECFKGPL(__this,StringLiteral_5003/*"DIALOG INPUT BLOCKER"*/,method_00);
  (__this->fields).MCMBIPEKNLK = pUVar3;
  thunk_FUN_01c20e04(ppUVar2,pUVar3);
  pUVar3 = (__this->fields).MCMBIPEKNLK;
                    /* try { // try from 034ae670 to 035ae677 has its CatchHandler @ 034ae6fc */
  if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 034ae678 to 035ae67b has its CatchHandler @ 034ae6e8 */
                    /* try { // try from 034ae67c to 035ae67f has its CatchHandler @ 034ae6d0 */
    UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 034ae680 to 035ae683 has its CatchHandler @ 034ae6cc */
                    /* try { // try from 034ae684 to 035ae687 has its CatchHandler @ 034ae6c8 */
                    /* try { // try from 034ae688 to 035ae68b has its CatchHandler @ 034ae6c4 */
                    /* try { // try from 034ae68c to 035ae68f has its CatchHandler @ 034ae6b0 */
                    /* try { // try from 034ae690 to 035ae693 has its CatchHandler @ 034ae6a8 */
    if ((*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppUVar2,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 034ae694 to 035ae697 has its CatchHandler @ 034ae264 */
                    /* try { // try from 034ae698 to 035ae69b has its CatchHandler @ 034ae6a4 */
                    /* try { // try from 034ae69c to 035ae71b has its CatchHandler @ 034ae264 */
                    /* catch() { ... } // from try @ 034ae698 with catch @ 034ae6a4 */
                    /* catch() { ... } // from try @ 034ae690 with catch @ 034ae6a8 */
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034ae50c with catch @ 034ae6ac */
  FUN_01bab8c8();
}


// ===== protected virtual void ACICKHKFILK(LabelButton LGHOMHOPNEP, BaseDialog.OFBBBIDKKOD JFLAKNAGBEL)  [RVA 0x33AE81C]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$ACICKHKFILK @ RVA 0x33AE81C

void Nekki_SF2_GUI_Dialogs_BaseDialog__ACICKHKFILK
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,LabelButton_o *LGHOMHOPNEP,
               int32_t JFLAKNAGBEL,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_00;
  System_Action_object__o *pSVar2;
  UnityEngine_Transform_o *transform;
  System_String_o *CJNHFNHJHPE;
  int32_t iVar3;
  
  if ((DAT_04567d32 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567d32 = 1;
  }
  if ((LGHOMHOPNEP == (LabelButton_o *)0x0) ||
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)LGHOMHOPNEP,(MethodInfo *)0x0),
     __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034ae9bc;
  UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
  CJNHFNHJHPE = StringLiteral_1/*""*/;
  if (JFLAKNAGBEL == 1) {
    bVar1 = (__this->fields).AHHAONPHEPD;
    CJNHFNHJHPE = (__this->fields).NIEHEOKFPAN;
    iVar3 = 1;
    LabelButton__set_ButtonColor(LGHOMHOPNEP,1,(MethodInfo *)0x0);
    if (bVar1 != false) goto LAB_034ae914;
LAB_034ae8e0:
    LabelButton__set_Text(LGHOMHOPNEP,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  else {
    if (JFLAKNAGBEL == 2) {
      bVar1 = (__this->fields).KJLEAJNIFPA;
      CJNHFNHJHPE = (__this->fields).LLBBHINDIDB;
      LabelButton__set_ButtonColor(LGHOMHOPNEP,0,(MethodInfo *)0x0);
      iVar3 = 0;
      if (bVar1 == false) goto LAB_034ae8e0;
    }
    else {
      LabelButton__set_ButtonColor(LGHOMHOPNEP,1,(MethodInfo *)0x0);
      iVar3 = 0;
    }
LAB_034ae914:
    LabelButton__set_Alias(LGHOMHOPNEP,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  (LGHOMHOPNEP->fields).super.super.ButtonId = iVar3;
  pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  if (__this != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
    System_Action<object>___ctor();
    SFButton__RemoveEventListener((SFButton_o *)LGHOMHOPNEP,2,pSVar2,(MethodInfo *)0x0);
    pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    SFButton__AddEventListener((SFButton_o *)LGHOMHOPNEP,2,pSVar2,(MethodInfo *)0x0);
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)LGHOMHOPNEP,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionX(transform,0.0,(MethodInfo *)0x0);
    return;
  }
LAB_034ae9bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void SetImageScale(float JKOJPEKLBCI)  [RVA 0x33AE9C0]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$SetImageScale @ RVA 0x33AE9C0

void Nekki_SF2_GUI_Dialogs_BaseDialog__SetImageScale
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,float JKOJPEKLBCI,MethodInfo *method)

{
  return;
}


// ===== protected virtual void GLJGIJNALCA()  [RVA 0x33AE9C4]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$GLJGIJNALCA @ RVA 0x33AE9C4

/* WARNING: Removing unreachable block (ram,0x034aedc8) */

void Nekki_SF2_GUI_Dialogs_BaseDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  float fVar4;
  bool bVar5;
  int32_t iVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  System_Collections_IEnumerator_o *pSVar9;
  VirtualInvokeData *pVVar10;
  UnityEngine_Component_o *__this_00;
  UnityEngine_RectTransform_o *pUVar11;
  Il2CppObject *pIVar12;
  long *plVar13;
  undefined8 *puVar14;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_IEnumerator_c *pSVar15;
  long lVar16;
  ulong uVar17;
  int32_t *piVar18;
  int *piVar19;
  UnityEngine_Object_o *pUVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Rect_o UVar28;
  
  if ((DAT_04567d33 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Text>__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Transform_TypeInfo);
    DAT_04567d33 = 1;
    method = extraout_x1;
  }
  pUVar20 = (UnityEngine_Object_o *)(__this->fields)._content;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
                    /* try { // try from 034aed8c to 035aed93 has its CatchHandler @ 034af918 */
                    /* try { // try from 034aeda0 to 035aeda3 has its CatchHandler @ 034af914 */
    return;
  }
  pUVar7 = (__this->fields)._content;
  if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
     pUVar8 != (UnityEngine_Transform_o *)0x0)) {
    iVar6 = UnityEngine_Transform__get_childCount(pUVar8,(MethodInfo *)0x0);
    if (iVar6 == 0) {
      return;
    }
    pUVar7 = (__this->fields)._content;
    if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_Transform_o *)0x0)) {
      pSVar9 = UnityEngine_Transform__GetEnumerator(pUVar8,(MethodInfo *)0x0);
      fVar25 = 0.0;
      fVar24 = 0.0;
      do {
        if (pSVar9 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar15 = pSVar9->klass;
        uVar2._0_1_ = (pSVar15->_2).rank;
        uVar2._1_1_ = (pSVar15->_2).minimumAlignment;
        uVar17 = (ulong)uVar2;
        if (uVar17 != 0) {
          piVar18 = &((pSVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar10 = pSVar15->vtable + *piVar18;
              goto LAB_034aeb34;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
                    /* try { // try from 034aeb1c to 035aeb43 has its CatchHandler @ 034af95c */
        pVVar10 = (VirtualInvokeData *)
                  FUN_01b81914(pSVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_034aeb34:
        uVar17 = (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
        if ((uVar17 & 1) == 0) {
                    /* try { // try from 034aecb4 to 035aecbb has its CatchHandler @ 034af928 */
          auVar26 = thunk_FUN_01bda71c(pSVar9,System_IDisposable_TypeInfo);
          method_00 = auVar26._8_8_;
          plVar13 = auVar26._0_8_;
          if (plVar13 == (long *)0x0) goto LAB_034aed24;
          lVar16 = *plVar13;
                    /* try { // try from 034aeccc to 035aecd3 has its CatchHandler @ 034af924 */
                    /* try { // try from 034aecd4 to 035aecdf has its CatchHandler @ 034af91c */
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 == 0) goto LAB_034aecfc;
                    /* try { // try from 034aece0 to 035aecf7 has its CatchHandler @ 034af944 */
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_034aece4;
        }
        pSVar15 = pSVar9->klass;
        uVar3._0_1_ = (pSVar15->_2).rank;
        uVar3._1_1_ = (pSVar15->_2).minimumAlignment;
        uVar17 = (ulong)uVar3;
        if (uVar17 != 0) {
          piVar18 = &((pSVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar10 = pSVar15->vtable + (*piVar18 + 1);
              goto LAB_034aeb94;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
                    /* try { // try from 034aeb78 to 035aeba3 has its CatchHandler @ 034af958 */
        pVVar10 = (VirtualInvokeData *)
                  FUN_01b81914(pSVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_034aeb94:
        __this_00 = (UnityEngine_Component_o *)(*pVVar10->methodPtr)(pSVar9,pVVar10->method);
        if (__this_00 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (UnityEngine_Transform_TypeInfo->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)UnityEngine_Transform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(__this_00);
        }
                    /* try { // try from 034aebd8 to 035aebe3 has its CatchHandler @ 034af950 */
        pUVar8 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UVar27 = UnityEngine_Transform__get_localPosition(pUVar8,(MethodInfo *)0x0);
        fVar23 = UVar27.fields.y;
                    /* try { // try from 034aebf4 to 035aebfb has its CatchHandler @ 034af940 */
        pUVar8 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 034aec00 to 035aec07 has its CatchHandler @ 034af938 */
        UVar27 = UnityEngine_Transform__get_localScale(pUVar8,(MethodInfo *)0x0);
        pUVar11 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Component__GetComponent<object>
                            (__this_00,Method_UnityEngine_Component_GetComponent<RectTransform>__);
                    /* try { // try from 034aec18 to 035aec27 has its CatchHandler @ 034af92c */
        if (pUVar11 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UVar28 = UnityEngine_RectTransform__get_rect(pUVar11,(MethodInfo *)0x0);
        fVar21 = UVar28.fields.m_Height;
        pUVar20 = (UnityEngine_Object_o *)
                  UnityEngine_Component__GetComponent<object>
                            (__this_00,Method_UnityEngine_Component_GetComponent<Text>__);
                    /* try { // try from 034aec34 to 035aec3b has its CatchHandler @ 034af910 */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 034aec4c to 035aec53 has its CatchHandler @ 034af90c */
                    /* try { // try from 034aec54 to 035aec5f has its CatchHandler @ 034af8ec */
        bVar5 = UnityEngine_Object__op_Inequality
                          (pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          pIVar12 = UnityEngine_Component__GetComponent<object>
                              (__this_00,Method_UnityEngine_Component_GetComponent<Text>__);
          if (pIVar12 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 034aec74 to 035aec7b has its CatchHandler @ 034af8e4 */
          fVar21 = (float)(*pIVar12->klass->vtable[0x52].methodPtr)
                                    (pIVar12,pIVar12->klass->vtable[0x52].method);
        }
        fVar21 = fVar21 * 0.5;
                    /* try { // try from 034aec84 to 035aec8b has its CatchHandler @ 034af8e0 */
        fVar22 = UVar27.fields.y * fVar21;
                    /* try { // try from 034aec8c to 035aeca7 has its CatchHandler @ 034af93c */
        fVar4 = fVar23 + fVar22;
        if (fVar23 + fVar21 <= fVar24) {
          fVar4 = fVar24;
        }
        fVar24 = fVar4;
        if (fVar23 - fVar21 < fVar25) {
          fVar25 = fVar23 - fVar22;
        }
      } while( true );
    }
  }
  goto LAB_034aedc4;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_034aece4:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar14 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_034aed18;
    }
  }
LAB_034aecfc:
                    /* try { // try from 034aed04 to 035aed0b has its CatchHandler @ 034af908 */
  puVar14 = (undefined8 *)FUN_01b81914(plVar13,System_IDisposable_TypeInfo,0);
LAB_034aed18:
                    /* try { // try from 034aed1c to 035aed23 has its CatchHandler @ 034af8e8 */
  (*(code *)*puVar14)(plVar13,puVar14[1]);
  method_00 = extraout_x1_00;
LAB_034aed24:
                    /* try { // try from 034aed24 to 035aed3f has its CatchHandler @ 034af930 */
  pUVar11 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO(__this,method_00);
  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
    UVar28 = UnityEngine_RectTransform__get_rect(pUVar11,(MethodInfo *)0x0);
    fVar23 = -fVar24;
    if (0.0 <= fVar24) {
      fVar23 = fVar24;
    }
                    /* try { // try from 034aed4c to 035aed6f has its CatchHandler @ 034af94c */
    fVar24 = -fVar25;
    if (0.0 <= fVar25) {
      fVar24 = fVar25;
    }
    if (fVar23 <= fVar24) {
      fVar23 = fVar24;
    }
    pUVar11 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO(__this,method_01);
    if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
      value.fields.y = fVar23 + fVar23;
      value.fields.x = UVar28.fields.m_Width;
                    /* try { // try from 034aed74 to 035aed7f has its CatchHandler @ 034af920 */
      UnityEngine_RectTransform__set_sizeDelta(pUVar11,value,(MethodInfo *)0x0);
      return;
    }
  }
LAB_034aedc4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public LabelAlias get_Header()  [RVA 0x33AEED4]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$get_Header @ RVA 0x33AEED4

Nekki_SF2_GUI_LabelAlias_o *
Nekki_SF2_GUI_Dialogs_BaseDialog__get_Header
          (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  return (__this->fields)._header;
}


// ===== public LabelButton get_ButtonOK()  [RVA 0x33AEEDC]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$get_ButtonOK @ RVA 0x33AEEDC

LabelButton_o *
Nekki_SF2_GUI_Dialogs_BaseDialog__get_ButtonOK
          (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  return (__this->fields)._btnOK;
}


// ===== public bool get_IsDestroyed()  [RVA 0x33AEEE4]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$get_IsDestroyed @ RVA 0x33AEEE4

bool Nekki_SF2_GUI_Dialogs_BaseDialog__get_IsDestroyed
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  return (__this->fields)._BOGAKJOFOEK_k__BackingField;
}


// ===== protected virtual void GLANJNFACKI()  [RVA 0x33AEEEC]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$GLANJNFACKI @ RVA 0x33AEEEC

void Nekki_SF2_GUI_Dialogs_BaseDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  float fVar4;
  
                    /* try { // try from 034aeef4 to 035aeef7 has its CatchHandler @ 034af6e0 */
  if ((DAT_04567d34 & 1) == 0) {
                    /* try { // try from 034aef14 to 035aef2b has its CatchHandler @ 034af704 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d34 = 1;
  }
  fVar4 = (float)(*(__this->klass->vtable)._10_OFGMFNANEGD.methodPtr)
                           (__this,(__this->klass->vtable)._10_OFGMFNANEGD.method);
  pNVar3 = (__this->fields)._topStripe;
                    /* try { // try from 034aef3c to 035aef43 has its CatchHandler @ 034af6c0 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034aef54 to 035aef5b has its CatchHandler @ 034af6c4 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 034aef5c to 035aef7b has its CatchHandler @ 034af700 */
  if (bVar1) {
    pNVar3 = (__this->fields)._topStripe;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_034aeff0;
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,fVar4 + 150.0,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._bottomStripe;
                    /* try { // try from 034aef8c to 035aef93 has its CatchHandler @ 034af6bc */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034aefa4 to 035aefab has its CatchHandler @ 034af6ec */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 034aefe4 to 035aefef has its CatchHandler @ 034af6dc */
    return;
  }
                    /* try { // try from 034aefac to 035aefb7 has its CatchHandler @ 034af6d0 */
  pNVar3 = (__this->fields)._bottomStripe;
  if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                    /* try { // try from 034aefcc to 035aefd3 has its CatchHandler @ 034af6e8 */
                    /* try { // try from 034aefdc to 035aefe3 has its CatchHandler @ 034af6b4 */
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,-(fVar4 + 160.0),(MethodInfo *)0x0);
    return;
  }
LAB_034aeff0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void OnDestroy()  [RVA 0x33AEFF4]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$OnDestroy @ RVA 0x33AEFF4

void Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  System_Action_LBMOOFGGPEB__o **ppSVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_Type_o *pSVar5;
  System_String_o *str1;
  System_String_o *str2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_LBMOOFGGPEB__o *__this_00;
  System_Action_LBMOOFGGPEB__o *action;
  
                    /* try { // try from 034af000 to 035af007 has its CatchHandler @ 034af6e4 */
                    /* try { // try from 034af020 to 035af02b has its CatchHandler @ 034af6f0 */
  if ((DAT_04567d35 & 1) == 0) {
    FUN_01bab630(&System_Action<LBMOOFGGPEB>_TypeInfo);
                    /* try { // try from 034af040 to 035af047 has its CatchHandler @ 034af690 */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1609);
                    /* try { // try from 034af058 to 035af05f has its CatchHandler @ 034af694 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1610);
                    /* try { // try from 034af060 to 035af07f has its CatchHandler @ 034af6a0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1611);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1612);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_BaseDialog_NPHBIMAFLMO__);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 034af090 to 035af09b has its CatchHandler @ 034af688 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
                    /* try { // try from 034af0ac to 035af0b3 has its CatchHandler @ 034af678 */
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_ForEach__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveAllEventListener__);
                    /* try { // try from 034af0c0 to 035af0c3 has its CatchHandler @ 034af680 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_BaseDialog_<>c_PABELBJDFFA__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_<>c_TypeInfo);
    DAT_04567d35 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
                    /* try { // try from 034af0fc to 035af123 has its CatchHandler @ 034af464 */
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnUpdate(CJNHFNHJHPE,(MethodInfo *)0x0);
  __this_00 = (__this->fields).DIKHJEINHID;
  if ((Nekki_SF2_GUI_Dialogs_BaseDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = Nekki_SF2_GUI_Dialogs_BaseDialog_<>c_TypeInfo->static_fields->__9__57_0;
  if (action == (System_Action_LBMOOFGGPEB__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_BaseDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034af158 to 035af183 has its CatchHandler @ 034af460 */
    action = (System_Action_LBMOOFGGPEB__o *)thunk_FUN_01bda818(System_Action<LBMOOFGGPEB>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_BaseDialog_<>c_TypeInfo->static_fields->__9__57_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0) {
                    /* try { // try from 034af1b8 to 035af1c3 has its CatchHandler @ 034af458 */
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<LBMOOFGGPEB>_ForEach__);
                    /* try { // try from 034af1d4 to 035af1e3 has its CatchHandler @ 034af450 */
    Nekki_SF2_GUI_SFMonoBehaviour<object>__RemoveAllEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveAllEventListener__);
    (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034af1f4 to 035af1fb has its CatchHandler @ 034af410 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1609,(MethodInfo *)0x0)
    ;
                    /* try { // try from 034af204 to 035af20b has its CatchHandler @ 034af420 */
                    /* try { // try from 034af20c to 035af22b has its CatchHandler @ 034af454 */
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1610,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 034af238 to 035af23f has its CatchHandler @ 034af448 */
    pSVar5 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
                    /* try { // try from 034af250 to 035af257 has its CatchHandler @ 034af41c */
                    /* try { // try from 034af258 to 035af263 has its CatchHandler @ 034af440 */
      str1 = (System_String_o *)
             (*(pSVar5->klass->vtable)._8_unknown.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._8_unknown.method);
                    /* try { // try from 034af274 to 035af27b has its CatchHandler @ 034af444 */
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034af284 to 035af28b has its CatchHandler @ 034af418 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1611,
                 (MethodInfo *)0x0);
                    /* try { // try from 034af28c to 035af297 has its CatchHandler @ 034af43c */
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034af2a4 to 035af2ab has its CatchHandler @ 034af414 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1612,
                 (MethodInfo *)0x0);
      str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat
                         (pSVar4,str1,str2,(__this->fields).DMNJBHNNEKI,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
                    /* try { // try from 034af2f8 to 035af31b has its CatchHandler @ 034af430 */
      UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void Close()  [RVA 0x33AF308]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$Close @ RVA 0x33AF308

void Nekki_SF2_GUI_Dialogs_BaseDialog__Close
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  if ((DAT_04567d36 & 1) == 0) {
                    /* try { // try from 034af334 to 035af3ab has its CatchHandler @ 034af69c */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    DAT_04567d36 = 1;
  }
  local_24 = 1;
  uVar1 = thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,&local_24);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
  return;
}


// ===== protected virtual void IGDDKJJMDLP()  [RVA 0x33AF37C]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$IGDDKJJMDLP @ RVA 0x33AF37C

void Nekki_SF2_GUI_Dialogs_BaseDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_Button__o *__this_00;
  UnityEngine_Transform_o *transform;
  float fVar3;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567d37 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_get_Current__);
                    /* try { // try from 034af3c0 to 035af3c7 has its CatchHandler @ 034af45c */
    FUN_01bab630(&LabelButton_TypeInfo);
                    /* try { // try from 034af3cc to 035af3cf has its CatchHandler @ 034af438 */
                    /* try { // try from 034af3d4 to 035af3d7 has its CatchHandler @ 034af434 */
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_GetEnumerator__);
                    /* try { // try from 034af3dc to 035af3df has its CatchHandler @ 034af42c */
    DAT_04567d37 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
                    /* try { // try from 034af3e4 to 035af3e7 has its CatchHandler @ 034af428 */
  local_50.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 034af3ec to 035af3ef has its CatchHandler @ 034af424 */
                    /* try { // try from 034af3f4 to 035af3ff has its CatchHandler @ 034af44c */
  fVar3 = (float)(*(__this->klass->vtable)._10_OFGMFNANEGD.methodPtr)
                           (__this,(__this->klass->vtable)._10_OFGMFNANEGD.method);
  __this_00 = (__this->fields).EHGPDKENGAP;
  if (__this_00 != (System_Collections_Generic_List_Button__o *)0x0) {
                    /* try { // try from 034af404 to 035af407 has its CatchHandler @ 034af40c */
                    /* try { // try from 034af408 to 035af47f has its CatchHandler @ 034ae7c8 */
                    /* catch() { ... } // from try @ 034af404 with catch @ 034af40c */
                    /* catch() { ... } // from try @ 034af1f4 with catch @ 034af410 */
                    /* catch() { ... } // from try @ 034af2a4 with catch @ 034af414 */
                    /* catch() { ... } // from try @ 034af284 with catch @ 034af418 */
                    /* catch() { ... } // from try @ 034af250 with catch @ 034af41c */
                    /* catch() { ... } // from try @ 034af204 with catch @ 034af420 */
                    /* catch() { ... } // from try @ 034af3ec with catch @ 034af424 */
                    /* catch() { ... } // from try @ 034af3e4 with catch @ 034af428 */
                    /* catch() { ... } // from try @ 034af3dc with catch @ 034af42c */
                    /* catch() { ... } // from try @ 034af2f8 with catch @ 034af430 */
                    /* catch() { ... } // from try @ 034af3d4 with catch @ 034af434 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<Button>_GetEnumerator__);
                    /* catch() { ... } // from try @ 034af3cc with catch @ 034af438 */
                    /* catch() { ... } // from try @ 034af28c with catch @ 034af43c */
                    /* catch() { ... } // from try @ 034af258 with catch @ 034af440 */
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
                    /* catch() { ... } // from try @ 034af274 with catch @ 034af444 */
    local_50.fields._list = local_68.fields._list;
                    /* catch() { ... } // from try @ 034af238 with catch @ 034af448 */
    local_50.fields._current = local_68.fields._current;
    while( true ) {
                    /* catch() { ... } // from try @ 034af3f4 with catch @ 034af44c */
                    /* catch() { ... } // from try @ 034af1d4 with catch @ 034af450 */
                    /* catch() { ... } // from try @ 034af20c with catch @ 034af454 */
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__);
                    /* catch() { ... } // from try @ 034af1b8 with catch @ 034af458 */
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
        return;
      }
                    /* catch() { ... } // from try @ 034af3c0 with catch @ 034af45c */
                    /* catch() { ... } // from try @ 034af158 with catch @ 034af460 */
      if ((UnityEngine_Component_o *)local_50.fields._current == (UnityEngine_Component_o *)0x0)
      break;
                    /* catch() { ... } // from try @ 034af0fc with catch @ 034af464 */
      bVar1 = (LabelButton_TypeInfo->_2).naturalAligment;
                    /* try { // try from 034af480 to 035af483 has its CatchHandler @ 034af668 */
      if (((((UnityEngine_Component_c *)(local_50.fields._current)->klass)->_2).naturalAligment <
           bVar1) ||
         ((((UnityEngine_Component_c *)(local_50.fields._current)->klass)->_2).typeHierarchy
          [(ulong)bVar1 - 1] != (Il2CppClass *)LabelButton_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      transform = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)local_50.fields._current,(MethodInfo *)0x0);
                    /* try { // try from 034af4a0 to 035af50f has its CatchHandler @ 034af948 */
      UnityEngine_TransformExtensions__SetLocalPositionY
                (transform,-(fVar3 + 60.0),(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IsTouchBlocked()  [RVA 0x33AF540]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$IsTouchBlocked @ RVA 0x33AF540

bool Nekki_SF2_GUI_Dialogs_BaseDialog__IsTouchBlocked
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar2;
  
                    /* try { // try from 034af558 to 035af55f has its CatchHandler @ 034af70c */
  if ((DAT_04567d38 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d38 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034af574 to 035af5c7 has its CatchHandler @ 034af8c0 */
  pUVar2 = (__this->fields).MCMBIPEKNLK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).MCMBIPEKNLK;
    if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034af5cc to 035af5cf has its CatchHandler @ 034af6fc */
  return false;
}


// ===== private void GCGMACNOCJA(bool CJNHFNHJHPE)  [RVA 0x33AF5D4]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$GCGMACNOCJA @ RVA 0x33AF5D4

void Nekki_SF2_GUI_Dialogs_BaseDialog__GCGMACNOCJA
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 034af5d4 to 035af5d7 has its CatchHandler @ 034af6d8 */
  (__this->fields)._BOGAKJOFOEK_k__BackingField = CJNHFNHJHPE;
                    /* try { // try from 034af5dc to 035af5df has its CatchHandler @ 034af6d4 */
  return;
}


// ===== protected virtual void Start()  [RVA 0x33AF5E0]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$Start @ RVA 0x33AF5E0

void Nekki_SF2_GUI_Dialogs_BaseDialog__Start
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034af5e4 to 035af5e7 has its CatchHandler @ 034af6cc */
                    /* try { // try from 034af5ec to 035af5ef has its CatchHandler @ 034af6c8 */
                    /* try { // try from 034af5f4 to 035af5f7 has its CatchHandler @ 034af6b8 */
                    /* try { // try from 034af5fc to 035af5ff has its CatchHandler @ 034af6b0 */
                    /* try { // try from 034af604 to 035af607 has its CatchHandler @ 034af6ac */
                    /* try { // try from 034af60c to 035af60f has its CatchHandler @ 034af6a8 */
  if ((DAT_04567d39 & 1) == 0) {
                    /* try { // try from 034af614 to 035af617 has its CatchHandler @ 034af6a4 */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_BaseDialog_NPHBIMAFLMO__);
                    /* try { // try from 034af62c to 035af633 has its CatchHandler @ 034af8c0 */
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
                    /* try { // try from 034af63c to 035af63f has its CatchHandler @ 034af698 */
    DAT_04567d39 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034af644 to 035af647 has its CatchHandler @ 034af68c */
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
                    /* try { // try from 034af64c to 035af64f has its CatchHandler @ 034af684 */
                    /* try { // try from 034af654 to 035af65b has its CatchHandler @ 034af67c */
  System_Action___ctor();
                    /* try { // try from 034af660 to 035af663 has its CatchHandler @ 034af674 */
                    /* try { // try from 034af664 to 035af72f has its CatchHandler @ 034ae7c8 */
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034af480 with catch @ 034af668 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 034af660 with catch @ 034af674 */
  Nekki_Utils_GlobalTimer__add_OnUpdate(CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034af0ac with catch @ 034af678 */
                    /* catch() { ... } // from try @ 034af654 with catch @ 034af67c */
                    /* catch() { ... } // from try @ 034af0c0 with catch @ 034af680 */
                    /* catch() { ... } // from try @ 034af64c with catch @ 034af684 */
                    /* catch() { ... } // from try @ 034af090 with catch @ 034af688 */
  (*(__this->klass->vtable)._32_GKPJMHOFIOO.methodPtr)
            (__this,(__this->klass->vtable)._32_GKPJMHOFIOO.method);
                    /* catch() { ... } // from try @ 034af644 with catch @ 034af68c */
                    /* catch() { ... } // from try @ 034af040 with catch @ 034af690 */
                    /* catch() { ... } // from try @ 034af058 with catch @ 034af694 */
                    /* catch() { ... } // from try @ 034af63c with catch @ 034af698 */
                    /* catch() { ... } // from try @ 034af334 with catch @ 034af69c */
  (*(__this->klass->vtable)._17_GLJGIJNALCA.methodPtr)
            (__this,(__this->klass->vtable)._17_GLJGIJNALCA.method);
                    /* catch() { ... } // from try @ 034af060 with catch @ 034af6a0 */
                    /* catch() { ... } // from try @ 034af614 with catch @ 034af6a4 */
                    /* catch() { ... } // from try @ 034af60c with catch @ 034af6a8 */
                    /* catch() { ... } // from try @ 034af604 with catch @ 034af6ac */
                    /* catch() { ... } // from try @ 034af5fc with catch @ 034af6b0 */
  (*(__this->klass->vtable)._18_GLANJNFACKI.methodPtr)
            (__this,(__this->klass->vtable)._18_GLANJNFACKI.method);
                    /* catch() { ... } // from try @ 034aefdc with catch @ 034af6b4 */
                    /* catch() { ... } // from try @ 034af5f4 with catch @ 034af6b8 */
                    /* catch() { ... } // from try @ 034aef8c with catch @ 034af6bc */
                    /* catch() { ... } // from try @ 034aef3c with catch @ 034af6c0 */
                    /* catch() { ... } // from try @ 034aef54 with catch @ 034af6c4 */
                    /* catch() { ... } // from try @ 034af5ec with catch @ 034af6c8 */
  (*(__this->klass->vtable)._30_EJHAPHAHMHG.methodPtr)
            (__this,(__this->fields).DMNJBHNNEKI,(__this->klass->vtable)._30_EJHAPHAHMHG.method);
                    /* catch() { ... } // from try @ 034af5e4 with catch @ 034af6cc */
                    /* catch() { ... } // from try @ 034aefac with catch @ 034af6d0 */
                    /* catch() { ... } // from try @ 034af5dc with catch @ 034af6d4 */
                    /* catch() { ... } // from try @ 034af5d4 with catch @ 034af6d8 */
                    /* catch() { ... } // from try @ 034aefe4 with catch @ 034af6dc */
                    /* catch() { ... } // from try @ 034aeef4 with catch @ 034af6e0 */
                    /* catch() { ... } // from try @ 034af000 with catch @ 034af6e4 */
                    /* catch() { ... } // from try @ 034aefcc with catch @ 034af6e8 */
                    /* WARNING: Could not recover jumptable at 0x034af6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 034aefa4 with catch @ 034af6ec */
  (*(__this->klass->vtable)._27_LCGFJKFJKJK.methodPtr)
            (__this,(ulong)(uint)(__this->fields).JOLPNMNNKCJ,
             (__this->klass->vtable)._27_LCGFJKFJKJK.method);
  return;
}


// ===== public virtual void OnBackKeyClicked(object IMMNELPBGIF)  [RVA 0x33AF6F0]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$OnBackKeyClicked @ RVA 0x33AF6F0

void Nekki_SF2_GUI_Dialogs_BaseDialog__OnBackKeyClicked
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  undefined8 uVar2;
  MethodInfo *extraout_x1;
  undefined4 local_14;
  
                    /* catch() { ... } // from try @ 034af020 with catch @ 034af6f0 */
                    /* catch() { ... } // from try @ 034aeecc with catch @ 034af6f4 */
                    /* catch() { ... } // from try @ 034aeeb4 with catch @ 034af6f8 */
                    /* catch() { ... } // from try @ 034af5cc with catch @ 034af6fc */
                    /* catch() { ... } // from try @ 034aef5c with catch @ 034af700 */
                    /* catch() { ... } // from try @ 034aef14 with catch @ 034af704 */
  if ((DAT_04567d3a & 1) == 0) {
                    /* catch() { ... } // from try @ 034aee98 with catch @ 034af708 */
                    /* catch() { ... } // from try @ 034af558 with catch @ 034af70c */
                    /* catch() { ... } // from try @ 034aee38 with catch @ 034af710 */
    FUN_01bab630(&int_TypeInfo);
                    /* catch() { ... } // from try @ 034aeddc with catch @ 034af714 */
    DAT_04567d3a = 1;
    IMMNELPBGIF = (Il2CppObject *)extraout_x1;
  }
  if (((__this->fields).IsIgnoreBack == false) &&
     (bVar1 = Nekki_SF2_GUI_Dialogs_BaseDialog__IsTouchBlocked(__this,(MethodInfo *)IMMNELPBGIF),
     !bVar1)) {
                    /* try { // try from 034af730 to 035af733 has its CatchHandler @ 034af8c4 */
                    /* try { // try from 034af734 to 035af7f7 has its CatchHandler @ 034ae7c8 */
    local_14 = (*(__this->klass->vtable)._26_GetLeftButtonId.methodPtr)
                         (__this,(__this->klass->vtable)._26_GetLeftButtonId.method);
    uVar2 = thunk_FUN_01bda448(int_TypeInfo,&local_14);
    (*(__this->klass->vtable)._13_OnClose.methodPtr)
              (__this,uVar2,(__this->klass->vtable)._13_OnClose.method);
  }
  return;
}


// ===== private void NPHBIMAFLMO()  [RVA 0x33AF784]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$NPHBIMAFLMO @ RVA 0x33AF784

void Nekki_SF2_GUI_Dialogs_BaseDialog__NPHBIMAFLMO
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  System_Type_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar7;
  
  if ((DAT_04567d3b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_3404/*"BaseDialog::UpdateInputBlockers : use base.Init() to initialize this object in "*/);
    DAT_04567d3b = 1;
    method = extraout_x1;
  }
  pUVar7 = (__this->fields).MCMBIPEKNLK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 034af7f8 to 035af843 has its CatchHandler @ 034afa20 */
    pUVar7 = (__this->fields).MCMBIPEKNLK;
    if ((pUVar7 == (UnityEngine_RectTransform_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034af940;
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar7 = (__this->fields).MCMBIPEKNLK;
      if ((pUVar7 == (UnityEngine_RectTransform_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_034af940;
      iVar2 = UnityEngine_Transform__GetSiblingIndex(pUVar4,(MethodInfo *)0x0);
      pUVar7 = (__this->fields).MCMBIPEKNLK;
                    /* try { // try from 034af848 to 035af84f has its CatchHandler @ 034af954 */
      if ((pUVar7 == (UnityEngine_RectTransform_o *)0x0) ||
         ((pUVar4 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
          pUVar4 == (UnityEngine_Transform_o *)0x0 ||
          (pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0),
          pUVar4 == (UnityEngine_Transform_o *)0x0)))) goto LAB_034af940;
                    /* try { // try from 034af860 to 035af87f has its CatchHandler @ 034afa20 */
      iVar3 = UnityEngine_Transform__get_childCount(pUVar4,(MethodInfo *)0x0);
      if (iVar2 < iVar3) {
        pUVar7 = (__this->fields).MCMBIPEKNLK;
        if ((pUVar7 == (UnityEngine_RectTransform_o *)0x0) ||
           (pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
           pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_034af940;
                    /* try { // try from 034af880 to 035af883 has its CatchHandler @ 034af934 */
                    /* try { // try from 034af884 to 035af887 has its CatchHandler @ 034ae7c8 */
        UnityEngine_Transform__SetAsLastSibling(pUVar4,(MethodInfo *)0x0);
      }
    }
  }
                    /* try { // try from 034af888 to 035af88b has its CatchHandler @ 034af904 */
                    /* try { // try from 034af88c to 035af88f has its CatchHandler @ 034af900 */
  pUVar7 = (__this->fields).FKAGEHHHMAB;
                    /* try { // try from 034af890 to 035af893 has its CatchHandler @ 034af8fc */
                    /* try { // try from 034af894 to 035af897 has its CatchHandler @ 034af8f8 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034af898 to 035af89b has its CatchHandler @ 034af8f4 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034af89c to 035af89f has its CatchHandler @ 034af8f0 */
                    /* try { // try from 034af8a0 to 035af8a7 has its CatchHandler @ 034af8dc */
                    /* try { // try from 034af8a8 to 035af8ab has its CatchHandler @ 034af8d8 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 034af8ac to 035af8af has its CatchHandler @ 034af8d0 */
  if (bVar1) {
                    /* try { // try from 034af8b0 to 035af8b7 has its CatchHandler @ 034ae7c8 */
    pUVar7 = (__this->fields).FKAGEHHHMAB;
                    /* try { // try from 034af8b8 to 035af8bf has its CatchHandler @ 034afa20 */
                    /* catch() { ... } // from try @ 034af574 with catch @ 034af8c0
                       catch() { ... } // from try @ 034af62c with catch @ 034af8c0
                       try { // try from 034af8c0 to 035af983 has its CatchHandler @ 034ae7c8 */
    if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                    /* catch() { ... } // from try @ 034af730 with catch @ 034af8c4 */
                    /* catch() { ... } // from try @ 034af8ac with catch @ 034af8d0 */
      UnityEngine_Transform__SetAsFirstSibling(pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
  else {
                    /* catch() { ... } // from try @ 034af53c with catch @ 034af8d4 */
                    /* catch() { ... } // from try @ 034af8a8 with catch @ 034af8d8 */
                    /* catch() { ... } // from try @ 034af8a0 with catch @ 034af8dc */
    pSVar5 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034aec84 with catch @ 034af8e0 */
    if (pSVar5 != (System_Type_o *)0x0) {
                    /* catch() { ... } // from try @ 034aec74 with catch @ 034af8e4 */
                    /* catch() { ... } // from try @ 034aed1c with catch @ 034af8e8 */
                    /* catch() { ... } // from try @ 034aec54 with catch @ 034af8ec */
      pSVar6 = (System_String_o *)
               (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
                    /* catch() { ... } // from try @ 034af89c with catch @ 034af8f0 */
                    /* catch() { ... } // from try @ 034af898 with catch @ 034af8f4 */
                    /* catch() { ... } // from try @ 034af894 with catch @ 034af8f8 */
                    /* catch() { ... } // from try @ 034af890 with catch @ 034af8fc */
                    /* catch() { ... } // from try @ 034af88c with catch @ 034af900 */
                    /* catch() { ... } // from try @ 034af888 with catch @ 034af904 */
                    /* catch() { ... } // from try @ 034aed04 with catch @ 034af908 */
      pSVar6 = System_String__Concat(StringLiteral_3404/*"BaseDialog::UpdateInputBlockers : use base.Init() to initialize this object in "*/,pSVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034aec4c with catch @ 034af90c */
                    /* catch() { ... } // from try @ 034aec34 with catch @ 034af910 */
                    /* catch() { ... } // from try @ 034aeda0 with catch @ 034af914 */
                    /* catch() { ... } // from try @ 034aed8c with catch @ 034af918 */
                    /* catch() { ... } // from try @ 034aecd4 with catch @ 034af91c */
                    /* catch() { ... } // from try @ 034aed74 with catch @ 034af920 */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034aeccc with catch @ 034af924 */
                    /* catch() { ... } // from try @ 034aecb4 with catch @ 034af928 */
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
                    /* catch() { ... } // from try @ 034aec18 with catch @ 034af92c */
                    /* catch() { ... } // from try @ 034aed24 with catch @ 034af930 */
                    /* catch() { ... } // from try @ 034af880 with catch @ 034af934 */
                    /* catch() { ... } // from try @ 034aec00 with catch @ 034af938 */
                    /* catch() { ... } // from try @ 034aec8c with catch @ 034af93c */
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      return;
    }
  }
LAB_034af940:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034aebf4 with catch @ 034af940 */
  FUN_01bab8c8();
}


// ===== protected RectTransform BHIPAGACGFO()  [RVA 0x33AE020]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$BHIPAGACGFO @ RVA 0x33AE020

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO
          (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567d3c & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04567d3c = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._content;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  if ((pUVar1 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar1->klass != UnityEngine_RectTransform_TypeInfo)) {
    pUVar1 = (UnityEngine_RectTransform_o *)0x0;
  }
  return pUVar1;
}


// ===== public virtual void UpdateHeaderPosition()  [RVA 0x33AF944]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$UpdateHeaderPosition @ RVA 0x33AF944

void Nekki_SF2_GUI_Dialogs_BaseDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_Transform_o *transform;
  float fVar1;
  
                    /* catch() { ... } // from try @ 034aece0 with catch @ 034af944 */
                    /* catch() { ... } // from try @ 034af4a0 with catch @ 034af948 */
                    /* catch() { ... } // from try @ 034aed4c with catch @ 034af94c */
                    /* catch() { ... } // from try @ 034aebd8 with catch @ 034af950 */
  __this_00 = (__this->fields)._header;
                    /* catch() { ... } // from try @ 034af848 with catch @ 034af954 */
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* catch() { ... } // from try @ 034aeb78 with catch @ 034af958 */
                    /* catch() { ... } // from try @ 034aeb1c with catch @ 034af95c */
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    fVar1 = (float)(*(__this->klass->vtable)._10_OFGMFNANEGD.methodPtr)
                             (__this,(__this->klass->vtable)._10_OFGMFNANEGD.method);
                    /* try { // try from 034af984 to 035af987 has its CatchHandler @ 034af994 */
    UnityEngine_TransformExtensions__SetLocalPositionY(transform,fVar1 + 64.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034af984 with catch @ 034af994 */
  FUN_01bab8c8();
}


// ===== public virtual void SetTextOffset(Vector2 MJBMLNKAPGC)  [RVA 0x33AF998]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$SetTextOffset @ RVA 0x33AF998

void Nekki_SF2_GUI_Dialogs_BaseDialog__SetTextOffset
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,UnityEngine_Vector2_o MJBMLNKAPGC,
               MethodInfo *method)

{
  return;
}


// ===== public virtual int GetLeftButtonId()  [RVA 0x33AF99C]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$GetLeftButtonId @ RVA 0x33AF99C

int32_t Nekki_SF2_GUI_Dialogs_BaseDialog__GetLeftButtonId
                  (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar2;
  
                    /* try { // try from 034af9a4 to 035afa0b has its CatchHandler @ 034afa20 */
  if ((DAT_04567d3d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d3d = 1;
    method = extraout_x1;
  }
  pLVar2 = (__this->fields)._btnCancel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar2 = (__this->fields)._btnCancel;
  }
  else {
                    /* try { // try from 034afa0c to 035afa17 has its CatchHandler @ 034ae7c8 */
    pLVar2 = (__this->fields)._btnOK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034afa18 to 035afa1f has its CatchHandler @ 034afa20 */
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 034af7f8 with catch @ 034afa20
                       catch() { ... } // from try @ 034af860 with catch @ 034afa20
                       catch() { ... } // from try @ 034af8b8 with catch @ 034afa20
                       catch() { ... } // from try @ 034af9a4 with catch @ 034afa20
                       catch() { ... } // from try @ 034afa18 with catch @ 034afa20 */
                    /* try { // try from 034afa24 to 035afb73 has its CatchHandler @ 034afa24
                       catch() { ... } // from try @ 034afa24 with catch @ 034afa24
                       catch() { ... } // from try @ 034afcc0 with catch @ 034afa24
                       catch() { ... } // from try @ 034afd74 with catch @ 034afa24
                       catch() { ... } // from try @ 034afd7c with catch @ 034afa24
                       catch() { ... } // from try @ 034afe34 with catch @ 034afa24 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pLVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return 1;
    }
    pLVar2 = (__this->fields)._btnOK;
  }
  if (pLVar2 != (LabelButton_o *)0x0) {
    return (pLVar2->fields).super.super.ButtonId;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public LabelButton get_ButtonCancel()  [RVA 0x33AFA4C]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$get_ButtonCancel @ RVA 0x33AFA4C

LabelButton_o *
Nekki_SF2_GUI_Dialogs_BaseDialog__get_ButtonCancel
          (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  return (__this->fields)._btnCancel;
}


// ===== protected virtual void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x33AFA54]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$LCGFJKFJKJK @ RVA 0x33AFA54

void Nekki_SF2_GUI_Dialogs_BaseDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,int32_t DNBBBGEENMM,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_Collections_Generic_List_Button__o *pSVar6;
  UnityEngine_UI_Button_array *pUVar7;
  LabelButton_o *pLVar8;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  
  if ((DAT_04567d3e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_Clear__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d3e = 1;
  }
  pSVar6 = (__this->fields).EHGPDKENGAP;
  if (pSVar6 == (System_Collections_Generic_List_Button__o *)0x0) goto LAB_034afd50;
  length = (pSVar6->fields)._size;
  (pSVar6->fields)._size = 0;
  (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,length,(MethodInfo *)0x0);
  }
  pLVar8 = (__this->fields)._btnOK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((DNBBBGEENMM | 2U) == 3) {
      (*(__this->klass->vtable)._15_ACICKHKFILK.methodPtr)
                (__this,(__this->fields)._btnOK,1,(__this->klass->vtable)._15_ACICKHKFILK.method);
      pLVar8 = (__this->fields)._btnOK;
      if (pLVar8 == (LabelButton_o *)0x0) goto LAB_034afd50;
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0);
      fVar9 = 0.0;
      if (DNBBBGEENMM == 3) {
        pLVar8 = (__this->fields)._btnOK;
        if (pLVar8 == (LabelButton_o *)0x0) goto LAB_034afd50;
        UVar10 = LabelButton__get_rect(pLVar8,(MethodInfo *)0x0);
        fVar9 = UVar10.fields.m_Width * 0.5 + 32.0;
      }
      UnityEngine_TransformExtensions__SetLocalPositionX(pUVar4,fVar9,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<Button>_Add__;
                    /* try { // try from 034afb74 to 035afb9b has its CatchHandler @ 034afda0 */
      pSVar6 = (__this->fields).EHGPDKENGAP;
      if (pSVar6 == (System_Collections_Generic_List_Button__o *)0x0) goto LAB_034afd50;
      pLVar8 = (__this->fields)._btnOK;
      pUVar7 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pUVar7 == (UnityEngine_UI_Button_array *)0x0) goto LAB_034afd50;
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pUVar7->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pUVar7->m_Items[(int)uVar1] = (UnityEngine_UI_Button_o *)pLVar8;
        thunk_FUN_01c20e04(pUVar7->m_Items + (int)uVar1);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pLVar8,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      pLVar8 = (__this->fields)._btnOK;
                    /* try { // try from 034afbd0 to 035afbfb has its CatchHandler @ 034afd9c */
      if ((pLVar8 == (LabelButton_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034afd50;
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
    }
  }
  pLVar8 = (__this->fields)._btnCancel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pLVar8 = (__this->fields)._btnCancel;
                    /* try { // try from 034afc30 to 035afc3b has its CatchHandler @ 034afd90 */
    if ((DNBBBGEENMM & 0xfffffffeU) == 2) {
                    /* try { // try from 034afc4c to 035afcbf has its CatchHandler @ 034afd98 */
      (*(__this->klass->vtable)._15_ACICKHKFILK.methodPtr)
                (__this,pLVar8,2,(__this->klass->vtable)._15_ACICKHKFILK.method);
      pLVar8 = (__this->fields)._btnCancel;
      if (pLVar8 != (LabelButton_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0);
        fVar9 = 0.0;
        if (DNBBBGEENMM == 3) {
          pLVar8 = (__this->fields)._btnCancel;
          if (pLVar8 == (LabelButton_o *)0x0) goto LAB_034afd50;
          UVar10 = LabelButton__get_rect(pLVar8,(MethodInfo *)0x0);
          fVar9 = -(UVar10.fields.m_Width * 0.5 + 32.0);
        }
        UnityEngine_TransformExtensions__SetLocalPositionX(pUVar4,fVar9,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<Button>_Add__;
        pSVar6 = (__this->fields).EHGPDKENGAP;
        if (pSVar6 != (System_Collections_Generic_List_Button__o *)0x0) {
          pLVar8 = (__this->fields)._btnCancel;
          pUVar7 = (pSVar6->fields)._items;
                    /* try { // try from 034afcc0 to 035afd5f has its CatchHandler @ 034afa24 */
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pUVar7 != (UnityEngine_UI_Button_array *)0x0) {
            uVar1 = (pSVar6->fields)._size;
            if (uVar1 < (uint)pUVar7->max_length) {
              (pSVar6->fields)._size = uVar1 + 1;
              pUVar7->m_Items[(int)uVar1] = (UnityEngine_UI_Button_o *)pLVar8;
              thunk_FUN_01c20e04(pUVar7->m_Items + (int)uVar1);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pLVar8,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            goto LAB_034afd30;
          }
        }
      }
    }
    else if ((pLVar8 != (LabelButton_o *)0x0) &&
            (pUVar5 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0),
            pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      goto LAB_034afd30;
    }
LAB_034afd50:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_034afd30:
                    /* WARNING: Could not recover jumptable at 0x034afd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._21_IGDDKJJMDLP.methodPtr)
            (__this,(__this->klass->vtable)._21_IGDDKJJMDLP.method);
  return;
}


// ===== public virtual void SetImageOffsetX(float MJBMLNKAPGC)  [RVA 0x33AFD54]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$SetImageOffsetX @ RVA 0x33AFD54

void Nekki_SF2_GUI_Dialogs_BaseDialog__SetImageOffsetX
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,float MJBMLNKAPGC,MethodInfo *method)

{
  return;
}


// ===== private RectTransform JLBIECFKGPL(string KGLJICLJHEL)  [RVA 0x33AE160]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$JLBIECFKGPL @ RVA 0x33AE160

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Dialogs_BaseDialog__JLBIECFKGPL
          (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,System_String_o *KGLJICLJHEL,
          MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this_03;
  UnityEngine_RectTransform_o *__this_04;
  Il2CppObject *pIVar1;
  UnityEngine_Rect_o UVar2;
  
                    /* catch() { ... } // from try @ 034addd4 with catch @ 034ae160 */
                    /* catch() { ... } // from try @ 034addf8 with catch @ 034ae164 */
                    /* catch() { ... } // from try @ 034ae144 with catch @ 034ae168 */
                    /* catch() { ... } // from try @ 034ae140 with catch @ 034ae16c */
                    /* catch() { ... } // from try @ 034ae13c with catch @ 034ae170 */
                    /* catch() { ... } // from try @ 034addcc with catch @ 034ae174 */
                    /* catch() { ... } // from try @ 034add3c with catch @ 034ae178 */
                    /* catch() { ... } // from try @ 034ae138 with catch @ 034ae17c */
                    /* catch() { ... } // from try @ 034ae134 with catch @ 034ae180 */
                    /* catch() { ... } // from try @ 034add7c with catch @ 034ae184 */
  if ((DAT_04567d3f & 1) == 0) {
                    /* catch() { ... } // from try @ 034add8c with catch @ 034ae188 */
                    /* catch() { ... } // from try @ 034add54 with catch @ 034ae18c */
                    /* catch() { ... } // from try @ 034add94 with catch @ 034ae190 */
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
                    /* catch() { ... } // from try @ 034add20 with catch @ 034ae194 */
                    /* catch() { ... } // from try @ 034adcfc with catch @ 034ae198 */
                    /* catch() { ... } // from try @ 034add08 with catch @ 034ae19c */
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<NonDrawingGraphic>__);
                    /* catch() { ... } // from try @ 034adcd8 with catch @ 034ae1a0 */
                    /* catch() { ... } // from try @ 034ae128 with catch @ 034ae1a4 */
                    /* catch() { ... } // from try @ 034adc78 with catch @ 034ae1a8 */
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
                    /* catch() { ... } // from try @ 034adc1c with catch @ 034ae1ac */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
                    /* try { // try from 034ae1bc to 035ae1bf has its CatchHandler @ 034ae1d4 */
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04567d3f = 1;
  }
  __this_00 = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
                    /* catch() { ... } // from try @ 034ae1bc with catch @ 034ae1d4 */
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
                    /* try { // try from 034ae1e4 to 035ae24b has its CatchHandler @ 034ae260 */
    __this_01 = UnityEngine_GameObject__get_transform
                          ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      UnityEngine_Object__set_name(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
      __this_02 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            ((UnityEngine_GameObject_o *)__this_00,
                             Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 034ae24c to 035ae257 has its CatchHandler @ 034ad8dc */
        UnityEngine_RectTransform__set_anchorMin
                  (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                    /* try { // try from 034ae258 to 035ae25f has its CatchHandler @ 034ae260 */
                    /* catch() { ... } // from try @ 034ae1e4 with catch @ 034ae260
                       catch() { ... } // from try @ 034ae258 with catch @ 034ae260 */
                    /* try { // try from 034ae264 to 035ae3f3 has its CatchHandler @ 034ae264
                       catch() { ... } // from try @ 034ae264 with catch @ 034ae264
                       catch() { ... } // from try @ 034ae5c8 with catch @ 034ae264
                       catch() { ... } // from try @ 034ae694 with catch @ 034ae264
                       catch() { ... } // from try @ 034ae69c with catch @ 034ae264
                       catch() { ... } // from try @ 034ae7b0 with catch @ 034ae264 */
        UnityEngine_RectTransform__set_anchorMax
                  (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_pivot
                  (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
        __this_03 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
        if (((__this_03 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) &&
            (__this_04 = (UnityEngine_RectTransform_o *)
                         UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
            __this_04 != (UnityEngine_RectTransform_o *)0x0)) &&
           (__this_04->klass == UnityEngine_RectTransform_TypeInfo)) {
          UVar2 = UnityEngine_RectTransform__get_rect(__this_04,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_02,(UnityEngine_Vector2_o)UVar2.fields._8_8_,(MethodInfo *)0x0);
          UnityEngine_GameObject__AddComponent<object>
                    ((UnityEngine_GameObject_o *)__this_00,
                     Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
          pIVar1 = UnityEngine_GameObject__AddComponent<object>
                             ((UnityEngine_GameObject_o *)__this_00,
                              Method_UnityEngine_GameObject_AddComponent<NonDrawingGraphic>__);
          if (pIVar1 != (Il2CppObject *)0x0) {
            (*pIVar1->klass->vtable[0x19].methodPtr)(pIVar1,1,pIVar1->klass->vtable[0x19].method);
            return __this_02;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void GIENGNEGHPJ(string GKLEODLEPMA = "", string DOEJEADIJEJ = "OK", string BECCMDCHEOP = "CANCEL", BaseDialog.OFBBBIDKKOD DNBBBGEENMM = 0)  [RVA 0x33AFD58]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$GIENGNEGHPJ @ RVA 0x33AFD58

void Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,System_String_o *GKLEODLEPMA,
               System_String_o *DOEJEADIJEJ,System_String_o *BECCMDCHEOP,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_Type_o *pSVar4;
  System_String_o *str1;
  System_String_o *str2;
  GCIFMNHADDF_o *__this_00;
  System_String_o **ppSVar5;
  BackKeyManager_o *__this_01;
  MethodInfo *method_00;
  
                    /* try { // try from 034afd60 to 035afd67 has its CatchHandler @ 034afd94 */
                    /* try { // try from 034afd68 to 035afd6b has its CatchHandler @ 034afd8c */
                    /* try { // try from 034afd6c to 035afd6f has its CatchHandler @ 034afd88 */
                    /* try { // try from 034afd70 to 035afd73 has its CatchHandler @ 034afd8c */
                    /* try { // try from 034afd74 to 035afd77 has its CatchHandler @ 034afa24 */
                    /* try { // try from 034afd78 to 035afd7b has its CatchHandler @ 034afd84 */
                    /* try { // try from 034afd7c to 035afdaf has its CatchHandler @ 034afa24 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034afd78 with catch @ 034afd84
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034afd6c with catch @ 034afd88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034afd68 with catch @ 034afd8c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 034afd70 with catch @ 034afd8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034afc30 with catch @ 034afd90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034afd60 with catch @ 034afd94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034afc4c with catch @ 034afd98
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034afbd0 with catch @ 034afd9c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034afb74 with catch @ 034afda0
                        */
  if ((DAT_04567d40 & 1) == 0) {
                    /* try { // try from 034afdb0 to 035afdb3 has its CatchHandler @ 034afdc4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1613);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1614);
                    /* catch() { ... } // from try @ 034afdb0 with catch @ 034afdc4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1615);
                    /* try { // try from 034afdcc to 035afe33 has its CatchHandler @ 034afe48 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1616);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04567d40 = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1613,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1614,(MethodInfo *)0x0);
                    /* try { // try from 034afe34 to 035afe3f has its CatchHandler @ 034afa24 */
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 034afe40 to 035afe47 has its CatchHandler @ 034afe48 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034afdcc with catch @ 034afe48
                       catch(type#2 @ 00000000) { ... } // from try @ 034afe40 with catch @ 034afe48
                        */
                    /* try { // try from 034afe4c to 035b0357 has its CatchHandler @ 034afe4c
                       catch() { ... } // from try @ 034afe4c with catch @ 034afe4c
                       catch() { ... } // from try @ 034b0540 with catch @ 034afe4c
                       catch() { ... } // from try @ 034b07e4 with catch @ 034afe4c
                       catch() { ... } // from try @ 034b0c0c with catch @ 034afe4c
                       catch() { ... } // from try @ 034b0eac with catch @ 034afe4c
                       catch() { ... } // from try @ 034b1164 with catch @ 034afe4c
                       catch() { ... } // from try @ 034b14a0 with catch @ 034afe4c
                       catch() { ... } // from try @ 034b1834 with catch @ 034afe4c
                       catch() { ... } // from try @ 034b1908 with catch @ 034afe4c
                       catch() { ... } // from try @ 034b19b4 with catch @ 034afe4c
                       catch() { ... } // from try @ 034b19f0 with catch @ 034afe4c
                       catch() { ... } // from try @ 034b1c30 with catch @ 034afe4c
                       catch() { ... } // from try @ 034b1d40 with catch @ 034afe4c
                       catch() { ... } // from try @ 034b1e28 with catch @ 034afe4c
                       catch() { ... } // from try @ 034b1f18 with catch @ 034afe4c
                       catch() { ... } // from try @ 034b1fd0 with catch @ 034afe4c
                       catch() { ... } // from try @ 034b2084 with catch @ 034afe4c
                       catch() { ... } // from try @ 034b2140 with catch @ 034afe4c */
  pSVar4 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (pSVar4 != (System_Type_o *)0x0) {
    str1 = (System_String_o *)
           (*(pSVar4->klass->vtable)._8_unknown.methodPtr)
                     (pSVar4,(pSVar4->klass->vtable)._8_unknown.method);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1615,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1616,(MethodInfo *)0x0)
    ;
    str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(pSVar3,str1,str2,GKLEODLEPMA,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_BaseDialog__MMHCNDPCGGP(__this,method_00);
    __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (GCIFMNHADDF_o *)0x0) {
      GCIFMNHADDF__EDJNGLJDHFO
                (__this_00,(__this->fields)._hideDialogCanvasBackgnd == false,__this,
                 (MethodInfo *)0x0);
      ppSVar5 = &(__this->fields).DMNJBHNNEKI;
      *ppSVar5 = GKLEODLEPMA;
      thunk_FUN_01c20e04(ppSVar5,GKLEODLEPMA);
      ppSVar5 = &(__this->fields).NIEHEOKFPAN;
      *ppSVar5 = DOEJEADIJEJ;
      thunk_FUN_01c20e04(ppSVar5,DOEJEADIJEJ);
      ppSVar5 = &(__this->fields).LLBBHINDIDB;
      *ppSVar5 = BECCMDCHEOP;
      thunk_FUN_01c20e04(ppSVar5,BECCMDCHEOP);
      (__this->fields).JOLPNMNNKCJ = DNBBBGEENMM;
      __this_01 = BackKeyManager__get_Instance((MethodInfo *)0x0);
      if (__this_01 != (BackKeyManager_o *)0x0) {
        BackKeyManager__AddBackKeyController(__this_01,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x33AFF9C]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$EJHAPHAHMHG @ RVA 0x33AFF9C

void Nekki_SF2_GUI_Dialogs_BaseDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  BHEDGAKGKPO_StaticFields *pBVar2;
  
  if ((DAT_04567d41 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04567d41 = 1;
  }
  pNVar1 = (__this->fields)._header;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,0x98,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._header;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar2 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                ((pBVar2->KPJHDEIJPAN).fields.r,(pBVar2->KPJHDEIJPAN).fields.g,
                 (pBVar2->KPJHDEIJPAN).fields.b,(pBVar2->KPJHDEIJPAN).fields.a,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      pNVar1 = (__this->fields)._header;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        if ((__this->fields).FCBFEJDLODF == false) {
          (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                    (pNVar1,EHNFGMGKCHO,(pNVar1->klass->vtable)._75_set_text.method);
        }
        else {
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar1,EHNFGMGKCHO,(MethodInfo *)0x0);
        }
                    /* WARNING: Could not recover jumptable at 0x034b0078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._24_UpdateHeaderPosition.methodPtr)
                  (__this,(__this->klass->vtable)._24_UpdateHeaderPosition.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void SetImageOffsetY(float MJBMLNKAPGC)  [RVA 0x33B0080]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$SetImageOffsetY @ RVA 0x33B0080

void Nekki_SF2_GUI_Dialogs_BaseDialog__SetImageOffsetY
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,float MJBMLNKAPGC,MethodInfo *method)

{
  return;
}


// ===== protected virtual void GKPJMHOFIOO()  [RVA 0x33B0084]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$GKPJMHOFIOO @ RVA 0x33B0084

void Nekki_SF2_GUI_Dialogs_BaseDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public virtual void Init(object IMMNELPBGIF)  [RVA 0x33B0088]
// Nekki.SF2.GUI.Dialogs.BaseDialog$$Init @ RVA 0x33B0088

void Nekki_SF2_GUI_Dialogs_BaseDialog__Init
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567d42 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567d42 = 1;
    IMMNELPBGIF = (Il2CppObject *)extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__MMHCNDPCGGP(__this,(MethodInfo *)IMMNELPBGIF);
                    /* WARNING: Could not recover jumptable at 0x034b011c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._29_GIENGNEGHPJ.methodPtr)
            (__this,StringLiteral_1/*""*/,StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,0,
             (__this->klass->vtable)._29_GIENGNEGHPJ.method);
  return;
}

