// InControl.InputControl$$PreUpdate @ RVA 0x3440B54

void InControl_InputControl__PreUpdate
               (InControl_InputControl_o *__this,uint64_t updateTick,MethodInfo *method)

{
  (__this->fields).RawValue.fields = (System_Nullable_float__Fields)0x0;
  (__this->fields).PreValue.fields = (System_Nullable_float__Fields)0x0;
  (__this->fields).lastState.fields = (__this->fields).thisState.fields;
  InControl_InputControlState__Reset
            ((InControl_InputControlState_o)&(__this->fields).tempState,(MethodInfo *)0x0);
  return;
}

