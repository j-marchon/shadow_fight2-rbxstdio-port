// TypeDefIndex 732
// Namespace: Nekki.SF2.GUI
// [RequireComponent(typeof(LayoutElement))]
// public class ResolutionImageLE : ResolutionImage
// Fields:
//   private LayoutElement layoutElement; // 0x128

// ===== public LayoutElement get_LayoutElement()  [RVA 0x3046C94]
// Nekki.SF2.GUI.ResolutionImageLE$$get_LayoutElement @ RVA 0x3046C94

UnityEngine_UI_LayoutElement_o *
Nekki_SF2_GUI_ResolutionImageLE__get_LayoutElement
          (Nekki_SF2_GUI_ResolutionImageLE_o *__this,MethodInfo *method)

{
  return *(UnityEngine_UI_LayoutElement_o **)&(__this->fields).super.UseCacheForSingleSprites;
}


// ===== public override void SetNativeSize()  [RVA 0x3046C9C]
// Nekki.SF2.GUI.ResolutionImageLE$$SetNativeSize @ RVA 0x3046C9C

void Nekki_SF2_GUI_ResolutionImageLE__SetNativeSize
               (Nekki_SF2_GUI_ResolutionImageLE_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_ResolutionImage__SetNativeSize
            ((Nekki_SF2_GUI_ResolutionImage_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03146cb0 to 03246cb3 has its CatchHandler @ 03146d00 */
                    /* try { // try from 03146cb4 to 03246cb7 has its CatchHandler @ 03146cf0 */
  Nekki_SF2_GUI_ResolutionImageLE__MBPNGCFCFFH(__this,method_00);
  return;
}


// ===== public override void SetNativeSize(float DCIDOOPHJDG)  [RVA 0x3046E10]
// Nekki.SF2.GUI.ResolutionImageLE$$SetNativeSize @ RVA 0x3046E10

void Nekki_SF2_GUI_ResolutionImageLE__SetNativeSize
               (Nekki_SF2_GUI_ResolutionImageLE_o *__this,float DCIDOOPHJDG,MethodInfo *method)

{
  MethodInfo *method_00;
  
                    /* catch() { ... } // from try @ 03146d7c with catch @ 03146e10
                       catch() { ... } // from try @ 03146dcc with catch @ 03146e10
                       catch() { ... } // from try @ 03146e08 with catch @ 03146e10 */
  Nekki_SF2_GUI_ResolutionImage__SetNativeSize
            ((Nekki_SF2_GUI_ResolutionImage_o *)__this,DCIDOOPHJDG,(MethodInfo *)0x0);
  Nekki_SF2_GUI_ResolutionImageLE__MBPNGCFCFFH(__this,method_00);
  return;
}


// ===== public void set_LayoutElement(LayoutElement CJNHFNHJHPE)  [RVA 0x3046E2C]
// Nekki.SF2.GUI.ResolutionImageLE$$set_LayoutElement @ RVA 0x3046E2C

void Nekki_SF2_GUI_ResolutionImageLE__set_LayoutElement
               (Nekki_SF2_GUI_ResolutionImageLE_o *__this,
               UnityEngine_UI_LayoutElement_o *CJNHFNHJHPE,MethodInfo *method)

{
  *(UnityEngine_UI_LayoutElement_o **)&(__this->fields).super.UseCacheForSingleSprites = CJNHFNHJHPE
  ;
  thunk_FUN_01c20e04(&(__this->fields).super.UseCacheForSingleSprites);
  return;
}


// ===== public void .ctor()  [RVA 0x3046E3C]
// Nekki.SF2.GUI.ResolutionImageLE$$.ctor @ RVA 0x3046E3C

void Nekki_SF2_GUI_ResolutionImageLE___ctor
               (Nekki_SF2_GUI_ResolutionImageLE_o *__this,MethodInfo *method)

{
                    /* try { // try from 03146e3c to 03246e9b has its CatchHandler @ 03146e3c
                       catch() { ... } // from try @ 03146e3c with catch @ 03146e3c
                       catch() { ... } // from try @ 03146ebc with catch @ 03146e3c
                       catch() { ... } // from try @ 03146ee0 with catch @ 03146e3c
                       catch() { ... } // from try @ 03146f10 with catch @ 03146e3c
                       catch() { ... } // from try @ 03146f44 with catch @ 03146e3c */
  Nekki_SF2_GUI_ResolutionImage___ctor((Nekki_SF2_GUI_ResolutionImage_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void MBPNGCFCFFH()  [RVA 0x3046CB8]
// Nekki.SF2.GUI.ResolutionImageLE$$MBPNGCFCFFH @ RVA 0x3046CB8

void Nekki_SF2_GUI_ResolutionImageLE__MBPNGCFCFFH
               (Nekki_SF2_GUI_ResolutionImageLE_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar3;
  UnityEngine_RectTransform_o *pUVar4;
  MethodInfo *extraout_x1;
  long *plVar5;
  UnityEngine_Object_o *pUVar6;
  undefined4 in_register_00005044;
  undefined4 in_register_00005064;
  UnityEngine_Rect_o UVar7;
  
                    /* try { // try from 03146cb8 to 03246cbb has its CatchHandler @ 03146ce8 */
                    /* try { // try from 03146cbc to 03246cc3 has its CatchHandler @ 031469c8 */
                    /* try { // try from 03146cc4 to 03246cc7 has its CatchHandler @ 03146cd0 */
                    /* try { // try from 03146cc8 to 03246ccf has its CatchHandler @ 03146cdc */
                    /* catch() { ... } // from try @ 03146cc4 with catch @ 03146cd0
                       try { // try from 03146cd0 to 03246d23 has its CatchHandler @ 031469c8 */
                    /* catch() { ... } // from try @ 03146a40 with catch @ 03146cd4 */
                    /* catch() { ... } // from try @ 03146a88 with catch @ 03146cd8 */
  if ((DAT_04565de1 & 1) == 0) {
                    /* catch() { ... } // from try @ 03146c20 with catch @ 03146cdc
                       catch() { ... } // from try @ 03146cc8 with catch @ 03146cdc */
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<LayoutElement>__);
                    /* catch() { ... } // from try @ 03146cb8 with catch @ 03146ce8 */
                    /* catch() { ... } // from try @ 03146bac with catch @ 03146cec */
                    /* catch() { ... } // from try @ 03146cb4 with catch @ 03146cf0 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 03146ba0 with catch @ 03146cf4 */
                    /* catch() { ... } // from try @ 03146b94 with catch @ 03146cf8 */
    DAT_04565de1 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03146bb4 with catch @ 03146cfc */
                    /* catch() { ... } // from try @ 03146cb0 with catch @ 03146d00 */
  pUVar6 = *(UnityEngine_Object_o **)&(__this->fields).super.UseCacheForSingleSprites;
                    /* catch() { ... } // from try @ 03146b88 with catch @ 03146d04 */
                    /* catch() { ... } // from try @ 03146b54 with catch @ 03146d08 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03146af8 with catch @ 03146d0c */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  pbVar1 = &(__this->fields).super.UseCacheForSingleSprites;
  bVar2 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03146d24 to 03246d27 has its CatchHandler @ 03146dd4 */
  if (bVar2) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_03146e0c;
    pIVar3 = UnityEngine_GameObject__GetComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_GetComponent<LayoutElement>__);
    *(Il2CppObject **)pbVar1 = pIVar3;
    thunk_FUN_01c20e04(pbVar1,pIVar3);
  }
  pUVar6 = *(UnityEngine_Object_o **)pbVar1;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03146d7c to 03246da3 has its CatchHandler @ 03146e10 */
  if (!bVar2) {
                    /* try { // try from 03146dfc to 03246e07 has its CatchHandler @ 031469c8 */
                    /* try { // try from 03146e08 to 03246e0f has its CatchHandler @ 03146e10 */
    return;
  }
  plVar5 = *(long **)&(__this->fields).super.UseCacheForSingleSprites;
  pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 03146da4 to 03246dbb has its CatchHandler @ 031469c8 */
      (**(code **)(*plVar5 + 0x338))
                (CONCAT44(in_register_00005044,UVar7.fields.m_Width),UVar7.fields.m_YMin,
                 UVar7.fields.m_Width,UVar7.fields.m_Height,plVar5,*(undefined8 *)(*plVar5 + 0x340))
      ;
      plVar5 = *(long **)&(__this->fields).super.UseCacheForSingleSprites;
                    /* try { // try from 03146dbc to 03246dbf has its CatchHandler @ 03146de4 */
      pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 03146dcc to 03246dfb has its CatchHandler @ 03146e10 */
        UVar7 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03146d24 with catch @ 03146dd4 */
        if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 03146dbc with catch @ 03146de4 */
                    /* WARNING: Could not recover jumptable at 0x03146df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x358))
                    (CONCAT44(in_register_00005064,UVar7.fields.m_Height),UVar7.fields.m_YMin,
                     UVar7.fields.m_Width,plVar5,*(undefined8 *)(*plVar5 + 0x360));
          return;
        }
      }
    }
  }
LAB_03146e0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

