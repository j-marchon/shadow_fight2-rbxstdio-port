// KBFGKFAKGPP$$NDBCBDMBFON @ RVA 0x32EF198

void KBFGKFAKGPP__NDBCBDMBFON
               (KBFGKFAKGPP_o *__this,System_Collections_Generic_List_GLCAPECMBLM__o *EDEHNHIHDDH,
               MethodInfo *method)

{
  System_Action_T__o *action;
  
                    /* catch() { ... } // from try @ 033ef0ac with catch @ 033ef19c
                       catch() { ... } // from try @ 033ef18c with catch @ 033ef19c */
                    /* try { // try from 033ef1a0 to 034ef1a3 has its CatchHandler @ 033ef1ac */
                    /* try { // try from 033ef1a4 to 034ef1af has its CatchHandler @ 033ef014 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ef1a0 with catch @ 033ef1ac
                        */
                    /* try { // try from 033ef1b0 to 034efc5f has its CatchHandler @ 033ef1b0
                       catch() { ... } // from try @ 033ef1b0 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033efda8 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f0598 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f08b8 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f0f40 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f1a08 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f1e04 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f1e58 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f1e64 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f2058 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f2130 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f22b8 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f22ec with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f2328 with catch @ 033ef1b0
                       catch() { ... } // from try @ 033f23f0 with catch @ 033ef1b0 */
  if ((DAT_04567661 & 1) == 0) {
    FUN_01bab630(&System_Action<GLCAPECMBLM>_TypeInfo);
    FUN_01bab630(&Method_KBFGKFAKGPP_KEMEFBDNPCK__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_ForEach__);
    DAT_04567661 = 1;
  }
  action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<GLCAPECMBLM>_TypeInfo);
  System_Action<object>___ctor();
  if (EDEHNHIHDDH != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,action,
               Method_System_Collections_Generic_List<GLCAPECMBLM>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

