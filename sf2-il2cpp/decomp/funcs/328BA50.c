// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PEGBLLJOOHM @ RVA 0x328BA50

void Nekki_SF2_GUI_Dialogs_LotteryDialog__PEGBLLJOOHM
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,
               EnhancedUI_EnhancedScroller_EnhancedScroller_o *MLOLBLIGDHM,int32_t FKPMOBKJAAI,
               int32_t DHEJIHJMOGL,
               EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *BDJDEAKFBJF,
               MethodInfo *method)

{
  byte bVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)FKPMOBKJAAI;
  if ((DAT_045672dc & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo,MLOLBLIGDHM,method_00,DHEJIHJMOGL
                );
    DAT_045672dc = 1;
  }
  if ((__this->fields).OIKLOAGFFGO != 2) {
    return;
  }
  if (BDJDEAKFBJF != (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (BDJDEAKFBJF->klass->_2).naturalAligment) {
      if ((BDJDEAKFBJF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo) {
        BDJDEAKFBJF = (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)0x0;
      }
      goto LAB_0338bad8;
    }
  }
  BDJDEAKFBJF = (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)0x0;
LAB_0338bad8:
  Nekki_SF2_GUI_Dialogs_LotteryDialog__OLLLJOMGDKI
            (__this,(Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)BDJDEAKFBJF,method_00);
  return;
}

