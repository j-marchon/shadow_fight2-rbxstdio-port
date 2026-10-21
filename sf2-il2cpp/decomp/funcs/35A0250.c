// Nekki.Utils.RaidBetaLogger$$CJEINAHMMJN @ RVA 0x35A0250

/* WARNING: Removing unreachable block (ram,0x036a0904) */
/* WARNING: Removing unreachable block (ram,0x036a08f4) */
/* WARNING: Removing unreachable block (ram,0x036a090c) */

System_Byte_array *
Nekki_Utils_RaidBetaLogger__CJEINAHMMJN
          (Nekki_Utils_RaidBetaLogger_o *__this,System_String_o *DJDEOBOADKF,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  Ionic_Zip_ZipFile_o *__this_00;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  Nekki_Utils_RaidBetaLogger_o *pNVar10;
  System_IO_MemoryStream_o *__this_01;
  System_IO_BinaryReader_o *__this_02;
  VirtualInvokeData *pVVar11;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  System_IO_BinaryReader_c *pSVar12;
  System_IO_MemoryStream_c *pSVar13;
  Ionic_Zip_ZipFile_c *pIVar14;
  ulong uVar15;
  int32_t *piVar16;
  
  if ((DAT_04568de4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1338);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1339);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1340);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1341);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1342);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1343);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1344);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1345);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1346);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1347);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1348);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1349);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1350);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1351);
    FUN_01bab630(&System_IO_BinaryReader_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&Ionic_Zip_ZipFile_TypeInfo);
    DAT_04568de4 = 1;
  }
  __this_00 = (Ionic_Zip_ZipFile_o *)thunk_FUN_01bda818(Ionic_Zip_ZipFile_TypeInfo);
  Ionic_Zip_ZipFile___ctor(__this_00,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1338,(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1339,(MethodInfo *)0x0);
  pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar8 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1340,(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1341,(MethodInfo *)0x0);
  pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
  pNVar10 = (Nekki_Utils_RaidBetaLogger_o *)System_String__Concat(pSVar8,pSVar9,(MethodInfo *)0x0);
  bVar4 = Nekki_Utils_RaidBetaLogger__FEKPMMPNPBD
                    (pNVar10,__this_00,pSVar7,(System_String_o *)pNVar10,in_x4);
  if (!bVar4) {
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1342,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1343,(MethodInfo *)0x0)
    ;
    pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1344,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1345,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    pNVar10 = (Nekki_Utils_RaidBetaLogger_o *)System_String__Concat(pSVar8,pSVar9,(MethodInfo *)0x0)
    ;
    Nekki_Utils_RaidBetaLogger__FEKPMMPNPBD
              (pNVar10,__this_00,pSVar7,(System_String_o *)pNVar10,in_x4);
  }
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1346,(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1347,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
  pSVar8 = Nekki_Utils_RaidBetaLogger__IFGNOMDEHCM(__this,DJDEOBOADKF,method_00);
  if (__this_00 == (Ionic_Zip_ZipFile_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  Ionic_Zip_ZipFile__AddEntry(__this_00,pSVar7,pSVar8,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1348,(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1349,(MethodInfo *)0x0);
  pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
  Ionic_Zip_ZipFile__AddEntry(__this_00,pSVar7,DJDEOBOADKF,(MethodInfo *)0x0);
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar7 = MGENAMAJALB__GACHMMDHOJE((MethodInfo *)0x0);
  bVar4 = System_IO_File__Exists(pSVar7,(MethodInfo *)0x0);
  if (bVar4) {
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1350,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1351,(MethodInfo *)0x0)
    ;
    pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = MGENAMAJALB__GACHMMDHOJE((MethodInfo *)0x0);
    pSVar8 = System_IO_File__ReadAllText(pSVar8,(MethodInfo *)0x0);
    Ionic_Zip_ZipFile__AddEntry(__this_00,pSVar7,pSVar8,(MethodInfo *)0x0);
  }
  __this_01 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this_01,(MethodInfo *)0x0);
  Ionic_Zip_ZipFile__Save(__this_00,(System_IO_Stream_o *)__this_01,(MethodInfo *)0x0);
  __this_02 = (System_IO_BinaryReader_o *)thunk_FUN_01bda818(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(__this_02,(System_IO_Stream_o *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(__this_01->klass->vtable)._31_Seek.methodPtr)
            (__this_01,0,0,(__this_01->klass->vtable)._31_Seek.method);
  pSVar5 = NEHNBJKKABI__BELGEBDABEH(__this_02,(MethodInfo *)0x0);
  if (__this_02 != (System_IO_BinaryReader_o *)0x0) {
    pSVar12 = __this_02->klass;
    uVar1._0_1_ = (pSVar12->_2).rank;
    uVar1._1_1_ = (pSVar12->_2).minimumAlignment;
    uVar15 = (ulong)uVar1;
    if (uVar15 != 0) {
      piVar16 = &((pSVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar11 = &(pSVar12->vtable)._0_Equals + *piVar16;
          goto LAB_036a07fc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pVVar11 = (VirtualInvokeData *)FUN_01b81914(__this_02,System_IDisposable_TypeInfo,0);
LAB_036a07fc:
    (*pVVar11->methodPtr)(__this_02,pVVar11->method);
  }
  if (__this_01 != (System_IO_MemoryStream_o *)0x0) {
    pSVar13 = __this_01->klass;
    uVar2._0_1_ = (pSVar13->_2).rank;
    uVar2._1_1_ = (pSVar13->_2).minimumAlignment;
    uVar15 = (ulong)uVar2;
    if (uVar15 != 0) {
      piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar11 = &(pSVar13->vtable)._0_Equals + *piVar16;
          goto LAB_036a0860;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pVVar11 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_036a0860:
    (*pVVar11->methodPtr)(__this_01,pVVar11->method);
  }
  if (__this_00 != (Ionic_Zip_ZipFile_o *)0x0) {
    pIVar14 = __this_00->klass;
    uVar3._0_1_ = (pIVar14->_2).rank;
    uVar3._1_1_ = (pIVar14->_2).minimumAlignment;
    uVar15 = (ulong)uVar3;
    if (uVar15 != 0) {
      piVar16 = &((pIVar14->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar11 = &(pIVar14->vtable)._0_Equals + *piVar16;
          goto LAB_036a08c4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pVVar11 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_036a08c4:
    (*pVVar11->methodPtr)(__this_00,pVVar11->method);
  }
  return pSVar5;
}

