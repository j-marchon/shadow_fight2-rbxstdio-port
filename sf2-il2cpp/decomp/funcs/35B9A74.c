// InControl.OneAxisInputControl$$UpdateWithValue @ RVA 0x35B9A74

void InControl_OneAxisInputControl__UpdateWithValue
               (InControl_OneAxisInputControl_o *__this,float value,uint64_t updateTick,
               float stateThreshold,MethodInfo *method)

{
  bool bVar1;
  System_InvalidOperationException_o *__this_00;
  System_String_o *message;
  undefined8 uVar2;
  InControl_InputControlState_o *__this_01;
  
  if ((__this->fields)._UpdateTick_k__BackingField <= updateTick) {
    __this_01 = &(__this->fields).thisState;
    (__this->fields).lastState.fields = __this_01->fields;
    InControl_InputControlState__Set
              ((InControl_InputControlState_o)__this_01,value,stateThreshold,(MethodInfo *)0x0);
    bVar1 = InControl_InputControlState__op_Inequality
                      ((InControl_InputControlState_o)__this_01->fields,
                       (InControl_InputControlState_o)(__this->fields).lastState.fields,
                       (MethodInfo *)0x0);
    if (bVar1) {
      (__this->fields)._UpdateTick_k__BackingField = updateTick;
    }
    return;
  }
  thunk_FUN_01bb9178(&System_InvalidOperationException_TypeInfo);
  __this_00 = (System_InvalidOperationException_o *)thunk_FUN_01bda818();
  message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_2559);
  System_InvalidOperationException___ctor(__this_00,message,(MethodInfo *)0x0);
  uVar2 = thunk_FUN_01bb9178(&Method_InControl_OneAxisInputControl_UpdateWithValue__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar2);
}

