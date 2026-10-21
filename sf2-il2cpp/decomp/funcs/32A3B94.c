// DBIJLEGANCE$$CNDPKDGCGGO @ RVA 0x32A3B94

/* WARNING: Removing unreachable block (ram,0x033a3dbc) */
/* WARNING: Removing unreachable block (ram,0x033a3db4) */
/* WARNING: Removing unreachable block (ram,0x033a3dc4) */

System_Byte_array * DBIJLEGANCE__CNDPKDGCGGO(System_Byte_array *AIGOBLJEBCA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_IO_MemoryStream_o *__this;
  Ionic_Zlib_ZlibStream_o *__this_00;
  System_IO_BinaryReader_o *__this_01;
  System_Byte_array *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *extraout_x1;
  System_IO_BinaryReader_c *pSVar6;
  Ionic_Zlib_ZlibStream_c *pIVar7;
  System_IO_MemoryStream_c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045673de & 1) == 0) {
    FUN_01bab630(&System_IO_BinaryReader_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&Ionic_Zlib_ZlibStream_TypeInfo);
    DAT_045673de = 1;
    method = extraout_x1;
  }
  __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo,method);
  System_IO_MemoryStream___ctor(__this,AIGOBLJEBCA,(MethodInfo *)0x0);
  __this_00 = (Ionic_Zlib_ZlibStream_o *)thunk_FUN_01bda818(Ionic_Zlib_ZlibStream_TypeInfo);
  Ionic_Zlib_ZlibStream___ctor(__this_00,(System_IO_Stream_o *)__this,1,(MethodInfo *)0x0);
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
          goto LAB_033a3cc0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_033a3cc0:
    (*pVVar5->methodPtr)(__this_01,pVVar5->method);
  }
  if (__this_00 != (Ionic_Zlib_ZlibStream_o *)0x0) {
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
          goto LAB_033a3d24;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_033a3d24:
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
          goto LAB_033a3d88;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_033a3d88:
    (*pVVar5->methodPtr)(__this,pVVar5->method);
  }
  return pSVar4;
}

