// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$KPBCGFECNJA @ RVA 0x3032468

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__KPBCGFECNJA
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ChatSFView__o *pSVar1;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
                    /* try { // try from 0313246c to 03232483 has its CatchHandler @ 03131fdc */
  if ((DAT_04565d1d & 1) == 0) {
                    /* try { // try from 03132484 to 03232487 has its CatchHandler @ 031324b8 */
                    /* try { // try from 03132488 to 032324a3 has its CatchHandler @ 03131fdc */
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_get_Item__);
                    /* try { // try from 031324a4 to 032324c3 has its CatchHandler @ 031324d8 */
    DAT_04565d1d = 1;
  }
                    /* catch() { ... } // from try @ 03132444 with catch @ 031324ac */
  pSVar1 = (__this->fields).CACFIIMNJMG;
  if (pSVar1 != (System_Collections_Generic_List_ChatSFView__o *)0x0) {
                    /* catch() { ... } // from try @ 03132484 with catch @ 031324b8 */
    if ((pSVar1->fields)._size < 1) {
      return;
    }
                    /* try { // try from 031324c4 to 032324cf has its CatchHandler @ 03131fdc */
                    /* try { // try from 031324d0 to 032324d7 has its CatchHandler @ 031324d8 */
    __this_00 = (UnityEngine_Component_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar1,0,
                           Method_System_Collections_Generic_List<ChatSFView>_get_Item__);
    if (__this_00 != (UnityEngine_Component_o *)0x0) {
                    /* catch() { ... } // from try @ 031323c4 with catch @ 031324d8
                       catch() { ... } // from try @ 03132464 with catch @ 031324d8
                       catch() { ... } // from try @ 031324a4 with catch @ 031324d8
                       catch() { ... } // from try @ 031324d0 with catch @ 031324d8 */
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).CACFIIMNJMG;
      if (pSVar1 != (System_Collections_Generic_List_ChatSFView__o *)0x0) {
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar1,0,
                   Method_System_Collections_Generic_List<ChatSFView>_RemoveAt__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

