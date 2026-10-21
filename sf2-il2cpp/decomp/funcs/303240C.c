// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$EMCBIGBMKLN @ RVA 0x303240C

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__EMCBIGBMKLN
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_ChatSFView__o *pSVar1;
  
                    /* catch() { ... } // from try @ 0313221c with catch @ 03132410 */
                    /* catch() { ... } // from try @ 03132368 with catch @ 03132414 */
                    /* catch() { ... } // from try @ 03132258 with catch @ 03132418 */
                    /* catch() { ... } // from try @ 031321f0 with catch @ 0313241c */
                    /* catch() { ... } // from try @ 03132208 with catch @ 03132420 */
  if ((DAT_04565d23 & 1) == 0) {
                    /* catch() { ... } // from try @ 03132288 with catch @ 03132424 */
                    /* catch() { ... } // from try @ 03132244 with catch @ 03132428 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_get_Count__);
    DAT_04565d23 = 1;
    method = extraout_x1;
  }
  while( true ) {
                    /* try { // try from 03132444 to 03232447 has its CatchHandler @ 031324ac */
    pSVar1 = (__this->fields).CACFIIMNJMG;
    if (pSVar1 == (System_Collections_Generic_List_ChatSFView__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03132464 to 0323246b has its CatchHandler @ 031324d8 */
      FUN_01bab8c8();
    }
    if ((pSVar1->fields)._size < 2) break;
    Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__PGEMCFICNLA(__this,method);
    method = extraout_x1_00;
  }
  return;
}

