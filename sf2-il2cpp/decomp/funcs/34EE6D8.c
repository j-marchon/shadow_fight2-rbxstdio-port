// OLKKAIFGGAK$$IDIPCCIPCGC @ RVA 0x34EE6D8

void OLKKAIFGGAK__IDIPCCIPCGC(OLKKAIFGGAK_o *__this,OIGAJAKPPEO_o *OGPJCGONCLO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_OIGAJAKPPEO__o *__this_00;
  OIGAJAKPPEO_array *pOVar3;
  System_Action_OLKKAIFGGAK__o *pSVar4;
  
  if ((DAT_045687c5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_Add__);
    DAT_045687c5 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<OIGAJAKPPEO>_Add__;
  __this_00 = (__this->fields).MPLCPGJEHPG;
  if (__this_00 != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) {
    pOVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pOVar3 != (OIGAJAKPPEO_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pOVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pOVar3->m_Items[(int)uVar1] = OGPJCGONCLO;
        thunk_FUN_01c20e04(pOVar3->m_Items + (int)uVar1,OGPJCGONCLO);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)OGPJCGONCLO,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pSVar4 = (__this->fields).IODIJIPDIPI;
      if (pSVar4 != (System_Action_OLKKAIFGGAK__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035ee794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar4->fields).super.super.invoke_impl)
                  ((pSVar4->fields).super.super.method_code,OGPJCGONCLO,
                   (pSVar4->fields).super.super.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

