// Nekki.SF2.GUI.TextPic$$JPIJBLCPOGM @ RVA 0x30B6A04

void Nekki_SF2_GUI_TextPic__JPIJBLCPOGM(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Action_o *__this_00;
  Nekki_SF2_GUI_StrikeThroughTextLine_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_04;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar3;
  MethodInfo *method_05;
  
  if ((DAT_04566211 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12901);
    DAT_04566211 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).NFECDKAEFJL;
  if (__this_00 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__ILAMEAMIMMP
                    ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)__this_00,method);
  if (iVar2 == 0) {
    Nekki_SF2_GUI_TextPic__MGJFCJLEHLC(__this,method_00);
    return;
  }
  bVar1 = Nekki_SF2_GUI_TextPic__get_HasGlyphs(__this,method_00);
  pMVar3 = method_01;
  if (bVar1) {
    Nekki_SF2_GUI_TextPic__FKGOGDIMOEP(__this,method_01);
    Nekki_SF2_GUI_TextPic__KBIGLOGHNNM(__this,method_02);
    Nekki_SF2_GUI_TextPic__GEDECBAJOBH(__this,method_03);
    pMVar3 = extraout_x1_00;
  }
  bVar1 = Nekki_SF2_GUI_TextPic__BBHONBCGBOL(__this,pMVar3);
  pMVar3 = method_04;
  if ((!bVar1) ||
     (bVar1 = Nekki_SF2_GUI_TextPic__HOBJFEPMIGH(__this,method_04), pMVar3 = extraout_x1_01, bVar1))
  {
    Nekki_SF2_GUI_TextPic__LKJOHANKEDP(__this,pMVar3);
    pMVar3 = extraout_x1_02;
  }
  bVar1 = Nekki_SF2_GUI_TextPic__get_HasGlyphs(__this,pMVar3);
  if (bVar1) {
    Nekki_SF2_GUI_TextPic__IKJOHPDHMME(__this,method_05);
  }
  __this_01 = (Nekki_SF2_GUI_StrikeThroughTextLine_o *)(__this->fields)._KOKCPBMJANE_k__BackingField
  ;
  if (__this_01 != (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0) {
    Nekki_SF2_GUI_StrikeThroughTextLine__ComputePositions
              (__this_01,(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
               (MethodInfo *)0x0);
    return;
  }
  return;
}

