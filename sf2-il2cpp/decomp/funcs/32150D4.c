// InControl.InputManager$$get_Platform @ RVA 0x32150D4

System_String_o * InControl_InputManager__get_Platform(MethodInfo *method)

{
  if ((DAT_04566ebb & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ebb = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return InControl_InputManager_TypeInfo->static_fields->_Platform_k__BackingField;
}

