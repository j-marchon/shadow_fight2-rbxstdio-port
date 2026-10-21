// IOIKBGAJIGO$$AEJJGGKAHBN @ RVA 0x33766F4

/* WARNING: Removing unreachable block (ram,0x03476f70) */
/* WARNING: Removing unreachable block (ram,0x03476f38) */
/* WARNING: Removing unreachable block (ram,0x03476f64) */
/* WARNING: Removing unreachable block (ram,0x03476c14) */
/* WARNING: Removing unreachable block (ram,0x03476b7c) */
/* WARNING: Removing unreachable block (ram,0x03476bf8) */
/* WARNING: Removing unreachable block (ram,0x03476ed8) */
/* WARNING: Removing unreachable block (ram,0x03476df4) */
/* WARNING: Removing unreachable block (ram,0x03476e6c) */
/* WARNING: Removing unreachable block (ram,0x03476eac) */

void IOIKBGAJIGO__AEJJGGKAHBN(System_String_o *IFDOANCFKJD,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  System_String_o *pSVar8;
  System_Byte_array *pSVar9;
  System_IO_MemoryStream_o *__this;
  System_IO_BinaryReader_o *__this_00;
  long *plVar10;
  long lVar11;
  long lVar12;
  System_IO_MemoryStream_o *__this_01;
  System_IO_BinaryReader_o *__this_02;
  ECENNHNBAME_o *NLEBDPHNIDI;
  KOGMOACEOAM_o *pKVar13;
  KJFHBENFBBO_o *__this_03;
  VirtualInvokeData *pVVar14;
  System_String_o *pSVar15;
  MethodInfo *in_x2;
  Il2CppMethodPointer pIVar16;
  System_IO_MemoryStream_c *pSVar17;
  System_IO_BinaryReader_c *pSVar18;
  ulong uVar19;
  int32_t *piVar20;
  
  if ((DAT_04567b4b & 1) == 0) {
    FUN_01bab630(&System_IO_BinaryReader_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_GC_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&KJFHBENFBBO_TypeInfo);
    FUN_01bab630(&KOGMOACEOAM_TypeInfo);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    FUN_01bab630(&StringLiteral_17650);
    FUN_01bab630(&StringLiteral_12816);
    DAT_04567b4b = 1;
  }
  bVar5 = PCOEHCPGBBG__BDLEIEHBFAD(IFDOANCFKJD,(MethodInfo *)0x0);
  pSVar15 = StringLiteral_17650;
  if (!bVar5) {
    pSVar15 = IFDOANCFKJD;
  }
  if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IOIKBGAJIGO_TypeInfo);
  }
  pSVar8 = IOIKBGAJIGO__PIPGAPGKBLM(pSVar15,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,in_x2);
  pSVar9 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar8,(MethodInfo *)0x0);
  if ((pSVar9 == (System_Byte_array *)0x0) || (pSVar9->max_length == 0)) {
    pSVar15 = System_String__Concat(StringLiteral_12816,pSVar8,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
    return;
  }
  if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar9 = IOIKBGAJIGO__ABNDLGMOFKJ(pSVar9,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,in_x2);
  __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this,pSVar9,(MethodInfo *)0x0);
  __this_00 = (System_IO_BinaryReader_o *)thunk_FUN_01bda818(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(__this_00,(System_IO_Stream_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (System_IO_BinaryReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  while( true ) {
    plVar10 = (long *)(*(__this_00->klass->vtable)._5_get_BaseStream.methodPtr)
                                (__this_00,(__this_00->klass->vtable)._5_get_BaseStream.method);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar11 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200));
    plVar10 = (long *)(*(__this_00->klass->vtable)._5_get_BaseStream.methodPtr)
                                (__this_00,(__this_00->klass->vtable)._5_get_BaseStream.method);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar12 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
    if (lVar12 <= lVar11) break;
    iVar6 = (*(__this_00->klass->vtable)._16_ReadUInt32.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._16_ReadUInt32.method);
    if ((KJFHBENFBBO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = KJFHBENFBBO__IIADICPGOMI(__this_00,(MethodInfo *)0x0);
    pIVar16 = (__this_00->klass->vtable)._16_ReadUInt32.methodPtr;
    if (iVar6 == 7) {
      uVar7 = (*pIVar16)(__this_00);
      if (uVar7 != 0) {
        pSVar9 = (System_Byte_array *)
                 (*(__this_00->klass->vtable)._25_ReadBytes.methodPtr)
                           (__this_00,(ulong)uVar7,(__this_00->klass->vtable)._25_ReadBytes.method);
        __this_01 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
        System_IO_MemoryStream___ctor(__this_01,pSVar9,(MethodInfo *)0x0);
        __this_02 = (System_IO_BinaryReader_o *)thunk_FUN_01bda818(System_IO_BinaryReader_TypeInfo);
        System_IO_BinaryReader___ctor(__this_02,(System_IO_Stream_o *)__this_01,(MethodInfo *)0x0);
        if (__this_02 == (System_IO_BinaryReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar7 = (*(__this_02->klass->vtable)._16_ReadUInt32.methodPtr)
                          (__this_02,(__this_02->klass->vtable)._16_ReadUInt32.method);
        if (uVar7 == 0) {
LAB_03476b0c:
          pSVar18 = __this_02->klass;
          uVar1._0_1_ = (pSVar18->_2).rank;
          uVar1._1_1_ = (pSVar18->_2).minimumAlignment;
          uVar19 = (ulong)uVar1;
          if (uVar19 != 0) {
            piVar20 = &((pSVar18->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
                  (Il2CppClass *)System_IDisposable_TypeInfo) {
                pVVar14 = &(pSVar18->vtable)._0_Equals + *piVar20;
                goto LAB_03476b60;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          pVVar14 = (VirtualInvokeData *)FUN_01b81914(__this_02,System_IDisposable_TypeInfo,0);
LAB_03476b60:
          (*pVVar14->methodPtr)(__this_02,pVVar14->method);
        }
        else {
          iVar6 = 1;
          do {
            if ((KJFHBENFBBO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar8 = KJFHBENFBBO__IIADICPGOMI(__this_02,(MethodInfo *)0x0);
            if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            NLEBDPHNIDI = LDHBHPILNMA__CCBEONOLBID(pSVar8,true,(MethodInfo *)0x0);
            if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
              pKVar13 = (KOGMOACEOAM_o *)thunk_FUN_01bda818(KOGMOACEOAM_TypeInfo);
              KOGMOACEOAM___ctor(pKVar13,(MethodInfo *)0x0);
              if (pKVar13 == (KOGMOACEOAM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              KOGMOACEOAM__ICNKLIDJEBG(pKVar13,(ECENNHNBAME_o *)0x0,__this_02,(MethodInfo *)0x0);
            }
            else {
              pKVar13 = (NLEBDPHNIDI->fields).BEHFDAIGOAJ;
              if (pKVar13 == (KOGMOACEOAM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              KOGMOACEOAM__ICNKLIDJEBG(pKVar13,NLEBDPHNIDI,__this_02,(MethodInfo *)0x0);
            }
            lVar11 = (long)iVar6;
            iVar6 = iVar6 + 1;
          } while (lVar11 < (long)(ulong)uVar7);
          if (__this_02 != (System_IO_BinaryReader_o *)0x0) goto LAB_03476b0c;
        }
        if (__this_01 != (System_IO_MemoryStream_o *)0x0) {
          pSVar17 = __this_01->klass;
          uVar2._0_1_ = (pSVar17->_2).rank;
          uVar2._1_1_ = (pSVar17->_2).minimumAlignment;
          uVar19 = (ulong)uVar2;
          if (uVar19 != 0) {
            piVar20 = &((pSVar17->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
                  (Il2CppClass *)System_IDisposable_TypeInfo) {
                pVVar14 = &(pSVar17->vtable)._0_Equals + *piVar20;
                goto LAB_03476bdc;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          pVVar14 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_03476bdc:
          (*pVVar14->methodPtr)(__this_01,pVVar14->method);
        }
      }
    }
    else {
      uVar7 = (*pIVar16)(__this_00,(__this_00->klass->vtable)._16_ReadUInt32.method);
      if (uVar7 != 0) {
        pSVar9 = (System_Byte_array *)
                 (*(__this_00->klass->vtable)._25_ReadBytes.methodPtr)
                           (__this_00,(ulong)uVar7,(__this_00->klass->vtable)._25_ReadBytes.method);
        __this_03 = (KJFHBENFBBO_o *)thunk_FUN_01bda818(KJFHBENFBBO_TypeInfo);
        KJFHBENFBBO___ctor(__this_03,(MethodInfo *)0x0);
        if (__this_03 == (KJFHBENFBBO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        KJFHBENFBBO__BKCFPHNEONL(__this_03,pSVar9,iVar6,pSVar15,(MethodInfo *)0x0);
        if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        OCMLPCKBHPN__EGJMBCFCADF(__this_03,pSVar8,pSVar8,iVar6,(MethodInfo *)0x0);
      }
    }
  }
  pSVar18 = __this_00->klass;
  uVar3._0_1_ = (pSVar18->_2).rank;
  uVar3._1_1_ = (pSVar18->_2).minimumAlignment;
  uVar19 = (ulong)uVar3;
  if (uVar19 != 0) {
    piVar20 = &((pSVar18->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar14 = &(pSVar18->vtable)._0_Equals + *piVar20;
        goto LAB_03476ddc;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  pVVar14 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_03476ddc:
  (*pVVar14->methodPtr)(__this_00,pVVar14->method);
  if (__this != (System_IO_MemoryStream_o *)0x0) {
    pSVar17 = __this->klass;
    uVar4._0_1_ = (pSVar17->_2).rank;
    uVar4._1_1_ = (pSVar17->_2).minimumAlignment;
    uVar19 = (ulong)uVar4;
    if (uVar19 != 0) {
      piVar20 = &((pSVar17->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar14 = &(pSVar17->vtable)._0_Equals + *piVar20;
          goto LAB_03476e54;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    pVVar14 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_03476e54:
    (*pVVar14->methodPtr)(__this,pVVar14->method);
  }
  if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  System_GC__Collect((MethodInfo *)0x0);
  return;
}

