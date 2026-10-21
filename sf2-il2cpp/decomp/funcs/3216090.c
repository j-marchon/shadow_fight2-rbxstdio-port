// InControl.InputManager$$UpdateInternal @ RVA 0x3216090

void InControl_InputManager__UpdateInternal(MethodInfo *method)

{
  InControl_InputManager_c *pIVar1;
  System_Action_o **ppSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  System_Action_o *pSVar3;
  InControl_InputManager_StaticFields *pIVar4;
  System_Action_ulong__float__o *pSVar5;
  float deltaTime;
  
  if ((DAT_04566ec9 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ec9 = 1;
  }
  pIVar1 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    pIVar1 = (InControl_InputManager_c *)thunk_FUN_01ba7564();
  }
  InControl_InputManager__AssertIsSetup((MethodInfo *)pIVar1);
  pSVar3 = InControl_InputManager_TypeInfo->static_fields->OnSetup;
  if (pSVar3 != (System_Action_o *)0x0) {
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 033160fc to 03416103 has its CatchHandler @ 033161a4 */
      pSVar3 = InControl_InputManager_TypeInfo->static_fields->OnSetup;
      if (pSVar3 == (System_Action_o *)0x0) goto LAB_033161c8;
    }
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
                    /* try { // try from 03316118 to 0341611b has its CatchHandler @ 0331618c */
                    /* try { // try from 0331611c to 03416123 has its CatchHandler @ 033161a0 */
    ppSVar2 = &InControl_InputManager_TypeInfo->static_fields->OnSetup;
    *ppSVar2 = (System_Action_o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
  }
                    /* try { // try from 03316130 to 03416137 has its CatchHandler @ 03316198 */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 03316138 to 03416143 has its CatchHandler @ 0331619c */
  }
  pIVar1 = InControl_InputManager_TypeInfo;
                    /* try { // try from 03316144 to 0341617f has its CatchHandler @ 03316038 */
  InControl_InputManager_TypeInfo->static_fields->currentTick =
       InControl_InputManager_TypeInfo->static_fields->currentTick + 1;
  InControl_InputManager__UpdateCurrentTime((MethodInfo *)pIVar1);
  deltaTime = InControl_InputManager_TypeInfo->static_fields->currentTime -
              InControl_InputManager_TypeInfo->static_fields->lastUpdateTime;
  InControl_InputManager__UpdateDeviceManagers(deltaTime,method_00);
  InControl_InputManager__PreUpdateDevices(deltaTime,method_01);
  InControl_InputManager__UpdateDevices(deltaTime,method_02);
  InControl_InputManager__PostUpdateDevices(deltaTime,method_03);
                    /* try { // try from 03316180 to 03416183 has its CatchHandler @ 03316194 */
                    /* try { // try from 03316184 to 03416187 has its CatchHandler @ 03316190 */
  InControl_InputManager__PostUpdateDeviceManagers(deltaTime,method_04);
                    /* try { // try from 03316188 to 034161bb has its CatchHandler @ 03316038 */
  InControl_InputManager__UpdateActiveDevice(method_05);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03316118 with catch @ 0331618c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03316184 with catch @ 03316190
                        */
  pIVar4 = InControl_InputManager_TypeInfo->static_fields;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03316180 with catch @ 03316194
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03316130 with catch @ 03316198
                        */
  pSVar5 = pIVar4->OnUpdate;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03316138 with catch @ 0331619c
                        */
  pIVar4->lastUpdateTime = pIVar4->currentTime;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331611c with catch @ 033161a0
                        */
  if (pSVar5 != (System_Action_ulong__float__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033160fc with catch @ 033161a4
                        */
                    /* try { // try from 033161bc to 034161bf has its CatchHandler @ 033161e8 */
                    /* try { // try from 033161c0 to 034161f7 has its CatchHandler @ 03316038 */
                    /* WARNING: Could not recover jumptable at 0x033161c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar5->fields).super.super.invoke_impl)
              (deltaTime,(pSVar5->fields).super.super.method_code,pIVar4->currentTick,
               (pSVar5->fields).super.super.method);
    return;
  }
LAB_033161c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

