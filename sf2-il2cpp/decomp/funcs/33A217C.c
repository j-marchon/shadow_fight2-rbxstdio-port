// PAOMOCCOFDE$$MAHFCKJGBPP @ RVA 0x33A217C

void PAOMOCCOFDE__MAHFCKJGBPP(PAOMOCCOFDE_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  long lVar1;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *pNVar2;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_01;
  LabelButton_o **ppLVar3;
  UnityEngine_Events_UnityEvent_o *__this_02;
  
                    /* try { // try from 034a219c to 035a21d3 has its CatchHandler @ 034a1f24 */
  if ((DAT_04567cc2 & 1) == 0) {
    FUN_01bab630(&Method_PAOMOCCOFDE_IPMJMPDBEJH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567cc2 = 1;
  }
                    /* try { // try from 034a21d4 to 035a21db has its CatchHandler @ 034a22bc */
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 034a21f0 to 035a21fb has its CatchHandler @ 034a2260 */
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
                    /* try { // try from 034a21fc to 035a222b has its CatchHandler @ 034a1f24 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  if (((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
       (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) &&
     (pNVar2 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent
                         ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar1 + 0xb8),
                          (MethodInfo *)0x0),
     pNVar2 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0)) {
    ppLVar3 = &(__this->fields).GPELNIEGMJG;
    *ppLVar3 = (pNVar2->fields)._EnchantApplyButton;
                    /* try { // try from 034a222c to 035a222f has its CatchHandler @ 034a225c */
                    /* try { // try from 034a2230 to 035a2233 has its CatchHandler @ 034a2258 */
    thunk_FUN_01c20e04(ppLVar3);
                    /* try { // try from 034a2234 to 035a223b has its CatchHandler @ 034a2250 */
    if (*ppLVar3 != (LabelButton_o *)0x0) {
                    /* try { // try from 034a223c to 035a227b has its CatchHandler @ 034a1f24 */
      SFButton__set_IsFlashing((SFButton_o *)*ppLVar3,true,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a2178 with catch @ 034a2248 */
                    /* catch() { ... } // from try @ 034a212c with catch @ 034a224c */
      if (*ppLVar3 != (LabelButton_o *)0x0) {
                    /* catch() { ... } // from try @ 034a2234 with catch @ 034a2250 */
                    /* catch() { ... } // from try @ 034a2118 with catch @ 034a2254 */
                    /* catch() { ... } // from try @ 034a2230 with catch @ 034a2258 */
                    /* catch() { ... } // from try @ 034a222c with catch @ 034a225c */
        NAJBHKGHIGK__JKGCKABLLKD
                  ((UnityEngine_Events_UnityEventBase_o *)
                   ((*ppLVar3)->fields).super.super.super.m_OnClick,0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a21f0 with catch @ 034a2260 */
                    /* catch() { ... } // from try @ 034a20fc with catch @ 034a2264 */
        if (*ppLVar3 != (LabelButton_o *)0x0) {
          __this_02 = (UnityEngine_Events_UnityEvent_o *)
                      ((*ppLVar3)->fields).super.super.super.m_OnClick;
                    /* try { // try from 034a227c to 035a227f has its CatchHandler @ 034a22a0 */
                    /* try { // try from 034a2280 to 035a22a7 has its CatchHandler @ 034a1f24 */
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* catch() { ... } // from try @ 034a227c with catch @ 034a22a0 */
                    /* try { // try from 034a22a8 to 035a22bb has its CatchHandler @ 034a231c */
            UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
            AKJJAPEHKCG__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)*ppLVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a21d4 with catch @ 034a22bc
                       try { // try from 034a22bc to 035a22d3 has its CatchHandler @ 034a1f24 */
            lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
            if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_01b81620();
            }
            lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
                    /* try { // try from 034a22d4 to 035a22d7 has its CatchHandler @ 034a22f8 */
                    /* try { // try from 034a22d8 to 035a22ff has its CatchHandler @ 034a1f24 */
            if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_01b81620();
            }
                    /* catch() { ... } // from try @ 034a22d4 with catch @ 034a22f8 */
            if (((**(long **)(lVar1 + 0xb8) != 0) &&
                (lVar1 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x178), lVar1 != 0)) &&
               (__this_00 = *(UnityEngine_Component_o **)(lVar1 + 0x28),
               __this_00 != (UnityEngine_Component_o *)0x0)) {
                    /* try { // try from 034a2300 to 035a2307 has its CatchHandler @ 034a231c */
              LAIGNDBNBJG = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 034a2308 to 035a2313 has its CatchHandler @ 034a1f24 */
              AKJJAPEHKCG__GOCEMJOCNEE(LAIGNDBNBJG,(MethodInfo *)0x0);
              __this_01 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 034a2314 to 035a231b has its CatchHandler @ 034a231c */
              if (__this_01 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
                    /* catch() { ... } // from try @ 034a22a8 with catch @ 034a231c
                       catch() { ... } // from try @ 034a2300 with catch @ 034a231c
                       catch() { ... } // from try @ 034a2314 with catch @ 034a231c */
                Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_01,true,(MethodInfo *)0x0)
                ;
                return;
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

