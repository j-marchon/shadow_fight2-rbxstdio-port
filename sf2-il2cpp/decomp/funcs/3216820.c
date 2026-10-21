// InControl.InputManager$$UpdateActiveDevice @ RVA 0x3216820

void InControl_InputManager__UpdateActiveDevice(MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  InControl_InputManager_c *pIVar3;
  MethodInfo *pMVar4;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  InControl_InputDevice_o *pIVar6;
  MethodInfo *extraout_x0;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_02;
  System_Collections_Generic_List_InputDevice__o *pSVar7;
  System_Action_InputDevice__o *pSVar8;
  uint index;
  
                    /* try { // try from 0331682c to 03416833 has its CatchHandler @ 03316870 */
                    /* try { // try from 03316840 to 03416843 has its CatchHandler @ 033168e8 */
                    /* try { // try from 03316844 to 03416847 has its CatchHandler @ 033168c0 */
  if ((DAT_04566ecb & 1) == 0) {
                    /* try { // try from 03316848 to 0341684f has its CatchHandler @ 033168b8 */
                    /* try { // try from 03316850 to 03416853 has its CatchHandler @ 033168b4 */
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
                    /* try { // try from 03316854 to 03416857 has its CatchHandler @ 033168ac */
                    /* try { // try from 03316858 to 0341685b has its CatchHandler @ 033168a8 */
                    /* try { // try from 0331685c to 0341685f has its CatchHandler @ 033168a0 */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* try { // try from 03316860 to 03416863 has its CatchHandler @ 0331688c */
                    /* try { // try from 03316864 to 03416867 has its CatchHandler @ 03316884 */
                    /* try { // try from 03316868 to 0341686b has its CatchHandler @ 03316880 */
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
                    /* try { // try from 0331686c to 0341686f has its CatchHandler @ 03316870 */
                    /* catch() { ... } // from try @ 0331682c with catch @ 03316870
                       catch() { ... } // from try @ 0331686c with catch @ 03316870
                       try { // try from 03316870 to 034168fb has its CatchHandler @ 033162a8 */
                    /* catch() { ... } // from try @ 033167e0 with catch @ 03316874 */
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
                    /* catch() { ... } // from try @ 03316474 with catch @ 03316878 */
                    /* catch() { ... } // from try @ 0331644c with catch @ 0331687c */
    DAT_04566ecb = 1;
  }
                    /* catch() { ... } // from try @ 03316868 with catch @ 03316880 */
                    /* catch() { ... } // from try @ 03316864 with catch @ 03316884 */
                    /* catch() { ... } // from try @ 033163e4 with catch @ 03316888
                       catch() { ... } // from try @ 033167c0 with catch @ 03316888
                       catch() { ... } // from try @ 033167f8 with catch @ 03316888 */
  pIVar3 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0331680c with catch @ 0331688c
                       catch() { ... } // from try @ 03316860 with catch @ 0331688c */
    pIVar3 = (InControl_InputManager_c *)thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 0331640c with catch @ 03316890 */
  pMVar4 = (MethodInfo *)InControl_InputManager__get_ActiveDevice((MethodInfo *)pIVar3);
                    /* catch() { ... } // from try @ 03316604 with catch @ 03316894 */
                    /* catch() { ... } // from try @ 03316620 with catch @ 03316898 */
                    /* catch() { ... } // from try @ 03316608 with catch @ 0331689c */
  pSVar7 = InControl_InputManager_TypeInfo->static_fields->devices;
                    /* catch() { ... } // from try @ 0331685c with catch @ 033168a0 */
  if (pSVar7 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
                    /* catch() { ... } // from try @ 0331654c with catch @ 033168a4 */
    uVar1 = (pSVar7->fields)._size;
                    /* catch() { ... } // from try @ 03316858 with catch @ 033168a8 */
                    /* catch() { ... } // from try @ 03316854 with catch @ 033168ac */
                    /* catch() { ... } // from try @ 03316510 with catch @ 033168b0 */
                    /* catch() { ... } // from try @ 03316850 with catch @ 033168b4 */
                    /* catch() { ... } // from try @ 03316848 with catch @ 033168b8 */
                    /* catch() { ... } // from try @ 03316598 with catch @ 033168bc */
    index = 0;
                    /* catch() { ... } // from try @ 03316844 with catch @ 033168c0 */
    pMVar5 = pMVar4;
    while( true ) {
                    /* catch() { ... } // from try @ 033164d0 with catch @ 033168c4 */
                    /* catch() { ... } // from try @ 03316688 with catch @ 033168c8 */
      if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03316764 with catch @ 033168cc */
                    /* catch() { ... } // from try @ 0331670c with catch @ 033168d0 */
        pMVar5 = (MethodInfo *)thunk_FUN_01ba7564(InControl_InputManager_TypeInfo);
      }
                    /* catch() { ... } // from try @ 033166b4 with catch @ 033168d4 */
                    /* catch() { ... } // from try @ 0331665c with catch @ 033168d8 */
      if ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == index) break;
                    /* catch() { ... } // from try @ 03316738 with catch @ 033168dc */
                    /* catch() { ... } // from try @ 033166e0 with catch @ 033168e0 */
                    /* catch() { ... } // from try @ 03316630 with catch @ 033168e4 */
      pSVar7 = InControl_InputManager_TypeInfo->static_fields->devices;
                    /* catch() { ... } // from try @ 03316840 with catch @ 033168e8 */
      if (pSVar7 == (System_Collections_Generic_List_InputDevice__o *)0x0) goto LAB_033169ec;
      method_00 = (MethodInfo *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar7,index,
                             Method_System_Collections_Generic_List<InputDevice>_get_Item__);
                    /* try { // try from 033168fc to 034168ff has its CatchHandler @ 0331693c */
      pIVar6 = InControl_InputManager__get_ActiveDevice(method_00);
                    /* try { // try from 03316900 to 0341695b has its CatchHandler @ 033162a8 */
      method_01 = extraout_x1;
      if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(InControl_InputDevice_TypeInfo);
        method_01 = extraout_x1_00;
      }
      if (pIVar6 == InControl_InputDevice_TypeInfo->static_fields->Null) {
LAB_03316958:
                    /* try { // try from 0331695c to 03416967 has its CatchHandler @ 03316968 */
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_01 = extraout_x1_02;
        }
                    /* catch() { ... } // from try @ 0331695c with catch @ 03316968 */
        InControl_InputManager__set_ActiveDevice((InControl_InputDevice_o *)method_00,method_01);
        pMVar5 = extraout_x0;
      }
      else {
        pIVar3 = InControl_InputManager_TypeInfo;
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          pIVar3 = (InControl_InputManager_c *)thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 033168fc with catch @ 0331693c */
        pIVar6 = InControl_InputManager__get_ActiveDevice((MethodInfo *)pIVar3);
        if (method_00 == (MethodInfo *)0x0) goto LAB_033169ec;
        bVar2 = InControl_InputDevice__LastChangedAfter
                          ((InControl_InputDevice_o *)method_00,pIVar6,(MethodInfo *)0x0);
        pMVar5 = (MethodInfo *)(ulong)bVar2;
        method_01 = extraout_x1_01;
        if (bVar2) goto LAB_03316958;
      }
      index = index + 1;
    }
    pMVar5 = (MethodInfo *)InControl_InputManager__get_ActiveDevice(pMVar5);
    if (pMVar4 == pMVar5) {
      return;
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = InControl_InputManager_TypeInfo->static_fields->OnActiveDeviceChanged;
    pIVar6 = InControl_InputManager__get_ActiveDevice((MethodInfo *)InControl_InputManager_TypeInfo)
    ;
    if (pSVar8 != (System_Action_InputDevice__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033169d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar8->fields).super.super.invoke_impl)
                ((pSVar8->fields).super.super.method_code,pIVar6,(pSVar8->fields).super.super.method
                );
      return;
    }
  }
LAB_033169ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

