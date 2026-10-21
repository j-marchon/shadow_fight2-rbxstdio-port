// IKBGLDJFIJH$$DPPHJFGLGGK @ RVA 0x32933A8

void IKBGLDJFIJH__DPPHJFGLGGK(IKBGLDJFIJH_o *__this,System_Action_o *CPECAEHDDDB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_Action__o *pSVar4;
  System_Action_array *pSVar5;
  
                    /* try { // try from 033933a8 to 034933b3 has its CatchHandler @ 03393534 */
  if ((DAT_04567343 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Action>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Action>_Contains__);
    FUN_01bab630(&StringLiteral_11162);
    DAT_04567343 = 1;
  }
  pSVar4 = (__this->fields).LBCPFBBIBCL;
                    /* try { // try from 033933f4 to 03493403 has its CatchHandler @ 0339353c */
  if (pSVar4 != (System_Collections_Generic_List_Action__o *)0x0) {
                    /* try { // try from 03393408 to 03493413 has its CatchHandler @ 03393530 */
    bVar3 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)pSVar4,
                       (Il2CppObject *)CPECAEHDDDB,
                       Method_System_Collections_Generic_List<Action>_Contains__);
    lVar2 = Method_System_Collections_Generic_List<Action>_Add__;
    if (bVar3) {
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_11162,(MethodInfo *)0x0);
      return;
    }
    pSVar4 = (__this->fields).LBCPFBBIBCL;
    if (pSVar4 != (System_Collections_Generic_List_Action__o *)0x0) {
      pSVar5 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pSVar5 != (System_Action_array *)0x0) {
        uVar1 = (pSVar4->fields)._size;
                    /* try { // try from 0339345c to 03493473 has its CatchHandler @ 0339353c */
        if (uVar1 < (uint)pSVar5->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = CPECAEHDDDB;
                    /* try { // try from 03393478 to 03493497 has its CatchHandler @ 03393528 */
          thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,CPECAEHDDDB);
          return;
        }
                    /* try { // try from 0339349c to 034934bb has its CatchHandler @ 0339352c */
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)CPECAEHDDDB,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

