// InControl.InputManager$$PostUpdateDevices @ RVA 0x32165CC

void InControl_InputManager__PostUpdateDevices(float deltaTime,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  InControl_InputDevice_o *__this;
  System_Collections_Generic_List_InputDevice__o *pSVar3;
  int index;
  
  if ((DAT_04566ed3 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* try { // try from 03316604 to 03416607 has its CatchHandler @ 03316894 */
                    /* try { // try from 03316608 to 03416613 has its CatchHandler @ 0331689c */
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
                    /* try { // try from 03316620 to 0341662b has its CatchHandler @ 03316898 */
    DAT_04566ed3 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03316630 to 03416657 has its CatchHandler @ 033168e4 */
    thunk_FUN_01ba7564();
  }
  pSVar3 = InControl_InputManager_TypeInfo->static_fields->devices;
  if (pSVar3 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (0 < iVar1) {
      index = 0;
                    /* try { // try from 0331665c to 03416683 has its CatchHandler @ 033168d8 */
      while( true ) {
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = InControl_InputManager_TypeInfo->static_fields->devices;
                    /* try { // try from 03316688 to 034166af has its CatchHandler @ 033168c8 */
        if ((pSVar3 == (System_Collections_Generic_List_InputDevice__o *)0x0) ||
           (__this = (InControl_InputDevice_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                Method_System_Collections_Generic_List<InputDevice>_get_Item__),
           __this == (InControl_InputDevice_o *)0x0)) goto LAB_03316728;
        InControl_InputDevice__PostUpdate
                  (__this,InControl_InputManager_TypeInfo->static_fields->currentTick,deltaTime,
                   (MethodInfo *)0x0);
                    /* try { // try from 033166b4 to 034166db has its CatchHandler @ 033168d4 */
        bVar2 = InControl_InputDevice__get_MenuWasPressed(__this,(MethodInfo *)0x0);
        if (bVar2) {
          if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04566f54 == '\0') {
            FUN_01bab630(&InControl_InputManager_TypeInfo);
            DAT_04566f54 = '\x01';
          }
                    /* try { // try from 033166e0 to 03416707 has its CatchHandler @ 033168e0 */
          if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          InControl_InputManager_TypeInfo->static_fields->_MenuWasPressed_k__BackingField = true;
        }
        if (iVar1 + -1 == index) break;
        index = index + 1;
                    /* try { // try from 0331670c to 03416733 has its CatchHandler @ 033168d0 */
      }
    }
    return;
  }
LAB_03316728:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

