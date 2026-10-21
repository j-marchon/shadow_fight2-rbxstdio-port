// InControl.InputManager$$UpdateDeviceManagers @ RVA 0x321629C

void InControl_InputManager__UpdateDeviceManagers(float deltaTime,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_InputDeviceManager__o *pSVar3;
  int index;
  undefined4 in_register_00005004;
  
                    /* try { // try from 033162a8 to 034163e3 has its CatchHandler @ 033162a8
                       catch() { ... } // from try @ 033162a8 with catch @ 033162a8
                       catch() { ... } // from try @ 03316870 with catch @ 033162a8
                       catch() { ... } // from try @ 03316900 with catch @ 033162a8 */
  if ((DAT_04566ecf & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_get_Item__);
    DAT_04566ecf = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
  if (pSVar3 != (System_Collections_Generic_List_InputDeviceManager__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (0 < iVar1) {
      index = 0;
      while( true ) {
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
        if ((pSVar3 == (System_Collections_Generic_List_InputDeviceManager__o *)0x0) ||
           (pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                Method_System_Collections_Generic_List<InputDeviceManager>_get_Item__
                               ), pIVar2 == (Il2CppObject *)0x0)) goto LAB_03316398;
        (*pIVar2->klass->vtable[8].methodPtr)
                  (CONCAT44(in_register_00005004,deltaTime),pIVar2,
                   InControl_InputManager_TypeInfo->static_fields->currentTick,
                   pIVar2->klass->vtable[8].method);
        if (iVar1 + -1 == index) break;
        index = index + 1;
      }
    }
    return;
  }
LAB_03316398:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

