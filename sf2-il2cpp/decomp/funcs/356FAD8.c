// Nekki.SF2.GUI.Dialogs.LotteryDialogCell$$get_CancellingItem @ RVA 0x356FAD8

System_String_o *
Nekki_SF2_GUI_Dialogs_LotteryDialogCell__get_CancellingItem
          (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *__this,MethodInfo *method)

{
  byte bVar1;
  BCOICIIDFPD_o *pBVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
                    /* try { // try from 0366fad8 to 0376fadf has its CatchHandler @ 03672ca8 */
                    /* try { // try from 0366faec to 0376faf3 has its CatchHandler @ 03672ca4 */
  if ((DAT_04568c54 & 1) == 0) {
    auVar3 = FUN_01bab630(&DILGLGMKOFG_TypeInfo);
    DAT_04568c54 = 1;
  }
                    /* try { // try from 0366fb04 to 0376fb0b has its CatchHandler @ 03672ca0 */
  pBVar2 = (__this->fields).super.RewardData;
  if (pBVar2 != (BCOICIIDFPD_o *)0x0) {
                    /* try { // try from 0366fb0c to 0376fb1f has its CatchHandler @ 03673058 */
    bVar1 = (DILGLGMKOFG_TypeInfo->_2).naturalAligment;
                    /* try { // try from 0366fb24 to 0376fb2f has its CatchHandler @ 03672c9c */
    if ((bVar1 <= (pBVar2->klass->_2).naturalAligment) &&
       ((pBVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)DILGLGMKOFG_TypeInfo))
    {
                    /* try { // try from 0366fb48 to 0376fb4b has its CatchHandler @ 03673328 */
                    /* try { // try from 0366fb4c to 0376fb4f has its CatchHandler @ 03672bd0 */
      return (System_String_o *)pBVar2[1].klass;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

