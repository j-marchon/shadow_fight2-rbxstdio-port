// JMDPBFOCHHP.GIIEJKGFDPL$$DGLJCGNHLIG @ RVA 0x2FFBB54

void JMDPBFOCHHP_GIIEJKGFDPL__DGLJCGNHLIG(JMDPBFOCHHP_GIIEJKGFDPL_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  Il2CppClass *pIVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_a8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_04565ae1 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>_Clear__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>_GetEnumerator__
                );
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_JMDPBFOCHHP_NFKNNOPFJEE>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_JMDPBFOCHHP_NFKNNOPFJEE>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_JMDPBFOCHHP_NFKNNOPFJEE>_get_Current__
                );
    FUN_01bab630(&System_Collections_Generic_ICollection<GIDPGJAAOJA>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_JMDPBFOCHHP_NFKNNOPFJEE>_get_Value__
                );
    DAT_04565ae1 = 1;
  }
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).APLBLNHJCMP;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_a8,pSVar3,
               Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>_GetEnumerator__
              );
    local_80.fields._version = local_a8.fields._version;
    local_80.fields._index = local_a8.fields._index;
    local_80.fields._dictionary = local_a8.fields._dictionary;
    local_80.fields._current.fields.value = local_a8.fields._current.fields.value;
    local_80.fields._current.fields.key = local_a8.fields._current.fields.key;
    local_80.fields._getEnumeratorRetType = local_a8.fields._getEnumeratorRetType;
    local_80.fields._36_4_ = local_a8.fields._36_4_;
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_JMDPBFOCHHP_NFKNNOPFJEE>_MoveNext__
                        );
      if (!bVar2) break;
      if (local_80.fields._current.fields.value == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_80.fields._current.fields.value[1].monitor ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (local_80.fields._current.fields.value[1].monitor,
                 Method_System_Collections_Generic_Dictionary<string,_string>_Clear__);
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_80,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_JMDPBFOCHHP_NFKNNOPFJEE>_Dispose__
              );
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).APLBLNHJCMP
    ;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar3,
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>_Clear__
                );
      pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar8 = pIVar4->klass;
        uVar1._0_1_ = (pIVar8->_2).rank;
        uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) {
          piVar11 = &((pIVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar5 = pIVar8->vtable + (*piVar11 + 3);
              goto LAB_030fbd18;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,3);
LAB_030fbd18:
        plVar6 = (long *)(*pVVar5->methodPtr)(pIVar4,pVVar5->method);
        if (plVar6 != (long *)0x0) {
          lVar9 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_ICollection_GIDPGJAAOJA__c **)(piVar12 + -2) ==
                  System_Collections_Generic_ICollection<GIDPGJAAOJA>_TypeInfo) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 6) * 0x10 + 0x138);
                goto LAB_030fbd7c;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01b81914(plVar6,System_Collections_Generic_ICollection<GIDPGJAAOJA>_TypeInfo,
                                6);
LAB_030fbd7c:
          (*(code *)*puVar7)(plVar6,__this,puVar7[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

