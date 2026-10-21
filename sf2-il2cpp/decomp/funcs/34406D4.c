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

