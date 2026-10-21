// FEPPOONJCGI$$JLPKMGNPINP @ RVA 0x30B1E28

void FEPPOONJCGI__JLPKMGNPINP
               (FEPPOONJCGI_o *__this,System_Collections_Generic_List_string__o *NOCALFGICHO,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *GDGEELOAELH;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_045661e2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
                    /* try { // try from 031b1e54 to 032b1e7b has its CatchHandler @ 031b23ac */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661e2 = 1;
  }
  if (NOCALFGICHO == (System_Collections_Generic_List_string__o *)0x0) {
LAB_031b1f40:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (NOCALFGICHO->fields)._size) {
    index = 0;
    do {
      method_00 = Method_System_Collections_Generic_List<string>_get_Item__;
      GDGEELOAELH = (System_String_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)NOCALFGICHO,index,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<string>_get_Item__);
      bVar1 = FEPPOONJCGI__NDDNOOBENCN(__this,GDGEELOAELH,method_00);
      index = index + 1;
                    /* try { // try from 031b1eb8 to 032b1ee3 has its CatchHandler @ 031b23a8 */
    } while (index < (NOCALFGICHO->fields)._size);
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
                    /* try { // try from 031b1f18 to 032b1f47 has its CatchHandler @ 031b23a4 */
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
        return;
      }
      goto LAB_031b1f40;
    }
  }
  return;
}

