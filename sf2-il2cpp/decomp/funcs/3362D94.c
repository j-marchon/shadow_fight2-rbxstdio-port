// MMDDDDFHOLG$$OECDKCNPMPP @ RVA 0x3362D94

void MMDDDDFHOLG__OECDKCNPMPP
               (MMDDDDFHOLG_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *JGHPAFEFEFB,
               MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_00;
  MMDDDDFHOLG_DOCBHLNBECF_o *item;
  MMDDDDFHOLG_DOCBHLNBECF_array *pMVar3;
  int index;
  
  if ((DAT_04567a94 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Item__);
    DAT_04567a94 = 1;
  }
  if (JGHPAFEFEFB != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
    length = (JGHPAFEFEFB->fields)._size;
    (JGHPAFEFEFB->fields)._size = 0;
    (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(JGHPAFEFEFB->fields)._items,0,length,(MethodInfo *)0x0)
      ;
    }
    __this_00 = (__this->fields).JOKDIFAIOKL;
    if (__this_00 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
      index = 0;
      do {
        if ((__this_00->fields)._size <= index) {
          return;
        }
        item = (MMDDDDFHOLG_DOCBHLNBECF_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Item__
                         );
        lVar2 = Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Add__;
        if (item == (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) break;
        if ((item->fields).HEMGHNOOJPI == BCKBBGCOMJD) {
          pMVar3 = (JGHPAFEFEFB->fields)._items;
          (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
          if (pMVar3 == (MMDDDDFHOLG_DOCBHLNBECF_array *)0x0) break;
          uVar1 = (JGHPAFEFEFB->fields)._size;
          if (uVar1 < (uint)pMVar3->max_length) {
            (JGHPAFEFEFB->fields)._size = uVar1 + 1;
            pMVar3->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,(Il2CppObject *)item
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        __this_00 = (__this->fields).JOKDIFAIOKL;
        index = index + 1;
      } while (__this_00 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

