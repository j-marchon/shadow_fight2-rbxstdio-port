// LDHBHPILNMA$$OMJCGAIOEHB @ RVA 0x31A01C8

void LDHBHPILNMA__OMJCGAIOEHB
               (System_Collections_Generic_List_string__o *FPEHEJBLCAO,
               System_Collections_Generic_List_ECENNHNBAME__o *KENFFDHLNDA,MethodInfo *method)

{
  System_String_o *KGLJICLJHEL;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_04566ada & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04566ada = 1;
  }
  if (FPEHEJBLCAO != (System_Collections_Generic_List_string__o *)0x0) {
    if (0 < (FPEHEJBLCAO->fields)._size) {
      index = 0;
      do {
        method_00 = Method_System_Collections_Generic_List<string>_get_Item__;
        KGLJICLJHEL = (System_String_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)FPEHEJBLCAO,index,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<string>_get_Item__);
        if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo);
        }
        LDHBHPILNMA__CADFKPKODCI(KGLJICLJHEL,KENFFDHLNDA,method_00);
        index = index + 1;
      } while (index < (FPEHEJBLCAO->fields)._size);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

