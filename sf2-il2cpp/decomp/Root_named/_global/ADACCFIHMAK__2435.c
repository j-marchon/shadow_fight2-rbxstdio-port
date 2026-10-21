// TypeDefIndex 2435
// Namespace: 
// public sealed class ADACCFIHMAK : CELDGLHBCAM
// Fields:

// ===== private static bool NJIPKBHALNO()  [RVA 0x3343704]
// ADACCFIHMAK$$NJIPKBHALNO @ RVA 0x3343704

bool ADACCFIHMAK__NJIPKBHALNO(MethodInfo *method)

{
  bool bVar1;
  Roster_o *__this;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar2;
  System_String_o *a;
  
                    /* try { // try from 03443710 to 03543b33 has its CatchHandler @ 03443710
                       catch() { ... } // from try @ 03443710 with catch @ 03443710
                       catch() { ... } // from try @ 03443bb4 with catch @ 03443710
                       catch() { ... } // from try @ 03443bf0 with catch @ 03443710
                       catch() { ... } // from try @ 03443c78 with catch @ 03443710
                       catch() { ... } // from try @ 03443cb4 with catch @ 03443710
                       catch() { ... } // from try @ 03443cf4 with catch @ 03443710 */
  if ((DAT_045679ae & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_16203/*"_lang_FirstLaunch_Shown"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    DAT_045679ae = 1;
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
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  a = (System_String_o *)0x0;
  if ((__this != (Roster_o *)0x0) &&
     (pMVar2 = Roster__HKIEGNBOFCD(__this,StringLiteral_16203/*"_lang_FirstLaunch_Shown"*/,0,(MethodInfo *)0x0),
     a = (System_String_o *)0x0, pMVar2 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0)) {
    a = (pMVar2->fields).JAICMIMBIOA;
  }
  bVar1 = System_String__op_Equality(a,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0);
  return bVar1;
}


// ===== private void FGNINNOOCCL()  [RVA 0x33437D8]
// ADACCFIHMAK$$FGNINNOOCCL @ RVA 0x33437D8

void ADACCFIHMAK__FGNINNOOCCL(ADACCFIHMAK_o *__this,MethodInfo *method)

{
  ADACCFIHMAK__FPABCLIIOIP(true,method);
  (__this->fields).super._DGMNNLJEMIB_k__BackingField = true;
  return;
}


// ===== public void .ctor()  [RVA 0x334391C]
// ADACCFIHMAK$$.ctor @ RVA 0x334391C

void ADACCFIHMAK___ctor(ADACCFIHMAK_o *__this,MethodInfo *method)

{
  CELDGLHBCAM___ctor((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void IELLEFEFFJD()  [RVA 0x3343924]
// ADACCFIHMAK$$IELLEFEFFJD @ RVA 0x3343924

void ADACCFIHMAK__IELLEFEFFJD(ADACCFIHMAK_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t GMGGINDHNPI;
  Il2CppObject *__this_00;
  KMBNFNCDDBP_o *__this_01;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_TSource__bool__o *predicate;
  DBNEEHGBCJD_o *NFDKMBAGHPD;
  System_String_o *JLNPKGGFFDD;
  System_Action_bool__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_045679af & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<DBNEEHGBCJD>__);
    FUN_01bab630(&System_Func<DBNEEHGBCJD,_bool>_TypeInfo);
    FUN_01bab630(&LocalizationManager_TypeInfo);
    FUN_01bab630(&Method_ADACCFIHMAK_OIABPCCEKPB_KANOFGEJGGG__);
    FUN_01bab630(&Method_ADACCFIHMAK_OIABPCCEKPB_LECFCCOHEMG__);
    FUN_01bab630(&ADACCFIHMAK_OIABPCCEKPB_TypeInfo);
    FUN_01bab630(&StringLiteral_12350/*"Start: try download asian pack for system language '"*/);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    DAT_045679af = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(ADACCFIHMAK_OIABPCCEKPB_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].monitor = __this;
    thunk_FUN_01c20e04(&__this_00[1].monitor,__this);
    CELDGLHBCAM__IELLEFEFFJD((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
    GMGGINDHNPI = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
    bVar2 = GNAFJMPJNKI__GNPIMNCDNOC(GMGGINDHNPI,(MethodInfo *)0x0);
    if ((bVar2) || (bVar2 = ADACCFIHMAK__NJIPKBHALNO((MethodInfo *)0x0), bVar2)) {
      (__this->fields).super._DGMNNLJEMIB_k__BackingField = true;
      return;
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045611dc == '\0') {
      FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
      DAT_045611dc = '\x01';
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
    if (__this_01 != (KMBNFNCDDBP_o *)0x0) {
      pIVar3 = (Il2CppClass *)KMBNFNCDDBP__MLHLAKMLJNI(__this_01,(MethodInfo *)0x0);
      __this_00[1].klass = pIVar3;
      thunk_FUN_01c20e04();
      pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar3 = pIVar4->klass;
        uVar1._0_1_ = (pIVar3->_2).rank;
        uVar1._1_1_ = (pIVar3->_2).minimumAlignment;
        uVar6 = (ulong)uVar1;
        if (uVar6 != 0) {
          piVar7 = &((pIVar3->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar5 = pIVar3->vtable + (*piVar7 + 10);
              goto LAB_03443b28;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,10);
LAB_03443b28:
        source = (System_Collections_Generic_IEnumerable_TSource__o *)
                 (*pVVar5->methodPtr)(pIVar4,pVVar5->method);
                    /* try { // try from 03443b34 to 03543b3b has its CatchHandler @ 03443c94 */
        predicate = (System_Func_TSource__bool__o *)
                    thunk_FUN_01bda818(System_Func<DBNEEHGBCJD,_bool>_TypeInfo);
                    /* try { // try from 03443b4c to 03543b53 has its CatchHandler @ 03443c90 */
        System_Func<object,_bool>___ctor();
                    /* try { // try from 03443b6c to 03543b73 has its CatchHandler @ 03443bd0 */
        NFDKMBAGHPD = (DBNEEHGBCJD_o *)
                      System_Linq_Enumerable__FirstOrDefault<object>
                                (source,predicate,
                                 Method_System_Linq_Enumerable_FirstOrDefault<DBNEEHGBCJD>__);
        if ((NFDKMBAGHPD != (DBNEEHGBCJD_o *)0x0) &&
           ((NFDKMBAGHPD->fields)._OOGEFEJNMDG_k__BackingField != false)) {
                    /* try { // try from 03443bac to 03543bb3 has its CatchHandler @ 03443c84 */
          JLNPKGGFFDD = System_String__Concat
                                  (StringLiteral_12350/*"Start: try download asian pack for system language '"*/,(System_String_o *)__this_00[1].klass,
                                   StringLiteral_802/*"'"*/,(MethodInfo *)0x0);
                    /* try { // try from 03443bb4 to 03543beb has its CatchHandler @ 03443710 */
          KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03443b6c with catch @ 03443bd0
                        */
          BLMFLPJJMPF = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
                    /* try { // try from 03443bec to 03543bef has its CatchHandler @ 03443c78 */
          System_Action<bool>___ctor();
                    /* try { // try from 03443bf0 to 03543c4f has its CatchHandler @ 03443710 */
          if ((LocalizationManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          LocalizationManager__OPFMHDIBOKE(NFDKMBAGHPD,BLMFLPJJMPF,(MethodInfo *)0x0);
          return;
        }
        ADACCFIHMAK__FPABCLIIOIP(true,method_00);
        (__this->fields).super._DGMNNLJEMIB_k__BackingField = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void FPABCLIIOIP(bool CJNHFNHJHPE)  [RVA 0x3343800]
// ADACCFIHMAK$$FPABCLIIOIP @ RVA 0x3343800

void ADACCFIHMAK__FPABCLIIOIP(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Roster_o *pAVar1;
  
  if ((DAT_045679b0 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_19348/*"lang_FirstLaunch_Shown"*/);
    DAT_045679b0 = 1;
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
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (Roster_o *)0x0) {
    Roster__HEMDIAFAMAO(pAVar1,StringLiteral_19348/*"lang_FirstLaunch_Shown"*/,CJNHFNHJHPE,0,(MethodInfo *)0x0);
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
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (Roster_o *)0x0) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,false,(MethodInfo *)0x0);
    return;
  }
  return;
}

