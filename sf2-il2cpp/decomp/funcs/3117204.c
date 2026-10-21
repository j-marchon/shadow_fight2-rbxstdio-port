// NGJHCIGFLFD$$NIDKNDMBJNB @ RVA 0x3117204

void NGJHCIGFLFD__NIDKNDMBJNB(NGJHCIGFLFD_o *__this,OANBNKOOJFH_o *MLNEFBDGKEK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_OANBNKOOJFH__o *__this_00;
  OANBNKOOJFH_array *pOVar3;
  
  if ((DAT_045665c0 & 1) == 0) {
                    /* try { // try from 03217228 to 0331722f has its CatchHandler @ 0321742c */
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>_Add__);
    DAT_045665c0 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<OANBNKOOJFH>_Add__;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_OANBNKOOJFH__o *)0x0) {
                    /* try { // try from 0321723c to 03317247 has its CatchHandler @ 03217428 */
    pOVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pOVar3 != (OANBNKOOJFH_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pOVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pOVar3->m_Items[(int)uVar1] = MLNEFBDGKEK;
                    /* try { // try from 03217288 to 03317297 has its CatchHandler @ 03217430 */
        thunk_FUN_01c20e04(pOVar3->m_Items + (int)uVar1,MLNEFBDGKEK);
        return;
      }
                    /* try { // try from 03217298 to 033172a3 has its CatchHandler @ 03217420 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)MLNEFBDGKEK,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

