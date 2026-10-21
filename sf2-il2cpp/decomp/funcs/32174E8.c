// InControl.InputManager$$EnsureIsEnoughDevices @ RVA 0x32174E8

void InControl_InputManager__EnsureIsEnoughDevices(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_InputDeviceManager__o *__this;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 033174e8 to 03417573 has its CatchHandler @ 033172b0 */
  if ((DAT_04566ed9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_get_Current__
                );
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_GetEnumerator__);
    DAT_04566ed9 = 1;
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
                    /* try { // try from 03317574 to 03417577 has its CatchHandler @ 033175a0 */
                    /* try { // try from 03317578 to 0341757f has its CatchHandler @ 0331759c */
                    /* try { // try from 03317580 to 03417583 has its CatchHandler @ 033172b0 */
                    /* try { // try from 03317584 to 03417587 has its CatchHandler @ 03317590 */
                    /* try { // try from 03317588 to 034175b7 has its CatchHandler @ 033172b0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317584 with catch @ 03317590
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033174cc with catch @ 03317594
                        */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<InputDeviceManager>_GetEnumerator__);
    while( true ) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331747c with catch @ 03317598
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317578 with catch @ 0331759c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317574 with catch @ 033175a0
                        */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_MoveNext__
                        );
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317420 with catch @ 033175a4
                        */
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_Dispose__);
                    /* catch() { ... } // from try @ 033175b8 with catch @ 033175cc */
                    /* try { // try from 033175d4 to 0341763b has its CatchHandler @ 03317650 */
        return;
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033173c4 with catch @ 033175a8
                        */
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
                    /* try { // try from 033175b8 to 034175bb has its CatchHandler @ 033175cc */
      (*(local_38.fields._current)->klass->vtable[4].methodPtr)
                (local_38.fields._current,(local_38.fields._current)->klass->vtable[4].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

