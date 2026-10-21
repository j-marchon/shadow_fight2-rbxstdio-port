// InControl.InputManager$$remove_OnDevicePartWasDetached @ RVA 0x3214DF8

void InControl_InputManager__remove_OnDevicePartWasDetached
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *source;
  
                    /* try { // try from 03314dfc to 03414dff has its CatchHandler @ 03314e04 */
                    /* try { // try from 03314e00 to 03414e1f has its CatchHandler @ 03314bd8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03314dfc with catch @ 03314e04
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03314cc4 with catch @ 03314e08
                        */
  if ((DAT_04566eb8 & 1) == 0) {
                    /* try { // try from 03314e20 to 03414e23 has its CatchHandler @ 03314e4c */
                    /* try { // try from 03314e24 to 03414e5b has its CatchHandler @ 03314bd8 */
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eb8 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03314e20 with catch @ 03314e4c */
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
                    /* try { // try from 03314e5c to 03414e63 has its CatchHandler @ 03314e78 */
  source = InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached;
  do {
                    /* try { // try from 03314e64 to 03414e6f has its CatchHandler @ 03314bd8 */
                    /* try { // try from 03314e70 to 03414e77 has its CatchHandler @ 03314e78 */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03314e5c with catch @ 03314e78
                       catch(type#2 @ 00000000) { ... } // from try @ 03314e70 with catch @ 03314e78
                        */
                    /* try { // try from 03314e7c to 03414f3b has its CatchHandler @ 03314e7c
                       catch() { ... } // from try @ 03314e7c with catch @ 03314e7c
                       catch() { ... } // from try @ 03314f70 with catch @ 03314e7c
                       catch() { ... } // from try @ 03314fb8 with catch @ 03314e7c
                       catch() { ... } // from try @ 03314fe4 with catch @ 03314e7c
                       catch() { ... } // from try @ 03315014 with catch @ 03314e7c */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<InputDevice>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_InputDevice__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached,
                          lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

