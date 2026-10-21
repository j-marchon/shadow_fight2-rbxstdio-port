// Nekki.SF2.GUI.Map.MapScene$$OIFGCKKJBLI @ RVA 0x3586388

void Nekki_SF2_GUI_Map_MapScene__OIFGCKKJBLI
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  FKDLCJJOGIP_o *pFVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((__this->fields).IAAABJBDEMK == 0) {
    pFVar2 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pFVar2 != (FKDLCJJOGIP_o *)0x0) {
      bVar1 = FKDLCJJOGIP__PMINMFLPJCB(pFVar2,(MethodInfo *)0x0);
      method = extraout_x1;
      if (!bVar1) goto LAB_036863d0;
      pFVar2 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pFVar2 != (FKDLCJJOGIP_o *)0x0) {
        FKDLCJJOGIP__LGBOGFICFPF(pFVar2,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Map_MapScene__SetRaidMode(__this,method_00);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_036863d0:
  Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method);
  return;
}

