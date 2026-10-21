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

