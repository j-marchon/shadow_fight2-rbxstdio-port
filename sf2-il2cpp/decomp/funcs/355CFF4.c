// InControl.UnityInputDeviceProfile$$get_AnalogCount @ RVA 0x355CFF4

int32_t InControl_UnityInputDeviceProfile__get_AnalogCount
                  (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  InControl_InputControlMapping_array *pIVar1;
  
  pIVar1 = (__this->fields)._AnalogMappings_k__BackingField;
  if (pIVar1 != (InControl_InputControlMapping_array *)0x0) {
    return (int32_t)pIVar1->max_length;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

