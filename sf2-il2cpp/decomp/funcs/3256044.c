// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$OnTabChanged @ RVA 0x3256044

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__OnTabChanged
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  byte bVar1;
  FEKEAPCCOOB_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 auVar2 [16];
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *ELHFHAPBFMI;
  
  if ((DAT_0456715b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo,DPJIDNBJIBG);
    DAT_0456715b = 1;
  }
  auVar2 = (*(__this->klass->vtable)._15_IsOpened.methodPtr)
                     (__this,(__this->klass->vtable)._15_IsOpened.method);
  method_00 = auVar2._8_8_;
  if ((auVar2._0_8_ & 1) == 0) goto LAB_033560dc;
  __this_00 = (__this->fields).HIOOMAJPEJP;
  if (__this_00 == (FEKEAPCCOOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)
              FEKEAPCCOOB__CKNDOOPOOEF(__this_00,(MethodInfo *)0x0);
  if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
LAB_033560bc:
    ELHFHAPBFMI = (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo->_2).naturalAligment;
    if ((__this_01->klass->_2).naturalAligment < bVar1) goto LAB_033560bc;
                    /* try { // try from 033560d0 to 034560d3 has its CatchHandler @ 033560dc */
    ELHFHAPBFMI = __this_01;
                    /* try { // try from 033560d4 to 03456103 has its CatchHandler @ 03355db0 */
    if ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo) {
      ELHFHAPBFMI = (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0;
    }
  }
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__JPNLCEGEMMB
            (__this_01,(Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)ELHFHAPBFMI,method);
  method_00 = extraout_x1;
LAB_033560dc:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033560d0 with catch @ 033560dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355fd8 with catch @ 033560e0
                        */
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__POIOFMEMHBP(__this,method_00);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355fa0 with catch @ 033560e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355f40 with catch @ 033560e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355fcc with catch @ 033560ec
                        */
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MBAONPCGIOF(__this,method_01);
  return;
}

