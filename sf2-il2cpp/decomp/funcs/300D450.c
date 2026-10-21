// Nekki.SF2.GUI.Common.MenuControls$$NPNPFBOPKIA @ RVA 0x300D450

void Nekki_SF2_GUI_Common_MenuControls__NPNPFBOPKIA
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  MethodInfo *in_x4;
  int OPHMGAKOJLP;
  
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                      (__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0310d078 with catch @ 0310d470 */
                    /* catch() { ... } // from try @ 0310d348 with catch @ 0310d474 */
    if (0 < iVar1) {
      OPHMGAKOJLP = 0;
      do {
                    /* try { // try from 0310d48c to 0320d4a3 has its CatchHandler @ 0310d4dc */
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,0,0,in_x4);
                    /* try { // try from 0310d4a4 to 0320d4c7 has its CatchHandler @ 0310c418 */
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,1,1,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,2,2,in_x4);
                    /* try { // try from 0310d4c8 to 0320d4d7 has its CatchHandler @ 0310d4dc */
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,3,3,in_x4);
                    /* catch() { ... } // from try @ 0310d48c with catch @ 0310d4dc
                       catch() { ... } // from try @ 0310d4c8 with catch @ 0310d4dc */
                    /* try { // try from 0310d4e0 to 0320d4e3 has its CatchHandler @ 0310d5b0 */
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,4,4,in_x4);
                    /* try { // try from 0310d4e4 to 0320d50f has its CatchHandler @ 0310c418 */
                    /* catch() { ... } // from try @ 0310c8bc with catch @ 0310d4e8 */
                    /* catch() { ... } // from try @ 0310c970 with catch @ 0310d4ec */
                    /* catch() { ... } // from try @ 0310c8d0 with catch @ 0310d4f0 */
                    /* catch() { ... } // from try @ 0310d234 with catch @ 0310d4f4
                       catch() { ... } // from try @ 0310d250 with catch @ 0310d4f4 */
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,5,5,in_x4);
                    /* catch() { ... } // from try @ 0310d22c with catch @ 0310d4f8
                       catch() { ... } // from try @ 0310d244 with catch @ 0310d4f8 */
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,6,7,in_x4);
                    /* try { // try from 0310d510 to 0320d527 has its CatchHandler @ 0310d5a0 */
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,7,6,in_x4);
        OPHMGAKOJLP = OPHMGAKOJLP + 1;
                    /* try { // try from 0310d528 to 0320d58f has its CatchHandler @ 0310c418 */
      } while (iVar1 != OPHMGAKOJLP);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

