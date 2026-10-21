// PCKJEMMFMKL$$.ctor @ RVA 0x31122E0

/* WARNING: Removing unreachable block (ram,0x0321263c) */

void PCKJEMMFMKL___ctor(PCKJEMMFMKL_o *__this,MethodInfo *method)

{
  int32_t BKFOLMBMFNP;
  ushort uVar1;
  ushort uVar2;
  Il2CppType *handle;
  bool bVar3;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__PCKJEMMFMKL_OMJBBKMFKIJ__o *pSVar4;
  System_Type_o *enumType;
  System_Array_o *__this_00;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  int32_t *piVar8;
  Il2CppObject *__this_01;
  undefined8 *puVar9;
  MethodInfo *extraout_x1;
  System_Collections_IEnumerator_c *pSVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  PCKJEMMFMKL_Fields *pPVar14;
  Il2CppObject IVar15;
  
  if ((DAT_04566595 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_TypeInfo
                );
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&MPAKDCNMLEG_var);
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    FUN_01bab630(&PCKJEMMFMKL_OMJBBKMFKIJ_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04566595 = 1;
    method = extraout_x1;
  }
  pSVar4 = (System_Collections_Generic_Dictionary_MPAKDCNMLEG__PCKJEMMFMKL_OMJBBKMFKIJ__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_TypeInfo
                              ,method);
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
             Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>__ctor__
            );
  pPVar14 = &__this->fields;
  pPVar14->CDMELACPLKK = pSVar4;
  thunk_FUN_01c20e04(pPVar14,pSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  handle = MPAKDCNMLEG_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
                    /* try { // try from 0321240c to 03312457 has its CatchHandler @ 0321240c
                       catch() { ... } // from try @ 0321240c with catch @ 0321240c
                       catch() { ... } // from try @ 03212490 with catch @ 0321240c
                       catch() { ... } // from try @ 032124cc with catch @ 0321240c
                       catch() { ... } // from try @ 032125bc with catch @ 0321240c */
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Enum_TypeInfo);
  }
  __this_00 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_00 == (System_Array_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = System_Array__GetEnumerator(__this_00,(MethodInfo *)0x0);
  if (pSVar5 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar10 = pSVar5->klass;
    uVar1._0_1_ = (pSVar10->_2).rank;
    uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
                    /* try { // try from 03212468 to 0331246f has its CatchHandler @ 03212498 */
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar8 = &((pSVar10->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 03212480 to 03312487 has its CatchHandler @ 03212490 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar6 = pSVar10->vtable + *piVar8;
          goto LAB_032124b0;
        }
        uVar12 = uVar12 - 1;
                    /* try { // try from 0321248c to 0331248f has its CatchHandler @ 03212494 */
        piVar8 = piVar8 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03212480 with catch @ 03212490
                       try { // try from 03212490 to 033124b3 has its CatchHandler @ 0321240c */
      } while (uVar12 != 0);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321248c with catch @ 03212494
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03212468 with catch @ 03212498
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03212458 with catch @ 0321249c
                        */
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_032124b0:
                    /* try { // try from 032124b4 to 033124cb has its CatchHandler @ 032125b4 */
    uVar12 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
    if ((uVar12 & 1) == 0) {
                    /* try { // try from 032125a4 to 033125b3 has its CatchHandler @ 032125b4 */
      plVar7 = (long *)thunk_FUN_01bda71c(pSVar5,System_IDisposable_TypeInfo);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar7;
                    /* catch() { ... } // from try @ 032124b4 with catch @ 032125b4
                       catch() { ... } // from try @ 032125a4 with catch @ 032125b4 */
                    /* try { // try from 032125b8 to 033125bb has its CatchHandler @ 032125c4 */
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* try { // try from 032125bc to 033125c7 has its CatchHandler @ 0321240c */
      if (uVar12 == 0) goto LAB_032125e0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032125b8 with catch @ 032125c4
                        */
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    pSVar10 = pSVar5->klass;
    uVar2._0_1_ = (pSVar10->_2).rank;
    uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
    uVar12 = (ulong)uVar2;
                    /* try { // try from 032124cc to 033125a3 has its CatchHandler @ 0321240c */
    if (uVar12 != 0) {
      piVar8 = &((pSVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar6 = pSVar10->vtable + (*piVar8 + 1);
          goto LAB_03212510;
        }
        uVar12 = uVar12 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar12 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_03212510:
    plVar7 = (long *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (*(Il2CppClass **)(*plVar7 + 0x40) != (MPAKDCNMLEG_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    piVar8 = (int32_t *)thunk_FUN_01bda96c();
    BKFOLMBMFNP = *piVar8;
    bVar3 = OMMDIMHOHLK__JKOMBMIBMBL(BKFOLMBMFNP,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar4 = pPVar14->CDMELACPLKK;
      __this_01 = (Il2CppObject *)thunk_FUN_01bda818(PCKJEMMFMKL_OMJBBKMFKIJ_TypeInfo);
      IVar15 = (Il2CppObject)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(1,(MethodInfo *)0x0);
      __this_01[1] = IVar15;
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      if (pSVar4 == (System_Collections_Generic_Dictionary_MPAKDCNMLEG__PCKJEMMFMKL_OMJBBKMFKIJ__o *
                    )0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,BKFOLMBMFNP,
                 __this_01,
                 Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_Add__
                );
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_032125fc;
    }
  }
LAB_032125e0:
  puVar9 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_032125fc:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
  return;
}

