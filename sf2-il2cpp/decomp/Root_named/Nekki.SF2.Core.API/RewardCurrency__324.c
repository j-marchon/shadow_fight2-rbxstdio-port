// Original name: Nekki.SF2.Core.API.RewardCurrency  (obfuscated HFNLANEMDFI)
// TypeDefIndex 324
// Namespace: 
// public class RewardCurrency : DOCABGGCCIL
// Fields:
//   public string JIJLBFGKNJK; // 0x18
//   private float AICMABLCDED; // 0x20
//   private bool CKEJJHPCDFK; // 0x24
//   private float EGCPFDNGNHP; // 0x28
//   private float CMCDADPEHJI; // 0x2C
//   private float NBJKKCCFGNM; // 0x30

// ===== private void KIGEDFECCFP()  [RVA 0x3349CD4]
// RewardCurrency$$KIGEDFECCFP @ RVA 0x3349CD4

void RewardCurrency__KIGEDFECCFP(RewardCurrency_o *__this,MethodInfo *method)

{
  OCABNNJIENC_o *__this_00;
  MethodInfo *extraout_x1;
  float fVar1;
  
  if ((DAT_045679e9 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_045679e9 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).CKEJJHPCDFK != false) {
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
    }
    __this_00 = GameUtils_TypeInfo->static_fields->PIBLPLGLODE;
    if (__this_00 == (OCABNNJIENC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar1 = OCABNNJIENC__JPONFNMFHGE(__this_00,(__this->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    (__this->fields).CKEJJHPCDFK = false;
    (__this->fields).AICMABLCDED = fVar1 * (__this->fields).NBJKKCCFGNM;
  }
  return;
}


// ===== public int ELLKHHEENBP()  [RVA 0x3349D5C]
// RewardCurrency$$ELLKHHEENBP @ RVA 0x3349D5C

int32_t RewardCurrency__ELLKHHEENBP(RewardCurrency_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double val2;
  double dVar9;
  float fVar10;
  double dVar11;
  
  if ((DAT_045679ea & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_11371/*"RewardCurrency::GetCalculatedCount use ticket 24089"*/);
    DAT_045679ea = 1;
    method = extraout_x1;
  }
  RewardCurrency__KIGEDFECCFP(__this,method);
  fVar8 = (__this->fields).AICMABLCDED;
  fVar2 = fVar8;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    fVar2 = (__this->fields).AICMABLCDED;
  }
  val2 = (double)(float)(int)fVar8;
  if (0.0 < (__this->fields).CMCDADPEHJI) {
    dVar9 = (double)(long)(fVar2 * (__this->fields).EGCPFDNGNHP + 0.5);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    dVar3 = System_Math__Min(dVar9,val2,(MethodInfo *)0x0);
    fVar2 = (__this->fields).CMCDADPEHJI;
    if (1.0 <= fVar2) {
      dVar7 = dVar3 * 0.5;
      dVar5 = val2 + 1.0 + dVar9 * 0.5;
      dVar4 = 0.0;
    }
    else {
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      dVar4 = System_Math__Max(dVar9,1.0,(MethodInfo *)0x0);
      dVar4 = System_Math__Pow((double)fVar2,-1.0 / dVar4,(MethodInfo *)0x0);
      dVar5 = System_Math__Pow(dVar4,-dVar3,(MethodInfo *)0x0);
      dVar6 = log(dVar4);
      dVar7 = System_Math__Pow(dVar6,2.0,(MethodInfo *)0x0);
      dVar11 = dVar3 * dVar6 + 1.0;
      dVar7 = (1.0 - dVar5 * dVar11) / dVar7;
      dVar5 = System_Math__Pow(dVar4,-dVar9,(MethodInfo *)0x0);
      dVar6 = System_Math__Pow(dVar6,2.0,(MethodInfo *)0x0);
      dVar5 = val2 + 1.0 + (1.0 - dVar5 * dVar11) / dVar6;
    }
    dVar6 = (double)(__this->fields).AICMABLCDED;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar2 = LIIFLGALGNK__GFHNCCOMPAJ(0.0,1.0,(MethodInfo *)0x0);
    fVar8 = LIIFLGALGNK__GFHNCCOMPAJ(0.0,1.0,(MethodInfo *)0x0);
    fVar10 = (__this->fields).CMCDADPEHJI;
                    /* try { // try from 03449fa4 to 0354a11f has its CatchHandler @ 03449fa4
                       catch() { ... } // from try @ 03449fa4 with catch @ 03449fa4
                       catch() { ... } // from try @ 0344a28c with catch @ 03449fa4
                       catch() { ... } // from try @ 0344a33c with catch @ 03449fa4
                       catch() { ... } // from try @ 0344a344 with catch @ 03449fa4
                       catch() { ... } // from try @ 0344a420 with catch @ 03449fa4 */
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if ((double)fVar8 <= 1.0 / ((dVar6 - (val2 - dVar7)) / (dVar5 - dVar6) + 1.0)) {
      if (1.0 <= fVar10) {
                    /* try { // try from 0344a120 to 0354a147 has its CatchHandler @ 0344a368 */
        dVar9 = (double)(long)(dVar3 * (double)fVar2 + 0.5);
      }
      else {
        dVar9 = System_Math__Pow(dVar4,-dVar3,(MethodInfo *)0x0);
        dVar3 = log(1.0 - (1.0 - dVar9) * (double)fVar2);
        dVar7 = log(dVar4);
        dVar9 = (double)(long)(-dVar3 / dVar7);
        dVar4 = log((((dVar7 + dVar7) - dVar4) + 1.0) / (dVar4 * dVar7));
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (-dVar4 / dVar7 <= -dVar3 / dVar7 - dVar9) {
          dVar9 = dVar9 + 1.0;
        }
      }
      val2 = val2 - dVar9;
    }
    else {
      if (1.0 <= fVar10) {
        dVar9 = (double)(long)(dVar9 * (double)fVar2 + 0.5);
      }
      else {
        dVar9 = System_Math__Pow(dVar4,-dVar9,(MethodInfo *)0x0);
        dVar3 = log(1.0 - (1.0 - dVar9) * (double)fVar2);
        dVar7 = log(dVar4);
        dVar9 = (double)(long)(-dVar3 / dVar7);
        dVar4 = log((((dVar7 + dVar7) - dVar4) + 1.0) / (dVar4 * dVar7));
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (-dVar4 / dVar7 <= -dVar3 / dVar7 - dVar9) {
          dVar9 = dVar9 + 1.0;
        }
      }
      val2 = val2 + 1.0 + dVar9;
    }
    if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_11371/*"RewardCurrency::GetCalculatedCount use ticket 24089"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  }
  iVar1 = -0x80000000;
                    /* try { // try from 0344a17c to 0354a1a7 has its CatchHandler @ 0344a364 */
  if (val2 != INFINITY) {
    iVar1 = (int)val2;
  }
  return iVar1;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x334A190]
// RewardCurrency$$.ctor @ RVA 0x334A190

void RewardCurrency___ctor(RewardCurrency_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  float fVar6;
  
  if ((DAT_045679eb & 1) == 0) {
    FUN_01bab630(&StringLiteral_5224/*"DecayCoefficient"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_6084/*"ExpectedValue"*/);
    FUN_01bab630(&StringLiteral_5335/*"DeviationCoefficient"*/);
                    /* try { // try from 0344a1e8 to 0354a1eb has its CatchHandler @ 0344a350 */
    FUN_01bab630(&StringLiteral_14738/*"ValueMultiplier"*/);
                    /* try { // try from 0344a1f4 to 0354a1fb has its CatchHandler @ 0344a354 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045679eb = 1;
  }
                    /* try { // try from 0344a208 to 0354a20f has its CatchHandler @ 0344a358 */
  ppSVar5 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar5 = StringLiteral_1/*""*/;
                    /* try { // try from 0344a218 to 0354a28b has its CatchHandler @ 0344a374 */
  thunk_FUN_01c20e04(ppSVar5);
  DOCABGGCCIL___ctor((DOCABGGCCIL_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._4_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._4_HNIHOIAMDPC.method);
  (__this->fields).super.NOBEFHEECKJ = 3;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      *ppSVar5 = pSVar4;
                    /* try { // try from 0344a28c to 0354a327 has its CatchHandler @ 03449fa4 */
      thunk_FUN_01c20e04(ppSVar5,pSVar4);
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_6084/*"ExpectedValue"*/,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar3,(MethodInfo *)0x0);
        (__this->fields).CKEJJHPCDFK = bVar1;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_6084/*"ExpectedValue"*/,(MethodInfo *)0x0);
          fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
          (__this->fields).AICMABLCDED = fVar6;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0344a328 to 0354a32b has its CatchHandler @ 0344a36c */
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_5335/*"DeviationCoefficient"*/,(MethodInfo *)0x0);
                    /* try { // try from 0344a32c to 0354a32f has its CatchHandler @ 0344a370 */
                    /* try { // try from 0344a330 to 0354a333 has its CatchHandler @ 0344a360 */
                    /* try { // try from 0344a334 to 0354a337 has its CatchHandler @ 0344a35c */
            fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                    /* try { // try from 0344a338 to 0354a33b has its CatchHandler @ 0344a370 */
            (__this->fields).EGCPFDNGNHP = fVar6;
                    /* try { // try from 0344a33c to 0354a33f has its CatchHandler @ 03449fa4 */
                    /* try { // try from 0344a340 to 0354a343 has its CatchHandler @ 0344a34c */
                    /* try { // try from 0344a344 to 0354a38b has its CatchHandler @ 03449fa4 */
                    /* catch() { ... } // from try @ 0344a340 with catch @ 0344a34c */
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 0344a1e8 with catch @ 0344a350 */
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 0344a1f4 with catch @ 0344a354 */
                    /* catch() { ... } // from try @ 0344a208 with catch @ 0344a358 */
                    /* catch() { ... } // from try @ 0344a334 with catch @ 0344a35c */
                    /* catch() { ... } // from try @ 0344a330 with catch @ 0344a360 */
                    /* catch() { ... } // from try @ 0344a17c with catch @ 0344a364 */
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_5224/*"DecayCoefficient"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0344a120 with catch @ 0344a368 */
                    /* catch() { ... } // from try @ 0344a328 with catch @ 0344a36c */
                    /* catch() { ... } // from try @ 0344a32c with catch @ 0344a370
                       catch() { ... } // from try @ 0344a338 with catch @ 0344a370 */
              fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0344a218 with catch @ 0344a374 */
              (__this->fields).CMCDADPEHJI = fVar6;
              pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
                    /* try { // try from 0344a38c to 0354a38f has its CatchHandler @ 0344a3a0 */
              if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 0344a38c with catch @ 0344a3a0 */
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar2,StringLiteral_14738/*"ValueMultiplier"*/,(MethodInfo *)0x0);
                fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                    /* try { // try from 0344a3b0 to 0354a41f has its CatchHandler @ 0344a434 */
                (__this->fields).NBJKKCCFGNM = fVar6;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long OKHNKAEHOHG()  [RVA 0x334A3C8]
// RewardCurrency$$OKHNKAEHOHG @ RVA 0x334A3C8

int64_t RewardCurrency__OKHNKAEHOHG(RewardCurrency_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  MethodInfo *extraout_x1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_045679ec & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045679ec = 1;
    method = extraout_x1;
  }
  RewardCurrency__KIGEDFECCFP(__this,method);
  fVar5 = (__this->fields).AICMABLCDED;
  fVar6 = (__this->fields).EGCPFDNGNHP;
  fVar2 = fVar5;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0344a420 to 0354a42b has its CatchHandler @ 03449fa4 */
    thunk_FUN_01ba7564();
    fVar2 = (__this->fields).AICMABLCDED;
  }
                    /* try { // try from 0344a42c to 0354a433 has its CatchHandler @ 0344a434 */
                    /* catch() { ... } // from try @ 0344a3b0 with catch @ 0344a434
                       catch() { ... } // from try @ 0344a42c with catch @ 0344a434 */
  dVar3 = (double)fVar2 - (double)(long)(fVar5 * fVar6 + 0.5);
  dVar4 = (double)(long)dVar3;
  iVar1 = -0x8000000000000000;
  if (dVar4 != INFINITY) {
    iVar1 = (long)dVar3;
  }
  if (dVar4 < 0.0) {
    iVar1 = 0;
  }
  return iVar1;
}

