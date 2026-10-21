// InControl.InputControl$$PostUpdate @ RVA 0x3440B70

void InControl_InputControl__PostUpdate
               (InControl_InputControl_o *__this,uint64_t updateTick,MethodInfo *method)

{
  bool bVar1;
  InControl_InputControlState_Fields a;
  
  a = (__this->fields).tempState.fields;
                    /* try { // try from 03540b84 to 03640b8b has its CatchHandler @ 03540c7c */
  (__this->fields).thisState.fields = a;
  bVar1 = InControl_InputControlState__op_Inequality
                    ((InControl_InputControlState_o)a,
                     (InControl_InputControlState_o)(__this->fields).lastState.fields,
                     (MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 03540b98 to 03640ba3 has its CatchHandler @ 03540c78 */
    (__this->fields)._UpdateTick_k__BackingField = updateTick;
  }
  return;
}

