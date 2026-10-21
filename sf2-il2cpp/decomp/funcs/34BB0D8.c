// SFButton$$OriginateChangeState @ RVA 0x34BB0D8

void SFButton__OriginateChangeState(SFButton_o *__this,MethodInfo *method)

{
  System_Nullable_Selectable_SelectionState__o *__this_00;
  uint uVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685ce & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Selectable_SelectionState>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Selectable_SelectionState>_get_Value__);
    DAT_045685ce = 1;
    method = extraout_x1;
  }
  SFButton__BJBKCBEEKLB(__this,method);
  __this_00 = &(__this->fields).NLGFKIHALIG;
  if ((__this->fields).NLGFKIHALIG.fields.hasValue != false) {
    uVar1 = System_Nullable<Int32Enum>__get_Value
                      ((System_Nullable_Int32Enum__o)__this_00,
                       Method_System_Nullable<Selectable_SelectionState>_get_Value__);
    (*(__this->klass->vtable)._26_DoStateTransition.methodPtr)
              (__this,(ulong)uVar1,0,(__this->klass->vtable)._26_DoStateTransition.method);
  }
  __this_00->fields = (System_Nullable_Selectable_SelectionState__Fields)0x0;
  return;
}

