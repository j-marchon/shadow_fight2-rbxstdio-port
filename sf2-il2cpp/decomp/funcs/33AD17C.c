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

