// TypeDefIndex 3422
// Namespace: InControl
// public class UnityInputDeviceProfile
// Fields:
//   private string <Name>k__BackingField; // 0x10
//   private string <Meta>k__BackingField; // 0x18
//   private InputControlMapping[] <AnalogMappings>k__BackingField; // 0x20
//   private InputControlMapping[] <ButtonMappings>k__BackingField; // 0x28
//   protected string[] SupportedPlatforms; // 0x30
//   protected string[] JoystickNames; // 0x38
//   protected string[] JoystickRegex; // 0x40
//   protected string LastResortRegex; // 0x48
//   private VersionInfo <MinUnityVersion>k__BackingField; // 0x50
//   private VersionInfo <MaxUnityVersion>k__BackingField; // 0x60
//   private static HashSet<Type> hideList; // 0x0
//   private float sensitivity; // 0x70
//   private float lowerDeadZone; // 0x74
//   private float upperDeadZone; // 0x78
//   protected static InputControlSource Button0; // 0x8
//   protected static InputControlSource Button1; // 0x10
//   protected static InputControlSource Button2; // 0x18
//   protected static InputControlSource Button3; // 0x20
//   protected static InputControlSource Button4; // 0x28
//   protected static InputControlSource Button5; // 0x30
//   protected static InputControlSource Button6; // 0x38
//   protected static InputControlSource Button7; // 0x40
//   protected static InputControlSource Button8; // 0x48
//   protected static InputControlSource Button9; // 0x50
//   protected static InputControlSource Button10; // 0x58
//   protected static InputControlSource Button11; // 0x60
//   protected static InputControlSource Button12; // 0x68
//   protected static InputControlSource Button13; // 0x70
//   protected static InputControlSource Button14; // 0x78
//   protected static InputControlSource Button15; // 0x80
//   protected static InputControlSource Button16; // 0x88
//   protected static InputControlSource Button17; // 0x90
//   protected static InputControlSource Button18; // 0x98
//   protected static InputControlSource Button19; // 0xA0
//   protected static InputControlSource Analog0; // 0xA8
//   protected static InputControlSource Analog1; // 0xB0
//   protected static InputControlSource Analog2; // 0xB8
//   protected static InputControlSource Analog3; // 0xC0
//   protected static InputControlSource Analog4; // 0xC8
//   protected static InputControlSource Analog5; // 0xD0
//   protected static InputControlSource Analog6; // 0xD8
//   protected static InputControlSource Analog7; // 0xE0
//   protected static InputControlSource Analog8; // 0xE8
//   protected static InputControlSource Analog9; // 0xF0
//   protected static InputControlSource Analog10; // 0xF8
//   protected static InputControlSource Analog11; // 0x100
//   protected static InputControlSource Analog12; // 0x108
//   protected static InputControlSource Analog13; // 0x110
//   protected static InputControlSource Analog14; // 0x118
//   protected static InputControlSource Analog15; // 0x120
//   protected static InputControlSource Analog16; // 0x128
//   protected static InputControlSource Analog17; // 0x130
//   protected static InputControlSource Analog18; // 0x138
//   protected static InputControlSource Analog19; // 0x140
//   protected static InputControlSource MouseButton0; // 0x148
//   protected static InputControlSource MouseButton1; // 0x150
//   protected static InputControlSource MouseButton2; // 0x158
//   protected static InputControlSource MouseXAxis; // 0x160
//   protected static InputControlSource MouseYAxis; // 0x168
//   protected static InputControlSource MouseScrollWheel; // 0x170

// ===== public string get_Name()  [RVA 0x355C898]
// InControl.UnityInputDeviceProfile$$get_Name @ RVA 0x355C898

System_String_o *
InControl_UnityInputDeviceProfile__get_Name
          (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// ===== protected void set_Name(string value)  [RVA 0x355C8A0]
// InControl.UnityInputDeviceProfile$$set_Name @ RVA 0x355C8A0

void InControl_UnityInputDeviceProfile__set_Name
               (InControl_UnityInputDeviceProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Name_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string get_Meta()  [RVA 0x355C8A8]
// InControl.UnityInputDeviceProfile$$get_Meta @ RVA 0x355C8A8

System_String_o *
InControl_UnityInputDeviceProfile__get_Meta
          (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._Meta_k__BackingField;
}


// ===== protected void set_Meta(string value)  [RVA 0x355C8B0]
// InControl.UnityInputDeviceProfile$$set_Meta @ RVA 0x355C8B0

void InControl_UnityInputDeviceProfile__set_Meta
               (InControl_UnityInputDeviceProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Meta_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public InputControlMapping[] get_AnalogMappings()  [RVA 0x355C8B8]
// InControl.UnityInputDeviceProfile$$get_AnalogMappings @ RVA 0x355C8B8

InControl_InputControlMapping_array *
InControl_UnityInputDeviceProfile__get_AnalogMappings
          (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._AnalogMappings_k__BackingField;
}


// ===== protected void set_AnalogMappings(InputControlMapping[] value)  [RVA 0x355C8C0]
// InControl.UnityInputDeviceProfile$$set_AnalogMappings @ RVA 0x355C8C0

void InControl_UnityInputDeviceProfile__set_AnalogMappings
               (InControl_UnityInputDeviceProfile_o *__this,
               InControl_InputControlMapping_array *value,MethodInfo *method)

{
  (__this->fields)._AnalogMappings_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public InputControlMapping[] get_ButtonMappings()  [RVA 0x355C8C8]
// InControl.UnityInputDeviceProfile$$get_ButtonMappings @ RVA 0x355C8C8

InControl_InputControlMapping_array *
InControl_UnityInputDeviceProfile__get_ButtonMappings
          (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._ButtonMappings_k__BackingField;
}


// ===== protected void set_ButtonMappings(InputControlMapping[] value)  [RVA 0x355C8D0]
// InControl.UnityInputDeviceProfile$$set_ButtonMappings @ RVA 0x355C8D0

void InControl_UnityInputDeviceProfile__set_ButtonMappings
               (InControl_UnityInputDeviceProfile_o *__this,
               InControl_InputControlMapping_array *value,MethodInfo *method)

{
  (__this->fields)._ButtonMappings_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public VersionInfo get_MinUnityVersion()  [RVA 0x355C8D8]
// InControl.UnityInputDeviceProfile$$get_MinUnityVersion @ RVA 0x355C8D8

InControl_VersionInfo_o
InControl_UnityInputDeviceProfile__get_MinUnityVersion
          (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  return (InControl_VersionInfo_o)(__this->fields)._MinUnityVersion_k__BackingField.fields;
}


// ===== protected void set_MinUnityVersion(VersionInfo value)  [RVA 0x355C8E4]
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


// ===== public VersionInfo get_MaxUnityVersion()  [RVA 0x355C8EC]
// InControl.UnityInputDeviceProfile$$get_MaxUnityVersion @ RVA 0x355C8EC

InControl_VersionInfo_o
InControl_UnityInputDeviceProfile__get_MaxUnityVersion
          (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  return (InControl_VersionInfo_o)(__this->fields)._MaxUnityVersion_k__BackingField.fields;
}


// ===== protected void set_MaxUnityVersion(VersionInfo value)  [RVA 0x355C8F8]
// InControl.UnityInputDeviceProfile$$set_MaxUnityVersion @ RVA 0x355C8F8

void InControl_UnityInputDeviceProfile__set_MaxUnityVersion
               (InControl_UnityInputDeviceProfile_o *__this,InControl_VersionInfo_o value,
               MethodInfo *method)

{
  (__this->fields)._MaxUnityVersion_k__BackingField.fields.Major = (int)value.fields._0_8_;
  (__this->fields)._MaxUnityVersion_k__BackingField.fields.Minor =
       (int)((ulong)value.fields._0_8_ >> 0x20);
  (__this->fields)._MaxUnityVersion_k__BackingField.fields.Patch = (int)value.fields._8_8_;
  (__this->fields)._MaxUnityVersion_k__BackingField.fields.Build =
       (int)((ulong)value.fields._8_8_ >> 0x20);
  return;
}


// ===== public void .ctor()  [RVA 0x355C900]
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
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568b8a = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields)._Meta_k__BackingField = StringLiteral_1/*""*/;
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


// ===== public float get_Sensitivity()  [RVA 0x355CA30]
// InControl.UnityInputDeviceProfile$$get_Sensitivity @ RVA 0x355CA30

float InControl_UnityInputDeviceProfile__get_Sensitivity
                (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  return (__this->fields).sensitivity;
}


// ===== protected void set_Sensitivity(float value)  [RVA 0x355CA38]
// InControl.UnityInputDeviceProfile$$set_Sensitivity @ RVA 0x355CA38

void InControl_UnityInputDeviceProfile__set_Sensitivity
               (InControl_UnityInputDeviceProfile_o *__this,float value,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = value < 0.0;
  if (1.0 < value) {
    value = 1.0;
  }
  if (bVar1) {
    value = 0.0;
  }
  (__this->fields).sensitivity = value;
  return;
}


// ===== public float get_LowerDeadZone()  [RVA 0x355CA54]
// InControl.UnityInputDeviceProfile$$get_LowerDeadZone @ RVA 0x355CA54

float InControl_UnityInputDeviceProfile__get_LowerDeadZone
                (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  return (__this->fields).lowerDeadZone;
}


// ===== protected void set_LowerDeadZone(float value)  [RVA 0x355CA5C]
// InControl.UnityInputDeviceProfile$$set_LowerDeadZone @ RVA 0x355CA5C

void InControl_UnityInputDeviceProfile__set_LowerDeadZone
               (InControl_UnityInputDeviceProfile_o *__this,float value,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = value < 0.0;
  if (1.0 < value) {
    value = 1.0;
  }
  if (bVar1) {
    value = 0.0;
  }
  (__this->fields).lowerDeadZone = value;
  return;
}


// ===== public float get_UpperDeadZone()  [RVA 0x355CA78]
// InControl.UnityInputDeviceProfile$$get_UpperDeadZone @ RVA 0x355CA78

float InControl_UnityInputDeviceProfile__get_UpperDeadZone
                (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  return (__this->fields).upperDeadZone;
}


// ===== protected void set_UpperDeadZone(float value)  [RVA 0x355CA80]
// InControl.UnityInputDeviceProfile$$set_UpperDeadZone @ RVA 0x355CA80

void InControl_UnityInputDeviceProfile__set_UpperDeadZone
               (InControl_UnityInputDeviceProfile_o *__this,float value,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = value < 0.0;
  if (1.0 < value) {
    value = 1.0;
  }
  if (bVar1) {
    value = 0.0;
  }
  (__this->fields).upperDeadZone = value;
  return;
}


// ===== public bool get_IsSupportedOnThisPlatform()  [RVA 0x355CA9C]
// InControl.UnityInputDeviceProfile$$get_IsSupportedOnThisPlatform @ RVA 0x355CA9C

bool InControl_UnityInputDeviceProfile__get_IsSupportedOnThisPlatform
               (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  ulong uVar3;
  System_String_o *pSVar4;
  System_String_o *__this_00;
  System_String_array *pSVar5;
  long lVar6;
  
  if ((DAT_04568b8b & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04568b8b = 1;
    method = extraout_x1;
  }
  bVar2 = InControl_UnityInputDeviceProfile__get_IsSupportedOnThisVersionOfUnity(__this,method);
  if (bVar2) {
    pSVar5 = (__this->fields).SupportedPlatforms;
    if ((pSVar5 == (System_String_array *)0x0) || (uVar3 = pSVar5->max_length, uVar3 == 0)) {
      return true;
    }
    if (0 < (int)uVar3) {
      lVar6 = 0;
      while( true ) {
        if ((uint)uVar3 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar4 = pSVar5->m_Items[lVar6];
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04568c0f == '\0') {
          FUN_01bab630(&InControl_InputManager_TypeInfo);
          DAT_04568c0f = '\x01';
        }
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pSVar4 == (System_String_o *)0x0) break;
        __this_00 = InControl_InputManager_TypeInfo->static_fields->_Platform_k__BackingField;
        pSVar4 = System_String__ToUpper(pSVar4,(MethodInfo *)0x0);
        if (__this_00 == (System_String_o *)0x0) break;
        bVar2 = System_String__Contains(__this_00,pSVar4,(MethodInfo *)0x0);
        if (bVar2) {
          return true;
        }
        uVar1 = (uint)pSVar5->max_length;
        uVar3 = (ulong)uVar1;
        lVar6 = lVar6 + 1;
        if ((int)uVar1 <= (int)lVar6) {
          return false;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return false;
}


// ===== public bool get_IsSupportedOnThisVersionOfUnity()  [RVA 0x355CBC8]
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


// ===== public bool get_IsJoystick()  [RVA 0x355CC20]
// InControl.UnityInputDeviceProfile$$get_IsJoystick @ RVA 0x355CC20

bool InControl_UnityInputDeviceProfile__get_IsJoystick
               (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (((__this->fields).LastResortRegex == (System_String_o *)0x0) &&
     ((pSVar1 = (__this->fields).JoystickNames, pSVar1 == (System_String_array *)0x0 ||
      (pSVar1->max_length == 0)))) {
    pSVar1 = (__this->fields).JoystickRegex;
    if (pSVar1 != (System_String_array *)0x0) {
      return (int)pSVar1->max_length != 0;
    }
    return false;
  }
  return true;
}


// ===== public bool get_IsNotJoystick()  [RVA 0x355CC60]
// InControl.UnityInputDeviceProfile$$get_IsNotJoystick @ RVA 0x355CC60

bool InControl_UnityInputDeviceProfile__get_IsNotJoystick
               (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (((__this->fields).LastResortRegex == (System_String_o *)0x0) &&
     ((pSVar1 = (__this->fields).JoystickNames, pSVar1 == (System_String_array *)0x0 ||
      (pSVar1->max_length == 0)))) {
    pSVar1 = (__this->fields).JoystickRegex;
    if (pSVar1 != (System_String_array *)0x0) {
      return (int)pSVar1->max_length == 0;
    }
    return true;
  }
  return false;
}


// ===== public bool HasJoystickName(string joystickName)  [RVA 0x355CCA0]
// InControl.UnityInputDeviceProfile$$HasJoystickName @ RVA 0x355CCA0

bool InControl_UnityInputDeviceProfile__HasJoystickName
               (InControl_UnityInputDeviceProfile_o *__this,System_String_o *joystickName,
               MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  System_String_array *pSVar4;
  System_String_array *pSVar5;
  System_String_o *pattern;
  ulong uVar6;
  
  if ((DAT_04568b8c & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Contains<string>__);
    FUN_01bab630(&System_Text_RegularExpressions_Regex_TypeInfo);
    FUN_01bab630(&System_StringComparer_TypeInfo);
    DAT_04568b8c = 1;
  }
  pSVar5 = (__this->fields).JoystickNames;
  if ((__this->fields).LastResortRegex == (System_String_o *)0x0) {
    if ((pSVar5 == (System_String_array *)0x0) || (pSVar5->max_length == 0)) {
      pSVar4 = (__this->fields).JoystickRegex;
      if (pSVar4 == (System_String_array *)0x0) {
        return false;
      }
      if ((int)pSVar4->max_length == 0) {
        return false;
      }
      goto LAB_0365ccfc;
    }
  }
  else {
LAB_0365ccfc:
    if (pSVar5 == (System_String_array *)0x0) goto LAB_0365cd88;
  }
  if ((System_StringComparer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_0455ff80 == '\0') {
    FUN_01bab630(&System_StringComparer_TypeInfo);
    DAT_0455ff80 = '\x01';
  }
  if ((System_StringComparer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = System_Linq_Enumerable__Contains<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                     (Il2CppObject *)joystickName,
                     (System_Collections_Generic_IEqualityComparer_TSource__o *)
                     System_StringComparer_TypeInfo->static_fields->s_ordinalIgnoreCase,
                     Method_System_Linq_Enumerable_Contains<string>__);
  if (bVar3) {
    return true;
  }
LAB_0365cd88:
  pSVar5 = (__this->fields).JoystickRegex;
  if (pSVar5 == (System_String_array *)0x0) {
    return false;
  }
  uVar6 = 0;
  while( true ) {
    uVar2 = (uint)pSVar5->max_length;
    lVar1 = (long)(int)uVar2;
    if (lVar1 <= (long)uVar6) {
      return (long)uVar6 < lVar1;
    }
    if (uVar2 <= uVar6) break;
    pattern = pSVar5->m_Items[uVar6];
    if ((System_Text_RegularExpressions_Regex_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = System_Text_RegularExpressions_Regex__IsMatch(joystickName,pattern,1,(MethodInfo *)0x0);
    if (bVar3) {
      return (long)uVar6 < lVar1;
    }
    pSVar5 = (__this->fields).JoystickRegex;
    uVar6 = uVar6 + 1;
    if (pSVar5 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public bool HasLastResortRegex(string joystickName)  [RVA 0x355CE24]
// InControl.UnityInputDeviceProfile$$HasLastResortRegex @ RVA 0x355CE24

bool InControl_UnityInputDeviceProfile__HasLastResortRegex
               (InControl_UnityInputDeviceProfile_o *__this,System_String_o *joystickName,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pattern;
  
  if ((DAT_04568b8d & 1) == 0) {
    FUN_01bab630(&System_Text_RegularExpressions_Regex_TypeInfo);
    DAT_04568b8d = 1;
  }
  pattern = (__this->fields).LastResortRegex;
  if (pattern != (System_String_o *)0x0) {
    if ((System_Text_RegularExpressions_Regex_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = System_Text_RegularExpressions_Regex__IsMatch(joystickName,pattern,1,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== public bool HasJoystickOrRegexName(string joystickName)  [RVA 0x355CEA0]
// InControl.UnityInputDeviceProfile$$HasJoystickOrRegexName @ RVA 0x355CEA0

bool InControl_UnityInputDeviceProfile__HasJoystickOrRegexName
               (InControl_UnityInputDeviceProfile_o *__this,System_String_o *joystickName,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = InControl_UnityInputDeviceProfile__HasJoystickName(__this,joystickName,method);
  if (bVar1) {
    return true;
  }
  bVar1 = InControl_UnityInputDeviceProfile__HasLastResortRegex(__this,joystickName,method);
  return bVar1;
}


// ===== public static void Hide(Type type)  [RVA 0x355CEDC]
// InControl.UnityInputDeviceProfile$$Hide @ RVA 0x355CEDC

void InControl_UnityInputDeviceProfile__Hide(System_Type_o *type,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b8e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<Type>_Add__);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    DAT_04568b8e = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->hideList;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add
              (__this,(Il2CppObject *)type,Method_System_Collections_Generic_HashSet<Type>_Add__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsHidden()  [RVA 0x355CF5C]
// InControl.UnityInputDeviceProfile$$get_IsHidden @ RVA 0x355CF5C

bool InControl_UnityInputDeviceProfile__get_IsHidden
               (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Type_o *item;
  MethodInfo *extraout_x1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if ((DAT_04568b8f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<Type>_Contains__);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    DAT_04568b8f = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              InControl_UnityInputDeviceProfile_TypeInfo->static_fields->hideList;
  item = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this_00,(Il2CppObject *)item,
                       Method_System_Collections_Generic_HashSet<Type>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual bool get_IsKnown()  [RVA 0x355CFEC]
// InControl.UnityInputDeviceProfile$$get_IsKnown @ RVA 0x355CFEC

bool InControl_UnityInputDeviceProfile__get_IsKnown
               (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public int get_AnalogCount()  [RVA 0x355CFF4]
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


// ===== public int get_ButtonCount()  [RVA 0x355D010]
// InControl.UnityInputDeviceProfile$$get_ButtonCount @ RVA 0x355D010

int32_t InControl_UnityInputDeviceProfile__get_ButtonCount
                  (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  InControl_InputControlMapping_array *pIVar1;
  
  pIVar1 = (__this->fields)._ButtonMappings_k__BackingField;
  if (pIVar1 != (InControl_InputControlMapping_array *)0x0) {
    return (int32_t)pIVar1->max_length;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected static InputControlSource Button(int index)  [RVA 0x355D02C]
// InControl.UnityInputDeviceProfile$$Button @ RVA 0x355D02C

InControl_InputControlSource_o *
InControl_UnityInputDeviceProfile__Button(int32_t index,MethodInfo *method)

{
  InControl_UnityButtonSource_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b90 & 1) == 0) {
    FUN_01bab630(&InControl_UnityButtonSource_TypeInfo);
    DAT_04568b90 = 1;
    method = extraout_x1;
  }
  __this = (InControl_UnityButtonSource_o *)
           thunk_FUN_01bda818(InControl_UnityButtonSource_TypeInfo,method);
  InControl_UnityButtonSource___ctor(__this,index,(MethodInfo *)0x0);
  return (InControl_InputControlSource_o *)__this;
}


// ===== protected static InputControlSource Analog(int index)  [RVA 0x355D088]
// InControl.UnityInputDeviceProfile$$Analog @ RVA 0x355D088

InControl_InputControlSource_o *
InControl_UnityInputDeviceProfile__Analog(int32_t index,MethodInfo *method)

{
  InControl_UnityAnalogSource_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b91 & 1) == 0) {
    FUN_01bab630(&InControl_UnityAnalogSource_TypeInfo);
    DAT_04568b91 = 1;
    method = extraout_x1;
  }
  __this = (InControl_UnityAnalogSource_o *)
           thunk_FUN_01bda818(InControl_UnityAnalogSource_TypeInfo,method);
  InControl_UnityAnalogSource___ctor(__this,index,(MethodInfo *)0x0);
  return (InControl_InputControlSource_o *)__this;
}


// ===== protected static InputControlSource KeyCodeButton(KeyCode[] keyCodeList)  [RVA 0x355D0E4]
// InControl.UnityInputDeviceProfile$$KeyCodeButton @ RVA 0x355D0E4

InControl_InputControlSource_o *
InControl_UnityInputDeviceProfile__KeyCodeButton
          (UnityEngine_KeyCode_array *keyCodeList,MethodInfo *method)

{
  InControl_UnityKeyCodeSource_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b92 & 1) == 0) {
    FUN_01bab630(&InControl_UnityKeyCodeSource_TypeInfo);
    DAT_04568b92 = 1;
    method = extraout_x1;
  }
  __this = (InControl_UnityKeyCodeSource_o *)
           thunk_FUN_01bda818(InControl_UnityKeyCodeSource_TypeInfo,method);
  InControl_UnityKeyCodeSource___ctor(__this,keyCodeList,(MethodInfo *)0x0);
  return (InControl_InputControlSource_o *)__this;
}


// ===== protected static InputControlSource KeyCodeComboButton(KeyCode[] keyCodeList)  [RVA 0x355D140]
// InControl.UnityInputDeviceProfile$$KeyCodeComboButton @ RVA 0x355D140

InControl_InputControlSource_o *
InControl_UnityInputDeviceProfile__KeyCodeComboButton
          (UnityEngine_KeyCode_array *keyCodeList,MethodInfo *method)

{
  InControl_UnityKeyCodeComboSource_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b93 & 1) == 0) {
    FUN_01bab630(&InControl_UnityKeyCodeComboSource_TypeInfo);
    DAT_04568b93 = 1;
    method = extraout_x1;
  }
  __this = (InControl_UnityKeyCodeComboSource_o *)
           thunk_FUN_01bda818(InControl_UnityKeyCodeComboSource_TypeInfo,method);
  InControl_UnityKeyCodeComboSource___ctor(__this,keyCodeList,(MethodInfo *)0x0);
  return (InControl_InputControlSource_o *)__this;
}


// ===== protected static InputControlSource KeyCodeAxis(KeyCode negativeKeyCode, KeyCode positiveKeyCode)  [RVA 0x355D19C]
// InControl.UnityInputDeviceProfile$$KeyCodeAxis @ RVA 0x355D19C

InControl_InputControlSource_o *
InControl_UnityInputDeviceProfile__KeyCodeAxis
          (int32_t negativeKeyCode,int32_t positiveKeyCode,MethodInfo *method)

{
  InControl_UnityKeyCodeAxisSource_o *__this;
  
  if ((DAT_04568b94 & 1) == 0) {
    FUN_01bab630(&InControl_UnityKeyCodeAxisSource_TypeInfo);
    DAT_04568b94 = 1;
  }
  __this = (InControl_UnityKeyCodeAxisSource_o *)
           thunk_FUN_01bda818(InControl_UnityKeyCodeAxisSource_TypeInfo);
  InControl_UnityKeyCodeAxisSource___ctor(__this,negativeKeyCode,positiveKeyCode,(MethodInfo *)0x0);
  return (InControl_InputControlSource_o *)__this;
}


// ===== private static void .cctor()  [RVA 0x355D208]
// InControl.UnityInputDeviceProfile$$.cctor @ RVA 0x355D208

void InControl_UnityInputDeviceProfile___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  InControl_InputControlSource_o *pIVar1;
  InControl_UnityMouseButtonSource_o *pIVar2;
  InControl_UnityMouseAxisSource_o *pIVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  MethodInfo *method_13;
  MethodInfo *method_14;
  MethodInfo *method_15;
  MethodInfo *method_16;
  MethodInfo *method_17;
  MethodInfo *method_18;
  MethodInfo *method_19;
  MethodInfo *method_20;
  MethodInfo *method_21;
  MethodInfo *method_22;
  MethodInfo *method_23;
  MethodInfo *method_24;
  MethodInfo *method_25;
  MethodInfo *method_26;
  MethodInfo *method_27;
  MethodInfo *method_28;
  MethodInfo *method_29;
  MethodInfo *method_30;
  MethodInfo *method_31;
  MethodInfo *method_32;
  MethodInfo *method_33;
  MethodInfo *method_34;
  MethodInfo *method_35;
  MethodInfo *method_36;
  MethodInfo *method_37;
  MethodInfo *method_38;
  MethodInfo *method_39;
  InControl_InputControlSource_o **ppIVar4;
  InControl_UnityInputDeviceProfile_StaticFields *pIVar5;
  
  if ((DAT_04568b95 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<Type>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<Type>_TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&InControl_UnityMouseAxisSource_TypeInfo);
    FUN_01bab630(&InControl_UnityMouseButtonSource_TypeInfo);
    FUN_01bab630(&StringLiteral_22052/*"x"*/);
    FUN_01bab630(&StringLiteral_22158/*"y"*/);
    FUN_01bab630(&StringLiteral_22209/*"z"*/);
    DAT_04568b95 = 1;
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<Type>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this,Method_System_Collections_Generic_HashSet<Type>__ctor__);
  InControl_UnityInputDeviceProfile_TypeInfo->static_fields->hideList =
       (System_Collections_Generic_HashSet_Type__o *)__this;
  thunk_FUN_01c20e04(InControl_UnityInputDeviceProfile_TypeInfo->static_fields,__this);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(0,method_00);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(1,method_01);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(2,method_02);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(3,method_03);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(4,method_04);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(5,method_05);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(6,method_06);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(7,method_07);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(8,method_08);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(9,method_09);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(10,method_10);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(0xb,method_11);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(0xc,method_12);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button12;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(0xd,method_13);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button13;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(0xe,method_14);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button14;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(0xf,method_15);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button15;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(0x10,method_16);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button16;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(0x11,method_17);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button17;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(0x12,method_18);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button18;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Button(0x13,method_19);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button19;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(0,method_20);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog0;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(1,method_21);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(2,method_22);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(3,method_23);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(4,method_24);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(5,method_25);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(6,method_26);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog6;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(7,method_27);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog7;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(8,method_28);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog8;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(9,method_29);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog9;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(10,method_30);
  ppIVar4 = &InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog10;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(0xb,method_31);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->Analog11 = pIVar1;
  thunk_FUN_01c20e04(&pIVar5->Analog11);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(0xc,method_32);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->Analog12 = pIVar1;
  thunk_FUN_01c20e04(&pIVar5->Analog12);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(0xd,method_33);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->Analog13 = pIVar1;
  thunk_FUN_01c20e04(&pIVar5->Analog13);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(0xe,method_34);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->Analog14 = pIVar1;
  thunk_FUN_01c20e04(&pIVar5->Analog14);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(0xf,method_35);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->Analog15 = pIVar1;
  thunk_FUN_01c20e04(&pIVar5->Analog15);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(0x10,method_36);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->Analog16 = pIVar1;
  thunk_FUN_01c20e04(&pIVar5->Analog16);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(0x11,method_37);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->Analog17 = pIVar1;
  thunk_FUN_01c20e04(&pIVar5->Analog17);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(0x12,method_38);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->Analog18 = pIVar1;
  thunk_FUN_01c20e04(&pIVar5->Analog18);
  pIVar1 = InControl_UnityInputDeviceProfile__Analog(0x13,method_39);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->Analog19 = pIVar1;
  thunk_FUN_01c20e04(&pIVar5->Analog19);
  pIVar2 = (InControl_UnityMouseButtonSource_o *)
           thunk_FUN_01bda818(InControl_UnityMouseButtonSource_TypeInfo);
  InControl_UnityMouseButtonSource___ctor(pIVar2,0,(MethodInfo *)0x0);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->MouseButton0 = (InControl_InputControlSource_o *)pIVar2;
  thunk_FUN_01c20e04(&pIVar5->MouseButton0,pIVar2);
  pIVar2 = (InControl_UnityMouseButtonSource_o *)
           thunk_FUN_01bda818(InControl_UnityMouseButtonSource_TypeInfo);
  InControl_UnityMouseButtonSource___ctor(pIVar2,1,(MethodInfo *)0x0);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->MouseButton1 = (InControl_InputControlSource_o *)pIVar2;
  thunk_FUN_01c20e04(&pIVar5->MouseButton1,pIVar2);
  pIVar2 = (InControl_UnityMouseButtonSource_o *)
           thunk_FUN_01bda818(InControl_UnityMouseButtonSource_TypeInfo);
  InControl_UnityMouseButtonSource___ctor(pIVar2,2,(MethodInfo *)0x0);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->MouseButton2 = (InControl_InputControlSource_o *)pIVar2;
  thunk_FUN_01c20e04(&pIVar5->MouseButton2,pIVar2);
  pIVar3 = (InControl_UnityMouseAxisSource_o *)
           thunk_FUN_01bda818(InControl_UnityMouseAxisSource_TypeInfo);
  InControl_UnityMouseAxisSource___ctor(pIVar3,StringLiteral_22052/*"x"*/,(MethodInfo *)0x0);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->MouseXAxis = (InControl_InputControlSource_o *)pIVar3;
  thunk_FUN_01c20e04(&pIVar5->MouseXAxis,pIVar3);
  pIVar3 = (InControl_UnityMouseAxisSource_o *)
           thunk_FUN_01bda818(InControl_UnityMouseAxisSource_TypeInfo);
  InControl_UnityMouseAxisSource___ctor(pIVar3,StringLiteral_22158/*"y"*/,(MethodInfo *)0x0);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->MouseYAxis = (InControl_InputControlSource_o *)pIVar3;
  thunk_FUN_01c20e04(&pIVar5->MouseYAxis,pIVar3);
  pIVar3 = (InControl_UnityMouseAxisSource_o *)
           thunk_FUN_01bda818(InControl_UnityMouseAxisSource_TypeInfo);
  InControl_UnityMouseAxisSource___ctor(pIVar3,StringLiteral_22209/*"z"*/,(MethodInfo *)0x0);
  pIVar5 = InControl_UnityInputDeviceProfile_TypeInfo->static_fields;
  pIVar5->MouseScrollWheel = (InControl_InputControlSource_o *)pIVar3;
  thunk_FUN_01c20e04(&pIVar5->MouseScrollWheel,pIVar3);
  return;
}

