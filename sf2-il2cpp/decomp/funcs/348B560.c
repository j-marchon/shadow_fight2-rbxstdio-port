// InControl.InputDevice$$GetInputControlTypeByName @ RVA 0x348B560

int32_t InControl_InputDevice__GetInputControlTypeByName
                  (System_String_o *inputControlName,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *enumType;
  Il2CppObject *pIVar1;
  int32_t *piVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045683dd & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&InControl_InputControlType_var);
    FUN_01bab630(&InControl_InputControlType_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_045683dd = 1;
    method = extraout_x1;
  }
  handle = InControl_InputControlType_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Type_TypeInfo,method);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Enum_TypeInfo);
  }
  pIVar1 = System_Enum__Parse(enumType,inputControlName,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    if ((pIVar1->klass->_1).element_class == (InControl_InputControlType_TypeInfo->_1).element_class
       ) {
      piVar2 = (int32_t *)thunk_FUN_01bda96c();
      return *piVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

