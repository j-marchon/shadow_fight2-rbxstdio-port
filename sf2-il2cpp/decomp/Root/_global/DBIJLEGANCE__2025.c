// TypeDefIndex 2025
// Namespace: 
// public static class DBIJLEGANCE
// Fields:

// ===== public static byte[] LJBMFNHPKCB(byte[] AIGOBLJEBCA)  [RVA 0x32A32B4]
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


// ===== public static byte[] AFMECNJHNDI(byte[] AIGOBLJEBCA)  [RVA 0x32A3748]
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


// ===== public static byte[] CNDPKDGCGGO(byte[] AIGOBLJEBCA)  [RVA 0x32A3B94]
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


// ===== public static byte[] KEIDOJDOFNN(string AIGOBLJEBCA, Encoding JIBJHEPKNIL)  [RVA 0x32A3FE4]
// DBIJLEGANCE$$KEIDOJDOFNN @ RVA 0x32A3FE4

/* WARNING: Removing unreachable block (ram,0x033a4268) */
/* WARNING: Removing unreachable block (ram,0x033a414c) */
/* WARNING: Removing unreachable block (ram,0x033a4274) */
/* WARNING: Removing unreachable block (ram,0x033a427c) */
/* WARNING: Removing unreachable block (ram,0x033a41bc) */
/* WARNING: Removing unreachable block (ram,0x033a41e4) */

System_Byte_array *
DBIJLEGANCE__KEIDOJDOFNN
          (System_String_o *AIGOBLJEBCA,System_Text_Encoding_o *JIBJHEPKNIL,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_IO_MemoryStream_o *__this;
  Ionic_Zlib_ZlibStream_o *__this_00;
  System_IO_StreamWriter_o *__this_01;
  VirtualInvokeData *pVVar4;
  System_Byte_array *pSVar5;
  System_IO_StreamWriter_c *pSVar6;
  Ionic_Zlib_ZlibStream_c *pIVar7;
  System_IO_MemoryStream_c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045673df & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&System_IO_StreamWriter_TypeInfo);
    FUN_01bab630(&Ionic_Zlib_ZlibStream_TypeInfo);
    DAT_045673df = 1;
  }
  if (JIBJHEPKNIL == (System_Text_Encoding_o *)0x0) {
    JIBJHEPKNIL = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  }
  __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this,(MethodInfo *)0x0);
  __this_00 = (Ionic_Zlib_ZlibStream_o *)thunk_FUN_01bda818(Ionic_Zlib_ZlibStream_TypeInfo);
  Ionic_Zlib_ZlibStream___ctor(__this_00,(System_IO_Stream_o *)__this,0,(MethodInfo *)0x0);
  __this_01 = (System_IO_StreamWriter_o *)thunk_FUN_01bda818(System_IO_StreamWriter_TypeInfo);
  System_IO_StreamWriter___ctor
            (__this_01,(System_IO_Stream_o *)__this_00,JIBJHEPKNIL,(MethodInfo *)0x0);
  if (__this_01 == (System_IO_StreamWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(__this_01->klass->vtable)._16_Write.methodPtr)
            (__this_01,AIGOBLJEBCA,(__this_01->klass->vtable)._16_Write.method);
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
        goto LAB_033a4134;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_033a4134:
  (*pVVar4->methodPtr)(__this_01,pVVar4->method);
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
          pVVar4 = &(pIVar7->vtable)._0_Equals + *piVar10;
          goto LAB_033a41a4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_033a41a4:
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
        goto LAB_033a423c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_033a423c:
  (*pVVar4->methodPtr)(__this,pVVar4->method);
  return pSVar5;
}


// ===== public static void DALDBPICLKB(Stream AILODCHECLA, Stream AJLBDPAPMCD)  [RVA 0x32A4498]
// DBIJLEGANCE$$DALDBPICLKB @ RVA 0x32A4498

void DBIJLEGANCE__DALDBPICLKB
               (System_IO_Stream_o *AILODCHECLA,System_IO_Stream_o *AJLBDPAPMCD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if ((DAT_045673e0 & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    DAT_045673e0 = 1;
  }
  lVar2 = FUN_01bab718(byte___TypeInfo,0x200);
  if ((lVar2 != 0) && (AILODCHECLA != (System_IO_Stream_o *)0x0)) {
    uVar1 = (*(AILODCHECLA->klass->vtable)._33_unknown.methodPtr)
                      (AILODCHECLA,lVar2,0,(ulong)*(uint *)(lVar2 + 0x18),
                       (AILODCHECLA->klass->vtable)._33_unknown.method);
    while( true ) {
      if (uVar1 == 0) {
        return;
      }
      if (AJLBDPAPMCD == (System_IO_Stream_o *)0x0) break;
      (*(AJLBDPAPMCD->klass->vtable)._36_unknown.methodPtr)
                (AJLBDPAPMCD,lVar2,0,(ulong)uVar1,(AJLBDPAPMCD->klass->vtable)._36_unknown.method);
      uVar1 = (*(AILODCHECLA->klass->vtable)._33_unknown.methodPtr)
                        (AILODCHECLA,lVar2,0,(ulong)*(uint *)(lVar2 + 0x18),
                         (AILODCHECLA->klass->vtable)._33_unknown.method);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static byte[] OOLPMIGFMKH(string AIGOBLJEBCA)  [RVA 0x32A4570]
// DBIJLEGANCE$$OOLPMIGFMKH @ RVA 0x32A4570

System_Byte_array * DBIJLEGANCE__OOLPMIGFMKH(System_String_o *AIGOBLJEBCA,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  System_Byte_array *pSVar2;
  
  if ((DAT_045673e1 & 1) == 0) {
    FUN_01bab630(&GCFMDIJNNBO_TypeInfo);
    DAT_045673e1 = 1;
  }
  pSVar1 = System_Text_Encoding__get_Unicode((MethodInfo *)0x0);
  if (pSVar1 != (System_Text_Encoding_o *)0x0) {
    pSVar2 = (System_Byte_array *)
             (*(pSVar1->klass->vtable)._19_GetBytes.methodPtr)
                       (pSVar1,AIGOBLJEBCA,(pSVar1->klass->vtable)._19_GetBytes.method);
    if ((GCFMDIJNNBO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GCFMDIJNNBO_TypeInfo);
    }
    pSVar2 = GCFMDIJNNBO__PBDHJGKDPML(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string CJBLFEPGPID(byte[] AIGOBLJEBCA)  [RVA 0x32A45F4]
// DBIJLEGANCE$$CJBLFEPGPID @ RVA 0x32A45F4

/* WARNING: Removing unreachable block (ram,0x033a4824) */
/* WARNING: Removing unreachable block (ram,0x033a4818) */
/* WARNING: Removing unreachable block (ram,0x033a482c) */

System_String_o * DBIJLEGANCE__CJBLFEPGPID(System_Byte_array *AIGOBLJEBCA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_IO_MemoryStream_o *__this;
  Ionic_Zlib_ZlibStream_o *__this_00;
  System_IO_StreamReader_o *__this_01;
  System_String_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *extraout_x1;
  System_IO_StreamReader_c *pSVar6;
  Ionic_Zlib_ZlibStream_c *pIVar7;
  System_IO_MemoryStream_c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045673e2 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&System_IO_StreamReader_TypeInfo);
    FUN_01bab630(&Ionic_Zlib_ZlibStream_TypeInfo);
    DAT_045673e2 = 1;
    method = extraout_x1;
  }
  __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo,method);
  System_IO_MemoryStream___ctor(__this,AIGOBLJEBCA,(MethodInfo *)0x0);
  __this_00 = (Ionic_Zlib_ZlibStream_o *)thunk_FUN_01bda818(Ionic_Zlib_ZlibStream_TypeInfo);
  Ionic_Zlib_ZlibStream___ctor(__this_00,(System_IO_Stream_o *)__this,1,(MethodInfo *)0x0);
  __this_01 = (System_IO_StreamReader_o *)thunk_FUN_01bda818(System_IO_StreamReader_TypeInfo);
  System_IO_StreamReader___ctor(__this_01,(System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
  if (__this_01 == (System_IO_StreamReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = (System_String_o *)
           (*(__this_01->klass->vtable)._12_ReadToEnd.methodPtr)
                     (__this_01,(__this_01->klass->vtable)._12_ReadToEnd.method);
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
        goto LAB_033a4724;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_033a4724:
  (*pVVar5->methodPtr)(__this_01,pVVar5->method);
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
          goto LAB_033a4788;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_033a4788:
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
          goto LAB_033a47ec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_033a47ec:
    (*pVVar5->methodPtr)(__this,pVVar5->method);
  }
  return pSVar4;
}


// ===== public static byte[] KEIDOJDOFNN(byte[] AIGOBLJEBCA)  [RVA 0x32A4A54]
// DBIJLEGANCE$$KEIDOJDOFNN @ RVA 0x32A4A54

/* WARNING: Removing unreachable block (ram,0x033a4cc8) */
/* WARNING: Removing unreachable block (ram,0x033a4cbc) */
/* WARNING: Removing unreachable block (ram,0x033a4ba0) */
/* WARNING: Removing unreachable block (ram,0x033a4c38) */
/* WARNING: Removing unreachable block (ram,0x033a4cd0) */

System_Byte_array * DBIJLEGANCE__KEIDOJDOFNN(System_Byte_array *AIGOBLJEBCA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_IO_MemoryStream_o *__this;
  Ionic_Zlib_ZlibStream_o *__this_00;
  System_IO_BinaryWriter_o *__this_01;
  VirtualInvokeData *pVVar4;
  System_Byte_array *pSVar5;
  MethodInfo *extraout_x1;
  System_IO_BinaryWriter_c *pSVar6;
  Ionic_Zlib_ZlibStream_c *pIVar7;
  System_IO_MemoryStream_c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045673e3 & 1) == 0) {
    FUN_01bab630(&System_IO_BinaryWriter_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&Ionic_Zlib_ZlibStream_TypeInfo);
    DAT_045673e3 = 1;
    method = extraout_x1;
  }
  __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo,method);
  System_IO_MemoryStream___ctor(__this,(MethodInfo *)0x0);
  __this_00 = (Ionic_Zlib_ZlibStream_o *)thunk_FUN_01bda818(Ionic_Zlib_ZlibStream_TypeInfo);
  Ionic_Zlib_ZlibStream___ctor(__this_00,(System_IO_Stream_o *)__this,0,(MethodInfo *)0x0);
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
        goto LAB_033a4b88;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_033a4b88:
  (*pVVar4->methodPtr)(__this_01,pVVar4->method);
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
          pVVar4 = &(pIVar7->vtable)._0_Equals + *piVar10;
          goto LAB_033a4bf8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_033a4bf8:
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
        goto LAB_033a4c90;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_033a4c90:
  (*pVVar4->methodPtr)(__this,pVVar4->method);
  return pSVar5;
}


// ===== public static string MPHDDHOPIJH(byte[] GGJDFLFMCAH)  [RVA 0x32A4EEC]
// DBIJLEGANCE$$MPHDDHOPIJH @ RVA 0x32A4EEC

System_String_o * DBIJLEGANCE__MPHDDHOPIJH(System_Byte_array *GGJDFLFMCAH,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Text_Encoding_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_045673e4 & 1) == 0) {
    FUN_01bab630(&GCFMDIJNNBO_TypeInfo);
    DAT_045673e4 = 1;
    method = extraout_x1;
  }
  if ((GCFMDIJNNBO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GCFMDIJNNBO_TypeInfo,method);
  }
  pSVar1 = GCFMDIJNNBO__LKOIJMPGNDA(GGJDFLFMCAH,(MethodInfo *)0x0);
  pSVar2 = System_Text_Encoding__get_Unicode((MethodInfo *)0x0);
  if (pSVar2 != (System_Text_Encoding_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033a4f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar3 = (System_String_o *)
             (*(pSVar2->klass->vtable)._37_GetString.methodPtr)
                       (pSVar2,pSVar1,(pSVar2->klass->vtable)._37_GetString.method);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

