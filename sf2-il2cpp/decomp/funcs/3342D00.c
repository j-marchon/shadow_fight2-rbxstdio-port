// AFFHKININGD$$EDLEFNEENJC @ RVA 0x3342D00

void AFFHKININGD__EDLEFNEENJC(AFFHKININGD_o *__this,JBCGDIEHOHH_o *NNMBHKHJNGF,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_JBCGDIEHOHH__o *__this_00;
  JBCGDIEHOHH_array *pJVar3;
  
  if ((DAT_0456799d & 1) == 0) {
                    /* try { // try from 03442d24 to 03542d57 has its CatchHandler @ 03442e14 */
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_Add__);
    DAT_0456799d = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<JBCGDIEHOHH>_Add__;
  __this_00 = (__this->fields).FGAENDJJOGN;
  if (__this_00 != (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) {
    pJVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pJVar3 != (JBCGDIEHOHH_array *)0x0) {
                    /* catch() { ... } // from try @ 0344249c with catch @ 03442d58
                       try { // try from 03442d58 to 03542d7f has its CatchHandler @ 03441efc */
      uVar1 = (__this_00->fields)._size;
                    /* catch() { ... } // from try @ 03442440 with catch @ 03442d5c */
      if (uVar1 < (uint)pJVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pJVar3->m_Items[(int)uVar1] = NNMBHKHJNGF;
                    /* try { // try from 03442d80 to 03542d83 has its CatchHandler @ 03442d98 */
        thunk_FUN_01c20e04(pJVar3->m_Items + (int)uVar1,NNMBHKHJNGF);
        return;
      }
                    /* catch() { ... } // from try @ 03442d80 with catch @ 03442d98 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)NNMBHKHJNGF,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

