// InControl.InputManager$$OnDeviceCountChanged @ RVA 0x3217660

void InControl_InputManager__OnDeviceCountChanged(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_InputDeviceManager__o *__this;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566eda & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_get_Current__
                );
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_GetEnumerator__);
    DAT_04566eda = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
  if (__this != (System_Collections_Generic_List_InputDeviceManager__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<InputDeviceManager>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_MoveNext__
                        );
                    /* try { // try from 0331771c to 03417723 has its CatchHandler @ 03317880 */
      if (!bVar1) {
                    /* try { // try from 03317738 to 0341773f has its CatchHandler @ 03317878 */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      (*(local_38.fields._current)->klass->vtable[5].methodPtr)
                (local_38.fields._current,(local_38.fields._current)->klass->vtable[5].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

