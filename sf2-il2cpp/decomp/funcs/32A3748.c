// DBIJLEGANCE$$AFMECNJHNDI @ RVA 0x32A3748

/* WARNING: Removing unreachable block (ram,0x033a396c) */
/* WARNING: Removing unreachable block (ram,0x033a3964) */
/* WARNING: Removing unreachable block (ram,0x033a3974) */

System_Byte_array * DBIJLEGANCE__AFMECNJHNDI(System_Byte_array *AIGOBLJEBCA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_IO_MemoryStream_o *__this;
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *__this_00;
  System_IO_BinaryReader_o *__this_01;
  System_Byte_array *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *extraout_x1;
  System_IO_BinaryReader_c *pSVar6;
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *pIVar7;
  System_IO_MemoryStream_c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045673dd & 1) == 0) {
    FUN_01bab630(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    FUN_01bab630(&System_IO_BinaryReader_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    DAT_045673dd = 1;
    method = extraout_x1;
  }
  __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo,method);
  System_IO_MemoryStream___ctor(__this,AIGOBLJEBCA,(MethodInfo *)0x0);
  __this_00 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)
              thunk_FUN_01bda818(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor
            (__this_00,(System_IO_Stream_o *)__this,(MethodInfo *)0x0);
  __this_01 = (System_IO_BinaryReader_o *)thunk_FUN_01bda818(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(__this_01,(System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
  pSVar4 = NEHNBJKKABI__BELGEBDABEH(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (System_IO_BinaryReader_o *)0x0) {
    pSVar6 = __this_01->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar5 = &(pSVar6->vtable)._0_Equals + *piVar10;
          goto LAB_033a3870;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_033a3870:
    (*pVVar5->methodPtr)(__this_01,pVVar5->method);
  }
  if (__this_00 != (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)0x0) {
    pIVar7 = __this_00->klass;
    uVar2._0_1_ = (pIVar7->_2).rank;
    uVar2._1_1_ = (pIVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pIVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar5 = &(pIVar7->vtable)._0_Equals + *piVar10;
          goto LAB_033a38d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_033a38d4:
    (*pVVar5->methodPtr)(__this_00,pVVar5->method);
  }
  if (__this != (System_IO_MemoryStream_o *)0x0) {
    pSVar8 = __this->klass;
    uVar3._0_1_ = (pSVar8->_2).rank;
    uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar3;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar5 = &(pSVar8->vtable)._0_Equals + *piVar10;
          goto LAB_033a3938;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_033a3938:
    (*pVVar5->methodPtr)(__this,pVVar5->method);
  }
  return pSVar4;
}

