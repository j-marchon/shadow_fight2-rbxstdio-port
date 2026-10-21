// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$GetItemsCount @ RVA 0x317EA24

int32_t Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__GetItemsCount
                  (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
                  MethodInfo *method)

{
  System_Collections_Generic_List_IILNJJJFGLL__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_045669a9 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<IILNJJJFGLL>_get_Count__);
    DAT_045669a9 = 1;
  }
  pSVar1 = (__this->fields).KNPKLNHJLEN;
  if (pSVar1 != (System_Collections_Generic_List_IILNJJJFGLL__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

