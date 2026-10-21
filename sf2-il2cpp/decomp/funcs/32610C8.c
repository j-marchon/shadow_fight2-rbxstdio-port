// BDGDJDGHMJI$$BNACEHKJBBL @ RVA 0x32610C8

System_String_o * BDGDJDGHMJI__BNACEHKJBBL(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  ADJEBFOPFFF_o *__this;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  MethodInfo *str0;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  System_String_o *pSVar3;
  
                    /* try { // try from 033610cc to 034610d7 has its CatchHandler @ 03361878 */
  if ((DAT_045671ae & 1) == 0) {
                    /* try { // try from 033610e8 to 034610f7 has its CatchHandler @ 03361860 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5421);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5422);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5423);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5424);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 03361128 to 03461133 has its CatchHandler @ 03361898 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045671ae = 1;
    method = extraout_x1;
  }
  if (BFPCMHPBAGL != (System_String_array *)0x0) {
                    /* try { // try from 03361144 to 03461153 has its CatchHandler @ 033617f0 */
    if ((int)BFPCMHPBAGL->max_length != 1) {
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5421,
                 (MethodInfo *)0x0);
                    /* try { // try from 0336122c to 03461237 has its CatchHandler @ 033618a0 */
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03361248 to 03461257 has its CatchHandler @ 03361838 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5422,
                 (MethodInfo *)0x0);
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      method_00 = str0;
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
        method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
      }
      pSVar3 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
LAB_03361288:
                    /* try { // try from 03361288 to 03461293 has its CatchHandler @ 033617e4 */
      pSVar3 = System_String__Concat((System_String_o *)str0,pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    __this = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
    if ((int)BFPCMHPBAGL->max_length != 0) {
      if (__this == (ADJEBFOPFFF_o *)0x0) goto LAB_03361298;
                    /* try { // try from 0336117c to 03461187 has its CatchHandler @ 03361854 */
      ADJEBFOPFFF__EFGGOJMGCLK
                (__this,BFPCMHPBAGL->m_Items[0],(System_Action_BKKPAKHJDKB__o *)0x0,true,
                 (MethodInfo *)0x0);
                    /* try { // try from 03361198 to 034611a7 has its CatchHandler @ 033618a8 */
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5423,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033611d0 to 034611db has its CatchHandler @ 03361814 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5424,
                 (MethodInfo *)0x0);
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 033611ec to 034611fb has its CatchHandler @ 033618c0 */
      if ((int)BFPCMHPBAGL->max_length != 0) {
        pSVar3 = BFPCMHPBAGL->m_Items[0];
        goto LAB_03361288;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03361298:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

