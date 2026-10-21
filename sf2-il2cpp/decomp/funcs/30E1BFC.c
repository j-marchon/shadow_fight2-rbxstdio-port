// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$KANFKOMJMHF @ RVA 0x30E1BFC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__KANFKOMJMHF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,
               Nekki_SF2_GUI_Dialogs_BaseDialog_o *LMEHKLFGEHI,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *extraout_x1;
  UnityEngine_Object_o *x;
  undefined1 auVar3 [16];
  
  if ((DAT_045663ba & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
                    /* try { // try from 031e1c30 to 032e1c57 has its CatchHandler @ 031e1da0 */
    DAT_045663ba = 1;
    LMEHKLFGEHI = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  auVar3._8_8_ = LMEHKLFGEHI;
  auVar3._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar3 = FUN_01b81620(lVar2,LMEHKLFGEHI);
  }
  lVar2 = *(long *)(*(long *)(auVar3._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar3._8_8_);
  }
                    /* try { // try from 031e1c70 to 032e1c77 has its CatchHandler @ 031e1d9c */
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
                    /* try { // try from 031e1c84 to 032e1c8b has its CatchHandler @ 031e1d90 */
                    /* try { // try from 031e1c8c to 032e1c93 has its CatchHandler @ 031e1d88 */
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
                    /* try { // try from 031e1c9c to 032e1ca7 has its CatchHandler @ 031e1d78 */
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 031e1ca8 to 032e1d5b has its CatchHandler @ 031e19a8 */
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    if (*(int *)(**(long **)(lVar2 + 0xb8) + 0x100) == 1) {
      return;
    }
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
        (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
      Nekki_SF2_GUI_Map_MapScene__SetRaidMode
                ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

