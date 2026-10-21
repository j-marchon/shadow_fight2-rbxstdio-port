// Core.Network.ServerProvider$$TimeSync @ RVA 0x357C250

void Core_Network_ServerProvider__TimeSync
               (Core_Network_ServerProvider_o *__this,System_Action_long__o *EBKFPLCIDCG,
               System_Action_string__o *OFNOJDGIDGD,System_Threading_CancellationToken_o OFPGGGAKOAE
               ,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Il2CppObject *__this_00;
  OJJLPLHNGBP_BELGMANHGIJ_o *pOVar3;
  System_Action_GPBHNPOEFDO__o *BLMFLPJJMPF;
  PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *__this_01;
  OJJLPLHNGBP_o *pOVar4;
  MOBODMIBMKA_o *pMVar5;
  VirtualInvokeData *pVVar6;
  MOBODMIBMKA_c *pMVar7;
  ulong uVar8;
  int32_t *piVar9;
  
  if ((DAT_04568cb1 & 1) == 0) {
    FUN_01bab630(&System_Action<GPBHNPOEFDO>_TypeInfo);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_BHOHLODBJPE__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_IDIJAFLLLJG__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_NOJMLBEPFDB__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&MOBODMIBMKA_TypeInfo);
    FUN_01bab630(&Method_Core_Network_ServerProvider_PMCEMEEBBHF_FPILJMBFBML__);
    FUN_01bab630(&Core_Network_ServerProvider_PMCEMEEBBHF_TypeInfo);
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568cb1 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Core_Network_ServerProvider_PMCEMEEBBHF_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)OFNOJDGIDGD;
    thunk_FUN_01c20e04(__this_00 + 1,OFNOJDGIDGD);
    __this_00[1].monitor = EBKFPLCIDCG;
    thunk_FUN_01c20e04(&__this_00[1].monitor,EBKFPLCIDCG);
    bVar2 = ServerProviderBase__PPBANLLIGDK((ServerProviderBase_o *)__this,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pOVar3 = OJJLPLHNGBP_BELGMANHGIJ__EOHMFJFFFIN((MethodInfo *)0x0);
    if (DAT_04568d25 == '\0') {
      FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
      DAT_04568d25 = '\x01';
    }
    if (pOVar3 != (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0) {
      pOVar3 = (OJJLPLHNGBP_BELGMANHGIJ_o *)
               PDBDELCMKJG_DGCHKODLPJG<object>__BHOHLODBJPE
                         ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pOVar3,
                          Core_Network_ServerProvider_TypeInfo->static_fields->
                          _HNFPKIABMIJ_k__BackingField,
                          Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_BHOHLODBJPE__);
      BLMFLPJJMPF = (System_Action_GPBHNPOEFDO__o *)
                    thunk_FUN_01bda818(System_Action<GPBHNPOEFDO>_TypeInfo);
      System_Action<object>___ctor();
      if ((((pOVar3 != (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0) &&
           (pOVar3 = OJJLPLHNGBP_BELGMANHGIJ__JLDAALDPGIE(pOVar3,BLMFLPJJMPF,(MethodInfo *)0x0),
           pOVar3 != (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0)) &&
          (__this_01 = (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)
                       PDBDELCMKJG_DGCHKODLPJG<object>__IDIJAFLLLJG
                                 ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pOVar3,
                                  (System_TimeSpan_o)
                                  (Core_Network_ServerProvider_TypeInfo->static_fields->KBKPDCHPDAD)
                                  .fields._ticks,
                                  Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_IDIJAFLLLJG__
                                 ), __this_01 != (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)0x0)) &&
         (pOVar3 = (OJJLPLHNGBP_BELGMANHGIJ_o *)
                   PDBDELCMKJG_DGCHKODLPJG<object>__NOJMLBEPFDB
                             (__this_01,OFPGGGAKOAE,
                              Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_NOJMLBEPFDB__)
         , pOVar3 != (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0)) {
        pOVar4 = OJJLPLHNGBP_BELGMANHGIJ__HFMIGKLONNL(pOVar3,(MethodInfo *)0x0);
        if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
        }
        pMVar5 = IFAMAAGNCBJ__IAPGOOIGJLK((MethodInfo *)0x0);
        if (pMVar5 != (MOBODMIBMKA_o *)0x0) {
          pMVar7 = pMVar5->klass;
          uVar1._0_1_ = (pMVar7->_2).rank;
          uVar1._1_1_ = (pMVar7->_2).minimumAlignment;
          uVar8 = (ulong)uVar1;
          if (uVar8 != 0) {
            piVar9 = &((pMVar7->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                  (Il2CppClass *)MOBODMIBMKA_TypeInfo) {
                pVVar6 = pMVar7->vtable + (*piVar9 + 1);
                goto LAB_0367c4c0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(pMVar5,MOBODMIBMKA_TypeInfo,1);
LAB_0367c4c0:
                    /* WARNING: Could not recover jumptable at 0x0367c4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar6->methodPtr)(pMVar5,pOVar4,pVVar6->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

