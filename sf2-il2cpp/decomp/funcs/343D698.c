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
    FUN_01bab630(&StringLiteral_1492);
    FUN_01bab630(&StringLiteral_19787);
    FUN_01bab630(&StringLiteral_9084);
    FUN_01bab630(&StringLiteral_20166);
    DAT_045681f2 = 1;
  }
  if (ADOIANOKIIK == (AEGOLGIJEBI_MCGKJAGBFKP_o *)0x0) goto LAB_0353d83c;
  pAVar2 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_19787,(MethodInfo *)0x0
                     );
  pAVar3 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_20166,(MethodInfo *)0x0
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
    bVar1 = System_String__EndsWith(__this_00,StringLiteral_1492,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_00 = System_String__Concat(__this_00,StringLiteral_1492,(MethodInfo *)0x0);
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
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,StringLiteral_9084,(MethodInfo *)0x0);
    }
    Nekki_SF2_GUI_Glyphs_Glyph__ParseParams
              ((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this,ADOIANOKIIK,NEMHOGELCJL,(MethodInfo *)0x0);
    return;
  }
LAB_0353d83c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

