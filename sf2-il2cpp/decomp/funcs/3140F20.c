// IPPEHAJADOO$$IODIJIPDIPI @ RVA 0x3140F20

void IPPEHAJADOO__IODIJIPDIPI(IPPEHAJADOO_o *__this,OLKKAIFGGAK_o *INNMCFJNEAE,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  MethodInfo *in_x4;
  OLKKAIFGGAK_array *pOVar3;
  
  if ((DAT_04566753 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__);
    DAT_04566753 = 1;
  }
  IPPEHAJADOO__OCJCMHLABBF(__this,INNMCFJNEAE,method);
  lVar2 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__;
  __this_00 = (__this->fields).DNCDKLGJGBN;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    pOVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pOVar3 != (OLKKAIFGGAK_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pOVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pOVar3->m_Items[(int)uVar1] = INNMCFJNEAE;
        thunk_FUN_01c20e04(pOVar3->m_Items + (int)uVar1,INNMCFJNEAE);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)INNMCFJNEAE,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      if (INNMCFJNEAE != (OLKKAIFGGAK_o *)0x0) {
        IPPEHAJADOO__BKBHKFCCKDO(__this,0xf,(INNMCFJNEAE->fields).PDCHNCOIHHA,false,in_x4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

