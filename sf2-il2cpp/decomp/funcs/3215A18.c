// InControl.InputManager$$Reset @ RVA 0x3215A18

void InControl_InputManager__Reset(MethodInfo *method)

{
  InControl_InputManager_c *method_00;
  
                    /* try { // try from 03315a28 to 03415a2b has its CatchHandler @ 03315a4c */
                    /* try { // try from 03315a2c to 03415a53 has its CatchHandler @ 0331591c */
  if ((DAT_04566ec5 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ec5 = 1;
  }
                    /* catch() { ... } // from try @ 03315a28 with catch @ 03315a4c */
  method_00 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03315a54 to 03415a5b has its CatchHandler @ 03315a70 */
    method_00 = (InControl_InputManager_c *)thunk_FUN_01ba7564();
  }
                    /* try { // try from 03315a5c to 03415a67 has its CatchHandler @ 0331591c */
  InControl_InputManager__ResetInternal((MethodInfo *)method_00);
  return;
}

