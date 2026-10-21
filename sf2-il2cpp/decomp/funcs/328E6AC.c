// Nekki.SF2.GUI.Dialogs.LotteryDialog.HEPMHINKNON$$CONLJALLIMF @ RVA 0x328E6AC

bool Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON__CONLJALLIMF
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_o *__this,DILGLGMKOFG_o *slot,
               MethodInfo *method)

{
  System_Collections_Generic_List_DILGLGMKOFG__o *__this_00;
  DILGLGMKOFG_o *pDVar1;
  
  if ((DAT_04567301 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Item__);
    DAT_04567301 = 1;
  }
  __this_00 = (__this->fields).focusItems;
  if (__this_00 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
    pDVar1 = (DILGLGMKOFG_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,0,
                        Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Item__);
    return pDVar1 == slot;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

