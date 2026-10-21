// TypeDefIndex 2880
// Namespace: 
// public class OPNMPAJKDMI : NCCFNKMICGK
// Fields:
//   private HOOAAGABMBL <BODPEKDENEG>k__BackingField; // 0x10
//   private AJDHCLBLGMI <FBNKBJAJBJF>k__BackingField; // 0x18
//   protected readonly ACHLOMELAJE FOJBBDCJDFH; // 0x20
//   protected readonly NCNJEIBHGBH ILLNDILEKAM; // 0x28

// ===== public bool BNNIDPDMOIL(PKHMIGFEJCL OKBIKHHKOEN)  [RVA 0x343E228]
// OPNMPAJKDMI$$BNNIDPDMOIL @ RVA 0x343E228

bool OPNMPAJKDMI__BNNIDPDMOIL(OPNMPAJKDMI_o *__this,PKHMIGFEJCL_o *OKBIKHHKOEN,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  HOOAAGABMBL_o *pHVar2;
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_01;
  
  if ((DAT_045681fe & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_TrueForAll__);
    FUN_01bab630(&Method_OPNMPAJKDMI_MNFOBMOOCLN_FNCKNONJKIK__);
    FUN_01bab630(&OPNMPAJKDMI_MNFOBMOOCLN_TypeInfo);
    FUN_01bab630(&System_Predicate<LEGDPJHPEOB>_TypeInfo);
    DAT_045681fe = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(OPNMPAJKDMI_MNFOBMOOCLN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)OKBIKHHKOEN;
    thunk_FUN_01c20e04(__this_00 + 1,OKBIKHHKOEN);
    pHVar2 = (__this->fields)._BODPEKDENEG_k__BackingField;
    if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
      __this_01 = (pHVar2->fields)._KCELOPNOAEM_k__BackingField;
      if (__this_01 != (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
        match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<LEGDPJHPEOB>_TypeInfo);
                    /* try { // try from 0353e2f0 to 0363e38b has its CatchHandler @ 0353e2f0
                       catch() { ... } // from try @ 0353e2f0 with catch @ 0353e2f0
                       catch() { ... } // from try @ 0353e3f0 with catch @ 0353e2f0
                       catch() { ... } // from try @ 0353e418 with catch @ 0353e2f0
                       catch() { ... } // from try @ 0353e444 with catch @ 0353e2f0
                       catch() { ... } // from try @ 0353e48c with catch @ 0353e2f0 */
        System_Predicate<object>___ctor();
        bVar1 = System_Collections_Generic_List<object>__TrueForAll
                          ((System_Collections_Generic_List_object__o *)__this_01,match,
                           Method_System_Collections_Generic_List<LEGDPJHPEOB>_TrueForAll__);
        return bVar1;
      }
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GLIPIKHCNCO()  [RVA 0x343E330]
// OPNMPAJKDMI$$GLIPIKHCNCO @ RVA 0x343E330

void OPNMPAJKDMI__GLIPIKHCNCO(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  FKNCNNOOOIO_o *__this_00;
  System_String_o *pSVar1;
  NCNJEIBHGBH_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  HOOAAGABMBL_o *pHVar2;
  System_String_o **ppSVar3;
  
  if ((DAT_045681ff & 1) == 0) {
    FUN_01bab630(&FKNCNNOOOIO_TypeInfo);
    FUN_01bab630(&StringLiteral_12931/*"Textures/buttons/map/"*/);
    DAT_045681ff = 1;
    method = extraout_x1;
  }
  __this_00 = (FKNCNNOOOIO_o *)thunk_FUN_01bda818(FKNCNNOOOIO_TypeInfo,method);
  FKNCNNOOOIO___ctor(__this_00,(MethodInfo *)0x0);
  pHVar2 = (__this->fields)._BODPEKDENEG_k__BackingField;
                    /* try { // try from 0353e38c to 0363e393 has its CatchHandler @ 0353e428 */
  if ((pHVar2 != (HOOAAGABMBL_o *)0x0) && (__this_00 != (FKNCNNOOOIO_o *)0x0)) {
    (__this_00->fields).JIJLBFGKNJK = (pHVar2->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04();
                    /* try { // try from 0353e3a0 to 0363e3ab has its CatchHandler @ 0353e420 */
    pSVar1 = OPNMPAJKDMI__KBCKLCBBAJB(__this,method_00);
    (__this_00->fields).AOOKMODPLGM = pSVar1;
    thunk_FUN_01c20e04();
    pHVar2 = (__this->fields)._BODPEKDENEG_k__BackingField;
    if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
      (__this_00->fields).KPDPJONADPJ = (pHVar2->fields)._PCDKGNIOEAN_k__BackingField;
      thunk_FUN_01c20e04();
      ppSVar3 = &(__this_00->fields).MEONABNPAPF;
      *ppSVar3 = StringLiteral_12931/*"Textures/buttons/map/"*/;
                    /* try { // try from 0353e3e8 to 0363e3ef has its CatchHandler @ 0353e41c */
      thunk_FUN_01c20e04(ppSVar3);
                    /* try { // try from 0353e3f0 to 0363e413 has its CatchHandler @ 0353e2f0 */
      (__this_00->fields).AIDMEFDEOLJ = 1;
      (__this_00->fields).OEFBIKEMBOF = true;
      pHVar2 = (__this->fields)._BODPEKDENEG_k__BackingField;
      if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
        (__this_00->fields).JHFAAGIPDAJ = (pHVar2->fields)._KNNLLCNGLGO_k__BackingField;
        thunk_FUN_01c20e04();
        __this_01 = (__this->fields).ILLNDILEKAM;
                    /* try { // try from 0353e414 to 0363e417 has its CatchHandler @ 0353e424 */
        if (__this_01 != (NCNJEIBHGBH_o *)0x0) {
                    /* try { // try from 0353e418 to 0363e43f has its CatchHandler @ 0353e2f0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353e3e8 with catch @ 0353e41c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353e3a0 with catch @ 0353e420
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353e414 with catch @ 0353e424
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353e38c with catch @ 0353e428
                        */
          NCNJEIBHGBH__HKIGFKCDAGJ
                    (__this_01,__this_00,(__this->fields)._BODPEKDENEG_k__BackingField,false,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long EFKCEGNGGOI()  [RVA 0x343E4AC]
// OPNMPAJKDMI$$EFKCEGNGGOI @ RVA 0x343E4AC

int64_t OPNMPAJKDMI__EFKCEGNGGOI(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  long lVar2;
  System_String_o *KGLJICLJHEL;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *pMVar3;
  ACHLOMELAJE_o *pAVar4;
  LAMJOHEKJNJ_o *__this_00;
  
  if ((DAT_04568200 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568200 = 1;
    method = extraout_x1;
  }
  iVar1 = OPNMPAJKDMI__JDAOELAKDPF(__this,method);
  if (iVar1 < 1) {
    pMVar3 = method_00;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar3 = extraout_x1_01;
    }
    if (DAT_04565b87 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b87 = '\x01';
      pMVar3 = extraout_x1_02;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar3 = extraout_x1_03;
    }
    lVar2 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
    iVar1 = OPNMPAJKDMI__CNFMNJGPIAH(__this,pMVar3);
    lVar2 = iVar1 + lVar2;
    pMVar3 = extraout_x1_04;
  }
  else {
    lVar2 = OPNMPAJKDMI__JDAOELAKDPF(__this,method_00);
    pMVar3 = extraout_x1_00;
  }
  pAVar4 = (__this->fields).FOJBBDCJDFH;
  if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
    __this_00 = (pAVar4->fields)._DDGPMHMNKNA_k__BackingField;
    KGLJICLJHEL = OPNMPAJKDMI__KBCKLCBBAJB(__this,pMVar3);
    if (__this_00 != (LAMJOHEKJNJ_o *)0x0) {
      LAMJOHEKJNJ__NCBMPCGHHFK(__this_00,KGLJICLJHEL,lVar2,(MethodInfo *)0x0);
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(HOOAAGABMBL PLJKGEJHILJ, ACHLOMELAJE BHENDAGDGME, NCNJEIBHGBH GMFEBFOGDAA)  [RVA 0x343E5E0]
// OPNMPAJKDMI$$.ctor @ RVA 0x343E5E0

void OPNMPAJKDMI___ctor(OPNMPAJKDMI_o *__this,HOOAAGABMBL_o *PLJKGEJHILJ,ACHLOMELAJE_o *BHENDAGDGME,
                       NCNJEIBHGBH_o *GMFEBFOGDAA,MethodInfo *method)

{
  AJDHCLBLGMI_o *pAVar1;
  ACHLOMELAJE_o **ppAVar2;
  NCNJEIBHGBH_o **ppNVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._BODPEKDENEG_k__BackingField = PLJKGEJHILJ;
  thunk_FUN_01c20e04(&__this->fields,PLJKGEJHILJ);
  if ((PLJKGEJHILJ != (HOOAAGABMBL_o *)0x0) && (BHENDAGDGME != (ACHLOMELAJE_o *)0x0)) {
    pAVar1 = ACHLOMELAJE__IPJLBFKFOOD
                       (BHENDAGDGME,(PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField,
                        (MethodInfo *)0x0);
    (__this->fields)._FBNKBJAJBJF_k__BackingField = pAVar1;
    thunk_FUN_01c20e04();
    ppAVar2 = &(__this->fields).FOJBBDCJDFH;
    *ppAVar2 = BHENDAGDGME;
    thunk_FUN_01c20e04(ppAVar2,BHENDAGDGME);
    ppNVar3 = &(__this->fields).ILLNDILEKAM;
    *ppNVar3 = GMFEBFOGDAA;
    thunk_FUN_01c20e04(ppNVar3,GMFEBFOGDAA);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PMDPIBAJAAA(AJDHCLBLGMI CJNHFNHJHPE)  [RVA 0x343E66C]
// OPNMPAJKDMI$$PMDPIBAJAAA @ RVA 0x343E66C

void OPNMPAJKDMI__PMDPIBAJAAA(OPNMPAJKDMI_o *__this,AJDHCLBLGMI_o *CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 0353e66c to 0363e76b has its CatchHandler @ 0353e66c
                       catch() { ... } // from try @ 0353e66c with catch @ 0353e66c
                       catch() { ... } // from try @ 0353e798 with catch @ 0353e66c
                       catch() { ... } // from try @ 0353e7ec with catch @ 0353e66c
                       catch() { ... } // from try @ 0353e814 with catch @ 0353e66c
                       catch() { ... } // from try @ 0353e854 with catch @ 0353e66c */
  (__this->fields)._FBNKBJAJBJF_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void IGDDDCBHNOF()  [RVA 0x343E674]
// OPNMPAJKDMI$$IGDDDCBHNOF @ RVA 0x343E674

void OPNMPAJKDMI__IGDDDCBHNOF(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  NCNJEIBHGBH_o *__this_00;
  HOOAAGABMBL_o *pHVar1;
  
  pHVar1 = (__this->fields)._BODPEKDENEG_k__BackingField;
  if ((pHVar1 != (HOOAAGABMBL_o *)0x0) &&
     (__this_00 = (__this->fields).ILLNDILEKAM, __this_00 != (NCNJEIBHGBH_o *)0x0)) {
    NCNJEIBHGBH__JCDCJJMEAJA
              (__this_00,(pHVar1->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IGNCGJGOLAA(HOOAAGABMBL CJNHFNHJHPE)  [RVA 0x343E69C]
// OPNMPAJKDMI$$IGNCGJGOLAA @ RVA 0x343E69C

void OPNMPAJKDMI__IGNCGJGOLAA(OPNMPAJKDMI_o *__this,HOOAAGABMBL_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BODPEKDENEG_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public AJDHCLBLGMI CGNDCABNKOO()  [RVA 0x343E6A4]
// OPNMPAJKDMI$$CGNDCABNKOO @ RVA 0x343E6A4

AJDHCLBLGMI_o * OPNMPAJKDMI__CGNDCABNKOO(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  return (__this->fields)._FBNKBJAJBJF_k__BackingField;
}


// ===== public string KBCKLCBBAJB()  [RVA 0x343E454]
// OPNMPAJKDMI$$KBCKLCBBAJB @ RVA 0x343E454

System_String_o * OPNMPAJKDMI__KBCKLCBBAJB(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  HOOAAGABMBL_o *pHVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04568201 & 1) == 0) {
                    /* catch() { ... } // from try @ 0353e440 with catch @ 0353e474 */
    auVar3 = FUN_01bab630(&StringLiteral_9804/*"OfferTimer_"*/);
    DAT_04568201 = 1;
  }
  pHVar2 = (__this->fields)._BODPEKDENEG_k__BackingField;
                    /* try { // try from 0353e484 to 0363e48b has its CatchHandler @ 0353e4a0 */
  if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 0353e48c to 0363e497 has its CatchHandler @ 0353e2f0 */
                    /* try { // try from 0353e498 to 0363e49f has its CatchHandler @ 0353e4a0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0353e484 with catch @ 0353e4a0
                       catch(type#2 @ 00000000) { ... } // from try @ 0353e498 with catch @ 0353e4a0
                        */
    pSVar1 = System_String__Concat
                       (StringLiteral_9804/*"OfferTimer_"*/,(pHVar2->fields)._COIPKAKHDFP_k__BackingField,
                        (MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== public bool ICDECCBLPDE()  [RVA 0x343E6AC]
// OPNMPAJKDMI$$ICDECCBLPDE @ RVA 0x343E6AC

bool OPNMPAJKDMI__ICDECCBLPDE(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *KGLJICLJHEL;
  LPEBBHNDFCG_o *pLVar2;
  MethodInfo *extraout_x1;
  ACHLOMELAJE_o *pAVar3;
  long lVar4;
  LAMJOHEKJNJ_o *__this_00;
  
  if ((DAT_04568202 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568202 = 1;
    method = extraout_x1;
  }
  pAVar3 = (__this->fields).FOJBBDCJDFH;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    __this_00 = (pAVar3->fields)._DDGPMHMNKNA_k__BackingField;
    KGLJICLJHEL = OPNMPAJKDMI__KBCKLCBBAJB(__this,method);
    if (__this_00 != (LAMJOHEKJNJ_o *)0x0) {
      pLVar2 = LAMJOHEKJNJ__FENHANFAIND(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
      bVar1 = false;
      if (pLVar2 != (LPEBBHNDFCG_o *)0x0) {
        lVar4 = (pLVar2->fields)._PGKPHJLHJCO_k__BackingField;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        if (DAT_04565b87 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b87 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = 0 < lVar4 - NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
      }
                    /* try { // try from 0353e76c to 0363e773 has its CatchHandler @ 0353e7f8 */
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool HHDBIGKBMEC()  [RVA 0x343E77C]
// OPNMPAJKDMI$$HHDBIGKBMEC @ RVA 0x343E77C

bool OPNMPAJKDMI__HHDBIGKBMEC(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  AJDHCLBLGMI_o *pAVar3;
  
  bVar2 = OPNMPAJKDMI__ICDECCBLPDE(__this,method);
  if (!bVar2) {
                    /* try { // try from 0353e78c to 0363e797 has its CatchHandler @ 0353e7f0 */
    pAVar3 = (__this->fields)._FBNKBJAJBJF_k__BackingField;
    if (pAVar3 == (AJDHCLBLGMI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0353e798 to 0363e7e7 has its CatchHandler @ 0353e66c */
    uVar1 = (pAVar3->fields).ICBBFDJOHHF - 1;
    if (uVar1 < 4) {
      bVar2 = (bool)((byte)(0xb >> (ulong)(uVar1 & 0xf)) & 1);
    }
  }
  return bVar2;
}


// ===== public void EIGMEGLAAKE(bool MGAAKBCIIIC = False)  [RVA 0x343E7C8]
// OPNMPAJKDMI$$EIGMEGLAAKE @ RVA 0x343E7C8

void OPNMPAJKDMI__EIGMEGLAAKE(OPNMPAJKDMI_o *__this,bool MGAAKBCIIIC,MethodInfo *method)

{
  System_String_o *KGLJICLJHEL;
  ACHLOMELAJE_o *pAVar1;
  LAMJOHEKJNJ_o *__this_00;
  
  pAVar1 = (__this->fields).FOJBBDCJDFH;
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    __this_00 = (pAVar1->fields)._DDGPMHMNKNA_k__BackingField;
    KGLJICLJHEL = OPNMPAJKDMI__KBCKLCBBAJB(__this,(MethodInfo *)(ulong)MGAAKBCIIIC);
    if (__this_00 != (LAMJOHEKJNJ_o *)0x0) {
                    /* try { // try from 0353e7e8 to 0363e7eb has its CatchHandler @ 0353e7f4 */
                    /* try { // try from 0353e7ec to 0363e80f has its CatchHandler @ 0353e66c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353e78c with catch @ 0353e7f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353e7e8 with catch @ 0353e7f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353e76c with catch @ 0353e7f8
                        */
      LAMJOHEKJNJ__OJAKPICKBBC(__this_00,KGLJICLJHEL,MGAAKBCIIIC,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual bool NLMHNIFKDOA()  [RVA 0x343E808]
// OPNMPAJKDMI$$NLMHNIFKDOA @ RVA 0x343E808

bool OPNMPAJKDMI__NLMHNIFKDOA(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  bool bVar1;
  GGHCLMEFIGO_o *__this_00;
  HOOAAGABMBL_o *pHVar2;
  ACHLOMELAJE_o *pAVar3;
  
  pAVar3 = (__this->fields).FOJBBDCJDFH;
                    /* try { // try from 0353e810 to 0363e813 has its CatchHandler @ 0353e83c */
                    /* try { // try from 0353e814 to 0363e84b has its CatchHandler @ 0353e66c */
  if (((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
      (pHVar2 = (__this->fields)._BODPEKDENEG_k__BackingField, pHVar2 != (HOOAAGABMBL_o *)0x0)) &&
     (__this_00 = (pAVar3->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    bVar1 = GGHCLMEFIGO__JFPMAKABBOK
                      (__this_00,(pHVar2->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HOOAAGABMBL IDADGMDDNAK()  [RVA 0x343E838]
// OPNMPAJKDMI$$IDADGMDDNAK @ RVA 0x343E838

HOOAAGABMBL_o * OPNMPAJKDMI__IDADGMDDNAK(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0353e810 with catch @ 0353e83c */
  return (__this->fields)._BODPEKDENEG_k__BackingField;
}


// ===== public long JDAOELAKDPF()  [RVA 0x343E598]
// OPNMPAJKDMI$$JDAOELAKDPF @ RVA 0x343E598

int64_t OPNMPAJKDMI__JDAOELAKDPF(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  GEIHBHEDJJM_o *__this_00;
  int64_t iVar1;
  HOOAAGABMBL_o *pHVar2;
  
  pHVar2 = (__this->fields)._BODPEKDENEG_k__BackingField;
  if ((pHVar2 != (HOOAAGABMBL_o *)0x0) &&
     (__this_00 = (pHVar2->fields)._PJJOKENLDLD_k__BackingField, __this_00 != (GEIHBHEDJJM_o *)0x0))
  {
    iVar1 = GEIHBHEDJJM__FJPMOIJCMFB(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual IAMJIBPAOBA NHGGBEACKBD()  [RVA 0x343E840]
// OPNMPAJKDMI$$NHGGBEACKBD @ RVA 0x343E840

int32_t OPNMPAJKDMI__NHGGBEACKBD(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public long CNFMNJGPIAH()  [RVA 0x343E5BC]
// OPNMPAJKDMI$$CNFMNJGPIAH @ RVA 0x343E5BC

int64_t OPNMPAJKDMI__CNFMNJGPIAH(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  GEIHBHEDJJM_o *__this_00;
  int64_t iVar1;
  HOOAAGABMBL_o *pHVar2;
  
  pHVar2 = (__this->fields)._BODPEKDENEG_k__BackingField;
  if ((pHVar2 != (HOOAAGABMBL_o *)0x0) &&
     (__this_00 = (pHVar2->fields)._LLIMGBJAEIP_k__BackingField, __this_00 != (GEIHBHEDJJM_o *)0x0))
  {
    iVar1 = GEIHBHEDJJM__FJPMOIJCMFB(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool OFGAMIMEOEH()  [RVA 0x343E848]
// OPNMPAJKDMI$$OFGAMIMEOEH @ RVA 0x343E848

bool OPNMPAJKDMI__OFGAMIMEOEH(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  HOOAAGABMBL_o *pHVar1;
  
                    /* try { // try from 0353e84c to 0363e853 has its CatchHandler @ 0353e868 */
  pHVar1 = (__this->fields)._BODPEKDENEG_k__BackingField;
  if (pHVar1 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 0353e854 to 0363e85f has its CatchHandler @ 0353e66c */
    return (pHVar1->fields)._BFCHCAGPLOC_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0353e860 to 0363e867 has its CatchHandler @ 0353e868 */
  FUN_01bab8c8();
}


// ===== public long JLBCBOACCGB()  [RVA 0x343E864]
// OPNMPAJKDMI$$JLBCBOACCGB @ RVA 0x343E864

int64_t OPNMPAJKDMI__JLBCBOACCGB(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  GEIHBHEDJJM_o *__this_00;
  int64_t iVar1;
  HOOAAGABMBL_o *pHVar2;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0353e84c with catch @ 0353e868
                       catch(type#2 @ 00000000) { ... } // from try @ 0353e860 with catch @ 0353e868
                        */
  pHVar2 = (__this->fields)._BODPEKDENEG_k__BackingField;
  if ((pHVar2 != (HOOAAGABMBL_o *)0x0) &&
     (__this_00 = (pHVar2->fields)._JLFPFLIPNLP_k__BackingField, __this_00 != (GEIHBHEDJJM_o *)0x0))
  {
    iVar1 = GEIHBHEDJJM__FJPMOIJCMFB(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IReadOnlyList<POGBKGFBOLC> HOBICLIEIIJ()  [RVA 0x343E888]
// OPNMPAJKDMI$$HOBICLIEIIJ @ RVA 0x343E888

System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *
OPNMPAJKDMI__HOBICLIEIIJ(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  HOOAAGABMBL_o *pHVar1;
  
  pHVar1 = (__this->fields)._BODPEKDENEG_k__BackingField;
  if (pHVar1 != (HOOAAGABMBL_o *)0x0) {
    return (System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *)
           (pHVar1->fields)._NBNMKKDFHLJ_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KCHJCGEMCGE()  [RVA 0x343E438]
// OPNMPAJKDMI$$KCHJCGEMCGE @ RVA 0x343E438

System_String_o * OPNMPAJKDMI__KCHJCGEMCGE(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  HOOAAGABMBL_o *pHVar1;
  
  pHVar1 = (__this->fields)._BODPEKDENEG_k__BackingField;
                    /* try { // try from 0353e440 to 0363e443 has its CatchHandler @ 0353e474 */
  if (pHVar1 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 0353e444 to 0363e483 has its CatchHandler @ 0353e2f0 */
    return (pHVar1->fields)._COIPKAKHDFP_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

