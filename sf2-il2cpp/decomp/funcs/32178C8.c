// InControl.InputManager$$get_EnableXInput @ RVA 0x32178C8

bool InControl_InputManager__get_EnableXInput(MethodInfo *method)

{
                    /* try { // try from 033178d4 to 034178db has its CatchHandler @ 033178f0 */
                    /* try { // try from 033178dc to 034178e7 has its CatchHandler @ 03317654 */
  if ((DAT_04566ede & 1) == 0) {
                    /* try { // try from 033178e8 to 034178ef has its CatchHandler @ 033178f0 */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033178d4 with catch @ 033178f0
                       catch(type#2 @ 00000000) { ... } // from try @ 033178e8 with catch @ 033178f0
                        */
    DAT_04566ede = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return InControl_InputManager_TypeInfo->static_fields->enableXInput;
}

