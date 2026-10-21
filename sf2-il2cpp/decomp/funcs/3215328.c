// InControl.InputManager$$UpdateDeviceManagersDualMode @ RVA 0x3215328

void InControl_InputManager__UpdateDeviceManagersDualMode(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_InputDeviceManager__o *__this;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 03315348 to 0341534f has its CatchHandler @ 0331540c */
  if ((DAT_04566ecd & 1) == 0) {
                    /* try { // try from 03315350 to 034153f7 has its CatchHandler @ 03315294 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_get_Current__
                );
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_GetEnumerator__);
    DAT_04566ecd = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
  if (__this != (System_Collections_Generic_List_InputDeviceManager__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<InputDeviceManager>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_MoveNext__
                          );
        pIVar1 = local_50.fields._current;
                    /* try { // try from 033153f8 to 034153fb has its CatchHandler @ 03315408 */
        if (!bVar2) {
                    /* try { // try from 03315450 to 03415457 has its CatchHandler @ 0331546c */
                    /* try { // try from 03315458 to 03415463 has its CatchHandler @ 03315294 */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_Dispose__
                    );
                    /* try { // try from 03315464 to 0341546b has its CatchHandler @ 0331546c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03315450 with catch @ 0331546c
                       catch(type#2 @ 00000000) { ... } // from try @ 03315464 with catch @ 0331546c
                        */
          return;
        }
                    /* try { // try from 033153fc to 034153ff has its CatchHandler @ 03315404 */
                    /* try { // try from 03315400 to 03415423 has its CatchHandler @ 03315294 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033153fc with catch @ 03315404
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033153f8 with catch @ 03315408
                        */
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03315348 with catch @ 0331540c
                        */
          thunk_FUN_01ba7564();
        }
        if (InControl_InputManager_TypeInfo->static_fields->isDualMode != false) break;
        if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch() { ... } // from try @ 03315424 with catch @ 03315448 */
        (*pIVar1->klass->vtable[6].methodPtr)(pIVar1,pIVar1->klass->vtable[6].method);
      }
      if (pIVar1 == (Il2CppObject *)0x0) break;
                    /* try { // try from 03315424 to 03415427 has its CatchHandler @ 03315448 */
                    /* try { // try from 03315428 to 0341544f has its CatchHandler @ 03315294 */
      (*pIVar1->klass->vtable[7].methodPtr)(pIVar1,pIVar1->klass->vtable[7].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

