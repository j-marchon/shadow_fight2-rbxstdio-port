// TypeDefIndex 1079
// Namespace: 
// public class CGBIAHNHDNL : HJNEOLCKEMD
// Fields:
//   private BNJMMHEHJFI MIDPOKIJMKN; // 0x60
//   private BNJMMHEHJFI AGMAIGDIEDL; // 0x64
//   private NILLKLHKLHG MBFIKHPCODJ; // 0x68
//   private NILLKLHKLHG GODBNIEDNON; // 0x70
//   private NILLKLHKLHG FEKDJGKIJHP; // 0x78
//   private bool CHOHPFCDFIN; // 0x80
//   private bool AAADCDBKMCA; // 0x81

// ===== public void .ctor(CGBIAHNHDNL IBKIPBJJCPG)  [RVA 0x30DF8B8]
// CGBIAHNHDNL$$.ctor @ RVA 0x30DF8B8

void CGBIAHNHDNL___ctor(CGBIAHNHDNL_o *__this,CGBIAHNHDNL_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  NILLKLHKLHG_o **ppNVar2;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (CGBIAHNHDNL_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).AGMAIGDIEDL;
    (__this->fields).MIDPOKIJMKN = (IBKIPBJJCPG->fields).MIDPOKIJMKN;
    (__this->fields).AGMAIGDIEDL = iVar1;
    (__this->fields).CHOHPFCDFIN = (IBKIPBJJCPG->fields).CHOHPFCDFIN;
    (__this->fields).AAADCDBKMCA = (IBKIPBJJCPG->fields).AAADCDBKMCA;
    (__this->fields).MBFIKHPCODJ = (IBKIPBJJCPG->fields).MBFIKHPCODJ;
    thunk_FUN_01c20e04();
    (__this->fields).GODBNIEDNON = (IBKIPBJJCPG->fields).GODBNIEDNON;
    thunk_FUN_01c20e04();
    ppNVar2 = &(__this->fields).FEKDJGKIJHP;
    *ppNVar2 = (IBKIPBJJCPG->fields).FEKDJGKIJHP;
    thunk_FUN_01c20e04(ppNVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MAHFCKJGBPP(MovesInFightVariables.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x30DF928]
// CGBIAHNHDNL$$MAHFCKJGBPP @ RVA 0x30DF928

void CGBIAHNHDNL__MAHFCKJGBPP
               (CGBIAHNHDNL_o *__this,MovesInFightVariables_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  bool bVar1;
  ModelObject_o *pGVar2;
  ModelNode_o *pIVar3;
  ModelAnimation_o *pOVar4;
  Vector3f_o *INOIMHOFGBG;
  NILLKLHKLHG_o *pNVar5;
  MMFIDKMDADC_o *pMVar6;
  Vector3f_o *pCVar7;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_x4;
  Model_o *pOVar8;
  Model_o *pOVar9;
  Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *__this_00;
  Model_o *pOVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_04566391 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04566391 = 1;
  }
  if (CPECAEHDDDB != (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
    pOVar10 = (CPECAEHDDDB->fields).EMCFCMFGPME;
    pOVar9 = pOVar10;
    if ((__this->fields).MIDPOKIJMKN == 2) {
      if (pOVar10 == (Model_o *)0x0) goto LAB_031dfaf8;
      pOVar9 = (pOVar10->fields).BPJMMBGIMNC;
    }
    pOVar8 = pOVar10;
    if ((__this->fields).AGMAIGDIEDL != 1) {
      if (pOVar10 == (Model_o *)0x0) goto LAB_031dfaf8;
      pOVar8 = (pOVar10->fields).BPJMMBGIMNC;
    }
    if ((((pOVar8 != (Model_o *)0x0) &&
         (pGVar2 = (pOVar8->fields).HMIAFJALFCJ, pGVar2 != (ModelObject_o *)0x0)) &&
        (pIVar3 = ModelObject__ILECMJOENMK(pGVar2,(MethodInfo *)0x0), pIVar3 != (ModelNode_o *)0x0
        )) && (pOVar4 = (pOVar8->fields).OAKOFJJIOFF, pOVar4 != (ModelAnimation_o *)0x0)) {
      INOIMHOFGBG = ModelAnimation__JAONOJLAPOG
                              (pOVar4,2,(pIVar3->fields).FLDBGCIKMKA,(MethodInfo *)0x0);
      bVar1 = Vector3f__LCAEEPKOHMN(INOIMHOFGBG,(Vector3f_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pNVar5 = (__this->fields).MBFIKHPCODJ;
      fVar12 = 0.0;
      fVar11 = 0.0;
      if (pNVar5 != (NILLKLHKLHG_o *)0x0) {
        pMVar6 = NILLKLHKLHG__CHKGAHCDFJF(pNVar5,false,(MethodInfo *)0x0);
        if (pMVar6 == (MMFIDKMDADC_o *)0x0) goto LAB_031dfaf8;
        fVar11 = MMFIDKMDADC__OFFODGKLGOP(pMVar6,(MethodInfo *)0x0);
      }
      pNVar5 = (__this->fields).GODBNIEDNON;
      if (pNVar5 != (NILLKLHKLHG_o *)0x0) {
        pMVar6 = NILLKLHKLHG__CHKGAHCDFJF(pNVar5,false,(MethodInfo *)0x0);
        if (pMVar6 == (MMFIDKMDADC_o *)0x0) goto LAB_031dfaf8;
        fVar12 = MMFIDKMDADC__OFFODGKLGOP(pMVar6,(MethodInfo *)0x0);
      }
      if (((INOIMHOFGBG != (Vector3f_o *)0x0) && (pOVar9 != (Model_o *)0x0)) &&
         (pOVar4 = (pOVar9->fields).OAKOFJJIOFF, pOVar4 != (ModelAnimation_o *)0x0)) {
        fVar13 = (INOIMHOFGBG->fields).super.JOLEIODMLFL;
        (INOIMHOFGBG->fields).super.OHHDBINAJCB =
             (INOIMHOFGBG->fields).super.OHHDBINAJCB + fVar11 * (float)(pOVar4->fields).DMJAJGGGHPF;
        (INOIMHOFGBG->fields).super.JOLEIODMLFL = fVar12 + fVar13;
        pCVar7 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
        Vector3f___ctor(pCVar7,(MethodInfo *)0x0);
        pGVar2 = (pOVar9->fields).HMIAFJALFCJ;
        if (((pGVar2 != (ModelObject_o *)0x0) &&
            (pIVar3 = ModelObject__ILECMJOENMK(pGVar2,(MethodInfo *)0x0),
            pIVar3 != (ModelNode_o *)0x0)) &&
           ((pOVar4 = (pOVar9->fields).OAKOFJJIOFF, pOVar4 != (ModelAnimation_o *)0x0 &&
            (pCVar7 = ModelAnimation__JAONOJLAPOG
                                (pOVar4,2,(pIVar3->fields).FLDBGCIKMKA,(MethodInfo *)0x0),
            pOVar10 != (Model_o *)0x0)))) {
          __this_00 = (pOVar10->fields).GDGLJMKPFOO;
          routine = CGBIAHNHDNL__JJONOCGMEMK
                              (__this,(pOVar10->fields).OAKOFJJIOFF,pCVar7,INOIMHOFGBG,in_x4);
          if (__this_00 != (Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *)0x0) {
            UnityEngine_MonoBehaviour__StartCoroutine
                      ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_031dfaf8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator JJONOCGMEMK(ModelAnimation NLEBDPHNIDI, Vector3f CKCOLJLFJDB, Vector3f ANGBPBINHBL)  [RVA 0x30DFAFC]
// CGBIAHNHDNL$$JJONOCGMEMK @ RVA 0x30DFAFC

System_Collections_IEnumerator_o *
CGBIAHNHDNL__JJONOCGMEMK
          (CGBIAHNHDNL_o *__this,ModelAnimation_o *NLEBDPHNIDI,Vector3f_o *CKCOLJLFJDB,
          Vector3f_o *ANGBPBINHBL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
                    /* try { // try from 031dfafc to 032dfcdb has its CatchHandler @ 031dfafc
                       catch() { ... } // from try @ 031dfafc with catch @ 031dfafc
                       catch() { ... } // from try @ 031dfdc4 with catch @ 031dfafc
                       catch() { ... } // from try @ 031dfe54 with catch @ 031dfafc
                       catch() { ... } // from try @ 031dfe5c with catch @ 031dfafc
                       catch() { ... } // from try @ 031dff04 with catch @ 031dfafc */
  if ((DAT_04566392 & 1) == 0) {
    FUN_01bab630(&CGBIAHNHDNL_FOHDNCNEEBF_TypeInfo);
    DAT_04566392 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(CGBIAHNHDNL_FOHDNCNEEBF_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].monitor = __this;
  thunk_FUN_01c20e04(&__this_00[2].monitor,__this);
  __this_00[2].klass = (Il2CppClass *)NLEBDPHNIDI;
  thunk_FUN_01c20e04(__this_00 + 2,NLEBDPHNIDI);
  __this_00[3].klass = (Il2CppClass *)CKCOLJLFJDB;
  thunk_FUN_01c20e04(__this_00 + 3,CKCOLJLFJDB);
  __this_00[3].monitor = ANGBPBINHBL;
  thunk_FUN_01c20e04(&__this_00[3].monitor,ANGBPBINHBL);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void .ctor()  [RVA 0x30DFBDC]
// CGBIAHNHDNL$$.ctor @ RVA 0x30DFBDC

void CGBIAHNHDNL___ctor(CGBIAHNHDNL_o *__this,MethodInfo *method)

{
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x30DFBE4]
// CGBIAHNHDNL$$HNIHOIAMDPC @ RVA 0x30DFBE4

void CGBIAHNHDNL__HNIHOIAMDPC
               (CGBIAHNHDNL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *pSVar7;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *pSVar8;
  NILLKLHKLHG_o *pNVar9;
  NILLKLHKLHG_o **ppNVar10;
  System_String_array *pSVar11;
  ulong uVar12;
  ulong uVar13;
  
  if ((DAT_04566393 & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_13844/*"ToPlayer"*/);
    FUN_01bab630(&StringLiteral_10364/*"PositionOffsetX"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_6610/*"FromPlayer"*/);
    FUN_01bab630(&StringLiteral_8403/*"LerpSpeed"*/);
    FUN_01bab630(&StringLiteral_3270/*"Axis"*/);
    FUN_01bab630(&StringLiteral_10365/*"PositionOffsetY"*/);
    DAT_04566393 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0x20,(MethodInfo *)0x0);
                    /* try { // try from 031dfcdc to 032dfd03 has its CatchHandler @ 031dfe6c */
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_8403/*"LerpSpeed"*/,(MethodInfo *)0x0);
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar5,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar6,(MethodInfo *)0x0);
      if (!bVar2) {
                    /* try { // try from 031dfd38 to 032dfd5f has its CatchHandler @ 031dfe68 */
        pSVar7 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                 thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                    /* try { // try from 031dfd64 to 032dfdc3 has its CatchHandler @ 031dfe74 */
        System_Action<object>___ctor();
        pSVar8 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                 thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
        System_Action<object>___ctor();
        pNVar9 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
        NILLKLHKLHG___ctor(pNVar9,pSVar6,pSVar7,pSVar8,(Il2CppObject *)__this,(MethodInfo *)0x0);
        ppNVar10 = &(__this->fields).FEKDJGKIJHP;
        *ppNVar10 = pNVar9;
                    /* try { // try from 031dfdc4 to 032dfe4b has its CatchHandler @ 031dfafc */
        thunk_FUN_01c20e04(ppNVar10,pNVar9);
      }
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_6610/*"FromPlayer"*/,(MethodInfo *)0x0);
        pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        iVar3 = HDBNGIBFEBA__MGGHPGELKIP((HDBNGIBFEBA_o *)__this,pSVar6,(MethodInfo *)0x0);
        (__this->fields).MIDPOKIJMKN = iVar3;
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_13844/*"ToPlayer"*/,(MethodInfo *)0x0);
                    /* try { // try from 031dfe4c to 032dfe53 has its CatchHandler @ 031dfe70 */
                    /* try { // try from 031dfe54 to 032dfe57 has its CatchHandler @ 031dfafc */
          pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 031dfe58 to 032dfe5b has its CatchHandler @ 031dfe64 */
                    /* try { // try from 031dfe5c to 032dfe8b has its CatchHandler @ 031dfafc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031dfe58 with catch @ 031dfe64
                        */
          iVar3 = HDBNGIBFEBA__MGGHPGELKIP((HDBNGIBFEBA_o *)__this,pSVar6,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031dfd38 with catch @ 031dfe68
                        */
          (__this->fields).AGMAIGDIEDL = iVar3;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031dfcdc with catch @ 031dfe6c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031dfe4c with catch @ 031dfe70
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031dfd64 with catch @ 031dfe74
                        */
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 031dfe8c to 032dfe8f has its CatchHandler @ 031dfe9c */
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_10364/*"PositionOffsetX"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031dfe8c with catch @ 031dfe9c */
            pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
            bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar6,(MethodInfo *)0x0);
            if (!bVar2) {
              pSVar7 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                       thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                    /* try { // try from 031dfedc to 032dff03 has its CatchHandler @ 031dff18 */
              System_Action<object>___ctor();
              pSVar8 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                       thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                    /* try { // try from 031dff04 to 032dff0f has its CatchHandler @ 031dfafc */
              System_Action<object>___ctor();
                    /* try { // try from 031dff10 to 032dff17 has its CatchHandler @ 031dff18 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031dfedc with catch @ 031dff18
                       catch(type#2 @ 00000000) { ... } // from try @ 031dff10 with catch @ 031dff18
                        */
              pNVar9 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
              NILLKLHKLHG___ctor(pNVar9,pSVar6,pSVar7,pSVar8,(Il2CppObject *)__this,
                                 (MethodInfo *)0x0);
              ppNVar10 = &(__this->fields).MBFIKHPCODJ;
              *ppNVar10 = pNVar9;
              thunk_FUN_01c20e04(ppNVar10,pNVar9);
            }
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_10365/*"PositionOffsetY"*/,(MethodInfo *)0x0);
              pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
              bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar6,(MethodInfo *)0x0);
              if (!bVar2) {
                pSVar7 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                         thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                System_Action<object>___ctor();
                pSVar8 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                         thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                System_Action<object>___ctor();
                pNVar9 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
                NILLKLHKLHG___ctor(pNVar9,pSVar6,pSVar7,pSVar8,(Il2CppObject *)__this,
                                   (MethodInfo *)0x0);
                ppNVar10 = &(__this->fields).GODBNIEDNON;
                *ppNVar10 = pNVar9;
                thunk_FUN_01c20e04(ppNVar10,pNVar9);
              }
              pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar4,StringLiteral_3270/*"Axis"*/,(MethodInfo *)0x0);
                pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                if ((pSVar6 != (System_String_o *)0x0) &&
                   (pSVar11 = System_String__Split(pSVar6,0x7c,0,(MethodInfo *)0x0),
                   pSVar11 != (System_String_array *)0x0)) {
                  if (0 < (int)pSVar11->max_length) {
                    uVar13 = 0;
                    uVar12 = pSVar11->max_length & 0xffffffff;
                    do {
                      if (uVar12 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8d0();
                      }
                      pSVar6 = pSVar11->m_Items[uVar13];
                      bVar2 = System_String__op_Equality
                                        (pSVar6,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
                      if (bVar2) {
                        (__this->fields).CHOHPFCDFIN = true;
                      }
                      bVar2 = System_String__op_Equality
                                        (pSVar6,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
                      if (bVar2) {
                        (__this->fields).AAADCDBKMCA = true;
                      }
                      uVar1 = (uint)pSVar11->max_length;
                      uVar12 = (ulong)uVar1;
                      uVar13 = uVar13 + 1;
                    } while ((long)uVar13 < (long)(int)uVar1);
                  }
                  return;
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

