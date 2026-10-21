// Nekki.SF2.GUI.DebugModules.ConsoleUI$$CLNAOMIIBLH @ RVA 0x353E158

void Nekki_SF2_GUI_DebugModules_ConsoleUI__CLNAOMIIBLH
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if ((DAT_04568ad9 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568ad9 = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0363e1ac to 0373e1b3 has its CatchHandler @ 0363e1b8 */
  pSVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->BOGNOKPMNAK;
                    /* try { // try from 0363e1b4 to 0373e1db has its CatchHandler @ 0363dff4 */
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363e1ac with catch @ 0363e1b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363e128 with catch @ 0363e1bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363e10c with catch @ 0363e1c0
                        */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    if (DAT_04568b3f == '\0') {
                    /* try { // try from 0363e1dc to 0373e1df has its CatchHandler @ 0363e200 */
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
                    /* try { // try from 0363e1e0 to 0373e207 has its CatchHandler @ 0363dff4 */
      DAT_04568b3f = '\x01';
    }
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 0363e1dc with catch @ 0363e200 */
    Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField =
         (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *)0x0;
                    /* try { // try from 0363e208 to 0373e20f has its CatchHandler @ 0363e224 */
                    /* try { // try from 0363e210 to 0373e21b has its CatchHandler @ 0363dff4 */
    thunk_FUN_01c20e04(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0363e21c to 0373e223 has its CatchHandler @ 0363e224 */
  FUN_01bab8c8();
}

