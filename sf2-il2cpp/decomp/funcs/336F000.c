// Nekki.SF2.GUI.Shop.PerksPanel$$ShowPerkHintByIndex @ RVA 0x336F000

void Nekki_SF2_GUI_Shop_PerksPanel__ShowPerkHintByIndex
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,int32_t JJMCKHDALCF,bool DBKMEBGOHLP,
               bool LCPACBDHJCH,MethodInfo *method)

{
  int32_t index;
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_PerkUI__o *__this_00;
  Nekki_SF2_GUI_Common_PerkUI_o *FLLFOOBLPLJ;
  
  if ((DAT_04567b08 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_get_Item__);
    DAT_04567b08 = 1;
  }
  __this_00 = (__this->fields).LLMOAIMNMHM;
  if (__this_00 != (System_Collections_Generic_List_PerkUI__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 != 0) {
      iVar2 = iVar1 + -1;
      if (JJMCKHDALCF <= iVar2) {
        iVar2 = JJMCKHDALCF;
      }
      index = 0;
      if (-1 < JJMCKHDALCF) {
        index = iVar2;
      }
      FLLFOOBLPLJ = (Nekki_SF2_GUI_Common_PerkUI_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               Method_System_Collections_Generic_List<PerkUI>_get_Item__);
      Nekki_SF2_GUI_Shop_PerksPanel__ShowPerkHint(__this,FLLFOOBLPLJ,DBKMEBGOHLP,LCPACBDHJCH,method)
      ;
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

