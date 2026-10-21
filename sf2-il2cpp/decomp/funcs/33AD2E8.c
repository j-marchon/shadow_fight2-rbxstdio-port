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

