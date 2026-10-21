// Nekki.SF2.Core.InputControllers.GamePadController$$PHBLONJEDFH @ RVA 0x30E592C

void Nekki_SF2_Core_InputControllers_GamePadController__PHBLONJEDFH
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *FFPIGANNBAC,
               MethodInfo *method)

{
  int32_t iVar1;
  InControl_InputDevice_o *GIDJIIFPHJK;
  MethodInfo *method_00;
  int index;
  
                    /* catch() { ... } // from try @ 031e5904 with catch @ 031e5930 */
                    /* try { // try from 031e5938 to 032e593f has its CatchHandler @ 031e5954 */
                    /* try { // try from 031e5940 to 032e594b has its CatchHandler @ 031e56ac */
  if ((DAT_045663f9 & 1) == 0) {
                    /* try { // try from 031e594c to 032e5953 has its CatchHandler @ 031e5954 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031e5938 with catch @ 031e5954
                       catch(type#2 @ 00000000) { ... } // from try @ 031e594c with catch @ 031e5954
                        */
    FUN_01bab630(&Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Count__)
    ;
                    /* try { // try from 031e5958 to 032e5a37 has its CatchHandler @ 031e5958
                       catch() { ... } // from try @ 031e5958 with catch @ 031e5958
                       catch() { ... } // from try @ 031e5b8c with catch @ 031e5958
                       catch() { ... } // from try @ 031e5bdc with catch @ 031e5958
                       catch() { ... } // from try @ 031e5c1c with catch @ 031e5958
                       catch() { ... } // from try @ 031e5c58 with catch @ 031e5958 */
    FUN_01bab630(&Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__);
    DAT_045663f9 = 1;
  }
  if (FFPIGANNBAC != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
    iVar1 = System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Count
                      ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)FFPIGANNBAC,
                       Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Count__
                      );
    if (0 < iVar1) {
      index = 0;
      do {
        method_00 = Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
        ;
        GIDJIIFPHJK = (InControl_InputDevice_o *)
                      System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Item
                                ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)
                                 FFPIGANNBAC,index,
                                 (MethodInfo_2907630 *)
                                 Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                                );
        Nekki_SF2_Core_InputControllers_GamePadController__DMCPDALABHN(__this,GIDJIIFPHJK,method_00)
        ;
        index = index + 1;
      } while (iVar1 != index);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

