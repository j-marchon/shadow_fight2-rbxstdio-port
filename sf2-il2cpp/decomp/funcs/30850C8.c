// Nekki.SF2.GUI.Pvp.RandomSelectionModule$$InitContents @ RVA 0x30850C8

void Nekki_SF2_GUI_Pvp_RandomSelectionModule__InitContents
               (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this,System_String_o *HCFOALNNIAI,
               System_String_o *AIAPPFBGDFL,System_String_o *MIBCCGANIIL,
               System_String_o *JPENNNFFCBM,MethodInfo *method)

{
  undefined4 uVar1;
  System_String_o **ppSVar2;
  Nekki_SF2_GUI_Pvp_RandomItem_o *pNVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  float fVar5;
  
  if ((DAT_0456601a & 1) == 0) {
    FUN_01bab630(&StringLiteral_14114);
    DAT_0456601a = 1;
  }
  (__this->fields).KCLCLHMMDJO = 0.0;
  (__this->fields).HDADKFPCEGM = (__this->fields)._StartTime;
  fVar5 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
  pNVar3 = (__this->fields)._RandomItemLeft;
  (__this->fields).OJODPOEPFHO = fVar5 < 0.5;
  if ((pNVar3 != (Nekki_SF2_GUI_Pvp_RandomItem_o *)0x0) &&
     (pNVar4 = (pNVar3->fields)._Preview, pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
    uVar1 = StringLiteral_14114._4_4_;
    (pNVar4->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14114;
    (pNVar4->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
    thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
    pNVar3 = (__this->fields)._RandomItemLeft;
    if ((pNVar3 != (Nekki_SF2_GUI_Pvp_RandomItem_o *)0x0) &&
       (pNVar4 = (pNVar3->fields)._Preview, pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,AIAPPFBGDFL,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._RandomItemRight;
      if ((pNVar3 != (Nekki_SF2_GUI_Pvp_RandomItem_o *)0x0) &&
         (pNVar4 = (pNVar3->fields)._Preview, pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
        uVar1 = StringLiteral_14114._4_4_;
        (pNVar4->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14114;
        (pNVar4->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
        thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
        pNVar3 = (__this->fields)._RandomItemRight;
        if ((pNVar3 != (Nekki_SF2_GUI_Pvp_RandomItem_o *)0x0) &&
           (pNVar4 = (pNVar3->fields)._Preview, pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,JPENNNFFCBM,(MethodInfo *)0x0);
          ppSVar2 = &(__this->fields).OIBMIOMGGAC;
          *ppSVar2 = HCFOALNNIAI;
          thunk_FUN_01c20e04(ppSVar2,HCFOALNNIAI);
          ppSVar2 = &(__this->fields).AEDHBGPDLPB;
          *ppSVar2 = MIBCCGANIIL;
          thunk_FUN_01c20e04(ppSVar2,MIBCCGANIIL);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

