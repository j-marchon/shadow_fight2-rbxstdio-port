// MMDDDDFHOLG$$JBADLLJFFCD @ RVA 0x33621D8

void MMDDDDFHOLG__JBADLLJFFCD
               (MMDDDDFHOLG_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *DMJCBDGIGBH,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_00;
  MMDDDDFHOLG_DOCBHLNBECF_array *pMVar3;
  
  if ((DAT_04567a8b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Add__);
    DAT_04567a8b = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Add__;
  __this_00 = (__this->fields).JOKDIFAIOKL;
  if (__this_00 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
    pMVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pMVar3 != (MMDDDDFHOLG_DOCBHLNBECF_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pMVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pMVar3->m_Items[(int)uVar1] = DMJCBDGIGBH;
        thunk_FUN_01c20e04(pMVar3->m_Items + (int)uVar1,DMJCBDGIGBH);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)DMJCBDGIGBH,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

