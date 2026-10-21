// InControl.InputManager$$get_UnityVersion @ RVA 0x3217980

InControl_VersionInfo_o InControl_InputManager__get_UnityVersion(MethodInfo *method)

{
  InControl_InputManager_c *pIVar1;
  InControl_InputManager_StaticFields *pIVar2;
  InControl_VersionInfo_o value;
  InControl_VersionInfo_Fields IVar3;
  System_Nullable_VersionInfo__Fields local_38;
  
  if ((DAT_04566ee0 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<VersionInfo>__ctor__);
    FUN_01bab630(&Method_System_Nullable<VersionInfo>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<VersionInfo>_get_Value__);
    DAT_04566ee0 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->static_fields->unityVersion).fields.hasValue == false) {
    value = InControl_VersionInfo__UnityVersion((MethodInfo *)0x0);
    local_38.hasValue = false;
    local_38._1_3_ = 0;
    local_38.value.fields.Major = 0;
    local_38.value.fields.Minor = 0;
    local_38.value.fields.Patch = 0;
    local_38.value.fields.Build = 0;
    System_Nullable<VersionInfo>___ctor
              ((System_Nullable_VersionInfo__o *)&local_38,value,
               Method_System_Nullable<VersionInfo>__ctor__);
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar1 = InControl_InputManager_TypeInfo;
    pIVar2 = InControl_InputManager_TypeInfo->static_fields;
    (pIVar2->unityVersion).fields.value.fields.Build = local_38.value.fields.Build;
    (pIVar2->unityVersion).fields.value.fields.Minor = local_38.value.fields.Minor;
    (pIVar2->unityVersion).fields.value.fields.Patch = local_38.value.fields.Patch;
    (pIVar2->unityVersion).fields.hasValue = local_38.hasValue;
    *(undefined3 *)&(pIVar2->unityVersion).fields.field_0x1 = local_38._1_3_;
    (pIVar2->unityVersion).fields.value.fields.Major = local_38.value.fields.Major;
  }
  if ((pIVar1->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pIVar1 = InControl_InputManager_TypeInfo;
  }
  IVar3 = (InControl_VersionInfo_Fields)
          System_Nullable<VersionInfo>__get_Value
                    (&pIVar1->static_fields->unityVersion,
                     Method_System_Nullable<VersionInfo>_get_Value__);
  return (InControl_VersionInfo_o)IVar3;
}

