// TypeDefIndex 3236
// Namespace: 
// public class KEIAEKNFNNA : IDisposable
// Fields:
//   private FMOAMIIOKNP JEPHJLEICLO; // 0x10
//   private LocalDailyConfig DCAEFFHDMGE; // 0x18
//   private Action PJFFBLOPKBC; // 0x20
//   private const string JACKBOCIHHA = "LocalDaily";
//   private bool EOPAAFGEJAE; // 0x28
//   private readonly CompositeDisposable IHADHPMEOFI; // 0x30
//   private readonly SerialDisposable BGIOGEDMPOH; // 0x38

// ===== public void .ctor()  [RVA 0x350679C]
// KEIAEKNFNNA$$.ctor @ RVA 0x350679C

void KEIAEKNFNNA___ctor(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  UniRx_SerialDisposable_o *__this_01;
  UniRx_SerialDisposable_o **ppUVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 036067c4 to 03706a9f has its CatchHandler @ 036067c4
                       catch() { ... } // from try @ 036067c4 with catch @ 036067c4
                       catch() { ... } // from try @ 03606adc with catch @ 036067c4
                       catch() { ... } // from try @ 03606ba4 with catch @ 036067c4
                       catch() { ... } // from try @ 03606bac with catch @ 036067c4
                       catch() { ... } // from try @ 03606be0 with catch @ 036067c4
                       catch() { ... } // from try @ 03606c20 with catch @ 036067c4 */
  if ((DAT_045688a1 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_045688a1 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).IHADHPMEOFI;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  __this_01 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo);
  UniRx_SerialDisposable___ctor(__this_01,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).BGIOGEDMPOH;
  *ppUVar2 = __this_01;
  thunk_FUN_01c20e04(ppUVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void MBLOPJIFOMC(MPAKDCNMLEG ACCIHBHMFPN)  [RVA 0x3506848]
// KEIAEKNFNNA$$MBLOPJIFOMC @ RVA 0x3506848

/* WARNING: Removing unreachable block (ram,0x03606c6c) */
/* WARNING: Removing unreachable block (ram,0x03606b54) */

void KEIAEKNFNNA__MBLOPJIFOMC(KEIAEKNFNNA_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  PCKJEMMFMKL_o *__this_00;
  PCKJEMMFMKL_OMJBBKMFKIJ_o *pPVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  OPHDIHJPHDE_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  FMOAMIIOKNP_o *pFVar9;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__c *pSVar10;
  long lVar11;
  System_Collections_Generic_List_T__o *__this_02;
  System_Action_o *pSVar12;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  Core_Configs_Models_LocalDailyQuestInfo_o *pCVar16;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *pSVar17;
  int iVar18;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CJNHFNHJHPE;
  int local_68;
  
  if ((DAT_045688a2 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MPAKDCNMLEG>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MPAKDCNMLEG>_get_Count__);
    DAT_045688a2 = 1;
  }
  __this_00 = PCKJEMMFMKL__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 == (PCKJEMMFMKL_o *)0x0) {
LAB_03606c68:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = PCKJEMMFMKL__NNAIMOIPHEE(__this_00,ACCIHBHMFPN,(MethodInfo *)0x0);
  if (pPVar5 == (PCKJEMMFMKL_OMJBBKMFKIJ_o *)0x0) {
    CJNHFNHJHPE = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(1,(MethodInfo *)0x0);
  }
  else {
    CJNHFNHJHPE = (pPVar5->fields).HFBHMJBLLOI.fields;
  }
  iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CJNHFNHJHPE,(MethodInfo *)0x0)
  ;
  if (0 < iVar4) {
    bVar2 = false;
    iVar18 = 0;
    local_68 = -1;
    do {
      pFVar9 = (__this->fields).JEPHJLEICLO;
      if ((pFVar9 == (FMOAMIIOKNP_o *)0x0) ||
         (pSVar17 = (pFVar9->fields)._APDMACJCLEG_k__BackingField,
         pSVar17 == (System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *)0x0))
      goto LAB_03606c68;
      pSVar10 = pSVar17->klass;
      uVar1._0_1_ = (pSVar10->_2).rank;
      uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar13 = (ulong)uVar1;
      if (uVar13 != 0) {
        piVar14 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo) {
            pVVar6 = pSVar10->vtable + *piVar14;
            goto LAB_036069a4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(pSVar17,System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo,0);
LAB_036069a4:
      plVar7 = (long *)(*pVVar6->methodPtr)(pSVar17,pVVar6->method);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03606ba0 to 03706ba3 has its CatchHandler @ 03606bbc */
        FUN_01bab8c8();
      }
      do {
        do {
          lVar11 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03606a04;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03606a04:
          uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if ((uVar13 & 1) == 0) goto LAB_03606ae8;
          lVar11 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerator_OPHDIHJPHDE__c **)(piVar15 + -2) ==
                  System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo) {
                puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03606a60;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_01b81914(plVar7,System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo,
                                0);
LAB_03606a60:
          __this_01 = (OPHDIHJPHDE_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
          if (__this_01 == (OPHDIHJPHDE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        } while ((__this_01->fields)._DJAIGGFHPMK_k__BackingField != false);
        pCVar16 = (__this_01->fields)._DMCIAIBPJGN_k__BackingField;
        if (pCVar16 == (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while ((pCVar16->fields)._AdsTargetCount_k__BackingField <=
               (__this_01->fields)._PKGCKALOMOF_k__BackingField);
      __this_02 = (System_Collections_Generic_List_T__o *)(pCVar16->fields)._AdsType_k__BackingField
      ;
      if (__this_02 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03606ba8 to 03706bab has its CatchHandler @ 03606bac */
        FUN_01bab8c8();
      }
                    /* try { // try from 03606aa0 to 03706aa7 has its CatchHandler @ 03606bc4 */
                    /* try { // try from 03606abc to 03706ac3 has its CatchHandler @ 03606bc0 */
      if (((__this_02->fields)._size < 1) ||
         (bVar3 = System_Collections_Generic_List<Int32Enum>__Contains
                            (__this_02,ACCIHBHMFPN,
                             Method_System_Collections_Generic_List<MPAKDCNMLEG>_Contains__), bVar3)
         ) {
        OPHDIHJPHDE__IIDDCHPCAPP(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 03606ad4 to 03706adb has its CatchHandler @ 03606bb8 */
        if (local_68 == -1) {
          local_68 = (pCVar16->fields)._Id_k__BackingField;
        }
        bVar2 = true;
      }
LAB_03606ae8:
      if (plVar7 != (long *)0x0) {
        lVar11 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03606b3c;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03606b3c:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
      }
      method_02 = (MethodInfo *)0x0;
      iVar18 = iVar18 + 1;
      iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CJNHFNHJHPE,
                         (MethodInfo *)0x0);
    } while (iVar18 < iVar4);
    if (bVar2) {
      KEIAEKNFNNA__OPIPNIPKEKA(__this,method_00);
      KEIAEKNFNNA__MGNAAFCFIEH(__this,method_01);
                    /* catch() { ... } // from try @ 03606bdc with catch @ 03606c08 */
      if (-1 < local_68) {
        KEIAEKNFNNA__HHANNAPHADA(__this,local_68,method_02);
      }
      pSVar12 = (__this->fields).PJFFBLOPKBC;
                    /* try { // try from 03606c18 to 03706c1f has its CatchHandler @ 03606c34 */
      if (pSVar12 != (System_Action_o *)0x0) {
                    /* try { // try from 03606c20 to 03706c2b has its CatchHandler @ 036067c4 */
                    /* try { // try from 03606c2c to 03706c33 has its CatchHandler @ 03606c34 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03606c18 with catch @ 03606c34
                       catch(type#2 @ 00000000) { ... } // from try @ 03606c2c with catch @ 03606c34
                        */
                    /* try { // try from 03606c38 to 0370754f has its CatchHandler @ 03606c38
                       catch() { ... } // from try @ 03606c38 with catch @ 03606c38
                       catch() { ... } // from try @ 03607588 with catch @ 03606c38
                       catch() { ... } // from try @ 03607fdc with catch @ 03606c38
                       catch() { ... } // from try @ 03608014 with catch @ 03606c38
                       catch() { ... } // from try @ 03608050 with catch @ 03606c38 */
                    /* WARNING: Could not recover jumptable at 0x03606c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar12->fields).super.super.invoke_impl)
                  ((pSVar12->fields).super.super.method_code,(pSVar12->fields).super.super.method);
        return;
      }
    }
  }
  return;
}


// ===== public void GIENGNEGHPJ()  [RVA 0x3507228]
// KEIAEKNFNNA$$GIENGNEGHPJ @ RVA 0x3507228

void KEIAEKNFNNA__GIENGNEGHPJ(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  Core_Configs_Models_LocalDailyConfig_o *pCVar1;
  KKEKKPIDGBK_o *KMIOAIFNJJD;
  System_IObservable_MPAKDCNMLEG__o *source;
  System_Func_MPAKDCNMLEG__bool__o **ppSVar2;
  System_IObservable_T__o *source_00;
  System_Action_T__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Action_Action__o **ppSVar5;
  System_IObservable_Unit__o *source_01;
  NCNJEIBHGBH_o *ELHFHAPBFMI;
  System_IObservable_FKNCNNOOOIO__o *source_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_Action__o *addHandler;
  System_Func_MPAKDCNMLEG__bool__o *predicate;
  System_Action_Action__o *removeHandler;
  
  if ((DAT_045688a3 & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<MPAKDCNMLEG,_bool>_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<LocalDailyConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_KEIAEKNFNNA_BONGFCFJNPN__);
    FUN_01bab630(&Method_KEIAEKNFNNA_MBLOPJIFOMC__);
    FUN_01bab630(&Method_KEIAEKNFNNA_OGDOLKAGBGJ__);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<FKNCNNOOOIO>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<MPAKDCNMLEG>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<MPAKDCNMLEG>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_KEIAEKNFNNA_<>c_HHPMABOIHIO__);
    FUN_01bab630(&Method_KEIAEKNFNNA_<>c_KPDBPHNOALH__);
    FUN_01bab630(&Method_KEIAEKNFNNA_<>c_MNHPOELABEN__);
    FUN_01bab630(&KEIAEKNFNNA_<>c_TypeInfo);
    DAT_045688a3 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).EOPAAFGEJAE == false) {
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
    }
    pCVar1 = (Core_Configs_Models_LocalDailyConfig_o *)
             IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<LocalDailyConfig>__);
    (__this->fields).DCAEFFHDMGE = pCVar1;
    thunk_FUN_01c20e04();
    KEIAEKNFNNA__FIHIDMOGGFA(__this,method_00);
    KEIAEKNFNNA__EHKKBKHGDHE(__this,method_01);
    if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    KMIOAIFNJJD = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
    source = EBBCMCKFDAE__LEIIBMPCMGC(KMIOAIFNJJD,(MethodInfo *)0x0);
    if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KEIAEKNFNNA_<>c_TypeInfo);
    }
    predicate = KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__15_0;
    if (predicate == (System_Func_MPAKDCNMLEG__bool__o *)0x0) {
      if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(KEIAEKNFNNA_<>c_TypeInfo);
      }
      predicate = (System_Func_MPAKDCNMLEG__bool__o *)
                  thunk_FUN_01bda818(System_Func<MPAKDCNMLEG,_bool>_TypeInfo);
      System_Func<Int32Enum,_bool>___ctor();
      ppSVar2 = &KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__15_0;
      *ppSVar2 = predicate;
      thunk_FUN_01c20e04(ppSVar2,predicate);
    }
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    source_00 = UniRx_Observable__Where<Int32Enum>
                          ((System_IObservable_T__o *)source,(System_Func_T__bool__o *)predicate,
                           Method_UniRx_Observable_Where<MPAKDCNMLEG>__);
    pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    pIVar4 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<Int32Enum>
                       (source_00,pSVar3,Method_UniRx_ObservableExtensions_Subscribe<MPAKDCNMLEG>__)
    ;
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).IHADHPMEOFI,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    addHandler = KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__15_1;
    if (addHandler == (System_Action_Action__o *)0x0) {
      if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar5 = &KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__15_1;
                    /* try { // try from 03607550 to 03707557 has its CatchHandler @ 03607ff8 */
      *ppSVar5 = addHandler;
      thunk_FUN_01c20e04(ppSVar5,addHandler);
    }
    if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 03607568 to 03707577 has its CatchHandler @ 03607ff4 */
    }
    removeHandler = KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__15_2;
    if (removeHandler == (System_Action_Action__o *)0x0) {
                    /* try { // try from 0360757c to 03707587 has its CatchHandler @ 03607fe4 */
      if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03607588 to 03707fcf has its CatchHandler @ 03606c38 */
      removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar5 = &KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__15_2;
      *ppSVar5 = removeHandler;
      thunk_FUN_01c20e04(ppSVar5,removeHandler);
    }
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    source_01 = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
    pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
    System_Action<Unit>___ctor();
    pIVar4 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<Unit>
                       ((System_IObservable_T__o *)source_01,pSVar3,
                        Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).IHADHPMEOFI,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    ELHFHAPBFMI = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
    source_02 = NILODIIEDJE__GNABHMFOLKD(ELHFHAPBFMI,(MethodInfo *)0x0);
    pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
    System_Action<object>___ctor();
    pIVar4 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<object>
                       ((System_IObservable_T__o *)source_02,pSVar3,
                        Method_UniRx_ObservableExtensions_Subscribe<FKNCNNOOOIO>__);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).IHADHPMEOFI,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    (__this->fields).EOPAAFGEJAE = true;
  }
  return;
}


// ===== public void PBGLGLCDHKF()  [RVA 0x3507810]
// KEIAEKNFNNA$$PBGLGLCDHKF @ RVA 0x3507810

/* WARNING: Removing unreachable block (ram,0x03607c20) */

void KEIAEKNFNNA__PBGLGLCDHKF(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int32_t year;
  int32_t month;
  int32_t day;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  OPHDIHJPHDE_o *KDODLJFNAAC;
  System_Collections_Generic_List_OPHDIHJPHDE__o *GIAHCGHPBBA;
  Nekki_Utils_GlobalTimer_o *pNVar5;
  System_DateTime_o OLFIPBLKDAH;
  int64_t NMECKCPAKAA;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  FMOAMIIOKNP_o *pFVar6;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__c *pSVar7;
  long lVar8;
  Core_Configs_Models_LocalDailyConfig_o *pCVar9;
  System_Action_o *pSVar10;
  ulong uVar11;
  int32_t *piVar12;
  int *piVar13;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *pSVar14;
  undefined8 local_50;
  System_DateTime_Fields local_48;
  uint64_t local_38;
  
  if ((DAT_045688a4 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&FMOAMIIOKNP_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_045688a4 = 1;
  }
  local_38 = 0;
  local_48._dateData = 0;
  pFVar6 = (__this->fields).JEPHJLEICLO;
  if (pFVar6 != (FMOAMIIOKNP_o *)0x0) {
    pSVar14 = (pFVar6->fields)._APDMACJCLEG_k__BackingField;
    if (pSVar14 != (System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *)0x0) {
      pSVar7 = pSVar14->klass;
      uVar1._0_1_ = (pSVar7->_2).rank;
      uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar11 = (ulong)uVar1;
      if (uVar11 != 0) {
        piVar12 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo) {
            pVVar2 = pSVar7->vtable + *piVar12;
            goto LAB_03607900;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      in_x2 = (MethodInfo *)0x0;
      pVVar2 = (VirtualInvokeData *)FUN_01b81914(pSVar14);
LAB_03607900:
      plVar3 = (long *)(*pVVar2->methodPtr)(pSVar14,pVVar2->method);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar8 = *plVar3;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03607970;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        in_x2 = (MethodInfo *)0x0;
        puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_03607970:
        uVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar11 & 1) == 0) goto LAB_036079e8;
        lVar8 = *plVar3;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_OPHDIHJPHDE__c **)(piVar13 + -2) ==
                System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_036079cc;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        in_x2 = (MethodInfo *)0x0;
        puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_036079cc:
        KDODLJFNAAC = (OPHDIHJPHDE_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        KEIAEKNFNNA__ONDFOFCHBKF(__this,KDODLJFNAAC,in_x2);
      } while( true );
    }
    goto LAB_03607c18;
  }
  goto LAB_03607a54;
LAB_036079e8:
  if (plVar3 != (long *)0x0) {
    lVar8 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03607a44;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03607a44:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
LAB_03607a54:
  GIAHCGHPBBA = NLCLFNMIEJC__GGEDMGGBCHN((__this->fields).DCAEFFHDMGE,(MethodInfo *)0x0);
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo);
  }
  pNVar5 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if (pNVar5 != (Nekki_Utils_GlobalTimer_o *)0x0) {
    if ((pNVar5->fields).GAPAJLLHGHO == false) {
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_38 = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
    }
    else {
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar5 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
      if (pNVar5 == (Nekki_Utils_GlobalTimer_o *)0x0) goto LAB_03607c18;
      local_38 = (uint64_t)Nekki_Utils_GlobalTimer__get_Now(pNVar5,(MethodInfo *)0x0);
    }
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_DateTime_TypeInfo);
    }
    year = System_DateTime__get_Year((System_DateTime_o)&local_38,(MethodInfo *)0x0);
    month = System_DateTime__get_Month((System_DateTime_o)&local_38,(MethodInfo *)0x0);
    day = System_DateTime__get_Day((System_DateTime_o)&local_38,(MethodInfo *)0x0);
    local_50 = 0;
    System_DateTime___ctor((System_DateTime_o)&local_50,year,month,day,(MethodInfo *)0x0);
    local_48._dateData = local_50;
    local_48._dateData =
         (uint64_t)System_DateTime__AddDays((System_DateTime_o)&local_48,1.0,(MethodInfo *)0x0);
    pCVar9 = (__this->fields).DCAEFFHDMGE;
    if (pCVar9 != (Core_Configs_Models_LocalDailyConfig_o *)0x0) {
      OLFIPBLKDAH = System_DateTime__AddHours
                              ((System_DateTime_o)&local_48,
                               (double)(pCVar9->fields)._ResetHour_k__BackingField,(MethodInfo *)0x0
                              );
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo);
      }
      NMECKCPAKAA = Nekki_Utils_GlobalTimer__TotalSeconds(OLFIPBLKDAH,(MethodInfo *)0x0);
      pFVar6 = (FMOAMIIOKNP_o *)thunk_FUN_01bda818(FMOAMIIOKNP_TypeInfo);
      FMOAMIIOKNP___ctor(pFVar6,NMECKCPAKAA,
                         (System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *)GIAHCGHPBBA,
                         (MethodInfo *)0x0);
      (__this->fields).JEPHJLEICLO = pFVar6;
      thunk_FUN_01c20e04(&__this->fields,pFVar6);
      NLCLFNMIEJC__BONNGEGNMLF
                ((__this->fields).JEPHJLEICLO,(__this->fields).DCAEFFHDMGE,(MethodInfo *)0x0);
      KEIAEKNFNNA__OPIPNIPKEKA(__this,method_00);
      pSVar10 = (__this->fields).PJFFBLOPKBC;
      if (pSVar10 != (System_Action_o *)0x0) {
        (*(code *)(pSVar10->fields).super.super.invoke_impl)
                  ((pSVar10->fields).super.super.method_code,(pSVar10->fields).super.super.method);
      }
      return;
    }
  }
LAB_03607c18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long JEAINNIBMLG(LocalDailyQuestInfo GJDCFLEEBLM)  [RVA 0x3507E04]
// KEIAEKNFNNA$$JEAINNIBMLG @ RVA 0x3507E04

int64_t KEIAEKNFNNA__JEAINNIBMLG
                  (KEIAEKNFNNA_o *__this,Core_Configs_Models_LocalDailyQuestInfo_o *GJDCFLEEBLM,
                  MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ACHLOMELAJE_o *__this_00;
  VirtualInvokeData *pVVar4;
  long lVar5;
  int64_t iVar6;
  Core_Configs_Models_LocalDailyConfig_o *pCVar7;
  System_Collections_Generic_IReadOnlyDictionary_int__long__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Collections_Generic_IReadOnlyDictionary_int__long__o *pSVar11;
  float fVar12;
  
  if ((DAT_045688a5 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<int,_long>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688a5 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    uVar2 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    uVar3 = MGNPHCAAEIO__DGJACOJNPBB((MethodInfo *)0x0);
    pCVar7 = (__this->fields).DCAEFFHDMGE;
    if ((int)uVar3 <= (int)uVar2) {
      uVar2 = uVar3;
    }
    if ((int)uVar2 < 2) {
      uVar2 = 1;
    }
    if ((pCVar7 != (Core_Configs_Models_LocalDailyConfig_o *)0x0) &&
       (pSVar11 = (pCVar7->fields)._MoneyRewardByLevel_k__BackingField,
       pSVar11 != (System_Collections_Generic_IReadOnlyDictionary_int__long__o *)0x0)) {
      pSVar8 = pSVar11->klass;
      uVar1._0_1_ = (pSVar8->_2).rank;
      uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IReadOnlyDictionary<int,_long>_TypeInfo) {
            pVVar4 = pSVar8->vtable + (*piVar10 + 2);
            goto LAB_03607f54;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar4 = (VirtualInvokeData *)
               FUN_01b81914(pSVar11,
                            System_Collections_Generic_IReadOnlyDictionary<int,_long>_TypeInfo,2);
LAB_03607f54:
      lVar5 = (*pVVar4->methodPtr)(pSVar11,(ulong)uVar2,pVVar4->method);
      if (GJDCFLEEBLM != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) {
        fVar12 = (GJDCFLEEBLM->fields)._MoneyMultiplier_k__BackingField;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        fVar12 = fVar12 * (float)lVar5;
        iVar6 = -0x8000000000000000;
        if (fVar12 != INFINITY) {
          iVar6 = (long)fVar12;
        }
        iVar6 = MGNPHCAAEIO__ADEEECDDBPN(iVar6,0,(MethodInfo *)0x0);
        return iVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ONDFOFCHBKF(OPHDIHJPHDE KDODLJFNAAC)  [RVA 0x3507CDC]
// KEIAEKNFNNA$$ONDFOFCHBKF @ RVA 0x3507CDC

void KEIAEKNFNNA__ONDFOFCHBKF(KEIAEKNFNNA_o *__this,OPHDIHJPHDE_o *KDODLJFNAAC,MethodInfo *method)

{
  int64_t CJNHFNHJHPE;
  ACHLOMELAJE_o *__this_00;
  PCEDNFLCPPF_o *__this_01;
  Core_Configs_Models_LocalDailyQuestInfo_o *GJDCFLEEBLM;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_045688a6 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688a6 = 1;
  }
  if ((KDODLJFNAAC != (OPHDIHJPHDE_o *)0x0) &&
     ((KDODLJFNAAC->fields)._DJAIGGFHPMK_k__BackingField == false)) {
    GJDCFLEEBLM = (KDODLJFNAAC->fields)._DMCIAIBPJGN_k__BackingField;
    if (GJDCFLEEBLM != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) {
      if ((KDODLJFNAAC->fields)._PKGCKALOMOF_k__BackingField <
          (GJDCFLEEBLM->fields)._AdsTargetCount_k__BackingField) {
        return;
      }
      CJNHFNHJHPE = KEIAEKNFNNA__JEAINNIBMLG(__this,GJDCFLEEBLM,method);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        ACHLOMELAJE__KKDCNDLEGPP(__this_00,CJNHFNHJHPE,false,(MethodInfo *)0x0);
        OPHDIHJPHDE__ADEFCOEJBNO(KDODLJFNAAC,(MethodInfo *)0x0);
        KEIAEKNFNNA__OPIPNIPKEKA(__this,method_00);
        __this_01 = PCEDNFLCPPF__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_01 != (PCEDNFLCPPF_o *)0x0) {
          PCEDNFLCPPF__EHANNHIKALE
                    (__this_01,(KDODLJFNAAC->fields)._MDAJFAPLLOH_k__BackingField,CJNHFNHJHPE,
                     (MethodInfo *)0x0);
          KEIAEKNFNNA__MGNAAFCFIEH(__this,method_01);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void EMBJNCBLPNN(Action CJNHFNHJHPE)  [RVA 0x3507FC0]
// KEIAEKNFNNA$$EMBJNCBLPNN @ RVA 0x3507FC0

void KEIAEKNFNNA__EMBJNCBLPNN(KEIAEKNFNNA_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* try { // try from 03607fd0 to 03707fd3 has its CatchHandler @ 03607ff0 */
                    /* try { // try from 03607fd4 to 03707fd7 has its CatchHandler @ 03607fec */
                    /* try { // try from 03607fd8 to 03707fdb has its CatchHandler @ 03607fe8 */
                    /* try { // try from 03607fdc to 0370800f has its CatchHandler @ 03606c38 */
  if ((DAT_045688a7 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360757c with catch @ 03607fe4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03607fd8 with catch @ 03607fe8
                        */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03607fd4 with catch @ 03607fec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03607fd0 with catch @ 03607ff0
                        */
    DAT_045688a7 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03607568 with catch @ 03607ff4
                        */
  ppSVar4 = &(__this->fields).PJFFBLOPKBC;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03607550 with catch @ 03607ff8
                        */
  a = *ppSVar4;
                    /* try { // try from 03608010 to 03708013 has its CatchHandler @ 03608040 */
                    /* try { // try from 03608014 to 03708047 has its CatchHandler @ 03606c38 */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
                    /* catch() { ... } // from try @ 03608010 with catch @ 03608040 */
    if (bVar1) {
                    /* try { // try from 03608048 to 0370804f has its CatchHandler @ 03608064 */
                    /* try { // try from 03608050 to 0370805b has its CatchHandler @ 03606c38 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public IReadOnlyList<OPHDIHJPHDE> CFGOMKKHOML()  [RVA 0x350805C]
// KEIAEKNFNNA$$CFGOMKKHOML @ RVA 0x350805C

System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *
KEIAEKNFNNA__CFGOMKKHOML(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  FMOAMIIOKNP_o *pFVar1;
  
                    /* try { // try from 0360805c to 03708063 has its CatchHandler @ 03608064 */
  pFVar1 = (__this->fields).JEPHJLEICLO;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03608048 with catch @ 03608064
                       catch(type#2 @ 00000000) { ... } // from try @ 0360805c with catch @ 03608064
                        */
  if (pFVar1 != (FMOAMIIOKNP_o *)0x0) {
    return (pFVar1->fields)._APDMACJCLEG_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MGNAAFCFIEH()  [RVA 0x3506E34]
// KEIAEKNFNNA$$MGNAAFCFIEH @ RVA 0x3506E34

void KEIAEKNFNNA__MGNAAFCFIEH(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  bool bVar1;
  NCNJEIBHGBH_o *__this_00;
  System_Collections_Generic_List_FKNCNNOOOIO__o *source;
  System_Func_FKNCNNOOOIO__bool__o **ppSVar2;
  FKNCNNOOOIO_o *MEOCIDLOMGD;
  long lVar3;
  MethodInfo *method_00;
  UnityEngine_Object_o *exists;
  System_Func_FKNCNNOOOIO__bool__o *predicate;
  System_Nullable_bool__Fields local_34 [2];
  
  if ((DAT_045688a8 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<FKNCNNOOOIO>__);
    FUN_01bab630(&System_Func<FKNCNNOOOIO,_bool>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&Method_KEIAEKNFNNA_<>c_IPGKKCHGFCJ__);
    FUN_01bab630(&KEIAEKNFNNA_<>c_TypeInfo);
    DAT_045688a8 = 1;
  }
  __this_00 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NCNJEIBHGBH_o *)0x0) {
    source = NCNJEIBHGBH__LFPJPIDMDPF(__this_00,(MethodInfo *)0x0);
    if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KEIAEKNFNNA_<>c_TypeInfo);
    }
    predicate = KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__26_0;
    if (predicate == (System_Func_FKNCNNOOOIO__bool__o *)0x0) {
      if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(KEIAEKNFNNA_<>c_TypeInfo);
      }
      predicate = (System_Func_FKNCNNOOOIO__bool__o *)
                  thunk_FUN_01bda818(System_Func<FKNCNNOOOIO,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar2 = &KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__26_0;
      *ppSVar2 = predicate;
      thunk_FUN_01c20e04(ppSVar2,predicate);
    }
    MEOCIDLOMGD = (FKNCNNOOOIO_o *)
                  System_Linq_Enumerable__FirstOrDefault<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__bool__o *)predicate,
                             Method_System_Linq_Enumerable_FirstOrDefault<FKNCNNOOOIO>__);
    if (MEOCIDLOMGD != (FKNCNNOOOIO_o *)0x0) {
      bVar1 = KEIAEKNFNNA__GBHJAGECFAB(__this,method_00);
      local_34[0].hasValue = false;
      local_34[0].value = false;
      System_Nullable<bool>___ctor
                ((System_Nullable_bool__o)SUB82(local_34,0),bVar1,
                 Method_System_Nullable<bool>__ctor__);
      (MEOCIDLOMGD->fields).IGOGFMFHLNK.fields = local_34[0];
    }
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    exists = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if ((bVar1) && (MEOCIDLOMGD != (FKNCNNOOOIO_o *)0x0)) {
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8) ==
          (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_03607058;
      Nekki_SF2_GUI_Map_MapScene__UpdateNotificatorState
                ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8),MEOCIDLOMGD,
                 (MethodInfo *)0x0);
    }
    return;
  }
LAB_03607058:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FIHIDMOGGFA()  [RVA 0x35076CC]
// KEIAEKNFNNA$$FIHIDMOGGFA @ RVA 0x35076CC

void KEIAEKNFNNA__FIHIDMOGGFA(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  FMOAMIIOKNP_o *pFVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  ACHLOMELAJE_o *pAVar2;
  KEIAEKNFNNA_Fields *pKVar3;
  
  if ((DAT_045688a9 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688a9 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      pFVar1 = NLCLFNMIEJC__KKBFNNGJOLN((pAVar2->fields).HPDENNCHNHB,(MethodInfo *)0x0);
      pKVar3 = &__this->fields;
      pKVar3->JEPHJLEICLO = pFVar1;
      thunk_FUN_01c20e04(pKVar3,pFVar1);
      NLCLFNMIEJC__BONNGEGNMLF(pKVar3->JEPHJLEICLO,(__this->fields).DCAEFFHDMGE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void EHKKBKHGDHE()  [RVA 0x35077D8]
// KEIAEKNFNNA$$EHKKBKHGDHE @ RVA 0x35077D8

void KEIAEKNFNNA__EHKKBKHGDHE(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  MethodInfo *method_00;
  FMOAMIIOKNP_o *pFVar2;
  
  iVar1 = KEIAEKNFNNA__LPLDEDLPJFA(__this,method);
  pFVar2 = (__this->fields).JEPHJLEICLO;
  if (pFVar2 == (FMOAMIIOKNP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pFVar2->fields)._EPMGDFKEOOJ_k__BackingField < iVar1) {
    KEIAEKNFNNA__PBGLGLCDHKF(__this,method_00);
    return;
  }
  return;
}


// ===== public void ANAJBOCEMEF(long AKDMKFILNFN)  [RVA 0x3508420]
// KEIAEKNFNNA$$ANAJBOCEMEF @ RVA 0x3508420

void KEIAEKNFNNA__ANAJBOCEMEF(KEIAEKNFNNA_o *__this,int64_t AKDMKFILNFN,MethodInfo *method)

{
  MethodInfo *method_00;
  FMOAMIIOKNP_o *pFVar1;
  System_Action_o *pSVar2;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *GIAHCGHPBBA;
  
  if ((DAT_045688aa & 1) == 0) {
    FUN_01bab630(&FMOAMIIOKNP_TypeInfo);
    DAT_045688aa = 1;
  }
  pFVar1 = (__this->fields).JEPHJLEICLO;
  if (pFVar1 != (FMOAMIIOKNP_o *)0x0) {
    GIAHCGHPBBA = (pFVar1->fields)._APDMACJCLEG_k__BackingField;
    pFVar1 = (FMOAMIIOKNP_o *)thunk_FUN_01bda818(FMOAMIIOKNP_TypeInfo);
    FMOAMIIOKNP___ctor(pFVar1,AKDMKFILNFN,GIAHCGHPBBA,(MethodInfo *)0x0);
    (__this->fields).JEPHJLEICLO = pFVar1;
    thunk_FUN_01c20e04(&__this->fields,pFVar1);
    KEIAEKNFNNA__OPIPNIPKEKA(__this,method_00);
    pSVar2 = (__this->fields).PJFFBLOPKBC;
    if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036084c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Dispose()  [RVA 0x35084D8]
// KEIAEKNFNNA$$Dispose @ RVA 0x35084D8

void KEIAEKNFNNA__Dispose(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_SerialDisposable_o *__this_01;
  
  __this_00 = (__this->fields).IHADHPMEOFI;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).BGIOGEDMPOH;
    if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
      UniRx_SerialDisposable__Dispose(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long LPLDEDLPJFA()  [RVA 0x350838C]
// KEIAEKNFNNA$$LPLDEDLPJFA @ RVA 0x350838C

int64_t KEIAEKNFNNA__LPLDEDLPJFA(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Nekki_Utils_GlobalTimer_o *pNVar2;
  int64_t iVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_045688ab & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_045688ab = 1;
    method = extraout_x1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
  }
  pNVar2 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_Utils_GlobalTimer_o *)0x0) {
    bVar1 = (pNVar2->fields).GAPAJLLHGHO;
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo);
    }
    if (bVar1 == false) {
      iVar3 = Nekki_Utils_GlobalTimer__get_LocalTimeUTC((MethodInfo *)0x0);
      return iVar3;
    }
    pNVar2 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_Utils_GlobalTimer_o *)0x0) {
      iVar3 = Nekki_Utils_GlobalTimer__GetTime(pNVar2,(MethodInfo *)0x0);
      return iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OGDOLKAGBGJ(FKNCNNOOOIO GCOMKDMCMDN)  [RVA 0x3508508]
// KEIAEKNFNNA$$OGDOLKAGBGJ @ RVA 0x3508508

void KEIAEKNFNNA__OGDOLKAGBGJ(KEIAEKNFNNA_o *__this,FKNCNNOOOIO_o *GCOMKDMCMDN,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if ((DAT_045688ac & 1) == 0) {
    FUN_01bab630(&StringLiteral_8583/*"LocalDaily"*/);
    DAT_045688ac = 1;
  }
  if (GCOMKDMCMDN != (FKNCNNOOOIO_o *)0x0) {
    bVar1 = System_String__op_Inequality
                      ((GCOMKDMCMDN->fields).JIJLBFGKNJK,StringLiteral_8583/*"LocalDaily"*/,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    KEIAEKNFNNA__MGNAAFCFIEH(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KGPAPPFJIDO(Action CJNHFNHJHPE)  [RVA 0x3508578]
// KEIAEKNFNNA$$KGPAPPFJIDO @ RVA 0x3508578

void KEIAEKNFNNA__KGPAPPFJIDO(KEIAEKNFNNA_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_045688ad & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045688ad = 1;
  }
  ppSVar4 = &(__this->fields).PJFFBLOPKBC;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private bool GBHJAGECFAB()  [RVA 0x3508078]
// KEIAEKNFNNA$$GBHJAGECFAB @ RVA 0x3508078

/* WARNING: Removing unreachable block (ram,0x036082d4) */

bool KEIAEKNFNNA__GBHJAGECFAB(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  byte bVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  FMOAMIIOKNP_o *pFVar6;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__c *pSVar7;
  long lVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *pSVar12;
  undefined1 auVar13 [16];
  
  auVar13._8_8_ = method;
  auVar13._0_8_ = __this;
  if ((DAT_045688ae & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo);
    auVar13 = FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_045688ae = 1;
  }
  pFVar6 = (__this->fields).JEPHJLEICLO;
  if ((pFVar6 == (FMOAMIIOKNP_o *)0x0) ||
     (pSVar12 = (pFVar6->fields)._APDMACJCLEG_k__BackingField,
     pSVar12 == (System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar13._0_8_,auVar13._8_8_);
  }
  pSVar7 = pSVar12->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo) {
        pVVar3 = pSVar7->vtable + *piVar10;
        goto LAB_03608130;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar3 = (VirtualInvokeData *)
           FUN_01b81914(pSVar12,System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo,0);
LAB_03608130:
  plVar4 = (long *)(*pVVar3->methodPtr)(pSVar12,pVVar3->method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    do {
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_036081a8;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_036081a8:
      bVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((bVar2 & 1) == 0) {
        bVar2 = 0;
        goto joined_r0x03608250;
      }
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_OPHDIHJPHDE__c **)(piVar11 + -2) ==
              System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03608208;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01b81914(plVar4,System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo,0);
LAB_03608208:
      lVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (*(char *)(lVar8 + 0x18) != '\0');
    if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (*(int *)(lVar8 + 0x14) < *(int *)(*(long *)(lVar8 + 0x20) + 0x28));
joined_r0x03608250:
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_036082a0;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_036082a0:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return (bool)(bVar2 & 1);
}


// ===== public void OPIPNIPKEKA()  [RVA 0x3506CF8]
// KEIAEKNFNNA$$OPIPNIPKEKA @ RVA 0x3506CF8

void KEIAEKNFNNA__OPIPNIPKEKA(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  ACHLOMELAJE_o *pAVar1;
  
  if ((DAT_045688af & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688af = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    NLCLFNMIEJC__LCOGFACJLDA
              ((pAVar1->fields).HPDENNCHNHB,(__this->fields).JEPHJLEICLO,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HHANNAPHADA(int BPCMPECIOLF)  [RVA 0x350705C]
// KEIAEKNFNNA$$HHANNAPHADA @ RVA 0x350705C

void KEIAEKNFNNA__HHANNAPHADA(KEIAEKNFNNA_o *__this,int32_t BPCMPECIOLF,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  GCIFMNHADDF_o *__this_01;
  UnityEngine_Object_o *exists;
  System_IObservable_long__o *source;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  UniRx_SerialDisposable_o *__this_02;
  
  if ((DAT_045688b0 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<LotteryDialog>__);
    FUN_01bab630(&Method_KEIAEKNFNNA_GJHCOOIGICA_NEMPBMNDIKK__);
    FUN_01bab630(&KEIAEKNFNNA_GJHCOOIGICA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<long>__);
    FUN_01bab630(&Method_UniRx_Observable_Skip<long>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_045688b0 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KEIAEKNFNNA_GJHCOOIGICA_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    *(int32_t *)&__this_00[1].monitor = BPCMPECIOLF;
    __this_01 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (GCIFMNHADDF_o *)0x0) {
      exists = (UnityEngine_Object_o *)
               GCIFMNHADDF__BFJGHKKGOJC<object>
                         (__this_01,Method_GCIFMNHADDF_BFJGHKKGOJC<LotteryDialog>__);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
      if (!bVar1) {
        JJPNLEPEAFM__FGGGLJNFDLF(*(int32_t *)&__this_00[1].monitor,(MethodInfo *)0x0);
        return;
      }
      __this_02 = (__this->fields).BGIOGEDMPOH;
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      source = UniRx_Observable__EveryUpdate((MethodInfo *)0x0);
      source_00 = UniRx_Observable__Skip<long>
                            ((System_IObservable_T__o *)source,1,
                             Method_UniRx_Observable_Skip<long>__);
      onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
      System_Action<long>___ctor();
      value = UniRx_ObservableExtensions__Subscribe<long>
                        (source_00,onNext,Method_UniRx_ObservableExtensions_Subscribe<long>__);
      if (__this_02 != (UniRx_SerialDisposable_o *)0x0) {
        UniRx_SerialDisposable__set_Disposable(__this_02,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BONGFCFJNPN(Unit HOKBHLPPCAH)  [RVA 0x350861C]
// KEIAEKNFNNA$$BONGFCFJNPN @ RVA 0x350861C

void KEIAEKNFNNA__BONGFCFJNPN(KEIAEKNFNNA_o *__this,MethodInfo *param_2)

{
  int64_t iVar1;
  MethodInfo *method;
  FMOAMIIOKNP_o *pFVar2;
  
  iVar1 = KEIAEKNFNNA__LPLDEDLPJFA(__this,param_2);
  pFVar2 = (__this->fields).JEPHJLEICLO;
  if (pFVar2 == (FMOAMIIOKNP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pFVar2->fields)._EPMGDFKEOOJ_k__BackingField < iVar1) {
    KEIAEKNFNNA__PBGLGLCDHKF(__this,method);
    return;
  }
  return;
}


// ===== public long FHMOKDNBLAI()  [RVA 0x3508620]
// KEIAEKNFNNA$$FHMOKDNBLAI @ RVA 0x3508620

int64_t KEIAEKNFNNA__FHMOKDNBLAI(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  FMOAMIIOKNP_o *pFVar1;
  
                    /* try { // try from 03608620 to 03708a3f has its CatchHandler @ 03608620
                       catch() { ... } // from try @ 03608620 with catch @ 03608620
                       catch() { ... } // from try @ 03608b08 with catch @ 03608620
                       catch() { ... } // from try @ 03608b4c with catch @ 03608620
                       catch() { ... } // from try @ 03608b90 with catch @ 03608620
                       catch() { ... } // from try @ 03608bc0 with catch @ 03608620 */
  pFVar1 = (__this->fields).JEPHJLEICLO;
  if (pFVar1 != (FMOAMIIOKNP_o *)0x0) {
    return (pFVar1->fields)._EPMGDFKEOOJ_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

