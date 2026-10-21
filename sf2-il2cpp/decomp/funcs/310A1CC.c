// OPNFCOGALLI$$NOEAJHFHOAJ @ RVA 0x310A1CC

void OPNFCOGALLI__NOEAJHFHOAJ(OPNFCOGALLI_o *__this,CNDPAJOLKFN_o *EMLHFAIPGGA,MethodInfo *method)

{
  System_Collections_Generic_List_List_CNDPAJOLKFN___o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  CNDPAJOLKFN_o *__this_02;
  int index;
  int index_00;
  
  if ((DAT_04566528 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Item__);
    DAT_04566528 = 1;
  }
  __this_00 = (__this->fields).IFHALHIGBNM;
  if (__this_00 != (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      __this_01 = (System_Collections_Generic_List_object__o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Item__);
      if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
      if (0 < (__this_01->fields)._size) {
        index_00 = 0;
        do {
          __this_02 = (CNDPAJOLKFN_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (__this_01,index_00,
                                 Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
          if (__this_02 == (CNDPAJOLKFN_o *)0x0) goto LAB_0320a2b0;
          CNDPAJOLKFN__LFENGGKOJDO(__this_02,EMLHFAIPGGA,(MethodInfo *)0x0);
          index_00 = index_00 + 1;
        } while (index_00 < (__this_01->fields)._size);
      }
      __this_00 = (__this->fields).IFHALHIGBNM;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0);
  }
LAB_0320a2b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

