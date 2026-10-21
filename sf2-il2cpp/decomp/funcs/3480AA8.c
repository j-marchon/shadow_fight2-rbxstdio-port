// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$ScrollToItem @ RVA 0x3480AA8

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__ScrollToItem
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,int32_t OGPGLGPMEPD,
               float LFJGFLNMBMC,MethodInfo *method)

{
  int32_t OGPGLGPMEPD_00;
  int32_t iVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  long lVar4;
  
  if ((DAT_0456837d & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_0456837d = 1;
  }
  pNVar3 = (__this->fields)._scroll;
  if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                      (*(System_Collections_Generic_List_T__o **)&(pNVar3->fields)._snapEase,
                       Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    if (bVar2) {
      return;
    }
    pNVar3 = (__this->fields)._scroll;
    if ((pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
       (lVar4 = *(long *)&(pNVar3->fields)._snapEase, lVar4 != 0)) {
      iVar1 = *(int *)(lVar4 + 0x18) + -1;
      if (OGPGLGPMEPD <= iVar1) {
        iVar1 = OGPGLGPMEPD;
      }
      OGPGLGPMEPD_00 = 0;
      if (-1 < OGPGLGPMEPD) {
        OGPGLGPMEPD_00 = iVar1;
      }
      Nekki_SF2_GUI_SimpleScroll__ScrollToItem
                (pNVar3,OGPGLGPMEPD_00,LFJGFLNMBMC,8,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

