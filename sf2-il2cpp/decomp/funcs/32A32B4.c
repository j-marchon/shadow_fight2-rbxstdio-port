// DBIJLEGANCE$$LJBMFNHPKCB @ RVA 0x32A32B4

/* WARNING: Removing unreachable block (ram,0x033a3524) */
/* WARNING: Removing unreachable block (ram,0x033a3518) */
/* WARNING: Removing unreachable block (ram,0x033a33fc) */
/* WARNING: Removing unreachable block (ram,0x033a3494) */
/* WARNING: Removing unreachable block (ram,0x033a352c) */

System_Byte_array * DBIJLEGANCE__LJBMFNHPKCB(System_Byte_array *AIGOBLJEBCA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_IO_MemoryStream_o *__this;
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *__this_00;
  System_IO_BinaryWriter_o *__this_01;
  VirtualInvokeData *pVVar4;
  System_Byte_array *pSVar5;
  MethodInfo *extraout_x1;
  System_IO_BinaryWriter_c *pSVar6;
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *pIVar7;
  System_IO_MemoryStream_c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045673dc & 1) == 0) {
    FUN_01bab630(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    FUN_01bab630(&System_IO_BinaryWriter_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    DAT_045673dc = 1;
    method = extraout_x1;
  }
  __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo,method);
  System_IO_MemoryStream___ctor(__this,(MethodInfo *)0x0);
  __this_00 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)
              thunk_FUN_01bda818(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor
            (__this_00,(System_IO_Stream_o *)__this,(MethodInfo *)0x0);
  __this_01 = (System_IO_BinaryWriter_o *)thunk_FUN_01bda818(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor(__this_01,(System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
  if (__this_01 == (System_IO_BinaryWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(__this_01->klass->vtable)._10_Write.methodPtr)
            (__this_01,AIGOBLJEBCA,(__this_01->klass->vtable)._10_Write.method);
  pSVar6 = __this_01->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar4 = &(pSVar6->vtable)._0_Equals + *piVar10;
        goto LAB_033a33e4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_033a33e4:
  (*pVVar4->methodPtr)(__this_01,pVVar4->method);
  if (__this_00 != (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)0x0) {
    pIVar7 = __this_00->klass;
    uVar2._0_1_ = (pIVar7->_2).rank;
    uVar2._1_1_ = (pIVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pIVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar4 = &(pIVar7->vtable)._0_Equals + *piVar10;
          goto LAB_033a3454;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_033a3454:
    (*pVVar4->methodPtr)(__this_00,pVVar4->method);
  }
  if (__this == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = (System_Byte_array *)
           (*(__this->klass->vtable)._42_ToArray.methodPtr)
                     (__this,(__this->klass->vtable)._42_ToArray.method);
  pSVar8 = __this->klass;
  uVar3._0_1_ = (pSVar8->_2).rank;
  uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar3;
  if (uVar9 != 0) {
    piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar4 = &(pSVar8->vtable)._0_Equals + *piVar10;
        goto LAB_033a34ec;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_033a34ec:
  (*pVVar4->methodPtr)(__this,pVVar4->method);
  return pSVar5;
}

