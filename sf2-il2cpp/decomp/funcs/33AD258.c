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

