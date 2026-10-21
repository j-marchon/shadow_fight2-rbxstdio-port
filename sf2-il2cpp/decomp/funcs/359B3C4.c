// CBCADKCPCPJ$$DHAAGKPHJLA @ RVA 0x359B3C4

void CBCADKCPCPJ__DHAAGKPHJLA(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  DOPEEDABNEK_o *__this;
  System_Collections_Generic_IList_HOOAAGABMBL__o *pSVar6;
  System_Byte_array *pSVar7;
  System_Byte_array *pSVar8;
  System_String_o *pSVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  HOOAAGABMBL_o *__this_00;
  System_Collections_Generic_IList_HOOAAGABMBL__c *pSVar13;
  ulong uVar14;
  ulong uVar15;
  int32_t *piVar16;
  int iVar17;
  undefined8 local_68;
  
  if ((DAT_04568dc7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5069);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5070);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5071);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5072);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5073);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5074);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5075);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5076);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5077);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5078);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5079);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5080);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568dc7 = 1;
  }
  local_68 = 0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this != (DOPEEDABNEK_o *)0x0) {
    pSVar6 = DOPEEDABNEK__PALAACDCFON(__this,(MethodInfo *)0x0);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5069,(MethodInfo *)0x0)
    ;
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5070,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
    if (pSVar6 != (System_Collections_Generic_IList_HOOAAGABMBL__o *)0x0) {
      pSVar13 = pSVar6->klass;
      uVar1._0_1_ = (pSVar13->_2).rank;
      uVar1._1_1_ = (pSVar13->_2).minimumAlignment;
      uVar14 = (ulong)uVar1;
      if (uVar14 != 0) {
        piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo) {
            pVVar10 = pSVar13->vtable + *piVar16;
            goto LAB_0369b5f8;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      pVVar10 = (VirtualInvokeData *)
                FUN_01b81914(pSVar6,System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo,0);
LAB_0369b5f8:
                    /* try { // try from 0369b600 to 0379b603 has its CatchHandler @ 0369b610 */
      uVar4 = (*pVVar10->methodPtr)(pSVar6,pVVar10->method);
                    /* try { // try from 0369b604 to 0379b607 has its CatchHandler @ 0369b60c */
      local_68 = CONCAT44(uVar4,(int)local_68);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369b268 with catch @ 0369b608
                       try { // try from 0369b608 to 0379b62b has its CatchHandler @ 0369aec8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369b604 with catch @ 0369b60c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369b600 with catch @ 0369b610
                        */
      pSVar11 = System_Int32__ToString((int)&local_68 + 4,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369b248 with catch @ 0369b614
                        */
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0369b62c to 0379b62f has its CatchHandler @ 0369b658 */
                    /* try { // try from 0369b630 to 0379b667 has its CatchHandler @ 0369aec8 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5071,
                 (MethodInfo *)0x0);
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5072,
                 (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0369b62c with catch @ 0369b658 */
      pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
                    /* try { // try from 0369b668 to 0379b66f has its CatchHandler @ 0369b684 */
                    /* try { // try from 0369b670 to 0379b67b has its CatchHandler @ 0369aec8 */
      pSVar9 = System_String__Concat(pSVar9,pSVar11,pSVar12,(MethodInfo *)0x0);
                    /* try { // try from 0369b67c to 0379b683 has its CatchHandler @ 0369b684 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369b668 with catch @ 0369b684
                       catch(type#2 @ 00000000) { ... } // from try @ 0369b67c with catch @ 0369b684
                        */
                    /* try { // try from 0369b688 to 0379b76b has its CatchHandler @ 0369b688
                       catch() { ... } // from try @ 0369b688 with catch @ 0369b688
                       catch() { ... } // from try @ 0369b794 with catch @ 0369b688
                       catch() { ... } // from try @ 0369b7c4 with catch @ 0369b688
                       catch() { ... } // from try @ 0369b7f0 with catch @ 0369b688
                       catch() { ... } // from try @ 0369b830 with catch @ 0369b688 */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
      iVar17 = 0;
      do {
        local_68 = CONCAT44(local_68._4_4_,iVar17);
        pSVar13 = pSVar6->klass;
        uVar2._0_1_ = (pSVar13->_2).rank;
        uVar2._1_1_ = (pSVar13->_2).minimumAlignment;
        uVar14 = (ulong)uVar2;
        if (uVar14 != 0) {
          piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo) {
              pVVar10 = pSVar13->vtable + *piVar16;
              goto LAB_0369b720;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        pVVar10 = (VirtualInvokeData *)
                  FUN_01b81914(pSVar6,System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo,0
                              );
LAB_0369b720:
        iVar5 = (*pVVar10->methodPtr)(pSVar6,pVVar10->method);
        uVar14 = local_68;
        if (iVar5 <= iVar17) {
                    /* try { // try from 0369b980 to 0379b983 has its CatchHandler @ 0369b98c */
                    /* try { // try from 0369b984 to 0379b9ab has its CatchHandler @ 0369b848 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369b948 with catch @ 0369b988
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369b980 with catch @ 0369b98c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369b94c with catch @ 0369b990
                        */
          return;
        }
        pSVar13 = pSVar6->klass;
        uVar3._0_1_ = (pSVar13->_2).rank;
        uVar3._1_1_ = (pSVar13->_2).minimumAlignment;
        uVar15 = (ulong)uVar3;
        if (uVar15 != 0) {
          piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo) {
                    /* try { // try from 0369b788 to 0379b78b has its CatchHandler @ 0369b7c8 */
              pVVar10 = pSVar13->vtable + *piVar16;
              goto LAB_0369b78c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
                    /* try { // try from 0369b76c to 0379b773 has its CatchHandler @ 0369b7d4 */
          } while (uVar15 != 0);
        }
        pVVar10 = (VirtualInvokeData *)
                  FUN_01b81914(pSVar6,System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo,0);
LAB_0369b78c:
                    /* try { // try from 0369b78c to 0379b793 has its CatchHandler @ 0369b7d0 */
                    /* try { // try from 0369b794 to 0379b7bf has its CatchHandler @ 0369b688 */
        __this_00 = (HOOAAGABMBL_o *)
                    (*pVVar10->methodPtr)(pSVar6,uVar14 & 0xffffffff,pVVar10->method);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0369b7c0 to 0379b7c3 has its CatchHandler @ 0369b7cc */
                    /* try { // try from 0369b7c4 to 0379b7eb has its CatchHandler @ 0369b688 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5073,
                   (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369b788 with catch @ 0369b7c8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369b7c0 with catch @ 0369b7cc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369b78c with catch @ 0369b7d0
                        */
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369b76c with catch @ 0369b7d4
                        */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5074,
                   (MethodInfo *)0x0);
                    /* try { // try from 0369b7ec to 0379b7ef has its CatchHandler @ 0369b818 */
                    /* try { // try from 0369b7f0 to 0379b827 has its CatchHandler @ 0369b688 */
        pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
        pSVar11 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0369b7ec with catch @ 0369b818 */
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0369b828 to 0379b82f has its CatchHandler @ 0369b844 */
                    /* try { // try from 0369b830 to 0379b83b has its CatchHandler @ 0369b688 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5075,
                   (MethodInfo *)0x0);
                    /* try { // try from 0369b83c to 0379b843 has its CatchHandler @ 0369b844 */
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369b828 with catch @ 0369b844
                       catch(type#2 @ 00000000) { ... } // from try @ 0369b83c with catch @ 0369b844
                        */
                    /* try { // try from 0369b848 to 0379b92b has its CatchHandler @ 0369b848
                       catch() { ... } // from try @ 0369b848 with catch @ 0369b848
                       catch() { ... } // from try @ 0369b954 with catch @ 0369b848
                       catch() { ... } // from try @ 0369b984 with catch @ 0369b848
                       catch() { ... } // from try @ 0369b9b0 with catch @ 0369b848
                       catch() { ... } // from try @ 0369b9f0 with catch @ 0369b848 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5076,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
        pSVar9 = System_String__Concat(pSVar9,pSVar11,pSVar12,(MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5077,
                   (MethodInfo *)0x0);
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5078,
                   (MethodInfo *)0x0);
        pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5079,
                   (MethodInfo *)0x0);
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5080,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
        if (__this_00 == (HOOAAGABMBL_o *)0x0) break;
                    /* try { // try from 0369b92c to 0379b933 has its CatchHandler @ 0369b994 */
        pSVar9 = HOOAAGABMBL__OEHBFNHBFEO(__this_00,pSVar9,pSVar11,pSVar12,(MethodInfo *)0x0);
                    /* try { // try from 0369b948 to 0379b94b has its CatchHandler @ 0369b988 */
                    /* try { // try from 0369b94c to 0379b953 has its CatchHandler @ 0369b990 */
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0369b954 to 0379b97f has its CatchHandler @ 0369b848 */
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
        iVar17 = (int)local_68 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369b92c with catch @ 0369b994
                        */
  FUN_01bab8c8();
}

