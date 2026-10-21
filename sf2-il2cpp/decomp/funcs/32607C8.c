// AAPGCAPGBLG$$GKFEMOENIBH @ RVA 0x32607C8

void AAPGCAPGBLG__GKFEMOENIBH
               (AAPGCAPGBLG_o *__this,CCLKPGBIBOP_o *NPOAPJKIIOF,
               System_Collections_Generic_HashSet_string__o *LJEGELEEPCP,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045671a8 & 1) == 0) {
    __this = (AAPGCAPGBLG_o *)
             FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    DAT_045671a8 = 1;
  }
  if (NPOAPJKIIOF != (CCLKPGBIBOP_o *)0x0) {
    if ((NPOAPJKIIOF->fields)._BNIHGHLPOHB_k__BackingField != false) {
      if (LJEGELEEPCP == (System_Collections_Generic_HashSet_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(__this);
      }
      bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        ((System_Collections_Generic_HashSet_object__o *)LJEGELEEPCP,
                         (Il2CppObject *)(NPOAPJKIIOF->fields)._COIPKAKHDFP_k__BackingField,
                         Method_System_Collections_Generic_HashSet<string>_Contains__);
      (NPOAPJKIIOF->fields)._PCFJKILMDCE_k__BackingField = (bool_conflict)(~bVar1 & 1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

