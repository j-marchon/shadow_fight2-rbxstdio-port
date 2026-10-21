// TypeDefIndex 2620
// Namespace: 
// public class RaidPlayerEquipmentImage : MonoBehaviour
// Fields:
//   private const string BMPNGBJFINC = "UI/Items/";
//   private const string PPJGOCDDBLP = "hintItemIsUnknown";
//   private ResolutionImage _image; // 0x20
//   private PerksPanel _perks; // 0x28
//   private SFButton _button; // 0x30
//   private GameObject _hintPrefab; // 0x38
//   private Vector2 _hintOffset; // 0x40
//   private float _arrowOffsetX; // 0x48
//   private Sprite _defaultSprite; // 0x50
//   private HOOAAGABMBL POBPDIIEOMG; // 0x58

// ===== private void OnEnable()  [RVA 0x33B01AC]
// RaidPlayerEquipmentImage$$OnEnable @ RVA 0x33B01AC

void RaidPlayerEquipmentImage__OnEnable(RaidPlayerEquipmentImage_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  SFButton_o *pSVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04567d44 & 1) == 0) {
    FUN_01bab630(&Method_RaidPlayerEquipmentImage_NIAAAOEHCDD__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567d44 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields)._button;
  if (pSVar1 != (SFButton_o *)0x0) {
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pSVar1->fields).super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33B023C]
// RaidPlayerEquipmentImage$$.ctor @ RVA 0x33B023C

void RaidPlayerEquipmentImage___ctor(RaidPlayerEquipmentImage_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void NIAAAOEHCDD()  [RVA 0x33B0244]
// RaidPlayerEquipmentImage$$NIAAAOEHCDD @ RVA 0x33B0244

void RaidPlayerEquipmentImage__NIAAAOEHCDD(RaidPlayerEquipmentImage_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  System_String_o *DIHAKADKIKM;
  HOOAAGABMBL_o *pHVar4;
  SFButton_o *__this_02;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Vector3_array *x;
  UnityEngine_Object_o *y;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o HHPABFGHALF;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567d47 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_18784/*"hintItemIsUnknown"*/);
    DAT_04567d47 = 1;
  }
  pHVar4 = (__this->fields).POBPDIIEOMG;
  if ((pHVar4 == (HOOAAGABMBL_o *)0x0) ||
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                        ((pHVar4->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0), bVar1)) {
    return;
  }
  DKIDCBPNMPD = (__this->fields)._hintPrefab;
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    __this_02 = (__this->fields)._button;
    if ((__this_02 != (SFButton_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UVar7 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      HHPABFGHALF.fields.z = UVar7.fields.z + 0.0;
      HHPABFGHALF.fields.x = UVar7.fields.x + (__this->fields)._hintOffset.fields.x;
      HHPABFGHALF.fields.y = UVar7.fields.y + (__this->fields)._hintOffset.fields.y;
      __this_01 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                            (DKIDCBPNMPD,pUVar2,HHPABFGHALF,10.0,-1.0,-1.0,(MethodInfo *)0x0);
      if ((__this_01 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) &&
         ((pNVar3 = (__this_01->fields).super._Arrow,
          pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0 &&
          (pUVar2 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
          pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
        UVar7 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
        if (DAT_0455fffd == '\0') {
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
          DAT_0455fffd = '\x01';
        }
        fVar6 = (__this->fields)._arrowOffsetX;
        pUVar5 = UnityEngine_Vector3_TypeInfo->static_fields;
        value.fields.x = UVar7.fields.x + (pUVar5->rightVector).fields.x * fVar6;
        value.fields.y = UVar7.fields.y + (pUVar5->rightVector).fields.y * fVar6;
        value.fields.z = UVar7.fields.z + (pUVar5->rightVector).fields.z * fVar6;
        UnityEngine_Transform__set_position(pUVar2,value,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._image;
        if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          x = (pNVar3->fields).super.super.m_Corners;
          y = (UnityEngine_Object_o *)(__this->fields)._defaultSprite;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x,y,(MethodInfo *)0x0);
          DIHAKADKIKM = StringLiteral_18784/*"hintItemIsUnknown"*/;
          if (!bVar1) {
            pHVar4 = (__this->fields).POBPDIIEOMG;
            if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_034b0438;
            DIHAKADKIKM = (pHVar4->fields)._COIPKAKHDFP_k__BackingField;
          }
          Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias(__this_01,DIHAKADKIKM,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034b0438:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AMKNLFPFLPK(PerkUI KNLOLPGHDEG)  [RVA 0x33B043C]
// RaidPlayerEquipmentImage$$AMKNLFPFLPK @ RVA 0x33B043C

void RaidPlayerEquipmentImage__AMKNLFPFLPK
               (RaidPlayerEquipmentImage_o *__this,Nekki_SF2_GUI_Common_PerkUI_o *KNLOLPGHDEG,
               MethodInfo *method)

{
  bool bVar1;
  KBCOFHAJOCK_o *__this_00;
  PLCCJCFAFKA_o *__this_01;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  UnityEngine_Transform_o *__this_02;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_03;
  HHKELHDGPDO_o *IMMNELPBGIF;
  DOPEEDABNEK_o *pDVar2;
  Nekki_SF2_GUI_Shop_PerksPanel_o *pNVar3;
  HEFOANCOHDC_o *pHVar4;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o HHPABFGHALF;
  
                    /* try { // try from 034b0448 to 035b044f has its CatchHandler @ 034b1c7c */
                    /* try { // try from 034b0458 to 035b045f has its CatchHandler @ 034b1c64 */
                    /* try { // try from 034b0460 to 035b046b has its CatchHandler @ 034b1c78 */
  if ((DAT_04567d45 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567d45 = 1;
  }
                    /* try { // try from 034b0480 to 035b0487 has its CatchHandler @ 034b1c4c */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034b0490 to 035b0497 has its CatchHandler @ 034b1c70 */
  if (DAT_04563eaa == '\0') {
                    /* try { // try from 034b0498 to 035b04a3 has its CatchHandler @ 034b1c74 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034b04b4 to 035b04bb has its CatchHandler @ 034b1c48 */
    thunk_FUN_01ba7564();
  }
  pDVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                    /* try { // try from 034b04c4 to 035b04cb has its CatchHandler @ 034b1c6c */
                    /* try { // try from 034b04cc to 035b04d7 has its CatchHandler @ 034b1c44 */
  if ((((pDVar2 != (DOPEEDABNEK_o *)0x0) && (KNLOLPGHDEG != (Nekki_SF2_GUI_Common_PerkUI_o *)0x0))
      && (pHVar4 = (KNLOLPGHDEG->fields).OFLJEENFLDG, pHVar4 != (HEFOANCOHDC_o *)0x0)) &&
     (__this_00 = (pDVar2->fields)._GMODBKFPHPN_k__BackingField, __this_00 != (KBCOFHAJOCK_o *)0x0))
  {
    __this_01 = KBCOFHAJOCK__JHDDCDEENAK(__this_00,(pHVar4->fields).AKBDHOEGNNG,(MethodInfo *)0x0);
    if ((__this_01 == (PLCCJCFAFKA_o *)0x0) ||
       (bVar1 = PLCCJCFAFKA__PKMBANJNKBC(__this_01,(MethodInfo *)0x0), bVar1)) {
      DKIDCBPNMPD = (__this->fields)._hintPrefab;
      HOKHHGFLMNA = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)KNLOLPGHDEG,(MethodInfo *)0x0);
      __this_02 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)KNLOLPGHDEG,(MethodInfo *)0x0);
                    /* try { // try from 034b051c to 035b053f has its CatchHandler @ 034b1c5c */
      if (__this_02 != (UnityEngine_Transform_o *)0x0) {
        UVar5 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._perks;
        if (pNVar3 != (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0) {
          HHPABFGHALF.fields.z = UVar5.fields.z + 0.0;
                    /* try { // try from 034b0540 to 035b067b has its CatchHandler @ 034afe4c */
          HHPABFGHALF.fields.x = UVar5.fields.x + (pNVar3->fields)._HintOffset.fields.x;
          HHPABFGHALF.fields.y = UVar5.fields.y + (pNVar3->fields)._HintOffset.fields.y;
          __this_03 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                                (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,10.0,-1.0,-1.0,
                                 (MethodInfo *)0x0);
          pHVar4 = (KNLOLPGHDEG->fields).OFLJEENFLDG;
          if ((pHVar4 != (HEFOANCOHDC_o *)0x0) &&
             (__this_03 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0)) {
            Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias
                      (__this_03,(pHVar4->fields).JMGIACHBIKG,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      IMMNELPBGIF = JJPNLEPEAFM__IIAPLAPOCGL
                              ((PLCCJCFAFKA_o *)0x0,(KNLOLPGHDEG->fields).OFLJEENFLDG,
                               (MethodInfo *)0x0);
      if (IMMNELPBGIF != (HHKELHDGPDO_o *)0x0) {
        (IMMNELPBGIF->fields).BPCADJLKKGA = (__this_01->fields).PEKGAFPPFLP;
        thunk_FUN_01c20e04();
        GCIFMNHADDF__ACDDKABEBAP(0x50,(Il2CppObject *)IMMNELPBGIF,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDisable()  [RVA 0x33B05C8]
// RaidPlayerEquipmentImage$$OnDisable @ RVA 0x33B05C8

void RaidPlayerEquipmentImage__OnDisable(RaidPlayerEquipmentImage_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  SFButton_o *pSVar1;
  
  pSVar1 = (__this->fields)._button;
  if ((pSVar1 != (SFButton_o *)0x0) &&
     (__this_00 = (pSVar1->fields).super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Refresh(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x33B05EC]
// RaidPlayerEquipmentImage$$Refresh @ RVA 0x33B05EC

/* WARNING: Removing unreachable block (ram,0x034b0ae0) */

void RaidPlayerEquipmentImage__Refresh
               (RaidPlayerEquipmentImage_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  ushort uVar1;
  undefined4 uVar2;
  bool bVar3;
  ACHLOMELAJE_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  Nekki_SF2_GUI_Shop_PerksPanel_o *pNVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  Il2CppObject *pIVar9;
  Il2CppClass *pIVar10;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Events_UnityEventBase_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  HOOAAGABMBL_o *pHVar11;
  System_Collections_Generic_List_PerkUI__c *pSVar12;
  long lVar13;
  ulong uVar14;
  int32_t *piVar15;
  int *piVar16;
  System_Collections_Generic_List_PerkUI__o *pSVar17;
  HOOAAGABMBL_o **ppHVar18;
  UnityEngine_Events_UnityEvent_o *__this_03;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567d46 & 1) == 0) {
    FUN_01bab630(&Method_RaidPlayerEquipmentImage_CFCCJADBBCC_EMIBONAICHD__);
    FUN_01bab630(&RaidPlayerEquipmentImage_CFCCJADBBCC_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<PerkUI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<PerkUI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 034b067c to 035b06a3 has its CatchHandler @ 034b1fd0 */
    FUN_01bab630(&StringLiteral_14100/*"UI/Items/"*/);
    DAT_04567d46 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  ppHVar18 = &(__this->fields).POBPDIIEOMG;
  *ppHVar18 = IKKAMAMLIKA;
  thunk_FUN_01c20e04(ppHVar18,IKKAMAMLIKA);
  if (*ppHVar18 == (HOOAAGABMBL_o *)0x0) goto LAB_034b0ad8;
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                    (((*ppHVar18)->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
  if (bVar3) {
LAB_034b0728:
    pNVar4 = (__this->fields)._image;
    if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_034b0ad8;
                    /* try { // try from 034b0738 to 035b0743 has its CatchHandler @ 034b1d60 */
    UnityEngine_UI_Image__set_sprite
              ((UnityEngine_UI_Image_o *)pNVar4,(__this->fields)._defaultSprite,(MethodInfo *)0x0);
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034b06d8 to 035b0703 has its CatchHandler @ 034b1e58 */
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_034b0ad8;
    bVar3 = ACHLOMELAJE__NIEKNLDMABC
                      (__this_00,(IKKAMAMLIKA->fields)._ILMMODKJGFK_k__BackingField,
                       (MethodInfo *)0x0);
    if (bVar3) goto LAB_034b0728;
    pNVar4 = (__this->fields)._image;
    if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_034b0ad8;
                    /* try { // try from 034b074c to 035b075b has its CatchHandler @ 034b1d5c */
    uVar2 = StringLiteral_14100/*"UI/Items/"*/._4_4_;
    (pNVar4->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14100/*"UI/Items/"*/;
    (pNVar4->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar2;
    thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
    pHVar11 = (__this->fields).POBPDIIEOMG;
                    /* try { // try from 034b076c to 035b0773 has its CatchHandler @ 034b1b78 */
    if ((pHVar11 == (HOOAAGABMBL_o *)0x0) ||
       (pNVar4 = (__this->fields)._image, pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
    goto LAB_034b0ad8;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              (pNVar4,(pHVar11->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
  }
                    /* try { // try from 034b077c to 035b0783 has its CatchHandler @ 034b1b50 */
  pNVar4 = (__this->fields)._image;
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 034b0784 to 035b078f has its CatchHandler @ 034b1b74 */
    (*(pNVar4->klass->vtable)._45_SetNativeSize.methodPtr)
              (pNVar4,(pNVar4->klass->vtable)._45_SetNativeSize.method);
    pNVar5 = (__this->fields)._perks;
    if (pNVar5 != (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0) {
                    /* try { // try from 034b07a4 to 035b07ab has its CatchHandler @ 034b1b4c */
      (*(pNVar5->klass->vtable)._4_SetPerks.methodPtr)
                (pNVar5,(IKKAMAMLIKA->fields)._GNJCCLBLPLO_k__BackingField,IKKAMAMLIKA,
                 (pNVar5->klass->vtable)._4_SetPerks.method);
      pNVar5 = (__this->fields)._perks;
                    /* try { // try from 034b07b4 to 035b07bb has its CatchHandler @ 034b1b68 */
                    /* try { // try from 034b07bc to 035b07c7 has its CatchHandler @ 034b1b54 */
      if ((pNVar5 != (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0) &&
         (pSVar17 = (pNVar5->fields).LLMOAIMNMHM,
         pSVar17 != (System_Collections_Generic_List_PerkUI__o *)0x0)) {
        pSVar12 = pSVar17->klass;
        uVar1._0_1_ = (pSVar12->_2).rank;
        uVar1._1_1_ = (pSVar12->_2).minimumAlignment;
        uVar14 = (ulong)uVar1;
        if (uVar14 != 0) {
                    /* try { // try from 034b07dc to 035b07e3 has its CatchHandler @ 034b1b58 */
          piVar15 = &((pSVar12->_1).interfaceOffsets)->offset;
          do {
                    /* try { // try from 034b07e4 to 035b0907 has its CatchHandler @ 034afe4c */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IEnumerable<PerkUI>_TypeInfo) {
              pVVar6 = &(pSVar12->vtable)._0_Equals + *piVar15;
              goto LAB_034b0814;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        pVVar6 = (VirtualInvokeData *)
                 FUN_01b81914(pSVar17,System_Collections_Generic_IEnumerable<PerkUI>_TypeInfo,0);
LAB_034b0814:
        plVar7 = (long *)(*pVVar6->methodPtr)(pSVar17,pVVar6->method);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar13 = *plVar7;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_034b08a0;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_034b08a0:
          uVar14 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if ((uVar14 & 1) == 0) {
            if (plVar7 == (long *)0x0) {
              return;
            }
            lVar13 = *plVar7;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 == 0) goto LAB_034b0a64;
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_034b0a4c;
          }
          pIVar9 = (Il2CppObject *)thunk_FUN_01bda818(RaidPlayerEquipmentImage_CFCCJADBBCC_TypeInfo)
          ;
          System_Object___ctor(pIVar9,(MethodInfo *)0x0);
          if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar9[1].monitor = __this;
          thunk_FUN_01c20e04(&pIVar9[1].monitor,__this);
          lVar13 = *plVar7;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
                    /* try { // try from 034b0908 to 035b092f has its CatchHandler @ 034b1e5c */
              if (*(System_Collections_Generic_IEnumerator_PerkUI__c **)(piVar16 + -2) ==
                  System_Collections_Generic_IEnumerator<PerkUI>_TypeInfo) {
                puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_034b0934;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_01b81914(plVar7,System_Collections_Generic_IEnumerator<PerkUI>_TypeInfo,0);
LAB_034b0934:
          pIVar10 = (Il2CppClass *)(*(code *)*puVar8)(plVar7,puVar8[1]);
          pIVar9 = pIVar9 + 1;
          pIVar9->klass = pIVar10;
          thunk_FUN_01c20e04(pIVar9);
          if (pIVar9->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pIVar9->klass,(MethodInfo *)0x0);
                    /* try { // try from 034b0964 to 035b098f has its CatchHandler @ 034b1e50 */
          if (DAT_0455fa7e == '\0') {
            FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
            DAT_0455fa7e = '\x01';
          }
          if (__this_01 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          value.fields.y = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.y * 0.85;
          value.fields.x = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.x * 0.85;
          value.fields.z = 0.0;
          UnityEngine_Transform__set_localScale(__this_01,value,(MethodInfo *)0x0);
          if (pIVar9->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          lVar13 = *(long *)&(pIVar9->klass->_1).byval_arg.bits;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_02 = *(UnityEngine_Events_UnityEventBase_o **)(lVar13 + 0x100);
          if (__this_02 == (UnityEngine_Events_UnityEventBase_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034b0ac4 to 035b0acb has its CatchHandler @ 034b1af0 */
            FUN_01bab8c8();
          }
                    /* try { // try from 034b09c4 to 035b09cf has its CatchHandler @ 034b1d4c */
          UnityEngine_Events_UnityEventBase__RemoveAllListeners(__this_02,(MethodInfo *)0x0);
          if (pIVar9->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          lVar13 = *(long *)&(pIVar9->klass->_1).byval_arg.bits;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_03 = *(UnityEngine_Events_UnityEvent_o **)(lVar13 + 0x100);
                    /* try { // try from 034b09e0 to 035b09ef has its CatchHandler @ 034b1d48 */
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_03 == (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 034b0a00 to 035b0a07 has its CatchHandler @ 034b1b1c */
          UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
          if (pIVar9->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 034b0a18 to 035b0a1f has its CatchHandler @ 034b1af8 */
          Nekki_SF2_GUI_Common_PerkUI__set_Alpha
                    ((Nekki_SF2_GUI_Common_PerkUI_o *)pIVar9->klass,1.0,(MethodInfo *)0x0);
                    /* try { // try from 034b0a20 to 035b0a43 has its CatchHandler @ 034b1d44 */
        } while( true );
      }
    }
  }
LAB_034b0ad8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034b0ad8 to 035b0ae3 has its CatchHandler @ 034b1aa4 */
  FUN_01bab8c8();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_034b0a4c:
                    /* try { // try from 034b0a50 to 035b0a57 has its CatchHandler @ 034b1b18 */
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_034b0a80;
    }
  }
LAB_034b0a64:
                    /* try { // try from 034b0a68 to 035b0a6f has its CatchHandler @ 034b1ae4 */
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
                    /* try { // try from 034b0a70 to 035b0a7b has its CatchHandler @ 034b1ae8 */
LAB_034b0a80:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
                    /* try { // try from 034b0aa4 to 035b0aab has its CatchHandler @ 034b1b10 */
                    /* try { // try from 034b0aac to 035b0ab7 has its CatchHandler @ 034b1b14 */
  return;
}


// ===== private void BBBEDNJCFMB()  [RVA 0x33B0248]
// RaidPlayerEquipmentImage$$BBBEDNJCFMB @ RVA 0x33B0248

void RaidPlayerEquipmentImage__BBBEDNJCFMB(RaidPlayerEquipmentImage_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  System_String_o *DIHAKADKIKM;
  HOOAAGABMBL_o *pHVar4;
  SFButton_o *__this_02;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Vector3_array *x;
  UnityEngine_Object_o *y;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o HHPABFGHALF;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567d47 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_18784/*"hintItemIsUnknown"*/);
    DAT_04567d47 = 1;
  }
  pHVar4 = (__this->fields).POBPDIIEOMG;
  if ((pHVar4 == (HOOAAGABMBL_o *)0x0) ||
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                        ((pHVar4->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0), bVar1)) {
    return;
  }
  DKIDCBPNMPD = (__this->fields)._hintPrefab;
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    __this_02 = (__this->fields)._button;
    if ((__this_02 != (SFButton_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UVar7 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      HHPABFGHALF.fields.z = UVar7.fields.z + 0.0;
      HHPABFGHALF.fields.x = UVar7.fields.x + (__this->fields)._hintOffset.fields.x;
      HHPABFGHALF.fields.y = UVar7.fields.y + (__this->fields)._hintOffset.fields.y;
      __this_01 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                            (DKIDCBPNMPD,pUVar2,HHPABFGHALF,10.0,-1.0,-1.0,(MethodInfo *)0x0);
      if ((__this_01 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) &&
         ((pNVar3 = (__this_01->fields).super._Arrow,
          pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0 &&
          (pUVar2 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
          pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
        UVar7 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
                    /* try { // try from 034b0358 to 035b037f has its CatchHandler @ 034b208c */
        if (DAT_0455fffd == '\0') {
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
          DAT_0455fffd = '\x01';
        }
        fVar6 = (__this->fields)._arrowOffsetX;
        pUVar5 = UnityEngine_Vector3_TypeInfo->static_fields;
        value.fields.x = UVar7.fields.x + (pUVar5->rightVector).fields.x * fVar6;
                    /* try { // try from 034b03b4 to 035b03df has its CatchHandler @ 034b2088 */
        value.fields.y = UVar7.fields.y + (pUVar5->rightVector).fields.y * fVar6;
        value.fields.z = UVar7.fields.z + (pUVar5->rightVector).fields.z * fVar6;
        UnityEngine_Transform__set_position(pUVar2,value,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._image;
        if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          x = (pNVar3->fields).super.super.m_Corners;
          y = (UnityEngine_Object_o *)(__this->fields)._defaultSprite;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x,y,(MethodInfo *)0x0);
          DIHAKADKIKM = StringLiteral_18784/*"hintItemIsUnknown"*/;
          if (!bVar1) {
            pHVar4 = (__this->fields).POBPDIIEOMG;
            if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_034b0438;
                    /* try { // try from 034b0414 to 035b041f has its CatchHandler @ 034b1e4c */
            DIHAKADKIKM = (pHVar4->fields)._COIPKAKHDFP_k__BackingField;
          }
                    /* try { // try from 034b0428 to 035b0437 has its CatchHandler @ 034b1e48 */
          Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias(__this_01,DIHAKADKIKM,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034b0438:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

