// IOIKBGAJIGO$$MFLNKDNPLKJ @ RVA 0x337618C

/* WARNING: Removing unreachable block (ram,0x03476404) */
/* WARNING: Removing unreachable block (ram,0x034764a8) */
/* WARNING: Removing unreachable block (ram,0x0347647c) */
/* WARNING: Removing unreachable block (ram,0x03476658) */

void IOIKBGAJIGO__MFLNKDNPLKJ
               (int32_t DFIBGGDJPLM,System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,
               int32_t GOLKDPJDOJM,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Byte_array *pSVar5;
  System_IO_MemoryStream_o *__this;
  System_IO_BinaryReader_o *__this_00;
  long *plVar6;
  long lVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_IO_BinaryReader_c *pSVar10;
  System_IO_MemoryStream_c *pSVar11;
  ulong uVar12;
  int32_t *piVar13;
  int iVar14;
  
  method_01 = (MethodInfo *)(ulong)(uint)GOLKDPJDOJM;
  method_00 = (MethodInfo *)DDGBMJNBFPF;
  if ((DAT_04567b49 & 1) == 0) {
    FUN_01bab630(&System_IO_BinaryReader_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_GC_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&StringLiteral_12817);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567b49 = 1;
  }
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(IIDPDAKKFFN,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_1;
  if (!bVar3) {
    pSVar4 = IIDPDAKKFFN;
  }
  if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IOIKBGAJIGO_TypeInfo);
  }
  if (DDGBMJNBFPF == (System_String_o *)0x0) {
    pSVar4 = IOIKBGAJIGO__PIPGAPGKBLM
                       (pSVar4,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,method_00);
  }
  else {
    method_00 = (MethodInfo *)0x0;
    pSVar4 = IOIKBGAJIGO__PIPGAPGKBLM
                       (pSVar4,DDGBMJNBFPF,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,method_01
                       );
  }
  if (0 < DFIBGGDJPLM) {
    iVar14 = 0;
    do {
      pSVar5 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar4,(MethodInfo *)0x0);
      if (GOLKDPJDOJM < 1) {
        return;
      }
      if ((pSVar5 == (System_Byte_array *)0x0) || (pSVar5->max_length == 0)) {
        pSVar4 = System_String__Concat(StringLiteral_12817,pSVar4,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
        return;
      }
      if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = IOIKBGAJIGO__ABNDLGMOFKJ
                         (pSVar5,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,method_00);
      if (GOLKDPJDOJM < 2) {
        return;
      }
      __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
      System_IO_MemoryStream___ctor(__this,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 03476308 to 0357632f has its CatchHandler @ 03476438 */
      __this_00 = (System_IO_BinaryReader_o *)thunk_FUN_01bda818(System_IO_BinaryReader_TypeInfo);
      method_00 = (MethodInfo *)0x0;
      System_IO_BinaryReader___ctor(__this_00,(System_IO_Stream_o *)__this,(MethodInfo *)0x0);
      if (__this_00 == (System_IO_BinaryReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034764a0 to 035764c7 has its CatchHandler @ 034764dc */
        FUN_01bab8c8();
      }
      while( true ) {
        plVar6 = (long *)(*(__this_00->klass->vtable)._5_get_BaseStream.methodPtr)
                                   (__this_00,(__this_00->klass->vtable)._5_get_BaseStream.method);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        lVar7 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
        plVar6 = (long *)(*(__this_00->klass->vtable)._5_get_BaseStream.methodPtr)
                                   (__this_00,(__this_00->klass->vtable)._5_get_BaseStream.method);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 03476364 to 0357638f has its CatchHandler @ 03476434 */
        lVar8 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
        if (lVar7 == lVar8) break;
        (*(__this_00->klass->vtable)._10_ReadByte.methodPtr)
                  (__this_00,(__this_00->klass->vtable)._10_ReadByte.method);
      }
                    /* try { // try from 03476390 to 03576397 has its CatchHandler @ 03476430 */
      if (__this_00 != (System_IO_BinaryReader_o *)0x0) {
        pSVar10 = __this_00->klass;
        uVar1._0_1_ = (pSVar10->_2).rank;
        uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
                    /* try { // try from 03476398 to 0357641f has its CatchHandler @ 034760d0 */
        uVar12 = (ulong)uVar1;
        if (uVar12 != 0) {
          piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                (Il2CppClass *)System_IDisposable_TypeInfo) {
              pVVar9 = &(pSVar10->vtable)._0_Equals + *piVar13;
              goto LAB_034763e8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        method_00 = (MethodInfo *)0x0;
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(__this_00);
LAB_034763e8:
        (*pVVar9->methodPtr)(__this_00,pVVar9->method);
      }
      if (__this != (System_IO_MemoryStream_o *)0x0) {
        pSVar11 = __this->klass;
        uVar2._0_1_ = (pSVar11->_2).rank;
        uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
        uVar12 = (ulong)uVar2;
                    /* try { // try from 03476420 to 03576423 has its CatchHandler @ 0347642c */
                    /* try { // try from 03476424 to 0357644f has its CatchHandler @ 034760d0 */
        if (uVar12 != 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03476420 with catch @ 0347642c
                        */
          piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
          do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03476390 with catch @ 03476430
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03476364 with catch @ 03476434
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03476308 with catch @ 03476438
                        */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                (Il2CppClass *)System_IDisposable_TypeInfo) {
                    /* catch() { ... } // from try @ 03476450 with catch @ 03476460 */
              pVVar9 = &(pSVar11->vtable)._0_Equals + *piVar13;
              goto LAB_03476464;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        method_00 = (MethodInfo *)0x0;
                    /* try { // try from 03476450 to 03576453 has its CatchHandler @ 03476460 */
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(__this);
LAB_03476464:
        (*pVVar9->methodPtr)(__this,pVVar9->method);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != DFIBGGDJPLM);
  }
  if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  System_GC__Collect((MethodInfo *)0x0);
  return;
}

