// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$ScrollToItem @ RVA 0x317F130

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__ScrollToItem
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               int32_t OGPGLGPMEPD,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  int32_t FIONJFAMAEJ;
  long lVar2;
  
  if ((DAT_045669ad & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_045669ad = 1;
  }
  pNVar1 = (__this->fields)._scroll;
  (__this->fields).PNIMHIAPIMJ = false;
  if (pNVar1 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_0327f1e0;
  if (OGPGLGPMEPD < 1) {
    FIONJFAMAEJ = 1;
LAB_0327f198:
    Nekki_SF2_GUI_SimpleScroll__RollItemsSiblingOrder(pNVar1,FIONJFAMAEJ,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._scroll;
    if (pNVar1 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_0327f1e0;
    Nekki_SF2_GUI_SimpleScroll__RebuildLayout(pNVar1,(MethodInfo *)0x0);
  }
  else {
    lVar2 = *(long *)&(pNVar1->fields)._snapEase;
    if (lVar2 == 0) goto LAB_0327f1e0;
    if (*(int *)(lVar2 + 0x18) + -1 <= OGPGLGPMEPD) {
      FIONJFAMAEJ = -1;
      goto LAB_0327f198;
    }
  }
  pNVar1 = (__this->fields)._scroll;
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToItem(pNVar1,OGPGLGPMEPD,0.0,8,(MethodInfo *)0x0);
    (__this->fields).PNIMHIAPIMJ = true;
    return;
  }
LAB_0327f1e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

