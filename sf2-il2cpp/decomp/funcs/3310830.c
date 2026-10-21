// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$Update @ RVA 0x3310830

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__Update
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__PBNBBJPDHGK(__this,method_00);
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__CJPOKGIHNDE(__this,method_01);
  }
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    method_02 = (MethodInfo *)0x0;
    bVar1 = Nekki_SF2_GUI_SimpleScroll__IsNotMovingAndNotDraggingFrames
                      (__this_00,2,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LNAECHIOFNK(__this,bVar1,method_02);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

