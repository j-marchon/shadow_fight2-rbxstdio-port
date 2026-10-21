// KJNCNBJIJPC$$Clone @ RVA 0x331AEF4

KJNCNBJIJPC_o * KJNCNBJIJPC__Clone(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  KJNCNBJIJPC_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 0341aef4 to 0351aefb has its CatchHandler @ 0341af10 */
                    /* try { // try from 0341aefc to 0351af07 has its CatchHandler @ 0341ad20 */
                    /* try { // try from 0341af08 to 0351af0f has its CatchHandler @ 0341af10 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0341aef4 with catch @ 0341af10
                       catch(type#2 @ 00000000) { ... } // from try @ 0341af08 with catch @ 0341af10
                        */
  if ((DAT_0456780d & 1) == 0) {
                    /* try { // try from 0341af14 to 0351b02b has its CatchHandler @ 0341af14
                       catch() { ... } // from try @ 0341af14 with catch @ 0341af14
                       catch() { ... } // from try @ 0341b0bc with catch @ 0341af14
                       catch() { ... } // from try @ 0341b190 with catch @ 0341af14
                       catch() { ... } // from try @ 0341b23c with catch @ 0341af14 */
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    DAT_0456780d = 1;
    method = extraout_x1;
  }
  __this_00 = (KJNCNBJIJPC_o *)thunk_FUN_01bda818(KJNCNBJIJPC_TypeInfo,method);
  KJNCNBJIJPC___ctor(__this_00,__this,in_x2);
  return __this_00;
}

