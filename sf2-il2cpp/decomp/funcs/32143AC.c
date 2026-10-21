// InControl.InputManager$$add_OnSetup @ RVA 0x32143AC

void InControl_InputManager__add_OnSetup(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *a;
  
                    /* catch() { ... } // from try @ 03314390 with catch @ 033143b8 */
                    /* try { // try from 033143c0 to 034143c7 has its CatchHandler @ 033143e0 */
                    /* try { // try from 033143c8 to 034143d7 has its CatchHandler @ 03314138 */
  if ((DAT_04566ead & 1) == 0) {
                    /* try { // try from 033143d8 to 034143df has its CatchHandler @ 033143e0 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033143c0 with catch @ 033143e0
                       catch(type#2 @ 00000000) { ... } // from try @ 033143d8 with catch @ 033143e0
                        */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ead = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  a = InControl_InputManager_TypeInfo->static_fields->OnSetup;
  do {
    pSVar2 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnSetup,pSVar2,a);
    bVar1 = a != pSVar3;
    a = pSVar3;
  } while (bVar1);
  return;
}

