// LCKCDEKNLOA$$IEFEBMICIHN @ RVA 0x31D82A0

void LCKCDEKNLOA__IEFEBMICIHN(LCKCDEKNLOA_o *__this,BOFEMGGNODC_o *CPECAEHDDDB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_BOFEMGGNODC__o *__this_00;
  BOFEMGGNODC_array *pBVar3;
  
  if ((DAT_04566cf8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BOFEMGGNODC>_Add__);
    DAT_04566cf8 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<BOFEMGGNODC>_Add__;
  __this_00 = (__this->fields).NEIJJHEFLHP;
  if (__this_00 != (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) {
    pBVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pBVar3 != (BOFEMGGNODC_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pBVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pBVar3->m_Items[(int)uVar1] = CPECAEHDDDB;
        thunk_FUN_01c20e04(pBVar3->m_Items + (int)uVar1,CPECAEHDDDB);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)CPECAEHDDDB,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

