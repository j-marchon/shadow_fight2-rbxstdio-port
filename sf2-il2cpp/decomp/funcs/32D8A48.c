// NOMBKAHPOHM$$OAMGHCLCHPA @ RVA 0x32D8A48

void NOMBKAHPOHM__OAMGHCLCHPA
               (NOMBKAHPOHM_o *__this,System_Predicate_NCCFNKMICGK__o *PFDEAPMMFAP,
               MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *__this_00;
  VirtualInvokeData *pVVar2;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar3;
  System_Func_TSource__bool__o *predicate;
  System_Action_T__o *CPECAEHDDDB;
  KCJCIJHMEJF_c *pKVar4;
  ulong uVar5;
  int32_t *piVar6;
  KCJCIJHMEJF_o *pKVar7;
  
  if ((DAT_045675a3 & 1) == 0) {
    FUN_01bab630(&System_Action<NCCFNKMICGK>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<NCCFNKMICGK>__);
    FUN_01bab630(&Method_NOMBKAHPOHM_ELLEJAKENLH_BJHKAJOAIAC__);
    FUN_01bab630(&Method_NOMBKAHPOHM_ELLEJAKENLH_PAFEJOBBDOK__);
    FUN_01bab630(&NOMBKAHPOHM_ELLEJAKENLH_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<NCCFNKMICGK>__);
    FUN_01bab630(&System_Func<NCCFNKMICGK,_bool>_TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675a3 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(NOMBKAHPOHM_ELLEJAKENLH_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)PFDEAPMMFAP;
    thunk_FUN_01c20e04(__this_00 + 1,PFDEAPMMFAP);
    __this_00[1].monitor = __this;
    thunk_FUN_01c20e04(&__this_00[1].monitor,__this);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045662dd == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_045662dd = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pKVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
    if (pKVar7 != (KCJCIJHMEJF_o *)0x0) {
      pKVar4 = pKVar7->klass;
      uVar1._0_1_ = (pKVar4->_2).rank;
      uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar1;
      if (uVar5 != 0) {
        piVar6 = &((pKVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
            pVVar2 = pKVar4->vtable + (*piVar6 + 9);
            goto LAB_033d8c04;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar7,KCJCIJHMEJF_TypeInfo,9);
LAB_033d8c04:
      pSVar3 = (System_Collections_Generic_IEnumerable_TSource__o *)
               (*pVVar2->methodPtr)(pKVar7,pVVar2->method);
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      pSVar3 = System_Linq_Enumerable__Where<object>
                         (pSVar3,predicate,Method_System_Linq_Enumerable_Where<NCCFNKMICGK>__);
      CPECAEHDDDB = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<NCCFNKMICGK>_TypeInfo);
      System_Action<object>___ctor();
      DFPABHGJPJJ__NHDPECDJBGO<object>
                ((System_Collections_Generic_IEnumerable_T__o *)pSVar3,CPECAEHDDDB,
                 Method_DFPABHGJPJJ_NHDPECDJBGO<NCCFNKMICGK>__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

