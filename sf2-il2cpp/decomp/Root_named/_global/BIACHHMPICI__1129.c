// TypeDefIndex 1129
// Namespace: 
// public class BIACHHMPICI : BinaryWriter
// Fields:
//   private Encoding CFKLCHJHBFB; // 0x48

// ===== public override void Write(string CJNHFNHJHPE)  [RVA 0x30F5698]
// BIACHHMPICI$$Write @ RVA 0x30F5698

void BIACHHMPICI__Write(BIACHHMPICI_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined8 uVar2;
  System_Text_Encoding_o *pSVar3;
  
  if ((DAT_0456644d & 1) == 0) {
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456644d = 1;
  }
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    pSVar1 = System_String__Replace(CJNHFNHJHPE,StringLiteral_47/*"\n"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).CFKLCHJHBFB;
    pSVar1 = System_String__Concat(pSVar1,StringLiteral_47/*"\n"*/,(MethodInfo *)0x0);
    if (pSVar3 != (System_Text_Encoding_o *)0x0) {
      uVar2 = (*(pSVar3->klass->vtable)._19_GetBytes.methodPtr)
                        (pSVar3,pSVar1,(pSVar3->klass->vtable)._19_GetBytes.method);
                    /* WARNING: Could not recover jumptable at 0x031f5740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._10_Write.methodPtr)
                (__this,uVar2,(__this->klass->vtable)._10_Write.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30F5748]
// BIACHHMPICI$$.ctor @ RVA 0x30F5748

void BIACHHMPICI___ctor(BIACHHMPICI_o *__this,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  System_IO_MemoryStream_o *__this_00;
  
  if ((DAT_0456644e & 1) == 0) {
    FUN_01bab630(&System_IO_BinaryWriter_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    DAT_0456644e = 1;
  }
  pSVar1 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  (__this->fields).CFKLCHJHBFB = pSVar1;
  thunk_FUN_01c20e04();
  __this_00 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  if ((System_IO_BinaryWriter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  System_IO_BinaryWriter___ctor
            ((System_IO_BinaryWriter_o *)__this,(System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// ===== public byte[] LAHBJDPKIDN()  [RVA 0x30F57EC]
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

