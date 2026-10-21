// InControl.InputControl$$UpdateWithValue @ RVA 0x3440A80

void InControl_InputControl__UpdateWithValue
               (InControl_InputControl_o *__this,float value,uint64_t updateTick,MethodInfo *method)

{
  bool bVar1;
  System_InvalidOperationException_o *__this_00;
  undefined *puVar2;
  System_String_o *message;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 03540a60 with catch @ 03540a84 */
                    /* try { // try from 03540a8c to 03640a93 has its CatchHandler @ 03540aa8 */
                    /* try { // try from 03540a94 to 03640a9f has its CatchHandler @ 03540930 */
  bVar1 = InControl_InputControl__get_IsNull(__this,(MethodInfo *)updateTick);
  if (bVar1) {
    thunk_FUN_01bb9178(&System_InvalidOperationException_TypeInfo);
    __this_00 = (System_InvalidOperationException_o *)thunk_FUN_01bda818();
    puVar2 = &StringLiteral_2582;
  }
  else {
                    /* try { // try from 03540aa0 to 03640aa7 has its CatchHandler @ 03540aa8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03540a8c with catch @ 03540aa8
                       catch(type#2 @ 00000000) { ... } // from try @ 03540aa0 with catch @ 03540aa8
                        */
    if ((__this->fields)._UpdateTick_k__BackingField <= updateTick) {
                    /* try { // try from 03540aac to 03640b83 has its CatchHandler @ 03540aac
                       catch() { ... } // from try @ 03540aac with catch @ 03540aac
                       catch() { ... } // from try @ 03540c1c with catch @ 03540aac
                       catch() { ... } // from try @ 03540c50 with catch @ 03540aac
                       catch() { ... } // from try @ 03540c98 with catch @ 03540aac
                       catch() { ... } // from try @ 03540cc8 with catch @ 03540aac */
      if (ABS((__this->fields).tempState.fields.Value) < ABS(value)) {
        InControl_InputControlState__Set
                  ((InControl_InputControlState_o)&(__this->fields).tempState,value,
                   (MethodInfo *)0x0);
        return;
      }
      return;
    }
    thunk_FUN_01bb9178(&System_InvalidOperationException_TypeInfo);
    __this_00 = (System_InvalidOperationException_o *)thunk_FUN_01bda818();
    puVar2 = &StringLiteral_2559;
  }
  message = (System_String_o *)thunk_FUN_01bb9178(puVar2);
  System_InvalidOperationException___ctor(__this_00,message,(MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bb9178(&Method_InControl_InputControl_UpdateWithValue__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar3);
}

