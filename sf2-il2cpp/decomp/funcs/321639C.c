// InControl.InputManager$$PreUpdateDevices @ RVA 0x321639C

void InControl_InputManager__PreUpdateDevices(float deltaTime,MethodInfo *method)

{
  int iVar1;
  InControl_InputManager_c *pIVar2;
  InControl_InputDevice_o *__this;
  System_Collections_Generic_List_InputDevice__o *pSVar3;
  int index;
  
  if ((DAT_04566ed1 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
                    /* try { // try from 033163e4 to 034163e7 has its CatchHandler @ 03316888 */
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    DAT_04566ed1 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566f54 == '\0') {
                    /* try { // try from 0331640c to 03416433 has its CatchHandler @ 03316890 */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566f54 = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar2 = InControl_InputManager_TypeInfo;
  pSVar3 = InControl_InputManager_TypeInfo->static_fields->devices;
  InControl_InputManager_TypeInfo->static_fields->_MenuWasPressed_k__BackingField = false;
  if (pSVar3 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
                    /* try { // try from 0331644c to 03416453 has its CatchHandler @ 0331687c */
    if (0 < iVar1) {
      index = 0;
      while( true ) {
        if ((pIVar2->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pIVar2 = InControl_InputManager_TypeInfo;
        }
        pSVar3 = pIVar2->static_fields->devices;
                    /* try { // try from 03316474 to 0341647b has its CatchHandler @ 03316878 */
        if ((pSVar3 == (System_Collections_Generic_List_InputDevice__o *)0x0) ||
           (__this = (InControl_InputDevice_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                Method_System_Collections_Generic_List<InputDevice>_get_Item__),
           __this == (InControl_InputDevice_o *)0x0)) goto LAB_033164c8;
        InControl_InputDevice__PreUpdate
                  (__this,InControl_InputManager_TypeInfo->static_fields->currentTick,deltaTime,
                   (MethodInfo *)0x0);
        if (iVar1 + -1 == index) break;
        index = index + 1;
        pIVar2 = InControl_InputManager_TypeInfo;
      }
    }
    return;
  }
LAB_033164c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

