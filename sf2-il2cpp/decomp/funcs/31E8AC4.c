// MNLIBPAOCLG$$MIHIILOKCEN @ RVA 0x31E8AC4

void MNLIBPAOCLG__MIHIILOKCEN(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  int length;
  System_Collections_Generic_List_KBECBDOOHCO__o *__this_00;
  KBECBDOOHCO_o *__this_01;
  int index;
  
  if ((DAT_04566d83 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KBECBDOOHCO>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KBECBDOOHCO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KBECBDOOHCO>_get_Item__);
    DAT_04566d83 = 1;
  }
  __this_00 = (__this->fields).GHLEJFDLGHM;
  if (__this_00 != (System_Collections_Generic_List_KBECBDOOHCO__o *)0x0) {
    index = 0;
    do {
      length = (__this_00->fields)._size;
      if (length <= index) {
        (__this_00->fields)._size = 0;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (0 < length) {
          System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,
                              (MethodInfo *)0x0);
          return;
        }
        return;
      }
      __this_01 = (KBECBDOOHCO_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<KBECBDOOHCO>_get_Item__);
      if (__this_01 == (KBECBDOOHCO_o *)0x0) break;
      KBECBDOOHCO__OOFBMDPOOCB(__this_01,(MethodInfo *)0x0);
      __this_00 = (__this->fields).GHLEJFDLGHM;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_KBECBDOOHCO__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

