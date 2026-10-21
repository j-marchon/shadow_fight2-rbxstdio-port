// TypeDefIndex 2566
// Namespace: Nekki.SF2.GUI
// public class HintBox : MonoBehaviour
// Fields:
//   private RectTransform _RectTransform; // 0x20
//   private ResolutionImage _Arrow; // 0x28
//   protected LabelAlias _Title; // 0x30
//   protected LabelAlias _Description; // 0x38
//   private RectTransform _BGTransform; // 0x40
//   private VerticalLayoutGroup _BGLayout; // 0x48
//   private float _AsianLanguagesLineSpacingMultipler; // 0x50
//   private float OKEPCKPFMKG; // 0x54
//   private bool IJPNBHMPHHB; // 0x58

// ===== protected void MFAGMLEEDEJ()  [RVA 0x339EAB0]
// Nekki.SF2.GUI.HintBox$$MFAGMLEEDEJ @ RVA 0x339EAB0

void Nekki_SF2_GUI_HintBox__MFAGMLEEDEJ(Nekki_SF2_GUI_HintBox_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_RectOffset_o *pUVar4;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector2_o UVar11;
  UnityEngine_Rect_o UVar12;
  
  if ((DAT_04567c98 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c98 = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields)._Title;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar8 = 0.0;
  if (!bVar1) {
    pNVar5 = (__this->fields)._Title;
    if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0349ec44;
    fVar8 = (float)(*(pNVar5->klass->vtable)._82_get_preferredHeight.methodPtr)
                             (pNVar5,(pNVar5->klass->vtable)._82_get_preferredHeight.method);
  }
  pNVar5 = (__this->fields)._Description;
  if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0349ec44;
  fVar9 = (float)(*(pNVar5->klass->vtable)._82_get_preferredHeight.methodPtr)
                           (pNVar5,(pNVar5->klass->vtable)._82_get_preferredHeight.method);
  pUVar6 = (__this->fields)._BGTransform;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar10 = 0.0;
  if (!bVar1) {
    pUVar6 = (__this->fields)._BGTransform;
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0349ec44;
    UVar11 = UnityEngine_RectTransform__get_offsetMax(pUVar6,(MethodInfo *)0x0);
    fVar10 = ABS(UVar11.fields.y);
  }
  pUVar7 = (__this->fields)._BGLayout;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar10 = fVar8 + fVar9 + fVar10;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar7 = (__this->fields)._BGLayout;
    if ((pUVar7 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) ||
       (pUVar4 = (pUVar7->fields).super.super.m_Padding, pUVar4 == (UnityEngine_RectOffset_o *)0x0))
    goto LAB_0349ec44;
    fVar8 = *(float *)&(pUVar7->fields).super.m_ChildScaleWidth;
    iVar2 = UnityEngine_RectOffset__get_top(pUVar4,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._BGLayout;
    if ((pUVar7 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) ||
       (pUVar4 = (pUVar7->fields).super.super.m_Padding, pUVar4 == (UnityEngine_RectOffset_o *)0x0))
    goto LAB_0349ec44;
    iVar3 = UnityEngine_RectOffset__get_bottom(pUVar4,(MethodInfo *)0x0);
    fVar10 = fVar10 + fVar8 + (float)iVar2 + (float)iVar3;
  }
  pUVar6 = (__this->fields)._RectTransform;
  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
    UVar12 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
    UVar11.fields.y = fVar10;
    UVar11.fields.x = UVar12.fields.m_Width;
    UnityEngine_RectTransform__set_sizeDelta(pUVar6,UVar11,(MethodInfo *)0x0);
    return;
  }
LAB_0349ec44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x339EC48]
// Nekki.SF2.GUI.HintBox$$.ctor @ RVA 0x339EC48

void Nekki_SF2_GUI_HintBox___ctor(Nekki_SF2_GUI_HintBox_o *__this,MethodInfo *method)

{
  (__this->fields)._AsianLanguagesLineSpacingMultipler = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public virtual void Init(float PCBIKNDPPAD, float LGOOBGHPHGI)  [RVA 0x339EC58]
// Nekki.SF2.GUI.HintBox$$Init @ RVA 0x339EC58

void Nekki_SF2_GUI_HintBox__Init
               (Nekki_SF2_GUI_HintBox_o *__this,float PCBIKNDPPAD,float LGOOBGHPHGI,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  ulong uVar4;
  ulong uVar5;
  UnityEngine_Vector2_o UVar6;
  
  uVar5 = (ulong)(uint)LGOOBGHPHGI;
  uVar4 = (ulong)(uint)PCBIKNDPPAD;
  if ((DAT_04567c99 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c99 = 1;
  }
  if (PCBIKNDPPAD <= 0.0) {
    pUVar2 = (__this->fields)._RectTransform;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0349ed7c;
    UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
    uVar4 = (ulong)UVar6.fields & 0xffffffff;
  }
  if (LGOOBGHPHGI <= 0.0) {
    pUVar2 = (__this->fields)._RectTransform;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0349ed7c;
    UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
    uVar5 = (ulong)UVar6.fields >> 0x20;
  }
  pUVar2 = (__this->fields)._RectTransform;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar6.fields.x = (float)uVar4;
    UVar6.fields.y = (float)uVar5;
    UnityEngine_RectTransform__set_sizeDelta(pUVar2,UVar6,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._Description;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pUVar2 = (__this->fields)._BGTransform;
      (__this->fields).OKEPCKPFMKG = (float)(pNVar3->fields)._labelFontSize;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pUVar2 = (__this->fields)._BGTransform;
        if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar2,(MethodInfo *)0x0);
      }
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0349ed7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ResolutionImage get_Arrow()  [RVA 0x339ED80]
// Nekki.SF2.GUI.HintBox$$get_Arrow @ RVA 0x339ED80

Nekki_SF2_GUI_ResolutionImage_o *
Nekki_SF2_GUI_HintBox__get_Arrow(Nekki_SF2_GUI_HintBox_o *__this,MethodInfo *method)

{
  return (__this->fields)._Arrow;
}


// ===== protected virtual void Update()  [RVA 0x339ED88]
// Nekki.SF2.GUI.HintBox$$Update @ RVA 0x339ED88

void Nekki_SF2_GUI_HintBox__Update(Nekki_SF2_GUI_HintBox_o *__this,MethodInfo *method)

{
  return;
}


// ===== public RectTransform get_RectTransform()  [RVA 0x339ED8C]
// Nekki.SF2.GUI.HintBox$$get_RectTransform @ RVA 0x339ED8C

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_HintBox__get_RectTransform(Nekki_SF2_GUI_HintBox_o *__this,MethodInfo *method)

{
  return (__this->fields)._RectTransform;
}


// ===== public void SetText(string HLFKCPFEJND, string LODPPIMOFPH, int FCIMCPDCPGP, int GHGFENOFEBF, TextAnchor JKBCEOKEEDH)  [RVA 0x339ED94]
// Nekki.SF2.GUI.HintBox$$SetText @ RVA 0x339ED94

void Nekki_SF2_GUI_HintBox__SetText
               (Nekki_SF2_GUI_HintBox_o *__this,System_String_o *HLFKCPFEJND,
               System_String_o *LODPPIMOFPH,int32_t FCIMCPDCPGP,int32_t GHGFENOFEBF,
               int32_t JKBCEOKEEDH,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *arg0;
  Il2CppObject *arg2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  undefined2 local_48 [2];
  undefined2 local_44 [2];
  
  if ((DAT_04567c9a & 1) == 0) {
    FUN_01bab630(&char_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_22453/*"{0}{1}{2}"*/);
    DAT_04567c9a = 1;
  }
  pNVar2 = (__this->fields)._Title;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._Title;
    if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0349ef38;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,HLFKCPFEJND,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._Title;
    if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0349ef38;
    Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar2,FCIMCPDCPGP,(MethodInfo *)0x0);
  }
  pNVar2 = (__this->fields)._Description;
  bVar1 = PCOEHCPGBBG__CMDDCBNKHEK(LODPPIMOFPH,(MethodInfo *)0x0);
  if (!bVar1) {
    if (LODPPIMOFPH == (System_String_o *)0x0) goto LAB_0349ef38;
    bVar1 = System_String__Contains(LODPPIMOFPH,0x5e,(MethodInfo *)0x0);
    if (!bVar1) {
      local_44[0] = 0x5e;
      arg0 = (Il2CppObject *)thunk_FUN_01bda448(char_TypeInfo,local_44);
      local_48[0] = 0x5e;
      arg2 = (Il2CppObject *)thunk_FUN_01bda448(char_TypeInfo,local_48);
      LODPPIMOFPH = System_String__Format
                              (StringLiteral_22453/*"{0}{1}{2}"*/,arg0,(Il2CppObject *)LODPPIMOFPH,arg2,
                               (MethodInfo *)0x0);
    }
  }
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,LODPPIMOFPH,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._Description;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar2,GHGFENOFEBF,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._Description;
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        UnityEngine_UI_Text__set_alignment
                  ((UnityEngine_UI_Text_o *)pNVar2,JKBCEOKEEDH,(MethodInfo *)0x0);
        Nekki_SF2_GUI_HintBox__UpdateLineSpacing(__this,method_00);
        Nekki_SF2_GUI_HintBox__MFAGMLEEDEJ(__this,method_01);
        return;
      }
    }
  }
LAB_0349ef38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateLineSpacing()  [RVA 0x339EF3C]
// Nekki.SF2.GUI.HintBox$$UpdateLineSpacing @ RVA 0x339EF3C

void Nekki_SF2_GUI_HintBox__UpdateLineSpacing(Nekki_SF2_GUI_HintBox_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  VirtualInvokeData *pVVar3;
  long lVar4;
  Il2CppClass *pIVar5;
  ulong uVar6;
  int32_t *piVar7;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  float CJNHFNHJHPE;
  
  if ((DAT_04567c9b & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567c9b = 1;
  }
  __this_00 = (__this->fields)._Description;
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar5 = pIVar2->klass;
    uVar1._0_1_ = (pIVar5->_2).rank;
    uVar1._1_1_ = (pIVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pIVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar3 = pIVar5->vtable + (*piVar7 + 6);
          goto LAB_0349efe8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,6);
LAB_0349efe8:
    lVar4 = (*pVVar3->methodPtr)(pIVar2,pVVar3->method);
    if (lVar4 != 0) {
      CJNHFNHJHPE = (__this->fields).OKEPCKPFMKG;
      if (*(char *)(lVar4 + 0x58) != '\0') {
        CJNHFNHJHPE = CJNHFNHJHPE * (__this->fields)._AsianLanguagesLineSpacingMultipler;
      }
      if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_LabelLineSpacing(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Flip()  [RVA 0x339F028]
// Nekki.SF2.GUI.HintBox$$Flip @ RVA 0x339F028

void Nekki_SF2_GUI_HintBox__Flip(Nekki_SF2_GUI_HintBox_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04567c9c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c9c = 1;
  }
  if ((__this->fields).IJPNBHMPHHB != false) {
    return;
  }
  (__this->fields).IJPNBHMPHHB = true;
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__Rotate
              (pUVar2,(UnityEngine_Vector3_o)(ZEXT412(0x43340000) << 0x40),(MethodInfo *)0x0);
    __this_00 = (__this->fields)._Arrow;
                    /* try { // try from 0349f0a0 to 0359f1eb has its CatchHandler @ 0349f0a0
                       catch() { ... } // from try @ 0349f0a0 with catch @ 0349f0a0
                       catch() { ... } // from try @ 0349f35c with catch @ 0349f0a0
                       catch() { ... } // from try @ 0349f3b0 with catch @ 0349f0a0
                       catch() { ... } // from try @ 0349f3c8 with catch @ 0349f0a0
                       catch() { ... } // from try @ 0349f43c with catch @ 0349f0a0
                       catch() { ... } // from try @ 0349f46c with catch @ 0349f0a0 */
    if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetSiblingIndex(pUVar2,0,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._Title;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar3 = (__this->fields)._Title;
        if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_0349f188;
        UnityEngine_Transform__Rotate
                  (pUVar2,(UnityEngine_Vector3_o)ZEXT812(0x4334000043340000),(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._Title;
        if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_0349f188;
        UnityEngine_Transform__SetSiblingIndex(pUVar2,2,(MethodInfo *)0x0);
      }
      pNVar3 = (__this->fields)._Description;
      if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__Rotate
                  (pUVar2,(UnityEngine_Vector3_o)ZEXT812(0x4334000043340000),(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._Description;
        if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetSiblingIndex(pUVar2,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0349f188:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ResetFlip()  [RVA 0x339F18C]
// Nekki.SF2.GUI.HintBox$$ResetFlip @ RVA 0x339F18C

void Nekki_SF2_GUI_HintBox__ResetFlip(Nekki_SF2_GUI_HintBox_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04567c9d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c9d = 1;
  }
  if ((__this->fields).IJPNBHMPHHB == false) {
                    /* try { // try from 0349f2e4 to 0359f2ef has its CatchHandler @ 0349f3e4 */
    return;
  }
  (__this->fields).IJPNBHMPHHB = false;
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__Rotate
              (pUVar2,(UnityEngine_Vector3_o)(ZEXT412(0xc3340000) << 0x40),(MethodInfo *)0x0);
                    /* try { // try from 0349f1ec to 0359f1f3 has its CatchHandler @ 0349f418 */
    __this_00 = (__this->fields)._Arrow;
    if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 0349f204 to 0359f20f has its CatchHandler @ 0349f410 */
      UnityEngine_Transform__SetSiblingIndex(pUVar2,0,(MethodInfo *)0x0);
                    /* try { // try from 0349f218 to 0359f227 has its CatchHandler @ 0349f420 */
      pNVar3 = (__this->fields)._Title;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0349f22c to 0359f253 has its CatchHandler @ 0349f41c */
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar3 = (__this->fields)._Title;
        if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_0349f2e8;
                    /* try { // try from 0349f258 to 0359f273 has its CatchHandler @ 0349f3f8 */
        UnityEngine_Transform__Rotate
                  (pUVar2,(UnityEngine_Vector3_o)ZEXT812(0xc3340000c3340000),(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._Title;
        if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_0349f2e8;
        UnityEngine_Transform__SetSiblingIndex(pUVar2,1,(MethodInfo *)0x0);
      }
      pNVar3 = (__this->fields)._Description;
                    /* try { // try from 0349f290 to 0359f2a7 has its CatchHandler @ 0349f3e8 */
      if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__Rotate
                  (pUVar2,(UnityEngine_Vector3_o)ZEXT812(0xc3340000c3340000),(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._Description;
        if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 0349f2d0 to 0359f2df has its CatchHandler @ 0349f3e0 */
          UnityEngine_Transform__SetSiblingIndex(pUVar2,2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0349f2e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

