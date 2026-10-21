// Nekki.SF2.GUI.Dialogs.StoryDialog$$GDIKHBMNJPH @ RVA 0x32BFB74

void Nekki_SF2_GUI_Dialogs_StoryDialog__GDIKHBMNJPH
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  IGFGDDANEPE_o *__this_00;
  int64_t iVar2;
  AMJMGFCCAKN_o *pAVar3;
  
  if ((DAT_045674d0 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045674d0 = 1;
  }
  __this_00 = (__this->fields).AAIHPGBKKNM;
  if (__this_00 == (IGFGDDANEPE_o *)0x0) {
    pAVar3 = (__this->fields).GEMEHKONBIB;
    if (pAVar3 == (AMJMGFCCAKN_o *)0x0) {
      (__this->fields).MBLMCOMELHB = (__this->fields).MBLMCOMELHB + -1;
      return;
    }
    iVar2 = (pAVar3->fields).CJKLJJIMECK;
    uVar1 = (MGNPHCAAEIO_TypeInfo->_2).cctor_finished;
  }
  else {
    iVar2 = IGFGDDANEPE__OMMIKNKEKJN(__this_00,(MethodInfo *)0x0);
    uVar1 = (MGNPHCAAEIO_TypeInfo->_2).cctor_finished;
  }
  if (uVar1 == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
  }
  iVar2 = MGNPHCAAEIO__HCDHCLBPBHN(iVar2,(MethodInfo *)0x0);
  (__this->fields).MBLMCOMELHB = iVar2;
  return;
}

