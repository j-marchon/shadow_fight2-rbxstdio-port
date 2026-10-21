// InControl.UnityInputDeviceProfile$$set_MinUnityVersion @ RVA 0x355C8E4

void InControl_UnityInputDeviceProfile__set_MinUnityVersion
               (InControl_UnityInputDeviceProfile_o *__this,InControl_VersionInfo_o value,
               MethodInfo *method)

{
  (__this->fields)._MinUnityVersion_k__BackingField.fields.Major = (int)value.fields._0_8_;
  (__this->fields)._MinUnityVersion_k__BackingField.fields.Minor =
       (int)((ulong)value.fields._0_8_ >> 0x20);
  (__this->fields)._MinUnityVersion_k__BackingField.fields.Patch = (int)value.fields._8_8_;
  (__this->fields)._MinUnityVersion_k__BackingField.fields.Build =
       (int)((ulong)value.fields._8_8_ >> 0x20);
  return;
}

