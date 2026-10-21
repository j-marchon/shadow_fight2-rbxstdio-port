// Nekki.SF2.GUI.Profile.ProfileBottomPanel$$OnClick @ RVA 0x332DAEC

void Nekki_SF2_GUI_Profile_ProfileBottomPanel__OnClick
               (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this,int32_t HIIGJGLEOFH,
               MethodInfo *method)

{
  long lVar1;
  
                    /* try { // try from 0342daf4 to 0352daf7 has its CatchHandler @ 0342db18 */
                    /* try { // try from 0342daf8 to 0352db1f has its CatchHandler @ 0342d9e4 */
                    /* catch() { ... } // from try @ 0342daf4 with catch @ 0342db18 */
  if ((DAT_045678eb & 1) == 0) {
                    /* try { // try from 0342db20 to 0352db27 has its CatchHandler @ 0342db3c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_OnClick__);
                    /* try { // try from 0342db28 to 0352db33 has its CatchHandler @ 0342d9e4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
                    /* try { // try from 0342db34 to 0352db3b has its CatchHandler @ 0342db3c */
    DAT_045678eb = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0342db20 with catch @ 0342db3c
                       catch(type#2 @ 00000000) { ... } // from try @ 0342db34 with catch @ 0342db3c
                        */
                    /* try { // try from 0342db40 to 0352dda3 has its CatchHandler @ 0342db40
                       catch() { ... } // from try @ 0342db40 with catch @ 0342db40
                       catch() { ... } // from try @ 0342dedc with catch @ 0342db40
                       catch() { ... } // from try @ 0342e180 with catch @ 0342db40
                       catch() { ... } // from try @ 0342e274 with catch @ 0342db40
                       catch() { ... } // from try @ 0342e288 with catch @ 0342db40
                       catch() { ... } // from try @ 0342e350 with catch @ 0342db40
                       catch() { ... } // from try @ 0342e3ec with catch @ 0342db40 */
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__OnClick
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,HIIGJGLEOFH,
             Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_OnClick__);
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
      (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
    Nekki_SF2_GUI_Profile_ProfileScene__set_CurrentSection
              ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar1 + 0xb8),HIIGJGLEOFH,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

