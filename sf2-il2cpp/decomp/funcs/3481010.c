// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$HasPlayer @ RVA 0x3481010

bool Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__HasPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,int64_t OGPGLGPMEPD,
               MethodInfo *method)

{
  bool bVar1;
  CNIFAIKGHKO_o *__this_00;
  
  __this_00 = (__this->fields).JECONAHEKIN;
  if (__this_00 != (CNIFAIKGHKO_o *)0x0) {
                    /* try { // try from 03581020 to 03681027 has its CatchHandler @ 0358120c */
    bVar1 = CNIFAIKGHKO__NFJIIGCLFOF(__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03581028 to 0368103b has its CatchHandler @ 035811f8 */
  FUN_01bab8c8();
}

