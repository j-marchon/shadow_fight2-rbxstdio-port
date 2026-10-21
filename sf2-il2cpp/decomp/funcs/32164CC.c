// InControl.InputManager$$UpdateDevices @ RVA 0x32164CC

void InControl_InputManager__UpdateDevices(float deltaTime,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_InputDevice__o *pSVar3;
  int index;
  undefined4 in_register_00005004;
  
                    /* try { // try from 033164d0 to 034164d3 has its CatchHandler @ 033168c4 */
  if ((DAT_04566ed2 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
                    /* try { // try from 03316510 to 0341651b has its CatchHandler @ 033168b0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    DAT_04566ed2 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = InControl_InputManager_TypeInfo->static_fields->devices;
  if (pSVar3 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (0 < iVar1) {
                    /* try { // try from 0331654c to 03416557 has its CatchHandler @ 033168a4 */
      index = 0;
      while( true ) {
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = InControl_InputManager_TypeInfo->static_fields->devices;
        if ((pSVar3 == (System_Collections_Generic_List_InputDevice__o *)0x0) ||
           (pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                Method_System_Collections_Generic_List<InputDevice>_get_Item__),
           pIVar2 == (Il2CppObject *)0x0)) goto LAB_033165c8;
                    /* try { // try from 03316598 to 034165ab has its CatchHandler @ 033168bc */
        (*pIVar2->klass->vtable[4].methodPtr)
                  (CONCAT44(in_register_00005004,deltaTime),pIVar2,
                   InControl_InputManager_TypeInfo->static_fields->currentTick,
                   pIVar2->klass->vtable[4].method);
        if (iVar1 + -1 == index) break;
        index = index + 1;
      }
    }
    return;
  }
LAB_033165c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

