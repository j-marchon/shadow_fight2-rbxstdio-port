// Nekki.SF2.GUI.Dialogs.LotteryDialog$$FABPNIKKPMN @ RVA 0x328E018

void Nekki_SF2_GUI_Dialogs_LotteryDialog__FABPNIKKPMN
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  byte bVar1;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *__this_00;
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *HBHBCBJANIC;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045672f7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo);
    DAT_045672f7 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).Scroller;
  if (__this_00 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  method_00 = (MethodInfo *)0x0;
  HBHBCBJANIC = (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)
                EnhancedUI_EnhancedScroller_EnhancedScroller__GetCellViewAtDataIndex
                          (__this_00,(__this->fields).GLGOLGJBCAK,(MethodInfo *)0x0);
  if (HBHBCBJANIC != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (HBHBCBJANIC->klass->_2).naturalAligment) {
      if ((HBHBCBJANIC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo) {
        HBHBCBJANIC = (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0;
      }
      goto LAB_0338e098;
    }
  }
  HBHBCBJANIC = (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0;
LAB_0338e098:
  Nekki_SF2_GUI_Dialogs_LotteryDialog__OLLLJOMGDKI(__this,HBHBCBJANIC,method_00);
  return;
}

