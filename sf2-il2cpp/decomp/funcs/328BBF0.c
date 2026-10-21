// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PLCHHHDDJJN @ RVA 0x328BBF0

bool Nekki_SF2_GUI_Dialogs_LotteryDialog__PLCHHHDDJJN
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,DILGLGMKOFG_o *NFIGEAOPJKM,
               MethodInfo *method)

{
  bool bVar1;
  BECIPDJBAOG_o *pBVar2;
  
  if ((DAT_045672dd & 1) == 0) {
    FUN_01bab630(&StringLiteral_6716);
    DAT_045672dd = 1;
  }
  if (NFIGEAOPJKM != (DILGLGMKOFG_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((NFIGEAOPJKM->fields).super._COIPKAKHDFP_k__BackingField,StringLiteral_6716,
                       (MethodInfo *)0x0);
    if (bVar1) {
      pBVar2 = (__this->fields).FBODAFDBNLH;
      if (pBVar2 == (BECIPDJBAOG_o *)0x0) goto LAB_0338bc6c;
      bVar1 = (NFIGEAOPJKM->fields).super._HFPMLGFDOKC_k__BackingField ==
              (pBVar2->fields).EMOLIBOCKJK;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0338bc6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

