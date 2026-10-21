// TypeDefIndex 1465
// Namespace: Nekki.SF2.GUI.Shop
// public class ShopTableViewCell : TableViewCell, IComparable<ShopTableViewCell>
// Fields:
//   private string CNMMJHJNNAJ; // 0x40
//   private CanvasGroup _contentCanvasGroup; // 0x48
//   private ResolutionImage _lockIcon; // 0x50
//   private ResolutionImage _jackdawIcon; // 0x58
//   private ResolutionImage _equppiedIcon; // 0x60
//   private LabelAlias _levelLabel; // 0x68
//   private ResolutionImage _discountRootImage; // 0x70
//   private LabelAlias _discountLabel; // 0x78
//   private ResolutionImage _addPercentRootImage; // 0x80
//   private LabelAlias _addPercentLabel; // 0x88
//   private ResolutionImage _image; // 0x90
//   private CompositeImage _compositeImage; // 0x98
//   private CanvasGroup _CanvasGroup; // 0xA0
//   private PerksPanel _perksPanel; // 0xA8
//   public LabelAlias TicketLabel; // 0xB0
//   private LayoutElement _iconPanel; // 0xB8
//   private LayoutElement _layoutElement; // 0xC0
//   private TutorialNode _TutorialNode; // 0xC8
//   private Vector2 <DJOIAMEIMOG>k__BackingField; // 0xD0
//   private Vector3 MEJOIGLLBGO; // 0xD8
//   private bool APKJCMHJOPB; // 0xE4
//   private Vector3 BLIEELLLKIP; // 0xE8
//   private bool IJHMEPALLGA; // 0xF4
//   public float MaxAllowedSize; // 0xF8
//   private float <BFMLDOLAEKH>k__BackingField; // 0xFC
//   private HOOAAGABMBL IHKJJFAEEHM; // 0x100
//   private float LEBAHKCLDFJ; // 0x108

// ===== public float get_InactiveOpacity()  [RVA 0x3190098]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$get_InactiveOpacity @ RVA 0x3190098

float Nekki_SF2_GUI_Shop_ShopTableViewCell__get_InactiveOpacity
                (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  return (__this->fields)._BFMLDOLAEKH_k__BackingField;
}


// ===== public override void ProbabilityCheck()  [RVA 0x31900A0]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$ProbabilityCheck @ RVA 0x31900A0

void Nekki_SF2_GUI_Shop_ShopTableViewCell__ProbabilityCheck
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_c *pNVar2;
  HOOAAGABMBL_c *LMMIEAICFHL;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar3;
  HOOAAGABMBL_o *pHVar4;
  Il2CppClass **ppIVar5;
  long lVar6;
  
                    /* try { // try from 032900a4 to 033900a7 has its CatchHandler @ 032900d0 */
                    /* try { // try from 032900a8 to 033900df has its CatchHandler @ 0328ffb0 */
  if ((DAT_04566a3c & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
                    /* catch() { ... } // from try @ 032900a4 with catch @ 032900d0 */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 032900e0 to 033900e7 has its CatchHandler @ 032900fc */
    DAT_04566a3c = 1;
  }
                    /* try { // try from 032900e8 to 033900f3 has its CatchHandler @ 0328ffb0 */
  pHVar4 = (__this->fields).IHKJJFAEEHM;
  if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 032900f4 to 033900fb has its CatchHandler @ 032900fc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032900e0 with catch @ 032900fc
                       catch(type#2 @ 00000000) { ... } // from try @ 032900f4 with catch @ 032900fc
                        */
                    /* try { // try from 03290100 to 033901cb has its CatchHandler @ 03290100
                       catch() { ... } // from try @ 03290100 with catch @ 03290100
                       catch() { ... } // from try @ 032901f0 with catch @ 03290100
                       catch() { ... } // from try @ 03290298 with catch @ 03290100
                       catch() { ... } // from try @ 032902e0 with catch @ 03290100
                       catch() { ... } // from try @ 03290368 with catch @ 03290100
                       catch() { ... } // from try @ 032903b0 with catch @ 03290100
                       catch() { ... } // from try @ 032903cc with catch @ 03290100
                       catch() { ... } // from try @ 0329040c with catch @ 03290100 */
    bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pHVar4->klass->_2).naturalAligment) &&
       ((pHVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)FAIJGJCCKJC_TypeInfo))
    {
      LMMIEAICFHL = pHVar4[1].klass;
      if (LMMIEAICFHL != (HOOAAGABMBL_c *)0x0) {
        if (*(char *)&(LMMIEAICFHL->_1).interfaceOffsets == '\0') {
          return;
        }
        pNVar3 = DialogsOpener__FOMGGGJEKEA
                           ((RaidConfig_ENBCJNLAHAC_o *)LMMIEAICFHL,
                            (RaidConfig_ENBCJNLAHAC_o *)0x0,(System_Action_object__o *)0x0,
                            StringLiteral_1/*""*/,StringLiteral_1/*""*/,false,1,2,(System_String_o *)0x0,
                            (System_String_o *)0x0,1,1,false,(MethodInfo *)0x0);
        pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_TypeInfo;
        if (pNVar3 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
          bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_TypeInfo->_2).naturalAligment;
          if (bVar1 <= (pNVar3->klass->_2).naturalAligment) {
            ppIVar5 = (pNVar3->klass->_2).typeHierarchy;
            lVar6 = (ulong)bVar1 - 1;
            if (ppIVar5[lVar6] ==
                (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_TypeInfo) {
              pNVar3[1].fields._btnCancel = (LabelButton_o *)(__this->fields).IHKJJFAEEHM;
                    /* try { // try from 032901cc to 033901d3 has its CatchHandler @ 032903b0 */
              if (ppIVar5[lVar6] != (Il2CppClass *)pNVar2) {
                pNVar3 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
              }
              thunk_FUN_01c20e04(&pNVar3[1].fields._btnCancel);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public Vector3 get_CenterPosition()  [RVA 0x31901E8]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$get_CenterPosition @ RVA 0x31901E8

UnityEngine_Vector3_o
Nekki_SF2_GUI_Shop_ShopTableViewCell__get_CenterPosition
          (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o UVar6;
  float fVar4;
  
                    /* try { // try from 032901e8 to 033901ef has its CatchHandler @ 03290340 */
                    /* try { // try from 032901f0 to 03390273 has its CatchHandler @ 03290100 */
  if ((DAT_04566a3d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566a3d = 1;
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UVar5 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    fVar4 = UVar5.fields.y;
    pNVar3 = (__this->fields)._image;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields)._image;
                    /* try { // try from 03290274 to 0339027b has its CatchHandler @ 0329034c */
      if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_032902b0;
      UVar6 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
      fVar4 = UVar6.fields.y;
    }
                    /* try { // try from 03290290 to 03390297 has its CatchHandler @ 03290348 */
    UVar5.fields.y = fVar4;
                    /* try { // try from 03290298 to 033902d7 has its CatchHandler @ 03290100 */
    return (UnityEngine_Vector3_o)UVar5.fields;
  }
LAB_032902b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31902B4]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$.ctor @ RVA 0x31902B4

void Nekki_SF2_GUI_Shop_ShopTableViewCell___ctor
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a3e & 1) == 0) {
                    /* try { // try from 032902d8 to 033902db has its CatchHandler @ 03290344 */
                    /* try { // try from 032902dc to 033902df has its CatchHandler @ 0329033c */
    FUN_01bab630(&SF2Paths_TypeInfo);
                    /* try { // try from 032902e0 to 03390363 has its CatchHandler @ 03290100 */
    DAT_04566a3e = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo,method);
  }
  pSVar1 = SF2Paths__AAHKIHMHJDP((MethodInfo *)0x0);
  (__this->fields).CNMMJHJNNAJ = pSVar1;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_TableViewCell___ctor((Nekki_SF2_GUI_TableViewCell_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public LayoutElement get_LayoutElement()  [RVA 0x3190324]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$get_LayoutElement @ RVA 0x3190324

UnityEngine_UI_LayoutElement_o *
Nekki_SF2_GUI_Shop_ShopTableViewCell__get_LayoutElement
          (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  return (__this->fields)._layoutElement;
}


// ===== private void CDEPJFBHKID()  [RVA 0x319032C]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$CDEPJFBHKID @ RVA 0x319032C

void Nekki_SF2_GUI_Shop_ShopTableViewCell__CDEPJFBHKID
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar7;
  undefined4 extraout_var;
  float fVar9;
  float fVar10;
  UnityEngine_Vector2_o UVar11;
  ulong uVar8;
  
                    /* catch() { ... } // from try @ 032902dc with catch @ 0329033c */
                    /* catch() { ... } // from try @ 032901e8 with catch @ 03290340 */
                    /* catch() { ... } // from try @ 032902d8 with catch @ 03290344 */
                    /* catch() { ... } // from try @ 03290290 with catch @ 03290348 */
                    /* catch() { ... } // from try @ 03290274 with catch @ 0329034c */
  if ((DAT_04566a3f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03290364 to 03390367 has its CatchHandler @ 0329038c */
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
                    /* try { // try from 03290368 to 0339039b has its CatchHandler @ 03290100 */
    DAT_04566a3f = 1;
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar9 = (__this->fields)._DJOIAMEIMOG_k__BackingField.fields.x;
  uVar8 = (ulong)(uint)fVar9;
  fVar10 = (__this->fields)._DJOIAMEIMOG_k__BackingField.fields.y;
                    /* catch() { ... } // from try @ 03290364 with catch @ 0329038c */
                    /* try { // try from 0329039c to 033903af has its CatchHandler @ 03290420 */
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar4 = __this_00, __this_00->klass != UnityEngine_RectTransform_TypeInfo)) {
LAB_03290524:
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(pUVar4);
  }
                    /* catch() { ... } // from try @ 032901cc with catch @ 032903b0
                       try { // try from 032903b0 to 033903c7 has its CatchHandler @ 03290100 */
  if (fVar9 * fVar9 + fVar10 * fVar10 < 9.9999994e-11) {
    pNVar7 = (__this->fields)._image;
                    /* try { // try from 032903c8 to 033903cb has its CatchHandler @ 032903f4 */
                    /* try { // try from 032903cc to 03390403 has its CatchHandler @ 03290100 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar3) {
      pNVar7 = (__this->fields)._image;
                    /* catch() { ... } // from try @ 032903c8 with catch @ 032903f4 */
      if ((pNVar7 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar4 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0329051c;
                    /* try { // try from 03290404 to 0339040b has its CatchHandler @ 03290420 */
                    /* try { // try from 0329040c to 03390417 has its CatchHandler @ 03290100 */
      if (pUVar4->klass != UnityEngine_RectTransform_TypeInfo) goto LAB_03290524;
      UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
      fVar10 = UVar11.fields.y;
      uVar8 = CONCAT44(extraout_var,UVar11.fields.x);
                    /* try { // try from 03290418 to 0339041f has its CatchHandler @ 03290420 */
    }
  }
                    /* catch() { ... } // from try @ 0329039c with catch @ 03290420
                       catch() { ... } // from try @ 03290404 with catch @ 03290420
                       catch() { ... } // from try @ 03290418 with catch @ 03290420 */
  pUVar5 = (__this->fields)._iconPanel;
  if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    fVar9 = (__this->fields).LEBAHKCLDFJ;
    pUVar6 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
      fVar10 = fVar10 + fVar9;
      bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
      if (bVar3) {
        pUVar5 = (__this->fields)._iconPanel;
        if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto LAB_0329051c;
        fVar9 = (float)(*(pUVar5->klass->vtable)._33_get_minHeight.methodPtr)
                                 (pUVar5,(pUVar5->klass->vtable)._33_get_minHeight.method);
        fVar10 = fVar10 + fVar9;
      }
      pNVar7 = (__this->fields)._addPercentRootImage;
      if ((pNVar7 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
        bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
        if (bVar3) {
          pNVar7 = (__this->fields)._addPercentRootImage;
          if ((pNVar7 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
             (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pNVar7,(MethodInfo *)0x0),
             pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0329051c;
          UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
          fVar10 = fVar10 + UVar11.fields.y;
        }
        fVar9 = (__this->fields).MaxAllowedSize;
        pUVar5 = (__this->fields)._layoutElement;
        bVar3 = false;
        bVar1 = true;
        bVar2 = false;
        if (fVar9 < fVar10) {
          bVar3 = false;
          bVar1 = false;
          bVar2 = true;
          if (!NAN(fVar9)) {
            bVar3 = fVar9 < 0.0;
            bVar1 = fVar9 == 0.0;
            bVar2 = false;
          }
        }
        if (bVar1 || bVar3 != bVar2) {
          fVar9 = fVar10;
        }
        if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar5->klass->vtable)._32_set_minWidth.methodPtr)
                    (uVar8,pUVar5,(pUVar5->klass->vtable)._32_set_minWidth.method);
          pUVar5 = (__this->fields)._layoutElement;
          if ((pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) &&
             ((*(pUVar5->klass->vtable)._34_set_minHeight.methodPtr)
                        ((ulong)(uint)fVar9,pUVar5,(pUVar5->klass->vtable)._34_set_minHeight.method)
             , __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar11.fields.x = (float)uVar8;
            UVar11.fields.y = fVar9;
            UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar11,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0329051c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_BaseSize(Vector2 CJNHFNHJHPE)  [RVA 0x3190528]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$set_BaseSize @ RVA 0x3190528

void Nekki_SF2_GUI_Shop_ShopTableViewCell__set_BaseSize
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._DJOIAMEIMOG_k__BackingField.fields.x = CJNHFNHJHPE.fields.x;
  (__this->fields)._DJOIAMEIMOG_k__BackingField.fields.y = CJNHFNHJHPE.fields.y;
  return;
}


// ===== public HOOAAGABMBL get_ItemInfo()  [RVA 0x3190530]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$get_ItemInfo @ RVA 0x3190530

HOOAAGABMBL_o *
Nekki_SF2_GUI_Shop_ShopTableViewCell__get_ItemInfo
          (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  return (__this->fields).IHKJJFAEEHM;
}


// ===== private void CDLEAKKGPKD(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x3190538]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$CDLEAKKGPKD @ RVA 0x3190538

void Nekki_SF2_GUI_Shop_ShopTableViewCell__CDLEAKKGPKD
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_RectTransform_o *pUVar3;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector3_o UVar6;
  
  if ((DAT_04566a40 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    DAT_04566a40 = 1;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                       (MethodInfo *)0x0);
    fVar4 = 0.0;
    if (!bVar1) {
      pNVar2 = (__this->fields).TicketLabel;
      if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_03290624;
      UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
      fVar4 = UVar5.fields.y;
    }
    if ((__this->fields).IJHMEPALLGA == false) {
      pNVar2 = (__this->fields).TicketLabel;
      if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_03290624;
      UVar6 = UnityEngine_Transform__get_localPosition
                        ((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
      (__this->fields).BLIEELLLKIP.fields.x = UVar6.fields.x;
      (__this->fields).BLIEELLLKIP.fields.y = UVar6.fields.y;
      (__this->fields).BLIEELLLKIP.fields.z = UVar6.fields.z;
      (__this->fields).IJHMEPALLGA = true;
    }
    pNVar2 = (__this->fields).TicketLabel;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar6.fields.z = (__this->fields).BLIEELLLKIP.fields.z + 0.0;
      UVar6.fields.y = fVar4 + (__this->fields).BLIEELLLKIP.fields.y;
      UVar6.fields.x = (__this->fields).BLIEELLLKIP.fields.x + 0.0;
      UnityEngine_Transform__set_localPosition
                ((UnityEngine_Transform_o *)pUVar3,UVar6,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03290624:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector2 get_BaseSize()  [RVA 0x3190628]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$get_BaseSize @ RVA 0x3190628

UnityEngine_Vector2_o
Nekki_SF2_GUI_Shop_ShopTableViewCell__get_BaseSize
          (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._DJOIAMEIMOG_k__BackingField.fields;
}


// ===== public void SetItemInfo(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x3190630]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$SetItemInfo @ RVA 0x3190630

void Nekki_SF2_GUI_Shop_ShopTableViewCell__SetItemInfo
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar6;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *__this_02;
  HOOAAGABMBL_o *pHVar7;
  HOOAAGABMBL_o *pHVar8;
  DDMHMABAHHD_o *pDVar9;
  RaidConfig_o *pJVar10;
  RaidConfig_EFAJBOEHPLJ_o *pJVar11;
  RaidConfig_HJLEKMDIDPO_o *pJVar12;
  PlayerData_o *__this_03;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar13;
  UnityEngine_GameObject_o *pUVar14;
  Nekki_SF2_GUI_CompositeImage_o *__this_04;
  UnityEngine_RectTransform_o *__this_05;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar15;
  Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA_o *__this_06;
  UnityEngine_Events_UnityAction_bool__bool__o **ppUVar16;
  IGNEHHMICKB_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Roster_o *pAVar17;
  undefined8 *puVar18;
  Nekki_SF2_GUI_LabelAlias_o *pNVar19;
  Nekki_SF2_GUI_Shop_PerksPanel_o *pNVar20;
  UnityEngine_Events_UnityEvent_bool__bool__o *__this_07;
  UnityEngine_Events_UnityAction_bool__bool__o *call;
  int local_68;
  bool local_64 [4];
  bool local_58 [4];
  int32_t local_54;
  
  if ((DAT_04566a41 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopTableViewCell_<>c_MLHFGMCEHLM__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopTableViewCell_<>c_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<bool,_bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool,_bool>_AddListener__);
    FUN_01bab630(&StringLiteral_22052/*"x"*/);
    FUN_01bab630(&StringLiteral_5562/*"EQUIPMENT"*/);
    FUN_01bab630(&StringLiteral_2430/*"<quad name=MiscSprites.star offsety=8 >"*/);
    FUN_01bab630(&StringLiteral_3535/*"Bonus"*/);
    FUN_01bab630(&StringLiteral_12036/*"ShopPieces.MostPopular_red"*/);
    FUN_01bab630(&StringLiteral_11073/*"RealMoneyItem"*/);
    FUN_01bab630(&StringLiteral_3469/*"BestValue"*/);
    FUN_01bab630(&StringLiteral_1223/*"-"*/);
    FUN_01bab630(&StringLiteral_4617/*"Consumable"*/);
    FUN_01bab630(&StringLiteral_4921/*"Currency"*/);
    FUN_01bab630(&StringLiteral_11751/*"Seal"*/);
    FUN_01bab630(&StringLiteral_21001/*"shop_amount"*/);
    FUN_01bab630(&StringLiteral_756/*"%"*/);
    FUN_01bab630(&StringLiteral_12030/*"ShopPieces.BestValue_red"*/);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    FUN_01bab630(&StringLiteral_12032/*"ShopPieces.FreeCoins_red"*/);
    FUN_01bab630(&StringLiteral_20998/*"shopSale"*/);
    FUN_01bab630(&StringLiteral_6589/*"Free"*/);
    FUN_01bab630(&StringLiteral_12039/*"ShopPieces.Stripe"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_14785/*"Video"*/);
    FUN_01bab630(&StringLiteral_12050/*"ShopTableViewCell.SetItemInfo _itemInfo is null"*/);
    FUN_01bab630(&StringLiteral_9206/*"MostPopular"*/);
    FUN_01bab630(&StringLiteral_10075/*"Pack_Tickets"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_12033/*"ShopPieces.FreeGems_red"*/);
    FUN_01bab630(&StringLiteral_12049/*"ShopTableViewCell({0})"*/);
    FUN_01bab630(&StringLiteral_12051/*"ShopTableViewCell.SetItemInfo item is null"*/);
    DAT_04566a41 = 1;
  }
  local_54 = 0;
  local_58[0] = false;
  local_64[0] = false;
  local_68 = 0;
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar18 = &StringLiteral_12051/*"ShopTableViewCell.SetItemInfo item is null"*/;
LAB_03290af0:
    UnityEngine_Debug__LogError((Il2CppObject *)*puVar18,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar6 = System_String__Format
                     (StringLiteral_12049/*"ShopTableViewCell({0})"*/,
                      (Il2CppObject *)(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                      (MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Object_o *)0x0) goto LAB_03291810;
  UnityEngine_Object__set_name(__this_00,pSVar6,(MethodInfo *)0x0);
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
  pAVar17 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar17 == (Roster_o *)0x0) ||
     (__this_01 = (pAVar17->fields).OIDPLCLELEN, __this_01 == (GGHCLMEFIGO_o *)0x0))
  goto LAB_03291810;
  __this_02 = GGHCLMEFIGO__JNFIBDBHNOA(__this_01,IKKAMAMLIKA,(MethodInfo *)0x0);
  pHVar8 = IKKAMAMLIKA;
  if ((__this_02 != (IGFGDDANEPE_o *)0x0) &&
     ((pHVar7 = IGFGDDANEPE__JGBDIHJDIHD(__this_02,(MethodInfo *)0x0),
      pHVar7 != (HOOAAGABMBL_o *)0x0 &&
      (bVar2 = System_String__op_Inequality
                         ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                          (MethodInfo *)0x0), bVar2)))) {
    pHVar8 = IGFGDDANEPE__JGBDIHJDIHD(__this_02,(MethodInfo *)0x0);
  }
  if (__this == (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) goto LAB_03291810;
  (__this->fields).IHKJJFAEEHM = pHVar8;
  thunk_FUN_01c20e04(&(__this->fields).IHKJJFAEEHM);
  if ((__this->fields).IHKJJFAEEHM == (HOOAAGABMBL_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar18 = &StringLiteral_12050/*"ShopTableViewCell.SetItemInfo _itemInfo is null"*/;
    goto LAB_03290af0;
  }
  iVar4 = -1;
  local_54 = -1;
  bVar2 = System_String__op_Equality
                    ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                     (MethodInfo *)0x0);
  if (bVar2) {
    pDVar9 = HCAICJLDDJO__PEENAMDLAKO(IKKAMAMLIKA,(MethodInfo *)0x0);
    if (pDVar9 == (DDMHMABAHHD_o *)0x0) {
      pJVar12 = (RaidConfig_HJLEKMDIDPO_o *)0x0;
    }
    else {
      pSVar6 = (pDVar9->fields)._COIPKAKHDFP_k__BackingField;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      pJVar10 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (pJVar10 == (RaidConfig_o *)0x0) goto LAB_03291810;
      pJVar11 = RaidConfig__BHJOLIJDBLO(pJVar10,pSVar6,(MethodInfo *)0x0);
      pJVar10 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (pJVar10 == (RaidConfig_o *)0x0) goto LAB_03291810;
      pJVar12 = RaidConfig__FPPDGOEOJCH(pJVar10,pSVar6,(MethodInfo *)0x0);
      if ((pJVar11 != (RaidConfig_EFAJBOEHPLJ_o *)0x0) ||
         ((pJVar12 != (RaidConfig_HJLEKMDIDPO_o *)0x0 &&
          (bVar2 = System_String__op_Inequality
                             ((pJVar12->fields).BGHFADDGPAD,StringLiteral_5562/*"EQUIPMENT"*/,(MethodInfo *)0x0),
          bVar2)))) {
        bVar2 = System_String__op_Equality
                          ((IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_10075/*"Pack_Tickets"*/,
                           (MethodInfo *)0x0);
        if (bVar2) {
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
          pAVar17 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar17 == (Roster_o *)0x0) goto LAB_03291810;
          iVar4 = Roster__FCPIAEEKGEL(pAVar17,pSVar6,(MethodInfo *)0x0);
          local_54 = iVar4;
        }
        else {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_03 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (__this_03 == (PlayerData_o *)0x0) goto LAB_03291810;
          iVar4 = PlayerData__OHDDLJKGLGA(__this_03,pSVar6,(MethodInfo *)0x0);
          local_54 = iVar4;
        }
        goto LAB_03290b68;
      }
    }
    iVar4 = -1;
  }
  else {
    pJVar12 = (RaidConfig_HJLEKMDIDPO_o *)0x0;
  }
LAB_03290b68:
  pNVar13 = (__this->fields)._lockIcon;
  if (pNVar13 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar14 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0);
    iVar1 = (IKKAMAMLIKA->fields)._JDEHPJEIOCI_k__BackingField;
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
    pAVar17 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar17 != (Roster_o *)0x0) {
      iVar5 = Roster__EOEAKGGDBFH(pAVar17,(MethodInfo *)0x0);
      if (iVar5 < iVar1) {
        bVar2 = HCAICJLDDJO__MINAKLNNDBL(IKKAMAMLIKA,false,(MethodInfo *)0x0);
        bVar2 = (bool)(~bVar2 & 1);
      }
      else {
        bVar2 = false;
      }
      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar14,bVar2,(MethodInfo *)0x0);
        bVar2 = false;
        if (__this_02 != (IGFGDDANEPE_o *)0x0) {
          bVar2 = System_String__op_Inequality
                            ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_6589/*"Free"*/,
                             (MethodInfo *)0x0);
          if ((((bVar2) &&
               (bVar2 = System_String__op_Inequality
                                  ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                                   StringLiteral_11751/*"Seal"*/,(MethodInfo *)0x0), bVar2)) &&
              (bVar2 = System_String__op_Inequality
                                 ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                                  StringLiteral_4617/*"Consumable"*/,(MethodInfo *)0x0), bVar2)) &&
             (bVar2 = System_String__op_Inequality
                                ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                                 StringLiteral_10823/*"RaidConsumable"*/,(MethodInfo *)0x0), bVar2)) {
            bVar2 = (IKKAMAMLIKA->fields)._NPMFPMGCNEC_k__BackingField == false;
          }
          else {
            bVar2 = false;
          }
        }
        bVar3 = System_String__op_Equality
                          ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                           (MethodInfo *)0x0);
        pNVar13 = (__this->fields)._jackdawIcon;
        if (0 < iVar4 && ((bVar3 ^ 0xffU) & 1) == 0) {
          bVar2 = pJVar12 != (RaidConfig_HJLEKMDIDPO_o *)0x0;
        }
        if ((pNVar13 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar14 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
           pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar14,bVar2,(MethodInfo *)0x0);
          local_58[0] = false;
          local_64[0] = false;
          HCAICJLDDJO__IOJJNFJDFEJ(local_58,local_64,IKKAMAMLIKA,(MethodInfo *)0x0);
          pNVar13 = (__this->fields)._equppiedIcon;
          if ((pNVar13 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar14 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
             pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar14,local_64[0],(MethodInfo *)0x0);
            pHVar8 = (__this->fields).IHKJJFAEEHM;
            if (pHVar8 != (HOOAAGABMBL_o *)0x0) {
              iVar1 = (pHVar8->fields)._JDEHPJEIOCI_k__BackingField;
              if (0 < iVar1) {
                pNVar19 = (__this->fields)._levelLabel;
                local_68 = iVar1;
                pSVar6 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
                pSVar6 = System_String__Concat(StringLiteral_2430/*"<quad name=MiscSprites.star offsety=8 >"*/,pSVar6,(MethodInfo *)0x0);
                if (pNVar19 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03291810;
                (*(pNVar19->klass->vtable)._75_set_text.methodPtr)
                          (pNVar19,pSVar6,(pNVar19->klass->vtable)._75_set_text.method);
              }
              pNVar19 = (__this->fields)._levelLabel;
              if ((pNVar19 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                 (pUVar14 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pNVar19,(MethodInfo *)0x0),
                 pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar14,0 < iVar1,(MethodInfo *)0x0);
                CJNHFNHJHPE = (IKKAMAMLIKA->fields)._NMBNLNIMMPI_k__BackingField;
                if (CJNHFNHJHPE == (IGNEHHMICKB_o *)0x0) {
                  pNVar13 = (__this->fields)._image;
                  bVar2 = System_String__op_Equality
                                    ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                                     StringLiteral_11751/*"Seal"*/,(MethodInfo *)0x0);
                  if (bVar2) {
                    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pSVar6 = SF2Paths__OPLAHNAJGAJ((MethodInfo *)0x0);
                  }
                  else {
                    pSVar6 = (__this->fields).CNMMJHJNNAJ;
                  }
                  if (pNVar13 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03291810;
                  *(System_String_o **)&(pNVar13->fields).super.m_PixelsPerUnitMultiplier = pSVar6;
                  thunk_FUN_01c20e04(&(pNVar13->fields).super.m_PixelsPerUnitMultiplier);
                  pNVar13 = (__this->fields)._image;
                  pSVar6 = OFFIONDOEPM__CNLBHLNMCCI
                                     ((IKKAMAMLIKA->fields)._GPEFIOMJHNN_k__BackingField,
                                      (MethodInfo *)0x0);
                  if (pNVar13 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03291810;
                  Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar13,pSVar6,(MethodInfo *)0x0);
                  bVar2 = System_String__op_Equality
                                    ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                                     StringLiteral_11751/*"Seal"*/,(MethodInfo *)0x0);
                  pNVar13 = (__this->fields)._image;
                  if (pNVar13 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03291810;
                  if (bVar2) {
                    __this_05 = UnityEngine_UI_Graphic__get_rectTransform
                                          ((UnityEngine_UI_Graphic_o *)pNVar13,(MethodInfo *)0x0);
                    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo);
                    }
                    if (__this_05 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03291810;
                    UnityEngine_RectTransform__set_sizeDelta
                              (__this_05,
                               (UnityEngine_Vector2_o)
                               (BHEDGAKGKPO_TypeInfo->static_fields->PHOPCECNCND).fields,
                               (MethodInfo *)0x0);
                    method_00 = extraout_x1_00;
                  }
                  else {
                    (*(pNVar13->klass->vtable)._45_SetNativeSize.methodPtr)
                              (pNVar13,(pNVar13->klass->vtable)._45_SetNativeSize.method);
                    method_00 = extraout_x1_01;
                  }
                }
                else {
                  __this_04 = (__this->fields)._compositeImage;
                  if (__this_04 == (Nekki_SF2_GUI_CompositeImage_o *)0x0) goto LAB_03291810;
                  Nekki_SF2_GUI_CompositeImage__set_Data(__this_04,CJNHFNHJHPE,(MethodInfo *)0x0);
                  pNVar13 = (__this->fields)._image;
                  if ((pNVar13 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
                     (pUVar14 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
                     pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03291810;
                  UnityEngine_GameObject__SetActive(pUVar14,false,(MethodInfo *)0x0);
                  method_00 = extraout_x1;
                }
                pHVar8 = (__this->fields).IHKJJFAEEHM;
                if (pHVar8 == (HOOAAGABMBL_o *)0x0) {
LAB_03290fec:
                  Nekki_SF2_GUI_Shop_ShopTableViewCell__CDEPJFBHKID(__this,method_00);
                  Nekki_SF2_GUI_Shop_ShopTableViewCell__PKENFJMKHKF(__this,method_01);
                  FUN_03f939e8(&PTR_System_Collections_Generic_List<FBBNEILNOKK>_TypeInfo_0422f000,
                               (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField);
                  return;
                }
                pNVar20 = (__this->fields)._perksPanel;
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar15 = NLPJLHOEAOE__GMJMEKENPAP(pHVar8,true,(MethodInfo *)0x0);
                if (pNVar20 != (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0) {
                  (*(pNVar20->klass->vtable)._4_SetPerks.methodPtr)
                            (pNVar20,pSVar15,(__this->fields).IHKJJFAEEHM,
                             (pNVar20->klass->vtable)._4_SetPerks.method);
                  pNVar20 = (__this->fields)._perksPanel;
                  if ((pNVar20 != (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0) &&
                     (__this_06 = (pNVar20->fields)._OnPerkHintShowed,
                     __this_06 != (Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA_o *)0x0)) {
                    UnityEngine_Events_UnityEventBase__RemoveAllListeners
                              ((UnityEngine_Events_UnityEventBase_o *)__this_06,(MethodInfo *)0x0);
                    pNVar20 = (__this->fields)._perksPanel;
                    if (pNVar20 != (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0) {
                      __this_07 = (UnityEngine_Events_UnityEvent_bool__bool__o *)
                                  (pNVar20->fields)._OnPerkHintShowed;
                      if ((Nekki_SF2_GUI_Shop_ShopTableViewCell_<>c_TypeInfo->_2).cctor_finished ==
                          0) {
                        thunk_FUN_01ba7564();
                      }
                      call = Nekki_SF2_GUI_Shop_ShopTableViewCell_<>c_TypeInfo->static_fields->
                             __9__51_0;
                      if (call == (UnityEngine_Events_UnityAction_bool__bool__o *)0x0) {
                        if ((Nekki_SF2_GUI_Shop_ShopTableViewCell_<>c_TypeInfo->_2).cctor_finished
                            == 0) {
                          thunk_FUN_01ba7564();
                        }
                        call = (UnityEngine_Events_UnityAction_bool__bool__o *)
                               thunk_FUN_01bda818(
                                                 UnityEngine_Events_UnityAction<bool,_bool>_TypeInfo
                                                 );
                        UnityEngine_Events_UnityAction<bool,_bool>___ctor();
                        ppUVar16 = &Nekki_SF2_GUI_Shop_ShopTableViewCell_<>c_TypeInfo->static_fields
                                    ->__9__51_0;
                        *ppUVar16 = call;
                        thunk_FUN_01c20e04(ppUVar16,call);
                      }
                      if (__this_07 != (UnityEngine_Events_UnityEvent_bool__bool__o *)0x0) {
                        UnityEngine_Events_UnityEvent<bool,_bool>__AddListener
                                  (__this_07,(UnityEngine_Events_UnityAction_T0__T1__o *)call,
                                   Method_UnityEngine_Events_UnityEvent<bool,_bool>_AddListener__);
                        method_00 = extraout_x1_02;
                        goto LAB_03290fec;
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
  }
LAB_03291810:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateItem()  [RVA 0x3191A5C]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$UpdateItem @ RVA 0x3191A5C

void Nekki_SF2_GUI_Shop_ShopTableViewCell__UpdateItem
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Shop_ShopTableViewCell__SetItemInfo(__this,(__this->fields).IHKJJFAEEHM,in_x2);
  return;
}


// ===== public int CompareTo(ShopTableViewCell IBKIPBJJCPG)  [RVA 0x3191A64]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$CompareTo @ RVA 0x3191A64

int32_t Nekki_SF2_GUI_Shop_ShopTableViewCell__CompareTo
                  (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,
                  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  HOOAAGABMBL_o *pHVar2;
  HOOAAGABMBL_o *pHVar3;
  int32_t value;
  int32_t local_18;
  int32_t local_14;
  
  pHVar2 = (__this->fields).IHKJJFAEEHM;
  if (pHVar2 == (HOOAAGABMBL_o *)0x0) {
    local_14 = 0;
  }
  else {
                    /* try { // try from 03291a74 to 03391a7f has its CatchHandler @ 03291c4c */
    local_14 = (pHVar2->fields)._JDEHPJEIOCI_k__BackingField;
  }
  if (IBKIPBJJCPG != (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) {
    pHVar3 = (IBKIPBJJCPG->fields).IHKJJFAEEHM;
    if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (pHVar3->fields)._JDEHPJEIOCI_k__BackingField;
    }
    local_18 = 0;
    if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
      local_18 = (pHVar2->fields)._HBPAJOBFMLH_k__BackingField;
    }
    if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
      value = 1;
    }
    else {
      value = (pHVar3->fields)._HBPAJOBFMLH_k__BackingField;
    }
    iVar1 = System_Int32__CompareTo((int32_t)&local_14,iVar1,(MethodInfo *)0x0);
    if (iVar1 == 0) {
                    /* try { // try from 03291acc to 03391acf has its CatchHandler @ 03291c08 */
      iVar1 = System_Int32__CompareTo((int32_t)&local_18,value,(MethodInfo *)0x0);
    }
                    /* try { // try from 03291ae0 to 03391ae7 has its CatchHandler @ 03291c10 */
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03291ae8 to 03391af3 has its CatchHandler @ 03291c18 */
  FUN_01bab8c8();
}


// ===== public override void set_Opacity(float CJNHFNHJHPE)  [RVA 0x3191AEC]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$set_Opacity @ RVA 0x3191AEC

void Nekki_SF2_GUI_Shop_ShopTableViewCell__set_Opacity
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
                    /* try { // try from 03291af4 to 03391bdb has its CatchHandler @ 0329172c */
  Nekki_SF2_GUI_TableViewCell__set_Opacity
            ((Nekki_SF2_GUI_TableViewCell_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_ShopTableViewCell__PKENFJMKHKF(__this,method_00);
  Nekki_SF2_GUI_Shop_ShopTableViewCell__HGNBJGOJLLN(__this,method_01);
  return;
}


// ===== private void CGFMJFAAHCF()  [RVA 0x31918A4]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$CGFMJFAAHCF @ RVA 0x31918A4

void Nekki_SF2_GUI_Shop_ShopTableViewCell__CGFMJFAAHCF
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  float fVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector3_o UVar7;
  
  pNVar2 = (__this->fields)._jackdawIcon;
  if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03291984;
  bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
  if (bVar1) {
LAB_032918f4:
    pNVar2 = (__this->fields)._equppiedIcon;
    if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_03291984;
    UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
    fVar5 = UVar6.fields.y;
  }
  else {
    pNVar2 = (__this->fields)._equppiedIcon;
    if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03291984;
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    fVar5 = 0.0;
    if (bVar1) goto LAB_032918f4;
  }
  if ((__this->fields).APKJCMHJOPB == false) {
    pNVar2 = (__this->fields)._discountRootImage;
    if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_03291984;
    UVar7 = UnityEngine_Transform__get_localPosition
                      ((UnityEngine_Transform_o *)pUVar4,(MethodInfo *)0x0);
    (__this->fields).MEJOIGLLBGO.fields.x = UVar7.fields.x;
    (__this->fields).MEJOIGLLBGO.fields.y = UVar7.fields.y;
    (__this->fields).MEJOIGLLBGO.fields.z = UVar7.fields.z;
    (__this->fields).APKJCMHJOPB = true;
  }
  pNVar2 = (__this->fields)._discountRootImage;
                    /* try { // try from 0329194c to 03391953 has its CatchHandler @ 03291c44 */
  if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar7.fields.z = (__this->fields).MEJOIGLLBGO.fields.z + 0.0;
                    /* try { // try from 03291970 to 03391973 has its CatchHandler @ 03291c38 */
    UVar7.fields.y = fVar5 + (__this->fields).MEJOIGLLBGO.fields.y;
    UVar7.fields.x = (__this->fields).MEJOIGLLBGO.fields.x + 0.0;
    UnityEngine_Transform__set_localPosition
              ((UnityEngine_Transform_o *)pUVar4,UVar7,(MethodInfo *)0x0);
    return;
  }
LAB_03291984:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_InactiveOpacity(float CJNHFNHJHPE)  [RVA 0x3191B10]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$set_InactiveOpacity @ RVA 0x3191B10

void Nekki_SF2_GUI_Shop_ShopTableViewCell__set_InactiveOpacity
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BFMLDOLAEKH_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void set_IncreaseHeight(float CJNHFNHJHPE)  [RVA 0x3191B18]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$set_IncreaseHeight @ RVA 0x3191B18

void Nekki_SF2_GUI_Shop_ShopTableViewCell__set_IncreaseHeight
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LEBAHKCLDFJ = CJNHFNHJHPE;
  Nekki_SF2_GUI_Shop_ShopTableViewCell__CDEPJFBHKID(__this,method);
  return;
}


// ===== public override float get_Opacity()  [RVA 0x3191B20]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$get_Opacity @ RVA 0x3191B20

float Nekki_SF2_GUI_Shop_ShopTableViewCell__get_Opacity
                (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  return (__this->fields).super.FHIIIPEBDLE;
}


// ===== private void PKENFJMKHKF()  [RVA 0x3191818]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$PKENFJMKHKF @ RVA 0x3191818

void Nekki_SF2_GUI_Shop_ShopTableViewCell__PKENFJMKHKF
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_CanvasGroup_o *pUVar2;
  float fVar3;
  float fVar4;
  
  pUVar2 = (__this->fields)._CanvasGroup;
  fVar3 = (float)(*(__this->klass->vtable)._11_get_Opacity.methodPtr)
                           (__this,(__this->klass->vtable)._11_get_Opacity.method);
  LJLLAKHOFFF__IFBBIDIEBEL(pUVar2,fVar3,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._lockIcon;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar2 = (__this->fields)._contentCanvasGroup;
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
      fVar3 = 1.0;
      if (bVar1) {
        fVar3 = (__this->fields)._BFMLDOLAEKH_k__BackingField;
        fVar4 = (float)(*(__this->klass->vtable)._11_get_Opacity.methodPtr)
                                 (__this,(__this->klass->vtable)._11_get_Opacity.method);
        fVar3 = fVar3 / fVar4;
      }
      if (pUVar2 != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_alpha(pUVar2,fVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HideBadge()  [RVA 0x3191B28]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$HideBadge @ RVA 0x3191B28

void Nekki_SF2_GUI_Shop_ShopTableViewCell__HideBadge
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._addPercentRootImage;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IconPanelActive()  [RVA 0x3191B54]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$get_IconPanelActive @ RVA 0x3191B54

bool Nekki_SF2_GUI_Shop_ShopTableViewCell__get_IconPanelActive
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  
  if ((DAT_04566a42 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566a42 = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._iconPanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._iconPanel;
    if ((pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03291be4 to 03391be7 has its CatchHandler @ 03291c3c */
    FUN_01bab8c8();
  }
                    /* try { // try from 03291bdc to 03391be3 has its CatchHandler @ 03291c58 */
  return false;
}


// ===== public override void SetHighlighted()  [RVA 0x3191BE8]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$SetHighlighted @ RVA 0x3191BE8

void Nekki_SF2_GUI_Shop_ShopTableViewCell__SetHighlighted
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
                    /* try { // try from 03291be8 to 03391beb has its CatchHandler @ 03291c34 */
  return;
}


// ===== public void set_IconPanelActive(bool CJNHFNHJHPE)  [RVA 0x3191BEC]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$set_IconPanelActive @ RVA 0x3191BEC

void Nekki_SF2_GUI_Shop_ShopTableViewCell__set_IconPanelActive
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  
                    /* try { // try from 03291bec to 03391bef has its CatchHandler @ 03291c30 */
                    /* try { // try from 03291bf0 to 03391bf3 has its CatchHandler @ 03291c28 */
                    /* try { // try from 03291bf4 to 03391bf7 has its CatchHandler @ 03291c1c */
                    /* try { // try from 03291bf8 to 03391bfb has its CatchHandler @ 0329172c */
                    /* try { // try from 03291bfc to 03391bff has its CatchHandler @ 03291c14 */
                    /* try { // try from 03291c00 to 03391c03 has its CatchHandler @ 03291c0c */
                    /* catch() { ... } // from try @ 03291ab4 with catch @ 03291c04
                       try { // try from 03291c04 to 03391c67 has its CatchHandler @ 0329172c */
                    /* catch() { ... } // from try @ 03291acc with catch @ 03291c08 */
                    /* catch() { ... } // from try @ 03291c00 with catch @ 03291c0c */
                    /* catch() { ... } // from try @ 03291ae0 with catch @ 03291c10 */
  if ((DAT_04566a43 & 1) == 0) {
                    /* catch() { ... } // from try @ 03291bfc with catch @ 03291c14 */
                    /* catch() { ... } // from try @ 03291ae8 with catch @ 03291c18 */
                    /* catch() { ... } // from try @ 03291bf4 with catch @ 03291c1c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 032919a0 with catch @ 03291c20 */
                    /* catch() { ... } // from try @ 03291988 with catch @ 03291c24 */
    DAT_04566a43 = 1;
  }
                    /* catch() { ... } // from try @ 03291bf0 with catch @ 03291c28 */
                    /* catch() { ... } // from try @ 032919ec with catch @ 03291c2c */
  pUVar2 = (__this->fields)._iconPanel;
                    /* catch() { ... } // from try @ 03291bec with catch @ 03291c30 */
                    /* catch() { ... } // from try @ 03291be8 with catch @ 03291c34 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03291970 with catch @ 03291c38 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 03291be4 with catch @ 03291c3c */
                    /* catch() { ... } // from try @ 032919d8 with catch @ 03291c40 */
                    /* catch() { ... } // from try @ 0329194c with catch @ 03291c44 */
                    /* catch() { ... } // from try @ 03291a50 with catch @ 03291c48 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03291a74 with catch @ 03291c4c */
  if (bVar1) {
                    /* catch() { ... } // from try @ 03291a1c with catch @ 03291c50 */
    pUVar2 = (__this->fields)._iconPanel;
                    /* catch() { ... } // from try @ 03291a58 with catch @ 03291c54 */
                    /* catch() { ... } // from try @ 03291bdc with catch @ 03291c58 */
    if ((pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 03291c68 to 03391c6b has its CatchHandler @ 03291c98 */
                    /* try { // try from 03291c6c to 03391ca7 has its CatchHandler @ 0329172c */
      UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_ShopTableViewCell__CDEPJFBHKID(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public override void Display()  [RVA 0x3191C98]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$Display @ RVA 0x3191C98

void Nekki_SF2_GUI_Shop_ShopTableViewCell__Display
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03291c68 with catch @ 03291c98 */
  return;
}


// ===== public void RemoveDiscount()  [RVA 0x3191C9C]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$RemoveDiscount @ RVA 0x3191C9C

void Nekki_SF2_GUI_Shop_ShopTableViewCell__RemoveDiscount
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._discountRootImage;
                    /* try { // try from 03291ca8 to 03391caf has its CatchHandler @ 03291cc4 */
                    /* try { // try from 03291cb0 to 03391cbb has its CatchHandler @ 0329172c */
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 03291cbc to 03391cc3 has its CatchHandler @ 03291cc4 */
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03291ca8 with catch @ 03291cc4
                       catch() { ... } // from try @ 03291cbc with catch @ 03291cc4 */
  FUN_01bab8c8();
}


// ===== public PerksPanel get_PerksPanel()  [RVA 0x3191CC8]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$get_PerksPanel @ RVA 0x3191CC8

Nekki_SF2_GUI_Shop_PerksPanel_o *
Nekki_SF2_GUI_Shop_ShopTableViewCell__get_PerksPanel
          (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  return (__this->fields)._perksPanel;
}


// ===== public override void SetSelected()  [RVA 0x3191CD0]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$SetSelected @ RVA 0x3191CD0

void Nekki_SF2_GUI_Shop_ShopTableViewCell__SetSelected
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void HGNBJGOJLLN()  [RVA 0x3191988]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$HGNBJGOJLLN @ RVA 0x3191988

void Nekki_SF2_GUI_Shop_ShopTableViewCell__HGNBJGOJLLN
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  HOOAAGABMBL_o *pHVar3;
  float fVar4;
  
                    /* try { // try from 03291988 to 0339198b has its CatchHandler @ 03291c24 */
  if ((DAT_04566a44 & 1) == 0) {
                    /* try { // try from 032919a0 to 033919a3 has its CatchHandler @ 03291c20 */
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    DAT_04566a44 = 1;
  }
  if ((__this->fields).IHKJJFAEEHM == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  pNVar2 = (__this->fields)._discountLabel;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    CJNHFNHJHPE = (System_String_o *)
                  (*(pNVar2->klass->vtable)._74_get_text.methodPtr)
                            (pNVar2,(pNVar2->klass->vtable)._74_get_text.method);
                    /* try { // try from 032919d8 to 033919e3 has its CatchHandler @ 03291c40 */
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pHVar3 = (__this->fields).IHKJJFAEEHM;
    if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 032919ec to 033919ff has its CatchHandler @ 03291c2c */
      bVar1 = System_String__op_Inequality
                        ((pHVar3->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                         (MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      __this_00 = (__this->fields)._discountRootImage;
      if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 03291a1c to 03391a2b has its CatchHandler @ 03291c50 */
        __this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        fVar4 = (float)(*(__this->klass->vtable)._11_get_Opacity.methodPtr)
                                 (__this,(__this->klass->vtable)._11_get_Opacity.method);
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 03291a50 to 03391a53 has its CatchHandler @ 03291c48 */
          UnityEngine_GameObject__SetActive(__this_01,1.0 <= fVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03291a58 to 03391a6f has its CatchHandler @ 03291c54 */
  FUN_01bab8c8();
}


// ===== public float get_IncreaseHeight()  [RVA 0x3191CD4]
// Nekki.SF2.GUI.Shop.ShopTableViewCell$$get_IncreaseHeight @ RVA 0x3191CD4

float Nekki_SF2_GUI_Shop_ShopTableViewCell__get_IncreaseHeight
                (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  return (__this->fields).LEBAHKCLDFJ;
}

