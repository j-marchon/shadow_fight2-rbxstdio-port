// AFDHGAMMHEC$$PKFOJKHFKKL @ RVA 0x31E2DA8

/* WARNING: Removing unreachable block (ram,0x032e2fd0) */
/* WARNING: Removing unreachable block (ram,0x032e2fe0) */

System_String_o *
AFDHGAMMHEC__PKFOJKHFKKL(AFDHGAMMHEC_o *__this,System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_IO_MemoryStream_o *__this_01;
  System_IO_StreamReader_o *__this_02;
  long *plVar4;
  System_String_o *pSVar5;
  VirtualInvokeData *pVVar6;
  System_IO_StreamReader_c *pSVar7;
  System_IO_MemoryStream_c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  Ionic_Zip_ZipEntry_o *local_38;
  
  if ((DAT_04566d51 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ZipEntry>_TryGetValue__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&System_IO_StreamReader_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566d51 = 1;
  }
  pSVar5 = StringLiteral_1;
  local_38 = (Ionic_Zip_ZipEntry_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).LLNLJDIGKDA;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar3 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                    (__this_00,(Il2CppObject *)HEEJOJAGIKC,(Il2CppObject **)&local_38,
                     Method_System_Collections_Generic_Dictionary<string,_ZipEntry>_TryGetValue__);
  if (bVar3) {
    __this_01 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(__this_01,(MethodInfo *)0x0);
    if (local_38 == (Ionic_Zip_ZipEntry_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Ionic_Zip_ZipEntry__Extract(local_38,(System_IO_Stream_o *)__this_01,(MethodInfo *)0x0);
    __this_02 = (System_IO_StreamReader_o *)thunk_FUN_01bda818(System_IO_StreamReader_TypeInfo);
    System_IO_StreamReader___ctor(__this_02,(System_IO_Stream_o *)__this_01,(MethodInfo *)0x0);
    if (__this_02 == (System_IO_StreamReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar4 = (long *)(*(__this_02->klass->vtable)._15_get_BaseStream.methodPtr)
                               (__this_02,(__this_02->klass->vtable)._15_get_BaseStream.method);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (**(code **)(*plVar4 + 0x328))(plVar4,0,0,*(undefined8 *)(*plVar4 + 0x330));
    pSVar5 = (System_String_o *)
             (*(__this_02->klass->vtable)._12_ReadToEnd.methodPtr)
                       (__this_02,(__this_02->klass->vtable)._12_ReadToEnd.method);
    pSVar7 = __this_02->klass;
    uVar1._0_1_ = (pSVar7->_2).rank;
    uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar6 = &(pSVar7->vtable)._0_Equals + *piVar10;
          goto LAB_032e2f34;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(__this_02,System_IDisposable_TypeInfo,0);
LAB_032e2f34:
    (*pVVar6->methodPtr)(__this_02,pVVar6->method);
    if (__this_01 != (System_IO_MemoryStream_o *)0x0) {
      pSVar8 = __this_01->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar6 = &(pSVar8->vtable)._0_Equals + *piVar10;
            goto LAB_032e2fa0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_032e2fa0:
      (*pVVar6->methodPtr)(__this_01,pVVar6->method);
    }
  }
  return pSVar5;
}

