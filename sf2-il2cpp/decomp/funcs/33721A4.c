// MEFNOMDAJBF$$GHIABNENNKG @ RVA 0x33721A4

/* WARNING: Removing unreachable block (ram,0x03472510) */

int32_t MEFNOMDAJBF__GHIABNENNKG(System_String_o *BPEDBGGKBLO,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppType *handle;
  bool bVar3;
  System_Type_o *enumType;
  System_Array_o *__this;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  int32_t *piVar7;
  System_String_o *b;
  undefined8 *puVar8;
  System_Object_array *args;
  undefined8 uVar9;
  MethodInfo *extraout_x1;
  System_Collections_IEnumerator_c *pSVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int32_t iVar14;
  int iVar15;
  System_Enum_o local_58;
  int32_t local_48;
  
  if ((DAT_04567b2c & 1) == 0) {
    FUN_01bab630(&DPDCBEAOJMO_var);
    FUN_01bab630(&DPDCBEAOJMO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_7836);
    DAT_04567b2c = 1;
    method = extraout_x1;
  }
  handle = DPDCBEAOJMO_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Type_TypeInfo,method);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Enum_TypeInfo);
  }
  __this = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this != (System_Array_o *)0x0) {
    pSVar4 = System_Array__GetEnumerator(__this,(MethodInfo *)0x0);
    if (pSVar4 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar10 = pSVar4->klass;
      uVar1._0_1_ = (pSVar10->_2).rank;
      uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
                    /* try { // try from 034722d4 to 035723d3 has its CatchHandler @ 034722d4
                       catch() { ... } // from try @ 034722d4 with catch @ 034722d4
                       catch() { ... } // from try @ 03472444 with catch @ 034722d4
                       catch() { ... } // from try @ 0347257c with catch @ 034722d4
                       catch() { ... } // from try @ 034725c0 with catch @ 034722d4
                       catch() { ... } // from try @ 034725fc with catch @ 034722d4
                       catch() { ... } // from try @ 0347262c with catch @ 034722d4 */
      if (uVar12 != 0) {
        piVar7 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar5 = pSVar10->vtable + *piVar7;
            goto LAB_03472314;
          }
          uVar12 = uVar12 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar12 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03472314:
      uVar12 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if ((uVar12 & 1) == 0) {
        iVar14 = 0;
        iVar15 = 5;
        goto LAB_034723e8;
      }
      pSVar10 = pSVar4->klass;
      uVar2._0_1_ = (pSVar10->_2).rank;
      uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar7 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar5 = pSVar10->vtable + (*piVar7 + 1);
            goto LAB_03472374;
          }
          uVar12 = uVar12 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar12 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03472374:
      plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(Il2CppClass **)(*plVar6 + 0x40) != (DPDCBEAOJMO_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      piVar7 = (int32_t *)thunk_FUN_01bda96c();
      local_58.klass = (System_Enum_c *)DPDCBEAOJMO_TypeInfo;
      iVar14 = *piVar7;
      local_58.monitor = (void *)0xffffffffffffffff;
      local_48 = iVar14;
      b = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
      bVar3 = System_String__op_Equality(BPEDBGGKBLO,b,(MethodInfo *)0x0);
    } while (!bVar3);
                    /* try { // try from 034723d4 to 035723db has its CatchHandler @ 034725d0 */
    iVar15 = 4;
LAB_034723e8:
    plVar6 = (long *)thunk_FUN_01bda71c(pSVar4,System_IDisposable_TypeInfo);
    if (plVar6 != (long *)0x0) {
      lVar11 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 03472440 to 03572443 has its CatchHandler @ 034725d4 */
                    /* try { // try from 03472444 to 03572543 has its CatchHandler @ 034722d4 */
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03472448;
          }
                    /* try { // try from 03472420 to 03572427 has its CatchHandler @ 034725c8 */
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03472448:
      (*(code *)*puVar8)(plVar6,puVar8[1]);
    }
    if ((iVar15 == 5) || (iVar15 == 0)) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) goto LAB_03472508;
      if ((BPEDBGGKBLO != (System_String_o *)0x0) &&
         (lVar11 = thunk_FUN_01bda71c(BPEDBGGKBLO,(((args->obj).klass)->_1).element_class),
         lVar11 == 0)) {
        uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar9,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)BPEDBGGKBLO;
      thunk_FUN_01c20e04(args->m_Items,BPEDBGGKBLO);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_7836,args,(MethodInfo *)0x0);
      iVar14 = 0;
    }
    return iVar14;
  }
LAB_03472508:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

