// InControl.InputManager$$PostUpdateDeviceManagers @ RVA 0x321672C

void InControl_InputManager__PostUpdateDeviceManagers(float deltaTime,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_InputDeviceManager__o *pSVar3;
  int index;
  undefined4 in_register_00005004;
  
                    /* try { // try from 03316738 to 0341675f has its CatchHandler @ 033168dc */
  if ((DAT_04566ed0 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* try { // try from 03316764 to 0341678b has its CatchHandler @ 033168cc */
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_get_Item__);
    DAT_04566ed0 = 1;
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
                    /* try { // try from 033167c0 to 034167c3 has its CatchHandler @ 03316888 */
          thunk_FUN_01ba7564();
        }
        pSVar3 = InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
                    /* try { // try from 033167e0 to 034167e7 has its CatchHandler @ 03316874 */
        if ((pSVar3 == (System_Collections_Generic_List_InputDeviceManager__o *)0x0) ||
           (pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                Method_System_Collections_Generic_List<InputDeviceManager>_get_Item__
                               ), pIVar2 == (Il2CppObject *)0x0)) goto LAB_0331681c;
        (*pIVar2->klass->vtable[9].methodPtr)
                  (CONCAT44(in_register_00005004,deltaTime),pIVar2,pIVar2->klass->vtable[9].method);
                    /* try { // try from 033167f8 to 034167fb has its CatchHandler @ 03316888 */
        if (iVar1 + -1 == index) break;
        index = index + 1;
      }
    }
                    /* try { // try from 0331680c to 03416813 has its CatchHandler @ 0331688c */
    return;
  }
LAB_0331681c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

