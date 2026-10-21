// BHHMILDAFKI$$MGOHCPDBIBF @ RVA 0x321E350

/* WARNING: Removing unreachable block (ram,0x0331e6a4) */
/* WARNING: Removing unreachable block (ram,0x0331e5e8) */
/* WARNING: Removing unreachable block (ram,0x0331e61c) */
/* WARNING: Removing unreachable block (ram,0x0331e6b4) */

void BHHMILDAFKI__MGOHCPDBIBF
               (System_Collections_Generic_List_string__o *DIOCOHICNNI,System_String_o *CPIDPLFFOMA,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppObject *path;
  bool bVar3;
  BIACHHMPICI_o *__this;
  System_String_o *pSVar4;
  System_Byte_array *pSVar5;
  System_IO_MemoryStream_o *__this_00;
  Unity_IO_Compression_DeflateStream_o *__this_01;
  VirtualInvokeData *pVVar6;
  Unity_IO_Compression_DeflateStream_c *pUVar7;
  System_IO_MemoryStream_c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566f1e & 1) == 0) {
    FUN_01bab630(&BIACHHMPICI_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<string>__);
    FUN_01bab630(&Unity_IO_Compression_DeflateStream_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&System_IO_Path_TypeInfo);
    DAT_04566f1e = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  bVar3 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)DIOCOHICNNI,
                     Method_DJNBJHPDKDP_OBECCOPBADO<string>__);
  if (bVar3) {
    return;
  }
  __this = (BIACHHMPICI_o *)thunk_FUN_01bda818(BIACHHMPICI_TypeInfo);
  BIACHHMPICI___ctor(__this,(MethodInfo *)0x0);
  if (DIOCOHICNNI != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)DIOCOHICNNI,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          path = local_50.fields._current, bVar3) {
      if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = System_IO_Path__GetFileName((System_String_o *)path,(MethodInfo *)0x0);
      if (__this == (BIACHHMPICI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(pSVar4,pSVar4);
      }
      (*(__this->klass->vtable)._22_Write.methodPtr)
                (__this,pSVar4,(__this->klass->vtable)._22_Write.method);
      pSVar4 = NEHNBJKKABI__EPMKDIAJEOI((System_String_o *)path,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._22_Write.methodPtr)
                (__this,pSVar4,(__this->klass->vtable)._22_Write.method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    if (__this != (BIACHHMPICI_o *)0x0) {
      pSVar5 = BIACHHMPICI__LAHBJDPKIDN(__this,(MethodInfo *)0x0);
      __this_00 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
      System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0331e530 to 0341e6bf has its CatchHandler @ 0331e530
                       catch() { ... } // from try @ 0331e530 with catch @ 0331e530
                       catch() { ... } // from try @ 0331e74c with catch @ 0331e530
                       catch() { ... } // from try @ 0331e77c with catch @ 0331e530
                       catch() { ... } // from try @ 0331e7ac with catch @ 0331e530
                       catch() { ... } // from try @ 0331e7dc with catch @ 0331e530 */
      __this_01 = (Unity_IO_Compression_DeflateStream_o *)
                  thunk_FUN_01bda818(Unity_IO_Compression_DeflateStream_TypeInfo);
      Unity_IO_Compression_DeflateStream___ctor
                (__this_01,(System_IO_Stream_o *)__this_00,1,(MethodInfo *)0x0);
      if (pSVar5 == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (__this_01 == (Unity_IO_Compression_DeflateStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(__this_01->klass->vtable)._36_Write.methodPtr)
                (__this_01,pSVar5,0,(ulong)(uint)pSVar5->max_length,
                 (__this_01->klass->vtable)._36_Write.method);
      pUVar7 = __this_01->klass;
      uVar1._0_1_ = (pUVar7->_2).rank;
      uVar1._1_1_ = (pUVar7->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pUVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar6 = &(pUVar7->vtable)._0_Equals + *piVar10;
            goto LAB_0331e5d0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_0331e5d0:
      (*pVVar6->methodPtr)(__this_01,pVVar6->method);
      if (__this_00 == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar5 = (System_Byte_array *)
               (*(__this_00->klass->vtable)._42_ToArray.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._42_ToArray.method);
      NEHNBJKKABI__IGOPCLNJIGA(CPIDPLFFOMA,pSVar5,(MethodInfo *)0x0);
      pSVar8 = __this_00->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar6 = &(pSVar8->vtable)._0_Equals + *piVar10;
            goto LAB_0331e678;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_0331e678:
      (*pVVar6->methodPtr)(__this_00,pVVar6->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

