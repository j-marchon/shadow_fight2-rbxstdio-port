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

