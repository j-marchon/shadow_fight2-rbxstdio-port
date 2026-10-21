// InControl.InputControlMapping$$.ctor @ RVA 0x350337C

void InControl_InputControlMapping___ctor
               (InControl_InputControlMapping_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568873 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    DAT_04568873 = 1;
    method = extraout_x1;
  }
  (__this->fields).Scale = 1.0;
  if ((InControl_InputControlMapping_Range_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputControlMapping_Range_TypeInfo,method);
  }
  (__this->fields).SourceRange =
       InControl_InputControlMapping_Range_TypeInfo->static_fields->Complete;
  thunk_FUN_01c20e04();
  (__this->fields).TargetRange =
       InControl_InputControlMapping_Range_TypeInfo->static_fields->Complete;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

