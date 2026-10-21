// TypeDefIndex 3346
// Namespace: 
// public class IJCLCKIJJDH : GOCLIOIANDK<IJCLCKIJJDH, FGOGONIFJFD>, FGOGONIFJFD
// Fields:
//   private Action<bool> KEHNIDBCJPF; // 0x10
//   private readonly AAPGCAPGBLG APEEANDPFCG; // 0x18
//   private readonly HCOEEOMMEFL GLNMNHFKGCO; // 0x20
//   private readonly CFEJGBOOCOG AJAPLLENPMB; // 0x28
//   private readonly List<MFBFOBDKLBC> LMGNEEPGCDN; // 0x30
//   private readonly Dictionary<BDMDJNOIBKC, List<MFBFOBDKLBC>> MFENGHDGHGI; // 0x38
//   private int PGGDMOEHIJI; // 0x40
//   private bool IDNEINHPBHH; // 0x44
//   private readonly CompositeDisposable HBJPBPBIOOB; // 0x48
//   private readonly CompositeDisposable MEMOAFOBLCM; // 0x50
//   private Nullable<float> OGMPOBAGDMG; // 0x58

// ===== private void POHKBLDNIKL()  [RVA 0x352F510]
// IJCLCKIJJDH$$POHKBLDNIKL @ RVA 0x352F510

void IJCLCKIJJDH__POHKBLDNIKL(IJCLCKIJJDH_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_Comparison_MFBFOBDKLBC__o **ppSVar2;
  System_Comparison_MFBFOBDKLBC__o *comparison;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_88;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04568a4d & 1) == 0) {
    FUN_01bab630(&System_Comparison<MFBFOBDKLBC>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_get_Values__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MFBFOBDKLBC>_Sort__);
    FUN_01bab630(&Method_IJCLCKIJJDH_<>c_PGAHFAOBNKD__);
    FUN_01bab630(&IJCLCKIJJDH_<>c_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_GetEnumerator__
                );
    DAT_04568a4d = 1;
  }
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._currentValue = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).MFENGHDGHGI;
  if ((__this_01 != (System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *)0x0)
     && (__this_02 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Values
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                                Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_get_Values__
                               ),
        __this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
  {
    System_Collections_Generic_Dictionary_ValueCollection<Int32Enum,_object>__GetEnumerator
              (&local_88,__this_02,
               Method_System_Collections_Generic_Dictionary_ValueCollection<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_GetEnumerator__
              );
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._dictionary = local_88.fields._dictionary;
    local_70.fields._currentValue = local_88.fields._currentValue;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum,_object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_MoveNext__
                        );
      __this_00 = local_70.fields._currentValue;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum,_object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_Dispose__
                  );
        return;
      }
      if ((IJCLCKIJJDH_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(IJCLCKIJJDH_<>c_TypeInfo);
      }
      comparison = IJCLCKIJJDH_<>c_TypeInfo->static_fields->__9__18_0;
      if (comparison == (System_Comparison_MFBFOBDKLBC__o *)0x0) {
        if ((IJCLCKIJJDH_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(IJCLCKIJJDH_<>c_TypeInfo);
        }
        comparison = (System_Comparison_MFBFOBDKLBC__o *)
                     thunk_FUN_01bda818(System_Comparison<MFBFOBDKLBC>_TypeInfo);
        System_Comparison<object>___ctor();
        ppSVar2 = &IJCLCKIJJDH_<>c_TypeInfo->static_fields->__9__18_0;
        *ppSVar2 = comparison;
        thunk_FUN_01c20e04(ppSVar2,comparison);
      }
      if ((System_Collections_Generic_List_object__o *)__this_00 ==
          (System_Collections_Generic_List_object__o *)0x0) break;
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Comparison_T__o *)comparison,
                 Method_System_Collections_Generic_List<MFBFOBDKLBC>_Sort__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NOPAOACLFHP(Unit HOKBHLPPCAH)  [RVA 0x352F768]
// IJCLCKIJJDH$$NOPAOACLFHP @ RVA 0x352F768

void IJCLCKIJJDH__NOPAOACLFHP(IJCLCKIJJDH_o *__this)

{
  MethodInfo *method;
  
  if ((DAT_04568a4e & 1) == 0) {
    FUN_01bab630(&StringLiteral_8619/*"Login canceled by game restart!"*/);
    DAT_04568a4e = 1;
  }
  method = (MethodInfo *)0x0;
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_8619/*"Login canceled by game restart!"*/,(MethodInfo *)0x0);
  IJCLCKIJJDH__FGNINNOOCCL(__this,false,method);
  return;
}


// ===== private void JOEFDLMOIDE(MFBFOBDKLBC JKHDNKDKBBB)  [RVA 0x352F948]
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


// ===== private void FGNINNOOCCL(bool IBEBJHMKFGE)  [RVA 0x352F7C0]
// IJCLCKIJJDH$$FGNINNOOCCL @ RVA 0x352F7C0

void IJCLCKIJJDH__FGNINNOOCCL(IJCLCKIJJDH_o *__this,bool IBEBJHMKFGE,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *JLNPKGGFFDD;
  UniRx_CompositeDisposable_o *__this_00;
  System_Action_bool__o *pSVar2;
  float fVar3;
  System_Nullable_float__Fields local_60;
  undefined1 local_54 [4];
  
  if ((DAT_04568a50 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    FUN_01bab630(&StringLiteral_3759/*"CallComplete"*/);
    FUN_01bab630(&StringLiteral_22402/*"{0}: {1}"*/);
    DAT_04568a50 = 1;
  }
  local_54[0] = IBEBJHMKFGE;
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_54);
  JLNPKGGFFDD = System_String__Format
                          (StringLiteral_22402/*"{0}: {1}"*/,StringLiteral_3759/*"CallComplete"*/,pIVar1,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  (__this->fields).IDNEINHPBHH = false;
  fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0362f8c8 to 0372f9c7 has its CatchHandler @ 0362f8c8
                       catch() { ... } // from try @ 0362f8c8 with catch @ 0362f8c8
                       catch() { ... } // from try @ 0362fac4 with catch @ 0362f8c8
                       catch() { ... } // from try @ 0362fb18 with catch @ 0362f8c8
                       catch() { ... } // from try @ 0362fb58 with catch @ 0362f8c8
                       catch() { ... } // from try @ 0362fb88 with catch @ 0362f8c8 */
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    local_60.hasValue = false;
    local_60._1_3_ = 0;
    local_60.value = 0.0;
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_60,fVar3 + *(float *)((long)&pIVar1[5].monitor + 4),
               Method_System_Nullable<float>__ctor__);
    pSVar2 = (__this->fields).KEHNIDBCJPF;
    (__this->fields).OGMPOBAGDMG.fields = local_60;
    if (pSVar2 != (System_Action_bool__o *)0x0) {
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,IBEBJHMKFGE,
                 (pSVar2->fields).super.super.method);
    }
    __this_00 = (__this->fields).MEMOAFOBLCM;
    if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
      UniRx_CompositeDisposable__Clear(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void GIMAJOGGBHM()  [RVA 0x352FEB8]
// IJCLCKIJJDH$$GIMAJOGGBHM @ RVA 0x352FEB8

void IJCLCKIJJDH__GIMAJOGGBHM(IJCLCKIJJDH_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Action_T__o *pSVar2;
  System_IObservable_bool__o *source;
  System_Func_T__TR__o *selector;
  System_IObservable_TR__o *source_00;
  System_Func_T__bool__o *predicate;
  System_IObservable_T__o *pSVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  HCOEEOMMEFL_c *pHVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_Generic_List_object__o *__this_00;
  HCOEEOMMEFL_o *pHVar9;
  
                    /* try { // try from 0362fec4 to 0372fee7 has its CatchHandler @ 0362ffc4 */
  if ((DAT_04568a51 & 1) == 0) {
                    /* try { // try from 0362fef8 to 0372ff3f has its CatchHandler @ 0362ffe0 */
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<ValueTuple<bool,_bool>>_TypeInfo);
    FUN_01bab630(&System_Action<MFBFOBDKLBC>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<ValueTuple<bool,_bool>,_bool>_TypeInfo);
    FUN_01bab630(&System_Func<bool,_ValueTuple<bool,_bool>>_TypeInfo);
                    /* try { // try from 0362ff40 to 0372ff7f has its CatchHandler @ 0362fd24 */
    FUN_01bab630(&Method_GOCLIOIANDK<IJCLCKIJJDH,_FGOGONIFJFD>_GIMAJOGGBHM__);
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&Method_IJCLCKIJJDH_ENLKIOMNGAK__);
    FUN_01bab630(&Method_IJCLCKIJJDH_JOEFDLMOIDE__);
    FUN_01bab630(&Method_IJCLCKIJJDH_LGEIKGPODJO__);
                    /* try { // try from 0362ff80 to 0372ff83 has its CatchHandler @ 0362ffd4 */
    FUN_01bab630(&Method_IJCLCKIJJDH_NLDEOIABBFF__);
                    /* try { // try from 0362ff88 to 0372ff8b has its CatchHandler @ 0362ffd0 */
                    /* try { // try from 0362ff90 to 0372ff93 has its CatchHandler @ 0362ffc8 */
    FUN_01bab630(&Method_IJCLCKIJJDH_NOPAOACLFHP__);
                    /* try { // try from 0362ff98 to 0372ff9b has its CatchHandler @ 0362ffd0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MFBFOBDKLBC>_ForEach__);
                    /* try { // try from 0362ffa0 to 0372ffab has its CatchHandler @ 0362ffc8 */
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
                    /* try { // try from 0362ffb0 to 0372ffbb has its CatchHandler @ 0362ffd0 */
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<ValueTuple<bool,_bool>>__);
                    /* try { // try from 0362ffbc to 0372fff7 has its CatchHandler @ 0362fd24 */
                    /* catch() { ... } // from try @ 0362fea4 with catch @ 0362ffc0 */
    FUN_01bab630(&Method_UniRx_Observable_Select<bool,_ValueTuple<bool,_bool>>__);
                    /* catch() { ... } // from try @ 0362fec4 with catch @ 0362ffc4 */
                    /* catch() { ... } // from try @ 0362ff90 with catch @ 0362ffc8
                       catch() { ... } // from try @ 0362ffa0 with catch @ 0362ffc8 */
                    /* catch() { ... } // from try @ 0362fe90 with catch @ 0362ffcc */
    FUN_01bab630(&Method_UniRx_Observable_Take<Unit>__);
                    /* catch() { ... } // from try @ 0362ff88 with catch @ 0362ffd0
                       catch() { ... } // from try @ 0362ff98 with catch @ 0362ffd0
                       catch() { ... } // from try @ 0362ffb0 with catch @ 0362ffd0 */
                    /* catch() { ... } // from try @ 0362ff80 with catch @ 0362ffd4 */
                    /* catch() { ... } // from try @ 0362fe7c with catch @ 0362ffd8 */
    FUN_01bab630(&Method_UniRx_Observable_Where<ValueTuple<bool,_bool>>__);
                    /* catch() { ... } // from try @ 0362fe64 with catch @ 0362ffdc */
                    /* catch() { ... } // from try @ 0362fef8 with catch @ 0362ffe0 */
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04568a51 = 1;
  }
                    /* try { // try from 0362fff8 to 0372fffb has its CatchHandler @ 03630048 */
  GOCLIOIANDK<object,_object>__GIMAJOGGBHM
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<IJCLCKIJJDH,_FGOGONIFJFD>_GIMAJOGGBHM__);
                    /* try { // try from 0362fffc to 03730057 has its CatchHandler @ 0362fd24 */
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).LMGNEEPGCDN;
  pSVar2 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<MFBFOBDKLBC>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* catch() { ... } // from try @ 0362fff8 with catch @ 03630048 */
                    /* try { // try from 03630058 to 0373005f has its CatchHandler @ 03630074 */
                    /* try { // try from 03630060 to 0373006b has its CatchHandler @ 0362fd24 */
                    /* try { // try from 0363006c to 03730073 has its CatchHandler @ 03630074 */
                    /* catch() { ... } // from try @ 03630058 with catch @ 03630074
                       catch() { ... } // from try @ 0363006c with catch @ 03630074 */
    System_Collections_Generic_List<object>__ForEach
              (__this_00,pSVar2,Method_System_Collections_Generic_List<MFBFOBDKLBC>_ForEach__);
    IJCLCKIJJDH__POHKBLDNIKL(__this,method_00);
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03630094 to 0373012b has its CatchHandler @ 03630094
                       catch() { ... } // from try @ 03630094 with catch @ 03630094
                       catch() { ... } // from try @ 0363014c with catch @ 03630094
                       catch() { ... } // from try @ 0363017c with catch @ 03630094
                       catch() { ... } // from try @ 036301a4 with catch @ 03630094
                       catch() { ... } // from try @ 036301e4 with catch @ 03630094 */
    source = UniRx_Observable__EveryApplicationPause((MethodInfo *)0x0);
    selector = (System_Func_T__TR__o *)
               thunk_FUN_01bda818(System_Func<bool,_ValueTuple<bool,_bool>>_TypeInfo);
    System_Func<bool,_ValueTuple<bool,_bool>>___ctor();
    source_00 = UniRx_Observable__Select<bool,_ValueTuple<bool,_bool>>
                          ((System_IObservable_T__o *)source,selector,
                           Method_UniRx_Observable_Select<bool,_ValueTuple<bool,_bool>>__);
    predicate = (System_Func_T__bool__o *)
                thunk_FUN_01bda818(System_Func<ValueTuple<bool,_bool>,_bool>_TypeInfo);
    System_Func<ValueTuple<bool,_bool>,_bool>___ctor();
    pSVar3 = UniRx_Observable__Where<ValueTuple<bool,_bool>>
                       ((System_IObservable_T__o *)source_00,predicate,
                        Method_UniRx_Observable_Where<ValueTuple<bool,_bool>>__);
    pSVar2 = (System_Action_T__o *)
             thunk_FUN_01bda818(System_Action<ValueTuple<bool,_bool>>_TypeInfo);
                    /* try { // try from 0363012c to 03730133 has its CatchHandler @ 03630188 */
    System_Action<ValueTuple<bool,_bool>>___ctor();
                    /* try { // try from 03630144 to 0373014b has its CatchHandler @ 03630184 */
    pIVar4 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<ValueTuple<bool,_bool>>
                       (pSVar3,pSVar2,
                        Method_UniRx_ObservableExtensions_Subscribe<ValueTuple<bool,_bool>>__);
                    /* try { // try from 0363014c to 03730177 has its CatchHandler @ 03630094 */
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).HBJPBPBIOOB,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    pHVar9 = (__this->fields).GLNMNHFKGCO;
    if (pHVar9 != (HCOEEOMMEFL_o *)0x0) {
      pHVar6 = pHVar9->klass;
      uVar1._0_1_ = (pHVar6->_2).rank;
      uVar1._1_1_ = (pHVar6->_2).minimumAlignment;
                    /* try { // try from 03630178 to 0373017b has its CatchHandler @ 03630180 */
                    /* try { // try from 0363017c to 0373019f has its CatchHandler @ 03630094 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03630178 with catch @ 03630180
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03630144 with catch @ 03630184
                        */
      uVar7 = (ulong)uVar1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363012c with catch @ 03630188
                        */
      if (uVar7 != 0) {
                    /* try { // try from 036301a0 to 037301a3 has its CatchHandler @ 036301cc */
        piVar8 = &((pHVar6->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 036301a4 to 037301db has its CatchHandler @ 03630094 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)HCOEEOMMEFL_TypeInfo) {
                    /* catch() { ... } // from try @ 036301a0 with catch @ 036301cc */
            pVVar5 = pHVar6->vtable + *piVar8;
            goto LAB_036301d8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pHVar9,HCOEEOMMEFL_TypeInfo,0);
LAB_036301d8:
                    /* try { // try from 036301dc to 037301e3 has its CatchHandler @ 036301f8 */
      pSVar3 = (System_IObservable_T__o *)(*pVVar5->methodPtr)(pHVar9,pVVar5->method);
                    /* try { // try from 036301e4 to 037301ef has its CatchHandler @ 03630094 */
      pSVar3 = UniRx_Observable__Take<Unit>(pSVar3,1,Method_UniRx_Observable_Take<Unit>__);
                    /* try { // try from 036301f0 to 037301f7 has its CatchHandler @ 036301f8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036301dc with catch @ 036301f8
                       catch(type#2 @ 00000000) { ... } // from try @ 036301f0 with catch @ 036301f8
                        */
      pSVar2 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
      System_Action<Unit>___ctor();
      pIVar4 = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Unit>
                         (pSVar3,pSVar2,Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
      UniRx_DisposableExtensions__AddTo<object>
                (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                        (__this->fields).HBJPBPBIOOB,
                 Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EGPGOOBHNIM(BDMDJNOIBKC HJDMBDBJEFL)  [RVA 0x353024C]
// IJCLCKIJJDH$$EGPGOOBHNIM @ RVA 0x353024C

void IJCLCKIJJDH__EGPGOOBHNIM(IJCLCKIJJDH_o *__this,int32_t HJDMBDBJEFL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *__this_00;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  int32_t local_2c;
  System_Collections_Generic_List_MFBFOBDKLBC__o *local_28;
  
  if ((DAT_04568a52 & 1) == 0) {
    FUN_01bab630(&BDMDJNOIBKC_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_TryGetValue__
                );
    FUN_01bab630(&StringLiteral_11478/*"RunLogin"*/);
    FUN_01bab630(&StringLiteral_8626/*"LoginEvent"*/);
    FUN_01bab630(&StringLiteral_22392/*"{0}: for {1} '{2}'"*/);
    FUN_01bab630(&StringLiteral_22400/*"{0}: try to use unsupported {1} '{2}'! Skip..."*/);
    FUN_01bab630(&StringLiteral_11479/*"RunLogin: another login in progress! Skip..."*/);
                    /* try { // try from 036302c4 to 0373035f has its CatchHandler @ 036302c4
                       catch() { ... } // from try @ 036302c4 with catch @ 036302c4
                       catch() { ... } // from try @ 03630384 with catch @ 036302c4
                       catch() { ... } // from try @ 036303b8 with catch @ 036302c4
                       catch() { ... } // from try @ 036303e0 with catch @ 036302c4
                       catch() { ... } // from try @ 03630410 with catch @ 036302c4 */
    DAT_04568a52 = 1;
  }
  local_28 = (System_Collections_Generic_List_MFBFOBDKLBC__o *)0x0;
  pSVar3 = StringLiteral_11479/*"RunLogin: another login in progress! Skip..."*/;
  if ((__this->fields).IDNEINHPBHH == false) {
    __this_00 = (__this->fields).MFENGHDGHGI;
    if (__this_00 == (System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *)0x0)
    {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       HJDMBDBJEFL,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_TryGetValue__
                      );
    local_2c = HJDMBDBJEFL;
    if (bVar1) {
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(BDMDJNOIBKC_TypeInfo,&local_2c);
      pSVar3 = System_String__Format
                         (StringLiteral_22392/*"{0}: for {1} '{2}'"*/,StringLiteral_11478/*"RunLogin"*/,StringLiteral_8626/*"LoginEvent"*/,pIVar2,
                          (MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
                    /* try { // try from 03630360 to 03730367 has its CatchHandler @ 036303c4 */
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
      (__this->fields).IDNEINHPBHH = true;
      (__this->fields).PGGDMOEHIJI = 0;
                    /* try { // try from 03630378 to 03730383 has its CatchHandler @ 036303bc */
      IJCLCKIJJDH__HIDNIOLOJMJ(__this,local_28,method_00);
      return;
    }
                    /* try { // try from 03630384 to 037303b3 has its CatchHandler @ 036302c4 */
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(BDMDJNOIBKC_TypeInfo,&local_2c);
                    /* try { // try from 036303b4 to 037303b7 has its CatchHandler @ 036303c0 */
                    /* try { // try from 036303b8 to 037303db has its CatchHandler @ 036302c4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03630378 with catch @ 036303bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036303b4 with catch @ 036303c0
                        */
    pSVar3 = System_String__Format
                       (StringLiteral_22400/*"{0}: try to use unsupported {1} '{2}'! Skip..."*/,StringLiteral_11478/*"RunLogin"*/,StringLiteral_8626/*"LoginEvent"*/,pIVar2,
                        (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03630360 with catch @ 036303c4
                        */
  }
  KFJJHMDIFIG__AFEFCBEAJIN((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 036303dc to 037303df has its CatchHandler @ 03630400 */
                    /* try { // try from 036303e0 to 03730407 has its CatchHandler @ 036302c4 */
  return;
}


// ===== public void CBGOIEKFBDL(Action<bool> CJNHFNHJHPE)  [RVA 0x35306C4]
// IJCLCKIJJDH$$CBGOIEKFBDL @ RVA 0x35306C4

void IJCLCKIJJDH__CBGOIEKFBDL
               (IJCLCKIJJDH_o *__this,System_Action_bool__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  System_Action_bool__o *source;
  
  if ((DAT_04568a53 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    DAT_04568a53 = 1;
  }
  source = (__this->fields).KEHNIDBCJPF;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_bool__o *)FUN_01c07368(&__this->fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void OIGJICJHIPB(Action<bool> CJNHFNHJHPE)  [RVA 0x3530774]
// IJCLCKIJJDH$$OIGJICJHIPB @ RVA 0x3530774

void IJCLCKIJJDH__OIGJICJHIPB
               (IJCLCKIJJDH_o *__this,System_Action_bool__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  System_Action_bool__o *a;
  
  if ((DAT_04568a54 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    DAT_04568a54 = 1;
  }
  a = (__this->fields).KEHNIDBCJPF;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_bool__o *)FUN_01c07368(&__this->fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void HIDNIOLOJMJ(List<MFBFOBDKLBC> DFCKGCHLPGK)  [RVA 0x35303E8]
// IJCLCKIJJDH$$HIDNIOLOJMJ @ RVA 0x35303E8

void IJCLCKIJJDH__HIDNIOLOJMJ
               (IJCLCKIJJDH_o *__this,System_Collections_Generic_List_MFBFOBDKLBC__o *DFCKGCHLPGK,
               MethodInfo *method)

{
  int32_t index;
  Il2CppObject *__this_00;
  Il2CppClass *__this_01;
  Il2CppObject *pIVar1;
  undefined8 *puVar2;
  System_IObservable_T__o *source;
  System_Action_T__o *onNext;
  System_Type_o *pSVar3;
  System_String_o *pSVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  void **ppvVar8;
  long *plVar9;
  
                    /* catch() { ... } // from try @ 036303dc with catch @ 03630400 */
                    /* try { // try from 03630408 to 0373040f has its CatchHandler @ 03630424 */
                    /* try { // try from 03630410 to 0373041b has its CatchHandler @ 036302c4 */
  if ((DAT_04568a55 & 1) == 0) {
                    /* try { // try from 0363041c to 03730423 has its CatchHandler @ 03630424 */
    FUN_01bab630(&System_Action<bool>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03630408 with catch @ 03630424
                       catch(type#2 @ 00000000) { ... } // from try @ 0363041c with catch @ 03630424
                        */
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MFBFOBDKLBC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MFBFOBDKLBC>_get_Item__);
    FUN_01bab630(&MFBFOBDKLBC_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    FUN_01bab630(&Method_IJCLCKIJJDH_POLPDOALJOO_DMFBJOPEABP__);
    FUN_01bab630(&IJCLCKIJJDH_POLPDOALJOO_TypeInfo);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    FUN_01bab630(&StringLiteral_11630/*"START operation '"*/);
    DAT_04568a55 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(IJCLCKIJJDH_POLPDOALJOO_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    pIVar1 = __this_00 + 2;
    pIVar1->klass = (Il2CppClass *)DFCKGCHLPGK;
    thunk_FUN_01c20e04(pIVar1,DFCKGCHLPGK);
    __this_01 = pIVar1->klass;
    if (__this_01 != (Il2CppClass *)0x0) {
      index = (__this->fields).PGGDMOEHIJI;
      if (*(int *)&(__this_01->_1).namespaze <= index) {
        IJCLCKIJJDH__FGNINNOOCCL(__this,true,method);
        return;
      }
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,index,
                          Method_System_Collections_Generic_List<MFBFOBDKLBC>_get_Item__);
      ppvVar8 = &__this_00[1].monitor;
      *ppvVar8 = pIVar1;
      thunk_FUN_01c20e04(ppvVar8,pIVar1);
      plVar9 = *ppvVar8;
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
                    /* try { // try from 03630538 to 037305cb has its CatchHandler @ 03630538
                       catch() { ... } // from try @ 03630538 with catch @ 03630538
                       catch() { ... } // from try @ 036305e8 with catch @ 03630538
                       catch() { ... } // from try @ 0363060c with catch @ 03630538
                       catch() { ... } // from try @ 03630634 with catch @ 03630538
                       catch() { ... } // from try @ 03630674 with catch @ 03630538 */
            if (*(MFBFOBDKLBC_c **)(piVar7 + -2) == MFBFOBDKLBC_TypeInfo) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_03630588;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01b81914(plVar9,MFBFOBDKLBC_TypeInfo,3);
LAB_03630588:
        source = (System_IObservable_T__o *)(*(code *)*puVar2)(plVar9,puVar2[1]);
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
        System_Action<bool>___ctor();
                    /* try { // try from 036305cc to 037305d3 has its CatchHandler @ 03630618 */
        pIVar1 = (Il2CppObject *)
                 UniRx_ObservableExtensions__Subscribe<bool>
                           (source,onNext,Method_UniRx_ObservableExtensions_Subscribe<bool>__);
                    /* try { // try from 036305e0 to 037305e7 has its CatchHandler @ 03630614 */
                    /* try { // try from 036305e8 to 03730607 has its CatchHandler @ 03630538 */
        UniRx_DisposableExtensions__AddTo<object>
                  (pIVar1,(System_Collections_Generic_ICollection_IDisposable__o *)
                          (__this->fields).MEMOAFOBLCM,
                   Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
        if ((__this_00[1].monitor != (Il2CppObject *)0x0) &&
           (pSVar3 = System_Object__GetType(__this_00[1].monitor,(MethodInfo *)0x0),
           pSVar3 != (System_Type_o *)0x0)) {
                    /* try { // try from 03630608 to 0373060b has its CatchHandler @ 03630610 */
                    /* try { // try from 0363060c to 0373062f has its CatchHandler @ 03630538 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03630608 with catch @ 03630610
                        */
          pSVar4 = (System_String_o *)
                   (*(pSVar3->klass->vtable)._8_unknown.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._8_unknown.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036305e0 with catch @ 03630614
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036305cc with catch @ 03630618
                        */
                    /* try { // try from 03630630 to 03730633 has its CatchHandler @ 0363065c */
                    /* try { // try from 03630634 to 0373066b has its CatchHandler @ 03630538 */
          pSVar4 = System_String__Concat
                             (StringLiteral_11630/*"START operation '"*/,pSVar4,StringLiteral_802/*"'"*/,(MethodInfo *)0x0);
          KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
          plVar9 = *ppvVar8;
          if (plVar9 != (long *)0x0) {
            lVar5 = *plVar9;
                    /* catch() { ... } // from try @ 03630630 with catch @ 0363065c */
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                    /* try { // try from 0363066c to 03730673 has its CatchHandler @ 03630688 */
                    /* try { // try from 03630674 to 0373067f has its CatchHandler @ 03630538 */
                if (*(MFBFOBDKLBC_c **)(piVar7 + -2) == MFBFOBDKLBC_TypeInfo) {
                  puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                  goto LAB_036306a4;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
                    /* try { // try from 03630680 to 03730687 has its CatchHandler @ 03630688 */
              } while (uVar6 != 0);
            }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0363066c with catch @ 03630688
                       catch(type#2 @ 00000000) { ... } // from try @ 03630680 with catch @ 03630688
                        */
            puVar2 = (undefined8 *)FUN_01b81914(plVar9,MFBFOBDKLBC_TypeInfo,2);
LAB_036306a4:
                    /* WARNING: Could not recover jumptable at 0x036306bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar2)(plVar9,puVar2[1]);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LGEIKGPODJO(ValueTuple<bool, bool> ALKAAKFOJAN)  [RVA 0x353082C]
// IJCLCKIJJDH$$LGEIKGPODJO @ RVA 0x353082C

void IJCLCKIJJDH__LGEIKGPODJO
               (IJCLCKIJJDH_o *__this,System_ValueTuple_bool__bool__o ALKAAKFOJAN,MethodInfo *method
               )

{
  bool bVar1;
  NDPMLPGANCI_o *pNVar2;
  System_IObservable_bool__o *source;
  System_Func_bool__bool__o **ppSVar3;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  AAPGCAPGBLG_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  GLINEGMOOBM_o *pGVar4;
  System_Func_bool__bool__o *predicate;
  
  if ((DAT_04568a56 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<bool,_bool>_TypeInfo);
    FUN_01bab630(&Method_IJCLCKIJJDH_GAAECCDEKPA__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_IJCLCKIJJDH_<>c_CFPGAPBEAND__);
    FUN_01bab630(&IJCLCKIJJDH_<>c_TypeInfo);
    DAT_04568a56 = 1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566e5a == '\0') {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04566e5a = '\x01';
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (GameUtils_TypeInfo->static_fields->_CANIKCKLKBL_k__BackingField != false) {
    pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((pNVar2 == (NDPMLPGANCI_o *)0x0) ||
       (pGVar4 = (pNVar2->fields).KLPOKEJLDHG, pGVar4 == (GLINEGMOOBM_o *)0x0)) goto LAB_03630ab0;
    if ((((ushort)ALKAAKFOJAN.fields >> 8 & 1) == 0) &&
       (((pGVar4->fields).DBMPKPJGIPI != 6 &&
        (bVar1 = IJCLCKIJJDH__FAKAFGPJOIG(__this,method_00), bVar1)))) {
      source = IJCEPJPIDON__IFJDHHGCGHE((FGOGONIFJFD_o *)__this,(MethodInfo *)0x0);
      if ((IJCLCKIJJDH_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(IJCLCKIJJDH_<>c_TypeInfo);
      }
      predicate = IJCLCKIJJDH_<>c_TypeInfo->static_fields->__9__15_4;
      if (predicate == (System_Func_bool__bool__o *)0x0) {
        if ((IJCLCKIJJDH_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(IJCLCKIJJDH_<>c_TypeInfo);
        }
        predicate = (System_Func_bool__bool__o *)
                    thunk_FUN_01bda818(System_Func<bool,_bool>_TypeInfo);
        System_Func<bool,_bool>___ctor();
        ppSVar3 = &IJCLCKIJJDH_<>c_TypeInfo->static_fields->__9__15_4;
        *ppSVar3 = predicate;
        thunk_FUN_01c20e04(ppSVar3,predicate);
      }
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      source_00 = UniRx_Observable__Where<bool>
                            ((System_IObservable_T__o *)source,(System_Func_T__bool__o *)predicate,
                             Method_UniRx_Observable_Where<bool>__);
      onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      disposable = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<bool>
                             (source_00,onNext,Method_UniRx_ObservableExtensions_Subscribe<bool>__);
      method_01 = Method_UniRx_DisposableExtensions_AddTo<IDisposable>__;
      UniRx_DisposableExtensions__AddTo<object>
                (disposable,
                 (System_Collections_Generic_ICollection_IDisposable__o *)
                 (__this->fields).MEMOAFOBLCM,
                 (MethodInfo_1E90590 *)Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
      IJCLCKIJJDH__EGPGOOBHNIM(__this,1,method_01);
      return;
    }
  }
  __this_00 = (__this->fields).APEEANDPFCG;
  if (__this_00 != (AAPGCAPGBLG_o *)0x0) {
    AAPGCAPGBLG__CKDJOILBJPC(__this_00,(MethodInfo *)0x0);
    return;
  }
LAB_03630ab0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool NLDEOIABBFF(ValueTuple<bool, bool> ALKAAKFOJAN)  [RVA 0x3530B54]
// IJCLCKIJJDH$$NLDEOIABBFF @ RVA 0x3530B54

bool IJCLCKIJJDH__NLDEOIABBFF
               (IJCLCKIJJDH_o *__this,System_ValueTuple_bool__bool__o ALKAAKFOJAN,MethodInfo *method
               )

{
  if (((ushort)ALKAAKFOJAN.fields & 1) == 0) {
    return (__this->fields).IDNEINHPBHH == false;
  }
  return false;
}


// ===== public void .ctor(IEnumerable<MFBFOBDKLBC> DFCKGCHLPGK, AAPGCAPGBLG BMIPCIOPBJB, HCOEEOMMEFL OCOJHGNMOPJ, CFEJGBOOCOG DJPFIPHFNKC)  [RVA 0x3530B70]
// IJCLCKIJJDH$$.ctor @ RVA 0x3530B70

void IJCLCKIJJDH___ctor(IJCLCKIJJDH_o *__this,
                       System_Collections_Generic_IEnumerable_MFBFOBDKLBC__o *DFCKGCHLPGK,
                       AAPGCAPGBLG_o *BMIPCIOPBJB,HCOEEOMMEFL_o *OCOJHGNMOPJ,
                       CFEJGBOOCOG_o *DJPFIPHFNKC,MethodInfo *method)

{
  System_Collections_Generic_List_TSource__o *pSVar1;
  AAPGCAPGBLG_o **ppAVar2;
  HCOEEOMMEFL_o **ppHVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  CFEJGBOOCOG_o **ppCVar4;
  
  method_00 = (MethodInfo *)DFCKGCHLPGK;
  if ((DAT_04568a57 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<MFBFOBDKLBC>__);
    DAT_04568a57 = 1;
    method_00 = extraout_x1;
  }
  IJCLCKIJJDH___ctor(__this,method_00);
  pSVar1 = System_Linq_Enumerable__ToList<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)DFCKGCHLPGK,
                      Method_System_Linq_Enumerable_ToList<MFBFOBDKLBC>__);
  (__this->fields).LMGNEEPGCDN = (System_Collections_Generic_List_MFBFOBDKLBC__o *)pSVar1;
  thunk_FUN_01c20e04();
  ppAVar2 = &(__this->fields).APEEANDPFCG;
  *ppAVar2 = BMIPCIOPBJB;
  thunk_FUN_01c20e04(ppAVar2,BMIPCIOPBJB);
  ppHVar3 = &(__this->fields).GLNMNHFKGCO;
  *ppHVar3 = OCOJHGNMOPJ;
  thunk_FUN_01c20e04(ppHVar3,OCOJHGNMOPJ);
  ppCVar4 = &(__this->fields).AJAPLLENPMB;
  *ppCVar4 = DJPFIPHFNKC;
  thunk_FUN_01c20e04(ppCVar4,DJPFIPHFNKC);
  return;
}


// ===== private ValueTuple<bool, bool> ENLKIOMNGAK(bool FNHHIEKCLPI)  [RVA 0x3530D4C]
// IJCLCKIJJDH$$ENLKIOMNGAK @ RVA 0x3530D4C

System_ValueTuple_bool__bool__o
IJCLCKIJJDH__ENLKIOMNGAK(IJCLCKIJJDH_o *__this,bool FNHHIEKCLPI,MethodInfo *method)

{
  ushort uVar1;
  bool item2;
  VirtualInvokeData *pVVar2;
  long lVar3;
  CFEJGBOOCOG_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  CFEJGBOOCOG_o *pCVar7;
  System_ValueTuple_bool__bool__Fields local_24 [2];
  
  if ((DAT_04568a58 & 1) == 0) {
    FUN_01bab630(&CFEJGBOOCOG_TypeInfo);
    FUN_01bab630(&Method_System_ValueTuple<bool,_bool>__ctor__);
    DAT_04568a58 = 1;
  }
  pCVar7 = (__this->fields).AJAPLLENPMB;
  if (pCVar7 == (CFEJGBOOCOG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar4 = pCVar7->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CFEJGBOOCOG_TypeInfo) {
        pVVar2 = pCVar4->vtable + (*piVar6 + 1);
        goto LAB_03630dec;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar7,CFEJGBOOCOG_TypeInfo,1);
LAB_03630dec:
  lVar3 = (*pVVar2->methodPtr)(pCVar7,pVVar2->method);
  if (lVar3 == 0) {
    item2 = false;
  }
  else {
    item2 = *(char *)(lVar3 + 0x40) != '\0';
  }
  local_24[0].Item1 = false;
  local_24[0].Item2 = false;
  System_ValueTuple<bool,_bool>___ctor
            ((System_ValueTuple_bool__bool__o)SUB82(local_24,0),FNHHIEKCLPI,item2,
             Method_System_ValueTuple<bool,_bool>__ctor__);
  return (System_ValueTuple_bool__bool__o)local_24[0];
}


// ===== private void KJAGHEGFCBI()  [RVA 0x3530B38]
// IJCLCKIJJDH$$KJAGHEGFCBI @ RVA 0x3530B38

void IJCLCKIJJDH__KJAGHEGFCBI(IJCLCKIJJDH_o *__this,MethodInfo *method)

{
  AAPGCAPGBLG_o *__this_00;
  
  __this_00 = (__this->fields).APEEANDPFCG;
  if (__this_00 != (AAPGCAPGBLG_o *)0x0) {
    AAPGCAPGBLG__CKDJOILBJPC(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Dispose()  [RVA 0x3530E44]
// IJCLCKIJJDH$$Dispose @ RVA 0x3530E44

void IJCLCKIJJDH__Dispose(IJCLCKIJJDH_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  if ((DAT_04568a59 & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<IJCLCKIJJDH,_FGOGONIFJFD>_Dispose__);
    DAT_04568a59 = 1;
  }
  GOCLIOIANDK<object,_object>__Dispose
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<IJCLCKIJJDH,_FGOGONIFJFD>_Dispose__);
  __this_00 = (__this->fields).HBJPBPBIOOB;
  (__this->fields).IDNEINHPBHH = false;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3530C20]
// IJCLCKIJJDH$$.ctor @ RVA 0x3530C20

void IJCLCKIJJDH___ctor(IJCLCKIJJDH_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *__this_00;
  System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o **ppSVar1;
  UniRx_CompositeDisposable_o *pUVar2;
  MethodInfo *extraout_x1;
  UniRx_CompositeDisposable_o **ppUVar3;
  UniRx_CompositeDisposable_o **ppUVar4;
  
  if ((DAT_04568a5a & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<CompositeDisposable>__);
    FUN_01bab630(&Method_GOCLIOIANDK<IJCLCKIJJDH,_FGOGONIFJFD>__ctor__);
    DAT_04568a5a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>__ctor__);
  ppSVar1 = &(__this->fields).MFENGHDGHGI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pUVar2 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields).HBJPBPBIOOB;
  *ppUVar3 = pUVar2;
  thunk_FUN_01c20e04(ppUVar3,pUVar2);
  pUVar2 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).MEMOAFOBLCM;
  *ppUVar4 = pUVar2;
  thunk_FUN_01c20e04(ppUVar4,pUVar2);
  GOCLIOIANDK<object,_object>___ctor
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<IJCLCKIJJDH,_FGOGONIFJFD>__ctor__);
  UniRx_DisposableExtensions__AddTo<object>
            ((Il2CppObject *)*ppUVar4,
             (System_Collections_Generic_ICollection_IDisposable__o *)*ppUVar3,
             Method_UniRx_DisposableExtensions_AddTo<CompositeDisposable>__);
  return;
}


// ===== private bool FAKAFGPJOIG()  [RVA 0x3530AB4]
// IJCLCKIJJDH$$FAKAFGPJOIG @ RVA 0x3530AB4

bool IJCLCKIJJDH__FAKAFGPJOIG(IJCLCKIJJDH_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Nullable_float__o *__this_00;
  float fVar2;
  float fVar3;
  
  if ((DAT_04568a5b & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    DAT_04568a5b = 1;
  }
  __this_00 = &(__this->fields).OGMPOBAGDMG;
  if ((__this_00->fields).hasValue == false) {
    bVar1 = true;
  }
  else {
    fVar2 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    fVar3 = System_Nullable<float>__get_Value
                      ((System_Nullable_float__o)__this_00,Method_System_Nullable<float>_get_Value__
                      );
    bVar1 = fVar3 < fVar2;
  }
  return bVar1;
}


// ===== private void GAAECCDEKPA(bool HOKBHLPPCAH)  [RVA 0x3530EA4]
// IJCLCKIJJDH$$GAAECCDEKPA @ RVA 0x3530EA4

void IJCLCKIJJDH__GAAECCDEKPA(IJCLCKIJJDH_o *__this,bool HOKBHLPPCAH,MethodInfo *method)

{
  AAPGCAPGBLG_o *__this_00;
  
  __this_00 = (__this->fields).APEEANDPFCG;
  if (__this_00 != (AAPGCAPGBLG_o *)0x0) {
    AAPGCAPGBLG__CKDJOILBJPC(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,HOKBHLPPCAH);
}

