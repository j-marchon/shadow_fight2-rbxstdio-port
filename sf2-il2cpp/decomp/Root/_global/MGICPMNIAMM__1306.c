// TypeDefIndex 1306
// Namespace: 
// public class MGICPMNIAMM : GJFEBGNFFBA
// Fields:
//   private static Random NBAAKDGJIEI; // 0x0

// ===== protected override string FGBGAKLKONL()  [RVA 0x3155DB0]
// MGICPMNIAMM$$FGBGAKLKONL @ RVA 0x3155DB0

/* WARNING: Removing unreachable block (ram,0x032560d4) */

System_String_o * MGICPMNIAMM__FGBGAKLKONL(MGICPMNIAMM_o *__this,MethodInfo *method)

{
  ushort uVar1;
  byte bVar2;
  bool bVar3;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_IEnumerable_int__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Collections_Generic_IEnumerable_int__c *pSVar9;
  long lVar10;
  ulong uVar11;
  int32_t *piVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  
                    /* try { // try from 03255dd0 to 03355dfb has its CatchHandler @ 03256224 */
  if ((DAT_0456683e & 1) == 0) {
    FUN_01bab630(&MGICPMNIAMM_FIAFELGJBBD_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<int>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<int>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_264/*" <color=red>with errors</color>"*/);
    FUN_01bab630(&StringLiteral_21305/*"success"*/);
                    /* try { // try from 03255e3c to 03355e43 has its CatchHandler @ 03256188 */
    FUN_01bab630(&StringLiteral_10242/*"PerksModelParam Test processed. "*/);
                    /* try { // try from 03255e4c to 03355e53 has its CatchHandler @ 03256190 */
    FUN_01bab630(&StringLiteral_10241/*"PerksModelParam"*/);
                    /* try { // try from 03255e54 to 03355e5f has its CatchHandler @ 0325618c */
    DAT_0456683e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03255e70 to 03355e77 has its CatchHandler @ 032561a0 */
  pSVar4 = System_Linq_Enumerable__Range(0,100,(MethodInfo *)0x0);
                    /* try { // try from 03255e80 to 03355e87 has its CatchHandler @ 03256184 */
  if (pSVar4 == (System_Collections_Generic_IEnumerable_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032560cc to 033560cf has its CatchHandler @ 032560e0 */
    FUN_01bab8c8();
  }
                    /* try { // try from 03255e88 to 03355e93 has its CatchHandler @ 03256198 */
  pSVar9 = pSVar4->klass;
  uVar1._0_1_ = (pSVar9->_2).rank;
  uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
  uVar11 = (ulong)uVar1;
  if (uVar11 != 0) {
                    /* try { // try from 03255ea4 to 03355eab has its CatchHandler @ 0325619c */
    piVar12 = &((pSVar9->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<int>_TypeInfo) {
        pVVar5 = pSVar9->vtable + *piVar12;
        goto LAB_03255edc;
      }
                    /* try { // try from 03255eb4 to 03355ebb has its CatchHandler @ 03256194 */
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
                    /* try { // try from 03255ebc to 03355edf has its CatchHandler @ 0325625c */
    } while (uVar11 != 0);
  }
  pVVar5 = (VirtualInvokeData *)
           FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerable<int>_TypeInfo,0);
LAB_03255edc:
  plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03255f5c;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03255f5c:
    bVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((bVar2 & 1) == 0) break;
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* try { // try from 03255f88 to 03355f8f has its CatchHandler @ 032566c8 */
        if (*(System_Collections_Generic_IEnumerator_int__c **)(piVar13 + -2) ==
            System_Collections_Generic_IEnumerator<int>_TypeInfo) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03255fbc;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
                    /* try { // try from 03255fa0 to 03355fa7 has its CatchHandler @ 032566c4 */
                    /* try { // try from 03255fa8 to 03355fb3 has its CatchHandler @ 032566bc */
    puVar7 = (undefined8 *)
             FUN_01b81914(plVar6,System_Collections_Generic_IEnumerator<int>_TypeInfo,0);
LAB_03255fbc:
                    /* try { // try from 03255fc4 to 03355fcb has its CatchHandler @ 032566c0 */
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    auVar14 = thunk_FUN_01bda818(MGICPMNIAMM_FIAFELGJBBD_TypeInfo);
    MGICPMNIAMM_FIAFELGJBBD___ctor(auVar14._0_8_,auVar14._8_8_);
                    /* try { // try from 03255fdc to 03355fe3 has its CatchHandler @ 032566d0 */
                    /* try { // try from 03255fe4 to 03356007 has its CatchHandler @ 03256720 */
    bVar3 = MGICPMNIAMM__LKKLOHIKOBE(__this,__this_00,auVar14._0_8_,in_x3);
  } while (bVar3);
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
                    /* try { // try from 0325600c to 03356013 has its CatchHandler @ 03256260 */
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* try { // try from 03256018 to 0335601f has its CatchHandler @ 03256230 */
        if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 0325603c to 0335603f has its CatchHandler @ 032561b0 */
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03256044;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
                    /* try { // try from 03256024 to 0335602b has its CatchHandler @ 032561f4 */
      } while (uVar11 != 0);
    }
                    /* try { // try from 03256030 to 03356037 has its CatchHandler @ 032561b8 */
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03256044:
                    /* try { // try from 03256044 to 03356047 has its CatchHandler @ 032561ac */
                    /* try { // try from 0325604c to 0335604f has its CatchHandler @ 032561a8 */
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
                    /* try { // try from 03256054 to 03356057 has its CatchHandler @ 032561a4 */
                    /* try { // try from 0325605c to 0335605f has its CatchHandler @ 03256180 */
                    /* try { // try from 03256064 to 03356067 has its CatchHandler @ 0325617c */
                    /* try { // try from 0325606c to 0335606f has its CatchHandler @ 03256178 */
                    /* try { // try from 03256074 to 03356077 has its CatchHandler @ 03256174 */
                    /* try { // try from 0325607c to 0335607f has its CatchHandler @ 03256148 */
  GJFEBGNFFBA__FKGKPCDMPCP((GJFEBGNFFBA_o *)__this,__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03256084 to 03356087 has its CatchHandler @ 03256144 */
                    /* try { // try from 0325608c to 0335608f has its CatchHandler @ 03256140 */
                    /* try { // try from 03256094 to 03356097 has its CatchHandler @ 0325613c */
                    /* try { // try from 0325609c to 0335609f has its CatchHandler @ 03256118 */
  GJFEBGNFFBA__ILHNDPBPGAN
            ((GJFEBGNFFBA_o *)__this,(bool)(~(bVar2 ^ 1) & 1),StringLiteral_10241/*"PerksModelParam"*/,__this_00,
             (MethodInfo *)0x0);
  puVar7 = &StringLiteral_21305/*"success"*/;
                    /* try { // try from 032560a4 to 033560a7 has its CatchHandler @ 03256114 */
  if (((bVar2 ^ 1) & 1) == 0) {
    puVar7 = &StringLiteral_264/*" <color=red>with errors</color>"*/;
  }
                    /* try { // try from 032560ac to 033560af has its CatchHandler @ 03256110 */
                    /* try { // try from 032560b4 to 033560b7 has its CatchHandler @ 0325610c */
                    /* try { // try from 032560bc to 033560bf has its CatchHandler @ 032560e8 */
                    /* try { // try from 032560c4 to 033560c7 has its CatchHandler @ 032560e4 */
  pSVar8 = System_String__Concat(StringLiteral_10242/*"PerksModelParam Test processed. "*/,(System_String_o *)*puVar7,(MethodInfo *)0x0);
  return pSVar8;
}


// ===== private static void .cctor()  [RVA 0x3156790]
// MGICPMNIAMM$$.cctor @ RVA 0x3156790

void MGICPMNIAMM___cctor(MethodInfo *method)

{
  System_Random_o *__this;
  
  if ((DAT_0456683f & 1) == 0) {
    FUN_01bab630(&MGICPMNIAMM_TypeInfo);
    FUN_01bab630(&System_Random_TypeInfo);
    DAT_0456683f = 1;
  }
  __this = (System_Random_o *)thunk_FUN_01bda818(System_Random_TypeInfo);
                    /* try { // try from 032567e4 to 033567ef has its CatchHandler @ 03254ff4 */
  System_Random___ctor(__this,0x48a080e,(MethodInfo *)0x0);
                    /* try { // try from 032567f0 to 033567f7 has its CatchHandler @ 032567f8 */
                    /* catch() { ... } // from try @ 03256344 with catch @ 032567f8
                       catch() { ... } // from try @ 03256468 with catch @ 032567f8
                       catch() { ... } // from try @ 0325677c with catch @ 032567f8
                       catch() { ... } // from try @ 032567f0 with catch @ 032567f8 */
  MGICPMNIAMM_TypeInfo->static_fields->NBAAKDGJIEI = __this;
  thunk_FUN_01c20e04(MGICPMNIAMM_TypeInfo->static_fields,__this);
  return;
}


// ===== private bool LKKLOHIKOBE(StringBuilder KHHGPLOMHBB, MGICPMNIAMM.FIAFELGJBBD DJLEFFMINPB)  [RVA 0x315625C]
// MGICPMNIAMM$$LKKLOHIKOBE @ RVA 0x315625C

bool MGICPMNIAMM__LKKLOHIKOBE
               (MGICPMNIAMM_o *__this,System_Text_StringBuilder_o *KHHGPLOMHBB,
               MGICPMNIAMM_FIAFELGJBBD_o *DJLEFFMINPB,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int32_t iVar11;
  int32_t iVar12;
  HEFOANCOHDC_o *__this_00;
  PJKHAJKEHEL_o *__this_01;
  OLKKAIFGGAK_o *__this_02;
  OLKKAIFGGAK_o **ppOVar13;
  NILLKLHKLHG_o *__this_03;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *pSVar14;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o **ppSVar15;
  System_String_o *pSVar16;
  MethodInfo *in_x5;
  float *method_00;
  int32_t *piVar17;
  float *method_01;
  float fVar18;
  float __this_04;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_98;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  float local_64;
  
                    /* catch() { ... } // from try @ 03255ebc with catch @ 0325625c */
                    /* catch() { ... } // from try @ 0325600c with catch @ 03256260 */
                    /* try { // try from 03256280 to 03356283 has its CatchHandler @ 032565f0 */
                    /* try { // try from 03256284 to 0335632b has its CatchHandler @ 03254ff4 */
  if ((DAT_04566840 & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&HEFOANCOHDC_TypeInfo);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&OLKKAIFGGAK_TypeInfo);
    FUN_01bab630(&PJKHAJKEHEL_TypeInfo);
    FUN_01bab630(&StringLiteral_2506/*"?PlayerParameter[Me].Health*?PlayerParameter[Me].DamageConverter-?PlayerParameter[Me].Pain*?PlayerParameter[Me].Defau..."*/);
    FUN_01bab630(&StringLiteral_2507/*"?PlayerParameter[Me].Health+2*?PlayerParameter[Me].Pain"*/);
    FUN_01bab630(&StringLiteral_2511/*"?PlayerParameter[Me].Shock*?PlayerParameter[Me].MagicBullet+?PlayerParameter[Me].Disarm*?PlayerParameter[Me].MagicCharge"*/);
    FUN_01bab630(&StringLiteral_2509/*"?PlayerParameter[Me].MagicBullet+?PlayerParameter[Me].MagicCharge"*/);
                    /* try { // try from 0325632c to 03356333 has its CatchHandler @ 03256738 */
    FUN_01bab630(&StringLiteral_2505/*"?PlayerParameter[Me].Health"*/);
    FUN_01bab630(&StringLiteral_2512/*"?PlayerParameter[Me].StyleGain*?PlayerParameter[Me].DefaultPerksAspect-?PlayerParameter[Me].MagicBullet-?PlayerParame..."*/);
                    /* try { // try from 03256344 to 0335644f has its CatchHandler @ 032567f8 */
    FUN_01bab630(&StringLiteral_2510/*"?PlayerParameter[Me].MagicCharge"*/);
    FUN_01bab630(&StringLiteral_2508/*"?PlayerParameter[Me].MagicBullet"*/);
    DAT_04566840 = 1;
  }
  local_64 = 0.0;
  __this_00 = (HEFOANCOHDC_o *)thunk_FUN_01bda818(HEFOANCOHDC_TypeInfo);
  HEFOANCOHDC___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (PJKHAJKEHEL_o *)thunk_FUN_01bda818(PJKHAJKEHEL_TypeInfo);
  PJKHAJKEHEL___ctor(__this_01,(MethodInfo *)0x0);
  if (DJLEFFMINPB != (MGICPMNIAMM_FIAFELGJBBD_o *)0x0) {
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_98,
               (DJLEFFMINPB->fields).MGLLAKLAAOO,(MethodInfo *)0x0);
    local_80.hiddenValueOldByte4.fields = local_98.hiddenValueOldByte4.fields;
    local_80.fakeValue = local_98.fakeValue;
    local_80.currentCryptoKey = local_98.currentCryptoKey;
    local_80.hiddenValue = local_98.hiddenValue;
    local_80.fakeValueActive = local_98.fakeValueActive;
    local_80.inited = local_98.inited;
    local_80._18_2_ = local_98._18_2_;
    if (__this_01 != (PJKHAJKEHEL_o *)0x0) {
      (__this_01->fields).MGLLAKLAAOO.fields.hiddenValueOldByte4 =
           (CodeStage_AntiCheat_Common_ACTkByte4_o)local_98.hiddenValueOldByte4.fields;
      (__this_01->fields).MGLLAKLAAOO.fields.fakeValue = local_98.fakeValue;
      (__this_01->fields).MGLLAKLAAOO.fields.currentCryptoKey = local_98.currentCryptoKey;
      (__this_01->fields).MGLLAKLAAOO.fields.hiddenValue = local_98.hiddenValue;
      (__this_01->fields).MGLLAKLAAOO.fields.fakeValueActive = local_98.fakeValueActive;
      (__this_01->fields).MGLLAKLAAOO.fields.inited = local_98.inited;
      *(undefined2 *)&(__this_01->fields).MGLLAKLAAOO.fields.field_0x12 = local_98._18_2_;
      __this_02 = (OLKKAIFGGAK_o *)thunk_FUN_01bda818(OLKKAIFGGAK_TypeInfo);
      OLKKAIFGGAK___ctor(__this_02,__this_01,(MethodInfo *)0x0);
      if (__this_02 != (OLKKAIFGGAK_o *)0x0) {
        OLKKAIFGGAK__IFCNIKGGBBF(__this_02,(MethodInfo *)0x0);
        method_01 = &(DJLEFFMINPB->fields).FAHFCHOFIDE;
        OLKKAIFGGAK__MCEMJDBACFG(__this_02,*method_01,(MethodInfo *)0x0);
        OLKKAIFGGAK__HCOPGAIEFDB(__this_02,(DJLEFFMINPB->fields).HBJHMNIPNFA,(MethodInfo *)0x0);
        OLKKAIFGGAK__HBFDJOAMHNA(__this_02,(DJLEFFMINPB->fields).GGCKJHKNEAM,(MethodInfo *)0x0);
        OLKKAIFGGAK__DDFJNPDBCHI(__this_02,(DJLEFFMINPB->fields).HLCGIMPHEKO,(MethodInfo *)0x0);
        (__this_02->fields).DGGDGCEMMGI = (DJLEFFMINPB->fields).DGGDGCEMMGI;
        piVar17 = &(DJLEFFMINPB->fields).EOAEIECDCLC;
                    /* try { // try from 03256454 to 03356457 has its CatchHandler @ 0325672c */
        OLKKAIFGGAK__FDDFPMCLCGM(__this_02,*piVar17,(MethodInfo *)0x0);
        method_00 = &(DJLEFFMINPB->fields).AKFBHFFENCK;
                    /* try { // try from 03256468 to 03356577 has its CatchHandler @ 032567f8 */
        OLKKAIFGGAK__NJDCEAPMLJP(__this_02,*method_00,(MethodInfo *)0x0);
        OLKKAIFGGAK__BBJEPEHDFCN(__this_02,(DJLEFFMINPB->fields).DLIMFDEGOAL,(MethodInfo *)0x0);
        OLKKAIFGGAK__MHPDMDPNBGD(__this_02,(DJLEFFMINPB->fields).PMMICNDMMNH,(MethodInfo *)0x0);
        if (__this_00 != (HEFOANCOHDC_o *)0x0) {
          ppOVar13 = &(__this_00->fields)._BGCNGEAHHFN_k__BackingField;
          *ppOVar13 = __this_02;
          thunk_FUN_01c20e04(ppOVar13,__this_02);
          __this_03 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
          NILLKLHKLHG___ctor(__this_03,(MethodInfo *)0x0);
          pSVar14 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                    thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_03 != (NILLKLHKLHG_o *)0x0) {
            (__this_03->fields)._PGFJLBODEHE_k__BackingField = pSVar14;
            thunk_FUN_01c20e04(&__this_03->fields,pSVar14);
            pSVar14 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                      thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
            System_Action<object>___ctor();
            ppSVar15 = &(__this_03->fields)._KFMEPBBGDFG_k__BackingField;
            *ppSVar15 = pSVar14;
            fVar18 = (float)thunk_FUN_01c20e04(ppSVar15,pSVar14);
            pSVar16 = System_Single__ToString(fVar18,(MethodInfo *)method_01);
            bVar3 = MGICPMNIAMM__AAPJEJKHCOK
                              ((MGICPMNIAMM_o *)pSVar16,KHHGPLOMHBB,__this_03,StringLiteral_2505/*"?PlayerParameter[Me].Health"*/,
                               pSVar16,in_x5);
            fVar18 = (DJLEFFMINPB->fields).HBJHMNIPNFA;
            local_64 = (DJLEFFMINPB->fields).FAHFCHOFIDE + fVar18 + fVar18;
                    /* try { // try from 03256578 to 0335657b has its CatchHandler @ 032566cc */
            pSVar16 = System_Single__ToString(local_64,(MethodInfo *)&local_64);
                    /* try { // try from 0325657c to 0335657f has its CatchHandler @ 032566b8 */
                    /* try { // try from 03256580 to 03356583 has its CatchHandler @ 032566b4 */
                    /* try { // try from 03256584 to 03356587 has its CatchHandler @ 032566ac */
                    /* try { // try from 03256588 to 0335658b has its CatchHandler @ 032566a4 */
                    /* try { // try from 0325658c to 0335658f has its CatchHandler @ 032566a0 */
                    /* try { // try from 03256590 to 03356593 has its CatchHandler @ 0325669c */
                    /* try { // try from 03256594 to 03356597 has its CatchHandler @ 03256698 */
            bVar4 = MGICPMNIAMM__AAPJEJKHCOK
                              ((MGICPMNIAMM_o *)pSVar16,KHHGPLOMHBB,__this_03,StringLiteral_2507/*"?PlayerParameter[Me].Health+2*?PlayerParameter[Me].Pain"*/,
                               pSVar16,in_x5);
                    /* try { // try from 03256598 to 0335659b has its CatchHandler @ 03256678 */
                    /* try { // try from 0325659c to 0335659f has its CatchHandler @ 03256670 */
                    /* try { // try from 032565a0 to 033565a3 has its CatchHandler @ 0325666c */
                    /* try { // try from 032565a4 to 033565a7 has its CatchHandler @ 03256664 */
            pSVar16 = System_Int32__ToString((int32_t)piVar17,(MethodInfo *)0x0);
                    /* try { // try from 032565a8 to 033565ab has its CatchHandler @ 03254ff4 */
                    /* try { // try from 032565ac to 033565af has its CatchHandler @ 0325665c */
                    /* try { // try from 032565b0 to 033565b3 has its CatchHandler @ 03256658 */
                    /* try { // try from 032565b4 to 033565b7 has its CatchHandler @ 03256654 */
                    /* try { // try from 032565b8 to 033565bb has its CatchHandler @ 0325664c */
                    /* try { // try from 032565bc to 033565bf has its CatchHandler @ 03256640 */
                    /* try { // try from 032565c0 to 033565c3 has its CatchHandler @ 0325663c */
            bVar5 = MGICPMNIAMM__AAPJEJKHCOK
                              ((MGICPMNIAMM_o *)pSVar16,KHHGPLOMHBB,__this_03,StringLiteral_2508/*"?PlayerParameter[Me].MagicBullet"*/,
                               pSVar16,in_x5);
                    /* try { // try from 032565c4 to 033565c7 has its CatchHandler @ 03256638 */
                    /* try { // try from 032565c8 to 033565cb has its CatchHandler @ 03256634 */
                    /* try { // try from 032565cc to 033565cf has its CatchHandler @ 0325662c */
                    /* try { // try from 032565d0 to 033565d3 has its CatchHandler @ 03256628 */
            pSVar16 = System_Single__ToString(__this_04,(MethodInfo *)method_00);
                    /* try { // try from 032565d4 to 033565d7 has its CatchHandler @ 03256620 */
                    /* try { // try from 032565d8 to 033565db has its CatchHandler @ 03256614 */
                    /* try { // try from 032565dc to 0335675b has its CatchHandler @ 03254ff4 */
                    /* catch() { ... } // from try @ 03256214 with catch @ 032565e4 */
            bVar6 = MGICPMNIAMM__AAPJEJKHCOK
                              ((MGICPMNIAMM_o *)pSVar16,KHHGPLOMHBB,__this_03,StringLiteral_2510/*"?PlayerParameter[Me].MagicCharge"*/,
                               pSVar16,in_x5);
                    /* catch() { ... } // from try @ 03256280 with catch @ 032565f0 */
                    /* catch() { ... } // from try @ 03256250 with catch @ 032565fc */
            local_64 = (DJLEFFMINPB->fields).AKFBHFFENCK + (float)(DJLEFFMINPB->fields).EOAEIECDCLC;
                    /* catch() { ... } // from try @ 032561d8 with catch @ 03256608 */
            pSVar16 = System_Single__ToString(local_64,(MethodInfo *)&local_64);
                    /* catch() { ... } // from try @ 032565d8 with catch @ 03256614 */
                    /* catch() { ... } // from try @ 032553e8 with catch @ 03256618 */
                    /* catch() { ... } // from try @ 032553a4 with catch @ 0325661c */
                    /* catch() { ... } // from try @ 032565d4 with catch @ 03256620 */
                    /* catch() { ... } // from try @ 032553d4 with catch @ 03256624 */
                    /* catch() { ... } // from try @ 032565d0 with catch @ 03256628 */
            bVar7 = MGICPMNIAMM__AAPJEJKHCOK
                              ((MGICPMNIAMM_o *)pSVar16,KHHGPLOMHBB,__this_03,StringLiteral_2509/*"?PlayerParameter[Me].MagicBullet+?PlayerParameter[Me].MagicCharge"*/,
                               pSVar16,in_x5);
                    /* catch() { ... } // from try @ 032565cc with catch @ 0325662c */
                    /* catch() { ... } // from try @ 0325538c with catch @ 03256630 */
                    /* catch() { ... } // from try @ 032565c8 with catch @ 03256634 */
            bVar2 = (DJLEFFMINPB->fields).GGCKJHKNEAM;
                    /* catch() { ... } // from try @ 032565c4 with catch @ 03256638 */
                    /* catch() { ... } // from try @ 032565c0 with catch @ 0325663c */
                    /* catch() { ... } // from try @ 032565bc with catch @ 03256640 */
                    /* catch() { ... } // from try @ 03255760 with catch @ 03256644 */
            if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03255748 with catch @ 03256648 */
                    /* catch() { ... } // from try @ 032565b8 with catch @ 0325664c */
              thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo);
            }
                    /* catch() { ... } // from try @ 03255790 with catch @ 03256650 */
                    /* catch() { ... } // from try @ 032565b4 with catch @ 03256654 */
                    /* catch() { ... } // from try @ 032565b0 with catch @ 03256658 */
                    /* catch() { ... } // from try @ 032565ac with catch @ 0325665c */
            iVar11 = GJFEBGNFFBA__MELICHAIADL(bVar2 != false,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032557a4 with catch @ 03256660 */
                    /* catch() { ... } // from try @ 032565a4 with catch @ 03256664 */
            iVar1 = (DJLEFFMINPB->fields).EOAEIECDCLC;
                    /* catch() { ... } // from try @ 03255a0c with catch @ 03256668 */
                    /* catch() { ... } // from try @ 032565a0 with catch @ 0325666c */
                    /* catch() { ... } // from try @ 0325659c with catch @ 03256670 */
                    /* catch() { ... } // from try @ 03255a3c with catch @ 03256674 */
            iVar12 = GJFEBGNFFBA__MELICHAIADL((DJLEFFMINPB->fields).HLCGIMPHEKO,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03256598 with catch @ 03256678 */
                    /* catch() { ... } // from try @ 03255a50 with catch @ 0325667c */
                    /* catch() { ... } // from try @ 032559f4 with catch @ 03256680 */
                    /* catch() { ... } // from try @ 03255cb8 with catch @ 03256684 */
                    /* catch() { ... } // from try @ 03255ca0 with catch @ 03256688 */
                    /* catch() { ... } // from try @ 03255ce0 with catch @ 0325668c */
            local_64 = (DJLEFFMINPB->fields).AKFBHFFENCK * (float)iVar12 + (float)(iVar1 * iVar11);
                    /* catch() { ... } // from try @ 03255cf8 with catch @ 03256690 */
                    /* catch() { ... } // from try @ 03255d38 with catch @ 03256694 */
                    /* catch() { ... } // from try @ 03256594 with catch @ 03256698 */
                    /* catch() { ... } // from try @ 03256590 with catch @ 0325669c */
            pSVar16 = System_Single__ToString(local_64,(MethodInfo *)&local_64);
                    /* catch() { ... } // from try @ 0325658c with catch @ 032566a0 */
                    /* catch() { ... } // from try @ 03256588 with catch @ 032566a4 */
                    /* catch() { ... } // from try @ 03255cc0 with catch @ 032566a8 */
                    /* catch() { ... } // from try @ 03256584 with catch @ 032566ac */
                    /* catch() { ... } // from try @ 03255d24 with catch @ 032566b0 */
                    /* catch() { ... } // from try @ 03256580 with catch @ 032566b4 */
                    /* catch() { ... } // from try @ 0325657c with catch @ 032566b8 */
            bVar8 = MGICPMNIAMM__AAPJEJKHCOK
                              ((MGICPMNIAMM_o *)pSVar16,KHHGPLOMHBB,__this_03,StringLiteral_2511/*"?PlayerParameter[Me].Shock*?PlayerParameter[Me].MagicBullet+?PlayerParameter[Me].Disarm*?PlayerParameter[Me].MagicCharge"*/,
                               pSVar16,in_x5);
                    /* catch() { ... } // from try @ 03255fa8 with catch @ 032566bc */
                    /* catch() { ... } // from try @ 03255fc4 with catch @ 032566c0 */
                    /* catch() { ... } // from try @ 03255fa0 with catch @ 032566c4 */
                    /* catch() { ... } // from try @ 03255f88 with catch @ 032566c8 */
                    /* catch() { ... } // from try @ 03256578 with catch @ 032566cc */
                    /* catch() { ... } // from try @ 03255fdc with catch @ 032566d0 */
                    /* catch() { ... } // from try @ 03255678 with catch @ 032566d4 */
                    /* catch() { ... } // from try @ 0325531c with catch @ 032566d8 */
            local_64 = (DJLEFFMINPB->fields).FAHFCHOFIDE * (DJLEFFMINPB->fields).DLIMFDEGOAL -
                       (DJLEFFMINPB->fields).HBJHMNIPNFA * (DJLEFFMINPB->fields).PMMICNDMMNH;
                    /* catch() { ... } // from try @ 03255668 with catch @ 032566dc */
                    /* catch() { ... } // from try @ 032552bc with catch @ 032566e0 */
            pSVar16 = System_Single__ToString(local_64,(MethodInfo *)&local_64);
                    /* catch() { ... } // from try @ 032555c0 with catch @ 032566e4 */
                    /* catch() { ... } // from try @ 03255628 with catch @ 032566e8 */
                    /* catch() { ... } // from try @ 032555d0 with catch @ 032566ec */
                    /* catch() { ... } // from try @ 032553ac with catch @ 032566f0 */
                    /* catch() { ... } // from try @ 0325530c with catch @ 032566f4 */
                    /* catch() { ... } // from try @ 03255608 with catch @ 032566f8 */
                    /* catch() { ... } // from try @ 03255648 with catch @ 032566fc */
            bVar9 = MGICPMNIAMM__AAPJEJKHCOK
                              ((MGICPMNIAMM_o *)pSVar16,KHHGPLOMHBB,__this_03,StringLiteral_2506/*"?PlayerParameter[Me].Health*?PlayerParameter[Me].DamageConverter-?PlayerParameter[Me].Pain*?PlayerParameter[Me].Defau..."*/,
                               pSVar16,in_x5);
                    /* catch() { ... } // from try @ 03255370 with catch @ 03256700 */
                    /* catch() { ... } // from try @ 032556b8 with catch @ 03256704 */
                    /* catch() { ... } // from try @ 03255768 with catch @ 03256708 */
                    /* catch() { ... } // from try @ 03255964 with catch @ 0325670c */
                    /* catch() { ... } // from try @ 03255a14 with catch @ 03256710 */
                    /* catch() { ... } // from try @ 03255c10 with catch @ 03256714 */
                    /* catch() { ... } // from try @ 03255d00 with catch @ 03256718 */
                    /* catch() { ... } // from try @ 03255ef8 with catch @ 0325671c */
                    /* catch() { ... } // from try @ 03255fe4 with catch @ 03256720 */
            local_64 = ((DJLEFFMINPB->fields).DGGDGCEMMGI * (DJLEFFMINPB->fields).PMMICNDMMNH -
                       (float)(DJLEFFMINPB->fields).EOAEIECDCLC) - (DJLEFFMINPB->fields).FAHFCHOFIDE
            ;
                    /* catch() { ... } // from try @ 03255264 with catch @ 03256724 */
                    /* catch() { ... } // from try @ 03255270 with catch @ 03256728 */
                    /* catch() { ... } // from try @ 03256454 with catch @ 0325672c */
            pSVar16 = System_Single__ToString(local_64,(MethodInfo *)&local_64);
                    /* catch() { ... } // from try @ 032551fc with catch @ 03256730 */
                    /* catch() { ... } // from try @ 032551a0 with catch @ 03256734 */
                    /* catch() { ... } // from try @ 0325632c with catch @ 03256738 */
            bVar10 = MGICPMNIAMM__AAPJEJKHCOK
                               ((MGICPMNIAMM_o *)pSVar16,KHHGPLOMHBB,__this_03,StringLiteral_2512/*"?PlayerParameter[Me].StyleGain*?PlayerParameter[Me].DefaultPerksAspect-?PlayerParameter[Me].MagicBullet-?PlayerParame..."*/,
                                pSVar16,in_x5);
                    /* try { // try from 0325675c to 0335675f has its CatchHandler @ 0325676c */
                    /* catch() { ... } // from try @ 0325675c with catch @ 0325676c */
                    /* try { // try from 0325677c to 033567e3 has its CatchHandler @ 032567f8 */
            return ((((((bVar3 && bVar4) && bVar5) && bVar6) && bVar7) && bVar8) && bVar9) && bVar10
            ;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool AAPJEJKHCOK(StringBuilder KHHGPLOMHBB, NILLKLHKLHG NIIOOBMIIPJ, string LCFHCBEAEIM, string GDLOOMPBNEB)  [RVA 0x3156814]
// MGICPMNIAMM$$AAPJEJKHCOK @ RVA 0x3156814

bool MGICPMNIAMM__AAPJEJKHCOK
               (MGICPMNIAMM_o *__this,System_Text_StringBuilder_o *KHHGPLOMHBB,
               NILLKLHKLHG_o *NIIOOBMIIPJ,System_String_o *LCFHCBEAEIM,System_String_o *GDLOOMPBNEB,
               MethodInfo *method)

{
  bool bVar1;
  MMFIDKMDADC_o *pMVar2;
  System_String_array *values;
  System_String_o *value;
  
  if ((DAT_04566841 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_364/*" calc="*/);
    FUN_01bab630(&StringLiteral_363/*" c#="*/);
    __this = (MGICPMNIAMM_o *)FUN_01bab630(&StringLiteral_18069/*"error "*/);
    DAT_04566841 = 1;
  }
  if (NIIOOBMIIPJ == (NILLKLHKLHG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  NILLKLHKLHG__HNIHOIAMDPC(NIIOOBMIIPJ,LCFHCBEAEIM,(MethodInfo *)0x0);
  pMVar2 = NILLKLHKLHG__CHKGAHCDFJF(NIIOOBMIIPJ,true,(MethodInfo *)0x0);
  if (pMVar2 == (MMFIDKMDADC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = System_String__op_Inequality((pMVar2->fields).HPACPFLKHPK,GDLOOMPBNEB,(MethodInfo *)0x0);
  if (bVar1) {
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
    if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[0] = StringLiteral_18069/*"error "*/;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[1] = LCFHCBEAEIM;
    thunk_FUN_01c20e04(values->m_Items + 1,LCFHCBEAEIM);
    if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[2] = StringLiteral_364/*" calc="*/;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[3] = (pMVar2->fields).HPACPFLKHPK;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[4] = StringLiteral_363/*" c#="*/;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[5] = GDLOOMPBNEB;
    thunk_FUN_01c20e04(values->m_Items + 5,GDLOOMPBNEB);
    value = System_String__Concat(values,(MethodInfo *)0x0);
    if (KHHGPLOMHBB == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Text_StringBuilder__AppendLine(KHHGPLOMHBB,value,(MethodInfo *)0x0);
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// ===== public void .ctor()  [RVA 0x3156AF8]
// MGICPMNIAMM$$.ctor @ RVA 0x3156AF8

void MGICPMNIAMM___ctor(MGICPMNIAMM_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03256b10 to 03356b13 has its CatchHandler @ 03256b18 */
                    /* try { // try from 03256b14 to 03356b37 has its CatchHandler @ 03256a10 */
  if ((DAT_04566842 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03256b10 with catch @ 03256b18
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03256abc with catch @ 03256b1c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03256aa8 with catch @ 03256b20
                        */
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_04566842 = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03256b38 to 03356b3b has its CatchHandler @ 03256b64 */
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
                    /* try { // try from 03256b3c to 03356b73 has its CatchHandler @ 03256a10 */
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}

