// HCKCBFOGMMJ$$BOADOENMDDN @ RVA 0x31CD730

void HCKCBFOGMMJ__BOADOENMDDN(HCKCBFOGMMJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *__this_00;
  IKCANHIFLGJ_o *__this_01;
  
  if ((DAT_04566c80 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_Clear__);
                    /* try { // try from 032cd758 to 033cd76f has its CatchHandler @ 032ce808 */
    DAT_04566c80 = 1;
  }
  __this_00 = (__this->fields).CMJNDHHGCBI;
  if (__this_00 != (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) {
    System_Collections_Generic_Dictionary<long,_object>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_Clear__);
                    /* try { // try from 032cd774 to 033cd78f has its CatchHandler @ 032ce804 */
    __this_01 = (__this->fields).HDPMNCIAOFO;
    if (__this_01 != (IKCANHIFLGJ_o *)0x0) {
      IKCANHIFLGJ__KHONLKFPFLF(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

