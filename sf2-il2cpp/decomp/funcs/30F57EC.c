// BIACHHMPICI$$LAHBJDPKIDN @ RVA 0x30F57EC

/* WARNING: Removing unreachable block (ram,0x031f59b0) */

System_Byte_array * BIACHHMPICI__LAHBJDPKIDN(BIACHHMPICI_o *__this,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  System_IO_MemoryStream_o *__this_00;
  long *plVar4;
  System_Byte_array *pSVar5;
  VirtualInvokeData *pVVar6;
  System_IO_MemoryStream_c *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  
  if ((DAT_0456644f & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    DAT_0456644f = 1;
  }
  lVar3 = FUN_01bab718(byte___TypeInfo,0x4000);
  __this_00 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  plVar4 = (long *)(*(__this->klass->vtable)._6_get_BaseStream.methodPtr)
                             (__this,(__this->klass->vtable)._6_get_BaseStream.method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (**(code **)(*plVar4 + 0x208))(plVar4,0,*(undefined8 *)(*plVar4 + 0x210));
  while( true ) {
    plVar4 = (long *)(*(__this->klass->vtable)._6_get_BaseStream.methodPtr)
                               (__this,(__this->klass->vtable)._6_get_BaseStream.method);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (**(code **)(*plVar4 + 0x348))
                      (plVar4,lVar3,0,*(undefined4 *)(lVar3 + 0x18),*(undefined8 *)(*plVar4 + 0x350)
                      );
    if ((int)uVar2 < 1) break;
    if (__this_00 == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(__this_00->klass->vtable)._36_Write.methodPtr)
              (__this_00,lVar3,0,(ulong)uVar2,(__this_00->klass->vtable)._36_Write.method);
  }
  if (__this_00 == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(__this_00->klass->vtable)._21_Flush.methodPtr)
            (__this_00,(__this_00->klass->vtable)._21_Flush.method);
  pSVar5 = (System_Byte_array *)
           (*(__this_00->klass->vtable)._42_ToArray.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._42_ToArray.method);
  pSVar7 = __this_00->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar6 = &(pSVar7->vtable)._0_Equals + *piVar9;
        goto LAB_031f5980;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_031f5980:
  (*pVVar6->methodPtr)(__this_00,pVVar6->method);
  return pSVar5;
}

