// Nekki.SF2.GUI.Dialogs.StoryDialog$$EGEMNGPLOKE @ RVA 0x32C21C0

void Nekki_SF2_GUI_Dialogs_StoryDialog__EGEMNGPLOKE
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,NBLEEDEAPHB_o *FDLJCNLNCOC,
               MethodInfo *method)

{
  undefined8 uVar1;
  int32_t local_24;
  
                    /* catch() { ... } // from try @ 033c21b0 with catch @ 033c21c4 */
                    /* try { // try from 033c21d4 to 034c2243 has its CatchHandler @ 033c2258 */
  if ((DAT_045674d1 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_045674d1 = 1;
  }
  (__this->fields).JJDLGLNKNBB = true;
  if (FDLJCNLNCOC != (NBLEEDEAPHB_o *)0x0) {
    (__this->fields).MBLMCOMELHB = (FDLJCNLNCOC->fields).AOOKMODPLGM;
    (__this->fields).LBEMKAMMEFG = (FDLJCNLNCOC->fields).IGLHCNLNIPK;
    (__this->fields).AAIHPGBKKNM = (FDLJCNLNCOC->fields).KDLMLBDNMJI;
    thunk_FUN_01c20e04(&(__this->fields).AAIHPGBKKNM);
    (__this->fields).GEMEHKONBIB = (FDLJCNLNCOC->fields).MPKLNNHFFAF;
    thunk_FUN_01c20e04(&(__this->fields).GEMEHKONBIB);
    if ((__this->fields).MBLMCOMELHB < 1) {
      local_24 = (__this->fields).LBEMKAMMEFG;
                    /* try { // try from 033c2244 to 034c224f has its CatchHandler @ 033c1b58 */
                    /* try { // try from 033c2250 to 034c2257 has its CatchHandler @ 033c2258 */
      uVar1 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
                    /* catch() { ... } // from try @ 033c21d4 with catch @ 033c2258
                       catch() { ... } // from try @ 033c2250 with catch @ 033c2258 */
      (*(__this->klass->vtable)._13_OnClose.methodPtr)
                (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
    }
    (*(__this->klass->vtable)._34_DCGKJKKNCEP.methodPtr)
              (__this,(__this->klass->vtable)._34_DCGKJKKNCEP.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

