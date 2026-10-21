// Nekki.SF2.GUI.Map.MapButtonsPanel.CLNHLGLONKI$$MCJHBJAFAKI @ RVA 0x3593FE8

bool Nekki_SF2_GUI_Map_MapButtonsPanel_CLNHLGLONKI__MCJHBJAFAKI
               (Nekki_SF2_GUI_Map_MapButtonsPanel_CLNHLGLONKI_o *__this,
               Nekki_SF2_GUI_Map_MapButton_o *b,MethodInfo *method)

{
  bool bVar1;
  FKNCNNOOOIO_o *pFVar2;
  FKNCNNOOOIO_o *pFVar3;
  
  if (((b != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) &&
      (pFVar2 = (b->fields).AEPNEAIEKOL, pFVar2 != (FKNCNNOOOIO_o *)0x0)) &&
     (pFVar3 = (__this->fields).buttonInfo, pFVar3 != (FKNCNNOOOIO_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((pFVar2->fields).JIJLBFGKNJK,(pFVar3->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

