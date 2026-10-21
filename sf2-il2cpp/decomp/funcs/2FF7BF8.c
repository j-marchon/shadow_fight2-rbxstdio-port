// JMDPBFOCHHP.NOPCEDPNNKO$$FPPDGOEOJCH @ RVA 0x2FF7BF8

JMDPBFOCHHP_HJLEKMDIDPO_o *
JMDPBFOCHHP_NOPCEDPNNKO__FPPDGOEOJCH
          (JMDPBFOCHHP_NOPCEDPNNKO_o *__this,System_String_o *DIIDFLPOBMC,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar1;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *source;
  
  if ((DAT_04565ad1 & 1) == 0) {
                    /* try { // try from 030f7c28 to 031f7c37 has its CatchHandler @ 030f7da8 */
    FUN_01bab630(&Method_JMDPBFOCHHP_NOPCEDPNNKO_CMEEPMLCPGE_LFEKAGIBGFK__);
    FUN_01bab630(&JMDPBFOCHHP_NOPCEDPNNKO_CMEEPMLCPGE_TypeInfo);
                    /* try { // try from 030f7c3c to 031f7c73 has its CatchHandler @ 030f7da4 */
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<JMDPBFOCHHP_HJLEKMDIDPO>__);
    FUN_01bab630(&System_Func<JMDPBFOCHHP_HJLEKMDIDPO,_bool>_TypeInfo);
    DAT_04565ad1 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(JMDPBFOCHHP_NOPCEDPNNKO_CMEEPMLCPGE_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
                    /* try { // try from 030f7c84 to 031f7ca7 has its CatchHandler @ 030f7ddc */
    __this_00[1].klass = (Il2CppClass *)DIIDFLPOBMC;
    thunk_FUN_01c20e04(__this_00 + 1,DIIDFLPOBMC);
    source = (__this->fields).GADHINPJDAF;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<JMDPBFOCHHP_HJLEKMDIDPO,_bool>_TypeInfo);
                    /* try { // try from 030f7cb8 to 031f7cbb has its CatchHandler @ 030f7dc8 */
    System_Func<object,_bool>___ctor();
                    /* try { // try from 030f7cc4 to 031f7ccb has its CatchHandler @ 030f7ddc */
                    /* try { // try from 030f7ccc to 031f7ce3 has its CatchHandler @ 030f7db8 */
    pJVar1 = (JMDPBFOCHHP_HJLEKMDIDPO_o *)
             System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                        Method_System_Linq_Enumerable_FirstOrDefault<JMDPBFOCHHP_HJLEKMDIDPO>__);
    return pJVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

