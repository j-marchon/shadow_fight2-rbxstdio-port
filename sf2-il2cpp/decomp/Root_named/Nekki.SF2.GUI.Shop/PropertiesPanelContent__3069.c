// TypeDefIndex 3069
// Namespace: Nekki.SF2.GUI.Shop
// public class PropertiesPanelContent : SidePanelContent
// Fields:
//   private LabelAlias _NotExistText; // 0x28
//   private PropertiesPerksPanel _PropertiesPanel; // 0x30
//   private LabelButton _ForgeOpenButton; // 0x38
//   private LabelButton _ForgeCloseButton; // 0x40
//   private LabelButton _EnchantApplyButton; // 0x48
//   private Indicator _EnchantmentsIndicator; // 0x50
//   private IconLabelButton _SkipDeliveryButton; // 0x58
//   private IconLabelButton _SkipDeliveryForADButton; // 0x60
//   private GameObject _DeliveryTimePanel; // 0x68
//   private LabelAlias _DeliveryTimeText; // 0x70
//   private GameObject _renderRoot; // 0x78
//   private List<Graphic> PMHLGLALHLH; // 0x80
//   private Image <MBFMMJHFBBH>k__BackingField; // 0x88
//   private UnityEvent _OnForgeOpenButtonClicked; // 0x90
//   private UnityEvent _OnForgeCloseButtonClicked; // 0x98
//   private UnityEvent _OnEnchantApplyButtonClicked; // 0xA0
//   private UnityEvent _OnSkipDeliveryButtonClicked; // 0xA8
//   private UnityEvent _OnSkipDeliveryForADButtonClicked; // 0xB0
//   private DBNKANLBEFF HLKBICFHFJM; // 0xB8
//   private HOOAAGABMBL PCBECBEFJOI; // 0xC0
//   private bool BKLPHMPJEFA; // 0xC8
//   private bool GMDIAECHCCO; // 0xC9

// ===== public UnityEvent get_OnSkipDeliveryButtonClicked()  [RVA 0x34C3C44]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$get_OnSkipDeliveryButtonClicked @ RVA 0x34C3C44

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Shop_PropertiesPanelContent__get_OnSkipDeliveryButtonClicked
          (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
                    /* try { // try from 035c3c48 to 036c3c4b has its CatchHandler @ 035c3cc0 */
  return (__this->fields)._OnSkipDeliveryButtonClicked;
}


// ===== public override void Init()  [RVA 0x34C3C4C]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$Init @ RVA 0x34C3C4C

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__Init
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
                    /* try { // try from 035c3c5c to 036c3c6f has its CatchHandler @ 035c3d80 */
  if ((DAT_04568624 & 1) == 0) {
                    /* try { // try from 035c3c70 to 036c3c73 has its CatchHandler @ 035c3cc0 */
                    /* try { // try from 035c3c74 to 036c3c7b has its CatchHandler @ 035c3ca4 */
    FUN_01bab630(&SkipItemDeliveryRewardHelper_TypeInfo);
                    /* try { // try from 035c3c7c to 036c3c7f has its CatchHandler @ 035c3ca0 */
    DAT_04568624 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035c3c80 to 036c3c83 has its CatchHandler @ 035c362c */
                    /* try { // try from 035c3c84 to 036c3c87 has its CatchHandler @ 035c3c9c */
                    /* try { // try from 035c3c88 to 036c3ce3 has its CatchHandler @ 035c362c */
  (__this->fields).GMDIAECHCCO = true;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshAll(__this,method);
                    /* catch() { ... } // from try @ 035c3b40 with catch @ 035c3c90 */
  (__this->fields).GMDIAECHCCO = false;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__FBPHKFLELNP(__this,method_00);
                    /* catch() { ... } // from try @ 035c3c84 with catch @ 035c3c9c */
                    /* catch() { ... } // from try @ 035c3c7c with catch @ 035c3ca0 */
                    /* catch() { ... } // from try @ 035c3c74 with catch @ 035c3ca4 */
  if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 035c38a0 with catch @ 035c3ca8 */
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 035c38b0 with catch @ 035c3cac */
  }
                    /* catch() { ... } // from try @ 035c388c with catch @ 035c3cb0 */
                    /* catch() { ... } // from try @ 035c3a58 with catch @ 035c3cb4 */
                    /* catch() { ... } // from try @ 035c381c with catch @ 035c3cb8 */
                    /* catch() { ... } // from try @ 035c37c0 with catch @ 035c3cbc */
                    /* catch() { ... } // from try @ 035c3c48 with catch @ 035c3cc0
                       catch() { ... } // from try @ 035c3c70 with catch @ 035c3cc0 */
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__GKPCOMLBGCO
            (__this,SkipItemDeliveryRewardHelper_TypeInfo->static_fields->PDNICPKGDOL,in_x2);
  return;
}


// ===== private void GKPCOMLBGCO(long CNHMFABDCHB)  [RVA 0x34C3F0C]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$GKPCOMLBGCO @ RVA 0x34C3F0C

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__GKPCOMLBGCO
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,int64_t CNHMFABDCHB,
               MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  IconLabelButton_o *__this_00;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  int32_t BCDLHKNFNDA;
  long lVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  undefined8 uVar12;
  
                    /* try { // try from 035c3f18 to 036c3fa3 has its CatchHandler @ 035c3d84 */
  if ((DAT_04568625 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<LabelAlias>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_1223/*"-"*/);
    FUN_01bab630(&StringLiteral_13795/*"TimeDaysShort"*/);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
                    /* try { // try from 035c3fa4 to 036c3fab has its CatchHandler @ 035c3fc4 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 035c3fac to 036c3faf has its CatchHandler @ 035c3d84 */
                    /* try { // try from 035c3fb0 to 036c3fb3 has its CatchHandler @ 035c3fbc */
    DAT_04568625 = 1;
  }
                    /* try { // try from 035c3fb4 to 036c3fdb has its CatchHandler @ 035c3d84 */
  __this_00 = (__this->fields)._SkipDeliveryForADButton;
  if (__this_00 != (IconLabelButton_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3fb0 with catch @ 035c3fbc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3f08 with catch @ 035c3fc0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3fa4 with catch @ 035c3fc4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3ea8 with catch @ 035c3fc8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3e4c with catch @ 035c3fcc
                        */
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__GetComponentInChildren<object>
                  ((UnityEngine_Component_o *)__this_00,
                   Method_UnityEngine_Component_GetComponentInChildren<LabelAlias>__);
                    /* try { // try from 035c3fdc to 036c3fdf has its CatchHandler @ 035c3ff0 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* catch() { ... } // from try @ 035c3fdc with catch @ 035c3ff0 */
                    /* try { // try from 035c3ff8 to 036c405f has its CatchHandler @ 035c4074 */
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    BCDLHKNFNDA = 3;
    if (0x1517f < CNHMFABDCHB) {
      BCDLHKNFNDA = 4;
    }
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar5 = Method_System_Array_Empty<string>__;
    lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar8 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar8 = *(long *)(lVar5 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01b81620();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
                    /* try { // try from 035c4060 to 036c406b has its CatchHandler @ 035c3d84 */
      thunk_FUN_01ba7564();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
                    /* try { // try from 035c406c to 036c4073 has its CatchHandler @ 035c4074 */
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035c3ff8 with catch @ 035c4074
                       catch(type#2 @ 00000000) { ... } // from try @ 035c406c with catch @ 035c4074
                        */
      lVar5 = FUN_01b81620();
    }
    uVar2 = StringLiteral_13795/*"TimeDaysShort"*/;
                    /* try { // try from 035c4078 to 036c4183 has its CatchHandler @ 035c4078
                       catch() { ... } // from try @ 035c4078 with catch @ 035c4078
                       catch() { ... } // from try @ 035c42a8 with catch @ 035c4078
                       catch() { ... } // from try @ 035c4350 with catch @ 035c4078
                       catch() { ... } // from try @ 035c4358 with catch @ 035c4078
                       catch() { ... } // from try @ 035c441c with catch @ 035c4078 */
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar9 = pIVar4->klass;
      uVar12 = **(undefined8 **)(lVar5 + 0xb8);
      uVar1._0_1_ = (pIVar9->_2).rank;
      uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar9->vtable + (*piVar11 + 0xc);
            goto LAB_035c4100;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035c4100:
      pSVar7 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,uVar12,pVVar6->method);
      pSVar7 = System_String__Concat(pSVar7,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
                    /* try { // try from 035c4184 to 036c41ab has its CatchHandler @ 035c4384 */
      pSVar7 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                         (CNHMFABDCHB,true,true,true,0x1517f < CNHMFABDCHB,false,false,
                          StringLiteral_2086/*":"*/,pSVar7,false,true,true,true,false,StringLiteral_1/*""*/,
                          StringLiteral_1/*""*/,StringLiteral_1/*""*/,BCDLHKNFNDA,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat(StringLiteral_1223/*"-"*/,pSVar7,(MethodInfo *)0x0);
      if (x != (UnityEngine_Object_o *)0x0) {
                    /* try { // try from 035c41e0 to 036c420b has its CatchHandler @ 035c4380 */
                    /* WARNING: Could not recover jumptable at 0x035c41e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*x->klass[4]._1.gc_desc)(x,pSVar7,x->klass[4]._1.name);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool OINIMLNKPBC()  [RVA 0x34C41EC]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$OINIMLNKPBC @ RVA 0x34C41EC

bool Nekki_SF2_GUI_Shop_PropertiesPanelContent__OINIMLNKPBC
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  if (((__this->fields).GMDIAECHCCO == false) &&
     ((__this->fields).super._DDIEMKPIMAJ_k__BackingField == false)) {
    return (__this->fields).super._HLLLGIDPLEN_k__BackingField != false;
  }
  return true;
}


// ===== public Indicator get_EnchantmentsIndicator()  [RVA 0x34C4214]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$get_EnchantmentsIndicator @ RVA 0x34C4214

Nekki_SF2_GUI_Common_Indicator_o *
Nekki_SF2_GUI_Shop_PropertiesPanelContent__get_EnchantmentsIndicator
          (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._EnchantmentsIndicator;
}


// ===== public PropertiesPerksPanel get_PropertiesPanel()  [RVA 0x34C421C]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$get_PropertiesPanel @ RVA 0x34C421C

Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *
Nekki_SF2_GUI_Shop_PropertiesPanelContent__get_PropertiesPanel
          (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._PropertiesPanel;
}


// ===== public void OnSkipDeliveryButtonClick()  [RVA 0x34C4224]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$OnSkipDeliveryButtonClick @ RVA 0x34C4224

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__OnSkipDeliveryButtonClick
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields)._OnSkipDeliveryButtonClicked;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public DBNKANLBEFF get_Mode()  [RVA 0x34C4240]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$get_Mode @ RVA 0x34C4240

int32_t Nekki_SF2_GUI_Shop_PropertiesPanelContent__get_Mode
                  (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
                    /* try { // try from 035c4244 to 036c424f has its CatchHandler @ 035c4370 */
  return (__this->fields).HLKBICFHFJM;
}


// ===== private void FBPHKFLELNP()  [RVA 0x34C3CE8]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$FBPHKFLELNP @ RVA 0x34C3CE8

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__FBPHKFLELNP
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  Il2CppObject *x;
  bool CJNHFNHJHPE;
  bool bVar1;
  System_Collections_Generic_List_Graphic__o *__this_00;
  UnityEngine_UI_Image_o *pUVar2;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* catch() { ... } // from try @ 035c3ce4 with catch @ 035c3cf4 */
                    /* try { // try from 035c3d04 to 036c3d6b has its CatchHandler @ 035c3d80 */
  if ((DAT_04568626 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Graphic>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Graphic>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Graphic>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568626 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (((__this->fields).super._DDIEMKPIMAJ_k__BackingField == false) &&
     ((__this->fields).super._HLLLGIDPLEN_k__BackingField == false)) {
    CJNHFNHJHPE = (__this->fields).super._JHGIPNHGGOK_k__BackingField != false;
  }
  else {
    CJNHFNHJHPE = true;
  }
                    /* try { // try from 035c3d6c to 036c3d77 has its CatchHandler @ 035c362c */
                    /* try { // try from 035c3d78 to 036c3d7f has its CatchHandler @ 035c3d80 */
  Util__IHPDCBOFHPA((__this->fields)._renderRoot,CJNHFNHJHPE,(MethodInfo *)0x0);
  __this_00 = (__this->fields).PMHLGLALHLH;
                    /* catch() { ... } // from try @ 035c3bf8 with catch @ 035c3d80
                       catch() { ... } // from try @ 035c3c5c with catch @ 035c3d80
                       catch() { ... } // from try @ 035c3d04 with catch @ 035c3d80
                       catch() { ... } // from try @ 035c3d78 with catch @ 035c3d80 */
  if (__this_00 != (System_Collections_Generic_List_Graphic__o *)0x0) {
                    /* try { // try from 035c3d84 to 036c3e4b has its CatchHandler @ 035c3d84
                       catch() { ... } // from try @ 035c3d84 with catch @ 035c3d84
                       catch() { ... } // from try @ 035c3f18 with catch @ 035c3d84
                       catch() { ... } // from try @ 035c3fac with catch @ 035c3d84
                       catch() { ... } // from try @ 035c3fb4 with catch @ 035c3d84
                       catch() { ... } // from try @ 035c4060 with catch @ 035c3d84 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<Graphic>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<Graphic>_MoveNext__)
          , x = local_60.fields._current, bVar1) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_Behaviour__set_enabled
                  ((UnityEngine_Behaviour_o *)x,CJNHFNHJHPE,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<Graphic>_Dispose__);
    pUVar2 = (__this->fields)._MBFMMJHFBBH_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar2 = (__this->fields)._MBFMMJHFBBH_k__BackingField;
      if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto LAB_035c3e84;
                    /* try { // try from 035c3e4c to 036c3e73 has its CatchHandler @ 035c3fcc */
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    return;
  }
LAB_035c3e84:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OnPanelOpened()  [RVA 0x34C4248]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$OnPanelOpened @ RVA 0x34C4248

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__OnPanelOpened
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields).super._DDIEMKPIMAJ_k__BackingField = true;
  (__this->fields).super._HLLLGIDPLEN_k__BackingField = false;
  (__this->fields).super._JHGIPNHGGOK_k__BackingField = false;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__FBPHKFLELNP(__this,method);
                    /* try { // try from 035c4264 to 036c426b has its CatchHandler @ 035c4374 */
  if ((__this->fields).BKLPHMPJEFA != false) {
    Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshAll(__this,method_00);
    return;
  }
                    /* try { // try from 035c4274 to 036c427b has its CatchHandler @ 035c4378 */
  return;
}


// ===== public LabelButton get_ForgeOpenButton()  [RVA 0x34C427C]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$get_ForgeOpenButton @ RVA 0x34C427C

LabelButton_o *
Nekki_SF2_GUI_Shop_PropertiesPanelContent__get_ForgeOpenButton
          (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
                    /* try { // try from 035c4280 to 036c42a7 has its CatchHandler @ 035c4388 */
  return (__this->fields)._ForgeOpenButton;
}


// ===== public LabelButton get_EnchantApplyButton()  [RVA 0x34C4284]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$get_EnchantApplyButton @ RVA 0x34C4284

LabelButton_o *
Nekki_SF2_GUI_Shop_PropertiesPanelContent__get_EnchantApplyButton
          (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._EnchantApplyButton;
}


// ===== public void NeedToRefreshAll()  [RVA 0x34C3CC8]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$NeedToRefreshAll @ RVA 0x34C3CC8

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshAll
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshContent(__this,method);
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshButtons(__this,method_00);
                    /* try { // try from 035c3ce4 to 036c3ce7 has its CatchHandler @ 035c3cf4 */
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshTimers(__this,method_01);
  return;
}


// ===== public void AdditionalRootGraphics(bool CBBJMNGHMIF, Graphic[] NPGBEDGMDNG)  [RVA 0x34C4C3C]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$AdditionalRootGraphics @ RVA 0x34C4C3C

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__AdditionalRootGraphics
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,bool CBBJMNGHMIF,
               UnityEngine_UI_Graphic_array *NPGBEDGMDNG,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_Graphic__o *pSVar1;
  
  if ((DAT_04568627 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>_Clear__);
                    /* try { // try from 035c4c78 to 036c4c7b has its CatchHandler @ 035c4c84 */
                    /* try { // try from 035c4c7c to 036c4c9f has its CatchHandler @ 035c4a18 */
    DAT_04568627 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c4b54 with catch @ 035c4c80
                        */
  if (!CBBJMNGHMIF) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c4c78 with catch @ 035c4c84
                        */
    pSVar1 = (__this->fields).PMHLGLALHLH;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c4b44 with catch @ 035c4c88
                        */
    if (pSVar1 == (System_Collections_Generic_List_Graphic__o *)0x0) goto LAB_035c4cf4;
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
                    /* try { // try from 035c4ca0 to 036c4ca3 has its CatchHandler @ 035c4ccc */
                    /* try { // try from 035c4ca4 to 036c4cdb has its CatchHandler @ 035c4a18 */
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
  }
  if ((NPGBEDGMDNG == (UnityEngine_UI_Graphic_array *)0x0) || (NPGBEDGMDNG->max_length == 0)) {
                    /* try { // try from 035c4ce4 to 036c4cef has its CatchHandler @ 035c4a18 */
                    /* try { // try from 035c4cf0 to 036c4cf7 has its CatchHandler @ 035c4cf8 */
    return;
  }
  pSVar1 = (__this->fields).PMHLGLALHLH;
  if (pSVar1 != (System_Collections_Generic_List_Graphic__o *)0x0) {
                    /* catch() { ... } // from try @ 035c4ca0 with catch @ 035c4ccc */
                    /* try { // try from 035c4cdc to 036c4ce3 has its CatchHandler @ 035c4cf8 */
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar1,
               (System_Collections_Generic_IEnumerable_T__o *)NPGBEDGMDNG,
               Method_System_Collections_Generic_List<Graphic>_AddRange__);
    return;
  }
LAB_035c4cf4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NeedToRefreshTimers()  [RVA 0x34C49A0]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$NeedToRefreshTimers @ RVA 0x34C49A0

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshTimers
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  int64_t CNHMFABDCHB;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  Roster_o *pAVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  
  if ((DAT_04568628 & 1) == 0) {
    FUN_01bab630(&LocalizationManager_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568628 = 1;
    method = extraout_x1;
  }
  if ((((__this->fields).GMDIAECHCCO == false) &&
      ((__this->fields).super._DDIEMKPIMAJ_k__BackingField == false)) &&
     ((__this->fields).super._HLLLGIDPLEN_k__BackingField == false)) {
    (__this->fields).BKLPHMPJEFA = true;
    return;
  }
                    /* try { // try from 035c4a18 to 036c4b43 has its CatchHandler @ 035c4a18
                       catch() { ... } // from try @ 035c4a18 with catch @ 035c4a18
                       catch() { ... } // from try @ 035c4b5c with catch @ 035c4a18
                       catch() { ... } // from try @ 035c4c7c with catch @ 035c4a18
                       catch() { ... } // from try @ 035c4ca4 with catch @ 035c4a18
                       catch() { ... } // from try @ 035c4ce4 with catch @ 035c4a18 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar5 != (Roster_o *)0x0) {
    if ((pAVar5->fields).EANIPGPKLOA == false) {
      pUVar3 = (__this->fields)._DeliveryTimePanel;
      if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar5 != (Roster_o *)0x0) &&
         (__this_00 = (pAVar5->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
        __this_01 = GGHCLMEFIGO__JNFIBDBHNOA
                              (__this_00,(__this->fields).PCBECBEFJOI,(MethodInfo *)0x0);
        if (__this_01 == (IGFGDDANEPE_o *)0x0) {
          CNHMFABDCHB = 0;
        }
        else {
          CNHMFABDCHB = IGFGDDANEPE__PEFAGDNIMCK(__this_01,(MethodInfo *)0x0);
        }
        pUVar3 = (__this->fields)._DeliveryTimePanel;
        if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._DeliveryTimePanel;
          if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 035c4b44 to 036c4b4b has its CatchHandler @ 035c4c88 */
            UnityEngine_GameObject__SetActive(pUVar3,0 < CNHMFABDCHB,(MethodInfo *)0x0);
                    /* try { // try from 035c4b54 to 036c4b5b has its CatchHandler @ 035c4c80 */
            pUVar3 = (__this->fields)._DeliveryTimePanel;
                    /* try { // try from 035c4b5c to 036c4c77 has its CatchHandler @ 035c4a18 */
            if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
              if (!bVar2) {
                if (!bVar1) {
                  return;
                }
                Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshButtons(__this,method_00);
                return;
              }
              pNVar6 = (__this->fields)._DeliveryTimeText;
              if ((LocalizationManager_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar4 = LocalizationManager__BCGDPKJNJCH
                                 (CNHMFABDCHB,true,true,true,false,StringLiteral_2086/*":"*/,true,true,true
                                  ,true,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,
                                  StringLiteral_1/*""*/,(MethodInfo *)0x0);
              if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035c4c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(pNVar6->klass->vtable)._75_set_text.methodPtr)
                          (pNVar6,pSVar4,(pNVar6->klass->vtable)._75_set_text.method);
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


// ===== public override void OnStartClosing()  [RVA 0x34C4CF8]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$OnStartClosing @ RVA 0x34C4CF8

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__OnStartClosing
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035c4cdc with catch @ 035c4cf8
                       catch(type#2 @ 00000000) { ... } // from try @ 035c4cf0 with catch @ 035c4cf8
                        */
  (__this->fields).super._HLLLGIDPLEN_k__BackingField = false;
  (__this->fields).super._JHGIPNHGGOK_k__BackingField = true;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__FBPHKFLELNP(__this,method);
  return;
}


// ===== public void OnEnchantApplyButtonClick()  [RVA 0x34C4D04]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$OnEnchantApplyButtonClick @ RVA 0x34C4D04

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__OnEnchantApplyButtonClick
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields)._OnEnchantApplyButtonClicked;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public UnityEvent get_OnEnchantApplyButtonClicked()  [RVA 0x34C4D20]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$get_OnEnchantApplyButtonClicked @ RVA 0x34C4D20

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Shop_PropertiesPanelContent__get_OnEnchantApplyButtonClicked
          (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnEnchantApplyButtonClicked;
}


// ===== public HOOAAGABMBL get_ItemInfo()  [RVA 0x34C4D28]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$get_ItemInfo @ RVA 0x34C4D28

HOOAAGABMBL_o *
Nekki_SF2_GUI_Shop_PropertiesPanelContent__get_ItemInfo
          (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields).PCBECBEFJOI;
}


// ===== public void NeedToRefreshButtons()  [RVA 0x34C43E0]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$NeedToRefreshButtons @ RVA 0x34C43E0

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshButtons
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  long lVar3;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this_00;
  GGLKHCAIGDI_o *__this_01;
  GGHCLMEFIGO_o *__this_02;
  IGFGDDANEPE_o *__this_03;
  LabelButton_o *pLVar4;
  UnityEngine_GameObject_o *pUVar5;
  HOOAAGABMBL_o *pHVar6;
  DEKKGJNMFEB_o *__this_04;
  BFBONKPKBNL_o *pBVar7;
  System_String_o *pSVar8;
  int64_t IDPMJOKDHNP;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Roster_o *pAVar9;
  IconLabelButton_o *pIVar10;
  Nekki_SF2_GUI_LabelAlias_o *pNVar11;
  Nekki_SF2_GUI_Common_Indicator_o *__this_05;
  float fVar12;
  float fVar14;
  float fVar15;
  UnityEngine_Color_o UVar16;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  float fVar13;
  
  if ((DAT_04568629 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&MainSettings_TypeInfo);
                    /* try { // try from 035c441c to 036c4427 has its CatchHandler @ 035c4078 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 035c4428 to 036c442f has its CatchHandler @ 035c4430 */
                    /* catch() { ... } // from try @ 035c43b4 with catch @ 035c4430
                       catch() { ... } // from try @ 035c4428 with catch @ 035c4430 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04568629 = 1;
    method = extraout_x1;
  }
  local_60.fields.hiddenValue = 0;
  local_60.fields.currentCryptoKey = 0;
  local_60.fields.fakeValueActive = false;
  local_60.fields.inited = false;
  local_60.fields._26_6_ = 0;
  local_60.fields.fakeValue = 0;
  if ((((__this->fields).GMDIAECHCCO == false) &&
      ((__this->fields).super._DDIEMKPIMAJ_k__BackingField == false)) &&
     ((__this->fields).super._HLLLGIDPLEN_k__BackingField == false)) {
    (__this->fields).BKLPHMPJEFA = true;
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar9 == (Roster_o *)0x0) goto LAB_035c499c;
  if ((pAVar9->fields).EANIPGPKLOA == false) {
    pLVar4 = (__this->fields)._ForgeOpenButton;
    if ((pLVar4 == (LabelButton_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
    pLVar4 = (__this->fields)._EnchantApplyButton;
    if ((pLVar4 == (LabelButton_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
    pLVar4 = (__this->fields)._ForgeCloseButton;
    if ((pLVar4 == (LabelButton_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
  }
  else {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if ((**(long **)(lVar3 + 0xb8) == 0) ||
       (__this_00 = *(Nekki_SF2_GUI_Shop_Forge_ForgePanel_o **)(**(long **)(lVar3 + 0xb8) + 0x110),
       __this_00 == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0)) goto LAB_035c499c;
    __this_01 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe(__this_00,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar9 == (Roster_o *)0x0) ||
       (__this_02 = (pAVar9->fields).OIDPLCLELEN, __this_02 == (GGHCLMEFIGO_o *)0x0))
    goto LAB_035c499c;
    __this_03 = GGHCLMEFIGO__JNFIBDBHNOA(__this_02,(__this->fields).PCBECBEFJOI,(MethodInfo *)0x0);
    if ((__this->fields).HLKBICFHFJM == 0) {
      if ((__this_03 == (IGFGDDANEPE_o *)0x0) ||
         (iVar2 = IGFGDDANEPE__LDJLMEFOMLG(__this_03,(MethodInfo *)0x0), iVar2 < 1)) {
        bVar1 = false;
      }
      else {
        if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_04 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
        pHVar6 = (__this->fields).PCBECBEFJOI;
        if ((pHVar6 == (HOOAAGABMBL_o *)0x0) || (__this_04 == (DEKKGJNMFEB_o *)0x0))
        goto LAB_035c499c;
        bVar1 = DEKKGJNMFEB__IPLAABHAGFM
                          (__this_04,(pHVar6->fields)._GMPAEDFIIHF_k__BackingField,(MethodInfo *)0x0
                          );
      }
      pLVar4 = (__this->fields)._ForgeOpenButton;
      if ((pLVar4 == (LabelButton_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
      UnityEngine_GameObject__SetActive(pUVar5,bVar1,(MethodInfo *)0x0);
      pLVar4 = (__this->fields)._ForgeCloseButton;
      if ((pLVar4 == (LabelButton_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      pLVar4 = (__this->fields)._EnchantApplyButton;
      if ((pLVar4 == (LabelButton_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      __this_05 = (__this->fields)._EnchantmentsIndicator;
      iVar2 = HCAICJLDDJO__IEALNGPAPAF((__this->fields).PCBECBEFJOI,(MethodInfo *)0x0);
      if (__this_05 == (Nekki_SF2_GUI_Common_Indicator_o *)0x0) goto LAB_035c499c;
      Nekki_SF2_GUI_Common_Indicator__set_State(__this_05,iVar2,(MethodInfo *)0x0);
      if (__this_03 != (IGFGDDANEPE_o *)0x0) goto LAB_035c47b4;
    }
    else {
      pLVar4 = (__this->fields)._ForgeOpenButton;
      if ((pLVar4 == (LabelButton_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      pLVar4 = (__this->fields)._ForgeCloseButton;
      if ((pLVar4 == (LabelButton_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
      UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
      pLVar4 = (__this->fields)._EnchantApplyButton;
      if ((__this_01 == (GGLKHCAIGDI_o *)0x0) || (__this_03 == (IGFGDDANEPE_o *)0x0)) {
        if ((pLVar4 == (LabelButton_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
        UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
        if (__this_03 == (IGFGDDANEPE_o *)0x0) goto LAB_035c48cc;
      }
      else {
        bVar1 = GGLKHCAIGDI__DDAKFOBLNJL(__this_01,__this_03,(MethodInfo *)0x0);
        if (bVar1) {
          pHVar6 = IGFGDDANEPE__JPNNODJPOCL(__this_03,false,(MethodInfo *)0x0);
          if (pHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_035c499c;
          bVar1 = GGLKHCAIGDI__EJOADHBJICP
                            (__this_01,__this_03,(pHVar6->fields)._JDEHPJEIOCI_k__BackingField,
                             (MethodInfo *)0x0);
        }
        else {
          bVar1 = false;
        }
        if (pLVar4 == (LabelButton_o *)0x0) goto LAB_035c499c;
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pLVar4,bVar1,(MethodInfo *)0x0);
        pLVar4 = (__this->fields)._EnchantApplyButton;
        if ((pLVar4 == (LabelButton_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
        UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
      }
LAB_035c47b4:
      bVar1 = IGFGDDANEPE__ICLJJAMOFPD(__this_03,(MethodInfo *)0x0);
      if ((__this_01 != (GGLKHCAIGDI_o *)0x0) && (bVar1)) {
        pBVar7 = GGLKHCAIGDI__GPGGNMAFOJD(__this_01,__this_03,(MethodInfo *)0x0);
        if (pBVar7 == (BFBONKPKBNL_o *)0x0) {
          return;
        }
        pLVar4 = (__this->fields)._EnchantApplyButton;
        if ((pLVar4 == (LabelButton_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
        UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
        pIVar10 = (__this->fields)._SkipDeliveryButton;
        if (pIVar10 == (IconLabelButton_o *)0x0) goto LAB_035c499c;
        local_60.fields.hiddenValue =
             (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
        local_60.fields.currentCryptoKey =
             (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
        local_60.fields.fakeValueActive =
             (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
        local_60.fields.inited = (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
        local_60.fields._26_6_ =
             *(undefined6 *)&(pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
        local_60.fields.fakeValue = (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
        pNVar11 = (pIVar10->fields).super.Label;
        pSVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ToString
                           (&local_60,(MethodInfo *)0x0);
        if (pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035c499c;
        (*(pNVar11->klass->vtable)._75_set_text.methodPtr)
                  (pNVar11,pSVar8,(pNVar11->klass->vtable)._75_set_text.method);
        pIVar10 = (__this->fields)._SkipDeliveryButton;
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
        local_80.fields.hiddenValue =
             (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
        local_80.fields.currentCryptoKey =
             (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
        local_80.fields.fakeValueActive =
             (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
        local_80.fields.inited = (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
        local_80.fields._26_6_ =
             *(undefined6 *)&(pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
        local_80.fields.fakeValue = (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
        pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        IDPMJOKDHNP = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                (&local_80,(MethodInfo *)0x0);
        if (pAVar9 == (Roster_o *)0x0) goto LAB_035c499c;
        bVar1 = Roster__MIFEPGNGDON(pAVar9,IDPMJOKDHNP,(MethodInfo *)0x0);
        if (bVar1) {
          fVar15 = 1.0;
          fVar12 = 0.0;
          fVar13 = 0.0;
          fVar14 = 0.0;
        }
        else {
          if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UVar16 = MainSettings__IALPNFOEEBP((MethodInfo *)0x0);
          fVar15 = UVar16.fields.a;
          fVar14 = UVar16.fields.b;
          fVar13 = UVar16.fields.g;
          fVar12 = UVar16.fields.r;
        }
        if (pIVar10 == (IconLabelButton_o *)0x0) goto LAB_035c499c;
        UVar16.fields.g = fVar13;
        UVar16.fields.r = fVar12;
        UVar16.fields.a = fVar15;
        UVar16.fields.b = fVar14;
        LabelButton__set_Color((LabelButton_o *)pIVar10,UVar16,(MethodInfo *)0x0);
        pIVar10 = (__this->fields)._SkipDeliveryButton;
        if ((pIVar10 == (IconLabelButton_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pIVar10,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
        UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
        pIVar10 = (__this->fields)._SkipDeliveryForADButton;
        if ((pIVar10 == (IconLabelButton_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pIVar10,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
        bVar1 = true;
        goto LAB_035c4904;
      }
    }
  }
LAB_035c48cc:
  pIVar10 = (__this->fields)._SkipDeliveryButton;
  if ((pIVar10 != (IconLabelButton_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pIVar10,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
    pIVar10 = (__this->fields)._SkipDeliveryForADButton;
    if ((pIVar10 != (IconLabelButton_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pIVar10,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = false;
LAB_035c4904:
      UnityEngine_GameObject__SetActive(pUVar5,bVar1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_035c499c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OnStartOpening()  [RVA 0x34C4D30]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$OnStartOpening @ RVA 0x34C4D30

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__OnStartOpening
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields).super._HLLLGIDPLEN_k__BackingField = true;
  (__this->fields).super._JHGIPNHGGOK_k__BackingField = false;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__FBPHKFLELNP(__this,method);
  if ((__this->fields).BKLPHMPJEFA != false) {
    Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshAll(__this,method_00);
    return;
  }
  return;
}


// ===== public void NeedToRefreshContent()  [RVA 0x34C428C]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$NeedToRefreshContent @ RVA 0x34C428C

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshContent
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  MethodInfo *extraout_x1;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  
  if ((DAT_0456862a & 1) == 0) {
                    /* try { // try from 035c42a8 to 036c433b has its CatchHandler @ 035c4078 */
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456862a = 1;
    method = extraout_x1;
  }
  if ((((__this->fields).GMDIAECHCCO == false) &&
      ((__this->fields).super._DDIEMKPIMAJ_k__BackingField == false)) &&
     ((__this->fields).super._HLLLGIDPLEN_k__BackingField == false)) {
    (__this->fields).BKLPHMPJEFA = true;
    return;
  }
  CNDPGGAFHEA = (__this->fields).PCBECBEFJOI;
  if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
                    /* catch() { ... } // from try @ 035c4354 with catch @ 035c4360 */
    pNVar2 = (__this->fields)._PropertiesPanel;
LAB_035c4364:
                    /* catch() { ... } // from try @ 035c434c with catch @ 035c4364 */
                    /* catch() { ... } // from try @ 035c4348 with catch @ 035c4368 */
                    /* catch() { ... } // from try @ 035c4344 with catch @ 035c436c */
                    /* catch() { ... } // from try @ 035c4244 with catch @ 035c4370 */
    if ((pNVar2 == (Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c43dc;
                    /* catch() { ... } // from try @ 035c4264 with catch @ 035c4374 */
                    /* catch() { ... } // from try @ 035c4274 with catch @ 035c4378 */
                    /* catch() { ... } // from try @ 035c433c with catch @ 035c437c */
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035c41e0 with catch @ 035c4380 */
    pNVar4 = (__this->fields)._NotExistText;
                    /* catch() { ... } // from try @ 035c4184 with catch @ 035c4384 */
                    /* catch() { ... } // from try @ 035c4280 with catch @ 035c4388 */
    if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c43dc;
                    /* try { // try from 035c4398 to 036c439b has its CatchHandler @ 035c43ac */
    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_LabelAlias_o *)(__this->fields)._ForgeOpenButton;
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    pSVar1 = NLPJLHOEAOE__GMJMEKENPAP(CNDPGGAFHEA,true,(MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_035c43dc;
    pNVar2 = (__this->fields)._PropertiesPanel;
    if ((pSVar1->fields)._size == 0) goto LAB_035c4364;
    if (pNVar2 == (Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *)0x0) goto LAB_035c43dc;
    (*(pNVar2->klass->vtable)._4_SetPerks.methodPtr)
              (pNVar2,pSVar1,(__this->fields).PCBECBEFJOI,(pNVar2->klass->vtable)._4_SetPerks.method
              );
    pNVar2 = (__this->fields)._PropertiesPanel;
                    /* try { // try from 035c433c to 036c4343 has its CatchHandler @ 035c437c */
                    /* try { // try from 035c4344 to 036c4347 has its CatchHandler @ 035c436c */
    if ((pNVar2 == (Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c43dc;
                    /* try { // try from 035c4348 to 036c434b has its CatchHandler @ 035c4368 */
                    /* try { // try from 035c434c to 036c434f has its CatchHandler @ 035c4364 */
                    /* try { // try from 035c4350 to 036c4353 has its CatchHandler @ 035c4078 */
    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
                    /* try { // try from 035c4354 to 036c4357 has its CatchHandler @ 035c4360 */
    pNVar4 = (__this->fields)._NotExistText;
                    /* try { // try from 035c4358 to 036c4397 has its CatchHandler @ 035c4078 */
  }
                    /* catch() { ... } // from try @ 035c4398 with catch @ 035c43ac */
  if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 035c43b4 to 036c441b has its CatchHandler @ 035c4430 */
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
    return;
  }
LAB_035c43dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Mode(DBNKANLBEFF CJNHFNHJHPE)  [RVA 0x34C4D60]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$set_Mode @ RVA 0x34C4D60

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__set_Mode
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((__this->fields).HLKBICFHFJM == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).HLKBICFHFJM = CJNHFNHJHPE;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshButtons
            (__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshTimers(__this,method_00);
  return;
}


// ===== public override void OnPanelClosed()  [RVA 0x34C4D90]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$OnPanelClosed @ RVA 0x34C4D90

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__OnPanelClosed
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  (__this->fields).super._DDIEMKPIMAJ_k__BackingField = false;
  (__this->fields).super._HLLLGIDPLEN_k__BackingField = false;
  (__this->fields).super._JHGIPNHGGOK_k__BackingField = false;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__FBPHKFLELNP(__this,method);
  return;
}


// ===== public UnityEvent get_OnForgeCloseButtonClicked()  [RVA 0x34C4D9C]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$get_OnForgeCloseButtonClicked @ RVA 0x34C4D9C

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Shop_PropertiesPanelContent__get_OnForgeCloseButtonClicked
          (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnForgeCloseButtonClicked;
}


// ===== private Image HGBDMINNICE()  [RVA 0x34C4DA4]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$HGBDMINNICE @ RVA 0x34C4DA4

UnityEngine_UI_Image_o *
Nekki_SF2_GUI_Shop_PropertiesPanelContent__HGBDMINNICE
          (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._MBFMMJHFBBH_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x34C4DAC]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$.ctor @ RVA 0x34C4DAC

void Nekki_SF2_GUI_Shop_PropertiesPanelContent___ctor
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Graphic__o *__this_00;
  System_Collections_Generic_List_Graphic__o **ppSVar1;
  UnityEngine_Events_UnityEvent_o *pUVar2;
  UnityEngine_Events_UnityEvent_o **ppUVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456862b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Graphic>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_0456862b = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_Graphic__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Graphic>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Graphic>__ctor__);
  ppSVar1 = &(__this->fields).PMHLGLALHLH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pUVar2 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields)._OnForgeOpenButtonClicked;
  *ppUVar3 = pUVar2;
  thunk_FUN_01c20e04(ppUVar3,pUVar2);
  pUVar2 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields)._OnForgeCloseButtonClicked;
  *ppUVar3 = pUVar2;
  thunk_FUN_01c20e04(ppUVar3,pUVar2);
  pUVar2 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields)._OnEnchantApplyButtonClicked;
  *ppUVar3 = pUVar2;
  thunk_FUN_01c20e04(ppUVar3,pUVar2);
  pUVar2 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields)._OnSkipDeliveryButtonClicked;
  *ppUVar3 = pUVar2;
  thunk_FUN_01c20e04(ppUVar3,pUVar2);
  pUVar2 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields)._OnSkipDeliveryForADButtonClicked;
  *ppUVar3 = pUVar2;
  thunk_FUN_01c20e04(ppUVar3,pUVar2);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void set_PanelBackground(Image CJNHFNHJHPE)  [RVA 0x34C4EFC]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$set_PanelBackground @ RVA 0x34C4EFC

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__set_PanelBackground
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,
               UnityEngine_UI_Image_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MBFMMJHFBBH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public UnityEvent get_OnSkipDeliveryForADButtonClicked()  [RVA 0x34C4F04]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$get_OnSkipDeliveryForADButtonClicked @ RVA 0x34C4F04

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Shop_PropertiesPanelContent__get_OnSkipDeliveryForADButtonClicked
          (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnSkipDeliveryForADButtonClicked;
}


// ===== public UnityEvent get_OnForgeOpenButtonClicked()  [RVA 0x34C4F0C]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$get_OnForgeOpenButtonClicked @ RVA 0x34C4F0C

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Shop_PropertiesPanelContent__get_OnForgeOpenButtonClicked
          (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnForgeOpenButtonClicked;
}


// ===== public void OnForgeCloseButtonClick()  [RVA 0x34C4F14]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$OnForgeCloseButtonClick @ RVA 0x34C4F14

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__OnForgeCloseButtonClick
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields)._OnForgeCloseButtonClicked;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnForgeOpenButtonClick()  [RVA 0x34C4F30]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$OnForgeOpenButtonClick @ RVA 0x34C4F30

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__OnForgeOpenButtonClick
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields)._OnForgeOpenButtonClicked;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnSkipDeliveryForADButtonClick()  [RVA 0x34C4F4C]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$OnSkipDeliveryForADButtonClick @ RVA 0x34C4F4C

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__OnSkipDeliveryForADButtonClick
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields)._OnSkipDeliveryForADButtonClicked;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_ItemInfo(HOOAAGABMBL CJNHFNHJHPE)  [RVA 0x34C4F68]
// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$set_ItemInfo @ RVA 0x34C4F68

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__set_ItemInfo
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,HOOAAGABMBL_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields).PCBECBEFJOI = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshAll(__this,method_00);
  return;
}

