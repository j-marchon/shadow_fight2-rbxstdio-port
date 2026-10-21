// BDGDJDGHMJI$$FEAPLDIKLJB @ RVA 0x32669D4

System_String_o * BDGDJDGHMJI__FEAPLDIKLJB(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *b;
  System_Nullable_int__o SVar5;
  MethodInfo *str0;
  MethodInfo *method_00;
  int32_t iVar6;
  undefined1 auVar7 [16];
  int32_t local_34;
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = BFPCMHPBAGL;
  if ((DAT_045671cd & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5632);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5633);
                    /* try { // try from 03366a10 to 03466a17 has its CatchHandler @ 03366ca0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5634);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5635);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5636);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5637);
                    /* try { // try from 03366a3c to 03466a43 has its CatchHandler @ 03366c94 */
                    /* try { // try from 03366a44 to 03466c67 has its CatchHandler @ 033667fc */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5638);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5639);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    auVar7 = FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_045671cd = 1;
  }
  local_34 = 0;
  if (BFPCMHPBAGL != (System_String_array *)0x0) {
    if (BFPCMHPBAGL->max_length == 0) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5632,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5633,
                 (MethodInfo *)0x0);
                    /* try { // try from 03366c68 to 03466c6b has its CatchHandler @ 03366cb0 */
                    /* try { // try from 03366c6c to 03466c6f has its CatchHandler @ 03366ca8 */
                    /* try { // try from 03366c70 to 03466c73 has its CatchHandler @ 03366ca4 */
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03366c74 to 03466c77 has its CatchHandler @ 03366c9c */
                    /* try { // try from 03366c78 to 03466c7b has its CatchHandler @ 03366c98 */
                    /* try { // try from 03366c7c to 03466c7f has its CatchHandler @ 03366c90 */
                    /* try { // try from 03366c84 to 03466c87 has its CatchHandler @ 03366cb4 */
                    /* try { // try from 03366c88 to 03466ccf has its CatchHandler @ 033667fc */
      method_00 = str0;
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033669d0 with catch @ 03366c8c */
                    /* catch() { ... } // from try @ 03366c7c with catch @ 03366c90 */
        method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
      }
                    /* catch() { ... } // from try @ 03366a3c with catch @ 03366c94 */
      pSVar2 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
    }
    else {
      if ((int)BFPCMHPBAGL->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0(auVar7._0_8_,auVar7._8_8_);
      }
      if (BFPCMHPBAGL->m_Items[0] == (System_String_o *)0x0) goto LAB_03366d18;
      pSVar2 = System_String__ToLower(BFPCMHPBAGL->m_Items[0],(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5634,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5635,
                 (MethodInfo *)0x0);
      b = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,b,(MethodInfo *)0x0);
      if (!bVar1) {
                    /* catch() { ... } // from try @ 03366c68 with catch @ 03366cb0 */
                    /* catch() { ... } // from try @ 03366c84 with catch @ 03366cb4 */
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5638,
                   (MethodInfo *)0x0);
                    /* try { // try from 03366cd0 to 03466cd3 has its CatchHandler @ 03366cfc */
                    /* try { // try from 03366cd4 to 03466d0b has its CatchHandler @ 033667fc */
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5639,
                   (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03366cd0 with catch @ 03366cfc */
        pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        return pSVar2;
      }
      SVar5 = AJAMDCEKAFE__NANCFCIGNEE(0,BFPCMHPBAGL,(MethodInfo *)0x0);
      iVar6 = 10;
      if (((ulong)SVar5.fields & 0xff) != 0) {
        iVar6 = SVar5.fields.value;
      }
      if (DAT_04566746 == '\0') {
        FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
        DAT_04566746 = '\x01';
      }
      Core_Network_ServerProvider_TypeInfo->static_fields->_EFPEEJBPIDE_k__BackingField = iVar6;
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5636,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5637,
                 (MethodInfo *)0x0);
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if (DAT_0456720c == '\0') {
        FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
        DAT_0456720c = '\x01';
      }
      local_34 = Core_Network_ServerProvider_TypeInfo->static_fields->_EFPEEJBPIDE_k__BackingField;
      pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
    }
                    /* catch() { ... } // from try @ 03366c78 with catch @ 03366c98 */
                    /* catch() { ... } // from try @ 03366c74 with catch @ 03366c9c */
                    /* catch() { ... } // from try @ 03366a10 with catch @ 03366ca0 */
                    /* catch() { ... } // from try @ 03366c70 with catch @ 03366ca4 */
    pSVar2 = System_String__Concat((System_String_o *)str0,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 03366d0c to 03466d13 has its CatchHandler @ 03366d28 */
                    /* try { // try from 03366d14 to 03466d1f has its CatchHandler @ 033667fc */
    return pSVar2;
                    /* catch() { ... } // from try @ 03366c6c with catch @ 03366ca8 */
  }
LAB_03366d18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

