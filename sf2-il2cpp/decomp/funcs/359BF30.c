// Nekki.SF2.GUI.Profile.SubItem$$Choose @ RVA 0x359BF30

void Nekki_SF2_GUI_Profile_SubItem__Choose
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  long lVar1;
  MethodInfo *extraout_x1;
  undefined1 auVar2 [16];
  
                    /* try { // try from 0369bf30 to 0379bf37 has its CatchHandler @ 0369c300 */
  if ((DAT_04568dce & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_04568dce = 1;
    method = extraout_x1;
  }
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  auVar2._8_8_ = method;
  auVar2._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 0369bf74 to 0379bf7f has its CatchHandler @ 0369c2f0 */
    auVar2 = FUN_01b81620(lVar1,method);
  }
  lVar1 = *(long *)(*(long *)(auVar2._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620(lVar1,auVar2._8_8_);
  }
  if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
      (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
                    /* try { // try from 0369bfa0 to 0379c00f has its CatchHandler @ 0369c2f4 */
    Nekki_SF2_GUI_Profile_ProfileScene__SelectSubItem
              ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar1 + 0xb8),__this,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

