// IBMPAMLCCHF$$FGOKOOFPFMC @ RVA 0x32EB3F4

/* WARNING: Removing unreachable block (ram,0x033eb5bc) */
/* WARNING: Removing unreachable block (ram,0x033eb5d0) */

System_Byte_array *
IBMPAMLCCHF__FGOKOOFPFMC
          (System_Byte_array *OCMMDIHLKMH,
          System_Security_Cryptography_ICryptoTransform_o *GDDNCGHPCEM,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_IO_MemoryStream_o *__this;
  System_Security_Cryptography_CryptoStream_o *__this_00;
  System_Byte_array *pSVar3;
  VirtualInvokeData *pVVar4;
  System_Security_Cryptography_CryptoStream_c *pSVar5;
  System_IO_MemoryStream_c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_0456763f & 1) == 0) {
    FUN_01bab630(&System_Security_Cryptography_CryptoStream_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    DAT_0456763f = 1;
  }
  __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this,(MethodInfo *)0x0);
  __this_00 = (System_Security_Cryptography_CryptoStream_o *)
              thunk_FUN_01bda818(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor
            (__this_00,(System_IO_Stream_o *)__this,GDDNCGHPCEM,1,(MethodInfo *)0x0);
  if (OCMMDIHLKMH == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (__this_00 == (System_Security_Cryptography_CryptoStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(__this_00->klass->vtable)._36_Write.methodPtr)
            (__this_00,OCMMDIHLKMH,0,(ulong)(uint)OCMMDIHLKMH->max_length,
             (__this_00->klass->vtable)._36_Write.method);
  System_Security_Cryptography_CryptoStream__FlushFinalBlock(__this_00,(MethodInfo *)0x0);
  if (__this == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar3 = (System_Byte_array *)
           (*(__this->klass->vtable)._42_ToArray.methodPtr)
                     (__this,(__this->klass->vtable)._42_ToArray.method);
  pSVar5 = __this_00->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar4 = &(pSVar5->vtable)._0_Equals + *piVar8;
        goto LAB_033eb530;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_033eb530:
  (*pVVar4->methodPtr)(__this_00,pVVar4->method);
  if (__this != (System_IO_MemoryStream_o *)0x0) {
    pSVar6 = __this->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar4 = &(pSVar6->vtable)._0_Equals + *piVar8;
          goto LAB_033eb594;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_033eb594:
    (*pVVar4->methodPtr)(__this,pVVar4->method);
  }
  return pSVar3;
}

