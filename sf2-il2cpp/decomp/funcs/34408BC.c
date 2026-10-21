// InControl.InputControl$$.ctor @ RVA 0x34408BC

void InControl_InputControl___ctor
               (InControl_InputControl_o *__this,System_String_o *handle,MethodInfo *method)

{
  (__this->fields).Sensitivity = 1.0;
  (__this->fields).UpperDeadZone = 1.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Handle_k__BackingField = handle;
  thunk_FUN_01c20e04(&__this->fields,handle);
  return;
}

