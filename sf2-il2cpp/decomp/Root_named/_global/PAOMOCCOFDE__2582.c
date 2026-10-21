// TypeDefIndex 2582
// Namespace: 
// public class PAOMOCCOFDE : QuestAction
// Fields:
//   private LabelButton GPELNIEGMJG; // 0x68
//   private bool KFMKNNMDNKJ; // 0x70

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x33A217C]
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
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
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
            TutorialExtension__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)*ppLVar3,(MethodInfo *)0x0);
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
              TutorialExtension__GOCEMJOCNEE(LAIGNDBNBJG,(MethodInfo *)0x0);
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


// ===== private void IPMJMPDBEJH()  [RVA 0x33A2334]
// PAOMOCCOFDE$$IPMJMPDBEJH @ RVA 0x33A2334

void PAOMOCCOFDE__IPMJMPDBEJH(PAOMOCCOFDE_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *method_00;
  
  if ((DAT_04567cc3 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04567cc3 = 1;
  }
  TutorialExtension__HJDDBKPCAFJ
            ((UnityEngine_UI_Selectable_o *)(__this->fields).GPELNIEGMJG,(MethodInfo *)0x0);
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  if (((**(long **)(lVar1 + 0xb8) != 0) &&
      (lVar1 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x178), lVar1 != 0)) &&
     (__this_00 = *(UnityEngine_Component_o **)(lVar1 + 0x28),
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
    TutorialExtension__HJDDBKPCAFJ(LAIGNDBNBJG,(MethodInfo *)0x0);
    PAOMOCCOFDE__KIPCFNBAHMJ(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KIPCFNBAHMJ()  [RVA 0x33A23DC]
// PAOMOCCOFDE$$KIPCFNBAHMJ @ RVA 0x33A23DC

void PAOMOCCOFDE__KIPCFNBAHMJ(PAOMOCCOFDE_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  NBLEEDEAPHB_o *__this_00;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  NBLEEDEAPHB_array *pNVar3;
  
  if ((DAT_04567cc4 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&Method_PAOMOCCOFDE_IKBILKIMBCB__);
    FUN_01bab630(&StringLiteral_16970/*"characterSensei"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_16812/*"btnEnchantment"*/);
    FUN_01bab630(&StringLiteral_21618/*"tutorial_forge_reenchant_warning"*/);
    FUN_01bab630(&StringLiteral_14113/*"UI/Users/character_sensei"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567cc4 = 1;
    method = extraout_x1;
  }
  __this_00 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo,method);
  NBLEEDEAPHB___ctor(__this_00,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,0,-1,
                     (IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                     (MethodInfo *)0x0);
  if (__this_00 != (NBLEEDEAPHB_o *)0x0) {
    (__this_00->fields).KFHPFEKBDFM = 0;
    (__this_00->fields).EHKKBKHGDHE = false;
    (__this_00->fields).HBFKJIOLIAP = StringLiteral_9679/*"OK"*/;
    thunk_FUN_01c20e04();
    (__this_00->fields).ABCHAOKFLGL = StringLiteral_21618/*"tutorial_forge_reenchant_warning"*/;
    thunk_FUN_01c20e04();
    IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
               Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    lVar2 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
    if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
      pNVar3 = (IJIPABLCAKE->fields)._items;
      (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
      if (pNVar3 != (NBLEEDEAPHB_array *)0x0) {
        uVar1 = (IJIPABLCAKE->fields)._size;
        if (uVar1 < (uint)pNVar3->max_length) {
          (IJIPABLCAKE->fields)._size = uVar1 + 1;
          pNVar3->m_Items[(int)uVar1] = __this_00;
          thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        DialogsOpener__NBABCABBABL
                  (StringLiteral_14113/*"UI/Users/character_sensei"*/,StringLiteral_16970/*"characterSensei"*/,IJIPABLCAKE,(IGNEHHMICKB_o *)0x0,
                   IELDNEAAPBE,StringLiteral_3640/*"CANCEL"*/,true,StringLiteral_16812/*"btnEnchantment"*/,1,0,true,false,0.0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IKBILKIMBCB(object OCMMDIHLKMH)  [RVA 0x33A2664]
// PAOMOCCOFDE$$IKBILKIMBCB @ RVA 0x33A2664

void PAOMOCCOFDE__IKBILKIMBCB(PAOMOCCOFDE_o *__this,Il2CppObject *OCMMDIHLKMH,MethodInfo *method)

{
  int32_t DPCEFBCDHPA;
  ushort uVar1;
  bool bVar2;
  int32_t DLNKPJMDPJI;
  long lVar3;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  int *piVar5;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *__this_02;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this_03;
  GGLKHCAIGDI_o *__this_04;
  BFBONKPKBNL_o *GMCFOKPADCA;
  DEKKGJNMFEB_o *__this_05;
  UnityEngine_Component_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_06;
  LabelButton_o *pLVar8;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_07;
  PBAKFOBIHEG_o *pPVar9;
  System_Collections_IEnumerator_o *pSVar10;
  VirtualInvokeData *pVVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Roster_o *pAVar12;
  PBAKFOBIHEG_c *pPVar13;
  ulong uVar14;
  int32_t *piVar15;
  UnityEngine_Events_UnityEvent_o *__this_08;
  
  if ((DAT_04567cc5 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
                    /* try { // try from 034a26b4 to 035a282b has its CatchHandler @ 034a26b4
                       catch() { ... } // from try @ 034a26b4 with catch @ 034a26b4
                       catch() { ... } // from try @ 034a2874 with catch @ 034a26b4
                       catch() { ... } // from try @ 034a28a4 with catch @ 034a26b4
                       catch() { ... } // from try @ 034a28e0 with catch @ 034a26b4
                       catch() { ... } // from try @ 034a2910 with catch @ 034a26b4 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_PAOMOCCOFDE_IPMJMPDBEJH__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567cc5 = 1;
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (((**(long **)(lVar3 + 0xb8) == 0) ||
      (__this_00 = *(Nekki_SF2_GUI_Shop_ItemsPanel_o **)(**(long **)(lVar3 + 0xb8) + 0x178),
      __this_00 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) ||
     (pHVar4 = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this_00,(MethodInfo *)0x0),
     OCMMDIHLKMH == (Il2CppObject *)0x0)) goto LAB_034a2bb8;
  if ((OCMMDIHLKMH->klass->_1).element_class !=
      (Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(OCMMDIHLKMH);
  }
  piVar5 = (int *)thunk_FUN_01bda96c(OCMMDIHLKMH);
  if ((pHVar4 == (HOOAAGABMBL_o *)0x0) || (*piVar5 != 1)) {
    if ((__this->fields).KFMKNNMDNKJ != false) {
LAB_034a29b4:
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      __this_06 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if (__this_06 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        Nekki_SF2_GUI_Menu_MainMenu__UpdateMaterials(__this_06,(MethodInfo *)0x0);
        pLVar8 = (__this->fields).GPELNIEGMJG;
        if (pLVar8 != (LabelButton_o *)0x0) {
          SFButton__set_IsFlashing((SFButton_o *)pLVar8,false,(MethodInfo *)0x0);
          pLVar8 = (__this->fields).GPELNIEGMJG;
          if (pLVar8 != (LabelButton_o *)0x0) {
            __this_08 = (UnityEngine_Events_UnityEvent_o *)
                        (pLVar8->fields).super.super.super.m_OnClick;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_08 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__RemoveListener(__this_08,call,(MethodInfo *)0x0);
              pLVar8 = (__this->fields).GPELNIEGMJG;
              if (pLVar8 != (LabelButton_o *)0x0) {
                NAJBHKGHIGK__JKGCKABLLKD
                          ((UnityEngine_Events_UnityEventBase_o *)
                           (pLVar8->fields).super.super.super.m_OnClick,2,(MethodInfo *)0x0);
                TutorialExtension__HJDDBKPCAFJ
                          ((UnityEngine_UI_Selectable_o *)(__this->fields).GPELNIEGMJG,
                           (MethodInfo *)0x0);
                lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_01b81620();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_01b81620();
                }
                    /* try { // try from 034a2aa8 to 035a2c0b has its CatchHandler @ 034a2aa8
                       catch() { ... } // from try @ 034a2aa8 with catch @ 034a2aa8
                       catch() { ... } // from try @ 034a2c38 with catch @ 034a2aa8
                       catch() { ... } // from try @ 034a2ce4 with catch @ 034a2aa8
                       catch() { ... } // from try @ 034a2d2c with catch @ 034a2aa8
                       catch() { ... } // from try @ 034a2d64 with catch @ 034a2aa8
                       catch() { ... } // from try @ 034a2da0 with catch @ 034a2aa8
                       catch() { ... } // from try @ 034a2dc8 with catch @ 034a2aa8
                       catch() { ... } // from try @ 034a2df8 with catch @ 034a2aa8 */
                if (((**(long **)(lVar3 + 0xb8) != 0) &&
                    (lVar3 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x178), lVar3 != 0)) &&
                   (pUVar6 = *(UnityEngine_Component_o **)(lVar3 + 0x28),
                   pUVar6 != (UnityEngine_Component_o *)0x0)) {
                  pUVar7 = UnityEngine_Component__get_gameObject(pUVar6,(MethodInfo *)0x0);
                  TutorialExtension__HJDDBKPCAFJ(pUVar7,(MethodInfo *)0x0);
                  __this_07 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0)
                  ;
                  if (__this_07 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
                    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn
                              (__this_07,false,(MethodInfo *)0x0);
                    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
                    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                      lVar3 = FUN_01b81620();
                    }
                    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
                    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                      lVar3 = FUN_01b81620();
                    }
                    if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
                        (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
                      Nekki_SF2_GUI_Shop_ShopScene__Refresh
                                ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                                 (MethodInfo *)0x0);
                      pPVar9 = CoroutineManager__get_Current((MethodInfo *)0x0);
                      pSVar10 = PAOMOCCOFDE__LFJLJEHKINP(__this,method_00);
                      if (pPVar9 != (PBAKFOBIHEG_o *)0x0) {
                        pPVar13 = pPVar9->klass;
                        uVar1._0_1_ = (pPVar13->_2).rank;
                        uVar1._1_1_ = (pPVar13->_2).minimumAlignment;
                        uVar14 = (ulong)uVar1;
                        if (uVar14 != 0) {
                          piVar15 = &((pPVar13->_1).interfaceOffsets)->offset;
                          do {
                            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType
                                == (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                              pVVar11 = pPVar13->vtable + *piVar15;
                              goto LAB_034a2b90;
                            }
                            uVar14 = uVar14 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar14 != 0);
                        }
                        pVVar11 = (VirtualInvokeData *)FUN_01b81914(pPVar9,PBAKFOBIHEG_TypeInfo,0);
LAB_034a2b90:
                    /* WARNING: Could not recover jumptable at 0x034a2bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pVVar11->methodPtr)(pPVar9,pSVar10,1,pVVar11->method);
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
      goto LAB_034a2bb8;
    }
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar12 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar12 == (Roster_o *)0x0) ||
       (__this_01 = (pAVar12->fields).OIDPLCLELEN, __this_01 == (GGHCLMEFIGO_o *)0x0))
    goto LAB_034a2bb8;
    __this_02 = GGHCLMEFIGO__JNFIBDBHNOA
                          (__this_01,(pHVar4->fields)._COIPKAKHDFP_k__BackingField,method);
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
                    /* try { // try from 034a282c to 035a2833 has its CatchHandler @ 034a28c4 */
    if (((**(long **)(lVar3 + 0xb8) == 0) ||
        (__this_03 = *(Nekki_SF2_GUI_Shop_Forge_ForgePanel_o **)(**(long **)(lVar3 + 0xb8) + 0x110),
        __this_03 == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0)) ||
       (__this_04 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe
                              (__this_03,(MethodInfo *)0x0), __this_02 == (IGFGDDANEPE_o *)0x0))
    goto LAB_034a2bb8;
    method_01 = (MethodInfo *)0x0;
    pHVar4 = IGFGDDANEPE__JPNNODJPOCL(__this_02,false,(MethodInfo *)0x0);
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_034a2bb8;
    DPCEFBCDHPA = (pHVar4->fields)._JDEHPJEIOCI_k__BackingField;
                    /* try { // try from 034a2850 to 035a2857 has its CatchHandler @ 034a28c0 */
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 034a2864 to 035a2873 has its CatchHandler @ 034a28b0 */
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034a2874 to 035a2897 has its CatchHandler @ 034a26b4 */
      thunk_FUN_01ba7564();
    }
    pAVar12 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar12 == (Roster_o *)0x0) goto LAB_034a2bb8;
    DLNKPJMDPJI = Roster__EOEAKGGDBFH(pAVar12,(MethodInfo *)0x0);
                    /* try { // try from 034a2898 to 035a289b has its CatchHandler @ 034a28bc */
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 034a289c to 035a289f has its CatchHandler @ 034a28b8 */
                    /* try { // try from 034a28a0 to 035a28a3 has its CatchHandler @ 034a28b4 */
                    /* try { // try from 034a28a4 to 035a28db has its CatchHandler @ 034a26b4 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034a2864 with catch @ 034a28b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034a28a0 with catch @ 034a28b4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034a289c with catch @ 034a28b8
                        */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034a2898 with catch @ 034a28bc
                        */
      thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034a2850 with catch @ 034a28c0
                        */
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034a282c with catch @ 034a28c4
                        */
    if (__this_04 == (GGLKHCAIGDI_o *)0x0) goto LAB_034a2bb8;
    pAVar12 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    GMCFOKPADCA = GGLKHCAIGDI__GPGGNMAFOJD(__this_04,__this_02,method_01);
                    /* try { // try from 034a28dc to 035a28df has its CatchHandler @ 034a2900 */
    if (pAVar12 == (Roster_o *)0x0) goto LAB_034a2bb8;
                    /* try { // try from 034a28e0 to 035a2907 has its CatchHandler @ 034a26b4 */
    Roster__OPKKKNLCACD(pAVar12,GMCFOKPADCA,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a28dc with catch @ 034a2900 */
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034a2908 to 035a290f has its CatchHandler @ 034a2924 */
    __this_05 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 034a2910 to 035a291b has its CatchHandler @ 034a26b4 */
    if (__this_05 == (DEKKGJNMFEB_o *)0x0) goto LAB_034a2bb8;
                    /* try { // try from 034a291c to 035a2923 has its CatchHandler @ 034a2924 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034a2908 with catch @ 034a2924
                       catch(type#2 @ 00000000) { ... } // from try @ 034a291c with catch @ 034a2924
                        */
    bVar2 = DEKKGJNMFEB__IKBILKIMBCB
                      (__this_05,__this_02,__this_04,DPCEFBCDHPA,DLNKPJMDPJI,(MethodInfo *)0x0);
    (__this->fields).KFMKNNMDNKJ = bVar2;
    if (bVar2) goto LAB_034a29b4;
  }
  TutorialExtension__GOCEMJOCNEE
            ((UnityEngine_UI_Selectable_o *)(__this->fields).GPELNIEGMJG,(MethodInfo *)0x0);
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (((**(long **)(lVar3 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x178), lVar3 != 0)) &&
     (pUVar6 = *(UnityEngine_Component_o **)(lVar3 + 0x28), pUVar6 != (UnityEngine_Component_o *)0x0
     )) {
    pUVar7 = UnityEngine_Component__get_gameObject(pUVar6,(MethodInfo *)0x0);
    TutorialExtension__GOCEMJOCNEE(pUVar7,(MethodInfo *)0x0);
    return;
  }
LAB_034a2bb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33A2C98]
// PAOMOCCOFDE$$.ctor @ RVA 0x33A2C98

void PAOMOCCOFDE___ctor(PAOMOCCOFDE_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private IEnumerator LFJLJEHKINP()  [RVA 0x33A2C2C]
// PAOMOCCOFDE$$LFJLJEHKINP @ RVA 0x33A2C2C

System_Collections_IEnumerator_o *
PAOMOCCOFDE__LFJLJEHKINP(PAOMOCCOFDE_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034a2c30 to 035a2c37 has its CatchHandler @ 034a2da8 */
                    /* try { // try from 034a2c38 to 035a2cb3 has its CatchHandler @ 034a2aa8 */
  if ((DAT_04567cc6 & 1) == 0) {
    FUN_01bab630(&PAOMOCCOFDE_IFMANFAJIHA_TypeInfo);
    DAT_04567cc6 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(PAOMOCCOFDE_IFMANFAJIHA_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

