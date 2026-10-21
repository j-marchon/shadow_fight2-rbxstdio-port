// InControl.InputManager$$get_DefaultActiveDevice @ RVA 0x32177D8

InControl_InputDevice_o * InControl_InputManager__get_DefaultActiveDevice(MethodInfo *method)

{
  InControl_InputDevice_o *pIVar1;
  System_Collections_Generic_List_InputDevice__o *__this;
  
  if ((DAT_04566edb & 1) == 0) {
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    DAT_04566edb = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = InControl_InputManager_TypeInfo->static_fields->devices;
  if (__this != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    if ((__this->fields)._size < 1) {
                    /* try { // try from 03317898 to 0341789b has its CatchHandler @ 033178c4 */
                    /* try { // try from 0331789c to 034178d3 has its CatchHandler @ 03317654 */
      if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      return InControl_InputDevice_TypeInfo->static_fields->Null;
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 03317868 to 0341786b has its CatchHandler @ 0331787c */
                    /* try { // try from 0331786c to 03417897 has its CatchHandler @ 03317654 */
      __this = InControl_InputManager_TypeInfo->static_fields->devices;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317764 with catch @ 03317870
                        */
      if (__this == (System_Collections_Generic_List_InputDevice__o *)0x0) goto LAB_033178c4;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033177a4 with catch @ 03317874
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317738 with catch @ 03317878
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317868 with catch @ 0331787c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331771c with catch @ 03317880
                        */
    pIVar1 = (InControl_InputDevice_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this,0,
                        Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    return pIVar1;
  }
LAB_033178c4:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03317898 with catch @ 033178c4 */
  FUN_01bab8c8();
}

