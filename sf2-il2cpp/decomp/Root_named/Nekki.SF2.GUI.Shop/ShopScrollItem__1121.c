// TypeDefIndex 1121
// Namespace: Nekki.SF2.GUI.Shop
// public class ShopScrollItem : BaseScrollItem, IComparable<ShopScrollItem>
// Fields:
//   private string CNMMJHJNNAJ; // 0x130
//   private ResolutionImage _lockIcon; // 0x138
//   private ResolutionImage _jackdawIcon; // 0x140
//   private ResolutionImage _equppiedIcon; // 0x148
//   private ResolutionImage _levelIcon; // 0x150
//   private Text _levelLabel; // 0x158
//   private ResolutionImage _image; // 0x160
//   private PerksPanel _perksPanel; // 0x168
//   private LayoutElement _iconPanel; // 0x170
//   private LayoutElement _layoutElement; // 0x178
//   private Vector2 <DJOIAMEIMOG>k__BackingField; // 0x180
//   private int <HBPAJOBFMLH>k__BackingField; // 0x188
//   private HOOAAGABMBL IHKJJFAEEHM; // 0x190
//   private float BAFHCDGILKD; // 0x198

// ===== public int get_Index()  [RVA 0x30F2B5C]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$get_Index @ RVA 0x30F2B5C

int32_t Nekki_SF2_GUI_Shop_ShopScrollItem__get_Index
                  (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._HBPAJOBFMLH_k__BackingField;
}


// ===== public void set_Index(int CJNHFNHJHPE)  [RVA 0x30F2B64]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$set_Index @ RVA 0x30F2B64

void Nekki_SF2_GUI_Shop_ShopScrollItem__set_Index
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HBPAJOBFMLH_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void SetItemInfo(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x30F2B6C]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$SetItemInfo @ RVA 0x30F2B6C

void Nekki_SF2_GUI_Shop_ShopScrollItem__SetItemInfo
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  HOOAAGABMBL_o **ppHVar1;
  int iVar2;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar5;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *__this_02;
  HOOAAGABMBL_o *pHVar6;
  UnityEngine_GameObject_o *pUVar7;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar8;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Roster_o *pAVar9;
  Nekki_SF2_GUI_Shop_PerksPanel_o *pNVar10;
  UnityEngine_UI_Text_o *pUVar11;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar12;
  float fVar13;
  int32_t local_54;
  
  if ((DAT_04566437 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12046/*"ShopScrollItem.SetItemInfo _image is null"*/);
                    /* try { // try from 031f2bdc to 032f2be3 has its CatchHandler @ 031f2d28 */
    FUN_01bab630(&StringLiteral_12048/*"ShopScrollItem.SetItemInfo item is null"*/);
    FUN_01bab630(&StringLiteral_11751/*"Seal"*/);
                    /* try { // try from 031f2bec to 032f2bf3 has its CatchHandler @ 031f2d1c */
    FUN_01bab630(&StringLiteral_12045/*"ShopScrollItem({0})"*/);
                    /* try { // try from 031f2bfc to 032f2c07 has its CatchHandler @ 031f2d24 */
    DAT_04566437 = 1;
  }
  local_54 = 0;
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_12048/*"ShopScrollItem.SetItemInfo item is null"*/,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 031f2c08 to 032f2c47 has its CatchHandler @ 031f2b40 */
  (__this->fields).super._COIPKAKHDFP_k__BackingField =
       (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
  thunk_FUN_01c20e04(&(__this->fields).super._COIPKAKHDFP_k__BackingField);
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar5 = System_String__Format
                     (StringLiteral_12045/*"ShopScrollItem({0})"*/,
                      (Il2CppObject *)(__this->fields).super._COIPKAKHDFP_k__BackingField,
                      (MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
                    /* try { // try from 031f2c48 to 032f2c4f has its CatchHandler @ 031f2cb8 */
                    /* try { // try from 031f2c58 to 032f2c5f has its CatchHandler @ 031f2cac */
    UnityEngine_Object__set_name(__this_00,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 031f2c68 to 032f2c73 has its CatchHandler @ 031f2cb0 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031f2c74 to 032f2c9f has its CatchHandler @ 031f2b40 */
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 031f2ca0 to 032f2ca3 has its CatchHandler @ 031f2d20 */
    }
                    /* try { // try from 031f2ca4 to 032f2ca7 has its CatchHandler @ 031f2cb4 */
                    /* try { // try from 031f2ca8 to 032f2ccf has its CatchHandler @ 031f2b40 */
    pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 031f2c58 with catch @ 031f2cac */
                    /* catch() { ... } // from try @ 031f2c68 with catch @ 031f2cb0 */
                    /* catch() { ... } // from try @ 031f2ca4 with catch @ 031f2cb4 */
    if ((pAVar9 != (Roster_o *)0x0) &&
       (__this_01 = (pAVar9->fields).OIDPLCLELEN, __this_01 != (GGHCLMEFIGO_o *)0x0)) {
                    /* catch() { ... } // from try @ 031f2c48 with catch @ 031f2cb8 */
      __this_02 = GGHCLMEFIGO__JNFIBDBHNOA(__this_01,IKKAMAMLIKA,(MethodInfo *)0x0);
      pHVar6 = IKKAMAMLIKA;
      if (__this_02 != (IGFGDDANEPE_o *)0x0) {
                    /* try { // try from 031f2cd0 to 032f2cd3 has its CatchHandler @ 031f2cf8 */
                    /* try { // try from 031f2cd4 to 032f2d07 has its CatchHandler @ 031f2b40 */
        pHVar6 = IGFGDDANEPE__JGBDIHJDIHD(__this_02,(MethodInfo *)0x0);
      }
      ppHVar1 = &(__this->fields).IHKJJFAEEHM;
      (__this->fields).IHKJJFAEEHM = pHVar6;
      thunk_FUN_01c20e04(ppHVar1);
      iVar2 = (IKKAMAMLIKA->fields)._JDEHPJEIOCI_k__BackingField;
                    /* catch() { ... } // from try @ 031f2cd0 with catch @ 031f2cf8 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 031f2d08 to 032f2d1b has its CatchHandler @ 031f2d98 */
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 031f2bec with catch @ 031f2d1c
                       try { // try from 031f2d1c to 032f2d3f has its CatchHandler @ 031f2b40 */
        DAT_04565b7d = '\x01';
      }
                    /* catch() { ... } // from try @ 031f2ca0 with catch @ 031f2d20 */
                    /* catch() { ... } // from try @ 031f2bfc with catch @ 031f2d24 */
                    /* catch() { ... } // from try @ 031f2bdc with catch @ 031f2d28 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar9 != (Roster_o *)0x0) {
                    /* try { // try from 031f2d40 to 032f2d43 has its CatchHandler @ 031f2d6c */
                    /* try { // try from 031f2d44 to 032f2d7b has its CatchHandler @ 031f2b40 */
        iVar4 = Roster__EOEAKGGDBFH(pAVar9,(MethodInfo *)0x0);
        fVar13 = 0.5;
        if (iVar2 <= iVar4) {
          fVar13 = 1.0;
        }
        (__this->fields).super.PEFNNFJCCNG = fVar13;
        pNVar12 = (__this->fields)._lockIcon;
                    /* catch() { ... } // from try @ 031f2d40 with catch @ 031f2d6c */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 031f2d7c to 032f2d83 has its CatchHandler @ 031f2d98 */
                    /* try { // try from 031f2d84 to 032f2d8f has its CatchHandler @ 031f2b40 */
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar3) {
                    /* try { // try from 031f2d90 to 032f2d97 has its CatchHandler @ 031f2d98 */
          iVar2 = (IKKAMAMLIKA->fields)._JDEHPJEIOCI_k__BackingField;
                    /* catch() { ... } // from try @ 031f2d08 with catch @ 031f2d98
                       catch() { ... } // from try @ 031f2d7c with catch @ 031f2d98
                       catch() { ... } // from try @ 031f2d90 with catch @ 031f2d98 */
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
          pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar9 == (Roster_o *)0x0) goto LAB_031f316c;
          iVar4 = Roster__EOEAKGGDBFH(pAVar9,(MethodInfo *)0x0);
          pNVar12 = (__this->fields)._lockIcon;
          if ((pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
             (pUVar7 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
             pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031f316c;
          UnityEngine_GameObject__SetActive(pUVar7,iVar4 < iVar2,(MethodInfo *)0x0);
        }
        pNVar12 = (__this->fields)._jackdawIcon;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar3) {
          pNVar12 = (__this->fields)._jackdawIcon;
          if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031f316c;
          pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0);
          if (__this_02 == (IGFGDDANEPE_o *)0x0) {
            bVar3 = false;
          }
          else {
            bVar3 = System_String__op_Inequality
                              ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                               StringLiteral_11751/*"Seal"*/,(MethodInfo *)0x0);
          }
          if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_031f316c;
          UnityEngine_GameObject__SetActive(pUVar7,bVar3,(MethodInfo *)0x0);
        }
        pNVar12 = (__this->fields)._equppiedIcon;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar3) {
          bVar3 = false;
          if (__this_02 != (IGFGDDANEPE_o *)0x0) {
            bVar3 = (__this_02->fields).OFIKEBGDMBE != false;
          }
          pNVar12 = (__this->fields)._equppiedIcon;
          if ((pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
             (pUVar7 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
             pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031f316c;
          UnityEngine_GameObject__SetActive(pUVar7,bVar3,(MethodInfo *)0x0);
        }
        if (*ppHVar1 != (HOOAAGABMBL_o *)0x0) {
          iVar2 = ((*ppHVar1)->fields)._JDEHPJEIOCI_k__BackingField;
          pUVar11 = (__this->fields)._levelLabel;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar3) {
            pHVar6 = (__this->fields).IHKJJFAEEHM;
            if (pHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_031f316c;
            local_54 = (pHVar6->fields)._JDEHPJEIOCI_k__BackingField;
            pUVar11 = (__this->fields)._levelLabel;
                    /* try { // try from 031f2f54 to 032f3193 has its CatchHandler @ 031f2f54
                       catch() { ... } // from try @ 031f2f54 with catch @ 031f2f54
                       catch() { ... } // from try @ 031f334c with catch @ 031f2f54
                       catch() { ... } // from try @ 031f3408 with catch @ 031f2f54
                       catch() { ... } // from try @ 031f3410 with catch @ 031f2f54
                       catch() { ... } // from try @ 031f3504 with catch @ 031f2f54 */
            pSVar5 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
            if (pUVar11 == (UnityEngine_UI_Text_o *)0x0) goto LAB_031f316c;
            (*(pUVar11->klass->vtable)._75_set_text.methodPtr)
                      (pUVar11,pSVar5,(pUVar11->klass->vtable)._75_set_text.method);
            pUVar11 = (__this->fields)._levelLabel;
            if ((pUVar11 == (UnityEngine_UI_Text_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031f316c;
            UnityEngine_GameObject__SetActive(pUVar7,0 < iVar2,(MethodInfo *)0x0);
          }
          pNVar12 = (__this->fields)._levelIcon;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar3) {
            pNVar12 = (__this->fields)._levelIcon;
            if ((pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031f316c;
            UnityEngine_GameObject__SetActive(pUVar7,0 < iVar2,(MethodInfo *)0x0);
          }
          pNVar12 = (__this->fields)._image;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar3) {
            bVar3 = System_String__op_Equality
                              ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                               StringLiteral_11751/*"Seal"*/,(MethodInfo *)0x0);
            pNVar12 = (__this->fields)._image;
            if (bVar3) {
              if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar5 = SF2Paths__OPLAHNAJGAJ((MethodInfo *)0x0);
              if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031f316c;
            }
            else {
              if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031f316c;
              pSVar5 = (__this->fields).CNMMJHJNNAJ;
            }
            *(System_String_o **)&(pNVar12->fields).super.m_PixelsPerUnitMultiplier = pSVar5;
            thunk_FUN_01c20e04(&(pNVar12->fields).super.m_PixelsPerUnitMultiplier);
            pNVar12 = (__this->fields)._image;
            if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031f316c;
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (pNVar12,(IKKAMAMLIKA->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0)
            ;
            pNVar12 = (__this->fields)._image;
            if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031f316c;
            (*(pNVar12->klass->vtable)._45_SetNativeSize.methodPtr)
                      (pNVar12,(pNVar12->klass->vtable)._45_SetNativeSize.method);
          }
          else {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_12046/*"ShopScrollItem.SetItemInfo _image is null"*/,(MethodInfo *)0x0);
          }
          pNVar10 = (__this->fields)._perksPanel;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          method_00 = extraout_x1;
          if (bVar3) {
            pNVar10 = (__this->fields)._perksPanel;
            pHVar6 = (__this->fields).IHKJJFAEEHM;
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar8 = NLPJLHOEAOE__GMJMEKENPAP(pHVar6,true,(MethodInfo *)0x0);
            if (pNVar10 == (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0) goto LAB_031f316c;
            (*(pNVar10->klass->vtable)._4_SetPerks.methodPtr)
                      (pNVar10,pSVar8,*ppHVar1,(pNVar10->klass->vtable)._4_SetPerks.method);
            method_00 = extraout_x1_00;
          }
          Nekki_SF2_GUI_Shop_ShopScrollItem__CDEPJFBHKID(__this,method_00);
          Nekki_SF2_GUI_Shop_ShopScrollItem__PKENFJMKHKF(__this,method_01);
          return;
        }
      }
    }
  }
LAB_031f316c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_IconPanelActive(bool CJNHFNHJHPE)  [RVA 0x30F3524]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$set_IconPanelActive @ RVA 0x30F3524

void Nekki_SF2_GUI_Shop_ShopScrollItem__set_IconPanelActive
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  
  if ((DAT_04566438 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566438 = 1;
  }
  pUVar2 = (__this->fields)._iconPanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031f357c to 032f35b7 has its CatchHandler @ 031f357c
                       catch() { ... } // from try @ 031f357c with catch @ 031f357c
                       catch() { ... } // from try @ 031f36d0 with catch @ 031f357c
                       catch() { ... } // from try @ 031f3738 with catch @ 031f357c
                       catch() { ... } // from try @ 031f3790 with catch @ 031f357c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._iconPanel;
    if ((pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 031f35b8 to 032f35cb has its CatchHandler @ 031f3708 */
      Nekki_SF2_GUI_Shop_ShopScrollItem__CDEPJFBHKID(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public float get_IncraseHeight()  [RVA 0x30F35D0]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$get_IncraseHeight @ RVA 0x30F35D0

float Nekki_SF2_GUI_Shop_ShopScrollItem__get_IncraseHeight
                (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields).BAFHCDGILKD;
}


// ===== public Vector2 get_BaseSize()  [RVA 0x30F35D8]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$get_BaseSize @ RVA 0x30F35D8

UnityEngine_Vector2_o
Nekki_SF2_GUI_Shop_ShopScrollItem__get_BaseSize
          (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._DJOIAMEIMOG_k__BackingField.fields;
}


// ===== public override void set_Opacity(float CJNHFNHJHPE)  [RVA 0x30F35E4]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$set_Opacity @ RVA 0x30F35E4

void Nekki_SF2_GUI_Shop_ShopScrollItem__set_Opacity
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  float fVar1;
  
                    /* try { // try from 031f35e4 to 032f35f3 has its CatchHandler @ 031f3700 */
  fVar1 = (__this->fields).super.AEIJHOCAICH;
  (__this->fields).super.FHIIIPEBDLE = CJNHFNHJHPE;
  if (CJNHFNHJHPE < fVar1) {
                    /* try { // try from 031f35f8 to 032f3607 has its CatchHandler @ 031f36f8 */
    (__this->fields).super.FHIIIPEBDLE = fVar1;
    CJNHFNHJHPE = fVar1;
  }
  fVar1 = (__this->fields).super.PEFNNFJCCNG;
  if (fVar1 < CJNHFNHJHPE) {
                    /* try { // try from 031f3608 to 032f360f has its CatchHandler @ 031f36f4 */
    (__this->fields).super.FHIIIPEBDLE = fVar1;
  }
  Nekki_SF2_GUI_Shop_ShopScrollItem__PKENFJMKHKF(__this,method);
  return;
}


// ===== public void set_IncraseHeight(float CJNHFNHJHPE)  [RVA 0x30F3610]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$set_IncraseHeight @ RVA 0x30F3610

void Nekki_SF2_GUI_Shop_ShopScrollItem__set_IncraseHeight
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).BAFHCDGILKD = CJNHFNHJHPE;
                    /* try { // try from 031f3614 to 032f361b has its CatchHandler @ 031f36f0 */
  Nekki_SF2_GUI_Shop_ShopScrollItem__CDEPJFBHKID(__this,method);
  return;
}


// ===== public void set_BaseSize(Vector2 CJNHFNHJHPE)  [RVA 0x30F3618]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$set_BaseSize @ RVA 0x30F3618

void Nekki_SF2_GUI_Shop_ShopScrollItem__set_BaseSize
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._DJOIAMEIMOG_k__BackingField.fields.x = CJNHFNHJHPE.fields.x;
  (__this->fields)._DJOIAMEIMOG_k__BackingField.fields.y = CJNHFNHJHPE.fields.y;
  return;
}


// ===== public override Vector3 get_CenterPosition()  [RVA 0x30F3624]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$get_CenterPosition @ RVA 0x30F3624

UnityEngine_Vector3_o
Nekki_SF2_GUI_Shop_ShopScrollItem__get_CenterPosition
          (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o UVar6;
  float fVar4;
  
                    /* try { // try from 031f362c to 032f3633 has its CatchHandler @ 031f36e8 */
  if ((DAT_04566439 & 1) == 0) {
                    /* try { // try from 031f3648 to 032f3657 has its CatchHandler @ 031f36e0 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566439 = 1;
  }
                    /* try { // try from 031f3660 to 032f366f has its CatchHandler @ 031f36dc */
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 031f3670 to 032f3677 has its CatchHandler @ 031f36d8 */
    UVar5 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    fVar4 = UVar5.fields.y;
                    /* try { // try from 031f3678 to 032f367f has its CatchHandler @ 031f36d4 */
    pNVar3 = (__this->fields)._image;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031f3698 to 032f369b has its CatchHandler @ 031f36d0 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields)._image;
                    /* try { // try from 031f36b4 to 032f36b7 has its CatchHandler @ 031f36fc */
                    /* try { // try from 031f36b8 to 032f36bb has its CatchHandler @ 031f3708 */
                    /* try { // try from 031f36bc to 032f36c3 has its CatchHandler @ 031f3704 */
      if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_031f36ec;
                    /* try { // try from 031f36c4 to 032f36c7 has its CatchHandler @ 031f3700 */
      UVar6 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
      fVar4 = UVar6.fields.y;
                    /* try { // try from 031f36c8 to 032f36cb has its CatchHandler @ 031f36ec */
    }
                    /* try { // try from 031f36cc to 032f36cf has its CatchHandler @ 031f36e4 */
    UVar5.fields.y = fVar4;
                    /* catch() { ... } // from try @ 031f3698 with catch @ 031f36d0
                       try { // try from 031f36d0 to 032f371f has its CatchHandler @ 031f357c */
                    /* catch() { ... } // from try @ 031f3678 with catch @ 031f36d4 */
                    /* catch() { ... } // from try @ 031f3670 with catch @ 031f36d8 */
                    /* catch() { ... } // from try @ 031f3660 with catch @ 031f36dc */
                    /* catch() { ... } // from try @ 031f3648 with catch @ 031f36e0 */
                    /* catch() { ... } // from try @ 031f36cc with catch @ 031f36e4 */
                    /* catch() { ... } // from try @ 031f362c with catch @ 031f36e8 */
    return (UnityEngine_Vector3_o)UVar5.fields;
  }
LAB_031f36ec:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031f36c8 with catch @ 031f36ec */
  FUN_01bab8c8();
}


// ===== private void PKENFJMKHKF()  [RVA 0x30F33C4]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$PKENFJMKHKF @ RVA 0x30F33C4

void Nekki_SF2_GUI_Shop_ShopScrollItem__PKENFJMKHKF
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_UI_Text_o *x;
  
  if ((DAT_0456643a & 1) == 0) {
                    /* try { // try from 031f33ec to 032f33f3 has its CatchHandler @ 031f3454 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 031f33f4 to 032f33f7 has its CatchHandler @ 031f3430 */
    DAT_0456643a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 031f33f8 to 032f33fb has its CatchHandler @ 031f3428 */
                    /* try { // try from 031f33fc to 032f33ff has its CatchHandler @ 031f3424 */
  pNVar2 = (__this->fields)._image;
                    /* try { // try from 031f3400 to 032f3407 has its CatchHandler @ 031f344c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031f3408 to 032f340b has its CatchHandler @ 031f2f54 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 031f340c to 032f340f has its CatchHandler @ 031f3418 */
                    /* try { // try from 031f3410 to 032f3473 has its CatchHandler @ 031f2f54 */
                    /* catch() { ... } // from try @ 031f340c with catch @ 031f3418 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031f3328 with catch @ 031f341c */
  if (bVar1) {
                    /* catch() { ... } // from try @ 031f32bc with catch @ 031f3420 */
                    /* catch() { ... } // from try @ 031f33fc with catch @ 031f3424 */
                    /* catch() { ... } // from try @ 031f33f8 with catch @ 031f3428 */
                    /* catch() { ... } // from try @ 031f32b0 with catch @ 031f342c */
    LJLLAKHOFFF__IFBBIDIEBEL
              ((UnityEngine_UI_Graphic_o *)(__this->fields)._image,
               (__this->fields).super.FHIIIPEBDLE,(MethodInfo *)0x0);
  }
                    /* catch() { ... } // from try @ 031f33f4 with catch @ 031f3430 */
                    /* catch() { ... } // from try @ 031f32a0 with catch @ 031f3434 */
  pNVar2 = (__this->fields)._jackdawIcon;
                    /* catch() { ... } // from try @ 031f3264 with catch @ 031f3438 */
                    /* catch() { ... } // from try @ 031f3288 with catch @ 031f343c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031f327c with catch @ 031f3440 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 031f31f0 with catch @ 031f3444 */
                    /* catch() { ... } // from try @ 031f3194 with catch @ 031f3448 */
                    /* catch() { ... } // from try @ 031f3400 with catch @ 031f344c */
                    /* catch() { ... } // from try @ 031f32cc with catch @ 031f3450 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031f33ec with catch @ 031f3454 */
  if (bVar1) {
    LJLLAKHOFFF__IFBBIDIEBEL
              ((UnityEngine_UI_Graphic_o *)(__this->fields)._jackdawIcon,
               (__this->fields).super.FHIIIPEBDLE,(MethodInfo *)0x0);
  }
  pNVar2 = (__this->fields)._equppiedIcon;
                    /* try { // try from 031f3474 to 032f3477 has its CatchHandler @ 031f3484 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 031f3474 with catch @ 031f3484 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 031f3494 to 032f3503 has its CatchHandler @ 031f3518 */
    LJLLAKHOFFF__IFBBIDIEBEL
              ((UnityEngine_UI_Graphic_o *)(__this->fields)._equppiedIcon,
               (__this->fields).super.FHIIIPEBDLE,(MethodInfo *)0x0);
  }
  pNVar2 = (__this->fields)._levelIcon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    LJLLAKHOFFF__IFBBIDIEBEL
              ((UnityEngine_UI_Graphic_o *)(__this->fields)._levelIcon,
               (__this->fields).super.FHIIIPEBDLE,(MethodInfo *)0x0);
  }
  x = (__this->fields)._levelLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 031f3504 to 032f350f has its CatchHandler @ 031f2f54 */
                    /* try { // try from 031f3510 to 032f3517 has its CatchHandler @ 031f3518 */
    LJLLAKHOFFF__IFBBIDIEBEL
              ((UnityEngine_UI_Graphic_o *)(__this->fields)._levelLabel,
               (__this->fields).super.FHIIIPEBDLE,(MethodInfo *)0x0);
    return;
  }
                    /* catch() { ... } // from try @ 031f3494 with catch @ 031f3518
                       catch() { ... } // from try @ 031f3510 with catch @ 031f3518 */
  return;
}


// ===== private void CDEPJFBHKID()  [RVA 0x30F3170]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$CDEPJFBHKID @ RVA 0x30F3170

void Nekki_SF2_GUI_Shop_ShopScrollItem__CDEPJFBHKID
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *extraout_x1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  undefined4 extraout_var;
  float fVar5;
  float fVar6;
  UnityEngine_Vector2_o UVar7;
  ulong uVar4;
  
                    /* try { // try from 031f3194 to 032f31bb has its CatchHandler @ 031f3448 */
  if ((DAT_0456643b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&StringLiteral_12047/*"ShopScrollItem.SetItemInfo _layoutElement or rectTransform is null"*/);
    DAT_0456643b = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._layoutElement;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 031f31f0 to 032f321b has its CatchHandler @ 031f3444 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
LAB_031f3378:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_12047/*"ShopScrollItem.SetItemInfo _layoutElement or rectTransform is null"*/,(MethodInfo *)0x0);
    return;
  }
  pUVar2 = (__this->fields)._iconPanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) goto LAB_031f3378;
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar5 = (__this->fields)._DJOIAMEIMOG_k__BackingField.fields.x;
  uVar4 = (ulong)(uint)fVar5;
  fVar6 = (__this->fields)._DJOIAMEIMOG_k__BackingField.fields.y;
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = __this_00, __this_00->klass != UnityEngine_RectTransform_TypeInfo)) {
LAB_031f33c0:
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(__this_01);
  }
                    /* try { // try from 031f3264 to 032f326b has its CatchHandler @ 031f3438 */
  if (fVar5 * fVar5 + fVar6 * fVar6 < 9.9999994e-11) {
    pNVar3 = (__this->fields)._image;
                    /* try { // try from 031f327c to 032f3283 has its CatchHandler @ 031f3440 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031f3288 to 032f328f has its CatchHandler @ 031f343c */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields)._image;
                    /* try { // try from 031f32a0 to 032f32a7 has its CatchHandler @ 031f3434 */
      if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (__this_01 = (UnityEngine_RectTransform_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_031f33b8;
                    /* try { // try from 031f32b0 to 032f32b7 has its CatchHandler @ 031f342c */
                    /* try { // try from 031f32bc to 032f32c3 has its CatchHandler @ 031f3420 */
      if (__this_01->klass != UnityEngine_RectTransform_TypeInfo) goto LAB_031f33c0;
      UVar7 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
      fVar6 = UVar7.fields.y;
      uVar4 = CONCAT44(extraout_var,UVar7.fields.x);
                    /* try { // try from 031f32cc to 032f32e7 has its CatchHandler @ 031f3450 */
    }
  }
  pUVar2 = (__this->fields)._iconPanel;
  if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    fVar5 = (__this->fields).BAFHCDGILKD;
    __this_02 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
      fVar6 = fVar6 + fVar5;
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
      if (bVar1) {
        pUVar2 = (__this->fields)._iconPanel;
        if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto LAB_031f33b8;
        fVar5 = (float)(*(pUVar2->klass->vtable)._33_get_minHeight.methodPtr)
                                 (pUVar2,(pUVar2->klass->vtable)._33_get_minHeight.method);
        fVar6 = fVar6 + fVar5;
      }
      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
        UVar7.fields.x = (float)uVar4;
        UVar7.fields.y = fVar6;
                    /* try { // try from 031f3328 to 032f334b has its CatchHandler @ 031f341c */
        UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar7,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._layoutElement;
        if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar2->klass->vtable)._32_set_minWidth.methodPtr)
                    (uVar4,pUVar2,(pUVar2->klass->vtable)._32_set_minWidth.method);
          pUVar2 = (__this->fields)._layoutElement;
                    /* try { // try from 031f334c to 032f33eb has its CatchHandler @ 031f2f54 */
          if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031f3374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pUVar2->klass->vtable)._34_set_minHeight.methodPtr)
                      ((ulong)(uint)fVar6,pUVar2,(pUVar2->klass->vtable)._34_set_minHeight.method);
            return;
          }
        }
      }
    }
  }
LAB_031f33b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30F36F0]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$.ctor @ RVA 0x30F36F0

void Nekki_SF2_GUI_Shop_ShopScrollItem___ctor
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 031f3614 with catch @ 031f36f0 */
                    /* catch() { ... } // from try @ 031f3608 with catch @ 031f36f4 */
                    /* catch() { ... } // from try @ 031f35f8 with catch @ 031f36f8 */
                    /* catch() { ... } // from try @ 031f36b4 with catch @ 031f36fc */
                    /* catch() { ... } // from try @ 031f35e4 with catch @ 031f3700
                       catch() { ... } // from try @ 031f36c4 with catch @ 031f3700 */
                    /* catch() { ... } // from try @ 031f36bc with catch @ 031f3704 */
                    /* catch() { ... } // from try @ 031f35b8 with catch @ 031f3708
                       catch() { ... } // from try @ 031f36b8 with catch @ 031f3708 */
  if ((DAT_0456643c & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
                    /* try { // try from 031f3720 to 032f3737 has its CatchHandler @ 031f3788 */
    DAT_0456643c = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo,method);
  }
                    /* try { // try from 031f3738 to 032f3777 has its CatchHandler @ 031f357c */
  pSVar1 = SF2Paths__AAHKIHMHJDP((MethodInfo *)0x0);
  (__this->fields).CNMMJHJNNAJ = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).CNMMJHJNNAJ);
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public LayoutElement get_LayoutElement()  [RVA 0x30F3760]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$get_LayoutElement @ RVA 0x30F3760

UnityEngine_UI_LayoutElement_o *
Nekki_SF2_GUI_Shop_ShopScrollItem__get_LayoutElement
          (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._layoutElement;
}


// ===== public int CompareTo(ShopScrollItem IBKIPBJJCPG)  [RVA 0x30F3768]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$CompareTo @ RVA 0x30F3768

int32_t Nekki_SF2_GUI_Shop_ShopScrollItem__CompareTo
                  (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,
                  Nekki_SF2_GUI_Shop_ShopScrollItem_o *IBKIPBJJCPG,MethodInfo *method)

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
                    /* try { // try from 031f3778 to 032f3787 has its CatchHandler @ 031f3788 */
    local_14 = (pHVar2->fields)._JDEHPJEIOCI_k__BackingField;
  }
                    /* catch() { ... } // from try @ 031f3720 with catch @ 031f3788
                       catch() { ... } // from try @ 031f3778 with catch @ 031f3788 */
  if (IBKIPBJJCPG != (Nekki_SF2_GUI_Shop_ShopScrollItem_o *)0x0) {
                    /* try { // try from 031f378c to 032f378f has its CatchHandler @ 031f3798 */
    pHVar3 = (IBKIPBJJCPG->fields).IHKJJFAEEHM;
                    /* try { // try from 031f3790 to 032f379b has its CatchHandler @ 031f357c */
    if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (pHVar3->fields)._JDEHPJEIOCI_k__BackingField;
                    /* catch() { ... } // from try @ 031f378c with catch @ 031f3798 */
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
      iVar1 = System_Int32__CompareTo((int32_t)&local_18,value,(MethodInfo *)0x0);
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IconPanelActive()  [RVA 0x30F37F0]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$get_IconPanelActive @ RVA 0x30F37F0

bool Nekki_SF2_GUI_Shop_ShopScrollItem__get_IconPanelActive
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  
  if ((DAT_0456643d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456643d = 1;
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
    FUN_01bab8c8();
  }
  return false;
}


// ===== public PerksPanel get_PerksPanel()  [RVA 0x30F3884]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$get_PerksPanel @ RVA 0x30F3884

Nekki_SF2_GUI_Shop_PerksPanel_o *
Nekki_SF2_GUI_Shop_ShopScrollItem__get_PerksPanel
          (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._perksPanel;
}


// ===== public HOOAAGABMBL get_ItemInfo()  [RVA 0x30F388C]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$get_ItemInfo @ RVA 0x30F388C

HOOAAGABMBL_o *
Nekki_SF2_GUI_Shop_ShopScrollItem__get_ItemInfo
          (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  return (__this->fields).IHKJJFAEEHM;
}


// ===== public void UpdateItem()  [RVA 0x30F3894]
// Nekki.SF2.GUI.Shop.ShopScrollItem$$UpdateItem @ RVA 0x30F3894

void Nekki_SF2_GUI_Shop_ShopScrollItem__UpdateItem
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Shop_ShopScrollItem__SetItemInfo(__this,(__this->fields).IHKJJFAEEHM,in_x2);
  return;
}

