// InControl.InputManager$$get_MenuWasPressed @ RVA 0x321518C

bool InControl_InputManager__get_MenuWasPressed(MethodInfo *method)

{
                    /* try { // try from 033151a0 to 034151a3 has its CatchHandler @ 033151f8 */
                    /* try { // try from 033151a4 to 034151b3 has its CatchHandler @ 03315204 */
  if ((DAT_04566ebd & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ebd = 1;
  }
                    /* try { // try from 033151bc to 034151c7 has its CatchHandler @ 03315200 */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033151c8 to 034151eb has its CatchHandler @ 0331507c */
    thunk_FUN_01ba7564();
  }
  return InControl_InputManager_TypeInfo->static_fields->_MenuWasPressed_k__BackingField;
}

