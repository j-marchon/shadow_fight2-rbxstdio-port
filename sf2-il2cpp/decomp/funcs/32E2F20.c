// DOPEEDABNEK$$JMPINBGBLNI @ RVA 0x32E2F20

int32_t DOPEEDABNEK__JMPINBGBLNI(DOPEEDABNEK_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  
  if ((DAT_045675f6 & 1) == 0) {
                    /* try { // try from 033e2f40 to 034e2fcb has its CatchHandler @ 033e2da8 */
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
    FUN_01bab630(&Method_DOPEEDABNEK_ODAALEKFPNA_MDKIINLPCOG__);
    FUN_01bab630(&DOPEEDABNEK_ODAALEKFPNA_TypeInfo);
    DAT_045675f6 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(DOPEEDABNEK_ODAALEKFPNA_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(undefined4 *)&__this_00[1].klass = 0;
    __this_01 = (__this->fields).DIGBEFKAPHM;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<HOOAAGABMBL>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* try { // try from 033e2fcc to 034e2fcf has its CatchHandler @ 033e30b0 */
                    /* try { // try from 033e2fd0 to 034e2fd7 has its CatchHandler @ 033e2da8 */
                    /* try { // try from 033e2fd8 to 034e2fdb has its CatchHandler @ 033e2ff0 */
                    /* try { // try from 033e2fdc to 034e2fdf has its CatchHandler @ 033e2ff4 */
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_01,action,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
                    /* try { // try from 033e2fe0 to 034e2fe7 has its CatchHandler @ 033e30b4 */
                    /* catch() { ... } // from try @ 033e2ed0 with catch @ 033e2fe8
                       try { // try from 033e2fe8 to 034e3013 has its CatchHandler @ 033e2da8 */
                    /* catch() { ... } // from try @ 033e2ebc with catch @ 033e2fec */
      return *(int32_t *)&__this_00[1].klass;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033e2fd8 with catch @ 033e2ff0 */
  FUN_01bab8c8();
}

