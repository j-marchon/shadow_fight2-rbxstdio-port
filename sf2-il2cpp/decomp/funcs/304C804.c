// EGMONPGHHDP$$AKPDKBCEFAA @ RVA 0x304C804

int32_t EGMONPGHHDP__AKPDKBCEFAA(EGMONPGHHDP_o *__this,int32_t MIJIHFHKOIE,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t BHFLMNBKDAA;
  JMDPBFOCHHP_CKEMIAEPGKD_o *__this_00;
  KEGDLHPEJBG_o *pKVar3;
  Il2CppObject *pIVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x4;
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *__this_01;
  int index;
  MethodInfo *pMVar5;
  
  pMVar5 = (MethodInfo *)(ulong)(uint)MIJIHFHKOIE;
  method_00 = pMVar5;
  if ((DAT_04565e10 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__);
    DAT_04565e10 = 1;
    method_00 = extraout_x1;
  }
  __this_00 = EGMONPGHHDP__OKBKFJKEAAG(__this,method_00);
  pKVar3 = EGMONPGHHDP__NJNOLNHFOPK((EGMONPGHHDP_o *)__this_00,method_01);
  if ((__this_00 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) || (pKVar3 == (KEGDLHPEJBG_o *)0x0)) {
                    /* try { // try from 0314c8ec to 0324c92f has its CatchHandler @ 0314c894 */
    return 0;
  }
  BHFLMNBKDAA = EGMONPGHHDP__CJINGJONNEI(__this,method_02);
  __this_01 = (__this_00->fields).GPNNHMIJLGL;
  if (__this_01 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) {
    do {
      iVar1 = (__this_01->fields)._size;
      index = (int)pMVar5;
      if (iVar1 <= index) {
                    /* try { // try from 0314c8e4 to 0324c8eb has its CatchHandler @ 0314c93c */
        return iVar1 + -1;
      }
                    /* try { // try from 0314c894 to 0324c8c7 has its CatchHandler @ 0314c894
                       catch() { ... } // from try @ 0314c894 with catch @ 0314c894
                       catch() { ... } // from try @ 0314c8ec with catch @ 0314c894
                       catch() { ... } // from try @ 0314c934 with catch @ 0314c894
                       catch() { ... } // from try @ 0314c980 with catch @ 0314c894
                       catch() { ... } // from try @ 0314c9bc with catch @ 0314c894
                       catch() { ... } // from try @ 0314ca18 with catch @ 0314c894 */
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,index,
                          Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                         );
      if (pIVar4 == (Il2CppObject *)0x0) break;
      if ((long)BHFLMNBKDAA < (long)(ulong)*(uint *)((long)&pIVar4[1].klass + 4)) {
        return index;
      }
      bVar2 = EGMONPGHHDP__LKMGFEDIOAC(__this,index,BHFLMNBKDAA,true,in_x4);
                    /* try { // try from 0314c8c8 to 0324c8d3 has its CatchHandler @ 0314c934 */
      if (bVar2) {
        return index;
      }
      __this_01 = (__this_00->fields).GPNNHMIJLGL;
      pMVar5 = (MethodInfo *)(ulong)(index + 1);
    } while (__this_01 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

