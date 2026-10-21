// MEJIKMPNBNL$$FDFHMHPOHKA @ RVA 0x32E8438

void MEJIKMPNBNL__FDFHMHPOHKA(MEJIKMPNBNL_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  Il2CppObject *pIVar5;
  int index;
  Il2CppClass *__this_01;
  int index_00;
  int iVar6;
  
  if ((DAT_04567622 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Count__);
                    /* try { // try from 033e8478 to 034e847b has its CatchHandler @ 033e849c */
                    /* try { // try from 033e847c to 034e847f has its CatchHandler @ 033e8498 */
                    /* try { // try from 033e8480 to 034e8483 has its CatchHandler @ 033e8494 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
                    /* try { // try from 033e8484 to 034e8487 has its CatchHandler @ 033e8490 */
                    /* try { // try from 033e8488 to 034e84b3 has its CatchHandler @ 033e822c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e8378 with catch @ 033e848c
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e8484 with catch @ 033e8490
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e8480 with catch @ 033e8494
                        */
    DAT_04567622 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e847c with catch @ 033e8498
                        */
  __this_00 = (__this->fields).BDCBJJGNPMC;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e8478 with catch @ 033e849c
                        */
  if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e835c with catch @ 033e84a0
                        */
    iVar1 = (__this_00->fields)._size;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e838c with catch @ 033e84a4
                        */
    if (iVar1 < 1) {
LAB_033e8564:
      (__this->fields).HHJIJKJCEOF = 3;
      return;
    }
                    /* try { // try from 033e84b4 to 034e84b7 has its CatchHandler @ 033e84dc */
                    /* try { // try from 033e84b8 to 034e84e3 has its CatchHandler @ 033e822c */
    index = 0;
    bVar3 = 0;
    iVar6 = 0;
    do {
      pIVar5 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
                    /* catch() { ... } // from try @ 033e84b4 with catch @ 033e84dc */
      if ((pIVar5 == (Il2CppObject *)0x0) ||
         (__this_01 = pIVar5[10].klass, __this_01 == (Il2CppClass *)0x0)) break;
      iVar2 = *(int *)&(__this_01->_1).namespaze;
                    /* try { // try from 033e84e4 to 034e84eb has its CatchHandler @ 033e8500 */
      iVar4 = iVar6;
      if (0 < iVar2) {
                    /* try { // try from 033e84ec to 034e84f7 has its CatchHandler @ 033e822c */
        index_00 = 0;
        do {
                    /* try { // try from 033e84f8 to 034e84ff has its CatchHandler @ 033e8500 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033e84e4 with catch @ 033e8500
                       catch(type#2 @ 00000000) { ... } // from try @ 033e84f8 with catch @ 033e8500
                        */
          pIVar5 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,index_00,
                              Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
          if (pIVar5 == (Il2CppObject *)0x0) goto LAB_033e8554;
          if (*(int *)((long)&pIVar5[6].klass + 4) - 1U < 2) {
            (__this->fields).HHJIJKJCEOF = 2;
            bVar3 = 1;
            iVar4 = iVar6 + index_00 + 1;
            break;
          }
          index_00 = index_00 + 1;
          iVar4 = iVar6 + iVar2;
        } while (iVar2 != index_00);
      }
      iVar6 = iVar4;
      index = index + 1;
      if (index == iVar1) {
        if ((iVar6 != 0) && (!(bool)(bVar3 ^ 1))) {
          return;
        }
        goto LAB_033e8564;
      }
      __this_00 = (__this->fields).BDCBJJGNPMC;
    } while (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0);
  }
LAB_033e8554:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

