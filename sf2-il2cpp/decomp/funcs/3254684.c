// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$Open @ RVA 0x3254684

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Open
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_SidePanel_o *__this_00;
  MethodInfo *method_00;
  
                    /* try { // try from 03354684 to 03454687 has its CatchHandler @ 033546ac */
                    /* try { // try from 03354688 to 0345468f has its CatchHandler @ 033546cc */
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IKIMAGJOBLI(__this,method);
                    /* try { // try from 03354690 to 03454693 has its CatchHandler @ 033541e4 */
                    /* try { // try from 03354694 to 03454697 has its CatchHandler @ 033546a0 */
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__TryOpenChat(__this,method_00);
                    /* try { // try from 03354698 to 034546f7 has its CatchHandler @ 033541e4 */
  if (!bVar1) {
                    /* catch() { ... } // from try @ 0335467c with catch @ 033546b8 */
                    /* catch() { ... } // from try @ 03354678 with catch @ 033546bc */
    return;
  }
  __this_00 = (__this->fields)._sidePanel;
                    /* catch() { ... } // from try @ 03354694 with catch @ 033546a0 */
  if (__this_00 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
                    /* catch() { ... } // from try @ 03354478 with catch @ 033546a4 */
                    /* catch() { ... } // from try @ 03354468 with catch @ 033546a8 */
                    /* catch() { ... } // from try @ 03354684 with catch @ 033546ac */
                    /* catch() { ... } // from try @ 03354680 with catch @ 033546b0 */
                    /* catch() { ... } // from try @ 0335453c with catch @ 033546b4 */
    Nekki_SF2_GUI_Shop_SidePanel__SetOpen(__this_00,true,-1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03354440 with catch @ 033546c0 */
  FUN_01bab8c8();
}

