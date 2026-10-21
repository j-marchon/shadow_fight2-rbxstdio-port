// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$OnNewMessageInChannel @ RVA 0x3256130

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__OnNewMessageInChannel
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,int32_t BOFAKAEIMME,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_01;
  MethodInfo *method_00;
  undefined1 auVar1 [16];
  
  if ((DAT_0456715d & 1) == 0) {
                    /* try { // try from 03356154 to 0345617b has its CatchHandler @ 03356190 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_get_Item__
                );
    DAT_0456715d = 1;
  }
  auVar1 = (*(__this->klass->vtable)._15_IsOpened.methodPtr)
                     (__this,(__this->klass->vtable)._15_IsOpened.method);
  if ((auVar1._0_8_ & 1) != 0) {
    __this_00 = (__this->fields).KGPGGBPLEFB;
                    /* try { // try from 0335617c to 03456187 has its CatchHandler @ 03355db0 */
    if (__this_00 !=
        (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *)0x0) {
      method_00 = 
      Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_get_Item__;
                    /* try { // try from 03356188 to 0345618f has its CatchHandler @ 03356190 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03356154 with catch @ 03356190
                       catch(type#2 @ 00000000) { ... } // from try @ 03356188 with catch @ 03356190
                        */
      __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)
                  System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             BOFAKAEIMME,
                             (MethodInfo_230F3DC *)
                             Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_get_Item__
                            );
      Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__JPNLCEGEMMB
                (__this_01,(Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this_01,method_00
                );
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__HEMCHIANOBD(__this,auVar1._8_8_);
  return;
}

