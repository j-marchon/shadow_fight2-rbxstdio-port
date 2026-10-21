// TypeDefIndex 3216
// Namespace: InControl
// public class InputControlMapping
// Fields:
//   public InputControlSource Source; // 0x10
//   public InputControlType Target; // 0x18
//   public bool Invert; // 0x1C
//   public float Scale; // 0x20
//   public bool Raw; // 0x24
//   public bool IgnoreInitialZeroValue; // 0x25
//   public InputControlMapping.Range SourceRange; // 0x28
//   public InputControlMapping.Range TargetRange; // 0x30
//   private string handle; // 0x38

// ===== public float MapValue(float value)  [RVA 0x35031AC]
// InControl.InputControlMapping$$MapValue @ RVA 0x35031AC

/* WARNING: Removing unreachable block (ram,0x0360323c) */
/* WARNING: Removing unreachable block (ram,0x0360328c) */

float InControl_InputControlMapping__MapValue
                (InControl_InputControlMapping_o *__this,float value,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  char cVar3;
  InControl_InputControlMapping_Range_o *pIVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  auVar9._8_8_ = method;
  auVar9._0_8_ = __this;
  if ((DAT_04568871 & 1) == 0) {
    auVar9 = FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04568871 = 1;
  }
  fVar8 = (__this->fields).Scale * value;
  if ((__this->fields).Raw != false) {
LAB_036031f0:
    iVar1 = (__this->fields).Target;
    bVar2 = (__this->fields).Invert;
    if ((iVar1 == 5) || (iVar1 == 2)) {
      if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      cVar3 = InControl_InputManager_TypeInfo->static_fields->InvertYAxis;
    }
    else {
      cVar3 = '\0';
    }
    if ((bool_conflict)cVar3 != bVar2) {
      fVar8 = -fVar8;
    }
    return fVar8;
  }
  pIVar4 = (__this->fields).SourceRange;
  if (fVar8 < -1.0) {
    fVar8 = -1.0;
  }
  if (pIVar4 != (InControl_InputControlMapping_Range_o *)0x0) {
    fVar6 = (pIVar4->fields).Minimum;
    if (fVar8 < fVar6) {
      return 0.0;
    }
    fVar7 = (pIVar4->fields).Maximum;
    if (fVar7 < fVar8) {
      return 0.0;
    }
    fVar5 = 0.0;
    if ((fVar6 != fVar7) && (fVar8 = (fVar8 - fVar6) / (fVar7 - fVar6), 0.0 <= fVar8)) {
      fVar5 = fVar8;
    }
    pIVar4 = (__this->fields).TargetRange;
    if (pIVar4 != (InControl_InputControlMapping_Range_o *)0x0) {
      fVar8 = (pIVar4->fields).Minimum;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      fVar8 = fVar8 + fVar5 * ((pIVar4->fields).Maximum - fVar8);
      goto LAB_036031f0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar9._0_8_,auVar9._8_8_);
}


// ===== public string get_Handle()  [RVA 0x35032F4]
// InControl.InputControlMapping$$get_Handle @ RVA 0x35032F4

System_String_o *
InControl_InputControlMapping__get_Handle
          (InControl_InputControlMapping_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04568872 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlType_TypeInfo);
    DAT_04568872 = 1;
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).handle,(MethodInfo *)0x0);
  if (bVar1) {
    local_38.klass = (System_Enum_c *)InControl_InputControlType_TypeInfo;
    local_38.monitor = (void *)0xffffffffffffffff;
    local_28 = (__this->fields).Target;
    pSVar2 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  }
  else {
    pSVar2 = (__this->fields).handle;
  }
  return pSVar2;
}


// ===== public void set_Handle(string value)  [RVA 0x3503374]
// InControl.InputControlMapping$$set_Handle @ RVA 0x3503374

void InControl_InputControlMapping__set_Handle
               (InControl_InputControlMapping_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields).handle = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== private bool get_IsYAxis()  [RVA 0x35032D8]
// InControl.InputControlMapping$$get_IsYAxis @ RVA 0x35032D8

bool InControl_InputControlMapping__get_IsYAxis
               (InControl_InputControlMapping_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).Target;
  return iVar1 == 2 || iVar1 == 5;
}


// ===== public void .ctor()  [RVA 0x350337C]
// InControl.InputControlMapping$$.ctor @ RVA 0x350337C

void InControl_InputControlMapping___ctor
               (InControl_InputControlMapping_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568873 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    DAT_04568873 = 1;
    method = extraout_x1;
  }
  (__this->fields).Scale = 1.0;
  if ((InControl_InputControlMapping_Range_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputControlMapping_Range_TypeInfo,method);
  }
  (__this->fields).SourceRange =
       InControl_InputControlMapping_Range_TypeInfo->static_fields->Complete;
  thunk_FUN_01c20e04();
  (__this->fields).TargetRange =
       InControl_InputControlMapping_Range_TypeInfo->static_fields->Complete;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

