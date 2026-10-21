// InControl.UnityInputDevice$$IsConfiguredWith @ RVA 0x315945C

bool InControl_UnityInputDevice__IsConfiguredWith
               (InControl_UnityInputDevice_o *__this,
               InControl_UnityInputDeviceProfile_o *deviceProfile,int32_t joystickId,
               MethodInfo *method)

{
  if (*(InControl_UnityInputDeviceProfile_o **)&(__this->fields)._JoystickId_k__BackingField !=
      deviceProfile) {
    return false;
  }
  return *(int *)&(__this->fields).super.field_0x44 == joystickId;
}

