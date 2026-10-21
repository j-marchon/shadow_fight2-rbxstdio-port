// FJNIPMODEPO$$DHAAGKPHJLA @ RVA 0x30354B8

void FJNIPMODEPO__DHAAGKPHJLA(FJNIPMODEPO_o *__this,System_String_o *IHNKCJHDDKD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar3;
  
                    /* try { // try from 031354c0 to 032354c7 has its CatchHandler @ 031354dc */
                    /* try { // try from 031354c8 to 032354d3 has its CatchHandler @ 031351bc */
  if ((DAT_04565d37 & 1) == 0) {
                    /* try { // try from 031354d4 to 032354db has its CatchHandler @ 031354dc */
                    /* catch() { ... } // from try @ 031354c0 with catch @ 031354dc
                       catch() { ... } // from try @ 031354d4 with catch @ 031354dc */
    FUN_01bab630(&FJNIPMODEPO_AIMMBNHMBFL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    DAT_04565d37 = 1;
  }
  if ((__this->fields).ECCPBJGMNPE != false) {
    Firebase_Crashlytics_Crashlytics__Log(IHNKCJHDDKD,(MethodInfo *)0x0);
    return;
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  __this_00 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->GBNPHBNELMF;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = IHNKCJHDDKD;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,IHNKCJHDDKD);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)IHNKCJHDDKD,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

