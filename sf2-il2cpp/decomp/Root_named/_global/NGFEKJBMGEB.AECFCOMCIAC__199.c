// TypeDefIndex 199
// Namespace: 
// [CompilerGenerated]
// private sealed class LocalizationManager.AECFCOMCIAC
// Fields:
//   public PKHMIGFEJCL questParameters; // 0x10
//   public DBNEEHGBCJD language; // 0x18
//   public Action<bool> callback; // 0x20
//   public Action<DBNEEHGBCJD> <>9__2; // 0x28

// ===== internal void NOLHDBCKINA(DBNEEHGBCJD lang)  [RVA 0x311A1D8]
// LocalizationManager.AECFCOMCIAC$$NOLHDBCKINA @ RVA 0x311A1D8

void LocalizationManager_AECFCOMCIAC__NOLHDBCKINA
               (LocalizationManager_AECFCOMCIAC_o *__this,DBNEEHGBCJD_o *lang,MethodInfo *method)

{
  DBNEEHGBCJD_o *__this_00;
  
  __this_00 = (__this->fields).language;
  if (__this_00 != (DBNEEHGBCJD_o *)0x0) {
    DBNEEHGBCJD__FBHBFAAMLNG(__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void EDHNBHLKDDM(KHODJHFHCDE validationResult)  [RVA 0x311A1F8]
// LocalizationManager.AECFCOMCIAC$$EDHNBHLKDDM @ RVA 0x311A1F8

void LocalizationManager_AECFCOMCIAC__EDHNBHLKDDM
               (LocalizationManager_AECFCOMCIAC_o *__this,KHODJHFHCDE_o *validationResult,MethodInfo *method
               )

{
  ushort uVar1;
  ushort uVar2;
  PKHMIGFEJCL_o *pPVar3;
  DBNEEHGBCJD_o **ppDVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar7;
  System_Func_DBNEEHGBCJD__bool__o **ppSVar8;
  Il2CppClass *pIVar9;
  System_Action_bool__o *pSVar10;
  ulong uVar11;
  int32_t *piVar12;
  DBNEEHGBCJD_o *pDVar13;
  System_Func_DBNEEHGBCJD__bool__o *predicate;
  System_Action_DBNEEHGBCJD__o **ppSVar14;
  System_Action_DBNEEHGBCJD__o *CPECAEHDDDB;
  
  if ((DAT_045665de & 1) == 0) {
    FUN_01bab630(&Method_NGFEKJBMGEB_AECFCOMCIAC_NOLHDBCKINA__);
    FUN_01bab630(&System_Action<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<DBNEEHGBCJD>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<DBNEEHGBCJD>__);
    FUN_01bab630(&System_Func<DBNEEHGBCJD,_bool>_TypeInfo);
    FUN_01bab630(&Method_NGFEKJBMGEB_<>c_OECLLHDFCGK__);
    FUN_01bab630(&LocalizationManager_<>c_TypeInfo);
    DAT_045665de = 1;
  }
  pPVar3 = (__this->fields).questParameters;
  if (pPVar3 != (PKHMIGFEJCL_o *)0x0) {
    ppDVar4 = &(pPVar3->fields).POJBNHBGEBH;
    *ppDVar4 = (DBNEEHGBCJD_o *)0x0;
    thunk_FUN_01c20e04(ppDVar4,0);
    if (validationResult != (KHODJHFHCDE_o *)0x0) {
      if ((validationResult->fields)._NJFBLJHECFH_k__BackingField != false) {
        pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0321a4e0;
        pIVar9 = pIVar5->klass;
        pDVar13 = (__this->fields).language;
        uVar1._0_1_ = (pIVar9->_2).rank;
        uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar11 = (ulong)uVar1;
        if (uVar11 != 0) {
          piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar6 = pIVar9->vtable + (*piVar12 + 7);
              goto LAB_0321a324;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,7);
LAB_0321a324:
        (*pVVar6->methodPtr)(pIVar5,pDVar13,1,1,pVVar6->method);
        pIVar9 = pIVar5->klass;
        uVar2._0_1_ = (pIVar9->_2).rank;
        uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar11 = (ulong)uVar2;
        if (uVar11 != 0) {
          piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar6 = pIVar9->vtable + (*piVar12 + 10);
              goto LAB_0321a394;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,10);
LAB_0321a394:
        pSVar7 = (System_Collections_Generic_IEnumerable_TSource__o *)
                 (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
        if ((LocalizationManager_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(LocalizationManager_<>c_TypeInfo);
        }
        predicate = LocalizationManager_<>c_TypeInfo->static_fields->__9__6_1;
        if (predicate == (System_Func_DBNEEHGBCJD__bool__o *)0x0) {
          if ((LocalizationManager_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(LocalizationManager_<>c_TypeInfo);
          }
          predicate = (System_Func_DBNEEHGBCJD__bool__o *)
                      thunk_FUN_01bda818(System_Func<DBNEEHGBCJD,_bool>_TypeInfo);
          System_Func<object,_bool>___ctor();
          ppSVar8 = &LocalizationManager_<>c_TypeInfo->static_fields->__9__6_1;
          *ppSVar8 = predicate;
          thunk_FUN_01c20e04(ppSVar8,predicate);
        }
        pSVar7 = System_Linq_Enumerable__Where<object>
                           (pSVar7,(System_Func_TSource__bool__o *)predicate,
                            Method_System_Linq_Enumerable_Where<DBNEEHGBCJD>__);
        ppSVar14 = &(__this->fields).__9__2;
                    /* try { // try from 0321a444 to 0331a4ff has its CatchHandler @ 0321a444
                       catch() { ... } // from try @ 0321a444 with catch @ 0321a444
                       catch() { ... } // from try @ 0321a548 with catch @ 0321a444
                       catch() { ... } // from try @ 0321a5a0 with catch @ 0321a444
                       catch() { ... } // from try @ 0321a5d4 with catch @ 0321a444
                       catch() { ... } // from try @ 0321a604 with catch @ 0321a444 */
        CPECAEHDDDB = *ppSVar14;
        if (CPECAEHDDDB == (System_Action_DBNEEHGBCJD__o *)0x0) {
          CPECAEHDDDB = (System_Action_DBNEEHGBCJD__o *)
                        thunk_FUN_01bda818(System_Action<DBNEEHGBCJD>_TypeInfo);
          System_Action<object>___ctor();
          (__this->fields).__9__2 = CPECAEHDDDB;
          thunk_FUN_01c20e04(ppSVar14,CPECAEHDDDB);
        }
        DFPABHGJPJJ__NHDPECDJBGO<object>
                  ((System_Collections_Generic_IEnumerable_T__o *)pSVar7,
                   (System_Action_T__o *)CPECAEHDDDB,Method_DFPABHGJPJJ_NHDPECDJBGO<DBNEEHGBCJD>__);
      }
      pSVar10 = (__this->fields).callback;
      if (pSVar10 != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0321a4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar10->fields).super.super.invoke_impl)
                  ((pSVar10->fields).super.super.method_code,
                   (validationResult->fields)._NJFBLJHECFH_k__BackingField,
                   (pSVar10->fields).super.super.method);
        return;
      }
      return;
    }
  }
LAB_0321a4e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3119DC0]
// LocalizationManager.AECFCOMCIAC$$.ctor @ RVA 0x3119DC0

void LocalizationManager_AECFCOMCIAC___ctor(LocalizationManager_AECFCOMCIAC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

