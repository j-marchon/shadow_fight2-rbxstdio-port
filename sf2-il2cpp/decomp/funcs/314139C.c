// IPPEHAJADOO$$IHCJOCNLHCB @ RVA 0x314139C

void IPPEHAJADOO__IHCJOCNLHCB
               (IPPEHAJADOO_o *__this,IPPEHAJADOO_JEOCIECEGHH_o *DKMMBMBMJBO,
               System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *PDFFKDLECND,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  int iVar4;
  Il2CppObject *pIVar5;
  ECENNHNBAME_o *pEVar6;
  IPPEHAJADOO_JEOCIECEGHH_array *pIVar7;
  
  if ((DAT_04566756 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__);
    DAT_04566756 = 1;
  }
  if (((DKMMBMBMJBO != (IPPEHAJADOO_JEOCIECEGHH_o *)0x0) &&
      (pEVar6 = (DKMMBMBMJBO->fields).BNGDONJEHMH, pEVar6 != (ECENNHNBAME_o *)0x0)) &&
     (iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pEVar6->fields).EAFPDFHFBOM.fields,(MethodInfo *)0x0),
     PDFFKDLECND != (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0)) {
    if ((PDFFKDLECND->fields)._size < 1) {
      iVar4 = 0;
    }
    else {
      pIVar5 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)PDFFKDLECND,0,
                          Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__
                         );
                    /* try { // try from 03241440 to 03341447 has its CatchHandler @ 032415f0 */
      if ((pIVar5 == (Il2CppObject *)0x0) || (pIVar5[1].klass == (Il2CppClass *)0x0))
      goto LAB_03241508;
      iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                          ((long)&((pIVar5[1].klass)->_1).this_arg.data + 4),(MethodInfo *)0x0);
    }
    if (iVar3 < iVar4) {
      return;
    }
    if (iVar4 < iVar3) {
      iVar3 = (PDFFKDLECND->fields)._size;
      (PDFFKDLECND->fields)._size = 0;
      (PDFFKDLECND->fields)._version = (PDFFKDLECND->fields)._version + 1;
      if (0 < iVar3) {
        System_Array__Clear((System_Array_o *)(PDFFKDLECND->fields)._items,0,iVar3,(MethodInfo *)0x0
                           );
      }
    }
    lVar2 = Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__;
                    /* try { // try from 0324149c to 033414a7 has its CatchHandler @ 032415e8 */
    pIVar7 = (PDFFKDLECND->fields)._items;
    (PDFFKDLECND->fields)._version = (PDFFKDLECND->fields)._version + 1;
                    /* try { // try from 032414b4 to 033414bb has its CatchHandler @ 032415e4 */
    if (pIVar7 != (IPPEHAJADOO_JEOCIECEGHH_array *)0x0) {
      uVar1 = (PDFFKDLECND->fields)._size;
      if (uVar1 < (uint)pIVar7->max_length) {
                    /* try { // try from 032414cc to 033414cf has its CatchHandler @ 032415d0 */
                    /* try { // try from 032414d0 to 033414db has its CatchHandler @ 032415e0 */
        (PDFFKDLECND->fields)._size = uVar1 + 1;
        pIVar7->m_Items[(int)uVar1] = DKMMBMBMJBO;
                    /* try { // try from 032414e0 to 033414eb has its CatchHandler @ 032415d8 */
        thunk_FUN_01c20e04(pIVar7->m_Items + (int)uVar1,DKMMBMBMJBO);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)PDFFKDLECND,
                 (Il2CppObject *)DKMMBMBMJBO,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
LAB_03241508:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

