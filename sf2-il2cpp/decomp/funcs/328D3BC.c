// Nekki.SF2.GUI.Dialogs.LotteryDialog$$HMHMPPJOPMO @ RVA 0x328D3BC

bool Nekki_SF2_GUI_Dialogs_LotteryDialog__HMHMPPJOPMO
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,DILGLGMKOFG_o *NFIGEAOPJKM,
               MethodInfo *method)

{
  bool bVar1;
  BECIPDJBAOG_o *pBVar2;
  
                    /* catch() { ... } // from try @ 0338d1cc with catch @ 0338d3bc */
                    /* catch() { ... } // from try @ 0338d1e8 with catch @ 0338d3c0 */
  if ((DAT_045672e9 & 1) == 0) {
                    /* try { // try from 0338d3e0 to 0348d3e3 has its CatchHandler @ 0338d3f0 */
    FUN_01bab630(&StringLiteral_11028);
    DAT_045672e9 = 1;
  }
  if (NFIGEAOPJKM != (DILGLGMKOFG_o *)0x0) {
                    /* catch() { ... } // from try @ 0338d3e0 with catch @ 0338d3f0 */
                    /* try { // try from 0338d400 to 0348d46f has its CatchHandler @ 0338d484 */
    bVar1 = System_String__op_Equality
                      ((NFIGEAOPJKM->fields).super._COIPKAKHDFP_k__BackingField,StringLiteral_11028,
                       (MethodInfo *)0x0);
    if (bVar1) {
      pBVar2 = (__this->fields).FBODAFDBNLH;
      if (pBVar2 == (BECIPDJBAOG_o *)0x0) goto LAB_0338d438;
      bVar1 = (NFIGEAOPJKM->fields).super._HFPMLGFDOKC_k__BackingField ==
              (pBVar2->fields).NLLKMEMKBAF;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0338d438:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

