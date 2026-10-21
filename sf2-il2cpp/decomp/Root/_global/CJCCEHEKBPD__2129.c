// TypeDefIndex 2129
// Namespace: 
// public class CJCCEHEKBPD : FPIPKMIODLH
// Fields:
//   private float <IJMMLDDCHFB>k__BackingField; // 0x30
//   private float <GJNIMFABNDM>k__BackingField; // 0x34
//   private float <IPNDDFLCJIL>k__BackingField; // 0x38
//   private string <GPEFIOMJHNN>k__BackingField; // 0x40
//   private CocosAnimation <CIDLMIOMOFF>k__BackingField; // 0x48
//   private const string CHOBFJJOKEK = "Textures/Effects/Magic/";

// ===== private void EJGLAANAJLJ(CocosAnimation CJNHFNHJHPE)  [RVA 0x32CF598]
// CJCCEHEKBPD$$EJGLAANAJLJ @ RVA 0x32CF598

void CJCCEHEKBPD__EJGLAANAJLJ
               (CJCCEHEKBPD_o *__this,CocosAnimation_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CIDLMIOMOFF_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public float FPBDIBCJDAK()  [RVA 0x32CF5A0]
// CJCCEHEKBPD$$FPBDIBCJDAK @ RVA 0x32CF5A0

float CJCCEHEKBPD__FPBDIBCJDAK(CJCCEHEKBPD_o *__this,MethodInfo *method)

{
  return (__this->fields)._GJNIMFABNDM_k__BackingField;
}


// ===== public void CCCADFPJGJI(float AIKEBBOIPIL)  [RVA 0x32CF5A8]
// CJCCEHEKBPD$$CCCADFPJGJI @ RVA 0x32CF5A8

void CJCCEHEKBPD__CCCADFPJGJI(CJCCEHEKBPD_o *__this,float AIKEBBOIPIL,MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  FCJBEKHDLAF_o *pFVar2;
  NHBBOEHHEKG_o *pNVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  
  pFVar2 = (__this->fields).super._CKOGELANOLD_k__BackingField;
  if ((pFVar2 != (FCJBEKHDLAF_o *)0x0) &&
     (pNVar3 = (pFVar2->fields).CNHHLPPHNCO, pNVar3 != (NHBBOEHHEKG_o *)0x0)) {
    fVar5 = (pNVar3->fields).NMFKJBOAOLK;
    pCVar1 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
    fVar4 = (__this->fields).super._BEEGDJFPEHO_k__BackingField * 0.5;
    (__this->fields).super._FLIJNAGNIMB_k__BackingField = AIKEBBOIPIL - fVar4;
    (__this->fields).super._OHGCPINODPO_k__BackingField = fVar4 + AIKEBBOIPIL;
    if ((pCVar1 != (CocosAnimation_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
      if (pCVar1 != (CocosAnimation_o *)0x0) {
        __this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
        if ((pCVar1 != (CocosAnimation_o *)0x0) &&
           (__this_02 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_Transform_o *)0x0)) {
          UVar6 = UnityEngine_Transform__get_localPosition(__this_02,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UVar6.fields.x = AIKEBBOIPIL + fVar5 * -0.5;
            UVar6.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(__this_01,UVar6,(MethodInfo *)0x0);
            (__this->fields).super._ILHGDFFOGHP_k__BackingField = true;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float PHPAJILEHHD()  [RVA 0x32CF678]
// CJCCEHEKBPD$$PHPAJILEHHD @ RVA 0x32CF678

float CJCCEHEKBPD__PHPAJILEHHD(CJCCEHEKBPD_o *__this,MethodInfo *method)

{
  return (__this->fields)._IJMMLDDCHFB_k__BackingField;
}


// ===== public void FDBDGHMBJOK(float CJNHFNHJHPE)  [RVA 0x32CF680]
// CJCCEHEKBPD$$FDBDGHMBJOK @ RVA 0x32CF680

void CJCCEHEKBPD__FDBDGHMBJOK(CJCCEHEKBPD_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IJMMLDDCHFB_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public override void LLCONNGHGKD()  [RVA 0x32CF688]
// CJCCEHEKBPD$$LLCONNGHGKD @ RVA 0x32CF688

void CJCCEHEKBPD__LLCONNGHGKD(CJCCEHEKBPD_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  CocosAnimation_o *__this_00;
  
  if ((DAT_04567540 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567540 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  iVar1 = MGNPHCAAEIO__PCJHAMFGJLP((MethodInfo *)0x0);
  __this_00 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
  if (__this_00 != (CocosAnimation_o *)0x0) {
    CocosAnimation__Render(__this_00,(1.0 / (float)iVar1) * 0.016666668,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(string KGLJICLJHEL, float NMFKJBOAOLK)  [RVA 0x32CF70C]
// CJCCEHEKBPD$$.ctor @ RVA 0x32CF70C

void CJCCEHEKBPD___ctor(CJCCEHEKBPD_o *__this,System_String_o *KGLJICLJHEL,float NMFKJBOAOLK,
                       MethodInfo *method)

{
  FPIPKMIODLH___ctor((FPIPKMIODLH_o *)__this,KGLJICLJHEL,NMFKJBOAOLK,(MethodInfo *)0x0);
  return;
}


// ===== public override void JODGPLBHHIA()  [RVA 0x32CF714]
// CJCCEHEKBPD$$JODGPLBHHIA @ RVA 0x32CF714

void CJCCEHEKBPD__JODGPLBHHIA(CJCCEHEKBPD_o *__this,MethodInfo *method)

{
  CocosAnimation_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  __this_00 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
  if (__this_00 != (CocosAnimation_o *)0x0) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CocosAnimation NIOJKEIILMM()  [RVA 0x32CF73C]
// CJCCEHEKBPD$$NIOJKEIILMM @ RVA 0x32CF73C

CocosAnimation_o * CJCCEHEKBPD__NIOJKEIILMM(CJCCEHEKBPD_o *__this,MethodInfo *method)

{
  return (__this->fields)._CIDLMIOMOFF_k__BackingField;
}


// ===== public void EEKKKOODDLI(string CJNHFNHJHPE)  [RVA 0x32CF744]
// CJCCEHEKBPD$$EEKKKOODDLI @ RVA 0x32CF744

void CJCCEHEKBPD__EEKKKOODDLI(CJCCEHEKBPD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GPEFIOMJHNN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void FDCADKOAMKI()  [RVA 0x32CF74C]
// CJCCEHEKBPD$$FDCADKOAMKI @ RVA 0x32CF74C

void CJCCEHEKBPD__FDCADKOAMKI(CJCCEHEKBPD_o *__this,MethodInfo *method)

{
  CocosAnimation_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
  if ((__this_00 != (CocosAnimation_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    (__this->fields).super._ILHGDFFOGHP_k__BackingField = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DEBAOCBBOMP()  [RVA 0x32CF784]
// CJCCEHEKBPD$$DEBAOCBBOMP @ RVA 0x32CF784

void CJCCEHEKBPD__DEBAOCBBOMP(CJCCEHEKBPD_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [12];
  System_String_o *EIJDDKJONFO;
  MNLIBPAOCLG_o *pMVar2;
  UnityEngine_Transform_o *pUVar3;
  System_String_o *name;
  UnityEngine_GameObject_o *pUVar4;
  CocosAnimation_o *pCVar5;
  UnityEngine_Transform_o *pUVar6;
  FCJBEKHDLAF_o *pFVar7;
  BEPJMNAHCAD_o *pBVar8;
  CocosAnimation_o **ppCVar9;
  NHBBOEHHEKG_o *pNVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector2_o CJNHFNHJHPE;
  UnityEngine_Vector3_o UVar15;
  
  if ((DAT_04567541 & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CocosAnimation>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_Util_OHBILOGJCLA<RectTransform>__);
    FUN_01bab630(&StringLiteral_12915/*"Textures/Effects/Magic/"*/);
    FUN_01bab630(&StringLiteral_10236/*"PerkZone "*/);
    DAT_04567541 = 1;
  }
  fVar12 = (__this->fields)._IPNDDFLCJIL_k__BackingField;
  EIJDDKJONFO = System_String__Concat
                          (StringLiteral_12915/*"Textures/Effects/Magic/"*/,(__this->fields)._GPEFIOMJHNN_k__BackingField,
                           (MethodInfo *)0x0);
  pFVar7 = (__this->fields).super._CKOGELANOLD_k__BackingField;
  if (((pFVar7 != (FCJBEKHDLAF_o *)0x0) &&
      (pBVar8 = (pFVar7->fields).FAJCMHDLBEJ, pBVar8 != (BEPJMNAHCAD_o *)0x0)) &&
     (pMVar2 = (pBVar8->fields).LIICCFBEOLC, pMVar2 != (MNLIBPAOCLG_o *)0x0)) {
    pNVar10 = (pFVar7->fields).CNHHLPPHNCO;
    pUVar3 = MNLIBPAOCLG__LLCCOBOLJML(pMVar2,(MethodInfo *)0x0);
    name = System_String__Concat
                     (StringLiteral_10236/*"PerkZone "*/,(__this->fields).super._COIPKAKHDFP_k__BackingField,
                      (MethodInfo *)0x0);
    pUVar4 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(pUVar4,name,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pCVar5 = (CocosAnimation_o *)
               UnityEngine_GameObject__AddComponent<object>
                         (pUVar4,Method_UnityEngine_GameObject_AddComponent<CocosAnimation>__);
      ppCVar9 = &(__this->fields)._CIDLMIOMOFF_k__BackingField;
      *ppCVar9 = pCVar5;
      thunk_FUN_01c20e04(ppCVar9,pCVar5);
      if (*ppCVar9 != (CocosAnimation_o *)0x0) {
        CocosAnimation__Init(*ppCVar9,EIJDDKJONFO,1,(System_String_o *)0x0,(MethodInfo *)0x0);
        if ((*ppCVar9 != (CocosAnimation_o *)0x0) &&
           (pUVar6 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)*ppCVar9,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(pUVar6,pUVar3,false,(MethodInfo *)0x0);
          if ((*ppCVar9 != (CocosAnimation_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)*ppCVar9,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
            if (*ppCVar9 != (CocosAnimation_o *)0x0) {
              pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)*ppCVar9,(MethodInfo *)0x0);
              pUVar3 = (UnityEngine_Transform_o *)
                       Util__OHBILOGJCLA<object>(pUVar4,Method_Util_OHBILOGJCLA<RectTransform>__);
              pFVar7 = (__this->fields).super._CKOGELANOLD_k__BackingField;
              if (((pFVar7 != (FCJBEKHDLAF_o *)0x0) &&
                  (pBVar8 = (pFVar7->fields).FAJCMHDLBEJ, pBVar8 != (BEPJMNAHCAD_o *)0x0)) &&
                 ((pMVar2 = (pBVar8->fields).LIICCFBEOLC, pMVar2 != (MNLIBPAOCLG_o *)0x0 &&
                  ((pUVar4 = (pMVar2->fields).LDAKOINICNJ, pUVar4 != (UnityEngine_GameObject_o *)0x0
                   && (pUVar6 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
                      pUVar6 != (UnityEngine_Transform_o *)0x0)))))) {
                UVar15 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
                if ((pNVar10 != (NHBBOEHHEKG_o *)0x0) && (pUVar3 != (UnityEngine_Transform_o *)0x0))
                {
                  auVar1._4_8_ = 0;
                  auVar1._0_4_ = (__this->fields)._GJNIMFABNDM_k__BackingField +
                                 (pNVar10->fields).IDBMGJFGIJH +
                                 (UVar15.fields.y - (pNVar10->fields).DAPHCPICAAC * 0.5) +
                                 (__this->fields)._IJMMLDDCHFB_k__BackingField * 0.5;
                  UnityEngine_Transform__set_localPosition
                            (pUVar3,(UnityEngine_Vector3_o)(auVar1 << 0x20),(MethodInfo *)0x0);
                  pCVar5 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
                  if (pCVar5 != (CocosAnimation_o *)0x0) {
                    (pCVar5->fields)._autoSize = false;
                    (pCVar5->fields)._FEBBHCOAEMI_k__BackingField = -1;
                    CocosAnimation__SetFirstFrame(pCVar5,(MethodInfo *)0x0);
                    pCVar5 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
                    fVar13 = (__this->fields).super._BEEGDJFPEHO_k__BackingField;
                    fVar14 = (__this->fields)._IJMMLDDCHFB_k__BackingField;
                    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    if (DAT_045660f4 == '\0') {
                      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
                      DAT_045660f4 = '\x01';
                    }
                    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    if (pCVar5 != (CocosAnimation_o *)0x0) {
                      fVar11 = FGKGKDEJCOG_TypeInfo->static_fields->NADOFNLEECE;
                      CJNHFNHJHPE.fields.y = fVar14 * fVar11;
                      CJNHFNHJHPE.fields.x = fVar13 * fVar11;
                      CocosAnimation__set_ChildSize(pCVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
                      if (*ppCVar9 != (CocosAnimation_o *)0x0) {
                        ((*ppCVar9)->fields)._PPEGDOHGLJJ_k__BackingField = fVar12 / 60.0;
                        return;
                      }
                    }
                  }
                }
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


// ===== public void KMJHOKPJOMG(float CJNHFNHJHPE)  [RVA 0x32CFA7C]
// CJCCEHEKBPD$$KMJHOKPJOMG @ RVA 0x32CFA7C

void CJCCEHEKBPD__KMJHOKPJOMG(CJCCEHEKBPD_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GJNIMFABNDM_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public string JCPIPEJAIAC()  [RVA 0x32CFA84]
// CJCCEHEKBPD$$JCPIPEJAIAC @ RVA 0x32CFA84

System_String_o * CJCCEHEKBPD__JCPIPEJAIAC(CJCCEHEKBPD_o *__this,MethodInfo *method)

{
  return (__this->fields)._GPEFIOMJHNN_k__BackingField;
}


// ===== public void MLIJNDLGIKB(float CJNHFNHJHPE)  [RVA 0x32CFA8C]
// CJCCEHEKBPD$$MLIJNDLGIKB @ RVA 0x32CFA8C

void CJCCEHEKBPD__MLIJNDLGIKB(CJCCEHEKBPD_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IPNDDFLCJIL_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public float AFILDHPIJIC()  [RVA 0x32CFA94]
// CJCCEHEKBPD$$AFILDHPIJIC @ RVA 0x32CFA94

float CJCCEHEKBPD__AFILDHPIJIC(CJCCEHEKBPD_o *__this,MethodInfo *method)

{
  return (__this->fields)._IPNDDFLCJIL_k__BackingField;
}

