// PPJGIFEJMHP$$LGDEICDAEAF @ RVA 0x30AC1DC

void PPJGIFEJMHP__LGDEICDAEAF
               (PPJGIFEJMHP_o *__this,int64_t JNJCMIEHOHC,System_Action_o *KCPFFLHCCIN,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  MGNDHCBAPEN_long__Action__o *__this_00;
  MGNDHCBAPEN_long__Action__array *pMVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *__this_01;
  
  if ((DAT_045661aa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_Add__);
    FUN_01bab630(&Method_MGNDHCBAPEN<long,_Action>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<long,_Action>_TypeInfo);
    DAT_045661aa = 1;
  }
  __this_01 = (__this->fields).JGMOJNCMKAG;
  __this_00 = (MGNDHCBAPEN_long__Action__o *)thunk_FUN_01bda818(MGNDHCBAPEN<long,_Action>_TypeInfo);
  MGNDHCBAPEN<long,_object>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)__this_00,JNJCMIEHOHC,(Il2CppObject *)KCPFFLHCCIN,
             Method_MGNDHCBAPEN<long,_Action>__ctor__);
  lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_Add__;
  if (__this_01 != (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0) {
    pMVar3 = (__this_01->fields)._items;
                    /* try { // try from 031ac27c to 032ac29f has its CatchHandler @ 031ac574 */
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pMVar3 != (MGNDHCBAPEN_long__Action__array *)0x0) {
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pMVar3->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
                    /* try { // try from 031ac2a0 to 032ac2ab has its CatchHandler @ 031ac56c */
        pMVar3->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pMVar3->m_Items + (int)uVar1,__this_00);
        return;
      }
                    /* try { // try from 031ac2c8 to 032ac2cb has its CatchHandler @ 031ac540 */
                    /* try { // try from 031ac2cc to 032ac2db has its CatchHandler @ 031ac55c */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

