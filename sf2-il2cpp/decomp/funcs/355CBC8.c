// InControl.UnityInputDeviceProfile$$get_IsSupportedOnThisVersionOfUnity @ RVA 0x355CBC8

bool InControl_UnityInputDeviceProfile__get_IsSupportedOnThisVersionOfUnity
               (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  bool bVar1;
  InControl_VersionInfo_o a;
  
  a = InControl_VersionInfo__UnityVersion((MethodInfo *)0x0);
  bVar1 = InControl_VersionInfo__op_GreaterThanOrEqual
                    (a,(InControl_VersionInfo_o)
                       (__this->fields)._MinUnityVersion_k__BackingField.fields,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = InControl_VersionInfo__op_LessThanOrEqual
                      (a,(InControl_VersionInfo_o)
                         (__this->fields)._MaxUnityVersion_k__BackingField.fields,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
  return false;
}

