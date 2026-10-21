// InControl.UnityInputDeviceProfile$$.ctor @ RVA 0x355C900

void InControl_UnityInputDeviceProfile___ctor
               (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  InControl_InputControlMapping_array *pIVar1;
  MethodInfo *in_x6;
  InControl_InputControlMapping_array **ppIVar2;
  InControl_VersionInfo_o __this_00;
  InControl_VersionInfo_o __this_01;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_04568b8a & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568b8a = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields)._Meta_k__BackingField = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).upperDeadZone = 0.9;
  (__this->fields).sensitivity = 1.0;
  (__this->fields).lowerDeadZone = 0.2;
  pIVar1 = (InControl_InputControlMapping_array *)
           FUN_01bab718(InControl_InputControlMapping___TypeInfo,0);
  (__this->fields)._AnalogMappings_k__BackingField = pIVar1;
  thunk_FUN_01c20e04();
  pIVar1 = (InControl_InputControlMapping_array *)
           FUN_01bab718(InControl_InputControlMapping___TypeInfo,0);
  ppIVar2 = &(__this->fields)._ButtonMappings_k__BackingField;
  *ppIVar2 = pIVar1;
  thunk_FUN_01c20e04(ppIVar2,pIVar1);
  local_40 = 0;
  uStack_38 = 0;
  __this_00.fields.Patch = 3;
  __this_00.fields.Build = 0;
  __this_00.fields._0_8_ = &local_40;
  InControl_VersionInfo___ctor(__this_00,0,0,0,0,in_x6);
  (__this->fields)._MinUnityVersion_k__BackingField.fields.Patch = (undefined4)uStack_38;
  (__this->fields)._MinUnityVersion_k__BackingField.fields.Build = uStack_38._4_4_;
  (__this->fields)._MinUnityVersion_k__BackingField.fields.Major = (undefined4)local_40;
  (__this->fields)._MinUnityVersion_k__BackingField.fields.Minor = local_40._4_4_;
  local_50 = 0;
  uStack_48 = 0;
  __this_01.fields.Patch = 0x7fffffff;
  __this_01.fields.Build = 0;
  __this_01.fields._0_8_ = &local_50;
  InControl_VersionInfo___ctor(__this_01,0,0,0,0,in_x6);
  (__this->fields)._MaxUnityVersion_k__BackingField.fields.Patch = (undefined4)uStack_48;
  (__this->fields)._MaxUnityVersion_k__BackingField.fields.Build = uStack_48._4_4_;
  (__this->fields)._MaxUnityVersion_k__BackingField.fields.Major = (undefined4)local_50;
  (__this->fields)._MaxUnityVersion_k__BackingField.fields.Minor = local_50._4_4_;
  return;
}

