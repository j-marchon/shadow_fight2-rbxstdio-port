// InControl.InputManager$$add_OnDeviceStyleChanged @ RVA 0x3214EEC

void InControl_InputManager__add_OnDeviceStyleChanged
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *a;
  
  if ((DAT_04566eb9 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eb9 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03314f3c to 03414f43 has its CatchHandler @ 03314fc8 */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  a = InControl_InputManager_TypeInfo->static_fields->OnDeviceStyleChanged;
  do {
                    /* try { // try from 03314f64 to 03414f6f has its CatchHandler @ 03314fbc */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 03314f70 to 03414faf has its CatchHandler @ 03314e7c */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<InputDevice>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03314fb0 to 03414fb3 has its CatchHandler @ 03314fc4 */
    pSVar5 = (System_Action_InputDevice__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnDeviceStyleChanged,
                          lVar4,a);
                    /* try { // try from 03314fb4 to 03414fb7 has its CatchHandler @ 03314fc0 */
    bVar2 = a != pSVar5;
    a = pSVar5;
                    /* try { // try from 03314fb8 to 03414fdf has its CatchHandler @ 03314e7c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03314f64 with catch @ 03314fbc
                        */
  } while (bVar2);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03314fb4 with catch @ 03314fc0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03314fb0 with catch @ 03314fc4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03314f3c with catch @ 03314fc8
                        */
  return;
}

