// Nekki.SF2.GUI.Glyphs.Glyph$$ParseParams @ RVA 0x336E2DC

void Nekki_SF2_GUI_Glyphs_Glyph__ParseParams
               (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,AEGOLGIJEBI_MCGKJAGBFKP_o *ADOIANOKIIK,
               System_String_o *NEMHOGELCJL,MethodInfo *method)

{
  UnityEngine_Vector2_o MJBMLNKAPGC;
  UnityEngine_Color_o EFJKPCADGJH;
  int32_t DHNDOPBLBOI;
  int32_t iVar1;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar2;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar3;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar4;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar5;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar6;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar7;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar8;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar9;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar10;
  BOGDEGPCIJI_o *__this_00;
  BOGDEGPCIJI_o **ppBVar11;
  bool NBKBMNOLGHN;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  UnityEngine_Vector2_o POBPDPGICBA;
  UnityEngine_Color_Fields local_b0;
  
  if ((DAT_04567aff & 1) == 0) {
    FUN_01bab630(&BOGDEGPCIJI_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<GPDLLNADCPK>__);
    FUN_01bab630(&StringLiteral_6491);
    FUN_01bab630(&StringLiteral_19686);
    FUN_01bab630(&StringLiteral_19977);
    FUN_01bab630(&StringLiteral_19598);
    FUN_01bab630(&StringLiteral_19976);
    FUN_01bab630(&StringLiteral_22160);
    FUN_01bab630(&StringLiteral_21872);
    FUN_01bab630(&StringLiteral_17122);
    FUN_01bab630(&StringLiteral_20672);
    DAT_04567aff = 1;
  }
  if (ADOIANOKIIK == (AEGOLGIJEBI_MCGKJAGBFKP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (__this->fields)._CBEOMKIMKNO_k__BackingField = (ADOIANOKIIK->fields).super.FJGOCJKJMAE;
  pAVar2 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_17122,(MethodInfo *)0x0
                     );
  pAVar3 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_21872,(MethodInfo *)0x0
                     );
  pAVar4 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_20672,(MethodInfo *)0x0
                     );
  pAVar5 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_19976,(MethodInfo *)0x0
                     );
  pAVar6 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_19977,(MethodInfo *)0x0
                     );
  pAVar7 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_22160,(MethodInfo *)0x0
                     );
  pAVar8 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_19686,(MethodInfo *)0x0
                     );
  pAVar9 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_19598,(MethodInfo *)0x0
                     );
  pAVar10 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                      ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_6491,(MethodInfo *)0x0
                      );
  auVar17 = NEON_fmov(0x3f800000,4);
  local_b0._8_8_ = auVar17._8_8_;
  local_b0._0_8_ = auVar17._0_8_;
  if (pAVar2 != (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    UnityEngine_ColorUtility__TryParseHtmlString
              ((pAVar2->fields).JAICMIMBIOA,(UnityEngine_Color_o *)&local_b0,(MethodInfo *)0x0);
  }
  if (pAVar9 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    fVar12 = 1000.0;
  }
  else {
    fVar12 = PCOEHCPGBBG__OFFODGKLGOP((pAVar9->fields).JAICMIMBIOA,0.0,(MethodInfo *)0x0);
    fVar12 = (float)NEON_fminnm(fVar12,0x447a0000);
  }
  if (pAVar8 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = PCOEHCPGBBG__OFFODGKLGOP((pAVar8->fields).JAICMIMBIOA,0.0,(MethodInfo *)0x0);
  }
  if (pAVar3 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    fVar14 = (float)(*(__this->klass->vtable)._8_unknown.methodPtr)
                              (__this,(__this->klass->vtable)._8_unknown.method);
    if (fVar14 <= fVar12) {
      fVar12 = fVar14;
    }
    if (fVar14 < fVar13) {
      fVar12 = fVar13;
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565e5d == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565e5d = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar13 = fVar12 * FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH;
  }
  else {
    fVar14 = PCOEHCPGBBG__OFFODGKLGOP((pAVar3->fields).JAICMIMBIOA,0.0,(MethodInfo *)0x0);
    if ((fVar13 <= fVar14) && (fVar13 = fVar12, fVar14 <= fVar12)) {
      fVar13 = fVar14;
    }
  }
  if (pAVar4 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    fVar12 = 1.0;
  }
  else {
    fVar12 = PCOEHCPGBBG__OFFODGKLGOP((pAVar4->fields).JAICMIMBIOA,0.0,(MethodInfo *)0x0);
  }
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  fVar14 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
  if (pAVar5 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    fVar15 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
  }
  else {
    fVar15 = PCOEHCPGBBG__OFFODGKLGOP((pAVar5->fields).JAICMIMBIOA,0.0,(MethodInfo *)0x0);
  }
  if (pAVar6 != (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    fVar14 = PCOEHCPGBBG__OFFODGKLGOP((pAVar6->fields).JAICMIMBIOA,0.0,(MethodInfo *)0x0);
  }
  if (pAVar7 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    DHNDOPBLBOI = 1;
  }
  else {
    DHNDOPBLBOI = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                            ((pAVar7->fields).JAICMIMBIOA,1,
                             Method_PCOEHCPGBBG_AICKIDLLIBK<GPDLLNADCPK>__);
  }
  fVar16 = (float)(*(__this->klass->vtable)._6_unknown.methodPtr)
                            (__this,(__this->klass->vtable)._6_unknown.method);
  if (pAVar10 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    NBKBMNOLGHN = true;
  }
  else {
    iVar1 = PCOEHCPGBBG__JBGCINPPLAC((pAVar10->fields).JAICMIMBIOA,1,(MethodInfo *)0x0);
    NBKBMNOLGHN = 0 < iVar1;
  }
  EFJKPCADGJH.fields.b = local_b0.b;
  EFJKPCADGJH.fields.a = local_b0.a;
  EFJKPCADGJH.fields.r = local_b0.r;
  EFJKPCADGJH.fields.g = local_b0.g;
  __this_00 = (BOGDEGPCIJI_o *)thunk_FUN_01bda818(BOGDEGPCIJI_TypeInfo);
  MJBMLNKAPGC.fields.y = fVar14;
  MJBMLNKAPGC.fields.x = fVar15;
  POBPDPGICBA.fields.y = fVar13 * fVar16;
  POBPDPGICBA.fields.x = fVar13;
  BOGDEGPCIJI___ctor(__this_00,POBPDPGICBA,fVar12,DHNDOPBLBOI,EFJKPCADGJH,MJBMLNKAPGC,NBKBMNOLGHN,
                     (MethodInfo *)0x0);
  ppBVar11 = &(__this->fields)._FAPFIEABBBO_k__BackingField;
  *ppBVar11 = __this_00;
  thunk_FUN_01c20e04(ppBVar11,__this_00);
  return;
}

