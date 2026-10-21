// InControl.InputManager$$UpdateCurrentTime @ RVA 0x32161CC

void InControl_InputManager__UpdateCurrentTime(MethodInfo *method)

{
  float fVar1;
  
                    /* catch() { ... } // from try @ 033161bc with catch @ 033161e8 */
  if ((DAT_04566ece & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* try { // try from 033161f8 to 034161ff has its CatchHandler @ 03316214 */
    DAT_04566ece = 1;
  }
                    /* try { // try from 03316200 to 0341620b has its CatchHandler @ 03316038 */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0331620c to 03416213 has its CatchHandler @ 03316214 */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033161f8 with catch @ 03316214
                       catch(type#2 @ 00000000) { ... } // from try @ 0331620c with catch @ 03316214
                        */
  if (InControl_InputManager_TypeInfo->static_fields->initialTime < 1.4013e-45) {
    fVar1 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    InControl_InputManager_TypeInfo->static_fields->initialTime = fVar1;
  }
  fVar1 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar1 = fVar1 - InControl_InputManager_TypeInfo->static_fields->initialTime;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  InControl_InputManager_TypeInfo->static_fields->currentTime = fVar1;
  return;
}

