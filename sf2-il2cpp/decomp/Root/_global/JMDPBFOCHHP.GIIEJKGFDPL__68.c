// TypeDefIndex 68
// Namespace: 
// public class JMDPBFOCHHP.GIIEJKGFDPL : JMDPBFOCHHP.AEDJNABHPOF, GIDPGJAAOJA
// Fields:
//   private static IReadOnlyDictionary<string, string> FFPKMDKAGCE; // 0x0
//   private readonly Dictionary<string, JMDPBFOCHHP.NFKNNOPFJEE> APLBLNHJCMP; // 0x10

// ===== private static void .cctor()  [RVA 0x2FFB920]
// JMDPBFOCHHP.GIIEJKGFDPL$$.cctor @ RVA 0x2FFB920

void JMDPBFOCHHP_GIIEJKGFDPL___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_04565add & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&JMDPBFOCHHP_GIIEJKGFDPL_TypeInfo);
    DAT_04565add = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  JMDPBFOCHHP_GIIEJKGFDPL_TypeInfo->static_fields->FFPKMDKAGCE =
       (System_Collections_Generic_IReadOnlyDictionary_string__string__o *)__this;
  thunk_FUN_01c20e04(JMDPBFOCHHP_GIIEJKGFDPL_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x2FF8F24]
// JMDPBFOCHHP.GIIEJKGFDPL$$.ctor @ RVA 0x2FF8F24

void JMDPBFOCHHP_GIIEJKGFDPL___ctor(JMDPBFOCHHP_GIIEJKGFDPL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ade & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>_TypeInfo);
    DAT_04565ade = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>__ctor__);
  (__this->fields).APLBLNHJCMP =
       (System_Collections_Generic_Dictionary_string__JMDPBFOCHHP_NFKNNOPFJEE__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void LFENGGKOJDO(JMDPBFOCHHP.NFKNNOPFJEE HLDACJIELGJ)  [RVA 0x2FFB9B8]
// JMDPBFOCHHP.GIIEJKGFDPL$$LFENGGKOJDO @ RVA 0x2FFB9B8

void JMDPBFOCHHP_GIIEJKGFDPL__LFENGGKOJDO
               (JMDPBFOCHHP_GIIEJKGFDPL_o *__this,JMDPBFOCHHP_NFKNNOPFJEE_o *HLDACJIELGJ,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04565adf & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>_set_Item__
                );
    DAT_04565adf = 1;
  }
  if ((HLDACJIELGJ != (JMDPBFOCHHP_NFKNNOPFJEE_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).APLBLNHJCMP,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this_00,(Il2CppObject *)(HLDACJIELGJ->fields).NPGIJEJKNKO,
               (Il2CppObject *)HLDACJIELGJ,
               Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>_set_Item__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IELLEFEFFJD()  [RVA 0x2FFBA18]
// JMDPBFOCHHP.GIIEJKGFDPL$$IELLEFEFFJD @ RVA 0x2FFBA18

void JMDPBFOCHHP_GIIEJKGFDPL__IELLEFEFFJD(JMDPBFOCHHP_GIIEJKGFDPL_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  Il2CppClass *pIVar6;
  long lVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  
  if ((DAT_04565ae0 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&System_Collections_Generic_ICollection<GIDPGJAAOJA>_TypeInfo);
    DAT_04565ae0 = 1;
  }
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar6 = pIVar2->klass;
    uVar1._0_1_ = (pIVar6->_2).rank;
    uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pIVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar3 = pIVar6->vtable + (*piVar9 + 3);
          goto LAB_030fbacc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,3);
LAB_030fbacc:
    plVar4 = (long *)(*pVVar3->methodPtr)(pIVar2,pVVar3->method);
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_ICollection_GIDPGJAAOJA__c **)(piVar10 + -2) ==
              System_Collections_Generic_ICollection<GIDPGJAAOJA>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_030fbb38;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01b81914(plVar4,System_Collections_Generic_ICollection<GIDPGJAAOJA>_TypeInfo,2);
LAB_030fbb38:
                    /* WARNING: Could not recover jumptable at 0x030fbb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar4,__this,puVar5[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DGLJCGNHLIG()  [RVA 0x2FFBB54]
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


// ===== public IReadOnlyDictionary<string, string> KNMENIBLFGF(string DDMGAEHAGMN)  [RVA 0x2FFBE34]
// JMDPBFOCHHP.GIIEJKGFDPL$$KNMENIBLFGF @ RVA 0x2FFBE34

System_Collections_Generic_IReadOnlyDictionary_string__string__o *
JMDPBFOCHHP_GIIEJKGFDPL__KNMENIBLFGF
          (JMDPBFOCHHP_GIIEJKGFDPL_o *__this,System_String_o *DDMGAEHAGMN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  void **ppvVar2;
  Il2CppObject *local_28;
  
  if ((DAT_04565ae2 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>_TryGetValue__
                );
    FUN_01bab630(&JMDPBFOCHHP_GIIEJKGFDPL_TypeInfo);
    DAT_04565ae2 = 1;
  }
  local_28 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).APLBLNHJCMP;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)DDMGAEHAGMN,&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>_TryGetValue__
                      );
    if (bVar1) {
      if (local_28 == (Il2CppObject *)0x0) goto LAB_030fbee0;
      ppvVar2 = &local_28[1].monitor;
    }
    else {
      if ((JMDPBFOCHHP_GIIEJKGFDPL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      ppvVar2 = &JMDPBFOCHHP_GIIEJKGFDPL_TypeInfo->static_fields->FFPKMDKAGCE;
    }
    return *ppvVar2;
  }
LAB_030fbee0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

