// IJCLCKIJJDH$$JOEFDLMOIDE @ RVA 0x352F948

/* WARNING: Removing unreachable block (ram,0x0362fd4c) */
/* WARNING: Removing unreachable block (ram,0x0362fdb8) */

void IJCLCKIJJDH__JOEFDLMOIDE(IJCLCKIJJDH_o *__this,MFBFOBDKLBC_o *JKHDNKDKBBB,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  Il2CppType *handle;
  bool bVar5;
  System_Type_o *enumType;
  System_Array_o *__this_00;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  uint *puVar9;
  System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *pSVar10;
  System_Collections_Generic_List_object__o *__this_01;
  undefined8 *puVar11;
  Il2CppObject *disposable;
  System_Collections_IEnumerator_c *pSVar12;
  MFBFOBDKLBC_c *pMVar13;
  System_Object_array *pSVar14;
  long lVar15;
  ulong uVar16;
  int32_t *piVar17;
  int *piVar18;
  System_Collections_Generic_List_object__o *local_68;
  
  if ((DAT_04568a4f & 1) == 0) {
    FUN_01bab630(&BDMDJNOIBKC_var);
    FUN_01bab630(&BDMDJNOIBKC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_TryGetValue__
                );
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
                    /* try { // try from 0362f9c8 to 0372f9cf has its CatchHandler @ 0362fb34 */
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 0362f9e0 to 0372f9e7 has its CatchHandler @ 0362fb30 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MFBFOBDKLBC>_Add__);
                    /* try { // try from 0362f9f4 to 0372f9fb has its CatchHandler @ 0362fb1c */
    FUN_01bab630(&Method_System_Collections_Generic_List<MFBFOBDKLBC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MFBFOBDKLBC>_TypeInfo);
                    /* try { // try from 0362fa14 to 0372fa57 has its CatchHandler @ 0362fb38 */
    FUN_01bab630(&MFBFOBDKLBC_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04568a4f = 1;
  }
  handle = BDMDJNOIBKC_var;
  local_68 = (System_Collections_Generic_List_object__o *)0x0;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Enum_TypeInfo);
  }
  __this_00 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_00 == (System_Array_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = System_Array__GetEnumerator(__this_00,(MethodInfo *)0x0);
  if (pSVar6 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar12 = pSVar6->klass;
    uVar2._0_1_ = (pSVar12->_2).rank;
    uVar2._1_1_ = (pSVar12->_2).minimumAlignment;
                    /* try { // try from 0362fac4 to 0372faf3 has its CatchHandler @ 0362f8c8 */
    uVar16 = (ulong)uVar2;
    if (uVar16 != 0) {
      piVar17 = &((pSVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 0362fb00 to 0372fb03 has its CatchHandler @ 0362fb3c */
                    /* try { // try from 0362fb04 to 0372fb17 has its CatchHandler @ 0362fb20 */
          pVVar7 = pSVar12->vtable + *piVar17;
          goto LAB_0362fb0c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
                    /* try { // try from 0362faf4 to 0372faf7 has its CatchHandler @ 0362fb3c */
                    /* try { // try from 0362faf8 to 0372fafb has its CatchHandler @ 0362fb28 */
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,0);
                    /* try { // try from 0362fafc to 0372faff has its CatchHandler @ 0362fb24 */
LAB_0362fb0c:
    uVar16 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
                    /* try { // try from 0362fb18 to 0372fb53 has its CatchHandler @ 0362f8c8 */
    if ((uVar16 & 1) == 0) {
                    /* try { // try from 0362fcc8 to 0372fccb has its CatchHandler @ 0362fcf4 */
                    /* try { // try from 0362fccc to 0372fd03 has its CatchHandler @ 0362fbc4 */
      plVar8 = (long *)thunk_FUN_01bda71c(pSVar6,System_IDisposable_TypeInfo);
      if (plVar8 == (long *)0x0) goto LAB_0362fd40;
      lVar15 = *plVar8;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    /* catch() { ... } // from try @ 0362fcc8 with catch @ 0362fcf4 */
      if (uVar16 == 0) goto LAB_0362fd18;
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      break;
    }
                    /* catch() { ... } // from try @ 0362f9f4 with catch @ 0362fb1c */
    pSVar12 = pSVar6->klass;
    uVar3._0_1_ = (pSVar12->_2).rank;
    uVar3._1_1_ = (pSVar12->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 0362fb04 with catch @ 0362fb20 */
                    /* catch() { ... } // from try @ 0362fafc with catch @ 0362fb24 */
    uVar16 = (ulong)uVar3;
                    /* catch() { ... } // from try @ 0362faf8 with catch @ 0362fb28 */
    if (uVar16 != 0) {
                    /* catch() { ... } // from try @ 0362faa0 with catch @ 0362fb2c */
                    /* catch() { ... } // from try @ 0362f9e0 with catch @ 0362fb30 */
      piVar17 = &((pSVar12->_1).interfaceOffsets)->offset;
      do {
                    /* catch() { ... } // from try @ 0362f9c8 with catch @ 0362fb34 */
                    /* catch() { ... } // from try @ 0362fa14 with catch @ 0362fb38 */
                    /* catch() { ... } // from try @ 0362faf4 with catch @ 0362fb3c
                       catch() { ... } // from try @ 0362fb00 with catch @ 0362fb3c */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar7 = pSVar12->vtable + (*piVar17 + 1);
          goto LAB_0362fb6c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
                    /* try { // try from 0362fb54 to 0372fb57 has its CatchHandler @ 0362fb78 */
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,1);
                    /* try { // try from 0362fb58 to 0372fb7f has its CatchHandler @ 0362f8c8 */
LAB_0362fb6c:
    plVar8 = (long *)(*pVVar7->methodPtr)(pSVar6,pVVar7->method);
                    /* catch() { ... } // from try @ 0362fb54 with catch @ 0362fb78 */
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0362fb80 to 0372fb87 has its CatchHandler @ 0362fb9c */
                    /* try { // try from 0362fb88 to 0372fb93 has its CatchHandler @ 0362f8c8 */
    if (*(Il2CppClass **)(*plVar8 + 0x40) != (BDMDJNOIBKC_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
                    /* try { // try from 0362fb94 to 0372fb9b has its CatchHandler @ 0362fb9c */
    puVar9 = (uint *)thunk_FUN_01bda96c();
    if (JKHDNKDKBBB == (MFBFOBDKLBC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 0362fb80 with catch @ 0362fb9c
                       catch() { ... } // from try @ 0362fb94 with catch @ 0362fb9c */
    pMVar13 = JKHDNKDKBBB->klass;
    uVar1 = *puVar9;
    uVar4._0_1_ = (pMVar13->_2).rank;
    uVar4._1_1_ = (pMVar13->_2).minimumAlignment;
    uVar16 = (ulong)uVar4;
    if (uVar16 != 0) {
      piVar17 = &((pMVar13->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
            (Il2CppClass *)MFBFOBDKLBC_TypeInfo) {
          pVVar7 = pMVar13->vtable + *piVar17;
          goto LAB_0362fbec;
        }
                    /* try { // try from 0362fbc4 to 0372fc5b has its CatchHandler @ 0362fbc4
                       catch() { ... } // from try @ 0362fbc4 with catch @ 0362fbc4
                       catch() { ... } // from try @ 0362fc78 with catch @ 0362fbc4
                       catch() { ... } // from try @ 0362fca4 with catch @ 0362fbc4
                       catch() { ... } // from try @ 0362fccc with catch @ 0362fbc4
                       catch() { ... } // from try @ 0362fd0c with catch @ 0362fbc4 */
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(JKHDNKDKBBB,MFBFOBDKLBC_TypeInfo,0);
LAB_0362fbec:
    uVar16 = (*pVVar7->methodPtr)(JKHDNKDKBBB,(ulong)uVar1,pVVar7->method);
    if ((uVar16 & 1) != 0) {
      pSVar10 = (__this->fields).MFENGHDGHGI;
      if (pSVar10 == (System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *)0x0)
      {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar5 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,uVar1,
                         (Il2CppObject **)&local_68,
                         Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_TryGetValue__
                        );
      if (!bVar5) {
        __this_01 = (System_Collections_Generic_List_object__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<MFBFOBDKLBC>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  (__this_01,Method_System_Collections_Generic_List<MFBFOBDKLBC>__ctor__);
        pSVar10 = (__this->fields).MFENGHDGHGI;
        local_68 = __this_01;
        if (pSVar10 ==
            (System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,uVar1,
                   (Il2CppObject *)__this_01,
                   Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_Add__
                  );
      }
                    /* try { // try from 0362fc5c to 0372fc63 has its CatchHandler @ 0362fcb0 */
      lVar15 = Method_System_Collections_Generic_List<MFBFOBDKLBC>_Add__;
      if (local_68 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar14 = (local_68->fields)._items;
                    /* try { // try from 0362fc70 to 0372fc77 has its CatchHandler @ 0362fcac */
      (local_68->fields)._version = (local_68->fields)._version + 1;
                    /* try { // try from 0362fc78 to 0372fc9f has its CatchHandler @ 0362fbc4 */
      if (pSVar14 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (local_68->fields)._size;
      if (uVar1 < (uint)pSVar14->max_length) {
        (local_68->fields)._size = uVar1 + 1;
        pSVar14->m_Items[(int)uVar1] = (Il2CppObject *)JKHDNKDKBBB;
                    /* try { // try from 0362fca0 to 0372fca3 has its CatchHandler @ 0362fca8 */
                    /* try { // try from 0362fca4 to 0372fcc7 has its CatchHandler @ 0362fbc4 */
        thunk_FUN_01c20e04(pSVar14->m_Items + (int)uVar1,JKHDNKDKBBB);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362fca0 with catch @ 0362fca8
                        */
      }
      else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362fc70 with catch @ 0362fcac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362fc5c with catch @ 0362fcb0
                        */
        System_Collections_Generic_List<object>__AddWithResize
                  (local_68,(Il2CppObject *)JKHDNKDKBBB,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while( true ) {
                    /* try { // try from 0362fd0c to 0372fd17 has its CatchHandler @ 0362fbc4 */
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
                    /* try { // try from 0362fd04 to 0372fd0b has its CatchHandler @ 0362fd20 */
    if (*(System_IDisposable_c **)(piVar18 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0362fd34;
    }
  }
LAB_0362fd18:
                    /* try { // try from 0362fd18 to 0372fd1f has its CatchHandler @ 0362fd20 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0362fd04 with catch @ 0362fd20
                       catch(type#2 @ 00000000) { ... } // from try @ 0362fd18 with catch @ 0362fd20
                        */
  puVar11 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
                    /* try { // try from 0362fd24 to 0372fe63 has its CatchHandler @ 0362fd24
                       catch() { ... } // from try @ 0362fd24 with catch @ 0362fd24
                       catch() { ... } // from try @ 0362ff40 with catch @ 0362fd24
                       catch() { ... } // from try @ 0362ffbc with catch @ 0362fd24
                       catch() { ... } // from try @ 0362fffc with catch @ 0362fd24
                       catch() { ... } // from try @ 03630060 with catch @ 0362fd24 */
LAB_0362fd34:
  (*(code *)*puVar11)(plVar8,puVar11[1]);
LAB_0362fd40:
  disposable = (Il2CppObject *)thunk_FUN_01bda71c(JKHDNKDKBBB,System_IDisposable_TypeInfo);
  if (disposable != (Il2CppObject *)0x0) {
    UniRx_DisposableExtensions__AddTo<object>
              (disposable,
               (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).HBJPBPBIOOB
               ,Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  }
  return;
}

