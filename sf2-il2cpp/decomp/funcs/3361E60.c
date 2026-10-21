// MMDDDDFHOLG$$BDHAMOEKNNK @ RVA 0x3361E60

void MMDDDDFHOLG__BDHAMOEKNNK(MMDDDDFHOLG_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_00;
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_object__o *__this_01;
  IGJEEGBBNFC_o *__this_02;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *pSVar2;
  int index;
  int index_00;
  
  if ((DAT_04567a89 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Item__);
    DAT_04567a89 = 1;
  }
  pSVar2 = (__this->fields).JOKDIFAIOKL;
  if (pSVar2 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).PNGAKAPODKB;
    if (__this_00 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
      index = 0;
      while( true ) {
        if ((__this_00->fields)._size <= index) {
          return;
        }
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Item__);
        if ((pIVar1 == (Il2CppObject *)0x0) ||
           (__this_01 = pIVar1[1].monitor,
           __this_01 == (System_Collections_Generic_List_object__o *)0x0)) break;
        index_00 = 0;
        while (index_00 < (__this_01->fields)._size) {
          __this_02 = (IGJEEGBBNFC_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (__this_01,index_00,
                                 Method_System_Collections_Generic_List<IGJEEGBBNFC>_get_Item__);
          if (__this_02 == (IGJEEGBBNFC_o *)0x0) goto LAB_03461f78;
          IGJEEGBBNFC__BDHAMOEKNNK(__this_02,(MethodInfo *)0x0);
          __this_01 = pIVar1[1].monitor;
          index_00 = index_00 + 1;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03461f78;
        }
        __this_00 = (__this->fields).PNGAKAPODKB;
        index = index + 1;
        if (__this_00 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) break;
      }
    }
  }
LAB_03461f78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

