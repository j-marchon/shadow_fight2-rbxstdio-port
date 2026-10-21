// Nekki.SF2.GUI.Dialogs.NewsDialog$$APJCIKLILGP @ RVA 0x350DD88

void Nekki_SF2_GUI_Dialogs_NewsDialog__APJCIKLILGP
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,Il2CppObject *EHGPPHGLHHC,
               FAIJGJCCKJC_o *IHGFKLOLPOK,MethodInfo *method)

{
  int *piVar1;
  System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF;
  MethodInfo *method_00;
  
                    /* catch() { ... } // from try @ 0360dd78 with catch @ 0360dd8c */
                    /* try { // try from 0360dd9c to 0370de0b has its CatchHandler @ 0360de20 */
  if ((DAT_045688de & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NewsDialog_GPAJFKADBKK__);
    DAT_045688de = 1;
  }
  if (EHGPPHGLHHC != (Il2CppObject *)0x0) {
    if ((EHGPPHGLHHC->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(EHGPPHGLHHC);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
                    /* try { // try from 0360de0c to 0370de17 has its CatchHandler @ 0360d8bc */
    if (0 < *piVar1) {
      if (IHGFKLOLPOK != (FAIJGJCCKJC_o *)0x0) {
                    /* try { // try from 0360de18 to 0370de1f has its CatchHandler @ 0360de20 */
        (__this->fields).RedirectShopAfterClose =
             (IHGFKLOLPOK->fields).super._COIPKAKHDFP_k__BackingField;
                    /* catch() { ... } // from try @ 0360dd9c with catch @ 0360de20
                       catch() { ... } // from try @ 0360de18 with catch @ 0360de20 */
        thunk_FUN_01c20e04(&(__this->fields).RedirectShopAfterClose);
        BLMFLPJJMPF = (System_Action_BKKPAKHJDKB__o *)
                      thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
        method_00 = Method_Nekki_SF2_GUI_Dialogs_NewsDialog_GPAJFKADBKK__;
        System_Action<object>___ctor();
        AMIINPEKKFB__AOBOOIINCOA((HOOAAGABMBL_o *)IHGFKLOLPOK,BLMFLPJJMPF,method_00);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

