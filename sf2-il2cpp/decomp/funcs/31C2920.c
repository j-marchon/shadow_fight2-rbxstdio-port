// ADJEBFOPFFF$$EFGGOJMGCLK @ RVA 0x31C2920

bool ADJEBFOPFFF__EFGGOJMGCLK
               (ADJEBFOPFFF_o *__this,System_String_o *LFKENPEPPAL,
               System_Action_BKKPAKHJDKB__o *BPCGDKENMAE,bool ADGOHBFJIKC,MethodInfo *method)

{
  int32_t MNPKIDDPNBM;
  ADJEBFOPFFF_o *pAVar1;
  BKKPAKHJDKB_o *pBVar2;
  HDDKPFAHBBN_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  NDPMLPGANCI_o *__this_02;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  FAIJGJCCKJC_o *pFVar4;
  ADJEBFOPFFF_Fields *pAVar5;
  
  pAVar1 = __this;
  if ((DAT_04566c19 & 1) == 0) {
    FUN_01bab630(&Method_ADJEBFOPFFF_PIIPIJOGJKJ__);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HDDKPFAHBBN_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    pAVar1 = (ADJEBFOPFFF_o *)FUN_01bab630(&StringLiteral_16846);
    DAT_04566c19 = 1;
  }
  pBVar2 = ADJEBFOPFFF__HDPKECMNEML(pAVar1,LFKENPEPPAL,BPCGDKENMAE,(System_String_o *)0x0,method);
  pAVar5 = &__this->fields;
  pAVar5->KPIJKNDCENG = pBVar2;
  pAVar1 = (ADJEBFOPFFF_o *)thunk_FUN_01c20e04(pAVar5);
  pBVar2 = pAVar5->KPIJKNDCENG;
  if (pBVar2 != (BKKPAKHJDKB_o *)0x0) {
    MNPKIDDPNBM = (pBVar2->fields).HHJIJKJCEOF;
    (pBVar2->fields).GNOICOBBOME = ADGOHBFJIKC;
    if (MNPKIDDPNBM != -1) {
      ADJEBFOPFFF__OOIAFADFKDI(pAVar1,MNPKIDDPNBM,(MethodInfo *)BPCGDKENMAE);
      ADJEBFOPFFF__JAHINKIPIIO(__this,method_00);
LAB_032c2aec:
      return MNPKIDDPNBM == -1;
    }
    __this_00 = (HDDKPFAHBBN_o *)thunk_FUN_01bda818(HDDKPFAHBBN_TypeInfo);
    HDDKPFAHBBN___ctor(__this_00,(MethodInfo *)0x0);
    if (((pAVar5->KPIJKNDCENG != (BKKPAKHJDKB_o *)0x0) &&
        (pFVar4 = (pAVar5->KPIJKNDCENG->fields).IJDPHADMDKN, pFVar4 != (FAIJGJCCKJC_o *)0x0)) &&
       (__this_00 != (HDDKPFAHBBN_o *)0x0)) {
      HDDKPFAHBBN__MEKNPELFDEK
                (__this_00,(pFVar4->fields).super._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
        KDPDBGNOFEN__KLNMLOOCAAO
                  ((KDPDBGNOFEN_o *)__this_01,StringLiteral_16846,
                   (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                   (MethodInfo *)0x0);
        __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
        }
        pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>
                           (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
        if ((pIVar3 != (Il2CppObject *)0x0) && (__this_02 != (NDPMLPGANCI_o *)0x0)) {
          NDPMLPGANCI__FNNPPGPMCFE
                    (__this_02,true,true,*(int32_t *)((long)&pIVar3[6].klass + 4),(MethodInfo *)0x0)
          ;
          goto LAB_032c2aec;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

