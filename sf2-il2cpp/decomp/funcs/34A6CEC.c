// SFButton$$RemoveAllEventListener @ RVA 0x34A6CEC

int32_t SFButton__RemoveAllEventListener(SFButton_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OMLLDCIMLBB_object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685cf & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_RemoveAllEventListener__);
                    /* catch() { ... } // from try @ 035a6ce4 with catch @ 035a6d10 */
    DAT_045685cf = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).CDMKOMBJFLG;
  if (__this_00 != (OMLLDCIMLBB_object__o *)0x0) {
                    /* try { // try from 035a6d20 to 036a6d27 has its CatchHandler @ 035a6d3c */
                    /* try { // try from 035a6d28 to 036a6d33 has its CatchHandler @ 035a6884 */
                    /* try { // try from 035a6d34 to 036a6d3b has its CatchHandler @ 035a6d3c */
    iVar1 = OMLLDCIMLBB<object>__RemoveAllEventListener
                      (__this_00,Method_OMLLDCIMLBB<object>_RemoveAllEventListener__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

