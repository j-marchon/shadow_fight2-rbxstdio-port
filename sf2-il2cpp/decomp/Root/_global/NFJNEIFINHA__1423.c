// TypeDefIndex 1423
// Namespace: 
// public class NFJNEIFINHA : IJIHLBLCJMG
// Fields:
//   private readonly CFEJGBOOCOG AJAPLLENPMB; // 0x28
//   private readonly HFHIKPAKJFG PFDHLHBHCBA; // 0x30

// ===== public override void NKLGCNHLBAF()  [RVA 0x317F83C]
// NFJNEIFINHA$$NKLGCNHLBAF @ RVA 0x317F83C

void NFJNEIFINHA__NKLGCNHLBAF(NFJNEIFINHA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  VirtualInvokeData *pVVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar6;
  HFHIKPAKJFG_c *pHVar7;
  CFEJGBOOCOG_c *pCVar8;
  KCJCIJHMEJF_c *pKVar9;
  ulong uVar10;
  int32_t *piVar11;
  CFEJGBOOCOG_o *pCVar12;
  KCJCIJHMEJF_o *pKVar13;
  HFHIKPAKJFG_o *pHVar14;
  undefined1 auVar15 [16];
  
  auVar15._8_8_ = method;
  auVar15._0_8_ = __this;
  if ((DAT_045669b2 & 1) == 0) {
    FUN_01bab630(&CFEJGBOOCOG_TypeInfo);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    auVar15 = FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045669b2 = 1;
  }
  pHVar14 = (__this->fields).PFDHLHBHCBA;
  if (pHVar14 != (HFHIKPAKJFG_o *)0x0) {
    pHVar7 = pHVar14->klass;
    pCVar12 = (__this->fields).AJAPLLENPMB;
    uVar1._0_1_ = (pHVar7->_2).rank;
    uVar1._1_1_ = (pHVar7->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pHVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar5 = pHVar7->vtable + (*piVar11 + 2);
          goto LAB_0327f8f4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pHVar14,HFHIKPAKJFG_TypeInfo,2);
LAB_0327f8f4:
    auVar15 = (*pVVar5->methodPtr)(pHVar14,pVVar5->method);
    if (pCVar12 != (CFEJGBOOCOG_o *)0x0) {
      pCVar8 = pCVar12->klass;
      uVar2._0_1_ = (pCVar8->_2).rank;
      uVar2._1_1_ = (pCVar8->_2).minimumAlignment;
      uVar10 = (ulong)uVar2;
      if (uVar10 != 0) {
        piVar11 = &((pCVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)CFEJGBOOCOG_TypeInfo) {
            pVVar5 = pCVar8->vtable + (*piVar11 + 3);
            goto LAB_0327f968;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar12,CFEJGBOOCOG_TypeInfo,3);
LAB_0327f968:
      (*pVVar5->methodPtr)(pCVar12,auVar15._0_8_,pVVar5->method);
      uVar6 = extraout_x1;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        uVar6 = extraout_x1_00;
      }
      if (DAT_045662dd == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_045662dd = '\x01';
        uVar6 = extraout_x1_01;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        uVar6 = extraout_x1_02;
      }
      auVar15._8_8_ = uVar6;
      auVar15._0_8_ = NLPJLHOEAOE_TypeInfo;
      pCVar12 = (__this->fields).AJAPLLENPMB;
      if (pCVar12 != (CFEJGBOOCOG_o *)0x0) {
        pCVar8 = pCVar12->klass;
        pKVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
        uVar3._0_1_ = (pCVar8->_2).rank;
        uVar3._1_1_ = (pCVar8->_2).minimumAlignment;
        uVar10 = (ulong)uVar3;
                    /* try { // try from 0327f9d8 to 0337f9ff has its CatchHandler @ 032804d0 */
        if (uVar10 != 0) {
          piVar11 = &((pCVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)CFEJGBOOCOG_TypeInfo) {
              pVVar5 = pCVar8->vtable + (*piVar11 + 1);
              goto LAB_0327fa1c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar12,CFEJGBOOCOG_TypeInfo,1);
LAB_0327fa1c:
        auVar15 = (*pVVar5->methodPtr)(pCVar12,pVVar5->method);
        if (pKVar13 != (KCJCIJHMEJF_o *)0x0) {
          pKVar9 = pKVar13->klass;
          uVar4._0_1_ = (pKVar9->_2).rank;
          uVar4._1_1_ = (pKVar9->_2).minimumAlignment;
                    /* try { // try from 0327fa34 to 0337fa5b has its CatchHandler @ 032804cc */
          uVar10 = (ulong)uVar4;
          if (uVar10 != 0) {
            piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
                    /* try { // try from 0327fa7c to 0337feaf has its CatchHandler @ 0327dc98 */
                pVVar5 = pKVar9->vtable + (*piVar11 + 10);
                goto LAB_0327fa88;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
                    /* try { // try from 0327fa68 to 0337fa6f has its CatchHandler @ 03280378 */
                    /* try { // try from 0327fa70 to 0337fa7b has its CatchHandler @ 03280374 */
          pVVar5 = (VirtualInvokeData *)FUN_01b81914(pKVar13,KCJCIJHMEJF_TypeInfo,10);
LAB_0327fa88:
          (*pVVar5->methodPtr)(pKVar13,auVar15._0_8_,pVVar5->method);
          IJIHLBLCJMG__FGNINNOOCCL((IJIHLBLCJMG_o *)__this,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar15._0_8_,auVar15._8_8_);
}


// ===== public override DBNEAJMCOLB KGGGBHEMAOO()  [RVA 0x317FAB8]
// NFJNEIFINHA$$KGGGBHEMAOO @ RVA 0x317FAB8

int32_t NFJNEIFINHA__KGGGBHEMAOO(NFJNEIFINHA_o *__this,MethodInfo *method)

{
  return 0xb;
}


// ===== public override bool JFGBPBOCOIC(BDMDJNOIBKC HJDMBDBJEFL)  [RVA 0x317FAC0]
// NFJNEIFINHA$$JFGBPBOCOIC @ RVA 0x317FAC0

bool NFJNEIFINHA__JFGBPBOCOIC(NFJNEIFINHA_o *__this,int32_t HJDMBDBJEFL,MethodInfo *method)

{
  return HJDMBDBJEFL == 0;
}


// ===== public void .ctor(CFEJGBOOCOG DJPFIPHFNKC, HFHIKPAKJFG DOGIHMFCGNM)  [RVA 0x317FACC]
// NFJNEIFINHA$$.ctor @ RVA 0x317FACC

void NFJNEIFINHA___ctor(NFJNEIFINHA_o *__this,CFEJGBOOCOG_o *DJPFIPHFNKC,HFHIKPAKJFG_o *DOGIHMFCGNM,
                       MethodInfo *method)

{
  CFEJGBOOCOG_o **ppCVar1;
  HFHIKPAKJFG_o **ppHVar2;
  
  IJIHLBLCJMG___ctor((IJIHLBLCJMG_o *)__this,(MethodInfo *)0x0);
  ppCVar1 = &(__this->fields).AJAPLLENPMB;
  *ppCVar1 = DJPFIPHFNKC;
  thunk_FUN_01c20e04(ppCVar1,DJPFIPHFNKC);
  ppHVar2 = &(__this->fields).PFDHLHBHCBA;
  *ppHVar2 = DOGIHMFCGNM;
  thunk_FUN_01c20e04(ppHVar2,DOGIHMFCGNM);
  return;
}

