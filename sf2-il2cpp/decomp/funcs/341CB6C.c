// HEFOANCOHDC$$DEGNJDCECLI @ RVA 0x341CB6C

void HEFOANCOHDC__DEGNJDCECLI
               (HEFOANCOHDC_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,MMFIDKMDADC_o *HPACPFLKHPK,
               System_Func_CNDPAJOLKFN__float__o *HECFKGPGKPF,MethodInfo *method)

{
  bool FOFCAILEKJD;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_00;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_01;
  System_String_o *pSVar1;
  OLKKAIFGGAK_o *__this_02;
  CNDPAJOLKFN_o *pCVar2;
  MethodInfo *method_00;
  float local_34;
  
                    /* try { // try from 0351cb6c to 0361cb6f has its CatchHandler @ 0351cb80 */
                    /* try { // try from 0351cb70 to 0361cb73 has its CatchHandler @ 0351c9c4 */
                    /* try { // try from 0351cb74 to 0361cb77 has its CatchHandler @ 0351cb7c */
                    /* catch() { ... } // from try @ 0351cafc with catch @ 0351cb78
                       try { // try from 0351cb78 to 0361cb9b has its CatchHandler @ 0351c9c4 */
                    /* catch() { ... } // from try @ 0351cb74 with catch @ 0351cb7c */
                    /* catch() { ... } // from try @ 0351cb6c with catch @ 0351cb80 */
                    /* catch() { ... } // from try @ 0351cac8 with catch @ 0351cb84 */
  method_00 = (MethodInfo *)HPACPFLKHPK;
  if ((DAT_045680de & 1) == 0) {
                    /* try { // try from 0351cb9c to 0361cb9f has its CatchHandler @ 0351cbc8 */
                    /* try { // try from 0351cba0 to 0361cbd7 has its CatchHandler @ 0351c9c4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&StringLiteral_1324);
    DAT_045680de = 1;
  }
  local_34 = 0.0;
                    /* catch() { ... } // from try @ 0351cb9c with catch @ 0351cbc8 */
                    /* try { // try from 0351cbd8 to 0361cbeb has its CatchHandler @ 0351cc50 */
                    /* catch() { ... } // from try @ 0351cb3c with catch @ 0351cbec
                       try { // try from 0351cbec to 0361cc07 has its CatchHandler @ 0351c9c4 */
  if ((((ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) &&
       (__this_00 = (ACCIJLGMHOO->fields).EEFPBGNAFFI,
       __this_00 != (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)) &&
      (__this_01 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,0,
                              Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                             ), __this_01 != (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0)) &&
     (pSVar1 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_01,(MethodInfo *)0x0),
     BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0)) {
                    /* catch() { ... } // from try @ 0351cb2c with catch @ 0351cbf0 */
    FOFCAILEKJD = OLKKAIFGGAK__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
                    /* try { // try from 0351cc08 to 0361cc0b has its CatchHandler @ 0351cc2c */
                    /* try { // try from 0351cc0c to 0361cc33 has its CatchHandler @ 0351c9c4 */
    __this_02 = HEFOANCOHDC__DDFBGPFCLHF(__this,pSVar1,FOFCAILEKJD,method_00);
    pSVar1 = StringLiteral_1324;
    if (__this_02 != (OLKKAIFGGAK_o *)0x0) {
      pCVar2 = OLKKAIFGGAK__PLEJOMOEFNE(__this_02,(MethodInfo *)0x0);
      if (HECFKGPGKPF == (System_Func_CNDPAJOLKFN__float__o *)0x0) goto LAB_0351cc7c;
                    /* catch() { ... } // from try @ 0351cc08 with catch @ 0351cc2c */
      local_34 = (float)(*(code *)(HECFKGPGKPF->fields).super.super.invoke_impl)
                                  ((HECFKGPGKPF->fields).super.super.method_code,pCVar2,
                                   (HECFKGPGKPF->fields).super.super.method);
                    /* try { // try from 0351cc34 to 0361cc3b has its CatchHandler @ 0351cc50 */
                    /* try { // try from 0351cc3c to 0361cc47 has its CatchHandler @ 0351c9c4 */
      pSVar1 = System_Single__ToString(local_34,(MethodInfo *)&local_34);
                    /* try { // try from 0351cc48 to 0361cc4f has its CatchHandler @ 0351cc50 */
    }
    if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
      (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar1;
                    /* catch() { ... } // from try @ 0351cbd8 with catch @ 0351cc50
                       catch() { ... } // from try @ 0351cc34 with catch @ 0351cc50
                       catch() { ... } // from try @ 0351cc48 with catch @ 0351cc50 */
      thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
                    /* try { // try from 0351cc5c to 0361cd4f has its CatchHandler @ 0351cc5c
                       catch() { ... } // from try @ 0351cc5c with catch @ 0351cc5c
                       catch() { ... } // from try @ 0351cdd4 with catch @ 0351cc5c
                       catch() { ... } // from try @ 0351cdf4 with catch @ 0351cc5c
                       catch() { ... } // from try @ 0351ce5c with catch @ 0351cc5c
                       catch() { ... } // from try @ 0351ce98 with catch @ 0351cc5c
                       catch() { ... } // from try @ 0351cecc with catch @ 0351cc5c */
      return;
    }
  }
LAB_0351cc7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

