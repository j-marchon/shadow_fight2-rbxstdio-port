// HEFOANCOHDC$$NKAFEPGIFPB @ RVA 0x3422018

void HEFOANCOHDC__NKAFEPGIFPB
               (HEFOANCOHDC_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  HEFOANCOHDC_o *pHVar3;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_00;
  HEFOANCOHDC_o *pHVar4;
  NJPBHDMCLIN_o *pNVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  
                    /* try { // try from 03522018 to 0362202b has its CatchHandler @ 035220a8 */
                    /* catch() { ... } // from try @ 0352197c with catch @ 0352202c
                       try { // try from 0352202c to 0362204f has its CatchHandler @ 035214bc */
  if ((DAT_045680e7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__);
                    /* try { // try from 03522050 to 03622053 has its CatchHandler @ 0352207c */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__);
                    /* try { // try from 03522054 to 0362208b has its CatchHandler @ 035214bc */
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    __this = (HEFOANCOHDC_o *)FUN_01bab630(&StringLiteral_1);
                    /* catch() { ... } // from try @ 03522050 with catch @ 0352207c */
    DAT_045680e7 = 1;
  }
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (__this = (HEFOANCOHDC_o *)(ACCIJLGMHOO->fields).EEFPBGNAFFI, __this == (HEFOANCOHDC_o *)0x0))
  goto LAB_03522158;
                    /* try { // try from 0352208c to 03622093 has its CatchHandler @ 035220a8 */
  iVar1._0_1_ = (__this->fields).ICCBEPAFBFI.fields.fakeValue;
  iVar1._1_1_ = (__this->fields).ICCBEPAFBFI.fields.inited;
  iVar1._2_1_ = (__this->fields).ICCBEPAFBFI.fields.fakeValueActive;
  iVar1._3_1_ = (__this->fields).ICCBEPAFBFI.fields.field_0xb;
  pHVar3 = __this;
  if (iVar1 == 0) {
                    /* try { // try from 03522094 to 0362209f has its CatchHandler @ 035214bc */
    if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_03522158;
                    /* try { // try from 035220a0 to 036220a7 has its CatchHandler @ 035220a8 */
                    /* catch() { ... } // from try @ 03522018 with catch @ 035220a8
                       catch() { ... } // from try @ 0352208c with catch @ 035220a8
                       catch() { ... } // from try @ 035220a0 with catch @ 035220a8 */
    (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)StringLiteral_1;
    thunk_FUN_01c20e04();
    pHVar3 = (HEFOANCOHDC_o *)(ACCIJLGMHOO->fields).EEFPBGNAFFI;
    __this = (HEFOANCOHDC_o *)0x0;
    if (pHVar3 == (HEFOANCOHDC_o *)0x0) goto LAB_03522158;
  }
  __this_00 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pHVar3,0,
                         Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__)
  ;
  __this = (HEFOANCOHDC_o *)0x0;
  if ((((__this_00 != (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) &&
       (__this = (HEFOANCOHDC_o *)NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_00,(MethodInfo *)0x0),
       BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0)) &&
      (pNVar5 = (BCKBBGCOMJD->fields).FNEAAHOOHAA, pNVar5 != (NJPBHDMCLIN_o *)0x0)) &&
     (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (pNVar5->fields).JJCFAGEDAAN,
     __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_01,(Il2CppObject *)__this,
                       Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__);
    pHVar4 = (HEFOANCOHDC_o *)(ulong)bVar2;
    pHVar3 = StringLiteral_1;
    if (bVar2) {
      pHVar4 = (HEFOANCOHDC_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_01,(Il2CppObject *)__this,
                          Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__);
      pHVar3 = pHVar4;
    }
    __this = pHVar4;
    if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
      (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)pHVar3;
      thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
      return;
    }
  }
LAB_03522158:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

