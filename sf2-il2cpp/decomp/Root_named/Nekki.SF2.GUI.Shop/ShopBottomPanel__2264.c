// TypeDefIndex 2264
// Namespace: Nekki.SF2.GUI.Shop
// public class ShopBottomPanel : BottomPanel<POIJDKLHHKO>
// Fields:
//   private float _extendButtonsHeightForF2P; // 0x74
//   private SectionButton ENDBIOBNINE; // 0x78

// ===== protected override void OnClick(POIJDKLHHKO HIIGJGLEOFH)  [RVA 0x32FFF98]
// Nekki.SF2.GUI.Shop.ShopBottomPanel$$OnClick @ RVA 0x32FFF98

void Nekki_SF2_GUI_Shop_ShopBottomPanel__OnClick
               (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,int32_t HIIGJGLEOFH,MethodInfo *method)

{
  long lVar1;
  
                    /* try { // try from 033fff98 to 034fffdf has its CatchHandler @ 033ffb64 */
  if ((DAT_04567711 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_OnClick__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
                    /* try { // try from 033fffe0 to 034ffff3 has its CatchHandler @ 034000a0 */
    DAT_04567711 = 1;
  }
                    /* try { // try from 033ffff4 to 034ffff7 has its CatchHandler @ 0340001c */
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__OnClick
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,HIIGJGLEOFH,
             Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_OnClick__);
                    /* try { // try from 033ffff8 to 034ffffb has its CatchHandler @ 03400018 */
                    /* try { // try from 033ffffc to 03500003 has its CatchHandler @ 03400014 */
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
                    /* try { // try from 03400004 to 03500047 has its CatchHandler @ 033ffb64 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 033fff94 with catch @ 03400008 */
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
                    /* catch() { ... } // from try @ 033ffffc with catch @ 03400014 */
                    /* catch() { ... } // from try @ 033ffff8 with catch @ 03400018 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 033ffff4 with catch @ 0340001c */
    lVar1 = FUN_01b81620();
  }
                    /* catch() { ... } // from try @ 033fff34 with catch @ 03400020 */
                    /* catch() { ... } // from try @ 033ffdd0 with catch @ 03400024 */
                    /* catch() { ... } // from try @ 033ffdb4 with catch @ 03400028 */
  if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
      (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
                    /* catch() { ... } // from try @ 033ffda0 with catch @ 0340002c */
    Nekki_SF2_GUI_Shop_ShopScene__set_CurrentSection
              ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar1 + 0xb8),HIIGJGLEOFH,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override MGNDHCBAPEN<string, string> GEFAAMGLMMC(POIJDKLHHKO HIIGJGLEOFH)  [RVA 0x3300048]
// Nekki.SF2.GUI.Shop.ShopBottomPanel$$GEFAAMGLMMC @ RVA 0x3300048

MGNDHCBAPEN_string__string__o *
Nekki_SF2_GUI_Shop_ShopBottomPanel__GEFAAMGLMMC
          (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,int32_t HIIGJGLEOFH,MethodInfo *method)

{
  MGNDHCBAPEN_string__string__o *__this_00;
  undefined8 *puVar1;
  
                    /* try { // try from 03400048 to 0350004b has its CatchHandler @ 03400074 */
                    /* try { // try from 0340004c to 03500083 has its CatchHandler @ 033ffb64 */
  if ((DAT_04567712 & 1) == 0) {
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_string>__ctor__);
                    /* catch() { ... } // from try @ 03400048 with catch @ 03400074 */
    FUN_01bab630(&MGNDHCBAPEN<string,_string>_TypeInfo);
    FUN_01bab630(&StringLiteral_12013/*"ShopButtons1.Ranged_weapon_pushed"*/);
                    /* try { // try from 03400084 to 0350008b has its CatchHandler @ 034000a0 */
                    /* try { // try from 0340008c to 03500097 has its CatchHandler @ 033ffb64 */
    FUN_01bab630(&StringLiteral_12017/*"ShopButtons2.Free_pushed"*/);
                    /* try { // try from 03400098 to 0350009f has its CatchHandler @ 034000a0 */
    FUN_01bab630(&StringLiteral_12019/*"ShopButtons2.Payment_pushed"*/);
                    /* catch() { ... } // from try @ 033fffe0 with catch @ 034000a0
                       catch() { ... } // from try @ 03400084 with catch @ 034000a0
                       catch() { ... } // from try @ 03400098 with catch @ 034000a0 */
                    /* try { // try from 034000a4 to 0350028f has its CatchHandler @ 034000a4
                       catch() { ... } // from try @ 034000a4 with catch @ 034000a4
                       catch() { ... } // from try @ 034003bc with catch @ 034000a4
                       catch() { ... } // from try @ 03400564 with catch @ 034000a4
                       catch() { ... } // from try @ 034005d4 with catch @ 034000a4
                       catch() { ... } // from try @ 034005dc with catch @ 034000a4
                       catch() { ... } // from try @ 034006c8 with catch @ 034000a4
                       catch() { ... } // from try @ 034006dc with catch @ 034000a4
                       catch() { ... } // from try @ 03400710 with catch @ 034000a4 */
    FUN_01bab630(&StringLiteral_12007/*"ShopButtons1.Armor_pushed"*/);
    FUN_01bab630(&StringLiteral_12015/*"ShopButtons1.Weapon_pushed"*/);
    FUN_01bab630(&StringLiteral_12009/*"ShopButtons1.Helmet_pushed"*/);
    FUN_01bab630(&StringLiteral_12011/*"ShopButtons1.Magic_pushed"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_12021/*"ShopButtons2.meshok_3"*/);
    DAT_04567712 = 1;
  }
  if ((uint)HIIGJGLEOFH < 8) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_12015/*"ShopButtons1.Weapon_pushed"*/_03fc6630)[HIIGJGLEOFH];
    __this_00 = (MGNDHCBAPEN_string__string__o *)
                thunk_FUN_01bda818(MGNDHCBAPEN<string,_string>_TypeInfo);
    MGNDHCBAPEN<object,_object>___ctor
              ((MGNDHCBAPEN_T1__T2__o *)__this_00,StringLiteral_14092/*"UI/Atlases/"*/,(Il2CppObject *)*puVar1,
               Method_MGNDHCBAPEN<string,_string>__ctor__);
  }
  else {
    __this_00 = (MGNDHCBAPEN_string__string__o *)0x0;
  }
  return __this_00;
}


// ===== protected override int CJFJPCHDLAB(POIJDKLHHKO HIIGJGLEOFH)  [RVA 0x330014C]
// Nekki.SF2.GUI.Shop.ShopBottomPanel$$CJFJPCHDLAB @ RVA 0x330014C

int32_t Nekki_SF2_GUI_Shop_ShopBottomPanel__CJFJPCHDLAB
                  (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,int32_t HIIGJGLEOFH,
                  MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t iVar3;
  uint uVar4;
  KKEKKPIDGBK_o *pKVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *ACCIHBHMFPN;
  KKEKKPIDGBK_c *pKVar7;
  ulong uVar8;
  int32_t *piVar9;
  Item_o *__this_00;
  
  if ((DAT_04567713 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567713 = 1;
  }
  if (HIIGJGLEOFH == 7) {
    if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
    if (bVar2) {
      if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pKVar5 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pKVar5 != (KKEKKPIDGBK_o *)0x0) {
        pKVar7 = pKVar5->klass;
        uVar1._0_1_ = (pKVar7->_2).rank;
        uVar1._1_1_ = (pKVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar1;
        if (uVar8 != 0) {
          piVar9 = &((pKVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
              pVVar6 = pKVar7->vtable + (*piVar9 + 6);
              goto LAB_034002b0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pKVar5,KKEKKPIDGBK_TypeInfo,6);
LAB_034002b0:
        uVar4 = (*pVVar6->methodPtr)(pKVar5,pVVar6->method);
        return -(uVar4 & 1);
      }
      goto LAB_034002cc;
    }
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  ACCIHBHMFPN = BKBFFEJEBAI__BMDJPMKDNNF(HIIGJGLEOFH,(MethodInfo *)0x0);
  if (__this_00 != (Item_o *)0x0) {
                    /* try { // try from 03400290 to 035002b7 has its CatchHandler @ 03400620 */
    iVar3 = Item__CBCCEHFONKC(__this_00,ACCIHBHMFPN,(MethodInfo *)0x0);
    return iVar3;
  }
LAB_034002cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x33002D0]
// Nekki.SF2.GUI.Shop.ShopBottomPanel$$GIENGNEGHPJ @ RVA 0x33002D0

void Nekki_SF2_GUI_Shop_ShopBottomPanel__GIENGNEGHPJ
               (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  UnityEngine_Transform_o *__this_00;
  System_Collections_Generic_List_SectionButton__o *pSVar3;
  SFButton_o *__this_01;
  SFButton_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  System_Collections_Generic_List_T__o *__this_04;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_Common_SectionButton_o *__this_05;
  int index;
  float fVar5;
  UnityEngine_Vector2_o PGFAIJMMOHJ;
  UnityEngine_Rect_o UVar6;
  
                    /* try { // try from 034002ec to 03500317 has its CatchHandler @ 0340061c */
  if ((DAT_04567714 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_GIENGNEGHPJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_get_Buttons__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_get_Sections__);
    FUN_01bab630(&Method_System_Collections_Generic_List<POIJDKLHHKO>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SectionButton>_get_Item__);
    DAT_04567714 = 1;
  }
                    /* try { // try from 03400350 to 035003bb has its CatchHandler @ 03400628 */
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,
             Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_GIENGNEGHPJ__);
  if (0.0 < *(float *)&(__this->fields).super.field_0x64) {
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) {
LAB_034004d0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034004d0 to 03500503 has its CatchHandler @ 034006c8 */
      FUN_01bab8c8();
    }
    UnityEngine_Transform__SetAsFirstSibling(__this_00,(MethodInfo *)0x0);
    iVar1 = Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__get_Count
                      ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,
                       Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_get_Count__);
    if (0 < iVar1) {
      index = 0;
      do {
                    /* try { // try from 034003bc to 03500483 has its CatchHandler @ 034000a4 */
        pSVar3 = (__this->fields).super._Buttons;
        if (pSVar3 == (System_Collections_Generic_List_SectionButton__o *)0x0) goto LAB_034004d0;
        __this_01 = (SFButton_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index,
                               Method_System_Collections_Generic_List<SectionButton>_get_Item__);
        pSVar3 = (__this->fields).super._Buttons;
        if (((pSVar3 == (System_Collections_Generic_List_SectionButton__o *)0x0) ||
            (__this_02 = (SFButton_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                    Method_System_Collections_Generic_List<SectionButton>_get_Item__
                                   ), __this_02 == (SFButton_o *)0x0)) ||
           (__this_03 = SFButton__get_RectTransform(__this_02,(MethodInfo *)0x0),
           __this_03 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_034004d0;
        UVar6 = UnityEngine_RectTransform__get_rect(__this_03,(MethodInfo *)0x0);
        if (__this_01 == (SFButton_o *)0x0) goto LAB_034004d0;
        fVar5 = *(float *)&(__this->fields).super.field_0x64;
        PGFAIJMMOHJ.fields.y = UVar6.fields.m_Height + fVar5;
        PGFAIJMMOHJ.fields.x = UVar6.fields.m_Width + 0.0;
        SFButton__CreateAdditionalTouchZone
                  (__this_01,PGFAIJMMOHJ,(UnityEngine_Vector2_o)((ulong)(uint)(fVar5 * 0.5) << 0x20)
                   ,(MethodInfo *)0x0);
        __this_04 = (__this->fields).super._Sections;
        if (__this_04 == (System_Collections_Generic_List_T__o *)0x0) goto LAB_034004d0;
        iVar2 = System_Collections_Generic_List<Int32Enum>__get_Item
                          (__this_04,index,
                           Method_System_Collections_Generic_List<POIJDKLHHKO>_get_Item__);
        if (iVar2 == 7) {
          pSVar3 = (__this->fields).super._Buttons;
          if (pSVar3 == (System_Collections_Generic_List_SectionButton__o *)0x0) goto LAB_034004d0;
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              Method_System_Collections_Generic_List<SectionButton>_get_Item__);
          *(Il2CppObject **)&(__this->fields)._extendButtonsHeightForF2P = pIVar4;
          thunk_FUN_01c20e04(&(__this->fields)._extendButtonsHeightForF2P,pIVar4);
          pSVar3 = (__this->fields).super._Buttons;
          if (pSVar3 == (System_Collections_Generic_List_SectionButton__o *)0x0) goto LAB_034004d0;
          __this_05 = (Nekki_SF2_GUI_Common_SectionButton_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                 Method_System_Collections_Generic_List<SectionButton>_get_Item__);
                    /* try { // try from 03400484 to 0350048b has its CatchHandler @ 03400614 */
          iVar2 = (*(__this->klass->vtable)._10_CJFJPCHDLAB.methodPtr)
                            (__this,7,(__this->klass->vtable)._10_CJFJPCHDLAB.method);
          if (__this_05 == (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) goto LAB_034004d0;
          Nekki_SF2_GUI_Common_SectionButton__set_NewItemsCount(__this_05,iVar2,(MethodInfo *)0x0);
        }
        index = index + 1;
                    /* try { // try from 034004b0 to 035004b7 has its CatchHandler @ 0340060c */
      } while (iVar1 != index);
    }
  }
                    /* try { // try from 034004c0 to 035004c7 has its CatchHandler @ 034005fc */
  return;
}


// ===== public void .ctor()  [RVA 0x33004D4]
// Nekki.SF2.GUI.Shop.ShopBottomPanel$$.ctor @ RVA 0x33004D4

void Nekki_SF2_GUI_Shop_ShopBottomPanel___ctor
               (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,MethodInfo *method)

{
  if ((DAT_04567715 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>__ctor__);
    DAT_04567715 = 1;
  }
                    /* try { // try from 0340050c to 03500527 has its CatchHandler @ 034005f0 */
  *(undefined4 *)&(__this->fields).super.field_0x64 = 0x43960000;
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>___ctor
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,
             Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>__ctor__);
  return;
}


// ===== protected override bool GOLKEMDPKOP()  [RVA 0x3300524]
// Nekki.SF2.GUI.Shop.ShopBottomPanel$$GOLKEMDPKOP @ RVA 0x3300524

bool Nekki_SF2_GUI_Shop_ShopBottomPanel__GOLKEMDPKOP
               (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t GMGGINDHNPI;
  
                    /* try { // try from 0340053c to 03500547 has its CatchHandler @ 03400604 */
  if ((DAT_04567716 & 1) == 0) {
                    /* try { // try from 0340054c to 03500557 has its CatchHandler @ 034005ec */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_GOLKEMDPKOP__);
    DAT_04567716 = 1;
  }
                    /* try { // try from 03400558 to 03500563 has its CatchHandler @ 034005e8 */
  bVar1 = Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__GOLKEMDPKOP
                    ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,
                     Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_GOLKEMDPKOP__);
                    /* try { // try from 03400564 to 035005af has its CatchHandler @ 034000a4 */
  if (bVar1) {
    GMGGINDHNPI = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
    bVar1 = GNAFJMPJNKI__KHIBBBCNMCJ(GMGGINDHNPI,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== public void RemoveFreeSectionNotificator()  [RVA 0x3300590]
// Nekki.SF2.GUI.Shop.ShopBottomPanel$$RemoveFreeSectionNotificator @ RVA 0x3300590

void Nekki_SF2_GUI_Shop_ShopBottomPanel__RemoveFreeSectionNotificator
               (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_SectionButton_o *__this_00;
  
  __this_00 = *(Nekki_SF2_GUI_Common_SectionButton_o **)&(__this->fields)._extendButtonsHeightForF2P
  ;
  if (__this_00 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
    Nekki_SF2_GUI_Common_SectionButton__set_NewItemsCount(__this_00,0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ScrollOnStartTo(HPPDIEDAKEC HONPNKFABKF)  [RVA 0x33005B0]
// Nekki.SF2.GUI.Shop.ShopBottomPanel$$ScrollOnStartTo @ RVA 0x33005B0

void Nekki_SF2_GUI_Shop_ShopBottomPanel__ScrollOnStartTo
               (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,int32_t HONPNKFABKF,MethodInfo *method)

{
  bool bVar1;
  int32_t HIIGJGLEOFH;
  Nekki_SF2_GUI_Common_SectionButton_o *x;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  int32_t local_38;
  int32_t local_34;
  
                    /* try { // try from 034005b0 to 035005b7 has its CatchHandler @ 03400618 */
                    /* try { // try from 034005b8 to 035005bf has its CatchHandler @ 03400624 */
                    /* try { // try from 034005c0 to 035005c3 has its CatchHandler @ 03400610 */
                    /* try { // try from 034005c4 to 035005c7 has its CatchHandler @ 03400608 */
                    /* try { // try from 034005c8 to 035005cb has its CatchHandler @ 03400600 */
                    /* try { // try from 034005cc to 035005cf has its CatchHandler @ 034005f8 */
                    /* try { // try from 034005d0 to 035005d3 has its CatchHandler @ 034005f4 */
                    /* try { // try from 034005d4 to 035005d7 has its CatchHandler @ 034000a4 */
                    /* try { // try from 034005d8 to 035005db has its CatchHandler @ 034005e4 */
                    /* try { // try from 034005dc to 03500637 has its CatchHandler @ 034000a4 */
  if ((DAT_04567717 & 1) == 0) {
                    /* catch() { ... } // from try @ 034005d8 with catch @ 034005e4 */
                    /* catch() { ... } // from try @ 03400558 with catch @ 034005e8 */
                    /* catch() { ... } // from try @ 0340054c with catch @ 034005ec */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_GetButtonBySection__);
                    /* catch() { ... } // from try @ 0340050c with catch @ 034005f0 */
                    /* catch() { ... } // from try @ 034005d0 with catch @ 034005f4 */
                    /* catch() { ... } // from try @ 034005cc with catch @ 034005f8 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch() { ... } // from try @ 034004c0 with catch @ 034005fc */
                    /* catch() { ... } // from try @ 034005c8 with catch @ 03400600 */
                    /* catch() { ... } // from try @ 0340053c with catch @ 03400604 */
    FUN_01bab630(&HPPDIEDAKEC_TypeInfo);
                    /* catch() { ... } // from try @ 034005c4 with catch @ 03400608 */
                    /* catch() { ... } // from try @ 034004b0 with catch @ 0340060c */
                    /* catch() { ... } // from try @ 034005c0 with catch @ 03400610 */
    FUN_01bab630(&object___TypeInfo);
                    /* catch() { ... } // from try @ 03400484 with catch @ 03400614 */
                    /* catch() { ... } // from try @ 034005b0 with catch @ 03400618 */
                    /* catch() { ... } // from try @ 034002ec with catch @ 0340061c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 03400290 with catch @ 03400620 */
                    /* catch() { ... } // from try @ 034005b8 with catch @ 03400624 */
                    /* catch() { ... } // from try @ 03400350 with catch @ 03400628 */
    FUN_01bab630(&POIJDKLHHKO_TypeInfo);
    FUN_01bab630(&StringLiteral_12003/*"ShopBottomPanel::ScrollOnStartTo: can't scroll to sliderType: {0} section: {1}"*/);
                    /* try { // try from 03400638 to 0350063b has its CatchHandler @ 0340064c */
    DAT_04567717 = 1;
  }
  HIIGJGLEOFH = BKBFFEJEBAI__PPGMDDODKFG(HONPNKFABKF,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03400638 with catch @ 0340064c */
                    /* try { // try from 03400654 to 035006c7 has its CatchHandler @ 03400724 */
  x = Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__GetButtonBySection
                ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,HIIGJGLEOFH,
                 Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_GetButtonBySection__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((x != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) &&
       (__this_00 = (UnityEngine_Events_UnityEvent_o *)(x->fields).super.super.super.m_OnClick,
       __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
      UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  else {
                    /* catch() { ... } // from try @ 034004d0 with catch @ 034006c8
                       try { // try from 034006c8 to 035006d7 has its CatchHandler @ 034000a4 */
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
    local_34 = HONPNKFABKF;
                    /* try { // try from 034006d8 to 035006db has its CatchHandler @ 03400700 */
                    /* try { // try from 034006dc to 03500707 has its CatchHandler @ 034000a4 */
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(HPPDIEDAKEC_TypeInfo,&local_34);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_034007b4:
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
                    /* catch() { ... } // from try @ 034006d8 with catch @ 03400700 */
      if ((int)args->max_length != 0) {
                    /* try { // try from 03400708 to 0350070f has its CatchHandler @ 03400724 */
        args->m_Items[0] = pIVar2;
                    /* try { // try from 03400710 to 0350071b has its CatchHandler @ 034000a4 */
        thunk_FUN_01c20e04(args->m_Items,pIVar2);
                    /* try { // try from 0340071c to 03500723 has its CatchHandler @ 03400724 */
        local_38 = HIIGJGLEOFH;
                    /* catch() { ... } // from try @ 03400654 with catch @ 03400724
                       catch() { ... } // from try @ 03400708 with catch @ 03400724
                       catch() { ... } // from try @ 0340071c with catch @ 03400724 */
                    /* try { // try from 03400728 to 03500807 has its CatchHandler @ 03400728
                       catch() { ... } // from try @ 03400728 with catch @ 03400728
                       catch() { ... } // from try @ 03400ac8 with catch @ 03400728
                       catch() { ... } // from try @ 03400bf8 with catch @ 03400728
                       catch() { ... } // from try @ 03400cf8 with catch @ 03400728
                       catch() { ... } // from try @ 03400d28 with catch @ 03400728
                       catch() { ... } // from try @ 03400da4 with catch @ 03400728 */
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(POIJDKLHHKO_TypeInfo,&local_38);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        goto LAB_034007b4;
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_12003/*"ShopBottomPanel::ScrollOnStartTo: can't scroll to sliderType: {0} section: {1}"*/,args,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override MGNDHCBAPEN<string, string> ACJPCPPOACJ(POIJDKLHHKO HIIGJGLEOFH)  [RVA 0x33007C0]
// Nekki.SF2.GUI.Shop.ShopBottomPanel$$ACJPCPPOACJ @ RVA 0x33007C0

MGNDHCBAPEN_string__string__o *
Nekki_SF2_GUI_Shop_ShopBottomPanel__ACJPCPPOACJ
          (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,int32_t HIIGJGLEOFH,MethodInfo *method)

{
  MGNDHCBAPEN_string__string__o *__this_00;
  undefined8 *puVar1;
  
  if ((DAT_04567718 & 1) == 0) {
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_string>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_string>_TypeInfo);
    FUN_01bab630(&StringLiteral_12018/*"ShopButtons2.Payment_active"*/);
    FUN_01bab630(&StringLiteral_12014/*"ShopButtons1.Weapon_active"*/);
                    /* try { // try from 03400808 to 0350080b has its CatchHandler @ 03400c04 */
                    /* try { // try from 0340080c to 03500813 has its CatchHandler @ 03400c14 */
    FUN_01bab630(&StringLiteral_12016/*"ShopButtons2.Free_active"*/);
    FUN_01bab630(&StringLiteral_12012/*"ShopButtons1.Ranged_weapon_active"*/);
                    /* try { // try from 03400820 to 0350084b has its CatchHandler @ 03400c24 */
    FUN_01bab630(&StringLiteral_12006/*"ShopButtons1.Armor_active"*/);
    FUN_01bab630(&StringLiteral_12010/*"ShopButtons1.Magic_active"*/);
    FUN_01bab630(&StringLiteral_12020/*"ShopButtons2.meshok_1"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_12008/*"ShopButtons1.Helmet_active"*/);
    DAT_04567718 = 1;
  }
  if ((uint)HIIGJGLEOFH < 8) {
                    /* try { // try from 0340086c to 0350086f has its CatchHandler @ 03400c20 */
    puVar1 = (undefined8 *)(&PTR_StringLiteral_12014/*"ShopButtons1.Weapon_active"*/_03fc6670)[HIIGJGLEOFH];
                    /* try { // try from 0340088c to 0350088f has its CatchHandler @ 03400c1c */
    __this_00 = (MGNDHCBAPEN_string__string__o *)
                thunk_FUN_01bda818(MGNDHCBAPEN<string,_string>_TypeInfo);
                    /* try { // try from 034008a0 to 035008a3 has its CatchHandler @ 03400c18 */
    MGNDHCBAPEN<object,_object>___ctor
              ((MGNDHCBAPEN_T1__T2__o *)__this_00,StringLiteral_14092/*"UI/Atlases/"*/,(Il2CppObject *)*puVar1,
               Method_MGNDHCBAPEN<string,_string>__ctor__);
  }
  else {
                    /* try { // try from 034008b0 to 035008b3 has its CatchHandler @ 03400c0c */
    __this_00 = (MGNDHCBAPEN_string__string__o *)0x0;
  }
  return __this_00;
}

