// InControl.InputControl$$UpdateWithState @ RVA 0x3440960

void InControl_InputControl__UpdateWithState
               (InControl_InputControl_o *__this,bool state,uint64_t updateTick,MethodInfo *method)

{
  InControl_InputControlState_o *__this_00;
  bool bVar1;
  System_InvalidOperationException_o *__this_01;
  undefined *puVar2;
  System_String_o *message;
  undefined8 uVar3;
  
  bVar1 = InControl_InputControl__get_IsNull(__this,(MethodInfo *)(ulong)state);
  if (bVar1) {
    thunk_FUN_01bb9178(&System_InvalidOperationException_TypeInfo);
    __this_01 = (System_InvalidOperationException_o *)thunk_FUN_01bda818();
                    /* try { // try from 035409c4 to 036409cb has its CatchHandler @ 03540a48 */
    puVar2 = &StringLiteral_2582;
  }
  else {
    if ((__this->fields)._UpdateTick_k__BackingField <= updateTick) {
      __this_00 = &(__this->fields).tempState;
      if (state) {
        bVar1 = true;
      }
      else {
        bVar1 = (__this_00->fields).State != false;
      }
      InControl_InputControlState__Set
                ((InControl_InputControlState_o)__this_00,bVar1,(MethodInfo *)0x0);
      return;
    }
                    /* try { // try from 035409d8 to 036409e3 has its CatchHandler @ 03540a40 */
    thunk_FUN_01bb9178(&System_InvalidOperationException_TypeInfo);
    __this_01 = (System_InvalidOperationException_o *)thunk_FUN_01bda818();
                    /* try { // try from 035409e8 to 036409f3 has its CatchHandler @ 03540a38 */
    puVar2 = &StringLiteral_2559;
  }
  message = (System_String_o *)thunk_FUN_01bb9178(puVar2);
                    /* try { // try from 035409f8 to 036409ff has its CatchHandler @ 03540a3c */
                    /* try { // try from 03540a00 to 03640a2f has its CatchHandler @ 03540930 */
  System_InvalidOperationException___ctor(__this_01,message,(MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bb9178(&Method_InControl_InputControl_UpdateWithState__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_01,uVar3);
}

