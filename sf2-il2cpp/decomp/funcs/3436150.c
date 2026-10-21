// Nekki.SF2.GUI.Shop.ShopScene$$set_CurrentSection @ RVA 0x3436150

void Nekki_SF2_GUI_Shop_ShopScene__set_CurrentSection
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *pNVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  UnityEngine_GameObject_o *pUVar6;
  LabelButton_o *pLVar7;
  Nekki_SF2_GUI_Shop_ShopScene_o *extraout_x0;
  Nekki_SF2_GUI_Shop_ShopScene_o *extraout_x0_00;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_00;
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *pNVar8;
  bool bVar9;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_List_HOOAAGABMBL__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *extraout_x1_07;
  MethodInfo *extraout_x1_08;
  MethodInfo *pMVar10;
  MethodInfo *pMVar11;
  undefined8 *puVar12;
  ACHLOMELAJE_o *pAVar13;
  LPAPAMPGDFN_o *pLVar14;
  Nekki_SF2_Core_Fights_ModelContainer_o *pNVar15;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar16;
  Nekki_SF2_GUI_Shop_CheatsPanel_o *pNVar17;
  
  pMVar11 = (MethodInfo *)(ulong)(uint)CJNHFNHJHPE;
  if ((DAT_045681a8 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_DisableButton__);
                    /* try { // try from 03536184 to 03636263 has its CatchHandler @ 03536184
                       catch() { ... } // from try @ 03536184 with catch @ 03536184
                       catch() { ... } // from try @ 035362c4 with catch @ 03536184
                       catch() { ... } // from try @ 035362f8 with catch @ 03536184
                       catch() { ... } // from try @ 0353632c with catch @ 03536184
                       catch() { ... } // from try @ 0353635c with catch @ 03536184 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_EnableAllButtons__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_20993);
    FUN_01bab630(&StringLiteral_20996);
    FUN_01bab630(&StringLiteral_20997);
    FUN_01bab630(&StringLiteral_1);
    DAT_045681a8 = 1;
    pMVar11 = extraout_x1;
  }
  if (CJNHFNHJHPE == 8) {
    return;
  }
  if ((__this->fields).AIAODGKGPEI == CJNHFNHJHPE) {
    return;
  }
  Nekki_SF2_GUI_Shop_ShopScene__GNOBOBBEEAH(__this,pMVar11);
  pNVar3 = (__this->fields)._ItemsPanel;
  if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
  pMVar11 = (MethodInfo *)0x0;
  (pNVar3->fields).DisableSorting = false;
  Nekki_SF2_GUI_Shop_ItemsPanel__RememberSelection(pNVar3,(HOOAAGABMBL_o *)0x0,(MethodInfo *)0x0);
  (__this->fields).AIAODGKGPEI = CJNHFNHJHPE;
  Nekki_SF2_GUI_Shop_ShopScene__ShowSidePanels(__this,true,pMVar11);
  Nekki_SF2_GUI_Shop_ShopScene__UpdateNewItemsCounters(__this,method_00);
  pNVar4 = (__this->fields).GJIPOBCNEPG;
  if (pNVar4 == (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) goto LAB_035367c8;
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__EnableAllButtons
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar4,
             Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_EnableAllButtons__);
  pNVar4 = (__this->fields).GJIPOBCNEPG;
  if (pNVar4 == (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) goto LAB_035367c8;
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__DisableButton
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar4,CJNHFNHJHPE,
             Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_DisableButton__);
  pNVar5 = (__this->fields)._NoItemsMessage;
  if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035367c8;
                    /* try { // try from 03536264 to 0363626b has its CatchHandler @ 0353630c */
  Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar5,StringLiteral_1,(MethodInfo *)0x0);
  pNVar5 = (__this->fields)._NoItemsMessage;
  if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035367c8;
                    /* try { // try from 03536280 to 03636287 has its CatchHandler @ 03536308 */
                    /* try { // try from 0353628c to 0363628f has its CatchHandler @ 03536304 */
  (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
            (pNVar5,StringLiteral_1,(pNVar5->klass->vtable)._75_set_text.method);
  pNVar17 = (__this->fields).OJKJMHEEAGN;
                    /* try { // try from 035362a4 to 036362c3 has its CatchHandler @ 03536310 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar11 = extraout_x1_00;
  if (bVar2) {
    pNVar17 = (__this->fields).OJKJMHEEAGN;
                    /* try { // try from 035362c4 to 036362ef has its CatchHandler @ 03536184 */
    if (pNVar17 == (Nekki_SF2_GUI_Shop_CheatsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_CheatsPanel__HideCheats(pNVar17,(MethodInfo *)0x0);
    pMVar11 = extraout_x1_01;
  }
                    /* try { // try from 035362f0 to 036362f3 has its CatchHandler @ 03536300 */
  switch(CJNHFNHJHPE) {
  case 0:
                    /* try { // try from 035362f4 to 036362f7 has its CatchHandler @ 035362fc */
    pNVar3 = (__this->fields)._ItemsPanel;
                    /* try { // try from 035362f8 to 03636327 has its CatchHandler @ 03536184 */
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035362f4 with catch @ 035362fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035362f0 with catch @ 03536300
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353628c with catch @ 03536304
                        */
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,0.0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03536280 with catch @ 03536308
                        */
    pNVar3 = (__this->fields)._ItemsPanel;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03536264 with catch @ 0353630c
                        */
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035362a4 with catch @ 03536310
                        */
    (pNVar3->fields).LKOBHGOBICA = 480.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._WeaponImageSize.fields;
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
                    /* try { // try from 03536328 to 0363632b has its CatchHandler @ 0353634c */
                    /* try { // try from 0353632c to 03636353 has its CatchHandler @ 03536184 */
    (pNVar3->fields).PMDCABLGDGF = true;
    CJNHFNHJHPE_00 = (__this->fields).CAFKGACOEBL;
    break;
  case 1:
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
                    /* catch() { ... } // from try @ 03536328 with catch @ 0353634c */
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,110.0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
                    /* try { // try from 03536354 to 0363635b has its CatchHandler @ 03536370 */
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
                    /* try { // try from 0353635c to 03636367 has its CatchHandler @ 03536184 */
    (pNVar3->fields).LKOBHGOBICA = 840.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._ArmorImageSize.fields;
                    /* try { // try from 03536368 to 0363636f has its CatchHandler @ 03536370 */
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03536354 with catch @ 03536370
                       catch(type#2 @ 00000000) { ... } // from try @ 03536368 with catch @ 03536370
                        */
    (pNVar3->fields).PMDCABLGDGF = true;
    CJNHFNHJHPE_00 = (__this->fields).HDHLOAOBOIA;
    break;
  case 2:
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,110.0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).LKOBHGOBICA = 840.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._HelmetImageSize.fields;
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).PMDCABLGDGF = true;
    CJNHFNHJHPE_00 = (__this->fields).CDGAHKJEMHM;
    break;
  case 3:
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,0.0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).LKOBHGOBICA = 480.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._RangedImageSize.fields;
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_CurrentItems
              (pNVar3,(__this->fields).CBGOPJALHHB,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).PMDCABLGDGF = true;
    pNVar5 = (__this->fields)._NoItemsMessage;
    if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035367c8;
    puVar12 = &StringLiteral_20997;
    goto LAB_03536534;
  case 4:
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,120.0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).LKOBHGOBICA = 810.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._MagicImageSize.fields;
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_CurrentItems
              (pNVar3,(__this->fields).LAPBNMPGIEH,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._NoItemsMessage;
    if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035367c8;
    puVar12 = &StringLiteral_20993;
    goto LAB_03536534;
  case 5:
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,20.0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).LKOBHGOBICA = 520.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._PaymentImageSize.fields;
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).PMDCABLGDGF = true;
    CJNHFNHJHPE_00 = (__this->fields).NHJBNMACENA;
    break;
  case 6:
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).DisableSorting = true;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,20.0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).LKOBHGOBICA = 600.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._RaidImageSize.fields;
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).PMDCABLGDGF = true;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_CurrentItems
              (pNVar3,(__this->fields).FALDFPJGOMB,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._NoItemsMessage;
    if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035367c8;
    puVar12 = &StringLiteral_20996;
LAB_03536534:
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar5,(System_String_o *)*puVar12,(MethodInfo *)0x0);
    pMVar11 = extraout_x1_03;
    goto switchD_035362f0_default;
  case 7:
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,20.0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).LKOBHGOBICA = 520.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._FreeImageSize.fields;
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_CurrentItems
              (pNVar3,(__this->fields).EPKOHJKLMIJ,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).PMDCABLGDGF = false;
    pMVar11 = extraout_x1_04;
  default:
    goto switchD_035362f0_default;
  }
  Nekki_SF2_GUI_Shop_ItemsPanel__set_CurrentItems(pNVar3,CJNHFNHJHPE_00,(MethodInfo *)0x0);
  pMVar11 = extraout_x1_02;
switchD_035362f0_default:
  Nekki_SF2_GUI_Shop_ShopScene__HPJLOJELBCI(__this,pMVar11);
  bVar2 = Nekki_SF2_GUI_Shop_ShopScene__FJFHCNJBHEP(__this,method_01);
  pNVar5 = (__this->fields)._NoItemsMessage;
  if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    pMVar11 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar6,(bool)(~bVar2 & 1),(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_ShopScene__ShowSidePanels(__this,bVar2,pMVar11);
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
    pAVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar13 != (ACHLOMELAJE_o *)0x0) &&
       (pLVar14 = (pAVar13->fields).LMCDOMHENMC, pLVar14 != (LPAPAMPGDFN_o *)0x0)) {
      iVar1 = (pLVar14->fields).AMIMEMOELHE;
      if (bVar2) {
        bVar9 = false;
      }
      else {
        bVar9 = (__this->fields).AIAODGKGPEI == 6;
      }
      pLVar7 = (__this->fields)._BtnLoadRaid;
      if ((pLVar7 != (LabelButton_o *)0x0) &&
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
        bVar9 = (bool)(bVar9 & iVar1 == 0x32);
        UnityEngine_GameObject__SetActive(pUVar6,bVar9,(MethodInfo *)0x0);
        pLVar7 = (__this->fields)._BtnLoadRaid;
        if (pLVar7 != (LabelButton_o *)0x0) {
          pMVar11 = (MethodInfo *)0x0;
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)pLVar7,bVar9,(MethodInfo *)0x0);
          bVar9 = Nekki_SF2_GUI_Shop_ShopScene__FJLNKLMBKDN(__this,method_02);
          if (bVar9) {
            pMVar10 = method_03;
            if ((__this->fields).HLKBICFHFJM == 1) {
              Nekki_SF2_GUI_Shop_ShopScene__FMBFAPGPDPF(__this,method_03);
              pMVar10 = extraout_x1_05;
            }
          }
          else {
            Nekki_SF2_GUI_Shop_ShopScene__set_Mode(__this,0,pMVar11);
            pMVar10 = extraout_x1_06;
          }
          pNVar15 = (__this->fields)._ModelContainer;
          if (pNVar15 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
            if ((pNVar15->fields).GJPPMNKLLGD == 7) {
              Nekki_SF2_GUI_Shop_ShopScene__LJEJIDPLJAA(__this,pMVar10);
            }
            pNVar3 = (__this->fields)._ItemsPanel;
            if (pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
              Nekki_SF2_GUI_Shop_ItemsPanel__SetSelection(pNVar3,(MethodInfo *)0x0);
              pNVar3 = (__this->fields)._ItemsPanel;
              if (pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                Nekki_SF2_GUI_Shop_ItemsPanel__ReloadSelectedItem(pNVar3,(MethodInfo *)0x0);
                __this_00 = extraout_x0;
                pMVar10 = extraout_x1_07;
                if (!bVar2) {
                  Nekki_SF2_GUI_Shop_ShopScene__EICMBDFALCN(__this,(HOOAAGABMBL_o *)0x0,pMVar11);
                  __this_00 = extraout_x0_00;
                  pMVar10 = extraout_x1_08;
                }
                Nekki_SF2_GUI_Shop_ShopScene__TryClearAtlasCacheItemImages(__this_00,pMVar10);
                if ((CJNHFNHJHPE == 6) && ((__this->fields).AIAODGKGPEI != 6)) {
                  return;
                }
                if (DAT_04565b84 == '\0') {
                  FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                  DAT_04565b84 = '\x01';
                }
                pNVar16 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                          _JPDNDPEAJAL_k__BackingField;
                if ((pNVar16 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) &&
                   (pNVar8 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(pNVar16->fields)._energy,
                   pNVar8 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0)) {
                  Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateCoinsIcon(pNVar8,(MethodInfo *)0x0);
                  if (DAT_04565b84 == '\0') {
                    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                    DAT_04565b84 = '\x01';
                  }
                  pNVar16 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                            _JPDNDPEAJAL_k__BackingField;
                    /* try { // try from 035367a8 to 03636d53 has its CatchHandler @ 035367a8
                       catch() { ... } // from try @ 035367a8 with catch @ 035367a8
                       catch() { ... } // from try @ 03536ff8 with catch @ 035367a8
                       catch() { ... } // from try @ 03537118 with catch @ 035367a8
                       catch() { ... } // from try @ 03537124 with catch @ 035367a8
                       catch() { ... } // from try @ 03537264 with catch @ 035367a8 */
                  if ((pNVar16 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) &&
                     (pNVar8 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(pNVar16->fields)._energy,
                     pNVar8 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0)) {
                    Nekki_SF2_GUI_Menu_MenuMoneyPanel__ForceUpdateCoins(pNVar8,(MethodInfo *)0x0);
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
LAB_035367c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

