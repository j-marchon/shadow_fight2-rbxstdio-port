// BGFNOPDHEOM$$BGDJFKHKHDK @ RVA 0x32AB35C

NLIDHEAMLMC_o * BGFNOPDHEOM__BGDJFKHKHDK(int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  NLIDHEAMLMC_o *pNVar3;
  System_Collections_Generic_List_NLIDHEAMLMC__o *pSVar4;
  int index;
  
                    /* try { // try from 033ab380 to 034ab383 has its CatchHandler @ 033ab388 */
                    /* try { // try from 033ab384 to 034ab3a3 has its CatchHandler @ 033ab278 */
  if ((DAT_04567436 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ab380 with catch @ 033ab388
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ab32c with catch @ 033ab38c
                        */
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Count__);
                    /* try { // try from 033ab3a4 to 034ab3a7 has its CatchHandler @ 033ab3d0 */
                    /* try { // try from 033ab3a8 to 034ab3df has its CatchHandler @ 033ab278 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Item__);
    DAT_04567436 = 1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
                    /* catch() { ... } // from try @ 033ab3a4 with catch @ 033ab3d0 */
  if (pSVar4 == (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) {
LAB_033ab4c8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (pSVar4->fields)._size;
  if (0 < iVar1) {
                    /* try { // try from 033ab3e0 to 034ab3e7 has its CatchHandler @ 033ab3fc */
                    /* try { // try from 033ab3e8 to 034ab3f3 has its CatchHandler @ 033ab278 */
    index = 0;
    while( true ) {
      if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033ab3f4 to 034ab3fb has its CatchHandler @ 033ab3fc */
        thunk_FUN_01ba7564();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ab3e0 with catch @ 033ab3fc
                       catch(type#2 @ 00000000) { ... } // from try @ 033ab3f4 with catch @ 033ab3fc
                        */
      pSVar4 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
      if ((pSVar4 == (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) ||
         (pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar4,index,
                              Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Item__),
         pIVar2 == (Il2CppObject *)0x0)) goto LAB_033ab4c8;
      if (*(int *)((long)&pIVar2[1].klass + 4) == NAIJBCMHBFK) {
        if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
        if ((pSVar4 == (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) ||
           (pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,index,
                                Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Item__),
           pIVar2 == (Il2CppObject *)0x0)) goto LAB_033ab4c8;
        if (*(int *)&pIVar2[1].monitor == OPHMGAKOJLP) {
          if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar4 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
          if (pSVar4 != (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) {
            pNVar3 = (NLIDHEAMLMC_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,index,
                                Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Item__);
            return pNVar3;
          }
          goto LAB_033ab4c8;
        }
      }
      if (iVar1 + -1 == index) break;
      index = index + 1;
    }
  }
  return (NLIDHEAMLMC_o *)0x0;
}

