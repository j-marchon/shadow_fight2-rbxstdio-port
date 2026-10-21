// TypeDefIndex 2460
// Namespace: 
// public class JHNJPLCNBHC : LMJFCEPILNI
// Fields:
//   private float JOPGHOBJOCL; // 0x60
//   private float EGOKMNOIJBP; // 0x64
//   private float MOOOFNAMCME; // 0x68
//   private string DINIOKEPIIP; // 0x70
//   private NILLKLHKLHG BNDIEKOPCND; // 0x78
//   private NILLKLHKLHG KIFDEDHNJCA; // 0x80
//   private CJCCEHEKBPD FEGLHAMGOFP; // 0x88

// ===== public override void GIENGNEGHPJ(EHCCNKFIPPA KOKHLOCPDIK)  [RVA 0x336DC80]
// JHNJPLCNBHC$$GIENGNEGHPJ @ RVA 0x336DC80

void JHNJPLCNBHC__GIENGNEGHPJ(JHNJPLCNBHC_o *__this,EHCCNKFIPPA_o *KOKHLOCPDIK,MethodInfo *method)

{
  CJCCEHEKBPD_o *pCVar1;
  NILLKLHKLHG_o *__this_00;
  MMFIDKMDADC_o *__this_01;
  CJCCEHEKBPD_o *pCVar2;
  System_String_o *KGLJICLJHEL;
  System_String_o **ppSVar3;
  CJCCEHEKBPD_o **ppCVar4;
  float fVar5;
  
  if ((DAT_04567afd & 1) == 0) {
    FUN_01bab630(&CJCCEHEKBPD_TypeInfo);
    DAT_04567afd = 1;
  }
  HJNEOLCKEMD__GIENGNEGHPJ((HJNEOLCKEMD_o *)__this,KOKHLOCPDIK,(MethodInfo *)0x0);
  KGLJICLJHEL = (__this->fields).super.super._COIPKAKHDFP_k__BackingField;
  fVar5 = (__this->fields).EGOKMNOIJBP;
  pCVar1 = (CJCCEHEKBPD_o *)thunk_FUN_01bda818(CJCCEHEKBPD_TypeInfo);
  CJCCEHEKBPD___ctor(pCVar1,KGLJICLJHEL,fVar5,(MethodInfo *)0x0);
  ppCVar4 = &(__this->fields).FEGLHAMGOFP;
  *ppCVar4 = pCVar1;
  thunk_FUN_01c20e04(ppCVar4,pCVar1);
  pCVar1 = *ppCVar4;
  if (pCVar1 == (CJCCEHEKBPD_o *)0x0) goto LAB_0346dd88;
  (pCVar1->fields)._IPNDDFLCJIL_k__BackingField = (__this->fields).JOPGHOBJOCL;
  __this_00 = (__this->fields).KIFDEDHNJCA;
  if (__this_00 == (NILLKLHKLHG_o *)0x0) {
    (pCVar1->fields)._GJNIMFABNDM_k__BackingField = 0.0;
  }
  else {
    __this_01 = NILLKLHKLHG__CHKGAHCDFJF(__this_00,false,(MethodInfo *)0x0);
    if (__this_01 == (MMFIDKMDADC_o *)0x0) goto LAB_0346dd88;
    fVar5 = MMFIDKMDADC__OFFODGKLGOP(__this_01,(MethodInfo *)0x0);
    pCVar2 = *ppCVar4;
    (pCVar1->fields)._GJNIMFABNDM_k__BackingField = fVar5;
    pCVar1 = pCVar2;
    if (pCVar2 == (CJCCEHEKBPD_o *)0x0) goto LAB_0346dd88;
  }
  ppSVar3 = &(pCVar1->fields)._GPEFIOMJHNN_k__BackingField;
  *ppSVar3 = (__this->fields).DINIOKEPIIP;
  thunk_FUN_01c20e04(ppSVar3);
  pCVar1 = (__this->fields).FEGLHAMGOFP;
  if (pCVar1 != (CJCCEHEKBPD_o *)0x0) {
    (pCVar1->fields)._IJMMLDDCHFB_k__BackingField = (__this->fields).MOOOFNAMCME;
    CJCCEHEKBPD__DEBAOCBBOMP(pCVar1,(MethodInfo *)0x0);
    return;
  }
LAB_0346dd88:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x336DD8C]
// JHNJPLCNBHC$$.ctor @ RVA 0x336DD8C

void JHNJPLCNBHC___ctor(JHNJPLCNBHC_o *__this,MethodInfo *method)

{
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(JHNJPLCNBHC IBKIPBJJCPG)  [RVA 0x336DD94]
// JHNJPLCNBHC$$.ctor @ RVA 0x336DD94

void JHNJPLCNBHC___ctor(JHNJPLCNBHC_o *__this,JHNJPLCNBHC_o *IBKIPBJJCPG,MethodInfo *method)

{
  float fVar1;
  NILLKLHKLHG_o **ppNVar2;
  
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(LMJFCEPILNI_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (JHNJPLCNBHC_o *)0x0) {
    (__this->fields).DINIOKEPIIP = (IBKIPBJJCPG->fields).DINIOKEPIIP;
    thunk_FUN_01c20e04();
    fVar1 = (IBKIPBJJCPG->fields).EGOKMNOIJBP;
    (__this->fields).JOPGHOBJOCL = (IBKIPBJJCPG->fields).JOPGHOBJOCL;
    (__this->fields).EGOKMNOIJBP = fVar1;
    (__this->fields).MOOOFNAMCME = (IBKIPBJJCPG->fields).MOOOFNAMCME;
    ppNVar2 = &(__this->fields).BNDIEKOPCND;
    *ppNVar2 = (IBKIPBJJCPG->fields).BNDIEKOPCND;
    thunk_FUN_01c20e04(ppNVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MAHFCKJGBPP(MMDDDDFHOLG.DOCBHLNBECF DMJCBDGIGBH, bool LOPENELMPML)  [RVA 0x336DDEC]
// JHNJPLCNBHC$$MAHFCKJGBPP @ RVA 0x336DDEC

void JHNJPLCNBHC__MAHFCKJGBPP
               (JHNJPLCNBHC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *DMJCBDGIGBH,bool LOPENELMPML,
               MethodInfo *method)

{
  NILLKLHKLHG_o *__this_00;
  MMFIDKMDADC_o *__this_01;
  OLKKAIFGGAK_o *pOVar1;
  CJCCEHEKBPD_o *pCVar2;
  float AIKEBBOIPIL;
  
  pCVar2 = (__this->fields).FEGLHAMGOFP;
  if (LOPENELMPML) {
    if ((DMJCBDGIGBH != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) && (pCVar2 != (CJCCEHEKBPD_o *)0x0)) {
      FPIPKMIODLH__ODPHNHAJHCF
                ((FPIPKMIODLH_o *)pCVar2,(DMJCBDGIGBH->fields).HEMGHNOOJPI,(MethodInfo *)0x0);
      pOVar1 = (DMJCBDGIGBH->fields).HEMGHNOOJPI;
      if ((pOVar1 != (OLKKAIFGGAK_o *)0x0) &&
         (pCVar2 = (__this->fields).FEGLHAMGOFP, pCVar2 != (CJCCEHEKBPD_o *)0x0)) {
        FPIPKMIODLH__ODPHNHAJHCF
                  ((FPIPKMIODLH_o *)pCVar2,(pOVar1->fields).BPJMMBGIMNC,(MethodInfo *)0x0);
        pCVar2 = (__this->fields).FEGLHAMGOFP;
        if (pCVar2 != (CJCCEHEKBPD_o *)0x0) {
          CJCCEHEKBPD__FDCADKOAMKI(pCVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    __this_00 = (__this->fields).BNDIEKOPCND;
    if (((__this_00 != (NILLKLHKLHG_o *)0x0) &&
        (__this_01 = NILLKLHKLHG__CHKGAHCDFJF(__this_00,false,(MethodInfo *)0x0),
        __this_01 != (MMFIDKMDADC_o *)0x0)) &&
       (AIKEBBOIPIL = MMFIDKMDADC__OFFODGKLGOP(__this_01,(MethodInfo *)0x0),
       pCVar2 != (CJCCEHEKBPD_o *)0x0)) {
      CJCCEHEKBPD__CCCADFPJGJI(pCVar2,AIKEBBOIPIL,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x336DE8C]
// JHNJPLCNBHC$$HNIHOIAMDPC @ RVA 0x336DE8C

void JHNJPLCNBHC__HNIHOIAMDPC
               (JHNJPLCNBHC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *pSVar5;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *pSVar6;
  NILLKLHKLHG_o *pNVar7;
  NILLKLHKLHG_o **ppNVar8;
  System_String_o **ppSVar9;
  float fVar10;
  
  if ((DAT_04567afe & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_6396/*"FileName"*/);
    FUN_01bab630(&StringLiteral_14946/*"Width"*/);
    FUN_01bab630(&StringLiteral_11995/*"ShiftY"*/);
    FUN_01bab630(&StringLiteral_10366/*"PositionX"*/);
    FUN_01bab630(&StringLiteral_13804/*"TimeScale"*/);
    FUN_01bab630(&StringLiteral_7065/*"Height"*/);
    DAT_04567afe = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0x21,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_10366/*"PositionX"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar5 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                 thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
        System_Action<object>___ctor();
        pSVar6 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                 thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
        System_Action<object>___ctor();
        pNVar7 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
        NILLKLHKLHG___ctor(pNVar7,pSVar4,pSVar5,pSVar6,(Il2CppObject *)__this,(MethodInfo *)0x0);
        ppNVar8 = &(__this->fields).BNDIEKOPCND;
        *ppNVar8 = pNVar7;
        thunk_FUN_01c20e04(ppNVar8,pNVar7);
      }
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_11995/*"ShiftY"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar5 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                   thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
          System_Action<object>___ctor();
          pSVar6 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                   thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
          System_Action<object>___ctor();
          pNVar7 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
          NILLKLHKLHG___ctor(pNVar7,pSVar4,pSVar5,pSVar6,(Il2CppObject *)__this,(MethodInfo *)0x0);
          ppNVar8 = &(__this->fields).KIFDEDHNJCA;
          *ppNVar8 = pNVar7;
          thunk_FUN_01c20e04(ppNVar8,pNVar7);
        }
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_13804/*"TimeScale"*/,(MethodInfo *)0x0);
          fVar10 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,1.0,(MethodInfo *)0x0);
          (__this->fields).JOPGHOBJOCL = fVar10;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_14946/*"Width"*/,(MethodInfo *)0x0);
            fVar10 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,100.0,(MethodInfo *)0x0);
            (__this->fields).EGOKMNOIJBP = fVar10;
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_7065/*"Height"*/,(MethodInfo *)0x0);
              fVar10 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,100.0,(MethodInfo *)0x0);
              (__this->fields).MOOOFNAMCME = fVar10;
              pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar2,StringLiteral_6396/*"FileName"*/,(MethodInfo *)0x0);
                pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                                   (pSVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
                ppSVar9 = &(__this->fields).DINIOKEPIIP;
                *ppSVar9 = pSVar4;
                thunk_FUN_01c20e04(ppSVar9,pSVar4);
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


// ===== public override void LLCONNGHGKD(MMDDDDFHOLG.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x336E250]
// JHNJPLCNBHC$$LLCONNGHGKD @ RVA 0x336E250

void JHNJPLCNBHC__LLCONNGHGKD
               (JHNJPLCNBHC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  CJCCEHEKBPD_o *pCVar1;
  OLKKAIFGGAK_o *pOVar2;
  
  pCVar1 = (__this->fields).FEGLHAMGOFP;
  if (pCVar1 != (CJCCEHEKBPD_o *)0x0) {
    if ((pCVar1->fields).super._ILHGDFFOGHP_k__BackingField == false) {
      return;
    }
    (*(pCVar1->klass->vtable)._4_LLCONNGHGKD.methodPtr)
              (pCVar1,(pCVar1->klass->vtable)._4_LLCONNGHGKD.method);
    if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
       (pCVar1 = (__this->fields).FEGLHAMGOFP, pCVar1 != (CJCCEHEKBPD_o *)0x0)) {
      (*(pCVar1->klass->vtable)._6_CGJIIEOFLGG.methodPtr)
                (pCVar1,(CPECAEHDDDB->fields).HEMGHNOOJPI,
                 (pCVar1->klass->vtable)._6_CGJIIEOFLGG.method);
      pOVar2 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
      if ((pOVar2 != (OLKKAIFGGAK_o *)0x0) &&
         (pCVar1 = (__this->fields).FEGLHAMGOFP, pCVar1 != (CJCCEHEKBPD_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0346e2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pCVar1->klass->vtable)._6_CGJIIEOFLGG.methodPtr)
                  (pCVar1,(pOVar2->fields).BPJMMBGIMNC,(pCVar1->klass->vtable)._6_CGJIIEOFLGG.method
                  );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

