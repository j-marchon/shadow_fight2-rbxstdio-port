// TypeDefIndex 2916
// Namespace: Nekki.SF2.GUI.Menu
// public class MenuMoneyPanel : UIInitializable
// Fields:
//   private const float PJABDHPEKPG = 0.03;
//   private const float NMBJLFFAIFE = 5;
//   private const string PAICIIKEKLI = "UI/Atlases/SaleBtn";
//   private IEnumerator GLKKMFMGKMF; // 0x28
//   private IEnumerator LNNAAJMEJGJ; // 0x30
//   private MenuMoneyPanel.PKBEACFAPHF CFABKEBDDCF; // 0x38
//   private Action BPHEMMPAJGO; // 0x40
//   private MonoBehaviour _coinInfoGroup; // 0x48
//   private LabelAlias _infoCoins; // 0x50
//   private ResolutionImage _iconCoins; // 0x58
//   private LabelAlias _infoBonus; // 0x60
//   private ResolutionImage _iconBonus; // 0x68
//   private LabelAlias _infoServerBonus; // 0x70
//   private ResolutionButton _btnRuby; // 0x78
//   private ResolutionButton _btnGoToShop; // 0x80
//   private readonly CNLBMDGLFCJ FADPBJBOBFA; // 0x88
//   private CocosAnimation _picRubySale; // 0x90
//   private long BMNPKCFLINB; // 0x98
//   private const float JABIBJMDEED = 0.1;
//   private long DIIHKNHKKIJ; // 0xA0
//   private long OGOANIHOCBO; // 0xA8
//   private Roster OKNKKHGBECG; // 0xB0

// ===== public void .ctor()  [RVA 0x344D088]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$.ctor @ RVA 0x344D088

void Nekki_SF2_GUI_Menu_MenuMoneyPanel___ctor
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  CNLBMDGLFCJ_o *__this_00;
  CNLBMDGLFCJ_o **ppCVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456827b & 1) == 0) {
    FUN_01bab630(&CNLBMDGLFCJ_TypeInfo);
    DAT_0456827b = 1;
    method = extraout_x1;
  }
  __this_00 = (CNLBMDGLFCJ_o *)thunk_FUN_01bda818(CNLBMDGLFCJ_TypeInfo,method);
  CNLBMDGLFCJ___ctor(__this_00,0.0,0.0,1.7976931348623157e+308,(MethodInfo *)0x0);
  if (__this_00 != (CNLBMDGLFCJ_o *)0x0) {
    (__this_00->fields).FHAPLEDFDHM = 0.1;
    ppCVar1 = &(__this->fields).FADPBJBOBFA;
    *ppCVar1 = __this_00;
    thunk_FUN_01c20e04(ppCVar1,__this_00);
    (__this->fields).OGOANIHOCBO = -0x8000000000000000;
    (__this->fields).DIIHKNHKKIJ = -0x8000000000000000;
    (__this->fields).BMNPKCFLINB = -1;
    Nekki_SF2_GUI_UIInitializable___ctor
              ((Nekki_SF2_GUI_UIInitializable_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DNANDMDABDA()  [RVA 0x344D12C]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$DNANDMDABDA @ RVA 0x344D12C

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__DNANDMDABDA
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_IEnumerator_o *pSVar5;
  CocosAnimation_o *pCVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  
  if ((DAT_0456827c & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_AHPALLMCHON__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456827c = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
    pPVar7 = pPVar2->klass;
    uVar1._0_1_ = (pPVar7->_2).rank;
    uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar4 = pPVar7->vtable + (*piVar9 + 2);
          goto LAB_0354d20c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_0354d20c:
    pSVar5 = (System_Collections_IEnumerator_o *)
             (*pVVar4->methodPtr)(0x40a00000,pPVar2,uVar3,pVVar4->method);
    ppSVar10 = &(__this->fields).LNNAAJMEJGJ;
    *ppSVar10 = pSVar5;
    thunk_FUN_01c20e04(ppSVar10,pSVar5);
    pCVar6 = (__this->fields)._picRubySale;
    if (pCVar6 != (CocosAnimation_o *)0x0) {
      CocosAnimation__SetLastFrame(pCVar6,(MethodInfo *)0x0);
      pCVar6 = (__this->fields)._picRubySale;
      if (pCVar6 != (CocosAnimation_o *)0x0) {
                    /* try { // try from 0354d258 to 0364d323 has its CatchHandler @ 0354d258
                       catch() { ... } // from try @ 0354d258 with catch @ 0354d258
                       catch() { ... } // from try @ 0354d418 with catch @ 0354d258
                       catch() { ... } // from try @ 0354d4b4 with catch @ 0354d258
                       catch() { ... } // from try @ 0354d4bc with catch @ 0354d258
                       catch() { ... } // from try @ 0354d578 with catch @ 0354d258 */
        (pCVar6->fields)._FEBBHCOAEMI_k__BackingField = 1;
        (pCVar6->fields)._NOAJIBNJKPE_k__BackingField = false;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KKILPMCGFMD()  [RVA 0x344D26C]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$KKILPMCGFMD @ RVA 0x344D26C

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__KKILPMCGFMD
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).BPHEMMPAJGO;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0354d280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}


// ===== protected override void HMOFDGEDBCL()  [RVA 0x344D288]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$HMOFDGEDBCL @ RVA 0x344D288

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__HMOFDGEDBCL
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  RaidManager_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Roster_o **ppAVar2;
  Roster_o *pAVar3;
  
  if ((DAT_0456827d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_GLAPDHJHCNJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_IDJJMFEFODC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_MHOOOLECDKK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_UpdateCoinsIcon__);
    DAT_0456827d = 1;
    method = extraout_x1;
  }
  ppAVar2 = &(__this->fields).OKNKKHGBECG;
  pAVar3 = *ppAVar2;
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
                    /* try { // try from 0354d324 to 0364d34b has its CatchHandler @ 0354d4d8 */
  System_Action___ctor();
  if (pAVar3 != (Roster_o *)0x0) {
    Roster__ICIFIPBHFON(pAVar3,pSVar1,(MethodInfo *)0x0);
    pAVar3 = (__this->fields).OKNKKHGBECG;
    pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pAVar3 != (Roster_o *)0x0) {
      Roster__KOHCGAEHDAB(pAVar3,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 0354d380 to 0364d3ab has its CatchHandler @ 0354d4d4 */
      pAVar3 = (__this->fields).OKNKKHGBECG;
      pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pAVar3 != (Roster_o *)0x0) {
        Roster__KOHCGAEHDAB(pAVar3,pSVar1,(MethodInfo *)0x0);
        pAVar3 = (__this->fields).OKNKKHGBECG;
        pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pAVar3 != (Roster_o *)0x0) {
                    /* try { // try from 0354d3e8 to 0364d3ef has its CatchHandler @ 0354d4d0 */
                    /* try { // try from 0354d3f8 to 0364d417 has its CatchHandler @ 0354d4dc */
          Roster__FOHAFKJALCO(pAVar3,pSVar1,(MethodInfo *)0x0);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                    /* try { // try from 0354d418 to 0364d4a3 has its CatchHandler @ 0354d258 */
          pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (__this_00 != (RaidManager_o *)0x0) {
            RaidManager__PDGPDPGFNPG(__this_00,pSVar1,(MethodInfo *)0x0);
            (__this->fields).OKNKKHGBECG = (Roster_o *)0x0;
            thunk_FUN_01c20e04(ppAVar2,0);
            Nekki_SF2_GUI_Menu_MenuMoneyPanel__GAFLOAFPCGE(__this,method_00);
            Nekki_SF2_GUI_Menu_MenuMoneyPanel__GOLKBFHLOBJ(__this,method_01);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GOLKBFHLOBJ()  [RVA 0x344D498]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$GOLKBFHLOBJ @ RVA 0x344D498

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__GOLKBFHLOBJ
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
                    /* try { // try from 0354d4a4 to 0364d4ab has its CatchHandler @ 0354d4e0 */
                    /* try { // try from 0354d4ac to 0364d4af has its CatchHandler @ 0354d4cc */
  if ((DAT_0456827e & 1) == 0) {
                    /* try { // try from 0354d4b0 to 0364d4b3 has its CatchHandler @ 0354d4c8 */
                    /* try { // try from 0354d4b4 to 0364d4b7 has its CatchHandler @ 0354d258 */
                    /* try { // try from 0354d4b8 to 0364d4bb has its CatchHandler @ 0354d4c4 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 0354d4bc to 0364d4f7 has its CatchHandler @ 0354d258 */
    DAT_0456827e = 1;
  }
  ppSVar7 = &(__this->fields).LNNAAJMEJGJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d4b8 with catch @ 0354d4c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d4b0 with catch @ 0354d4c8
                        */
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d4ac with catch @ 0354d4cc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d3e8 with catch @ 0354d4d0
                        */
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d380 with catch @ 0354d4d4
                        */
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d324 with catch @ 0354d4d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d3f8 with catch @ 0354d4dc
                        */
  pPVar4 = pPVar2->klass;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d4a4 with catch @ 0354d4e0
                        */
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
                    /* try { // try from 0354d4f8 to 0364d4fb has its CatchHandler @ 0354d508 */
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 0354d4f8 with catch @ 0354d508 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_0354d544;
      }
      uVar5 = uVar5 - 1;
                    /* try { // try from 0354d510 to 0364d577 has its CatchHandler @ 0354d58c */
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0354d544:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== public void ChangeCoinsIcon(string HCAAAAMDCNO)  [RVA 0x344D570]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$ChangeCoinsIcon @ RVA 0x344D570

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__ChangeCoinsIcon
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,System_String_o *HCAAAAMDCNO,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
                    /* try { // try from 0354d578 to 0364d583 has its CatchHandler @ 0354d258 */
                    /* try { // try from 0354d584 to 0364d58b has its CatchHandler @ 0354d58c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0354d510 with catch @ 0354d58c
                       catch(type#2 @ 00000000) { ... } // from try @ 0354d584 with catch @ 0354d58c
                        */
                    /* try { // try from 0354d590 to 0364d86f has its CatchHandler @ 0354d590
                       catch() { ... } // from try @ 0354d590 with catch @ 0354d590
                       catch() { ... } // from try @ 0354d9a8 with catch @ 0354d590
                       catch() { ... } // from try @ 0354daa4 with catch @ 0354d590
                       catch() { ... } // from try @ 0354dab0 with catch @ 0354d590
                       catch() { ... } // from try @ 0354db7c with catch @ 0354d590 */
  if ((DAT_0456827f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456827f = 1;
  }
  pNVar2 = (__this->fields)._iconCoins;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
  if ((bVar1) && (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(HCAAAAMDCNO,(MethodInfo *)0x0), !bVar1)) {
    pNVar2 = (__this->fields)._iconCoins;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,HCAAAAMDCNO,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void ONKMCCLALAL()  [RVA 0x344D614]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$ONKMCCLALAL @ RVA 0x344D614

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__ONKMCCLALAL
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  LPAPAMPGDFN_o *__this_00;
  CocosAnimation_o *pCVar5;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  Roster_o *pAVar6;
  UnityEngine_Events_UnityEvent_o *pUVar7;
  
  if ((DAT_04568280 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_KKILPMCGFMD__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_14096/*"UI/Atlases/SaleBtn"*/);
    FUN_01bab630(&StringLiteral_13884/*"TopPanel.AddMoney_Pressed"*/);
    FUN_01bab630(&StringLiteral_15555/*"[MenuMoneyPanel]: animation not found: UI/Atlases/SaleBtn"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_04568280 = 1;
  }
  pNVar2 = (__this->fields)._btnRuby;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_13884/*"TopPanel.AddMoney_Pressed"*/,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._btnRuby;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
       (pUVar3 = (pNVar2->fields).super.super.m_OnClick,
       pUVar3 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar3,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._btnRuby;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        pUVar7 = (UnityEngine_Events_UnityEvent_o *)(pNVar2->fields).super.super.m_OnClick;
        pUVar4 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar7 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar7,pUVar4,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._btnGoToShop;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                      (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_13884/*"TopPanel.AddMoney_Pressed"*/,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._btnGoToShop;
            if ((pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
               (pUVar3 = (pNVar2->fields).super.super.m_OnClick,
               pUVar3 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
              UnityEngine_Events_UnityEventBase__RemoveAllListeners
                        ((UnityEngine_Events_UnityEventBase_o *)pUVar3,(MethodInfo *)0x0);
              pNVar2 = (__this->fields)._btnGoToShop;
              if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                pUVar7 = (UnityEngine_Events_UnityEvent_o *)(pNVar2->fields).super.super.m_OnClick;
                pUVar4 = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (pUVar7 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(pUVar7,pUVar4,(MethodInfo *)0x0);
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
                  pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                  if ((pAVar6 != (Roster_o *)0x0) &&
                     (__this_00 = (pAVar6->fields).LMCDOMHENMC, __this_00 != (LPAPAMPGDFN_o *)0x0))
                  {
                    bVar1 = LPAPAMPGDFN__LBMNAEJPNNJ(__this_00,(MethodInfo *)0x0);
                    if (!bVar1) {
                      pCVar5 = (__this->fields)._picRubySale;
                      if (pCVar5 == (CocosAnimation_o *)0x0) goto LAB_0354d88c;
                      bVar1 = CocosAnimation__Init
                                        (pCVar5,StringLiteral_14096/*"UI/Atlases/SaleBtn"*/,0,(System_String_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (!bVar1) {
                        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        UnityEngine_Debug__LogError(StringLiteral_15555/*"[MenuMoneyPanel]: animation not found: UI/Atlases/SaleBtn"*/,(MethodInfo *)0x0);
                      }
                    }
                    pCVar5 = (__this->fields)._picRubySale;
                    if ((pCVar5 != (CocosAnimation_o *)0x0) &&
                       (__this_01 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pCVar5,(MethodInfo *)0x0),
                       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0354d870 to 0364d897 has its CatchHandler @ 0354dae0 */
                      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateRubySale(__this,method_00);
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
LAB_0354d88c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ForceUpdateCoins()  [RVA 0x344D948]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$ForceUpdateCoins @ RVA 0x344D948

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__ForceUpdateCoins
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  Roster_o *__this_00;
  int64_t CJNHFNHJHPE;
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_04568281 & 1) == 0) {
                    /* try { // try from 0354d964 to 0364d96f has its CatchHandler @ 0354dac8 */
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    DAT_04568281 = 1;
  }
  __this_00 = (__this->fields).OKNKKHGBECG;
                    /* try { // try from 0354d978 to 0364d983 has its CatchHandler @ 0354dacc */
  if (__this_00 != (Roster_o *)0x0) {
    CJNHFNHJHPE = Roster__IMLCNMCBEEN(__this_00,(MethodInfo *)0x0);
    (__this->fields).DIIHKNHKKIJ = CJNHFNHJHPE;
    pNVar2 = (__this->fields)._infoCoins;
                    /* try { // try from 0354d99c to 0364d9a7 has its CatchHandler @ 0354dabc */
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0354d9a8 to 0364da93 has its CatchHandler @ 0354d590 */
    pSVar1 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0354d9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MHOOOLECDKK()  [RVA 0x344D9DC]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$MHOOOLECDKK @ RVA 0x344D9DC

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__MHOOOLECDKK
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  Roster_o *__this_00;
  int64_t iVar1;
  CNLBMDGLFCJ_o *__this_01;
  
  if ((DAT_04568282 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9900/*"OnRaidModeChanged: _roster is null!"*/);
    DAT_04568282 = 1;
  }
  __this_00 = (__this->fields).OKNKKHGBECG;
  if (__this_00 != (Roster_o *)0x0) {
    __this_01 = (__this->fields).FADPBJBOBFA;
    iVar1 = Roster__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (CNLBMDGLFCJ_o *)0x0) {
      CNLBMDGLFCJ__FOOHBJNHOKK(__this_01,(double)iVar1,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_9900/*"OnRaidModeChanged: _roster is null!"*/,(MethodInfo *)0x0);
  return;
}


// ===== private void IDJJMFEFODC()  [RVA 0x344DA5C]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$IDJJMFEFODC @ RVA 0x344DA5C

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__IDJJMFEFODC
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  Roster_o *pAVar1;
  int64_t iVar2;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
  if ((DAT_04568283 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    DAT_04568283 = 1;
  }
  pAVar1 = (__this->fields).OKNKKHGBECG;
                    /* try { // try from 0354da94 to 0364da9b has its CatchHandler @ 0354dae4 */
                    /* try { // try from 0354da9c to 0364da9f has its CatchHandler @ 0354dad8 */
                    /* try { // try from 0354daa0 to 0364daa3 has its CatchHandler @ 0354dac4 */
  if ((pAVar1 == (Roster_o *)0x0) ||
     (iVar2 = Roster__IMLCNMCBEEN(pAVar1,(MethodInfo *)0x0),
     iVar2 == (__this->fields).DIIHKNHKKIJ)) {
                    /* try { // try from 0354daa4 to 0364daa7 has its CatchHandler @ 0354d590 */
                    /* try { // try from 0354daa8 to 0364daab has its CatchHandler @ 0354dac0 */
                    /* try { // try from 0354daac to 0364daaf has its CatchHandler @ 0354dab8 */
    return;
  }
                    /* try { // try from 0354dab0 to 0364daf3 has its CatchHandler @ 0354d590 */
  pAVar1 = (__this->fields).OKNKKHGBECG;
  if (pAVar1 != (Roster_o *)0x0) {
                    /* catch() { ... } // from try @ 0354daac with catch @ 0354dab8 */
                    /* catch() { ... } // from try @ 0354d99c with catch @ 0354dabc */
    iVar2 = Roster__IMLCNMCBEEN(pAVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0354daa8 with catch @ 0354dac0 */
    (__this->fields).DIIHKNHKKIJ = iVar2;
                    /* catch() { ... } // from try @ 0354daa0 with catch @ 0354dac4 */
                    /* catch() { ... } // from try @ 0354d964 with catch @ 0354dac8 */
                    /* catch() { ... } // from try @ 0354d978 with catch @ 0354dacc */
                    /* catch() { ... } // from try @ 0354d934 with catch @ 0354dad0 */
    pNVar4 = (__this->fields)._infoCoins;
                    /* catch() { ... } // from try @ 0354d944 with catch @ 0354dad4 */
                    /* catch() { ... } // from try @ 0354da9c with catch @ 0354dad8 */
                    /* catch() { ... } // from try @ 0354d8cc with catch @ 0354dadc */
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0354d870 with catch @ 0354dae0 */
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 0354da94 with catch @ 0354dae4 */
    pSVar3 = BJFCCEEPHOF__POMAAOILGAL(iVar2,(MethodInfo *)0x0);
    if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0354daf4 to 0364daf7 has its CatchHandler @ 0354db0c */
                    /* catch() { ... } // from try @ 0354daf4 with catch @ 0354db0c */
                    /* WARNING: Could not recover jumptable at 0x0354db10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                (pNVar4,pSVar3,(pNVar4->klass->vtable)._75_set_text.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0354db14 to 0364db7b has its CatchHandler @ 0354db90 */
  FUN_01bab8c8();
}


// ===== public void UpdateRubySale()  [RVA 0x344D890]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$UpdateRubySale @ RVA 0x344D890

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateRubySale
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  Item_o *__this_00;
  int64_t CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  
  if ((DAT_04568284 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568284 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super._BOGAKJOFOEK_k__BackingField != false) {
                    /* try { // try from 0354d8cc to 0364d8f7 has its CatchHandler @ 0354dadc */
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_00 != (Item_o *)0x0) {
    CJNHFNHJHPE = Item__GHLLHJDMMNF(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0354d934 to 0364d93b has its CatchHandler @ 0354dad0 */
    Nekki_SF2_GUI_Menu_MenuMoneyPanel__NHJPFEPAEFN(__this,CJNHFNHJHPE,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0354d944 to 0364d94b has its CatchHandler @ 0354dad4 */
  FUN_01bab8c8();
}


// ===== public void remove_OnRubyBtnClick(Action CJNHFNHJHPE)  [RVA 0x344DD10]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$remove_OnRubyBtnClick @ RVA 0x344DD10

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__remove_OnRubyBtnClick
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04568285 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568285 = 1;
  }
  ppSVar4 = &(__this->fields).BPHEMMPAJGO;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void UpdateCurrencyValues()  [RVA 0x344DDAC]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$UpdateCurrencyValues @ RVA 0x344DDAC

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateCurrencyValues
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((__this->fields).super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__IDJJMFEFODC(__this,method);
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateCoinsIcon(__this,method_00);
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__GLAPDHJHCNJ(__this,method_01);
  return;
}


// ===== public void ChangeCoins(int IDPMJOKDHNP)  [RVA 0x344DEF8]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$ChangeCoins @ RVA 0x344DEF8

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__ChangeCoins
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,int32_t IDPMJOKDHNP,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568286 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568286 = 1;
  }
  pNVar3 = (__this->fields)._infoCoins;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._infoCoins;
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = BJFCCEEPHOF__POMAAOILGAL(IDPMJOKDHNP,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0354dfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void GLAPDHJHCNJ()  [RVA 0x344DE98]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$GLAPDHJHCNJ @ RVA 0x344DE98

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__GLAPDHJHCNJ
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  Roster_o *pAVar1;
  int64_t iVar2;
  CNLBMDGLFCJ_o *__this_00;
  
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__EBPPNDEIPHE(__this,method);
  pAVar1 = (__this->fields).OKNKKHGBECG;
  if (pAVar1 != (Roster_o *)0x0) {
    iVar2 = Roster__HEHFNBKGJLP(pAVar1,(MethodInfo *)0x0);
    if (iVar2 != (__this->fields).OGOANIHOCBO) {
      pAVar1 = (__this->fields).OKNKKHGBECG;
      if (pAVar1 != (Roster_o *)0x0) {
        iVar2 = Roster__HEHFNBKGJLP(pAVar1,(MethodInfo *)0x0);
        __this_00 = (__this->fields).FADPBJBOBFA;
        if (__this_00 != (CNLBMDGLFCJ_o *)0x0) {
          CNLBMDGLFCJ__FLHGNJFILEI(__this_00,(double)iVar2,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void UpdateCoinsIcon()  [RVA 0x344DDDC]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$UpdateCoinsIcon @ RVA 0x344DDDC

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateCoinsIcon
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Roster_o *pAVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_04568287 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568287 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).OKNKKHGBECG != (Roster_o *)0x0) {
    pNVar3 = (__this->fields)._iconCoins;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pAVar2 = (__this->fields).OKNKKHGBECG;
      if ((pAVar2 != (Roster_o *)0x0) &&
         (pNVar3 = (__this->fields)._iconCoins, pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
        bVar1 = System_String__op_Inequality
                          ((pAVar2->fields).FAAJGHKHEBI,(pNVar3->fields)._TexturePath,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pAVar2 = (__this->fields).OKNKKHGBECG;
        if ((pAVar2 != (Roster_o *)0x0) &&
           (pNVar3 = (__this->fields)._iconCoins, pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
        {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar3,(pAVar2->fields).FAAJGHKHEBI,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void add_OnRubyBtnClick(Action CJNHFNHJHPE)  [RVA 0x344E0D8]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$add_OnRubyBtnClick @ RVA 0x344E0D8

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__add_OnRubyBtnClick
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04568288 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568288 = 1;
  }
  ppSVar4 = &(__this->fields).BPHEMMPAJGO;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void EBPPNDEIPHE()  [RVA 0x344DFC8]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$EBPPNDEIPHE @ RVA 0x344DFC8

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__EBPPNDEIPHE
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  SFRequestSender_o *pKVar1;
  RaidManager_o *pCVar2;
  PlayerData_o *__this_00;
  Il2CppObject *arg0;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  int32_t local_14;
  
  if ((DAT_04568289 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_20752/*"serv: {0}"*/);
    DAT_04568289 = 1;
  }
  pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  if (pKVar1 != (SFRequestSender_o *)0x0) {
    if ((pKVar1->fields).super._MGGBEPKMPCF_k__BackingField == false) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar2 != (RaidManager_o *)0x0) {
      if ((pCVar2->fields).BLELLCNDBHN == false) {
        return;
      }
      pNVar4 = (__this->fields)._infoServerBonus;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_00 != (PlayerData_o *)0x0) {
        local_14 = PlayerData__GNIBFOOLMHK(__this_00,(MethodInfo *)0x0);
        arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_14);
        pSVar3 = System_String__Format(StringLiteral_20752/*"serv: {0}"*/,arg0,(MethodInfo *)0x0);
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                    (pNVar4,pSVar3,(pNVar4->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NHJPFEPAEFN(long CJNHFNHJHPE)  [RVA 0x344DB18]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$NHJPFEPAEFN @ RVA 0x344DB18

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__NHJPFEPAEFN
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_GameObject_o *__this_00;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_IEnumerator_o *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  CocosAnimation_o *__this_01;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  long lVar9;
  long lVar10;
  
  method_00 = (MethodInfo *)CJNHFNHJHPE;
  if ((DAT_0456828a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_ONFMIMKMBFG__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456828a = 1;
    method_00 = extraout_x1;
  }
                    /* try { // try from 0354db7c to 0364db87 has its CatchHandler @ 0354d590 */
  if ((__this->fields).BMNPKCFLINB == CJNHFNHJHPE) {
    return;
  }
                    /* try { // try from 0354db88 to 0364db8f has its CatchHandler @ 0354db90 */
  (__this->fields).BMNPKCFLINB = CJNHFNHJHPE;
                    /* catch() { ... } // from try @ 0354db14 with catch @ 0354db90
                       catch() { ... } // from try @ 0354db88 with catch @ 0354db90 */
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__GAFLOAFPCGE(__this,method_00);
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__GOLKBFHLOBJ(__this,method_01);
  lVar9 = (__this->fields).BMNPKCFLINB;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b87 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = (__this->fields)._picRubySale;
  if (__this_01 != (CocosAnimation_o *)0x0) {
    lVar10 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      lVar9 = lVar9 - lVar10;
      UnityEngine_GameObject__SetActive(__this_00,0 < lVar9,(MethodInfo *)0x0);
      if (lVar9 < 1) {
        return;
      }
      pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
        pPVar6 = pPVar2->klass;
        uVar1._0_1_ = (pPVar6->_2).rank;
        uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
        uVar7 = (ulong)uVar1;
        if (uVar7 != 0) {
          piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar4 = pPVar6->vtable + (*piVar8 + 2);
              goto LAB_0354dcd0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_0354dcd0:
        pSVar5 = (System_Collections_IEnumerator_o *)
                 (*pVVar4->methodPtr)((ulong)(uint)(float)lVar9,pPVar2,uVar3,pVVar4->method);
        (__this->fields).GLKKMFMGKMF = pSVar5;
        thunk_FUN_01c20e04();
        Nekki_SF2_GUI_Menu_MenuMoneyPanel__AHPALLMCHON(__this,method_02);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AKIADGICKBL()  [RVA 0x344D480]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$AKIADGICKBL @ RVA 0x344D480

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__AKIADGICKBL
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__GAFLOAFPCGE(__this,method);
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__GOLKBFHLOBJ(__this,method_00);
  return;
}


// ===== public MenuMoneyPanel.PKBEACFAPHF get_CurrentViewMode()  [RVA 0x344E350]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$get_CurrentViewMode @ RVA 0x344E350

int32_t Nekki_SF2_GUI_Menu_MenuMoneyPanel__get_CurrentViewMode
                  (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  return (__this->fields).CFABKEBDDCF;
}


// ===== private void BOECPEODFFI()  [RVA 0x344E358]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$BOECPEODFFI @ RVA 0x344E358

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__BOECPEODFFI
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  long CJNHFNHJHPE;
  CNLBMDGLFCJ_o *pCVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  double dVar4;
  
  if ((DAT_0456828b & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    DAT_0456828b = 1;
  }
  if ((__this->fields).OKNKKHGBECG == (Roster_o *)0x0) {
    return;
  }
  pCVar1 = (__this->fields).FADPBJBOBFA;
  if (pCVar1 != (CNLBMDGLFCJ_o *)0x0) {
    CNLBMDGLFCJ__LLCONNGHGKD(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).FADPBJBOBFA;
    if (pCVar1 != (CNLBMDGLFCJ_o *)0x0) {
      dVar4 = (pCVar1->fields)._JPNBHEPPPNP_k__BackingField;
      CJNHFNHJHPE = -0x8000000000000000;
      if (dVar4 != INFINITY) {
        CJNHFNHJHPE = (long)dVar4;
      }
      if ((__this->fields).OGOANIHOCBO == CJNHFNHJHPE) {
        return;
      }
      (__this->fields).OGOANIHOCBO = CJNHFNHJHPE;
      pNVar3 = (__this->fields)._infoBonus;
      if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0354e424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AHPALLMCHON()  [RVA 0x344E174]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$AHPALLMCHON @ RVA 0x344E174

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__AHPALLMCHON
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  CocosAnimation_o *pCVar2;
  
  if ((DAT_0456828c & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_DNANDMDABDA__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456828c = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__GOLKBFHLOBJ(__this,method);
  pCVar2 = (__this->fields)._picRubySale;
  if ((pCVar2 != (CocosAnimation_o *)0x0) &&
     (pUVar1 = (pCVar2->fields).OnAnimationComplete,
     pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._picRubySale;
    if (pCVar2 != (CocosAnimation_o *)0x0) {
      pUVar1 = (pCVar2->fields).OnAnimationComplete;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(pUVar1,call,(MethodInfo *)0x0);
        pCVar2 = (__this->fields)._picRubySale;
        if (pCVar2 != (CocosAnimation_o *)0x0) {
          CocosAnimation__SetFramesRange(pCVar2,0,-1,(MethodInfo *)0x0);
          pCVar2 = (__this->fields)._picRubySale;
          if (pCVar2 != (CocosAnimation_o *)0x0) {
            (pCVar2->fields)._PPEGDOHGLJJ_k__BackingField = 0.03;
            CocosAnimation__SetFirstFrame(pCVar2,(MethodInfo *)0x0);
            pCVar2 = (__this->fields)._picRubySale;
            if (pCVar2 != (CocosAnimation_o *)0x0) {
              (pCVar2->fields)._FEBBHCOAEMI_k__BackingField = 1;
              (pCVar2->fields)._NOAJIBNJKPE_k__BackingField = true;
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


// ===== public void set_CurrentViewMode(MenuMoneyPanel.PKBEACFAPHF CJNHFNHJHPE)  [RVA 0x344E42C]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$set_CurrentViewMode @ RVA 0x344E42C

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__set_CurrentViewMode
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool_conflict bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  UnityEngine_MonoBehaviour_o *__this_02;
  
  bVar1 = (__this->fields).super._BOGAKJOFOEK_k__BackingField;
  (__this->fields).CFABKEBDDCF = CJNHFNHJHPE;
  if (bVar1 != false) {
    return;
  }
  __this_00 = (__this->fields)._iconCoins;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE == 0,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._infoCoins;
    if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE == 0,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._coinInfoGroup;
      if ((__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE == 0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ONFMIMKMBFG()  [RVA 0x344E4CC]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$ONFMIMKMBFG @ RVA 0x344E4CC

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__ONFMIMKMBFG
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  CocosAnimation_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__GAFLOAFPCGE(__this,method);
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__GOLKBFHLOBJ(__this,method_00);
  __this_00 = (__this->fields)._picRubySale;
  if ((__this_00 != (CocosAnimation_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void DKLDHKNAEBO()  [RVA 0x344E508]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$DKLDHKNAEBO @ RVA 0x344E508

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__DKLDHKNAEBO
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  bool value;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  PlayerData_o *__this_01;
  RaidManager_o *__this_02;
  System_Action_o *pSVar2;
  int64_t iVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Roster_o **ppAVar4;
  CNLBMDGLFCJ_o *__this_03;
  Roster_o *pAVar5;
  
  if ((DAT_0456828d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_GLAPDHJHCNJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_IDJJMFEFODC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_MHOOOLECDKK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_UpdateCoinsIcon__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_20751/*"serv: -1"*/);
    DAT_0456828d = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__ONKMCCLALAL(__this,method);
  pNVar1 = (__this->fields)._infoServerBonus;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if ((__this_01 != (PlayerData_o *)0x0) &&
       (value = PlayerData__LMIIHKLCBKD(__this_01,0x40000000,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
                    /* try { // try from 0354e5f0 to 0364e727 has its CatchHandler @ 0354e5f0
                       catch() { ... } // from try @ 0354e5f0 with catch @ 0354e5f0
                       catch() { ... } // from try @ 0354e834 with catch @ 0354e5f0
                       catch() { ... } // from try @ 0354e898 with catch @ 0354e5f0
                       catch() { ... } // from try @ 0354e8dc with catch @ 0354e5f0
                       catch() { ... } // from try @ 0354e90c with catch @ 0354e5f0 */
      pNVar1 = (__this->fields)._infoServerBonus;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                  (pNVar1,StringLiteral_20751/*"serv: -1"*/,(pNVar1->klass->vtable)._75_set_text.method);
        __this_02 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
        pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (__this_02 != (RaidManager_o *)0x0) {
          RaidManager__LGOOGCHEAMA(__this_02,pSVar2,(MethodInfo *)0x0);
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
          ppAVar4 = &(__this->fields).OKNKKHGBECG;
          *ppAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          thunk_FUN_01c20e04(ppAVar4);
          if (*ppAVar4 != (Roster_o *)0x0) {
            __this_03 = (__this->fields).FADPBJBOBFA;
            iVar3 = Roster__HEHFNBKGJLP(*ppAVar4,(MethodInfo *)0x0);
            if (__this_03 != (CNLBMDGLFCJ_o *)0x0) {
              CNLBMDGLFCJ__FOOHBJNHOKK(__this_03,(double)iVar3,(MethodInfo *)0x0);
              pAVar5 = (__this->fields).OKNKKHGBECG;
              pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              if (pAVar5 != (Roster_o *)0x0) {
                    /* try { // try from 0354e728 to 0364e72f has its CatchHandler @ 0354e8c0 */
                Roster__CKIGHCPHCNK(pAVar5,pSVar2,(MethodInfo *)0x0);
                pAVar5 = (__this->fields).OKNKKHGBECG;
                pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0354e740 to 0364e747 has its CatchHandler @ 0354e8bc */
                System_Action___ctor();
                if (pAVar5 != (Roster_o *)0x0) {
                    /* try { // try from 0354e750 to 0364e753 has its CatchHandler @ 0354e89c */
                  Roster__MCPKFLGDELH(pAVar5,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 0354e768 to 0364e7a3 has its CatchHandler @ 0354e8b4 */
                  pAVar5 = (__this->fields).OKNKKHGBECG;
                  pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                  System_Action___ctor();
                  if (pAVar5 != (Roster_o *)0x0) {
                    Roster__MCPKFLGDELH(pAVar5,pSVar2,(MethodInfo *)0x0);
                    pAVar5 = (__this->fields).OKNKKHGBECG;
                    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    System_Action___ctor();
                    if (pAVar5 != (Roster_o *)0x0) {
                      Roster__DMEMBNEOLIA(pAVar5,pSVar2,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Menu_MenuMoneyPanel__IDJJMFEFODC(__this,method_00);
                    /* try { // try from 0354e7e0 to 0364e813 has its CatchHandler @ 0354e8b0 */
                      Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateCoinsIcon(__this,method_01);
                      Nekki_SF2_GUI_Menu_MenuMoneyPanel__GLAPDHJHCNJ(__this,method_02);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GAFLOAFPCGE()  [RVA 0x344E278]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$GAFLOAFPCGE @ RVA 0x344E278

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__GAFLOAFPCGE
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_0456828e & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456828e = 1;
  }
  ppSVar7 = &(__this->fields).GLKKMFMGKMF;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_0354e324;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0354e324:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void Update()  [RVA 0x344E800]
// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$Update @ RVA 0x344E800

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__Update
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  long CJNHFNHJHPE;
  CNLBMDGLFCJ_o *pCVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  double dVar4;
  
  if ((DAT_0456828b & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    DAT_0456828b = 1;
  }
  if ((__this->fields).OKNKKHGBECG == (Roster_o *)0x0) {
    return;
  }
  pCVar1 = (__this->fields).FADPBJBOBFA;
  if (pCVar1 != (CNLBMDGLFCJ_o *)0x0) {
    CNLBMDGLFCJ__LLCONNGHGKD(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).FADPBJBOBFA;
    if (pCVar1 != (CNLBMDGLFCJ_o *)0x0) {
      dVar4 = (pCVar1->fields)._JPNBHEPPPNP_k__BackingField;
      CJNHFNHJHPE = -0x8000000000000000;
      if (dVar4 != INFINITY) {
        CJNHFNHJHPE = (long)dVar4;
      }
      if ((__this->fields).OGOANIHOCBO == CJNHFNHJHPE) {
        return;
      }
      (__this->fields).OGOANIHOCBO = CJNHFNHJHPE;
      pNVar3 = (__this->fields)._infoBonus;
      if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0354e424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

