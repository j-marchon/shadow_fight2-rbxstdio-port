// Original name: Nekki.SF2.Core.Console.ConsoleDatabase  (obfuscated BHNHMJNIAII)
// TypeDefIndex 3046
// Namespace: 
// public static class ConsoleDatabase
// Fields:
//   private const string HIDNFCHNDMM = " ";
//   private static readonly char[] AOACINBPMPP; // 0x0
//   private static readonly Dictionary<string, IEJKLPPLHMO> HFAKMNMMBLD; // 0x8

// ===== private static void .cctor()  [RVA 0x34B7F40]
// ConsoleDatabase$$.cctor @ RVA 0x34B7F40

void ConsoleDatabase___cctor(MethodInfo *method)

{
  System_Char_array *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_string__IEJKLPPLHMO__o **ppSVar2;
  
  if ((DAT_045685a4 & 1) == 0) {
    FUN_01bab630(&ConsoleDatabase_TypeInfo);
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_TypeInfo);
                    /* try { // try from 035b7f8c to 036b7fa7 has its CatchHandler @ 035b7fec */
    DAT_045685a4 = 1;
  }
  pSVar1 = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
  if (pSVar1 != (System_Char_array *)0x0) {
                    /* try { // try from 035b7fa8 to 036b7fcf has its CatchHandler @ 035b7e44 */
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = 0x20;
                    /* try { // try from 035b7fd0 to 036b7fd7 has its CatchHandler @ 035b7ff0 */
      ConsoleDatabase_TypeInfo->static_fields->AOACINBPMPP = pSVar1;
                    /* try { // try from 035b7fd8 to 036b7fe7 has its CatchHandler @ 035b7ffc */
      thunk_FUN_01c20e04(ConsoleDatabase_TypeInfo->static_fields);
                    /* try { // try from 035b7fe8 to 036b8013 has its CatchHandler @ 035b7e44 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7f8c with catch @ 035b7fec
                        */
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               thunk_FUN_01bda818(
                                 System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_TypeInfo
                                 );
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7fd0 with catch @ 035b7ff0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7f34 with catch @ 035b7ff4
                        */
      System_Collections_Generic_Dictionary<object,_object>___ctor
                (__this,Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>__ctor__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7fd8 with catch @ 035b7ffc
                        */
      ppSVar2 = &ConsoleDatabase_TypeInfo->static_fields->HFAKMNMMBLD;
      *ppSVar2 = (System_Collections_Generic_Dictionary_string__IEJKLPPLHMO__o *)__this;
                    /* try { // try from 035b8014 to 036b8017 has its CatchHandler @ 035b8038 */
      thunk_FUN_01c20e04(ppSVar2,__this);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035b8018 to 036b803f has its CatchHandler @ 035b7e44 */
  FUN_01bab8c8();
}


// ===== public static string FIKOIBAMMEO(string EFENHAFFBAG)  [RVA 0x34B8020]
// ConsoleDatabase$$FIKOIBAMMEO @ RVA 0x34B8020

System_String_o * ConsoleDatabase__FIKOIBAMMEO(System_String_o *EFENHAFFBAG,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int32_t length;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *key;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  System_String_array *pSVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_Collections_Generic_Dictionary_object__object__o *pSVar12;
  
                    /* catch() { ... } // from try @ 035b8014 with catch @ 035b8038 */
                    /* try { // try from 035b8040 to 036b8047 has its CatchHandler @ 035b805c */
  if ((DAT_045685a5 & 1) == 0) {
                    /* try { // try from 035b8048 to 036b8053 has its CatchHandler @ 035b7e44 */
    FUN_01bab630(&ConsoleDatabase_TypeInfo);
                    /* try { // try from 035b8054 to 036b805b has its CatchHandler @ 035b805c */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035b8040 with catch @ 035b805c
                       catch(type#2 @ 00000000) { ... } // from try @ 035b8054 with catch @ 035b805c
                        */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_get_Item__);
    FUN_01bab630(&IEJKLPPLHMO_TypeInfo);
    FUN_01bab630(&StringLiteral_15442/*"[ConsoleDatabase] "*/);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_4515/*"Command not found: "*/);
    FUN_01bab630(&StringLiteral_1394/*". Use 'help' to see all commands"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045685a5 = 1;
  }
  pSVar4 = StringLiteral_1/*""*/;
  bVar3 = System_String__IsNullOrEmpty(EFENHAFFBAG,(MethodInfo *)0x0);
  if (bVar3) {
    return pSVar4;
  }
  if (EFENHAFFBAG != (System_String_o *)0x0) {
    pSVar4 = System_String__Trim(EFENHAFFBAG,0x20,(MethodInfo *)0x0);
    pSVar4 = HIKAFDOGMMH__FGBMPLNNFHP(pSVar4,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_o *)0x0) {
      bVar3 = System_String__Contains(pSVar4,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
      if (bVar3) {
        length = System_String__IndexOf(pSVar4,StringLiteral_167/*" "*/,4,(MethodInfo *)0x0);
      }
      else {
        length = (pSVar4->fields)._stringLength;
      }
      pSVar5 = System_String__Substring(pSVar4,0,length,(MethodInfo *)0x0);
      if (pSVar5 != (System_String_o *)0x0) {
        pSVar5 = System_String__ToLower(pSVar5,(MethodInfo *)0x0);
        pSVar4 = System_String__Remove(pSVar4,0,length,(MethodInfo *)0x0);
        if (pSVar4 != (System_String_o *)0x0) {
          pSVar4 = System_String__Trim(pSVar4,0x20,(MethodInfo *)0x0);
          if ((ConsoleDatabase_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(ConsoleDatabase_TypeInfo);
          }
          if (pSVar5 != (System_String_o *)0x0) {
            pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)
                      ConsoleDatabase_TypeInfo->static_fields->HFAKMNMMBLD;
            key = System_String__ToLower(pSVar5,(MethodInfo *)0x0);
            if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                                (pSVar12,(Il2CppObject *)key,
                                 Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_ContainsKey__
                                );
              if (!bVar3) {
                pSVar4 = System_String__Concat
                                   (StringLiteral_4515/*"Command not found: "*/,pSVar5,StringLiteral_1394/*". Use 'help' to see all commands"*/,(MethodInfo *)0x0);
                pSVar5 = System_String__Concat(StringLiteral_15442/*"[ConsoleDatabase] "*/,pSVar4,(MethodInfo *)0x0);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                }
                UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
                return pSVar4;
              }
              if ((ConsoleDatabase_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)
                        ConsoleDatabase_TypeInfo->static_fields->HFAKMNMMBLD;
              if ((pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                 (pIVar6 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                                     (pSVar12,(Il2CppObject *)pSVar5,
                                      Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_get_Item__
                                     ), pIVar6 != (Il2CppObject *)0x0)) {
                pIVar9 = pIVar6->klass;
                uVar1._0_1_ = (pIVar9->_2).rank;
                uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
                uVar10 = (ulong)uVar1;
                if (uVar10 != 0) {
                  piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                        (Il2CppClass *)IEJKLPPLHMO_TypeInfo) {
                      pVVar7 = pIVar9->vtable + (*piVar11 + 4);
                      goto LAB_035b82f0;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar6,IEJKLPPLHMO_TypeInfo,4);
LAB_035b82f0:
                uVar10 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
                if ((uVar10 & 1) != 0) {
                  if (pSVar4 == (System_String_o *)0x0) goto LAB_035b83b0;
                  pSVar4 = System_String__ToLower(pSVar4,(MethodInfo *)0x0);
                }
                if ((ConsoleDatabase_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                if (pSVar4 != (System_String_o *)0x0) {
                  pSVar8 = System_String__Split
                                     (pSVar4,ConsoleDatabase_TypeInfo->static_fields->AOACINBPMPP,1,
                                      (MethodInfo *)0x0);
                  pIVar9 = pIVar6->klass;
                  uVar2._0_1_ = (pIVar9->_2).rank;
                  uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
                  uVar10 = (ulong)uVar2;
                  if (uVar10 != 0) {
                    piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                          (Il2CppClass *)IEJKLPPLHMO_TypeInfo) {
                        pVVar7 = pIVar9->vtable + *piVar11;
                        goto LAB_035b8394;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar6,IEJKLPPLHMO_TypeInfo,0);
LAB_035b8394:
                    /* WARNING: Could not recover jumptable at 0x035b83ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pSVar4 = (System_String_o *)(*pVVar7->methodPtr)(pIVar6,pSVar8,pVVar7->method);
                  return pSVar4;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_035b83b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void MEMCLBNDLGC(IEnumerable<string> FPEHEJBLCAO)  [RVA 0x34B83B4]
// ConsoleDatabase$$MEMCLBNDLGC @ RVA 0x34B83B4

/* WARNING: Removing unreachable block (ram,0x035b8644) */

void ConsoleDatabase__MEMCLBNDLGC
               (System_Collections_Generic_IEnumerable_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_IEnumerable_string__c *pSVar6;
  long lVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = FPEHEJBLCAO;
  if ((DAT_045685a6 & 1) == 0) {
    FUN_01bab630(&ConsoleDatabase_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_Remove__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<string>_TypeInfo);
    auVar11 = FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_045685a6 = 1;
  }
  if (FPEHEJBLCAO == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
  }
  pSVar6 = FPEHEJBLCAO->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<string>_TypeInfo) {
        pVVar2 = pSVar6->vtable + *piVar9;
        goto LAB_035b8480;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(FPEHEJBLCAO,System_Collections_Generic_IEnumerable<string>_TypeInfo,0);
LAB_035b8480:
  plVar3 = (long *)(*pVVar2->methodPtr)(FPEHEJBLCAO,pVVar2->method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_035b8508;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_035b8508:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_035b85f0;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_string__c **)(piVar10 + -2) ==
            System_Collections_Generic_IEnumerator<string>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_035b8564;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01b81914(plVar3,System_Collections_Generic_IEnumerator<string>_TypeInfo,0);
LAB_035b8564:
    pSVar5 = (System_String_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((ConsoleDatabase_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pSVar5 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             ConsoleDatabase_TypeInfo->static_fields->HFAKMNMMBLD;
    pSVar5 = System_String__ToLower(pSVar5,(MethodInfo *)0x0);
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<object,_object>__Remove
              (__this,(Il2CppObject *)pSVar5,
               Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_Remove__);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar10 = piVar10 + 4;
    if (uVar8 == 0) break;
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_035b860c;
    }
  }
LAB_035b85f0:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_035b860c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public static void MEMCLBNDLGC(IEJKLPPLHMO EFENHAFFBAG)  [RVA 0x34B8700]
// ConsoleDatabase$$MEMCLBNDLGC @ RVA 0x34B8700

void ConsoleDatabase__MEMCLBNDLGC(IEJKLPPLHMO_o *EFENHAFFBAG,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  IEJKLPPLHMO_c *pIVar3;
  ulong uVar4;
  int32_t *piVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = EFENHAFFBAG;
  if ((DAT_045685a7 & 1) == 0) {
    FUN_01bab630(&ConsoleDatabase_TypeInfo);
    auVar6 = FUN_01bab630(&IEJKLPPLHMO_TypeInfo);
    DAT_045685a7 = 1;
  }
  if (EFENHAFFBAG == (IEJKLPPLHMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
  }
  pIVar3 = EFENHAFFBAG->klass;
  uVar1._0_1_ = (pIVar3->_2).rank;
  uVar1._1_1_ = (pIVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pIVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)IEJKLPPLHMO_TypeInfo) {
        pVVar2 = pIVar3->vtable + (*piVar5 + 1);
        goto LAB_035b879c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(EFENHAFFBAG,IEJKLPPLHMO_TypeInfo,1);
LAB_035b879c:
  auVar6 = (*pVVar2->methodPtr)(EFENHAFFBAG,pVVar2->method);
  method_00 = auVar6._8_8_;
  if ((ConsoleDatabase_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ConsoleDatabase_TypeInfo);
    method_00 = extraout_x1;
  }
  ConsoleDatabase__MEMCLBNDLGC(auVar6._0_8_,method_00);
  return;
}


// ===== public static void CEOCJPLKFNF(IEJKLPPLHMO EFENHAFFBAG)  [RVA 0x34B87D4]
// ConsoleDatabase$$CEOCJPLKFNF @ RVA 0x34B87D4

/* WARNING: Removing unreachable block (ram,0x035b8da0) */

void ConsoleDatabase__CEOCJPLKFNF(IEJKLPPLHMO_o *EFENHAFFBAG,MethodInfo *method)

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
    FUN_01bab630(&ConsoleDatabase_TypeInfo);
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
    FUN_01bab630(&ConsoleDatabase_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_818/*"' have already registered name '"*/);
    FUN_01bab630(&StringLiteral_15441/*"[ConsoleDatabase.RegisterCommand] Command '"*/);
    FUN_01bab630(&StringLiteral_15440/*"[ConsoleDatabase.RegisterCommand] Call with null argument."*/);
    FUN_01bab630(&StringLiteral_855/*"'! Skip..."*/);
    DAT_045685a8 = 1;
    method = extraout_x1;
  }
  if (EFENHAFFBAG == (IEJKLPPLHMO_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_15440/*"[ConsoleDatabase.RegisterCommand] Call with null argument."*/,(MethodInfo *)0x0);
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
  if ((ConsoleDatabase_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ConsoleDatabase_<>c_TypeInfo);
  }
  selector = ConsoleDatabase_<>c_TypeInfo->static_fields->__9__7_0;
  if (selector == (System_Func_string__string__o *)0x0) {
    if ((ConsoleDatabase_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(ConsoleDatabase_<>c_TypeInfo);
    }
    selector = (System_Func_string__string__o *)
               thunk_FUN_01bda818(System_Func<string,_string>_TypeInfo);
    System_Func<object,_object>___ctor();
    ppSVar5 = &ConsoleDatabase_<>c_TypeInfo->static_fields->__9__7_0;
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
    if ((ConsoleDatabase_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
              ConsoleDatabase_TypeInfo->static_fields->HFAKMNMMBLD;
    if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<object,_object>__ContainsKey
              (pSVar10,(Il2CppObject *)pSVar9,
               Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_ContainsKey__);
    pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
              ConsoleDatabase_TypeInfo->static_fields->HFAKMNMMBLD;
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
      values->m_Items[0] = StringLiteral_15441/*"[ConsoleDatabase.RegisterCommand] Command '"*/;
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
      values->m_Items[2] = StringLiteral_818/*"' have already registered name '"*/;
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
      values->m_Items[4] = StringLiteral_855/*"'! Skip..."*/;
      thunk_FUN_01c20e04();
      pSVar9 = System_String__Concat(values,(MethodInfo *)0x0);
                    /* try { // try from 035b8ce0 to 036b8d07 has its CatchHandler @ 035b91b4 */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
      goto LAB_035b8d0c;
    }
    if ((ConsoleDatabase_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
              ConsoleDatabase_TypeInfo->static_fields->HFAKMNMMBLD;
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


// ===== public static IReadOnlyDictionary<string, IEJKLPPLHMO> PKOJIHEMGMN()  [RVA 0x34B8EB0]
// ConsoleDatabase$$PKOJIHEMGMN @ RVA 0x34B8EB0

System_Collections_Generic_IReadOnlyDictionary_string__IEJKLPPLHMO__o *
ConsoleDatabase__PKOJIHEMGMN(MethodInfo *method)

{
  if ((DAT_045685a9 & 1) == 0) {
    FUN_01bab630(&ConsoleDatabase_TypeInfo);
    DAT_045685a9 = 1;
  }
  if ((ConsoleDatabase_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return (System_Collections_Generic_IReadOnlyDictionary_string__IEJKLPPLHMO__o *)
         ConsoleDatabase_TypeInfo->static_fields->HFAKMNMMBLD;
}

