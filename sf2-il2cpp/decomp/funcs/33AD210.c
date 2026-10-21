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

