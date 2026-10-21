// CNIGOFCKBGI$$AOJKGAKBCFK @ RVA 0x31B56DC

bool CNIGOFCKBGI__AOJKGAKBCFK(CNIGOFCKBGI_o *__this,int32_t ELCBIMMGAFJ,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_OHFNEFFMKIA__o *__this_00;
  
                    /* try { // try from 032b56f0 to 033b56f7 has its CatchHandler @ 032b57a4 */
  if ((DAT_04566bb1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<OHFNEFFMKIA>_Contains__);
    DAT_04566bb1 = 1;
  }
                    /* try { // try from 032b570c to 033b570f has its CatchHandler @ 032b5794 */
  __this_00 = (__this->fields).ANPLGGBAANL;
                    /* try { // try from 032b5710 to 033b571f has its CatchHandler @ 032b57a0 */
  if (__this_00 != (System_Collections_Generic_HashSet_OHFNEFFMKIA__o *)0x0) {
                    /* try { // try from 032b5728 to 033b5733 has its CatchHandler @ 032b579c */
    bVar1 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                      ((System_Collections_Generic_HashSet_T__o *)__this_00,ELCBIMMGAFJ,
                       Method_System_Collections_Generic_HashSet<OHFNEFFMKIA>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

