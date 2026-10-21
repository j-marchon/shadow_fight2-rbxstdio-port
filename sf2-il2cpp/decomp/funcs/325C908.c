// ILNFICAMFCI$$MEFMNHFAFGE @ RVA 0x325C908

bool ILNFICAMFCI__MEFMNHFAFGE(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_o *pNVar2;
  
  if ((DAT_04567191 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
                    /* try { // try from 0335c930 to 0345c937 has its CatchHandler @ 0335c954 */
                    /* try { // try from 0335c938 to 0345c93f has its CatchHandler @ 0335c960 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0335c940 to 0345c943 has its CatchHandler @ 0335c574 */
    DAT_04567191 = 1;
  }
                    /* try { // try from 0335c944 to 0345c947 has its CatchHandler @ 0335c950 */
                    /* try { // try from 0335c948 to 0345c973 has its CatchHandler @ 0335c574 */
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335c944 with catch @ 0335c950
                        */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335c930 with catch @ 0335c954
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335c7c0 with catch @ 0335c958
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335c764 with catch @ 0335c95c
                        */
  if (DAT_0456720a == '\0') {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335c938 with catch @ 0335c960
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335c828 with catch @ 0335c964
                        */
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_0456720a = '\x01';
  }
                    /* try { // try from 0335c974 to 0345c977 has its CatchHandler @ 0335c988 */
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0335c974 with catch @ 0335c988 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0335c990 to 0345c9f7 has its CatchHandler @ 0335ca0c */
  pNVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
           _JPNBHEPPPNP_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_0456720a == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
      DAT_0456720a = '\x01';
    }
                    /* try { // try from 0335c9f8 to 0345ca03 has its CatchHandler @ 0335c574 */
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 0335ca04 to 0345ca0b has its CatchHandler @ 0335ca0c */
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0335c990 with catch @ 0335ca0c
                       catch(type#2 @ 00000000) { ... } // from try @ 0335ca04 with catch @ 0335ca0c
                        */
    pNVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
             _JPNBHEPPPNP_k__BackingField;
    if (pNVar2 == (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI__get_IsWindowActive(pNVar2,(MethodInfo *)0x0);
    bVar1 = !bVar1;
  }
  return bVar1;
}

