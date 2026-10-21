// TypeDefIndex 2876
// Namespace: Nekki.SF2.GUI.Glyphs
// public class ImageGlyph : Glyph
// Fields:
//   private const string KIOANNOLOEP = "MiscSprites.gold";
//   private static readonly Color GKKLLBCACBA; // 0x0
//   private ResolutionImage <IANGGJCONIH>k__BackingField; // 0x48

// ===== public override void ParseParams(AEGOLGIJEBI.MCGKJAGBFKP ADOIANOKIIK, string NEMHOGELCJL)  [RVA 0x343D698]
// Nekki.SF2.GUI.Glyphs.ImageGlyph$$ParseParams @ RVA 0x343D698

void Nekki_SF2_GUI_Glyphs_ImageGlyph__ParseParams
               (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *__this,AEGOLGIJEBI_MCGKJAGBFKP_o *ADOIANOKIIK,
               System_String_o *NEMHOGELCJL,MethodInfo *method)

{
  bool bVar1;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar2;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_Vector3_array *x;
  System_String_o *__this_00;
  
  if ((DAT_045681f2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_19787/*"name"*/);
    FUN_01bab630(&StringLiteral_9084/*"MiscSprites.gold"*/);
    FUN_01bab630(&StringLiteral_20166/*"path"*/);
    DAT_045681f2 = 1;
  }
  if (ADOIANOKIIK == (AEGOLGIJEBI_MCGKJAGBFKP_o *)0x0) goto LAB_0353d83c;
  pAVar2 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_19787/*"name"*/,(MethodInfo *)0x0
                     );
  pAVar3 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_20166/*"path"*/,(MethodInfo *)0x0
                     );
  if (pAVar3 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    if (NEMHOGELCJL != (System_String_o *)0x0) {
      pNVar4 = (__this->fields)._IANGGJCONIH_k__BackingField;
      if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0353d83c;
      *(System_String_o **)&(pNVar4->fields).super.m_PixelsPerUnitMultiplier = NEMHOGELCJL;
      __this_00 = NEMHOGELCJL;
      goto LAB_0353d7a8;
    }
  }
  else {
    __this_00 = (pAVar3->fields).JAICMIMBIOA;
    if (__this_00 == (System_String_o *)0x0) goto LAB_0353d83c;
    bVar1 = System_String__EndsWith(__this_00,StringLiteral_1492/*"/"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_00 = System_String__Concat(__this_00,StringLiteral_1492/*"/"*/,(MethodInfo *)0x0);
    }
    pNVar4 = (__this->fields)._IANGGJCONIH_k__BackingField;
    if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0353d83c;
    *(System_String_o **)&(pNVar4->fields).super.m_PixelsPerUnitMultiplier = __this_00;
LAB_0353d7a8:
    thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier,__this_00);
  }
  if (pAVar2 != (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    pNVar4 = (__this->fields)._IANGGJCONIH_k__BackingField;
    if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0353d83c;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              (pNVar4,(pAVar2->fields).JAICMIMBIOA,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields)._IANGGJCONIH_k__BackingField;
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    x = (pNVar4->fields).super.super.m_Corners;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar4 = (__this->fields)._IANGGJCONIH_k__BackingField;
      if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0353d83c;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,StringLiteral_9084/*"MiscSprites.gold"*/,(MethodInfo *)0x0);
    }
    Nekki_SF2_GUI_Glyphs_Glyph__ParseParams
              ((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this,ADOIANOKIIK,NEMHOGELCJL,(MethodInfo *)0x0);
    return;
  }
LAB_0353d83c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IDAKIHLDMKG(ResolutionImage CJNHFNHJHPE)  [RVA 0x343D840]
// Nekki.SF2.GUI.Glyphs.ImageGlyph$$IDAKIHLDMKG @ RVA 0x343D840

void Nekki_SF2_GUI_Glyphs_ImageGlyph__IDAKIHLDMKG
               (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *__this,
               Nekki_SF2_GUI_ResolutionImage_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IANGGJCONIH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override float get_ContentWidth()  [RVA 0x343D848]
// Nekki.SF2.GUI.Glyphs.ImageGlyph$$get_ContentWidth @ RVA 0x343D848

float Nekki_SF2_GUI_Glyphs_ImageGlyph__get_ContentWidth
                (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_array *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Rect_o UVar2;
  
  pNVar1 = (__this->fields)._IANGGJCONIH_k__BackingField;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_00 = (pNVar1->fields).super.super.m_Corners,
     __this_00 != (UnityEngine_Vector3_array *)0x0)) {
    UVar2 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)__this_00,(MethodInfo *)0x0);
    return UVar2.fields.m_Width;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x343D874]
// Nekki.SF2.GUI.Glyphs.ImageGlyph$$.ctor @ RVA 0x343D874

void Nekki_SF2_GUI_Glyphs_ImageGlyph___ctor
               (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045681f3 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
    DAT_045681f3 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo,method);
  }
  Nekki_SF2_GUI_Glyphs_Glyph___ctor((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void Awake()  [RVA 0x343D8CC]
// Nekki.SF2.GUI.Glyphs.ImageGlyph$$Awake @ RVA 0x343D8CC

void Nekki_SF2_GUI_Glyphs_ImageGlyph__Awake
               (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Nekki_SF2_GUI_ResolutionImage_o **ppNVar4;
  UnityEngine_RectTransform_o **ppUVar5;
  
  if ((DAT_045681f4 & 1) == 0) {
    FUN_01bab630(&Method_Util_OHBILOGJCLA<ResolutionImage>__);
    FUN_01bab630(&StringLiteral_6864/*"GlyphImage"*/);
    DAT_045681f4 = 1;
  }
  Nekki_SF2_GUI_Glyphs_Glyph__Awake((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this_00,StringLiteral_6864/*"GlyphImage"*/,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pNVar2 = (Nekki_SF2_GUI_ResolutionImage_o *)
             Util__OHBILOGJCLA<object>(pUVar1,Method_Util_OHBILOGJCLA<ResolutionImage>__);
    ppNVar4 = &(__this->fields)._IANGGJCONIH_k__BackingField;
    *ppNVar4 = pNVar2;
    thunk_FUN_01c20e04(ppNVar4,pNVar2);
    pNVar2 = *ppNVar4;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      (*(pNVar2->klass->vtable)._25_set_raycastTarget.methodPtr)
                (pNVar2,0,(pNVar2->klass->vtable)._25_set_raycastTarget.method);
      if (*ppNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)*ppNVar4,(MethodInfo *)0x0);
        ppUVar5 = &(__this->fields).super._MPAMHJJKABE_k__BackingField;
        *ppUVar5 = pUVar3;
        thunk_FUN_01c20e04(ppUVar5,pUVar3);
        pUVar3 = *ppUVar5;
        if (DAT_0455fa77 == '\0') {
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
          DAT_0455fa77 = '\x01';
        }
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    ((UnityEngine_Transform_o *)pUVar3,
                     (UnityEngine_Vector3_o)
                     (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          pUVar3 = *ppUVar5;
          if (DAT_0455fa7f == '\0') {
            FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
            DAT_0455fa7f = '\x01';
          }
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_Transform__set_localScale
                      ((UnityEngine_Transform_o *)pUVar3,
                       (UnityEngine_Vector3_o)
                       (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).fields,
                       (MethodInfo *)0x0);
            if (*ppUVar5 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_sizeDelta
                        (*ppUVar5,(UnityEngine_Vector2_o)0x4248000042480000,(MethodInfo *)0x0);
              pUVar1 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
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


// ===== private static void .cctor()  [RVA 0x343DA80]
// Nekki.SF2.GUI.Glyphs.ImageGlyph$$.cctor @ RVA 0x343DA80

void Nekki_SF2_GUI_Glyphs_ImageGlyph___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Glyphs_ImageGlyph_StaticFields *pNVar1;
  
  if ((DAT_045681f5 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo);
    DAT_045681f5 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo->static_fields;
  (pNVar1->GKKLLBCACBA).fields.b = 0.5;
  (pNVar1->GKKLLBCACBA).fields.a = 1.0;
  (pNVar1->GKKLLBCACBA).fields.r = 0.5;
  (pNVar1->GKKLLBCACBA).fields.g = 0.5;
  return;
}


// ===== public override void Refresh(List<Bounds> PBEBNABDPFF, float COKDAPPLGKH, bool KLJAOIEBNHL)  [RVA 0x343DAD0]
// Nekki.SF2.GUI.Glyphs.ImageGlyph$$Refresh @ RVA 0x343DAD0

void Nekki_SF2_GUI_Glyphs_ImageGlyph__Refresh
               (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *__this,
               System_Collections_Generic_List_Bounds__o *PBEBNABDPFF,float COKDAPPLGKH,
               bool KLJAOIEBNHL,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  BOGDEGPCIJI_o *pBVar2;
  Nekki_SF2_GUI_Glyphs_ImageGlyph_StaticFields *pNVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_045681f6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo);
    DAT_045681f6 = 1;
  }
  pBVar2 = (__this->fields).super._FAPFIEABBBO_k__BackingField;
  if ((pBVar2 != (BOGDEGPCIJI_o *)0x0) &&
     (pNVar1 = (__this->fields)._IANGGJCONIH_k__BackingField,
     pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
    fVar6 = (pBVar2->fields)._BFEKLJGLHEH_k__BackingField.fields.b;
    fVar7 = (pBVar2->fields)._BFEKLJGLHEH_k__BackingField.fields.a;
    fVar5 = (pBVar2->fields)._BFEKLJGLHEH_k__BackingField.fields.g;
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              ((ulong)(uint)(pBVar2->fields)._BFEKLJGLHEH_k__BackingField.fields.r,fVar5,fVar6,fVar7
               ,pNVar1,(pNVar1->klass->vtable)._23_set_color.method);
    if (KLJAOIEBNHL) {
      pNVar1 = (__this->fields)._IANGGJCONIH_k__BackingField;
      if (pNVar1 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0353dbec;
      fVar4 = (float)(*(pNVar1->klass->vtable)._22_get_color.methodPtr)
                               (pNVar1,(pNVar1->klass->vtable)._22_get_color.method);
      if ((Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo->static_fields;
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                ((ulong)(uint)(fVar4 * (pNVar3->GKKLLBCACBA).fields.r),
                 fVar5 * (pNVar3->GKKLLBCACBA).fields.g,fVar6 * (pNVar3->GKKLLBCACBA).fields.b,
                 fVar7 * (pNVar3->GKKLLBCACBA).fields.a,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
    }
    Nekki_SF2_GUI_Glyphs_Glyph__Refresh
              ((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this,PBEBNABDPFF,COKDAPPLGKH,KLJAOIEBNHL,
               (MethodInfo *)0x0);
    return;
  }
LAB_0353dbec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override float get_Ratio()  [RVA 0x343DBF0]
// Nekki.SF2.GUI.Glyphs.ImageGlyph$$get_Ratio @ RVA 0x343DBF0

float Nekki_SF2_GUI_Glyphs_ImageGlyph__get_Ratio
                (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_array *pUVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_Rect_o UVar3;
  UnityEngine_Rect_o UVar4;
  
  pNVar2 = (__this->fields)._IANGGJCONIH_k__BackingField;
  if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar1 = (pNVar2->fields).super.super.m_Corners, pUVar1 != (UnityEngine_Vector3_array *)0x0))
  {
    UVar3 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)pUVar1,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._IANGGJCONIH_k__BackingField;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar1 = (pNVar2->fields).super.super.m_Corners, pUVar1 != (UnityEngine_Vector3_array *)0x0)
       ) {
      UVar4 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)pUVar1,(MethodInfo *)0x0);
      return UVar3.fields.m_Height / UVar4.fields.m_Width;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ResolutionImage get_Image()  [RVA 0x343DC44]
// Nekki.SF2.GUI.Glyphs.ImageGlyph$$get_Image @ RVA 0x343DC44

Nekki_SF2_GUI_ResolutionImage_o *
Nekki_SF2_GUI_Glyphs_ImageGlyph__get_Image
          (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *__this,MethodInfo *method)

{
  return (__this->fields)._IANGGJCONIH_k__BackingField;
}

