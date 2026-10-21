// TypeDefIndex 2609
// Namespace: InControl
// public struct InputControlState
// Fields:
//   public bool State; // 0x0
//   public float Value; // 0x4

// ===== public void Reset()  [RVA 0x33AD170]
// InControl.InputControlState$$Reset @ RVA 0x33AD170

void InControl_InputControlState__Reset(InControl_InputControlState_o __this,MethodInfo *method)

{
                    /* try { // try from 034ad170 to 035ad177 has its CatchHandler @ 034ad6dc */
  *(undefined4 *)((long)__this.fields + 4) = 0;
  *(undefined1 *)__this.fields = 0;
  return;
}


// ===== public void Set(float value)  [RVA 0x33AD17C]
// InControl.InputControlState$$Set @ RVA 0x33AD17C

void InControl_InputControlState__Set
               (InControl_InputControlState_o __this,float value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 034ad188 to 035ad18f has its CatchHandler @ 034ad718 */
  *(float *)((long)__this.fields + 4) = value;
                    /* try { // try from 034ad190 to 035ad19b has its CatchHandler @ 034ad728 */
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
                    /* try { // try from 034ad1b0 to 035ad1b7 has its CatchHandler @ 034ad6e0 */
    DAT_045602fa = '\x01';
  }
  fVar2 = ABS(value);
                    /* try { // try from 034ad1c8 to 035ad1cf has its CatchHandler @ 034ad6e4 */
                    /* try { // try from 034ad1d0 to 035ad1db has its CatchHandler @ 034ad71c */
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
                    /* try { // try from 034ad1dc to 035ad1f3 has its CatchHandler @ 034ad734 */
  fVar3 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar1 = fVar2 * 1e-06;
  if (fVar2 * 1e-06 <= fVar3) {
    fVar1 = fVar3;
  }
                    /* try { // try from 034ad200 to 035ad207 has its CatchHandler @ 034ad710 */
  *(bool *)__this.fields = fVar1 <= ABS(0.0 - value);
  return;
}


// ===== public void Set(float value, float threshold)  [RVA 0x33AD210]
// InControl.InputControlState$$Set @ RVA 0x33AD210

void InControl_InputControlState__Set
               (InControl_InputControlState_o __this,float value,float threshold,MethodInfo *method)

{
                    /* try { // try from 034ad210 to 035ad217 has its CatchHandler @ 034ad724 */
  *(float *)((long)__this.fields + 4) = value;
                    /* try { // try from 034ad218 to 035ad223 has its CatchHandler @ 034ad720 */
  *(bool *)__this.fields = threshold < ABS(value);
                    /* try { // try from 034ad224 to 035ad23b has its CatchHandler @ 034ad740 */
  return;
}


// ===== public void Set(bool state)  [RVA 0x33AD228]
// InControl.InputControlState$$Set @ RVA 0x33AD228

void InControl_InputControlState__Set
               (InControl_InputControlState_o __this,bool state,MethodInfo *method)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if (!state) {
    uVar1 = 0;
  }
  *(bool *)__this.fields = state;
  *(undefined4 *)((long)__this.fields + 4) = uVar1;
  return;
}


// ===== public static bool op_Implicit(InputControlState state)  [RVA 0x33AD244]
// InControl.InputControlState$$op_Implicit @ RVA 0x33AD244

bool InControl_InputControlState__op_Implicit
               (InControl_InputControlState_o state,MethodInfo *method)

{
                    /* try { // try from 034ad248 to 035ad24f has its CatchHandler @ 034ad6e8 */
  return (bool)(state.fields.State & 1);
}


// ===== public static float op_Implicit(InputControlState state)  [RVA 0x33AD24C]
// InControl.InputControlState$$op_Implicit @ RVA 0x33AD24C

float InControl_InputControlState__op_Implicit
                (InControl_InputControlState_o state,MethodInfo *method)

{
  return state.fields.Value;
}


// ===== public static bool op_Equality(InputControlState a, InputControlState b)  [RVA 0x33AD258]
// InControl.InputControlState$$op_Equality @ RVA 0x33AD258

bool InControl_InputControlState__op_Equality
               (InControl_InputControlState_o a,InControl_InputControlState_o b,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 034ad258 to 035ad25f has its CatchHandler @ 034ad714 */
                    /* try { // try from 034ad260 to 035ad26b has its CatchHandler @ 034ad6ec */
                    /* try { // try from 034ad26c to 035ad283 has its CatchHandler @ 034ad738 */
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_045602fa = '\x01';
  }
                    /* try { // try from 034ad290 to 035ad297 has its CatchHandler @ 034ad6f0 */
                    /* try { // try from 034ad2a0 to 035ad2a7 has its CatchHandler @ 034ad6c4 */
  fVar1 = ABS(a.fields.Value);
                    /* try { // try from 034ad2a8 to 035ad2b3 has its CatchHandler @ 034ad6c8 */
  fVar3 = ABS(b.fields.Value);
  if (fVar1 <= fVar3) {
    fVar1 = fVar3;
  }
                    /* try { // try from 034ad2b4 to 035ad2cb has its CatchHandler @ 034ad73c */
  fVar2 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar3 = fVar1 * 1e-06;
  if (fVar1 * 1e-06 <= fVar2) {
    fVar3 = fVar2;
  }
                    /* try { // try from 034ad2d8 to 035ad2df has its CatchHandler @ 034ad6cc */
  return ABS(b.fields.Value - a.fields.Value) < fVar3;
}


// ===== public static bool op_Inequality(InputControlState a, InputControlState b)  [RVA 0x33AD2E8]
// InControl.InputControlState$$op_Inequality @ RVA 0x33AD2E8

bool InControl_InputControlState__op_Inequality
               (InControl_InputControlState_o a,InControl_InputControlState_o b,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 034ad2e8 to 035ad2ef has its CatchHandler @ 034ad6d8 */
                    /* try { // try from 034ad2f0 to 035ad2fb has its CatchHandler @ 034ad6bc */
                    /* try { // try from 034ad304 to 035ad313 has its CatchHandler @ 034ad6d0 */
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_045602fa = '\x01';
  }
                    /* try { // try from 034ad32c to 035ad333 has its CatchHandler @ 034ad6d4 */
  fVar1 = ABS(a.fields.Value);
                    /* try { // try from 034ad334 to 035ad447 has its CatchHandler @ 034acd70 */
  fVar3 = ABS(b.fields.Value);
  if (fVar1 <= fVar3) {
    fVar1 = fVar3;
  }
  fVar2 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar3 = fVar1 * 1e-06;
  if (fVar1 * 1e-06 <= fVar2) {
    fVar3 = fVar2;
  }
  return fVar3 <= ABS(b.fields.Value - a.fields.Value);
}

