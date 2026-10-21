// KJFHBENFBBO$$BKCFPHNEONL @ RVA 0x3557D84

/* WARNING: Removing unreachable block (ram,0x036580a0) */
/* WARNING: Removing unreachable block (ram,0x036580b0) */

void KJFHBENFBBO__BKCFPHNEONL
               (KJFHBENFBBO_o *__this,System_Byte_array *NLKOFFFAFHM,int32_t MLHLNOPOCDG,
               System_String_o *IELJFIKHNIE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD;
  System_Collections_Generic_List_string__o *KJIFJFDCBOH;
  System_IO_MemoryStream_o *__this_00;
  System_IO_BinaryReader_o *__this_01;
  long *plVar3;
  long lVar4;
  long lVar5;
  System_String_o *message;
  VirtualInvokeData *pVVar6;
  MethodInfo *method_00;
  MethodInfo *in_x6;
  System_IO_BinaryReader_c *pSVar7;
  System_IO_MemoryStream_c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04568b7c & 1) == 0) {
    FUN_01bab630(&System_IO_BinaryReader_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&KJFHBENFBBO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&StringLiteral_20240);
    DAT_04568b7c = 1;
  }
  if (NLKOFFFAFHM == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (int)NLKOFFFAFHM->max_length) {
    ELAGKBMJCOD = (System_Collections_Generic_List_ECENNHNBAME__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
               Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    KJIFJFDCBOH = (System_Collections_Generic_List_string__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)KJIFJFDCBOH,
               Method_System_Collections_Generic_List<string>__ctor__);
    __this_00 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(__this_00,NLKOFFFAFHM,(MethodInfo *)0x0);
    __this_01 = (System_IO_BinaryReader_o *)thunk_FUN_01bda818(System_IO_BinaryReader_TypeInfo);
    method_00 = (MethodInfo *)0x0;
    System_IO_BinaryReader___ctor(__this_01,(System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
    if ((KJFHBENFBBO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    KJFHBENFBBO__KBOKKKALJIN(__this_01,ELAGKBMJCOD,method_00);
    KJFHBENFBBO__LFEHAPCICEA(__this_01,KJIFJFDCBOH,method_00);
    KJFHBENFBBO__JDIHDLBGDPP(__this,__this_01,ELAGKBMJCOD,KJIFJFDCBOH,MLHLNOPOCDG,IELJFIKHNIE,in_x6)
    ;
    if (__this_01 == (System_IO_BinaryReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar3 = (long *)(*(__this_01->klass->vtable)._5_get_BaseStream.methodPtr)
                               (__this_01,(__this_01->klass->vtable)._5_get_BaseStream.method);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar4 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
    plVar3 = (long *)(*(__this_01->klass->vtable)._5_get_BaseStream.methodPtr)
                               (__this_01,(__this_01->klass->vtable)._5_get_BaseStream.method);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar5 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
    if (lVar4 != lVar5) {
      message = System_String__Concat(StringLiteral_20240,IELJFIKHNIE,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    }
    pSVar7 = __this_01->klass;
    uVar1._0_1_ = (pSVar7->_2).rank;
    uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar6 = &(pSVar7->vtable)._0_Equals + *piVar10;
          goto LAB_0365800c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_0365800c:
    (*pVVar6->methodPtr)(__this_01,pVVar6->method);
    if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
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
            goto LAB_03658070;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_03658070:
      (*pVVar6->methodPtr)(__this_00,pVVar6->method);
    }
  }
  return;
}

