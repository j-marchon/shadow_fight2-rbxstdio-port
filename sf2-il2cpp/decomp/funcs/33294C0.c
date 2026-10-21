// PCEDNFLCPPF$$NAFEOCKPGOI @ RVA 0x33294C0

void PCEDNFLCPPF__NAFEOCKPGOI(PCEDNFLCPPF_o *__this,MethodInfo *method)

{
  Nekki_Utils_GlobalTimer_o *__this_00;
  int64_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
                    /* catch() { ... } // from try @ 0342949c with catch @ 034294c8 */
                    /* try { // try from 034294d8 to 035294df has its CatchHandler @ 034294f4 */
  if ((DAT_045678ae & 1) == 0) {
                    /* try { // try from 034294e0 to 035294eb has its CatchHandler @ 034292b4 */
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
                    /* try { // try from 034294ec to 035294f3 has its CatchHandler @ 034294f4 */
    DAT_045678ae = 1;
    method = extraout_x1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034294d8 with catch @ 034294f4
                       catch(type#2 @ 00000000) { ... } // from try @ 034294ec with catch @ 034294f4
                        */
                    /* try { // try from 034294f8 to 0352963b has its CatchHandler @ 034294f8
                       catch() { ... } // from try @ 034294f8 with catch @ 034294f8
                       catch() { ... } // from try @ 034296c0 with catch @ 034294f8
                       catch() { ... } // from try @ 034296fc with catch @ 034294f8
                       catch() { ... } // from try @ 0342972c with catch @ 034294f8
                       catch() { ... } // from try @ 0342976c with catch @ 034294f8 */
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
  }
  __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_Utils_GlobalTimer_o *)0x0) {
    iVar1 = Nekki_Utils_GlobalTimer__GetTime(__this_00,(MethodInfo *)0x0);
    (__this->fields).LMBEJLLKCEO = iVar1;
    PCEDNFLCPPF__OGLOKFGFOLP(__this,method_00);
    PCEDNFLCPPF__MDNBLMPJFML(__this,method_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

