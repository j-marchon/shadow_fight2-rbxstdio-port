// InControl.InputManager$$add_OnActiveDeviceChanged @ RVA 0x3214B1C

void InControl_InputManager__add_OnActiveDeviceChanged
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *a;
  
                    /* try { // try from 03314b2c to 03414b2f has its CatchHandler @ 03314b6c */
                    /* try { // try from 03314b30 to 03414b37 has its CatchHandler @ 03314b70 */
                    /* try { // try from 03314b38 to 03414b3b has its CatchHandler @ 03314b60 */
                    /* try { // try from 03314b3c to 03414b3f has its CatchHandler @ 03314b5c */
                    /* try { // try from 03314b40 to 03414b43 has its CatchHandler @ 03314b58 */
  if ((DAT_04566eb5 & 1) == 0) {
                    /* try { // try from 03314b44 to 03414b4b has its CatchHandler @ 03314b68 */
                    /* try { // try from 03314b4c to 03414b4f has its CatchHandler @ 03314b50 */
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
                    /* catch() { ... } // from try @ 03314b4c with catch @ 03314b50
                       try { // try from 03314b50 to 03414b8b has its CatchHandler @ 033147a0 */
                    /* catch() { ... } // from try @ 03314a48 with catch @ 03314b54 */
                    /* catch() { ... } // from try @ 03314b40 with catch @ 03314b58 */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* catch() { ... } // from try @ 03314b3c with catch @ 03314b5c */
                    /* catch() { ... } // from try @ 03314b38 with catch @ 03314b60 */
    DAT_04566eb5 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 033149cc with catch @ 03314b64 */
                    /* catch() { ... } // from try @ 03314b44 with catch @ 03314b68 */
                    /* catch() { ... } // from try @ 03314b2c with catch @ 03314b6c */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03314b30 with catch @ 03314b70 */
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
                    /* catch() { ... } // from try @ 03314a7c with catch @ 03314b74 */
  }
  a = InControl_InputManager_TypeInfo->static_fields->OnActiveDeviceChanged;
  do {
                    /* try { // try from 03314b8c to 03414b8f has its CatchHandler @ 03314bb0 */
                    /* try { // try from 03314b90 to 03414bb7 has its CatchHandler @ 033147a0 */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* try { // try from 03314bb8 to 03414bbf has its CatchHandler @ 03314bd4 */
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<InputDevice>_TypeInfo);
                    /* catch() { ... } // from try @ 03314b8c with catch @ 03314bb0 */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 03314bc0 to 03414bcb has its CatchHandler @ 033147a0 */
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 03314bcc to 03414bd3 has its CatchHandler @ 03314bd4 */
    }
                    /* catch() { ... } // from try @ 03314bb8 with catch @ 03314bd4
                       catch() { ... } // from try @ 03314bcc with catch @ 03314bd4 */
                    /* try { // try from 03314bd8 to 03414cc3 has its CatchHandler @ 03314bd8
                       catch() { ... } // from try @ 03314bd8 with catch @ 03314bd8
                       catch() { ... } // from try @ 03314ccc with catch @ 03314bd8
                       catch() { ... } // from try @ 03314e00 with catch @ 03314bd8
                       catch() { ... } // from try @ 03314e24 with catch @ 03314bd8
                       catch() { ... } // from try @ 03314e64 with catch @ 03314bd8 */
    pSVar5 = (System_Action_InputDevice__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnActiveDeviceChanged,
                          lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

