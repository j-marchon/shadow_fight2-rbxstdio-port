// BHNHMJNIAII$$CEOCJPLKFNF @ RVA 0x34B87D4

/* WARNING: Removing unreachable block (ram,0x035b8da0) */

void BHNHMJNIAII__CEOCJPLKFNF(IEJKLPPLHMO_o *EFENHAFFBAG,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_string__string__o **ppSVar5;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_Dictionary_object__object__o *pSVar10;
  System_String_array *values;
  System_Type_o *pSVar11;
  System_String_o *pSVar12;
  MethodInfo *extraout_x1;
  IEJKLPPLHMO_c *pIVar13;
  System_Collections_Generic_IEnumerable_TResult__c *pSVar14;
  long lVar15;
  ulong uVar16;
  int32_t *piVar17;
  int *piVar18;
  System_Func_string__string__o *selector;
  
  if ((DAT_045685a8 & 1) == 0) {
    FUN_01bab630(&BHNHMJNIAII_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_ContainsKey__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<string,_string>__);
    FUN_01bab630(&System_Func<string,_string>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&IEJKLPPLHMO_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<string>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&Method_BHNHMJNIAII_<>c_IFIDCADMKDJ__);
    FUN_01bab630(&BHNHMJNIAII_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_818);
    FUN_01bab630(&StringLiteral_15441);
    FUN_01bab630(&StringLiteral_15440);
    FUN_01bab630(&StringLiteral_855);
    DAT_045685a8 = 1;
    method = extraout_x1;
  }
  if (EFENHAFFBAG == (IEJKLPPLHMO_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_15440,(MethodInfo *)0x0);
    return;
  }
  pIVar13 = EFENHAFFBAG->klass;
  uVar1._0_1_ = (pIVar13->_2).rank;
  uVar1._1_1_ = (pIVar13->_2).minimumAlignment;
  uVar16 = (ulong)uVar1;
  if (uVar16 != 0) {
    piVar17 = &((pIVar13->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
          (Il2CppClass *)IEJKLPPLHMO_TypeInfo) {
        pVVar4 = pIVar13->vtable + (*piVar17 + 1);
        goto LAB_035b897c;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(EFENHAFFBAG,IEJKLPPLHMO_TypeInfo,1);
LAB_035b897c:
  source = (System_Collections_Generic_IEnumerable_TSource__o *)
           (*pVVar4->methodPtr)(EFENHAFFBAG,pVVar4->method);
  if ((BHNHMJNIAII_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHNHMJNIAII_<>c_TypeInfo);
  }
  selector = BHNHMJNIAII_<>c_TypeInfo->static_fields->__9__7_0;
  if (selector == (System_Func_string__string__o *)0x0) {
    if ((BHNHMJNIAII_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BHNHMJNIAII_<>c_TypeInfo);
    }
    selector = (System_Func_string__string__o *)
               thunk_FUN_01bda818(System_Func<string,_string>_TypeInfo);
    System_Func<object,_object>___ctor();
    ppSVar5 = &BHNHMJNIAII_<>c_TypeInfo->static_fields->__9__7_0;
    *ppSVar5 = selector;
    thunk_FUN_01c20e04(ppSVar5,selector);
  }
  pSVar6 = System_Linq_Enumerable__Select<object,_object>
                     (source,(System_Func_TSource__TResult__o *)selector,
                      Method_System_Linq_Enumerable_Select<string,_string>__);
  if (pSVar6 == (System_Collections_Generic_IEnumerable_TResult__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar14 = pSVar6->klass;
  uVar2._0_1_ = (pSVar14->_2).rank;
  uVar2._1_1_ = (pSVar14->_2).minimumAlignment;
  uVar16 = (ulong)uVar2;
  if (uVar16 != 0) {
    piVar17 = &((pSVar14->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<string>_TypeInfo) {
        pVVar4 = pSVar14->vtable + *piVar17;
        goto LAB_035b8a80;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  pVVar4 = (VirtualInvokeData *)
           FUN_01b81914(pSVar6,System_Collections_Generic_IEnumerable<string>_TypeInfo,0);
LAB_035b8a80:
                    /* try { // try from 035b8a84 to 036b8cdf has its CatchHandler @ 035b8a84
                       catch() { ... } // from try @ 035b8a84 with catch @ 035b8a84
                       catch() { ... } // from try @ 035b8e78 with catch @ 035b8a84
                       catch() { ... } // from try @ 035b916c with catch @ 035b8a84
                       catch() { ... } // from try @ 035b9174 with catch @ 035b8a84
                       catch() { ... } // from try @ 035b926c with catch @ 035b8a84 */
  plVar7 = (long *)(*pVVar4->methodPtr)(pSVar6,pVVar4->method);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar15 = *plVar7;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar18 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar8 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_035b8b08;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_035b8b08:
    uVar16 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar16 & 1) == 0) {
LAB_035b8d0c:
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar15 = *plVar7;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 == 0) goto LAB_035b8d48;
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      break;
    }
    lVar15 = *plVar7;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_string__c **)(piVar18 + -2) ==
            System_Collections_Generic_IEnumerator<string>_TypeInfo) {
          puVar8 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_035b8b64;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01b81914(plVar7,System_Collections_Generic_IEnumerator<string>_TypeInfo,0);
LAB_035b8b64:
    pSVar9 = (System_String_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((BHNHMJNIAII_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
              BHNHMJNIAII_TypeInfo->static_fields->HFAKMNMMBLD;
    if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<object,_object>__ContainsKey
              (pSVar10,(Il2CppObject *)pSVar9,
               Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_ContainsKey__);
    pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
              BHNHMJNIAII_TypeInfo->static_fields->HFAKMNMMBLD;
    if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar10,(Il2CppObject *)pSVar9,
                       Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_ContainsKey__
                      );
    if (bVar3) {
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035b8da8 to 036b8daf has its CatchHandler @ 035b9198 */
        FUN_01bab8c8();
      }
      if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[0] = StringLiteral_15441;
      thunk_FUN_01c20e04();
      pSVar11 = System_Object__GetType((Il2CppObject *)EFENHAFFBAG,(MethodInfo *)0x0);
      if (pSVar11 == (System_Type_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar12 = (System_String_o *)
                (*(pSVar11->klass->vtable)._8_unknown.methodPtr)
                          (pSVar11,(pSVar11->klass->vtable)._8_unknown.method);
      if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[1] = pSVar12;
      thunk_FUN_01c20e04();
      if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035b8db8 to 036b8dbf has its CatchHandler @ 035b91a8 */
        FUN_01bab8d0();
      }
      values->m_Items[2] = StringLiteral_818;
      thunk_FUN_01c20e04();
      if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[3] = pSVar9;
      thunk_FUN_01c20e04(values->m_Items + 3,pSVar9);
      if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035b8dc0 to 036b8dcb has its CatchHandler @ 035b91ac */
        FUN_01bab8d0();
      }
      values->m_Items[4] = StringLiteral_855;
      thunk_FUN_01c20e04();
      pSVar9 = System_String__Concat(values,(MethodInfo *)0x0);
                    /* try { // try from 035b8ce0 to 036b8d07 has its CatchHandler @ 035b91b4 */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
      goto LAB_035b8d0c;
    }
    if ((BHNHMJNIAII_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
              BHNHMJNIAII_TypeInfo->static_fields->HFAKMNMMBLD;
    if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<object,_object>__Add
              (pSVar10,(Il2CppObject *)pSVar9,(Il2CppObject *)EFENHAFFBAG,
               Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_Add__);
  } while( true );
  while( true ) {
                    /* try { // try from 035b8d3c to 036b8d67 has its CatchHandler @ 035b91b0 */
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
    if (*(System_IDisposable_c **)(piVar18 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_035b8d64;
    }
  }
LAB_035b8d48:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_035b8d64:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}

