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

