// InControl.InputManager$$set_Platform @ RVA 0x321512C

void InControl_InputManager__set_Platform(System_String_o *value,MethodInfo *method)

{
  System_String_o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ebc & 1) == 0) {
                    /* try { // try from 0331514c to 03415153 has its CatchHandler @ 03315208 */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ebc = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  ppSVar1 = &InControl_InputManager_TypeInfo->static_fields->_Platform_k__BackingField;
  *ppSVar1 = value;
  thunk_FUN_01c20e04(ppSVar1,value);
  return;
}

