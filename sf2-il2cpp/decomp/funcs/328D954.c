// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GetCellView @ RVA 0x328D954

EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *
Nekki_SF2_GUI_Dialogs_LotteryDialog__GetCellView
          (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,
          EnhancedUI_EnhancedScroller_EnhancedScroller_o *MLOLBLIGDHM,int32_t DHEJIHJMOGL,
          int32_t FKPMOBKJAAI,MethodInfo *method)

{
  byte bVar1;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *__this_01;
  System_Collections_Generic_List_DILGLGMKOFG__o *__this_02;
  BCOICIIDFPD_o *IMMNELPBGIF;
  
  if ((DAT_045672ee & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Item__,MLOLBLIGDHM,
                 DHEJIHJMOGL,FKPMOBKJAAI);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo);
    DAT_045672ee = 1;
  }
  __this_00 = (__this->fields).Scroller;
  if (__this_00 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_0338da24;
  __this_01 = (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)
              EnhancedUI_EnhancedScroller_EnhancedScroller__GetCellView
                        (__this_00,
                         (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)
                         (__this->fields).LotteryCellPrefab,(MethodInfo *)0x0);
  if (__this_01 == (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)0x0) {
LAB_0338d9c8:
    __this_01 = (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo->_2).naturalAligment;
    if ((__this_01->klass->_2).naturalAligment < bVar1) goto LAB_0338d9c8;
    if ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo) {
      __this_01 = (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)0x0;
    }
  }
  __this_02 = (__this->fields).HPJNLAOAJJE;
  if ((__this_02 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) &&
     (IMMNELPBGIF = (BCOICIIDFPD_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_02,DHEJIHJMOGL,
                               Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Item__),
     __this_01 != (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)0x0)) {
    Nekki_SF2_GUI_Dialogs_BaseRewardCell__SetData(__this_01,IMMNELPBGIF,(MethodInfo *)0x0);
    return (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)__this_01;
  }
LAB_0338da24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

