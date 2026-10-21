// Nekki.SF2.GUI.Dialogs.BaseDialog$$OnBackKeyClicked @ RVA 0x33AF6F0

void Nekki_SF2_GUI_Dialogs_BaseDialog__OnBackKeyClicked
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  undefined8 uVar2;
  MethodInfo *extraout_x1;
  undefined4 local_14;
  
                    /* catch() { ... } // from try @ 034af020 with catch @ 034af6f0 */
                    /* catch() { ... } // from try @ 034aeecc with catch @ 034af6f4 */
                    /* catch() { ... } // from try @ 034aeeb4 with catch @ 034af6f8 */
                    /* catch() { ... } // from try @ 034af5cc with catch @ 034af6fc */
                    /* catch() { ... } // from try @ 034aef5c with catch @ 034af700 */
                    /* catch() { ... } // from try @ 034aef14 with catch @ 034af704 */
  if ((DAT_04567d3a & 1) == 0) {
                    /* catch() { ... } // from try @ 034aee98 with catch @ 034af708 */
                    /* catch() { ... } // from try @ 034af558 with catch @ 034af70c */
                    /* catch() { ... } // from try @ 034aee38 with catch @ 034af710 */
    FUN_01bab630(&int_TypeInfo);
                    /* catch() { ... } // from try @ 034aeddc with catch @ 034af714 */
    DAT_04567d3a = 1;
    IMMNELPBGIF = (Il2CppObject *)extraout_x1;
  }
  if (((__this->fields).IsIgnoreBack == false) &&
     (bVar1 = Nekki_SF2_GUI_Dialogs_BaseDialog__IsTouchBlocked(__this,(MethodInfo *)IMMNELPBGIF),
     !bVar1)) {
                    /* try { // try from 034af730 to 035af733 has its CatchHandler @ 034af8c4 */
                    /* try { // try from 034af734 to 035af7f7 has its CatchHandler @ 034ae7c8 */
    local_14 = (*(__this->klass->vtable)._26_GetLeftButtonId.methodPtr)
                         (__this,(__this->klass->vtable)._26_GetLeftButtonId.method);
    uVar2 = thunk_FUN_01bda448(int_TypeInfo,&local_14);
    (*(__this->klass->vtable)._13_OnClose.methodPtr)
              (__this,uVar2,(__this->klass->vtable)._13_OnClose.method);
  }
  return;
}

