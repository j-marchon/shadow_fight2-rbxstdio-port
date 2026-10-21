// BHNHMJNIAII$$FIKOIBAMMEO @ RVA 0x34B8020

System_String_o * BHNHMJNIAII__FIKOIBAMMEO(System_String_o *EFENHAFFBAG,MethodInfo *method)

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
    FUN_01bab630(&BHNHMJNIAII_TypeInfo);
                    /* try { // try from 035b8054 to 036b805b has its CatchHandler @ 035b805c */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035b8040 with catch @ 035b805c
                       catch(type#2 @ 00000000) { ... } // from try @ 035b8054 with catch @ 035b805c
                        */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_get_Item__);
    FUN_01bab630(&IEJKLPPLHMO_TypeInfo);
    FUN_01bab630(&StringLiteral_15442);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_4515);
    FUN_01bab630(&StringLiteral_1394);
    FUN_01bab630(&StringLiteral_1);
    DAT_045685a5 = 1;
  }
  pSVar4 = StringLiteral_1;
  bVar3 = System_String__IsNullOrEmpty(EFENHAFFBAG,(MethodInfo *)0x0);
  if (bVar3) {
    return pSVar4;
  }
  if (EFENHAFFBAG != (System_String_o *)0x0) {
    pSVar4 = System_String__Trim(EFENHAFFBAG,0x20,(MethodInfo *)0x0);
    pSVar4 = HIKAFDOGMMH__FGBMPLNNFHP(pSVar4,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_o *)0x0) {
      bVar3 = System_String__Contains(pSVar4,StringLiteral_167,(MethodInfo *)0x0);
      if (bVar3) {
        length = System_String__IndexOf(pSVar4,StringLiteral_167,4,(MethodInfo *)0x0);
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
          if ((BHNHMJNIAII_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(BHNHMJNIAII_TypeInfo);
          }
          if (pSVar5 != (System_String_o *)0x0) {
            pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)
                      BHNHMJNIAII_TypeInfo->static_fields->HFAKMNMMBLD;
            key = System_String__ToLower(pSVar5,(MethodInfo *)0x0);
            if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                                (pSVar12,(Il2CppObject *)key,
                                 Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_ContainsKey__
                                );
              if (!bVar3) {
                pSVar4 = System_String__Concat
                                   (StringLiteral_4515,pSVar5,StringLiteral_1394,(MethodInfo *)0x0);
                pSVar5 = System_String__Concat(StringLiteral_15442,pSVar4,(MethodInfo *)0x0);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                }
                UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
                return pSVar4;
              }
              if ((BHNHMJNIAII_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)
                        BHNHMJNIAII_TypeInfo->static_fields->HFAKMNMMBLD;
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
                if ((BHNHMJNIAII_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                if (pSVar4 != (System_String_o *)0x0) {
                  pSVar8 = System_String__Split
                                     (pSVar4,BHNHMJNIAII_TypeInfo->static_fields->AOACINBPMPP,1,
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

