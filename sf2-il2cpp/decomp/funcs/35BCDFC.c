// LCAOAAFEOAG$$PMAJPCDADCA @ RVA 0x35BCDFC

/* WARNING: Removing unreachable block (ram,0x036bd2a8) */

void LCAOAAFEOAG__PMAJPCDADCA(LCAOAAFEOAG_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_Func_KeyValuePair_MPAKDCNMLEG__FCMAKNBEJDA___bool__o **ppSVar5;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar6;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  undefined8 *puVar9;
  Il2CppObject *arg0;
  System_Type_o *pSVar10;
  Il2CppObject *arg1;
  Il2CppObject *__this_00;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar11;
  long lVar12;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *source;
  System_Func_KeyValuePair_MPAKDCNMLEG__FCMAKNBEJDA___bool__o *predicate;
  undefined1 auVar16 [16];
  undefined4 local_64;
  
  if ((DAT_04568ee5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6613);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6614);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6615);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6616);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>__);
    FUN_01bab630(&System_Func<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>,_bool>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&
                 System_Collections_Generic_IEnumerable<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>_TypeInfo
                );
    FUN_01bab630(&
                 System_Collections_Generic_IEnumerator<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>_TypeInfo
                );
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>_get_Value__
                );
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    FUN_01bab630(&Method_LCAOAAFEOAG_<>c_KEPJHHAMKOP__);
    FUN_01bab630(&LCAOAAFEOAG_<>c_TypeInfo);
    DAT_04568ee5 = 1;
  }
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6613,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6614,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
  source = (__this->fields).POGOKDKJDFO;
  if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  predicate = LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__15_0;
  if (predicate == (System_Func_KeyValuePair_MPAKDCNMLEG__FCMAKNBEJDA___bool__o *)0x0) {
    if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    predicate = (System_Func_KeyValuePair_MPAKDCNMLEG__FCMAKNBEJDA___bool__o *)
                thunk_FUN_01bda818(
                                  System_Func<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>,_bool>_TypeInfo
                                  );
    System_Func<KeyValuePair<Int32Enum,_object>,_bool>___ctor();
    ppSVar5 = &LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__15_0;
    *ppSVar5 = predicate;
    thunk_FUN_01c20e04(ppSVar5,predicate);
  }
  pSVar6 = System_Linq_Enumerable__Where<KeyValuePair<Int32Enum,_object>>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)predicate,
                      Method_System_Linq_Enumerable_Where<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>__)
  ;
  if (pSVar6 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar11 = pSVar6->klass;
  uVar1._0_1_ = (pSVar11->_2).rank;
  uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
  uVar13 = (ulong)uVar1;
  if (uVar13 != 0) {
    piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
          (Il2CppClass *)
          System_Collections_Generic_IEnumerable<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>_TypeInfo) {
        pVVar7 = pSVar11->vtable + *piVar14;
        goto LAB_036bd058;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  pVVar7 = (VirtualInvokeData *)
           FUN_01b81914(pSVar6,
                        System_Collections_Generic_IEnumerable<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>_TypeInfo
                        ,0);
LAB_036bd058:
  plVar8 = (long *)(*pVVar7->methodPtr)(pSVar6,pVVar7->method);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar12 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_036bd0d8;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_036bd0d8:
    uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar12 = *plVar8;
                    /* try { // try from 036bd218 to 037bd2ab has its CatchHandler @ 036bd218
                       catch() { ... } // from try @ 036bd218 with catch @ 036bd218
                       catch() { ... } // from try @ 036bd2c4 with catch @ 036bd218
                       catch() { ... } // from try @ 036bd30c with catch @ 036bd218
                       catch() { ... } // from try @ 036bd33c with catch @ 036bd218 */
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_036bd24c;
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_KeyValuePair_MPAKDCNMLEG__FCMAKNBEJDA___c **)
             (piVar15 + -2) ==
            System_Collections_Generic_IEnumerator<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>_TypeInfo)
        {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_036bd13c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01b81914(plVar8,
                          System_Collections_Generic_IEnumerator<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>_TypeInfo
                          ,0);
LAB_036bd13c:
    auVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    __this_00 = auVar16._8_8_;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6615,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6616,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    local_64 = auVar16._0_4_;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(MPAKDCNMLEG_TypeInfo,&local_64);
    if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar10 = System_Object__GetType(__this_00,(MethodInfo *)0x0);
    if (pSVar10 == (System_Type_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    arg1 = (Il2CppObject *)
           (*(pSVar10->klass->vtable)._8_unknown.methodPtr)
                     (pSVar10,(pSVar10->klass->vtable)._8_unknown.method);
    pSVar4 = System_String__Format(pSVar4,arg0,arg1,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
    (*__this_00->klass->vtable[9].methodPtr)
              (__this_00,auVar16._0_8_ & 0xffffffff,__this_00->klass->vtable[9].method);
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_036bd268;
    }
  }
LAB_036bd24c:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_036bd268:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}

