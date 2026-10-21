// InControl.InputManager$$remove_OnDeviceStyleChanged @ RVA 0x3214FE0

void InControl_InputManager__remove_OnDeviceStyleChanged
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *source;
  
                    /* try { // try from 03314fe0 to 03414fe3 has its CatchHandler @ 03315004 */
                    /* try { // try from 03314fe4 to 0341500b has its CatchHandler @ 03314e7c */
                    /* catch() { ... } // from try @ 03314fe0 with catch @ 03315004 */
  if ((DAT_04566eba & 1) == 0) {
                    /* try { // try from 0331500c to 03415013 has its CatchHandler @ 03315028 */
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
                    /* try { // try from 03315014 to 0341501f has its CatchHandler @ 03314e7c */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* try { // try from 03315020 to 03415027 has its CatchHandler @ 03315028 */
    DAT_04566eba = 1;
    method = extraout_x1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0331500c with catch @ 03315028
                       catch(type#2 @ 00000000) { ... } // from try @ 03315020 with catch @ 03315028
                        */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  source = InControl_InputManager_TypeInfo->static_fields->OnDeviceStyleChanged;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* try { // try from 0331507c to 0341514b has its CatchHandler @ 0331507c
                       catch() { ... } // from try @ 0331507c with catch @ 0331507c
                       catch() { ... } // from try @ 033151c8 with catch @ 0331507c
                       catch() { ... } // from try @ 033151f4 with catch @ 0331507c
                       catch() { ... } // from try @ 03315228 with catch @ 0331507c
                       catch() { ... } // from try @ 03315258 with catch @ 0331507c */
      lVar4 = 0;
    }
    else {
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
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnDeviceStyleChanged,
                          lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

