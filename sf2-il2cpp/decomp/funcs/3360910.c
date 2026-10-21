// MMDDDDFHOLG$$BGNPKMBPKDK @ RVA 0x3360910

void MMDDDDFHOLG__BGNPKMBPKDK
               (MMDDDDFHOLG_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *JGHPAFEFEFB,
               MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_00;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *pIVar4;
  Il2CppClass *__this_02;
  MMDDDDFHOLG_DOCBHLNBECF_o *item;
  MMDDDDFHOLG_DOCBHLNBECF_array *pMVar5;
  int index;
  int index_00;
  int index_01;
  
  if ((DAT_04567a82 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Item__);
    DAT_04567a82 = 1;
  }
  if (JGHPAFEFEFB != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
    length = (JGHPAFEFEFB->fields)._size;
    (JGHPAFEFEFB->fields)._size = 0;
    (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(JGHPAFEFEFB->fields)._items,0,length,(MethodInfo *)0x0)
      ;
    }
    __this_00 = (__this->fields).PNGAKAPODKB;
    if (__this_00 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
      index = 0;
      while( true ) {
        if ((__this_00->fields)._size <= index) {
          return;
        }
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Item__);
        if ((pIVar3 == (Il2CppObject *)0x0) ||
           (__this_01 = pIVar3[1].monitor,
           __this_01 == (System_Collections_Generic_List_object__o *)0x0)) break;
        index_00 = 0;
        while (index_00 < (__this_01->fields)._size) {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             (__this_01,index_00,
                              Method_System_Collections_Generic_List<IGJEEGBBNFC>_get_Item__);
          if ((pIVar4 == (Il2CppObject *)0x0) ||
             (__this_02 = pIVar4[2].klass, __this_02 == (Il2CppClass *)0x0)) goto LAB_03460b00;
          index_01 = 0;
          while (index_01 < *(int *)&(__this_02->_1).namespaze) {
            item = (MMDDDDFHOLG_DOCBHLNBECF_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_02,index_01,
                              Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Item__
                             );
            lVar2 = Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Add__;
            if (item == (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) goto LAB_03460b00;
            if ((item->fields).HEMGHNOOJPI == BCKBBGCOMJD) {
              pMVar5 = (JGHPAFEFEFB->fields)._items;
              (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
              if (pMVar5 == (MMDDDDFHOLG_DOCBHLNBECF_array *)0x0) goto LAB_03460b00;
              uVar1 = (JGHPAFEFEFB->fields)._size;
              if (uVar1 < (uint)pMVar5->max_length) {
                (JGHPAFEFEFB->fields)._size = uVar1 + 1;
                pMVar5->m_Items[(int)uVar1] = item;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
                           (Il2CppObject *)item,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
            __this_02 = pIVar4[2].klass;
            index_01 = index_01 + 1;
            if (__this_02 == (Il2CppClass *)0x0) goto LAB_03460b00;
          }
          __this_01 = pIVar3[1].monitor;
          index_00 = index_00 + 1;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03460b00;
        }
        __this_00 = (__this->fields).PNGAKAPODKB;
        index = index + 1;
        if (__this_00 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) break;
      }
    }
  }
LAB_03460b00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

