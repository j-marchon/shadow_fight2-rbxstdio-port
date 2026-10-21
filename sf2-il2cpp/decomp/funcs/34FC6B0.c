// LHKALFIIJKB$$DAFNBBJHFJL @ RVA 0x34FC6B0

void LHKALFIIJKB__DAFNBBJHFJL(System_Action_o *HJNIEEICBFA,MethodInfo *method)

{
  bool bVar1;
  System_Action_o **ppSVar2;
  LHKALFIIJKB_c *method_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *GPJHCIPBFOG;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  
                    /* catch() { ... } // from try @ 035fc6a0 with catch @ 035fc6c4 */
                    /* try { // try from 035fc6cc to 036fc6d3 has its CatchHandler @ 035fc6e8 */
  if ((DAT_04568837 & 1) == 0) {
                    /* try { // try from 035fc6d4 to 036fc6df has its CatchHandler @ 035fc378 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_656);
                    /* try { // try from 035fc6e0 to 036fc6e7 has its CatchHandler @ 035fc6e8 */
                    /* catch() { ... } // from try @ 035fc628 with catch @ 035fc6e8
                       catch() { ... } // from try @ 035fc6cc with catch @ 035fc6e8
                       catch() { ... } // from try @ 035fc6e0 with catch @ 035fc6e8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_657);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568837 = 1;
    method = extraout_x1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  ppSVar2 = &LHKALFIIJKB_TypeInfo->static_fields->BPDJGLJFDGC;
  *ppSVar2 = HJNIEEICBFA;
  thunk_FUN_01c20e04(ppSVar2,HJNIEEICBFA);
  bVar1 = IEICNBBBNEJ__KDAGDFGJGKN(true,(MethodInfo *)0x0);
  if (bVar1) {
    method_00 = LHKALFIIJKB_TypeInfo;
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
    }
    LHKALFIIJKB__CLIHAFJDHKO((MethodInfo *)method_00);
    return;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_656,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_657,(MethodInfo *)0x0);
  GPJHCIPBFOG = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  method_01 = extraout_x1_00;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
    method_01 = extraout_x1_01;
  }
  LHKALFIIJKB__LJGOKKLMLNN(GPJHCIPBFOG,method_01);
  return;
}

