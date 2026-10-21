// NOMBKAHPOHM$$APPIAMLEJBH @ RVA 0x32DA55C

void NOMBKAHPOHM__APPIAMLEJBH(NOMBKAHPOHM_o *__this,PKHMIGFEJCL_o *OKBIKHHKOEN,MethodInfo *method)

{
  FPPKHNNABAD_o *__this_00;
  System_Collections_Generic_IEnumerable_T__o *collection;
  
  if ((DAT_045675b0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    DAT_045675b0 = 1;
  }
  if (OKBIKHHKOEN != (PKHMIGFEJCL_o *)0x0) {
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 (OKBIKHHKOEN->fields)._JOFOHDAGJIN_k__BackingField;
    if (collection == (System_Collections_Generic_IEnumerable_T__o *)0x0) {
                    /* try { // try from 033da5bc to 034da5c3 has its CatchHandler @ 033da694 */
      return;
    }
    __this_00 = (__this->fields).NDBPOFMECGL;
    if (__this_00 != (FPPKHNNABAD_o *)0x0) {
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,collection,
                 Method_System_Collections_Generic_List<string>_AddRange__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033da5c4 to 034da5c7 has its CatchHandler @ 033da688 */
  FUN_01bab8c8();
}

