// TypeDefIndex 2890
// Namespace: InControl
// public class UnityAnalogSource : InputControlSource
// Fields:
//   private int analogId; // 0x10
//   private static string[,] analogQueries; // 0x0

// ===== public void .ctor(int analogId)  [RVA 0x3440510]
// InControl.UnityAnalogSource$$.ctor @ RVA 0x3440510

void InControl_UnityAnalogSource___ctor
               (InControl_UnityAnalogSource_o *__this,int32_t analogId,MethodInfo *method)

{
  MethodInfo *method_00;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03540528 to 0364052b has its CatchHandler @ 03540704 */
  (__this->fields).analogId = analogId;
                    /* try { // try from 03540534 to 0364054f has its CatchHandler @ 03540708 */
  InControl_UnityAnalogSource__SetupAnalogQueries(method_00);
  return;
}


// ===== public float GetValue(InputDevice inputDevice)  [RVA 0x34406D4]
// InControl.UnityAnalogSource$$GetValue @ RVA 0x34406D4

float InControl_UnityAnalogSource__GetValue
                (InControl_UnityAnalogSource_o *__this,InControl_InputDevice_o *inputDevice,
                MethodInfo *method)

{
  byte bVar1;
  System_String_o *axisName;
  float fVar2;
  
                    /* try { // try from 035406e0 to 036406e3 has its CatchHandler @ 03540720 */
                    /* try { // try from 035406e4 to 036406e7 has its CatchHandler @ 03540010 */
                    /* try { // try from 035406e8 to 036406eb has its CatchHandler @ 03540714 */
                    /* try { // try from 035406ec to 036406ef has its CatchHandler @ 03540710 */
  if ((DAT_04568217 & 1) == 0) {
                    /* try { // try from 035406f0 to 036406f7 has its CatchHandler @ 0354071c */
                    /* catch() { ... } // from try @ 03540594 with catch @ 035406f8
                       try { // try from 035406f8 to 0364073f has its CatchHandler @ 03540010 */
    FUN_01bab630(&InControl_UnityInputDevice_TypeInfo);
                    /* catch() { ... } // from try @ 035405a4 with catch @ 035406fc */
                    /* catch() { ... } // from try @ 03540598 with catch @ 03540700 */
    DAT_04568217 = 1;
  }
                    /* catch() { ... } // from try @ 03540528 with catch @ 03540704 */
  if (inputDevice != (InControl_InputDevice_o *)0x0) {
                    /* catch() { ... } // from try @ 03540534 with catch @ 03540708 */
                    /* catch() { ... } // from try @ 03540458 with catch @ 0354070c */
                    /* catch() { ... } // from try @ 035406ec with catch @ 03540710 */
                    /* catch() { ... } // from try @ 035406e8 with catch @ 03540714 */
                    /* catch() { ... } // from try @ 03540568 with catch @ 03540718 */
                    /* catch() { ... } // from try @ 035406f0 with catch @ 0354071c */
    bVar1 = (InControl_UnityInputDevice_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 035406e0 with catch @ 03540720 */
                    /* catch() { ... } // from try @ 035403dc with catch @ 03540724 */
                    /* catch() { ... } // from try @ 035403c8 with catch @ 03540728 */
    if ((bVar1 <= (inputDevice->klass->_2).naturalAligment) &&
       ((inputDevice->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)InControl_UnityInputDevice_TypeInfo)) {
                    /* try { // try from 03540740 to 03640743 has its CatchHandler @ 0354076c */
                    /* try { // try from 03540744 to 0364077b has its CatchHandler @ 03540010 */
      axisName = InControl_UnityAnalogSource__GetAnalogKey
                           (*(int32_t *)&(inputDevice->fields).field_0x44,(__this->fields).analogId,
                            method);
      fVar2 = UnityEngine_Input__GetAxisRaw(axisName,(MethodInfo *)0x0);
      return fVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool GetState(InputDevice inputDevice)  [RVA 0x34407F4]
// InControl.UnityAnalogSource$$GetState @ RVA 0x34407F4

bool InControl_UnityAnalogSource__GetState
               (InControl_UnityAnalogSource_o *__this,InControl_InputDevice_o *inputDevice,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
                    /* try { // try from 035407f8 to 036407ff has its CatchHandler @ 03540800 */
  fVar1 = InControl_UnityAnalogSource__GetValue(__this,inputDevice,method);
                    /* catch() { ... } // from try @ 0354077c with catch @ 03540800
                       catch() { ... } // from try @ 035407e4 with catch @ 03540800
                       catch() { ... } // from try @ 035407f8 with catch @ 03540800 */
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
  return fVar2 <= ABS(0.0 - fVar1);
}


// ===== private static void SetupAnalogQueries()  [RVA 0x3440538]
// InControl.UnityAnalogSource$$SetupAnalogQueries @ RVA 0x3440538

void InControl_UnityAnalogSource__SetupAnalogQueries(MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str3;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  if ((DAT_04568218 & 1) == 0) {
                    /* try { // try from 03540568 to 03640573 has its CatchHandler @ 03540718 */
    FUN_01bab630(&string____TypeInfo);
    FUN_01bab630(&InControl_UnityAnalogSource_TypeInfo);
    FUN_01bab630(&StringLiteral_19268/*"joystick "*/);
    FUN_01bab630(&StringLiteral_345/*" analog "*/);
                    /* try { // try from 03540594 to 03640597 has its CatchHandler @ 035406f8 */
    DAT_04568218 = 1;
  }
                    /* try { // try from 03540598 to 0364059f has its CatchHandler @ 03540700 */
  local_48 = 0;
                    /* try { // try from 035405a4 to 036405ab has its CatchHandler @ 035406fc */
  if (InControl_UnityAnalogSource_TypeInfo->static_fields->analogQueries ==
      (System_String_array *)0x0) {
                    /* try { // try from 035405ac to 036406df has its CatchHandler @ 03540010 */
    uStack_58 = 0x14;
    local_60 = 10;
    pSVar3 = (System_String_array *)FUN_01bab720(string____TypeInfo,&local_60);
    InControl_UnityAnalogSource_TypeInfo->static_fields->analogQueries = pSVar3;
    thunk_FUN_01c20e04(InControl_UnityAnalogSource_TypeInfo->static_fields,pSVar3);
    local_48._4_4_ = 1;
    do {
      local_48._0_4_ = 0;
      do {
        iVar2 = local_48._4_4_;
        uVar1 = (uint)local_48;
        pSVar3 = InControl_UnityAnalogSource_TypeInfo->static_fields->analogQueries;
        pSVar4 = System_Int32__ToString((int)&local_48 + 4,(MethodInfo *)0x0);
        str3 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat
                           (StringLiteral_19268/*"joystick "*/,pSVar4,StringLiteral_345/*" analog "*/,str3,(MethodInfo *)0x0);
        if (pSVar3 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (((uint)pSVar3->bounds->length <= iVar2 - 1U) ||
           (lVar5 = pSVar3->bounds[1].length, (uint)lVar5 <= uVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar3->m_Items[(long)(int)uVar1 + lVar5 * (int)(iVar2 - 1U)] = pSVar4;
        thunk_FUN_01c20e04();
        local_48._0_4_ = (uint)local_48 + 1;
      } while ((int)(uint)local_48 < 0x14);
      local_48._4_4_ = local_48._4_4_ + 1;
    } while (local_48._4_4_ < 0xb);
  }
  return;
}


// ===== private static string GetAnalogKey(int joystickId, int analogId)  [RVA 0x344075C]
// InControl.UnityAnalogSource$$GetAnalogKey @ RVA 0x344075C

System_String_o *
InControl_UnityAnalogSource__GetAnalogKey(int32_t joystickId,int32_t analogId,MethodInfo *method)

{
  System_String_array *pSVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 03540740 with catch @ 0354076c */
                    /* try { // try from 0354077c to 0364078f has its CatchHandler @ 03540800 */
  if ((DAT_04568219 & 1) == 0) {
    FUN_01bab630(&InControl_UnityAnalogSource_TypeInfo);
                    /* catch() { ... } // from try @ 035404d4 with catch @ 03540790
                       try { // try from 03540790 to 036407a7 has its CatchHandler @ 03540010 */
    DAT_04568219 = 1;
  }
  pSVar1 = InControl_UnityAnalogSource_TypeInfo->static_fields->analogQueries;
  if (pSVar1 != (System_String_array *)0x0) {
                    /* try { // try from 035407a8 to 036407ab has its CatchHandler @ 035407d4 */
                    /* try { // try from 035407ac to 036407e3 has its CatchHandler @ 03540010 */
    if ((joystickId - 1U < (uint)pSVar1->bounds->length) &&
       (lVar2 = pSVar1->bounds[1].length, (uint)analogId < (uint)lVar2)) {
                    /* catch() { ... } // from try @ 035407a8 with catch @ 035407d4 */
                    /* try { // try from 035407e4 to 036407eb has its CatchHandler @ 03540800 */
      return pSVar1->m_Items[lVar2 * (int)(joystickId - 1U) + (long)analogId];
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035407ec to 036407f7 has its CatchHandler @ 03540010 */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

