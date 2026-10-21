// Nekki.SF2.GUI.Dialogs.LotteryDialog$$CFHLCAMKGPN @ RVA 0x328DA70

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_LotteryDialog__CFHLCAMKGPN
          (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,int32_t MMOKLAAAIPP,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_LotteryDialog_ABIBBAOFADE_o *__this_00;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_o **ppNVar1;
  
  if ((DAT_045672f1 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_ABIBBAOFADE_TypeInfo);
    DAT_045672f1 = 1;
  }
  __this_00 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_ABIBBAOFADE_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_LotteryDialog_ABIBBAOFADE_TypeInfo);
  Nekki_SF2_GUI_Dialogs_LotteryDialog_ABIBBAOFADE___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_ABIBBAOFADE_o *)0x0) {
    ppNVar1 = &(__this_00->fields).__4__this;
    *ppNVar1 = __this;
    thunk_FUN_01c20e04(ppNVar1,__this);
    (__this_00->fields).v = MMOKLAAAIPP;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

