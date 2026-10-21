// TypeDefIndex 1887
// Namespace: Nekki.SF2.GUI
// public class MultiImageButton : Button
// Fields:

// ===== private Color OFMHHIPAGPH(Selectable.SelectionState ICJLHMDFMKG)  [RVA 0x3251284]
// Nekki.SF2.GUI.MultiImageButton$$OFMHHIPAGPH @ RVA 0x3251284

/* WARNING: Type propagation algorithm not settling */

UnityEngine_Color_o
Nekki_SF2_GUI_MultiImageButton__OFMHHIPAGPH
          (Nekki_SF2_GUI_MultiImageButton_o *__this,int32_t ICJLHMDFMKG,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  
                    /* try { // try from 03351294 to 0345135f has its CatchHandler @ 03351294
                       catch() { ... } // from try @ 03351294 with catch @ 03351294
                       catch() { ... } // from try @ 0335139c with catch @ 03351294
                       catch() { ... } // from try @ 033513f8 with catch @ 03351294
                       catch() { ... } // from try @ 03351420 with catch @ 03351294
                       catch() { ... } // from try @ 03351460 with catch @ 03351294 */
  if ((DAT_04567134 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_ColorBlock_TypeInfo);
    DAT_04567134 = 1;
  }
  UVar1 = (UnityEngine_Color_Fields)NEON_fmov(0x3f800000,4);
  switch(ICJLHMDFMKG) {
  case 0:
    UVar1 = (__this->fields).super.super.m_Colors.fields.m_NormalColor.fields;
    break;
  case 1:
    UVar1 = (__this->fields).super.super.m_Colors.fields.m_HighlightedColor.fields;
    break;
  case 2:
    UVar1 = (__this->fields).super.super.m_Colors.fields.m_PressedColor.fields;
    break;
  default:
    goto switchD_033512dc_caseD_3;
  case 4:
    UVar1 = (__this->fields).super.super.m_Colors.fields.m_DisabledColor.fields;
  }
  if ((UnityEngine_UI_ColorBlock_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
switchD_033512dc_caseD_3:
  return (UnityEngine_Color_o)UVar1;
}


// ===== private Graphic[] HGJPLFBAFOB()  [RVA 0x3251350]
// Nekki.SF2.GUI.MultiImageButton$$HGJPLFBAFOB @ RVA 0x3251350

UnityEngine_UI_Graphic_array *
Nekki_SF2_GUI_MultiImageButton__HGJPLFBAFOB
          (Nekki_SF2_GUI_MultiImageButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_Graphic_array *pUVar1;
  
                    /* try { // try from 03351360 to 03451367 has its CatchHandler @ 03351400 */
  if ((DAT_04567135 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<Graphic>__);
                    /* try { // try from 03351374 to 0345139b has its CatchHandler @ 03351404 */
    DAT_04567135 = 1;
  }
  __this_00 = (__this->fields).super.super.m_TargetGraphic;
  if ((__this_00 != (UnityEngine_UI_Graphic_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 0335139c to 034513f3 has its CatchHandler @ 03351294 */
    pUVar1 = (UnityEngine_UI_Graphic_array *)
             UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)__this_01,
                        Method_UnityEngine_Component_GetComponentsInChildren<Graphic>__);
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void DoStateTransition(Selectable.SelectionState ICJLHMDFMKG, bool BAAOJPPLJGA)  [RVA 0x32513AC]
// Nekki.SF2.GUI.MultiImageButton$$DoStateTransition @ RVA 0x32513AC

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_MultiImageButton__DoStateTransition
               (Nekki_SF2_GUI_MultiImageButton_o *__this,int32_t ICJLHMDFMKG,bool BAAOJPPLJGA,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  float fVar2;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_o HEEGPMBGMMC;
  
  method_00 = (MethodInfo *)(ulong)BAAOJPPLJGA;
  if ((DAT_04567136 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_ColorBlock_TypeInfo);
    DAT_04567136 = 1;
  }
                    /* try { // try from 033513f4 to 034513f7 has its CatchHandler @ 033513fc */
                    /* try { // try from 033513f8 to 0345141b has its CatchHandler @ 03351294 */
  if ((__this->fields).super.super.m_Transition != 1) {
    UnityEngine_UI_Selectable__DoStateTransition
              ((UnityEngine_UI_Selectable_o *)__this,ICJLHMDFMKG,BAAOJPPLJGA,(MethodInfo *)0x0);
    return;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033513f4 with catch @ 033513fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03351360 with catch @ 03351400
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03351374 with catch @ 03351404
                        */
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 0335141c to 0345141f has its CatchHandler @ 03351448 */
                    /* try { // try from 03351420 to 03451457 has its CatchHandler @ 03351294 */
    UVar3 = Nekki_SF2_GUI_MultiImageButton__OFMHHIPAGPH(__this,ICJLHMDFMKG,method_00);
    fVar2 = (__this->fields).super.super.m_Colors.fields.m_ColorMultiplier;
                    /* catch() { ... } // from try @ 0335141c with catch @ 03351448 */
    if ((UnityEngine_UI_ColorBlock_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    HEEGPMBGMMC.fields.r = UVar3.fields.r * fVar2;
    HEEGPMBGMMC.fields.g = UVar3.fields.g * fVar2;
                    /* try { // try from 03351458 to 0345145f has its CatchHandler @ 03351474 */
    HEEGPMBGMMC.fields.b = UVar3.fields.b * fVar2;
    HEEGPMBGMMC.fields.a = UVar3.fields.a * fVar2;
                    /* try { // try from 03351460 to 0345146b has its CatchHandler @ 03351294 */
                    /* try { // try from 0335146c to 03451473 has its CatchHandler @ 03351474 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03351458 with catch @ 03351474
                       catch(type#2 @ 00000000) { ... } // from try @ 0335146c with catch @ 03351474
                        */
                    /* try { // try from 03351478 to 0345150b has its CatchHandler @ 03351478
                       catch() { ... } // from try @ 03351478 with catch @ 03351478
                       catch() { ... } // from try @ 03351524 with catch @ 03351478
                       catch() { ... } // from try @ 03351568 with catch @ 03351478
                       catch() { ... } // from try @ 03351598 with catch @ 03351478 */
    Nekki_SF2_GUI_MultiImageButton__EECEGOFEKCC(__this,HEEGPMBGMMC,BAAOJPPLJGA,method_00);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3251620]
// Nekki.SF2.GUI.MultiImageButton$$.ctor @ RVA 0x3251620

void Nekki_SF2_GUI_MultiImageButton___ctor
               (Nekki_SF2_GUI_MultiImageButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void EECEGOFEKCC(Color HEEGPMBGMMC, bool BAAOJPPLJGA)  [RVA 0x32514D0]
// Nekki.SF2.GUI.MultiImageButton$$EECEGOFEKCC @ RVA 0x32514D0

void Nekki_SF2_GUI_MultiImageButton__EECEGOFEKCC
               (Nekki_SF2_GUI_MultiImageButton_o *__this,UnityEngine_Color_o HEEGPMBGMMC,
               bool BAAOJPPLJGA,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  UnityEngine_UI_Graphic_array *pUVar3;
  MethodInfo *method_00;
  UnityEngine_UI_Graphic_o *pUVar4;
  uint uVar5;
  ulong uVar6;
  
                    /* try { // try from 0335150c to 03451513 has its CatchHandler @ 0335154c */
  if ((DAT_04567137 & 1) == 0) {
                    /* try { // try from 0335151c to 03451523 has its CatchHandler @ 03351548 */
    FUN_01bab630(&UnityEngine_UI_ColorBlock_TypeInfo);
                    /* try { // try from 03351524 to 03451563 has its CatchHandler @ 03351478 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567137 = 1;
  }
  pUVar4 = (__this->fields).super.super.m_TargetGraphic;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335151c with catch @ 03351548
                        */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335150c with catch @ 0335154c
                        */
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
                    /* try { // try from 03351564 to 03451567 has its CatchHandler @ 03351588 */
    pUVar3 = Nekki_SF2_GUI_MultiImageButton__HGJPLFBAFOB(__this,method_00);
                    /* try { // try from 03351568 to 0345158f has its CatchHandler @ 03351478 */
    if (pUVar3 == (UnityEngine_UI_Graphic_array *)0x0) {
LAB_0335161c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (uint)pUVar3->max_length;
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
                    /* catch() { ... } // from try @ 03351564 with catch @ 03351588 */
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
                    /* try { // try from 03351590 to 03451597 has its CatchHandler @ 033515ac */
        pUVar4 = pUVar3->m_Items[(int)uVar5];
                    /* try { // try from 03351598 to 034515a3 has its CatchHandler @ 03351478 */
        uVar6 = 0;
        if (!BAAOJPPLJGA) {
                    /* try { // try from 033515a4 to 034515ab has its CatchHandler @ 033515ac */
          uVar6 = (ulong)(uint)(__this->fields).super.super.m_Colors.fields.m_FadeDuration;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03351590 with catch @ 033515ac
                       catch(type#2 @ 00000000) { ... } // from try @ 033515a4 with catch @ 033515ac
                        */
          if ((UnityEngine_UI_ColorBlock_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033515b0 to 03451643 has its CatchHandler @ 033515b0
                       catch() { ... } // from try @ 033515b0 with catch @ 033515b0
                       catch() { ... } // from try @ 03351664 with catch @ 033515b0
                       catch() { ... } // from try @ 03351688 with catch @ 033515b0
                       catch() { ... } // from try @ 033516b0 with catch @ 033515b0
                       catch() { ... } // from try @ 033516f0 with catch @ 033515b0 */
            thunk_FUN_01ba7564();
          }
        }
        if (pUVar4 == (UnityEngine_UI_Graphic_o *)0x0) goto LAB_0335161c;
        (*(pUVar4->klass->vtable)._47_CrossFadeColor.methodPtr)
                  (CONCAT44((int)((ulong)HEEGPMBGMMC.fields._0_8_ >> 0x20),HEEGPMBGMMC.fields.r),
                   CONCAT44((int)((ulong)HEEGPMBGMMC.fields._4_8_ >> 0x20),HEEGPMBGMMC.fields.g),
                   CONCAT44((int)((ulong)HEEGPMBGMMC.fields._8_8_ >> 0x20),HEEGPMBGMMC.fields.b),
                   CONCAT44((int)((ulong)register0x00005060 >> 0x20),HEEGPMBGMMC.fields.a),uVar6,
                   pUVar4,1,1,(pUVar4->klass->vtable)._47_CrossFadeColor.method);
        uVar1 = (uint)pUVar3->max_length;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
  }
  return;
}

