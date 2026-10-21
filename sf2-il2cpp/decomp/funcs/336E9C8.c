// Nekki.SF2.GUI.Glyphs.Glyph$$Create @ RVA 0x336E9C8

Nekki_SF2_GUI_Glyphs_Glyph_o *
Nekki_SF2_GUI_Glyphs_Glyph__Create
          (AEGOLGIJEBI_JDFHIMLMEJF_o *ADOIANOKIIK,UnityEngine_Transform_o *JJHEGPBBMLG,
          UnityEngine_GameObject_array *KGGEIJMLEGC,MethodInfo *method)

{
  uint uVar1;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar2;
  Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *pNVar3;
  Nekki_SF2_GUI_Glyphs_ImageGlyph_o *pNVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar5;
  UnityEngine_GameObject_o *HMBLEHNKDIH;
  
  if ((DAT_04567b03 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
    FUN_01bab630(&StringLiteral_20268);
    DAT_04567b03 = 1;
  }
  if (ADOIANOKIIK != (AEGOLGIJEBI_JDFHIMLMEJF_o *)0x0) {
    pAVar2 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK(ADOIANOKIIK,StringLiteral_20268,(MethodInfo *)0x0)
    ;
    if (pAVar2 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
      pMVar5 = extraout_x1;
      if ((Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar5 = extraout_x1_00;
      }
      pNVar4 = Nekki_SF2_GUI_Glyphs_Glyph__HFBOFKPLLBG(JJHEGPBBMLG,pMVar5);
      return (Nekki_SF2_GUI_Glyphs_Glyph_o *)pNVar4;
    }
    pMVar5 = (MethodInfo *)0x0;
    uVar1 = PCOEHCPGBBG__JBGCINPPLAC((pAVar2->fields).JAICMIMBIOA,0,(MethodInfo *)0x0);
    if (KGGEIJMLEGC != (UnityEngine_GameObject_array *)0x0) {
      if (uVar1 < (uint)KGGEIJMLEGC->max_length) {
        HMBLEHNKDIH = KGGEIJMLEGC->m_Items[(int)uVar1];
        if ((Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
        }
        pNVar3 = Nekki_SF2_GUI_Glyphs_Glyph__LDOABBLILEB(HMBLEHNKDIH,JJHEGPBBMLG,pMVar5);
        return (Nekki_SF2_GUI_Glyphs_Glyph_o *)pNVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

