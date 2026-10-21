// FEPPOONJCGI$$LAENFPIHMDP @ RVA 0x30B0AE8

void FEPPOONJCGI__LAENFPIHMDP
               (FEPPOONJCGI_o *__this,System_Collections_Generic_List_KAJIALENBGD__o *JMFIEMFMJAJ,
               MethodInfo *method)

{
  bool bVar1;
  KAJIALENBGD_o *LFOOJOJHDFM;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_045661de & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661de = 1;
  }
  if (JMFIEMFMJAJ == (System_Collections_Generic_List_KAJIALENBGD__o *)0x0) {
LAB_031b0c00:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (JMFIEMFMJAJ->fields)._size) {
    index = 0;
    do {
      method_00 = Method_System_Collections_Generic_List<KAJIALENBGD>_get_Item__;
      LFOOJOJHDFM = (KAJIALENBGD_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)JMFIEMFMJAJ,index,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<KAJIALENBGD>_get_Item__);
      bVar1 = FEPPOONJCGI__CGFJFHHCIGF(__this,LFOOJOJHDFM,method_00);
      index = index + 1;
    } while (index < (JMFIEMFMJAJ->fields)._size);
    if (bVar1) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
        return;
      }
      goto LAB_031b0c00;
    }
  }
  return;
}

