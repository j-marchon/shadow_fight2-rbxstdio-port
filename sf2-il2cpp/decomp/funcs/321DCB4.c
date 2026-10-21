// BHHMILDAFKI$$AGBMPFBJBGM @ RVA 0x321DCB4

/* WARNING: Removing unreachable block (ram,0x0331e064) */
/* WARNING: Removing unreachable block (ram,0x0331e06c) */
/* WARNING: Removing unreachable block (ram,0x0331e054) */
/* WARNING: Removing unreachable block (ram,0x0331e07c) */

void BHHMILDAFKI__AGBMPFBJBGM
               (System_String_o *JGHIJMJNJLE,System_String_o *IBOAKONNBMM,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  System_Byte_array *buffer;
  System_IO_MemoryStream_o *__this;
  System_IO_MemoryStream_o *__this_00;
  Unity_IO_Compression_DeflateStream_o *__this_01;
  long lVar7;
  System_IO_StreamReader_o *__this_02;
  System_String_o *pSVar8;
  System_String_o *CJNHFNHJHPE;
  VirtualInvokeData *pVVar9;
  System_IO_StreamReader_c *pSVar10;
  Unity_IO_Compression_DeflateStream_c *pUVar11;
  System_IO_MemoryStream_c *pSVar12;
  ulong uVar13;
  int32_t *piVar14;
  
  if ((DAT_04566f1d & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Unity_IO_Compression_DeflateStream_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&System_IO_StreamReader_TypeInfo);
    DAT_04566f1d = 1;
  }
  buffer = NEHNBJKKABI__BELGEBDABEH(JGHIJMJNJLE,(MethodInfo *)0x0);
  __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this,buffer,(MethodInfo *)0x0);
  __this_00 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (Unity_IO_Compression_DeflateStream_o *)
              thunk_FUN_01bda818(Unity_IO_Compression_DeflateStream_TypeInfo);
  Unity_IO_Compression_DeflateStream___ctor
            (__this_01,(System_IO_Stream_o *)__this,0,(MethodInfo *)0x0);
  lVar7 = FUN_01bab718(byte___TypeInfo,0x800);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (__this_01 == (Unity_IO_Compression_DeflateStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  while( true ) {
    uVar6 = (*(__this_01->klass->vtable)._33_Read.methodPtr)
                      (__this_01,lVar7,0,(ulong)*(uint *)(lVar7 + 0x18),
                       (__this_01->klass->vtable)._33_Read.method);
    if ((int)uVar6 < 1) break;
    if (__this_00 == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(__this_00->klass->vtable)._36_Write.methodPtr)
              (__this_00,lVar7,0,(ulong)uVar6,(__this_00->klass->vtable)._36_Write.method);
  }
  if (__this_00 == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0331de14 to 0341df53 has its CatchHandler @ 0331de14
                       catch() { ... } // from try @ 0331de14 with catch @ 0331de14
                       catch() { ... } // from try @ 0331df7c with catch @ 0331de14
                       catch() { ... } // from try @ 0331e000 with catch @ 0331de14
                       catch() { ... } // from try @ 0331e02c with catch @ 0331de14
                       catch() { ... } // from try @ 0331e06c with catch @ 0331de14 */
  (*(__this_00->klass->vtable)._13_set_Position.methodPtr)
            (__this_00,0,(__this_00->klass->vtable)._13_set_Position.method);
  __this_02 = (System_IO_StreamReader_o *)thunk_FUN_01bda818(System_IO_StreamReader_TypeInfo);
  System_IO_StreamReader___ctor(__this_02,(System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
  if (__this_02 == (System_IO_StreamReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0331e078 to 0341e07f has its CatchHandler @ 0331e080 */
    FUN_01bab8c8();
  }
  while( true ) {
    pSVar8 = (System_String_o *)
             (*(__this_02->klass->vtable)._13_ReadLine.methodPtr)
                       (__this_02,(__this_02->klass->vtable)._13_ReadLine.method);
    bVar5 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar8,(MethodInfo *)0x0);
    if (bVar5) break;
    CJNHFNHJHPE = (System_String_o *)
                  (*(__this_02->klass->vtable)._13_ReadLine.methodPtr)
                            (__this_02,(__this_02->klass->vtable)._13_ReadLine.method);
    bVar5 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (bVar5) break;
    pSVar8 = System_String__Concat(IBOAKONNBMM,pSVar8,(MethodInfo *)0x0);
    NEHNBJKKABI__GPNPELOHJCJ(pSVar8,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pSVar10 = __this_02->klass;
  uVar1._0_1_ = (pSVar10->_2).rank;
  uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
  uVar13 = (ulong)uVar1;
  if (uVar13 != 0) {
    piVar14 = &((pSVar10->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar9 = &(pSVar10->vtable)._0_Equals + *piVar14;
        goto LAB_0331defc;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  pVVar9 = (VirtualInvokeData *)FUN_01b81914(__this_02,System_IDisposable_TypeInfo,0);
LAB_0331defc:
  (*pVVar9->methodPtr)(__this_02,pVVar9->method);
  if (__this_01 != (Unity_IO_Compression_DeflateStream_o *)0x0) {
    pUVar11 = __this_01->klass;
    uVar2._0_1_ = (pUVar11->_2).rank;
    uVar2._1_1_ = (pUVar11->_2).minimumAlignment;
    uVar13 = (ulong)uVar2;
    if (uVar13 != 0) {
      piVar14 = &((pUVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
                    /* try { // try from 0331df54 to 0341df5b has its CatchHandler @ 0331e010 */
          pVVar9 = &(pUVar11->vtable)._0_Equals + *piVar14;
          goto LAB_0331df60;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_0331df60:
    (*pVVar9->methodPtr)(__this_01,pVVar9->method);
  }
                    /* try { // try from 0331df70 to 0341df7b has its CatchHandler @ 0331e00c */
  if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
    pSVar12 = __this_00->klass;
    uVar3._0_1_ = (pSVar12->_2).rank;
    uVar3._1_1_ = (pSVar12->_2).minimumAlignment;
                    /* try { // try from 0331df7c to 0341dff7 has its CatchHandler @ 0331de14 */
    uVar13 = (ulong)uVar3;
    if (uVar13 != 0) {
      piVar14 = &((pSVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar9 = &(pSVar12->vtable)._0_Equals + *piVar14;
          goto LAB_0331dfc4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_0331dfc4:
    (*pVVar9->methodPtr)(__this_00,pVVar9->method);
  }
  if (__this != (System_IO_MemoryStream_o *)0x0) {
    pSVar12 = __this->klass;
    uVar4._0_1_ = (pSVar12->_2).rank;
    uVar4._1_1_ = (pSVar12->_2).minimumAlignment;
    uVar13 = (ulong)uVar4;
    if (uVar13 != 0) {
      piVar14 = &((pSVar12->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 0331dff8 to 0341dffb has its CatchHandler @ 0331e008 */
                    /* try { // try from 0331dffc to 0341dfff has its CatchHandler @ 0331e004 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar9 = &(pSVar12->vtable)._0_Equals + *piVar14;
          goto LAB_0331e028;
        }
                    /* try { // try from 0331e000 to 0341e027 has its CatchHandler @ 0331de14 */
        uVar13 = uVar13 - 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331dffc with catch @ 0331e004
                        */
        piVar14 = piVar14 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331dff8 with catch @ 0331e008
                        */
      } while (uVar13 != 0);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331df70 with catch @ 0331e00c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331df54 with catch @ 0331e010
                        */
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_0331e028:
                    /* try { // try from 0331e028 to 0341e02b has its CatchHandler @ 0331e054 */
                    /* try { // try from 0331e02c to 0341e063 has its CatchHandler @ 0331de14 */
    (*pVVar9->methodPtr)(__this,pVVar9->method);
  }
  return;
}

