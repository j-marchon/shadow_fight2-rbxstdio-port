// InControl.InControlManager$$OnEnable @ RVA 0x34D0488

void InControl_InControlManager__OnEnable(InControl_InControlManager_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  byte bVar2;
  Il2CppObject *str1;
  bool bVar3;
  System_String_o *pSVar4;
  InControl_Logger_LogMessageHandler_o *value;
  InControl_InputManager_c *pIVar5;
  System_Collections_Generic_List_string__o *__this_00;
  System_Type_o *left;
  InControl_UnityInputDeviceProfile_o *profile;
  InControl_UnityInputDevice_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  InControl_InputManager_StaticFields *pIVar6;
  InControl_VersionInfo_o __this_02;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_045686a8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_InControl_InControlManager_HandleOnLogMessage__);
    FUN_01bab630(&Method_InControl_InControlManager_OnEnable__);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&InControl_Logger_LogMessageHandler_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_System_Type_GetType__);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&InControl_UnityInputDevice_TypeInfo);
    FUN_01bab630(&StringLiteral_3993);
    FUN_01bab630(&StringLiteral_1100);
    FUN_01bab630(&StringLiteral_7363);
    DAT_045686a8 = 1;
    method = extraout_x1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).logDebugInfo != false) {
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
    }
    pIVar6 = InControl_InputManager_TypeInfo->static_fields;
    uStack_68._0_4_ = (pIVar6->Version).fields.Patch;
    uStack_68._4_4_ = (pIVar6->Version).fields.Build;
    local_70._0_4_ = (pIVar6->Version).fields.Major;
    local_70._4_4_ = (pIVar6->Version).fields.Minor;
    __this_02.fields.Patch = 0;
    __this_02.fields.Build = 0;
    __this_02.fields._0_8_ = &local_70;
    pSVar4 = InControl_VersionInfo__ToString(__this_02,in_x2);
    pSVar4 = System_String__Concat(StringLiteral_7363,pSVar4,StringLiteral_1100,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
    value = (InControl_Logger_LogMessageHandler_o *)
            thunk_FUN_01bda818(InControl_Logger_LogMessageHandler_TypeInfo);
    InControl_Logger_LogMessageHandler___ctor();
    InControl_Logger__add_OnLogMessage(value,(MethodInfo *)0x0);
  }
  bVar1 = (__this->fields).invertYAxis;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar5 = InControl_InputManager_TypeInfo;
  InControl_InputManager_TypeInfo->static_fields->InvertYAxis = bVar1;
  bVar1 = (__this->fields).enableXInput;
  if (DAT_045686dd == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045686dd = '\x01';
    pIVar5 = InControl_InputManager_TypeInfo;
  }
  if ((pIVar5->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pIVar5 = InControl_InputManager_TypeInfo;
  }
  pIVar5->static_fields->enableXInput = bVar1;
  InControl_InputManager__SetupInternal((MethodInfo *)0x0);
  __this_00 = (__this->fields).customProfiles;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  local_90.fields._index = local_a8.fields._index;
  local_90.fields._version = local_a8.fields._version;
  local_90.fields._list = local_a8.fields._list;
  local_90.fields._current = local_a8.fields._current;
  do {
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      str1 = local_90.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_90,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
        if ((__this->fields).dontDestroyOnLoad != false) {
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
        }
        return;
      }
      if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      left = (System_Type_o *)
             FUN_01babac0(str1,Method_System_Type_GetType__,
                          Method_InControl_InControlManager_OnEnable__);
      bVar3 = System_Type__op_Equality(left,(System_Type_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) break;
      pSVar4 = System_String__Concat(StringLiteral_3993,(System_String_o *)str1,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
    }
    profile = (InControl_UnityInputDeviceProfile_o *)
              System_Activator__CreateInstance(left,(MethodInfo *)0x0);
    __this_01 = (InControl_UnityInputDevice_o *)
                thunk_FUN_01bda818(InControl_UnityInputDevice_TypeInfo);
    if (profile == (InControl_UnityInputDeviceProfile_o *)0x0) {
LAB_035d07dc:
      profile = (InControl_UnityInputDeviceProfile_o *)0x0;
    }
    else {
      bVar2 = (InControl_UnityInputDeviceProfile_TypeInfo->_2).naturalAligment;
      if ((((Il2CppClass *)profile->klass)->_2).naturalAligment < bVar2) goto LAB_035d07dc;
      if ((((Il2CppClass *)profile->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)InControl_UnityInputDeviceProfile_TypeInfo) {
        profile = (InControl_UnityInputDeviceProfile_o *)0x0;
      }
    }
    InControl_UnityInputDevice___ctor(__this_01,profile,(MethodInfo *)0x0);
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    InControl_InputManager__AttachDevice((InControl_InputDevice_o *)__this_01,(MethodInfo *)0x0);
  } while( true );
}

