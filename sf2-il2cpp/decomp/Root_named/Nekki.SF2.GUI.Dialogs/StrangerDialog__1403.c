// TypeDefIndex 1403
// Namespace: Nekki.SF2.GUI.Dialogs
// public class StrangerDialog : StoryDialog
// Fields:
//   private const int ACEGMNNPIPL = 2;
//   private const int IHAALCPNPAG = 0;
//   private const int HLIBGKAMIBN = 1;
//   private const int PLJANNKCKAH = 3;
//   private const int IIOMIHJFGHK = 13;
//   private const int IPMCDMDJEEH = 1;
//   private const int GPFBFOMJJNN = 100;
//   private const int MBFJIOODOKJ = 90;
//   private const int GCCMEIFDOHH = -80;
//   private const int AHIADALHEOA = -60;
//   private const int CMHIDNGKFFO = 280;
//   private const int CPCCOHFCGJG = 130;
//   private const int FAOCIMCKDFE = 87;
//   private const int OPBCMANAKJP = 40;
//   private const int NKCCHPAINND = 40;
//   private const int KNLJKDPCAMM = 900;
//   private const int BAIFIDLGPML = 103;
//   private const int GHELCEEALBK = 240;
//   private ButtonWithIcon _rejectButton; // 0x1B0
//   private ButtonWithIcon _acceptButton; // 0x1B8
//   private ButtonWithIcon _storeButton; // 0x1C0
//   private SFToggle _checkBox; // 0x1C8
//   private LabelAlias _checkBoxLabel; // 0x1D0
//   private ProgressBar _difficult; // 0x1D8
//   private LabelAlias _difficultLabel; // 0x1E0
//   private CloseButton _closeButton; // 0x1E8
//   private string DHJBABHLNFP; // 0x1F0
//   private string EMHKJPJIHBK; // 0x1F8
//   private string FAAJIPNANGB; // 0x200
//   private string FGGKLAINKKA; // 0x208
//   private string IIGDDBBHJEN; // 0x210
//   private string CKOILAHDKCN; // 0x218
//   protected string JIFBFBEEBDB; // 0x220
//   private LabelButton.MANJLBPDELA AKEBMCCPPPA; // 0x228
//   private LabelButton.MANJLBPDELA KLFHDAPPGGD; // 0x22C
//   private LabelButton.MANJLBPDELA BIOGAAPDOHK; // 0x230
//   private float JMLOHCGHBIJ; // 0x234
//   private bool JCLHNHKKPNP; // 0x238
//   private bool KGEDEAGBKGB; // 0x239
//   private bool PKGLLMLHGPC; // 0x23A
//   private string JKBAACEKGJF; // 0x240
//   private float AAGFFOEHDHI; // 0x248
//   private Action<object> DNPHBCPFMPB; // 0x250
//   private readonly CompositeDisposable HBJPBPBIOOB; // 0x258

// ===== public void .ctor()  [RVA 0x3179930]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$.ctor @ RVA 0x3179930

void Nekki_SF2_GUI_Dialogs_StrangerDialog___ctor
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  if ((DAT_0456697f & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456697f = 1;
  }
  (__this->fields).JKBAACEKGJF = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(&(__this->fields).JKBAACEKGJF);
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).HBJPBPBIOOB = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).HBJPBPBIOOB,__this_00);
  Nekki_SF2_GUI_Dialogs_StoryDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void DBAFLMPFDKB()  [RVA 0x31799C8]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$DBAFLMPFDKB @ RVA 0x31799C8

void Nekki_SF2_GUI_Dialogs_StrangerDialog__DBAFLMPFDKB
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  ProgressBar_o *pPVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  BHEDGAKGKPO_StaticFields *pBVar4;
  
  if ((DAT_04566980 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04566980 = 1;
  }
  pPVar1 = (__this->fields)._difficult;
  if (pPVar1 != (ProgressBar_o *)0x0) {
    (*(pPVar1->klass->vtable)._11_SetValueBorders.methodPtr)
              (0,0x42c80000,pPVar1,(pPVar1->klass->vtable)._11_SetValueBorders.method);
    pPVar1 = (__this->fields)._difficult;
    if ((pPVar1 != (ProgressBar_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pPVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).JCLHNHKKPNP,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._difficultLabel;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__Clear(pNVar3,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._difficultLabel;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar3,0x67,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._difficultLabel;
          if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pBVar4 = BHEDGAKGKPO_TypeInfo->static_fields;
            (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
                      ((pBVar4->FHIAKPJBBCB).fields.r,(pBVar4->FHIAKPJBBCB).fields.g,
                       (pBVar4->FHIAKPJBBCB).fields.b,(pBVar4->FHIAKPJBBCB).fields.a,pNVar3,
                       (pNVar3->klass->vtable)._23_set_color.method);
            pNVar3 = (__this->fields)._difficultLabel;
            if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive
                        (pUVar2,(__this->fields).JCLHNHKKPNP,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void PMLICAPHBJD()  [RVA 0x3179AC8]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$PMLICAPHBJD @ RVA 0x3179AC8

void Nekki_SF2_GUI_Dialogs_StrangerDialog__PMLICAPHBJD
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  ButtonWithIcon_o *pBVar5;
  LabelButton_o *pLVar6;
  UnityEngine_GameObject_o *pUVar7;
  SFToggle_o *pSVar8;
  Nekki_SF2_GUI_LabelAlias_o *pNVar9;
  UnityEngine_RectTransform_o *pUVar10;
  MethodInfo *method_00;
  undefined4 extraout_var;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Rect_o UVar13;
  
  if ((DAT_04566981 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566981 = 1;
  }
  Nekki_SF2_GUI_Dialogs_StoryDialog__PMLICAPHBJD
            ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
  iVar2 = Nekki_SF2_GUI_Dialogs_StrangerDialog__OALFHNKDIHC(__this,method_00);
  if (iVar2 == 3) {
    pNVar3 = (__this->fields).super.super._bottomStripe;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03279e58;
    UVar12 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
    pBVar5 = (__this->fields)._storeButton;
    fVar11 = UVar12.fields.y + 130.0;
    if ((__this->fields).KGEDEAGBKGB != false) {
      fVar11 = fVar11 + 130.0;
    }
    if (pBVar5 == (ButtonWithIcon_o *)0x0) goto LAB_03279e58;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pBVar5,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,fVar11,(MethodInfo *)0x0);
    pBVar5 = (__this->fields)._acceptButton;
    if (pBVar5 == (ButtonWithIcon_o *)0x0) goto LAB_03279e58;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pBVar5,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,fVar11,(MethodInfo *)0x0);
    pBVar5 = (__this->fields)._rejectButton;
    if (pBVar5 == (ButtonWithIcon_o *)0x0) goto LAB_03279e58;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pBVar5,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,fVar11,(MethodInfo *)0x0);
  }
  if ((__this->fields).KGEDEAGBKGB == false) {
    return;
  }
  pLVar6 = (__this->fields).super.super._btnOK;
  if ((pLVar6 == (LabelButton_o *)0x0) ||
     (pUVar7 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
     pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03279e58;
                    /* try { // try from 03279bc8 to 03379e13 has its CatchHandler @ 03279bc8
                       catch() { ... } // from try @ 03279bc8 with catch @ 03279bc8
                       catch() { ... } // from try @ 0327a06c with catch @ 03279bc8
                       catch() { ... } // from try @ 0327a16c with catch @ 03279bc8
                       catch() { ... } // from try @ 0327a174 with catch @ 03279bc8
                       catch() { ... } // from try @ 0327a23c with catch @ 03279bc8 */
  bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar6 = (__this->fields).super.super._btnOK;
    if ((pLVar6 == (LabelButton_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03279e58;
    UVar12 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
    pLVar6 = (__this->fields).super.super._btnOK;
    if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03279e58;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY
              (pUVar4,UVar12.fields.y + 100.0 + 30.0,(MethodInfo *)0x0);
  }
  pLVar6 = (__this->fields).super.super._btnCancel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar6 = (__this->fields).super.super._btnCancel;
    if ((pLVar6 == (LabelButton_o *)0x0) ||
       (pUVar7 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
       pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03279e58;
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
    if (bVar1) {
      pLVar6 = (__this->fields).super.super._btnCancel;
      if ((pLVar6 == (LabelButton_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03279e58;
      UVar12 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
      pLVar6 = (__this->fields).super.super._btnCancel;
      if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03279e58;
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY
                (pUVar4,UVar12.fields.y + 100.0 + 30.0,(MethodInfo *)0x0);
    }
  }
  pSVar8 = (__this->fields)._checkBox;
  if ((pSVar8 != (SFToggle_o *)0x0) &&
     (pUVar7 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pSVar8,(MethodInfo *)0x0),
     pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar3 = (__this->fields).super.super._bottomStripe;
    if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UVar12 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
      pSVar8 = (__this->fields)._checkBox;
      if (pSVar8 != (SFToggle_o *)0x0) {
        fVar11 = UVar12.fields.y + 90.0;
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pSVar8,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,fVar11,(MethodInfo *)0x0);
        pNVar9 = (__this->fields)._checkBoxLabel;
        if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,fVar11,(MethodInfo *)0x0);
          pSVar8 = (__this->fields)._checkBox;
          if ((pSVar8 != (SFToggle_o *)0x0) &&
             (pUVar10 = (UnityEngine_RectTransform_o *)
                        UnityEngine_Component__GetComponent<object>
                                  ((UnityEngine_Component_o *)pSVar8,
                                   Method_UnityEngine_Component_GetComponent<RectTransform>__),
             pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar13 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
            pNVar9 = (__this->fields)._checkBoxLabel;
            if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              fVar11 = (float)(*(pNVar9->klass->vtable)._79_get_preferredWidth.methodPtr)
                                        (CONCAT44(extraout_var,UVar13.fields.m_XMin),
                                         UVar13.fields.m_YMin,UVar13.fields.m_Width,
                                         UVar13.fields.m_Height,pNVar9,
                                         (pNVar9->klass->vtable)._79_get_preferredWidth.method);
              pSVar8 = (__this->fields)._checkBox;
              if (pSVar8 != (SFToggle_o *)0x0) {
                pUVar4 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pSVar8,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionX
                          (pUVar4,(UVar13.fields.m_Width * 0.5 + fVar11) * -0.5,(MethodInfo *)0x0);
                pSVar8 = (__this->fields)._checkBox;
                if ((pSVar8 != (SFToggle_o *)0x0) &&
                   (pUVar4 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pSVar8,(MethodInfo *)0x0),
                   pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                  UVar12 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
                  pSVar8 = (__this->fields)._checkBox;
                  if ((pSVar8 != (SFToggle_o *)0x0) &&
                     (pUVar10 = (UnityEngine_RectTransform_o *)
                                UnityEngine_Component__GetComponent<object>
                                          ((UnityEngine_Component_o *)pSVar8,
                                           Method_UnityEngine_Component_GetComponent<RectTransform>__
                                          ), pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
                    UVar13 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
                    pNVar9 = (__this->fields)._checkBoxLabel;
                    if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      pUVar4 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0);
                      pNVar9 = (__this->fields)._checkBoxLabel;
                      if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 03279e14 to 03379e3b has its CatchHandler @ 0327a198 */
                        fVar11 = (float)(*(pNVar9->klass->vtable)._79_get_preferredWidth.methodPtr)
                                                  (pNVar9,(pNVar9->klass->vtable).
                                                          _79_get_preferredWidth.method);
                        UnityEngine_TransformExtensions__SetLocalPositionX
                                  (pUVar4,UVar12.fields.x + UVar13.fields.m_Width * 0.5 +
                                          fVar11 * 0.5,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03279e58:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private LabelButton HDECGIDPOPB(bool ANNEHDEEFJK)  [RVA 0x3179ECC]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$HDECGIDPOPB @ RVA 0x3179ECC

LabelButton_o *
Nekki_SF2_GUI_Dialogs_StrangerDialog__HDECGIDPOPB
          (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,bool ANNEHDEEFJK,MethodInfo *method)

{
  bool bVar1;
  ButtonWithIcon_o *pBVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (ANNEHDEEFJK) {
    pBVar2 = (__this->fields)._storeButton;
    if ((pBVar2 != (ButtonWithIcon_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pBVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (bVar1) {
LAB_03279ef8:
        return (LabelButton_o *)(__this->fields)._storeButton;
      }
      pBVar2 = (__this->fields)._acceptButton;
      if ((pBVar2 != (ButtonWithIcon_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pBVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
        if (bVar1) {
LAB_03279f94:
          return (LabelButton_o *)(__this->fields)._acceptButton;
        }
        pBVar2 = (__this->fields)._rejectButton;
        if ((pBVar2 != (ButtonWithIcon_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pBVar2,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
                    /* try { // try from 03279f64 to 03379f8f has its CatchHandler @ 0327a194 */
          if (!bVar1) {
            return (LabelButton_o *)0x0;
          }
          goto LAB_03279f20;
        }
      }
    }
  }
  else {
    pBVar2 = (__this->fields)._rejectButton;
                    /* try { // try from 03279f10 to 03379f2b has its CatchHandler @ 0327a188 */
    if ((pBVar2 != (ButtonWithIcon_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pBVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (bVar1) {
LAB_03279f20:
        return (LabelButton_o *)(__this->fields)._rejectButton;
      }
      pBVar2 = (__this->fields)._acceptButton;
      if ((pBVar2 != (ButtonWithIcon_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pBVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
        if (bVar1) goto LAB_03279f94;
        pBVar2 = (__this->fields)._storeButton;
                    /* try { // try from 03279fa8 to 03379fc7 has its CatchHandler @ 0327a184 */
        if ((pBVar2 != (ButtonWithIcon_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pBVar2,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
          if (!bVar1) {
            return (LabelButton_o *)0x0;
          }
          goto LAB_03279ef8;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03279fcc to 03379fd7 has its CatchHandler @ 0327a180 */
  FUN_01bab8c8();
}


// ===== public override int GetLeftButtonId()  [RVA 0x3179FD0]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$GetLeftButtonId @ RVA 0x3179FD0

int32_t Nekki_SF2_GUI_Dialogs_StrangerDialog__GetLeftButtonId
                  (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  MethodInfo *in_x2;
  
  pLVar1 = Nekki_SF2_GUI_Dialogs_StrangerDialog__HDECGIDPOPB(__this,false,in_x2);
  if (pLVar1 != (LabelButton_o *)0x0) {
    return (pLVar1->fields).super.super.ButtonId;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void Start()  [RVA 0x3179FF0]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$Start @ RVA 0x3179FF0

void Nekki_SF2_GUI_Dialogs_StrangerDialog__Start
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Dialogs_StoryDialog__Start
            ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_StrangerDialog__KAJLGLEKLCE(__this,method_00);
                    /* try { // try from 0327a010 to 0337a06b has its CatchHandler @ 0327a1a4 */
                    /* WARNING: Could not recover jumptable at 0x0327a01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
            (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method);
  return;
}


// ===== private void HFGKEOFLLPC(object IMMNELPBGIF)  [RVA 0x317A2E4]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$HFGKEOFLLPC @ RVA 0x317A2E4

void Nekki_SF2_GUI_Dialogs_StrangerDialog__HFGKEOFLLPC
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  SFToggle_o *pSVar3;
  System_Action_object__o *pSVar4;
  undefined4 local_24;
  
  if ((DAT_04566982 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04566982 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    puVar1 = (undefined4 *)thunk_FUN_01bda96c(IMMNELPBGIF);
    switch(*puVar1) {
    case 0:
    case 1:
    case 2:
                    /* WARNING: Could not recover jumptable at 0x0327a388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._13_OnClose.methodPtr)
                (__this,IMMNELPBGIF,(__this->klass->vtable)._13_OnClose.method);
      return;
    case 3:
      pSVar4 = (__this->fields).DNPHBCPFMPB;
      if (pSVar4 != (System_Action_object__o *)0x0) {
        pSVar3 = (__this->fields)._checkBox;
        if (pSVar3 == (SFToggle_o *)0x0) goto LAB_0327a3e4;
        local_24 = 3;
        if ((pSVar3->fields).super.m_IsOn == false) {
          local_24 = 4;
        }
        uVar2 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
        (*(code *)(pSVar4->fields).super.super.invoke_impl)
                  ((pSVar4->fields).super.super.method_code,uVar2,
                   (pSVar4->fields).super.super.method);
      }
    }
    return;
  }
LAB_0327a3e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GBHBDMMKPLO(string NONPLOOOOAG)  [RVA 0x317A3F0]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$GBHBDMMKPLO @ RVA 0x317A3F0

void Nekki_SF2_GUI_Dialogs_StrangerDialog__GBHBDMMKPLO
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,System_String_o *NONPLOOOOAG,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  ProgressBar_o *pPVar6;
  UnityEngine_GameObject_o *__this_00;
  float fVar7;
  float fVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Vector3_o UVar11;
  
  pNVar2 = (__this->fields).super._text;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,NONPLOOOOAG,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).super._text;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
      if ((__this->fields).super.ACPDELFFFHF == false) {
        fVar7 = 0.0;
      }
      else {
        pUVar4 = Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP
                           ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_0327a6cc;
        UVar11 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).super._text;
        if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0327a6cc;
        fVar8 = (__this->fields).super.BNJJNFFCCCA;
        fVar7 = (__this->fields).super.OAMNJIMNBAC;
        pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0327a6cc;
        UVar10 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
        fVar7 = (UVar11.fields.x - fVar8) + 40.0 + fVar7 * 0.9 * 0.5 + UVar10.fields.m_Width * 0.5;
      }
      UnityEngine_TransformExtensions__SetLocalPositionX(pUVar3,fVar7,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).super._text;
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionY(pUVar3,0.0,(MethodInfo *)0x0);
        pPVar6 = (__this->fields)._difficult;
        if ((pPVar6 != (ProgressBar_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
          if (!bVar1) {
LAB_0327a66c:
            (*(__this->klass->vtable)._34_DCGKJKKNCEP.methodPtr)
                      (__this,(__this->klass->vtable)._34_DCGKJKKNCEP.method);
            (*(__this->klass->vtable)._17_GLJGIJNALCA.methodPtr)
                      (__this,(__this->klass->vtable)._17_GLJGIJNALCA.method);
            (*(__this->klass->vtable)._14_KHKLLNFCMME.methodPtr)
                      (__this,(__this->klass->vtable)._14_KHKLLNFCMME.method);
                    /* WARNING: Could not recover jumptable at 0x0327a6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
                      (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method);
            return;
          }
          pPVar6 = (__this->fields)._difficult;
          if (pPVar6 != (ProgressBar_o *)0x0) {
            pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0);
            UnityEngine_TransformExtensions__SetLocalPositionX(pUVar3,280.0,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._difficultLabel;
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              pUVar3 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
              UnityEngine_TransformExtensions__SetLocalPositionX(pUVar3,280.0,(MethodInfo *)0x0);
              pNVar2 = (__this->fields).super._text;
              if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                pUVar3 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
                pNVar2 = (__this->fields)._difficultLabel;
                if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  fVar7 = (float)(*(pNVar2->klass->vtable)._82_get_preferredHeight.methodPtr)
                                           (pNVar2,(pNVar2->klass->vtable)._82_get_preferredHeight.
                                                   method);
                  UnityEngine_TransformExtensions__SetLocalPositionY
                            (pUVar3,fVar7 * 0.25 + 70.0,(MethodInfo *)0x0);
                  pPVar6 = (__this->fields)._difficult;
                  if (pPVar6 != (ProgressBar_o *)0x0) {
                    pUVar3 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0);
                    pNVar2 = (__this->fields).super._text;
                    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                       (pUVar4 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
                       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                      UVar11 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
                      pNVar2 = (__this->fields).super._text;
                      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                         (pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                                             ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
                         pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
                        UVar9 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
                        UnityEngine_TransformExtensions__SetLocalPositionY
                                  (pUVar3,UVar11.fields.y + -80.0 + UVar9.fields.y * -0.5,
                                   (MethodInfo *)0x0);
                        pNVar2 = (__this->fields)._difficultLabel;
                        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                          pUVar3 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
                          pPVar6 = (__this->fields)._difficult;
                          if ((pPVar6 != (ProgressBar_o *)0x0) &&
                             (pUVar4 = UnityEngine_Component__get_transform
                                                 ((UnityEngine_Component_o *)pPVar6,
                                                  (MethodInfo *)0x0),
                             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                            UVar11 = UnityEngine_Transform__get_localPosition
                                               (pUVar4,(MethodInfo *)0x0);
                            pNVar2 = (__this->fields)._difficultLabel;
                            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                              fVar7 = (float)(*(pNVar2->klass->vtable)._82_get_preferredHeight.
                                               methodPtr)(UVar11.fields.x,UVar11.fields.y,
                                                          UVar11.fields.z,pNVar2,
                                                          (pNVar2->klass->vtable).
                                                          _82_get_preferredHeight.method);
                              UnityEngine_TransformExtensions__SetLocalPositionY
                                        (pUVar3,UVar11.fields.y + -60.0 + fVar7 * -0.25,
                                         (MethodInfo *)0x0);
                              goto LAB_0327a66c;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0327a6cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GLANJNFACKI()  [RVA 0x317A6D0]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$GLANJNFACKI @ RVA 0x317A6D0

void Nekki_SF2_GUI_Dialogs_StrangerDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_o UVar3;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__GLANJNFACKI
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  if ((__this->fields).KGEDEAGBKGB == false) {
    return;
  }
  pNVar1 = (__this->fields).super.super._topStripe;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar3 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super.super._topStripe;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY
                (pUVar2,UVar3.fields.y + 12.0,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).super.super._bottomStripe;
      if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar3 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
        pNVar1 = (__this->fields).super.super._bottomStripe;
        if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (pUVar2,UVar3.fields.y + -12.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD AINMEMEFFPK)  [RVA 0x317A784]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$LCGFJKFJKJK @ RVA 0x317A784

void Nekki_SF2_GUI_Dialogs_StrangerDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,int32_t AINMEMEFFPK,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  LabelButton_o *pLVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *transform;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *pMVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  LabelButton_o **ppLVar6;
  LabelButton_o *y;
  UnityEngine_Vector3_o UVar7;
  
  pMVar5 = (MethodInfo *)(ulong)(uint)AINMEMEFFPK;
  if ((DAT_04566983 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566983 = 1;
    pMVar5 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_StrangerDialog__CGDLJPELGIJ(__this,pMVar5);
  pMVar5 = extraout_x1_00;
  if ((__this->fields).KGEDEAGBKGB != false) {
    (*(__this->klass->vtable)._17_GLJGIJNALCA.methodPtr)
              (__this,(__this->klass->vtable)._17_GLJGIJNALCA.method);
    (*(__this->klass->vtable)._14_KHKLLNFCMME.methodPtr)
              (__this,(__this->klass->vtable)._14_KHKLLNFCMME.method);
    pMVar5 = extraout_x1_01;
  }
  if (((__this->fields).super.NHNBEPIDGIB != false) &&
     (iVar2 = Nekki_SF2_GUI_Dialogs_StrangerDialog__OALFHNKDIHC(__this,pMVar5), iVar2 < 3)) {
    pLVar3 = Nekki_SF2_GUI_Dialogs_StrangerDialog__HDECGIDPOPB(__this,true,method);
    ppLVar6 = &(__this->fields).super.super._btnOK;
    *ppLVar6 = pLVar3;
    thunk_FUN_01c20e04(ppLVar6,pLVar3);
    pLVar3 = Nekki_SF2_GUI_Dialogs_StrangerDialog__HDECGIDPOPB(__this,false,method);
    y = *ppLVar6;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pLVar3,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if (!bVar1) {
      pLVar3 = (LabelButton_o *)0x0;
    }
    (__this->fields).super.super._btnCancel = pLVar3;
    thunk_FUN_01c20e04();
    (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
              (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method);
  }
  pUVar4 = (__this->fields).super._textsSprite;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    transform = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).super._textsSprite;
    if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UVar7 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX
                (transform,UVar7.fields.x + (__this->fields).AAGFFOEHDHI,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0327a8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._50_NDGMODGKNEG.methodPtr)
                (__this,(__this->klass->vtable)._50_NDGMODGKNEG.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public LabelButton get_AcceptButton()  [RVA 0x317AFE0]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$get_AcceptButton @ RVA 0x317AFE0

LabelButton_o *
Nekki_SF2_GUI_Dialogs_StrangerDialog__get_AcceptButton
          (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  return (LabelButton_o *)(__this->fields)._acceptButton;
}


// ===== protected override void NDGMODGKNEG()  [RVA 0x317AFE8]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$NDGMODGKNEG @ RVA 0x317AFE8

void Nekki_SF2_GUI_Dialogs_StrangerDialog__NDGMODGKNEG
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Vector3_o UVar4;
  
  pUVar1 = (__this->fields).super._textsSprite;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).super._textsSprite;
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      UVar4 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX
                (pUVar2,UVar4.fields.x + (__this->fields).super.CILDLHDCCLG.fields.x,
                 (MethodInfo *)0x0);
      pUVar1 = (__this->fields).super._textsSprite;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).super._textsSprite;
        if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_Transform_o *)0x0)) {
          UVar4 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (pUVar2,UVar4.fields.y + (__this->fields).super.CILDLHDCCLG.fields.y,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x317B090]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$OnDestroy @ RVA 0x317B090

void Nekki_SF2_GUI_Dialogs_StrangerDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  Nekki_SF2_GUI_Dialogs_StoryDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).HBJPBPBIOOB;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KAJLGLEKLCE()  [RVA 0x317A020]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$KAJLGLEKLCE @ RVA 0x317A020

void Nekki_SF2_GUI_Dialogs_StrangerDialog__KAJLGLEKLCE
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ProgressBar_o *pPVar3;
  System_String_array *pSVar4;
  uint uVar5;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  uint uVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566984 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
                    /* try { // try from 0327a06c to 0337a15b has its CatchHandler @ 03279bc8 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Item__);
    DAT_04566984 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (0.0 <= (__this->fields).JMLOHCGHBIJ) {
    if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_045669da == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
      DAT_045669da = '\x01';
      method = extraout_x1_01;
    }
    if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo,method);
    }
    __this_01 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
    if (__this_01 != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,0,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Item__
                         );
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__)
      ;
      uVar6 = 0;
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      uVar5 = 0;
                    /* try { // try from 0327a15c to 0337a15f has its CatchHandler @ 0327a190 */
                    /* try { // try from 0327a160 to 0337a163 has its CatchHandler @ 0327a18c */
                    /* try { // try from 0327a164 to 0337a16b has its CatchHandler @ 0327a19c */
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                               ), bVar1) {
                    /* try { // try from 0327a16c to 0337a16f has its CatchHandler @ 03279bc8 */
                    /* try { // try from 0327a170 to 0337a173 has its CatchHandler @ 0327a17c */
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 0327a174 to 0337a1bb has its CatchHandler @ 03279bc8 */
                    /* catch() { ... } // from try @ 0327a170 with catch @ 0327a17c */
                    /* catch() { ... } // from try @ 03279fcc with catch @ 0327a180 */
        if (*(float *)&local_50.fields._current[1].monitor < (__this->fields).JMLOHCGHBIJ) {
                    /* catch() { ... } // from try @ 03279fa8 with catch @ 0327a184 */
          if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* catch() { ... } // from try @ 03279f10 with catch @ 0327a188 */
                    /* catch() { ... } // from try @ 0327a160 with catch @ 0327a18c */
                    /* catch() { ... } // from try @ 0327a15c with catch @ 0327a190 */
          if (*(float *)&pIVar2[1].monitor < *(float *)&local_50.fields._current[1].monitor) {
                    /* catch() { ... } // from try @ 03279f64 with catch @ 0327a194 */
                    /* catch() { ... } // from try @ 03279e14 with catch @ 0327a198 */
            pIVar2 = local_50.fields._current;
            uVar6 = uVar5;
          }
        }
                    /* catch() { ... } // from try @ 0327a164 with catch @ 0327a19c */
        uVar5 = uVar5 + 1;
                    /* catch() { ... } // from try @ 03279e78 with catch @ 0327a1a0 */
      }
                    /* catch() { ... } // from try @ 0327a010 with catch @ 0327a1a4 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
      pPVar3 = (__this->fields)._difficult;
                    /* try { // try from 0327a1bc to 0337a1bf has its CatchHandler @ 0327a1d4 */
      if (pPVar3 != (ProgressBar_o *)0x0) {
        __this_02 = (pPVar3->fields).Stripe;
                    /* catch() { ... } // from try @ 0327a1bc with catch @ 0327a1d4 */
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = BHEDGAKGKPO_TypeInfo->static_fields->IAJCJOECCFO;
        if (pSVar4 != (System_String_array *)0x0) {
          if ((uint)pSVar4->max_length <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (__this_02 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (__this_02,pSVar4->m_Items[(int)uVar6],(MethodInfo *)0x0);
            if (pIVar2 == (Il2CppObject *)0x0) {
                    /* try { // try from 0327a248 to 0337a24f has its CatchHandler @ 0327a250 */
                    /* catch() { ... } // from try @ 0327a214 with catch @ 0327a250
                       catch() { ... } // from try @ 0327a248 with catch @ 0327a250 */
              return;
            }
                    /* try { // try from 0327a214 to 0337a23b has its CatchHandler @ 0327a250 */
            pPVar3 = (__this->fields)._difficult;
            if (pPVar3 != (ProgressBar_o *)0x0) {
              (*(pPVar3->klass->vtable)._7_set_Value.methodPtr)
                        (0x42c80000,pPVar3,(pPVar3->klass->vtable)._7_set_Value.method);
              __this_00 = (__this->fields)._difficultLabel;
              if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0327a23c to 0337a247 has its CatchHandler @ 03279bc8 */
                Nekki_SF2_GUI_LabelAlias__set_Alias
                          (__this_00,(System_String_o *)pIVar2[1].klass,(MethodInfo *)0x0);
                return;
              }
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


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x317B0B8]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$Init @ RVA 0x317B0B8

void Nekki_SF2_GUI_Dialogs_StrangerDialog__Init
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_String_o *GKLEODLEPMA;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  int32_t iVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 *puVar14;
  System_Action_Action__o **ppSVar15;
  System_IObservable_Unit__o *source;
  System_Action_T__o *pSVar16;
  Il2CppObject *pIVar17;
  CloseButton_o *pCVar18;
  UnityEngine_GameObject_o *__this_00;
  System_IObservable_object__o *source_00;
  System_String_o *pSVar19;
  IGNEHHMICKB_o *pIVar20;
  System_String_o *pSVar21;
  System_Action_Action__o *addHandler;
  System_String_o *pSVar22;
  System_Action_Action__o *removeHandler;
  System_String_o *pSVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if ((DAT_04566985 & 1) == 0) {
    FUN_01bab630(&ADDCOJMHMHE_TypeInfo);
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<object>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StrangerDialog_LGMDDECHGGA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_KLBBGDAOOEO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_PNHGONJELKG__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_17765/*"dlgButtonWait"*/);
    FUN_01bab630(&StringLiteral_17836/*"dlgStoryBtnGoodbye"*/);
    DAT_04566985 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (ADDCOJMHMHE_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    puVar14 = (undefined8 *)thunk_FUN_01bda96c();
    pSVar19 = (System_String_o *)*puVar14;
    iVar1 = *(int32_t *)(puVar14 + 8);
    iVar2 = *(int32_t *)((long)puVar14 + 0x44);
    fVar24 = *(float *)(puVar14 + 4);
    pSVar3 = (System_String_o *)puVar14[5];
    pSVar6 = (System_String_o *)puVar14[6];
    GKLEODLEPMA = (System_String_o *)puVar14[1];
    pSVar23 = (System_String_o *)puVar14[7];
    pSVar4 = (System_String_o *)puVar14[10];
    pSVar7 = (System_String_o *)puVar14[0xb];
    pSVar21 = (System_String_o *)puVar14[0xc];
    pIVar20 = (IGNEHHMICKB_o *)puVar14[3];
    pSVar22 = (System_String_o *)puVar14[0xe];
    fVar25 = *(float *)(puVar14 + 0xf);
    fVar26 = *(float *)((long)puVar14 + 0x7c);
    pSVar5 = (System_String_o *)puVar14[0x10];
    pSVar16 = (System_Action_T__o *)puVar14[0x11];
    iVar8 = *(int32_t *)(puVar14 + 9);
    bVar9 = *(byte *)(puVar14 + 0xd);
    bVar10 = *(byte *)((long)puVar14 + 0x69);
    bVar11 = *(byte *)((long)puVar14 + 0x6a);
    bVar12 = *(byte *)((long)puVar14 + 0x6b);
    bVar13 = *(byte *)((long)puVar14 + 0x6c);
    (__this->fields).super.NMBDHGCKNII =
         (System_Collections_Generic_List_NBLEEDEAPHB__o *)puVar14[2];
    thunk_FUN_01c20e04(&(__this->fields).super.NMBDHGCKNII);
    (__this->fields).JIFBFBEEBDB = pSVar5;
    thunk_FUN_01c20e04(&(__this->fields).JIFBFBEEBDB,pSVar5);
    (__this->fields).AKEBMCCPPPA = iVar2;
    (__this->fields).DHJBABHLNFP = pSVar6;
    thunk_FUN_01c20e04(&(__this->fields).DHJBABHLNFP,pSVar6);
    (__this->fields).EMHKJPJIHBK = pSVar7;
    thunk_FUN_01c20e04(&(__this->fields).EMHKJPJIHBK,pSVar7);
    (__this->fields).FAAJIPNANGB = pSVar23;
    (__this->fields).KLFHDAPPGGD = iVar8;
    thunk_FUN_01c20e04(&(__this->fields).FAAJIPNANGB,pSVar23);
    (__this->fields).FGGKLAINKKA = pSVar21;
    thunk_FUN_01c20e04(&(__this->fields).FGGKLAINKKA,pSVar21);
    (__this->fields).IIGDDBBHJEN = pSVar3;
    (__this->fields).BIOGAAPDOHK = iVar1;
    thunk_FUN_01c20e04(&(__this->fields).IIGDDBBHJEN,pSVar3);
    (__this->fields).CKOILAHDKCN = pSVar4;
    thunk_FUN_01c20e04(&(__this->fields).CKOILAHDKCN,pSVar4);
    (__this->fields).JMLOHCGHBIJ = fVar24;
    (__this->fields).JCLHNHKKPNP = (bool_conflict)(bVar9 & 1);
    (__this->fields).super.NHNBEPIDGIB = (bool_conflict)(bVar10 & 1);
    (__this->fields).KGEDEAGBKGB = (bool_conflict)(bVar11 & 1);
    (__this->fields).PKGLLMLHGPC = (bool_conflict)(bVar12 & 1);
    (__this->fields).JKBAACEKGJF = pSVar22;
    thunk_FUN_01c20e04(&(__this->fields).JKBAACEKGJF,pSVar22);
    (__this->fields).AAGFFOEHDHI = fVar25;
    (__this->fields).super.JADIONKCDCB = fVar26;
    if (pSVar16 != (System_Action_T__o *)0x0) {
      (__this->fields).DNPHBCPFMPB = (System_Action_object__o *)pSVar16;
      thunk_FUN_01c20e04(&(__this->fields).DNPHBCPFMPB,pSVar16);
      Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,pSVar16,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    }
    if ((Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    addHandler = Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->static_fields->__9__50_0;
    if (addHandler == (System_Action_Action__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar15 = &Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->static_fields->__9__50_0;
      *ppSVar15 = addHandler;
      thunk_FUN_01c20e04(ppSVar15,addHandler);
    }
    if ((Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    removeHandler = Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->static_fields->__9__50_1;
    if (removeHandler == (System_Action_Action__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar15 = &Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->static_fields->__9__50_1;
      *ppSVar15 = removeHandler;
      thunk_FUN_01c20e04(ppSVar15,removeHandler);
    }
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    source = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
    pSVar16 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
    System_Action<Unit>___ctor();
    pIVar17 = (Il2CppObject *)
              UniRx_ObservableExtensions__Subscribe<Unit>
                        ((System_IObservable_T__o *)source,pSVar16,
                         Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar17,(System_Collections_Generic_ICollection_IDisposable__o *)
                       (__this->fields).HBJPBPBIOOB,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    (__this->fields).super.DHLCIGNKKPP = pSVar19;
    thunk_FUN_01c20e04(&(__this->fields).super.DHLCIGNKKPP);
    (__this->fields).super.MEELBFGHELO = pIVar20;
    thunk_FUN_01c20e04(&(__this->fields).super.MEELBFGHELO);
    if ((bVar13 & 1) == 0) {
LAB_0327b588:
      Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
                ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,GKLEODLEPMA,StringLiteral_17765/*"dlgButtonWait"*/,
                 StringLiteral_17836/*"dlgStoryBtnGoodbye"*/,0,(MethodInfo *)0x0);
      return;
    }
    pCVar18 = (__this->fields)._closeButton;
    if ((pCVar18 != (CloseButton_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pCVar18,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      source_00 = HABIFHOHHOF__ELOBMGDKLPK((__this->fields)._closeButton,(MethodInfo *)0x0);
      pSVar16 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      pIVar17 = (Il2CppObject *)
                UniRx_ObservableExtensions__Subscribe<object>
                          ((System_IObservable_T__o *)source_00,pSVar16,
                           Method_UniRx_ObservableExtensions_Subscribe<object>__);
      UniRx_DisposableExtensions__AddTo<object>
                (pIVar17,(System_Collections_Generic_ICollection_IDisposable__o *)
                         (__this->fields).HBJPBPBIOOB,
                 Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
      pCVar18 = (__this->fields)._closeButton;
      if (pCVar18 != (CloseButton_o *)0x0) {
        CloseButton__PlayIdleAnimation(pCVar18,(MethodInfo *)0x0);
        pCVar18 = (__this->fields)._closeButton;
        if (pCVar18 != (CloseButton_o *)0x0) {
          (pCVar18->fields).super.super.ButtonId = 100;
          goto LAB_0327b588;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x317B5E0]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$GLJGIJNALCA @ RVA 0x317B5E0

void Nekki_SF2_GUI_Dialogs_StrangerDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  System_String_o *CJNHFNHJHPE;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  SFToggle_o *pSVar5;
  UnityEngine_Transform_o *transform;
  UnityEngine_Transform_o *__this_00;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector3_o UVar10;
  
  if ((DAT_04566986 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    DAT_04566986 = 1;
  }
  pNVar2 = (__this->fields).super._text;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    CJNHFNHJHPE = (System_String_o *)
                  (*(pNVar2->klass->vtable)._74_get_text.methodPtr)
                            (pNVar2,(pNVar2->klass->vtable)._74_get_text.method);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar3 = (__this->fields).super._textsSprite;
      if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0327b828;
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      fVar7 = 0.0;
      if (bVar1) {
        pUVar3 = (__this->fields).super._textsSprite;
        if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
           (pUVar4 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
           pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0327b828;
        UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        fVar7 = UVar8.fields.m_Height + 0.0;
      }
    }
    else {
      pNVar2 = (__this->fields).super._text;
      if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0327b828;
      UVar9 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
      fVar7 = UVar9.fields.y + 0.0;
    }
    pSVar5 = (__this->fields)._checkBox;
    if ((pSVar5 != (SFToggle_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pSVar5,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar5 = (__this->fields)._checkBox;
        if ((pSVar5 == (SFToggle_o *)0x0) ||
           (pUVar4 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pSVar5,
                                Method_UnityEngine_Component_GetComponent<RectTransform>__),
           pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0327b828;
        UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        fVar7 = fVar7 + UVar8.fields.m_Height;
      }
      pUVar3 = (__this->fields).super._footerTextsSprite;
      if ((__this->fields).JCLHNHKKPNP != false) {
        fVar7 = fVar7 + 240.0;
      }
      fVar6 = (__this->fields).super.OAMNJIMNBAC * 0.9 * 0.8;
      if (fVar7 <= fVar6) {
        fVar7 = fVar6;
      }
      if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
        if (bVar1) {
          pUVar3 = (__this->fields).super._footerTextsSprite;
          if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
             (pUVar4 = (UnityEngine_RectTransform_o *)
                       UnityEngine_GameObject__GetComponent<object>
                                 (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                                 ), pUVar4 == (UnityEngine_RectTransform_o *)0x0))
          goto LAB_0327b828;
          UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).super.super._content;
          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0327b828;
          transform = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).super.super._content;
          if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
             (__this_00 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
             __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_0327b828;
          fVar6 = UVar8.fields.m_Height + 60.0 + 30.0;
          fVar7 = fVar7 + fVar6;
          UVar10 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (transform,fVar6 * 0.5 + UVar10.fields.y,(MethodInfo *)0x0);
        }
        pUVar3 = (__this->fields).super.super._content;
        if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar4 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
           pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
          fVar6 = (__this->fields).super.JADIONKCDCB;
          if (fVar7 <= fVar6) {
            fVar7 = fVar6;
          }
          UVar9.fields.y = fVar7;
          UVar9.fields.x = UVar8.fields.m_Width;
          UnityEngine_RectTransform__set_sizeDelta(pUVar4,UVar9,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0327b828:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LIPPGIALIMA(bool CJNHFNHJHPE)  [RVA 0x317B82C]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$LIPPGIALIMA @ RVA 0x317B82C

void Nekki_SF2_GUI_Dialogs_StrangerDialog__LIPPGIALIMA
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppObject *IMMNELPBGIF;
  undefined4 local_24;
  
  if ((DAT_04566987 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo,CJNHFNHJHPE);
    DAT_04566987 = 1;
  }
  local_24 = 3;
  IMMNELPBGIF = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  Nekki_SF2_GUI_Dialogs_StrangerDialog__HFGKEOFLLPC(__this,IMMNELPBGIF,method);
  return;
}


// ===== private int OALFHNKDIHC()  [RVA 0x3179E5C]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$OALFHNKDIHC @ RVA 0x3179E5C

int32_t Nekki_SF2_GUI_Dialogs_StrangerDialog__OALFHNKDIHC
                  (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).DHJBABHLNFP,(MethodInfo *)0x0);
                    /* try { // try from 03279e78 to 03379ebb has its CatchHandler @ 0327a1a0 */
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).IIGDDBBHJEN,(MethodInfo *)0x0);
  uVar4 = 1;
  if (!bVar2) {
    uVar4 = 2;
  }
  uVar1 = ~(uint)bVar2 & 1;
  if (!bVar3) {
    uVar1 = uVar4;
  }
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).FAAJIPNANGB,(MethodInfo *)0x0);
  return uVar1 + (~(uint)bVar2 & 1);
}


// ===== private void CGDLJPELGIJ()  [RVA 0x317A8F0]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$CGDLJPELGIJ @ RVA 0x317A8F0

void Nekki_SF2_GUI_Dialogs_StrangerDialog__CGDLJPELGIJ
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this_00;
  Nekki_SF2_GUI_Dialogs_StrangerDialog_o *extraout_x0;
  System_Action_object__o *pSVar3;
  Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this_01;
  Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this_02;
  Nekki_SF2_GUI_ResolutionImage_o *__this_03;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  SFToggle_o *pSVar6;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  MethodInfo *extraout_x1;
  MethodInfo *in_x5;
  int32_t CJNHFNHJHPE;
  BHEDGAKGKPO_StaticFields *pBVar8;
  LabelButton_o *pLVar9;
  ButtonWithIcon_o *pBVar10;
  ButtonWithIcon_o *__this_04;
  UnityEngine_Events_UnityEvent_bool__o *__this_05;
  float value;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Vector3_o UVar13;
  
  if ((DAT_04566988 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StrangerDialog_HFGKEOFLLPC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StrangerDialog_LIPPGIALIMA__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_AddListener__);
    DAT_04566988 = 1;
    method = extraout_x1;
  }
  pLVar9 = (__this->fields).super.super._btnCancel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar9 = (__this->fields).super.super._btnCancel;
    if ((pLVar9 == (LabelButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar9,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0327afdc;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pLVar9 = (__this->fields).super.super._btnOK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_00 = (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *)(ulong)bVar1;
  if (bVar1) {
    pLVar9 = (__this->fields).super.super._btnOK;
    if ((pLVar9 == (LabelButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar9,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0327afdc;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    __this_00 = extraout_x0;
  }
  Nekki_SF2_GUI_Dialogs_StrangerDialog__ACICKHKFILK
            (__this_00,(LabelButton_o *)(__this->fields)._rejectButton,(__this->fields).AKEBMCCPPPA,
             (__this->fields).DHJBABHLNFP,0,in_x5);
  pBVar10 = (__this->fields)._rejectButton;
  pSVar3 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  if (pBVar10 != (ButtonWithIcon_o *)0x0) {
    SFButton__RemoveEventListener((SFButton_o *)pBVar10,2,pSVar3,(MethodInfo *)0x0);
    pBVar10 = (__this->fields)._rejectButton;
    pSVar3 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pBVar10 != (ButtonWithIcon_o *)0x0) {
      SFButton__AddEventListener((SFButton_o *)pBVar10,2,pSVar3,(MethodInfo *)0x0);
      pBVar10 = (__this->fields)._rejectButton;
      if (pBVar10 != (ButtonWithIcon_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pBVar10,(MethodInfo *)0x0);
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).DHJBABHLNFP,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar2,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
          pBVar10 = (__this->fields)._rejectButton;
          if (pBVar10 != (ButtonWithIcon_o *)0x0) {
            ButtonWithIcon__SetIcon(pBVar10,(__this->fields).EMHKJPJIHBK,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_StrangerDialog__ACICKHKFILK
                      (__this_01,(LabelButton_o *)(__this->fields)._acceptButton,
                       (__this->fields).KLFHDAPPGGD,(__this->fields).FAAJIPNANGB,2,in_x5);
            pBVar10 = (__this->fields)._acceptButton;
            pSVar3 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            if (pBVar10 != (ButtonWithIcon_o *)0x0) {
              SFButton__RemoveEventListener((SFButton_o *)pBVar10,2,pSVar3,(MethodInfo *)0x0);
              pBVar10 = (__this->fields)._acceptButton;
              pSVar3 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo)
              ;
              System_Action<object>___ctor();
              if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                SFButton__AddEventListener((SFButton_o *)pBVar10,2,pSVar3,(MethodInfo *)0x0);
                pBVar10 = (__this->fields)._acceptButton;
                if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                  pUVar2 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pBVar10,(MethodInfo *)0x0);
                  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).FAAJIPNANGB,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar2,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
                    pBVar10 = (__this->fields)._acceptButton;
                    if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                      ButtonWithIcon__SetIcon
                                (pBVar10,(__this->fields).FGGKLAINKKA,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Dialogs_StrangerDialog__ACICKHKFILK
                                (__this_02,(LabelButton_o *)(__this->fields)._storeButton,
                                 (__this->fields).BIOGAAPDOHK,(__this->fields).IIGDDBBHJEN,1,in_x5);
                      pBVar10 = (__this->fields)._storeButton;
                      pSVar3 = (System_Action_object__o *)
                               thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                      System_Action<object>___ctor();
                      if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                        SFButton__RemoveEventListener
                                  ((SFButton_o *)pBVar10,2,pSVar3,(MethodInfo *)0x0);
                        pBVar10 = (__this->fields)._storeButton;
                        pSVar3 = (System_Action_object__o *)
                                 thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                        System_Action<object>___ctor();
                        if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                          SFButton__AddEventListener
                                    ((SFButton_o *)pBVar10,2,pSVar3,(MethodInfo *)0x0);
                          pBVar10 = (__this->fields)._storeButton;
                          if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                            pUVar2 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pBVar10,(MethodInfo *)0x0
                                               );
                            bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                                              ((__this->fields).IIGDDBBHJEN,(MethodInfo *)0x0);
                            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                              UnityEngine_GameObject__SetActive
                                        (pUVar2,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
                              pBVar10 = (__this->fields)._storeButton;
                              if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                ButtonWithIcon__SetIcon
                                          (pBVar10,(__this->fields).CKOILAHDKCN,(MethodInfo *)0x0);
                                pBVar10 = (__this->fields)._acceptButton;
                                if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                  __this_04 = (__this->fields)._storeButton;
                                  pUVar2 = UnityEngine_Component__get_gameObject
                                                     ((UnityEngine_Component_o *)pBVar10,
                                                      (MethodInfo *)0x0);
                                  if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
                                     (bVar1 = UnityEngine_GameObject__get_activeSelf
                                                        (pUVar2,(MethodInfo *)0x0),
                                     __this_04 != (ButtonWithIcon_o *)0x0)) {
                                    CJNHFNHJHPE = 2;
                                    if (!bVar1) {
                                      CJNHFNHJHPE = 0;
                                    }
                                    LabelButton__set_Control
                                              ((LabelButton_o *)__this_04,CJNHFNHJHPE,
                                               (MethodInfo *)0x0);
                                    __this_03 = (__this->fields).super.super._bottomStripe;
                                    if ((__this_03 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                                       (pUVar4 = UnityEngine_Component__get_transform
                                                           ((UnityEngine_Component_o *)__this_03,
                                                            (MethodInfo *)0x0),
                                       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                                      UVar13 = UnityEngine_Transform__get_localPosition
                                                         (pUVar4,(MethodInfo *)0x0);
                                      pBVar10 = (__this->fields)._acceptButton;
                                      if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                        pUVar5 = (UnityEngine_RectTransform_o *)
                                                 UnityEngine_Component__GetComponent<object>
                                                           ((UnityEngine_Component_o *)pBVar10,
                                                                                                                        
                                                  Method_UnityEngine_Component_GetComponent<RectTransform>__
                                                  );
                                        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                                          UVar11 = UnityEngine_RectTransform__get_rect
                                                             (pUVar5,(MethodInfo *)0x0);
                                          pBVar10 = (__this->fields)._rejectButton;
                                          if ((pBVar10 != (ButtonWithIcon_o *)0x0) &&
                                             (pUVar5 = (UnityEngine_RectTransform_o *)
                                                       UnityEngine_Component__GetComponent<object>
                                                                 ((UnityEngine_Component_o *)pBVar10
                                                                  ,
                                                  Method_UnityEngine_Component_GetComponent<RectTransform>__
                                                  ), pUVar5 != (UnityEngine_RectTransform_o *)0x0))
                                          {
                                            UVar12 = UnityEngine_RectTransform__get_rect
                                                               (pUVar5,(MethodInfo *)0x0);
                                            pBVar10 = (__this->fields)._rejectButton;
                                            if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                              pUVar4 = UnityEngine_Component__get_transform
                                                                 ((UnityEngine_Component_o *)pBVar10
                                                                  ,(MethodInfo *)0x0);
                                              UnityEngine_TransformExtensions__SetLocalPositionX
                                                        (pUVar4,(-40.0 - UVar11.fields.m_Width * 0.5
                                                                ) - UVar12.fields.m_Width * 0.5,
                                                         (MethodInfo *)0x0);
                                              pBVar10 = (__this->fields)._rejectButton;
                                              if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                                value = UVar13.fields.y + 130.0;
                                                pUVar4 = UnityEngine_Component__get_transform
                                                                   ((UnityEngine_Component_o *)
                                                                    pBVar10,(MethodInfo *)0x0);
                                                UnityEngine_TransformExtensions__SetLocalPositionY
                                                          (pUVar4,value,(MethodInfo *)0x0);
                                                pBVar10 = (__this->fields)._acceptButton;
                                                if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                                  pUVar4 = UnityEngine_Component__get_transform
                                                                     ((UnityEngine_Component_o *)
                                                                      pBVar10,(MethodInfo *)0x0);
                                                  UnityEngine_TransformExtensions__SetLocalPositionX
                                                            (pUVar4,0.0,(MethodInfo *)0x0);
                                                  pBVar10 = (__this->fields)._acceptButton;
                                                  if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                                    pUVar4 = UnityEngine_Component__get_transform
                                                                       ((UnityEngine_Component_o *)
                                                                        pBVar10,(MethodInfo *)0x0);
                                                                                                        
                                                  UnityEngine_TransformExtensions__SetLocalPositionY
                                                            (pUVar4,value,(MethodInfo *)0x0);
                                                  pBVar10 = (__this->fields)._acceptButton;
                                                  if ((pBVar10 != (ButtonWithIcon_o *)0x0) &&
                                                     (pUVar5 = (UnityEngine_RectTransform_o *)
                                                                                                                              
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pBVar10,
                                                                                                                          
                                                  Method_UnityEngine_Component_GetComponent<RectTransform>__
                                                  ), pUVar5 != (UnityEngine_RectTransform_o *)0x0))
                                                  {
                                                    UVar11 = UnityEngine_RectTransform__get_rect
                                                                       (pUVar5,(MethodInfo *)0x0);
                                                    pBVar10 = (__this->fields)._storeButton;
                                                    if ((pBVar10 != (ButtonWithIcon_o *)0x0) &&
                                                       (pUVar5 = (UnityEngine_RectTransform_o *)
                                                                                                                                  
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pBVar10,
                                                                                                                          
                                                  Method_UnityEngine_Component_GetComponent<RectTransform>__
                                                  ), pUVar5 != (UnityEngine_RectTransform_o *)0x0))
                                                  {
                                                    UVar12 = UnityEngine_RectTransform__get_rect
                                                                       (pUVar5,(MethodInfo *)0x0);
                                                    pBVar10 = (__this->fields)._storeButton;
                                                    if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                                      pUVar4 = UnityEngine_Component__get_transform
                                                                         ((UnityEngine_Component_o *
                                                                          )pBVar10,(MethodInfo *)0x0
                                                                         );
                                                                                                            
                                                  UnityEngine_TransformExtensions__SetLocalPositionX
                                                            (pUVar4,UVar11.fields.m_Width * 0.5 +
                                                                    40.0 + UVar12.fields.m_Width *
                                                                           0.5,(MethodInfo *)0x0);
                                                  pBVar10 = (__this->fields)._storeButton;
                                                  if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                                    pUVar4 = UnityEngine_Component__get_transform
                                                                       ((UnityEngine_Component_o *)
                                                                        pBVar10,(MethodInfo *)0x0);
                                                                                                        
                                                  UnityEngine_TransformExtensions__SetLocalPositionY
                                                            (pUVar4,value,(MethodInfo *)0x0);
                                                  if ((__this->fields).KGEDEAGBKGB == false) {
                                                    return;
                                                  }
                                                  pSVar6 = (__this->fields)._checkBox;
                                                  if ((pSVar6 != (SFToggle_o *)0x0) &&
                                                     (pUVar2 = UnityEngine_Component__get_gameObject
                                                                         ((UnityEngine_Component_o *
                                                                          )pSVar6,(MethodInfo *)0x0)
                                                     , pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar2,true,(MethodInfo *)0x0);
                                                    pSVar6 = (__this->fields)._checkBox;
                                                    if (pSVar6 != (SFToggle_o *)0x0) {
                                                      UnityEngine_UI_Toggle__set_isOn
                                                                ((UnityEngine_UI_Toggle_o *)pSVar6,
                                                                 (__this->fields).PKGLLMLHGPC,
                                                                 (MethodInfo *)0x0);
                                                      pSVar6 = (__this->fields)._checkBox;
                                                      if (pSVar6 != (SFToggle_o *)0x0) {
                                                        __this_05 = (
                                                  UnityEngine_Events_UnityEvent_bool__o *)
                                                  (pSVar6->fields).super.onValueChanged;
                                                  call = (UnityEngine_Events_UnityAction_T0__o *)
                                                         thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<bool>_TypeInfo);
                                                  UnityEngine_Events_UnityAction<bool>___ctor();
                                                  if (__this_05 !=
                                                      (UnityEngine_Events_UnityEvent_bool__o *)0x0)
                                                  {
                                                    UnityEngine_Events_UnityEvent<bool>__AddListener
                                                              (__this_05,call,
                                                                                                                              
                                                  Method_UnityEngine_Events_UnityEvent<bool>_AddListener__
                                                  );
                                                  pSVar6 = (__this->fields)._checkBox;
                                                  if (pSVar6 != (SFToggle_o *)0x0) {
                                                    pUVar4 = UnityEngine_Component__get_transform
                                                                       ((UnityEngine_Component_o *)
                                                                        pSVar6,(MethodInfo *)0x0);
                                                                                                        
                                                  UnityEngine_TransformExtensions__SetLocalPositionY
                                                            (pUVar4,value,(MethodInfo *)0x0);
                                                  pNVar7 = (__this->fields)._checkBoxLabel;
                                                  if ((pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)
                                                     && (pUVar2 = 
                                                  UnityEngine_Component__get_gameObject
                                                            ((UnityEngine_Component_o *)pNVar7,
                                                             (MethodInfo *)0x0),
                                                  pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar2,true,(MethodInfo *)0x0);
                                                    pNVar7 = (__this->fields)._checkBoxLabel;
                                                    if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)
                                                    {
                                                      Nekki_SF2_GUI_LabelAlias__set_LabelFontSize
                                                                (pNVar7,0x67,(MethodInfo *)0x0);
                                                      pNVar7 = (__this->fields)._checkBoxLabel;
                                                      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished
                                                          == 0) {
                                                        thunk_FUN_01ba7564();
                                                      }
                                                      if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)
                                                                    0x0) {
                                                        pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields
                                                        ;
                                                        (*(pNVar7->klass->vtable)._23_set_color.
                                                          methodPtr)((ulong)(uint)(pBVar8->
                                                  FHIAKPJBBCB).fields.r,
                                                  (pBVar8->FHIAKPJBBCB).fields.g,
                                                  (pBVar8->FHIAKPJBBCB).fields.b,
                                                  (pBVar8->FHIAKPJBBCB).fields.a,pNVar7,
                                                  (pNVar7->klass->vtable)._23_set_color.method);
                                                  pNVar7 = (__this->fields)._checkBoxLabel;
                                                  if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                                    Nekki_SF2_GUI_LabelAlias__set_Alias
                                                              (pNVar7,(__this->fields).JKBAACEKGJF,
                                                               (MethodInfo *)0x0);
                                                    pNVar7 = (__this->fields)._checkBoxLabel;
                                                    if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)
                                                    {
                                                      pUVar4 = UnityEngine_Component__get_transform
                                                                         ((UnityEngine_Component_o *
                                                                          )pNVar7,(MethodInfo *)0x0)
                                                      ;
                                                                                                            
                                                  UnityEngine_TransformExtensions__SetLocalPositionY
                                                            (pUVar4,value,(MethodInfo *)0x0);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0327afdc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void EGHBJLDNOMA()  [RVA 0x317B908]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$EGHBJLDNOMA @ RVA 0x317B908

void Nekki_SF2_GUI_Dialogs_StrangerDialog__EGHBJLDNOMA
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  ButtonWithIcon_o *pBVar1;
  UnityEngine_GameObject_o *pUVar2;
  LabelButton_o *pLVar3;
  UnityEngine_RectTransform_o *pUVar4;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  System_Action_object__o *pSVar7;
  float value;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector3_o UVar9;
  
  if ((DAT_04566989 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StrangerDialog_HFGKEOFLLPC__);
    FUN_01bab630(&StringLiteral_17765/*"dlgButtonWait"*/);
    DAT_04566989 = 1;
  }
  (__this->fields).super.super.NIEHEOKFPAN = StringLiteral_17765/*"dlgButtonWait"*/;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Dialogs_StoryDialog__LCGFJKFJKJK
            ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,3,(MethodInfo *)0x0);
  pBVar1 = (__this->fields)._acceptButton;
  if ((pBVar1 != (ButtonWithIcon_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pBVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pBVar1 = (__this->fields)._rejectButton;
    if ((pBVar1 != (ButtonWithIcon_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pBVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pBVar1 = (__this->fields)._storeButton;
      if ((pBVar1 != (ButtonWithIcon_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pBVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pLVar3 = (__this->fields).super.super._btnOK;
        if (pLVar3 != (LabelButton_o *)0x0) {
          pUVar4 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pLVar3,
                              Method_UnityEngine_Component_GetComponent<RectTransform>__);
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
            __this_00 = (__this->fields).super.super._bottomStripe;
            if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
               (pUVar5 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
               pUVar5 != (UnityEngine_Transform_o *)0x0)) {
              UVar9 = UnityEngine_Transform__get_localPosition(pUVar5,(MethodInfo *)0x0);
              pLVar3 = (__this->fields).super.super._btnOK;
              if (pLVar3 != (LabelButton_o *)0x0) {
                pUVar5 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionX
                          (pUVar5,UVar8.fields.m_Width * 0.5 + 20.0,(MethodInfo *)0x0);
                pLVar3 = (__this->fields).super.super._btnOK;
                if (pLVar3 != (LabelButton_o *)0x0) {
                  value = UVar9.fields.y + 130.0;
                  pUVar5 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0);
                  UnityEngine_TransformExtensions__SetLocalPositionY(pUVar5,value,(MethodInfo *)0x0)
                  ;
                  pLVar3 = (__this->fields).super.super._btnOK;
                  if ((pLVar3 != (LabelButton_o *)0x0) &&
                     (pNVar6 = (pLVar3->fields).Label, pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0))
                  {
                    Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar6,0x57,(MethodInfo *)0x0);
                    pLVar3 = (__this->fields).super.super._btnOK;
                    if (pLVar3 != (LabelButton_o *)0x0) {
                      (pLVar3->fields).super.super.ButtonId = 0xd;
                      pSVar7 = (System_Action_object__o *)
                               thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                      System_Action<object>___ctor();
                      SFButton__RemoveEventListener((SFButton_o *)pLVar3,2,pSVar7,(MethodInfo *)0x0)
                      ;
                      pLVar3 = (__this->fields).super.super._btnOK;
                      pSVar7 = (System_Action_object__o *)
                               thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                      System_Action<object>___ctor();
                      if (pLVar3 != (LabelButton_o *)0x0) {
                        SFButton__AddEventListener((SFButton_o *)pLVar3,2,pSVar7,(MethodInfo *)0x0);
                        pLVar3 = (__this->fields).super.super._btnCancel;
                        if ((pLVar3 != (LabelButton_o *)0x0) &&
                           (pUVar4 = (UnityEngine_RectTransform_o *)
                                     UnityEngine_Component__GetComponent<object>
                                               ((UnityEngine_Component_o *)pLVar3,
                                                Method_UnityEngine_Component_GetComponent<RectTransform>__
                                               ), pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
                          UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
                          pLVar3 = (__this->fields).super.super._btnCancel;
                          if (pLVar3 != (LabelButton_o *)0x0) {
                            pUVar5 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0)
                            ;
                            UnityEngine_TransformExtensions__SetLocalPositionX
                                      (pUVar5,UVar8.fields.m_Width * -0.5 + -20.0,(MethodInfo *)0x0)
                            ;
                            pLVar3 = (__this->fields).super.super._btnCancel;
                            if (pLVar3 != (LabelButton_o *)0x0) {
                              pUVar5 = UnityEngine_Component__get_transform
                                                 ((UnityEngine_Component_o *)pLVar3,
                                                  (MethodInfo *)0x0);
                              UnityEngine_TransformExtensions__SetLocalPositionY
                                        (pUVar5,value,(MethodInfo *)0x0);
                              pLVar3 = (__this->fields).super.super._btnCancel;
                              if ((pLVar3 != (LabelButton_o *)0x0) &&
                                 (pNVar6 = (pLVar3->fields).Label,
                                 pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
                                Nekki_SF2_GUI_LabelAlias__set_LabelFontSize
                                          (pNVar6,0x57,(MethodInfo *)0x0);
                                pLVar3 = (__this->fields).super.super._btnCancel;
                                if (pLVar3 != (LabelButton_o *)0x0) {
                                  (pLVar3->fields).super.super.ButtonId = 1;
                                  pSVar7 = (System_Action_object__o *)
                                           thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                                  System_Action<object>___ctor();
                                  SFButton__RemoveEventListener
                                            ((SFButton_o *)pLVar3,2,pSVar7,(MethodInfo *)0x0);
                                  pLVar3 = (__this->fields).super.super._btnCancel;
                                  pSVar7 = (System_Action_object__o *)
                                           thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                                  System_Action<object>___ctor();
                                  if (pLVar3 != (LabelButton_o *)0x0) {
                                    SFButton__AddEventListener
                                              ((SFButton_o *)pLVar3,2,pSVar7,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0327bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                    (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
                                              (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method
                                              );
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public LabelButton get_StoreButton()  [RVA 0x317BC58]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$get_StoreButton @ RVA 0x317BC58

LabelButton_o *
Nekki_SF2_GUI_Dialogs_StrangerDialog__get_StoreButton
          (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  return (LabelButton_o *)(__this->fields)._storeButton;
}


// ===== private void LGMDDECHGGA(Unit HOKBHLPPCAH)  [RVA 0x317BC60]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$LGMDDECHGGA @ RVA 0x317BC60

void Nekki_SF2_GUI_Dialogs_StrangerDialog__LGMDDECHGGA(long *__this)

{
                    /* WARNING: Could not recover jumptable at 0x0327bc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*__this + 0x3b8))(__this,*(undefined8 *)(*__this + 0x3c0));
  return;
}


// ===== private void ACICKHKFILK(LabelButton LGHOMHOPNEP, LabelButton.MANJLBPDELA EFJKPCADGJH, string JCLPIKHEKBB, int OGPGLGPMEPD)  [RVA 0x317B894]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$ACICKHKFILK @ RVA 0x317B894

void Nekki_SF2_GUI_Dialogs_StrangerDialog__ACICKHKFILK
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,LabelButton_o *LGHOMHOPNEP,
               int32_t EFJKPCADGJH,System_String_o *JCLPIKHEKBB,int32_t OGPGLGPMEPD,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if ((LGHOMHOPNEP != (LabelButton_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)LGHOMHOPNEP,(MethodInfo *)0x0),
     __this = (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *)0x0,
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    LabelButton__set_ButtonColor(LGHOMHOPNEP,EFJKPCADGJH,(MethodInfo *)0x0);
    LabelButton__set_Alias(LGHOMHOPNEP,JCLPIKHEKBB,(MethodInfo *)0x0);
    (LGHOMHOPNEP->fields).super.super.ButtonId = OGPGLGPMEPD;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public LabelButton get_RejectButton()  [RVA 0x317BC70]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$get_RejectButton @ RVA 0x317BC70

LabelButton_o *
Nekki_SF2_GUI_Dialogs_StrangerDialog__get_RejectButton
          (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  return (LabelButton_o *)(__this->fields)._rejectButton;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x317BC78]
// Nekki.SF2.GUI.Dialogs.StrangerDialog$$GKPJMHOFIOO @ RVA 0x317BC78

void Nekki_SF2_GUI_Dialogs_StrangerDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_o UVar3;
  
  Nekki_SF2_GUI_Dialogs_StrangerDialog__DBAFLMPFDKB(__this,method);
  Nekki_SF2_GUI_Dialogs_StoryDialog__GKPJMHOFIOO
            ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
  if ((__this->fields).KGEDEAGBKGB == false) {
    return;
  }
  pUVar1 = (__this->fields).super.super._content;
  if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar3 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).super.super._content;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY
                (pUVar2,UVar3.fields.y + 50.0 + 20.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

