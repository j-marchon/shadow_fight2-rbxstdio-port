// ANFOHCGLHID$$LHFADAKGOIC @ RVA 0x34E0BA4

void ANFOHCGLHID__LHFADAKGOIC(MethodInfo *method)

{
  DBGBHDDCAJC_o *__this;
  System_Collections_Generic_List_DBGBHDDCAJC__o *__this_00;
  int index;
  
  if ((DAT_0456872c & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBGBHDDCAJC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBGBHDDCAJC>_get_Item__);
    DAT_0456872c = 1;
  }
  index = 0;
  while( true ) {
    if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = ANFOHCGLHID_TypeInfo->static_fields->GGBLEBGGDFH;
    if (__this_00 == (System_Collections_Generic_List_DBGBHDDCAJC__o *)0x0) break;
    if ((__this_00->fields)._size <= index) {
      return;
    }
    if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      __this_00 = ANFOHCGLHID_TypeInfo->static_fields->GGBLEBGGDFH;
      if (__this_00 == (System_Collections_Generic_List_DBGBHDDCAJC__o *)0x0) break;
    }
    __this = (DBGBHDDCAJC_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,index,
                        Method_System_Collections_Generic_List<DBGBHDDCAJC>_get_Item__);
    if (__this == (DBGBHDDCAJC_o *)0x0) break;
    DBGBHDDCAJC__CMGOIFKPPPB(__this,(MethodInfo *)0x0);
    index = index + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

