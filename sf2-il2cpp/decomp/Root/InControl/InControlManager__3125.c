// TypeDefIndex 3125
// Namespace: InControl
// public class InControlManager : MonoBehaviour
// Fields:
//   public bool logDebugInfo; // 0x20
//   public bool invertYAxis; // 0x21
//   public bool enableXInput; // 0x22
//   public bool useFixedUpdate; // 0x23
//   public bool dontDestroyOnLoad; // 0x24
//   public List<string> customProfiles; // 0x28

// ===== private void OnEnable()  [RVA 0x34D0488]
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
    FUN_01bab630(&StringLiteral_3993/*"Cannot find class for custom profile: "*/);
    FUN_01bab630(&StringLiteral_1100/*")"*/);
    FUN_01bab630(&StringLiteral_7363/*"InControl (version "*/);
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
    pSVar4 = System_String__Concat(StringLiteral_7363/*"InControl (version "*/,pSVar4,StringLiteral_1100/*")"*/,(MethodInfo *)0x0);
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
      pSVar4 = System_String__Concat(StringLiteral_3993/*"Cannot find class for custom profile: "*/,(System_String_o *)str1,(MethodInfo *)0x0);
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


// ===== private void OnDisable()  [RVA 0x34D091C]
// InControl.InControlManager$$OnDisable @ RVA 0x34D091C

void InControl_InControlManager__OnDisable(InControl_InControlManager_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045686a9 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045686a9 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager__ResetInternal((MethodInfo *)0x0);
  return;
}


// ===== private void Update()  [RVA 0x34D096C]
// InControl.InControlManager$$Update @ RVA 0x34D096C

void InControl_InControlManager__Update(InControl_InControlManager_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_045686aa & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045686aa = 1;
  }
  if ((__this->fields).useFixedUpdate != false) {
    fVar1 = UnityEngine_Time__get_timeScale((MethodInfo *)0x0);
    if (DAT_045602fa == '\0') {
      FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
      DAT_045602fa = '\x01';
    }
    fVar3 = ABS(fVar1);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar4 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
    fVar2 = fVar3 * 1e-06;
    if (fVar3 * 1e-06 <= fVar4) {
      fVar2 = fVar4;
    }
    if (fVar2 <= ABS(0.0 - fVar1)) {
      return;
    }
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  InControl_InputManager__UpdateInternal((MethodInfo *)0x0);
  return;
}


// ===== private void FixedUpdate()  [RVA 0x34D0A54]
// InControl.InControlManager$$FixedUpdate @ RVA 0x34D0A54

void InControl_InControlManager__FixedUpdate
               (InControl_InControlManager_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045686ab & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045686ab = 1;
    method = extraout_x1;
  }
  if ((__this->fields).useFixedUpdate != false) {
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
    }
    InControl_InputManager__UpdateInternal((MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void OnApplicationFocus(bool focusState)  [RVA 0x34D0ABC]
// InControl.InControlManager$$OnApplicationFocus @ RVA 0x34D0ABC

void InControl_InControlManager__OnApplicationFocus
               (InControl_InControlManager_o *__this,bool focusState,MethodInfo *method)

{
  if ((DAT_045686ac & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045686ac = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  InControl_InputManager__OnApplicationFocus(focusState,(MethodInfo *)0x0);
  return;
}


// ===== private void OnApplicationPause(bool pauseState)  [RVA 0x34D0B14]
// InControl.InControlManager$$OnApplicationPause @ RVA 0x34D0B14

void InControl_InControlManager__OnApplicationPause
               (InControl_InControlManager_o *__this,bool pauseState,MethodInfo *method)

{
  if ((DAT_045686ad & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045686ad = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  InControl_InputManager__OnApplicationPause(pauseState,(MethodInfo *)0x0);
  return;
}


// ===== private void OnApplicationQuit()  [RVA 0x34D0B6C]
// InControl.InControlManager$$OnApplicationQuit @ RVA 0x34D0B6C

void InControl_InControlManager__OnApplicationQuit
               (InControl_InControlManager_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045686ae & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045686ae = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager__OnApplicationQuit((MethodInfo *)0x0);
  return;
}


// ===== private void HandleOnLogMessage(LogMessage logMessage)  [RVA 0x34D0BBC]
// InControl.InControlManager$$HandleOnLogMessage @ RVA 0x34D0BBC

void InControl_InControlManager__HandleOnLogMessage
               (InControl_InControlManager_o *__this,InControl_LogMessage_o logMessage,
               MethodInfo *method)

{
  System_String_o *message;
  int iVar1;
  
  message = logMessage.fields.text;
  if ((DAT_045686af & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_045686af = 1;
  }
  iVar1 = logMessage.fields.type;
  if (iVar1 == 2) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)message,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x34D0C90]
// InControl.InControlManager$$.ctor @ RVA 0x34D0C90

void InControl_InControlManager___ctor(InControl_InControlManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045686b0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045686b0 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).customProfiles;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

