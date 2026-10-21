// TypeDefIndex 1101
// Namespace: 
// public class LEKPMNDHDNH : EAAHMDAMHNI
// Fields:
//   private LCAJGLLBBEC.ELJAALFNLIP EOPBEKGNABN; // 0x20
//   private LCAJGLLBBEC.ELJAALFNLIP NKDEEKELFLN; // 0x24
//   private ObscuredFloat LFEPLFBMMDG; // 0x28
//   private IEFEBEDLHNN KFEFNEOIOID; // 0x40
//   private IEFEBEDLHNN LLCJHOLBCOB; // 0x48

// ===== public override void RandomizeObscuredVars()  [RVA 0x30E3334]
// LEKPMNDHDNH$$RandomizeObscuredVars @ RVA 0x30E3334

void LEKPMNDHDNH__RandomizeObscuredVars(LEKPMNDHDNH_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_o *pIVar1;
  
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).LFEPLFBMMDG,(MethodInfo *)0x0);
  pIVar1 = (__this->fields).KFEFNEOIOID;
  if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
    IEFEBEDLHNN__RandomizeObscuredVars(pIVar1,(MethodInfo *)0x0);
  }
  pIVar1 = (__this->fields).LLCJHOLBCOB;
  if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
    IEFEBEDLHNN__RandomizeObscuredVars(pIVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x30E3374]
// LEKPMNDHDNH$$.ctor @ RVA 0x30E3374

void LEKPMNDHDNH___ctor(LEKPMNDHDNH_o *__this,MethodInfo *method)

{
  EAAHMDAMHNI___ctor((EAAHMDAMHNI_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode IIBFFEPEHPF)  [RVA 0x30E337C]
// LEKPMNDHDNH$$HNIHOIAMDPC @ RVA 0x30E337C

void LEKPMNDHDNH__HNIHOIAMDPC
               (LEKPMNDHDNH_o *__this,System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58 [2];
  
  if ((DAT_045663cb & 1) == 0) {
    FUN_01bab630(&StringLiteral_8907/*"Me"*/);
    FUN_01bab630(&StringLiteral_5759/*"Enemy"*/);
    FUN_01bab630(&StringLiteral_13833/*"To"*/);
    FUN_01bab630(&StringLiteral_6609/*"From"*/);
    FUN_01bab630(&StringLiteral_5423/*"Distance"*/);
    DAT_045663cb = 1;
  }
  EAAHMDAMHNI__HNIHOIAMDPC((EAAHMDAMHNI_o *)__this,IIBFFEPEHPF,(MethodInfo *)0x0);
  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                       (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_6609/*"From"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_8907/*"Me"*/,(MethodInfo *)0x0);
      iVar1 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar4,(MethodInfo *)0x0);
      (__this->fields).EOPBEKGNABN = iVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                         (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_13833/*"To"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_5759/*"Enemy"*/,(MethodInfo *)0x0);
        iVar1 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar4,(MethodInfo *)0x0);
        (__this->fields).NKDEEKELFLN = iVar1;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                           (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_5423/*"Distance"*/,(MethodInfo *)0x0);
          CJNHFNHJHPE = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_58,CJNHFNHJHPE,
                     (MethodInfo *)0x0);
          (__this->fields).LFEPLFBMMDG.fields.fakeValueActive = local_58[0].fakeValueActive;
          (__this->fields).LFEPLFBMMDG.fields.inited = local_58[0].inited;
          *(undefined2 *)&(__this->fields).LFEPLFBMMDG.fields.field_0x12 = local_58[0]._18_2_;
          (__this->fields).LFEPLFBMMDG.fields.hiddenValueOldByte4 =
               (CodeStage_AntiCheat_Common_ACTkByte4_o)local_58[0].hiddenValueOldByte4.fields;
          (__this->fields).LFEPLFBMMDG.fields.fakeValue = local_58[0].fakeValue;
          (__this->fields).LFEPLFBMMDG.fields.currentCryptoKey = local_58[0].currentCryptoKey;
          (__this->fields).LFEPLFBMMDG.fields.hiddenValue = local_58[0].hiddenValue;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void GIENGNEGHPJ(ABMJNMFPDEJ APOLFFJGBEO)  [RVA 0x30E34FC]
// LEKPMNDHDNH$$GIENGNEGHPJ @ RVA 0x30E34FC

void LEKPMNDHDNH__GIENGNEGHPJ(LEKPMNDHDNH_o *__this,ABMJNMFPDEJ_o APOLFFJGBEO,MethodInfo *method)

{
  OLKKAIFGGAK_o *pOVar1;
  GBJGJEGPHKD_o *pGVar2;
  IEFEBEDLHNN_o *pIVar3;
  OLKKAIFGGAK_o *pOVar4;
  IEFEBEDLHNN_o **ppIVar5;
  
  EAAHMDAMHNI__GIENGNEGHPJ((EAAHMDAMHNI_o *)__this,APOLFFJGBEO,(MethodInfo *)0x0);
  pOVar1 = (__this->fields).super.HMMEFNNMBJK;
  if (pOVar1 != (OLKKAIFGGAK_o *)0x0) {
    pOVar1 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar1,(__this->fields).EOPBEKGNABN,(MethodInfo *)0x0);
    pOVar4 = (__this->fields).super.HMMEFNNMBJK;
    if (pOVar4 != (OLKKAIFGGAK_o *)0x0) {
      pOVar4 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar4,(__this->fields).NKDEEKELFLN,(MethodInfo *)0x0);
      if (pOVar1 == (OLKKAIFGGAK_o *)0x0) {
        pIVar3 = (IEFEBEDLHNN_o *)0x0;
      }
      else {
        pGVar2 = (pOVar1->fields).HMIAFJALFCJ;
        if (pGVar2 == (GBJGJEGPHKD_o *)0x0) goto LAB_031e35a4;
        pIVar3 = GBJGJEGPHKD__ILECMJOENMK(pGVar2,(MethodInfo *)0x0);
      }
      (__this->fields).KFEFNEOIOID = pIVar3;
      thunk_FUN_01c20e04();
      if (pOVar4 == (OLKKAIFGGAK_o *)0x0) {
        pIVar3 = (IEFEBEDLHNN_o *)0x0;
      }
      else {
        pGVar2 = (pOVar4->fields).HMIAFJALFCJ;
        if (pGVar2 == (GBJGJEGPHKD_o *)0x0) goto LAB_031e35a4;
        pIVar3 = GBJGJEGPHKD__ILECMJOENMK(pGVar2,(MethodInfo *)0x0);
      }
      ppIVar5 = &(__this->fields).LLCJHOLBCOB;
      *ppIVar5 = pIVar3;
      thunk_FUN_01c20e04(ppIVar5);
      return;
    }
  }
LAB_031e35a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool DGCODECJJCC()  [RVA 0x30E35A8]
// LEKPMNDHDNH$$DGCODECJJCC @ RVA 0x30E35A8

bool LEKPMNDHDNH__DGCODECJJCC(LEKPMNDHDNH_o *__this,MethodInfo *method)

{
  int32_t OINGNJDJJKN;
  bool bVar1;
  OLKKAIFGGAK_o *pOVar2;
  GBJGJEGPHKD_o *pGVar3;
  IEFEBEDLHNN_o *pIVar4;
  CNDPAJOLKFN_o *pCVar5;
  CNDPAJOLKFN_o *pCVar6;
  IEFEBEDLHNN_o **ppIVar7;
  IEFEBEDLHNN_o **ppIVar8;
  float fVar9;
  float KHCEOFBMAPN;
  float fVar10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  ppIVar7 = &(__this->fields).KFEFNEOIOID;
  if (*ppIVar7 == (IEFEBEDLHNN_o *)0x0) {
    pOVar2 = (__this->fields).super.HMMEFNNMBJK;
    if (pOVar2 == (OLKKAIFGGAK_o *)0x0) goto LAB_031e36d4;
    pOVar2 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar2,(__this->fields).EOPBEKGNABN,(MethodInfo *)0x0);
    if (pOVar2 == (OLKKAIFGGAK_o *)0x0) {
      pIVar4 = (IEFEBEDLHNN_o *)0x0;
    }
    else {
      pGVar3 = (pOVar2->fields).HMIAFJALFCJ;
      if (pGVar3 == (GBJGJEGPHKD_o *)0x0) goto LAB_031e36d4;
      pIVar4 = GBJGJEGPHKD__ILECMJOENMK(pGVar3,(MethodInfo *)0x0);
    }
    *ppIVar7 = pIVar4;
    thunk_FUN_01c20e04(ppIVar7);
  }
  ppIVar8 = &(__this->fields).LLCJHOLBCOB;
  if (*ppIVar8 == (IEFEBEDLHNN_o *)0x0) {
    pOVar2 = (__this->fields).super.HMMEFNNMBJK;
    if (pOVar2 == (OLKKAIFGGAK_o *)0x0) goto LAB_031e36d4;
                    /* try { // try from 031e3624 to 032e362b has its CatchHandler @ 031e3f54 */
    pOVar2 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar2,(__this->fields).NKDEEKELFLN,(MethodInfo *)0x0);
    if (pOVar2 == (OLKKAIFGGAK_o *)0x0) {
      pIVar4 = (IEFEBEDLHNN_o *)0x0;
    }
    else {
      pGVar3 = (pOVar2->fields).HMIAFJALFCJ;
      if (pGVar3 == (GBJGJEGPHKD_o *)0x0) goto LAB_031e36d4;
      pIVar4 = GBJGJEGPHKD__ILECMJOENMK(pGVar3,(MethodInfo *)0x0);
    }
    *ppIVar8 = pIVar4;
    thunk_FUN_01c20e04(ppIVar8);
  }
  if ((*ppIVar7 == (IEFEBEDLHNN_o *)0x0) || (*ppIVar8 == (IEFEBEDLHNN_o *)0x0)) {
    bVar1 = false;
  }
  else {
    pCVar5 = ((*ppIVar7)->fields).CNMHHKAMGPI;
                    /* try { // try from 031e3668 to 032e3693 has its CatchHandler @ 031e3f58 */
    if ((pCVar5 == (CNDPAJOLKFN_o *)0x0) ||
       (pCVar6 = ((*ppIVar8)->fields).CNMHHKAMGPI, pCVar6 == (CNDPAJOLKFN_o *)0x0)) {
LAB_031e36d4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031e36d4 to 032e36ff has its CatchHandler @ 031e3f48 */
      FUN_01bab8c8();
    }
    fVar9 = (pCVar5->fields).super.OHHDBINAJCB;
    fVar10 = (pCVar6->fields).super.OHHDBINAJCB;
    local_50.fakeValueActive = (__this->fields).LFEPLFBMMDG.fields.fakeValueActive;
    local_50.inited = (__this->fields).LFEPLFBMMDG.fields.inited;
    local_50._18_2_ = *(undefined2 *)&(__this->fields).LFEPLFBMMDG.fields.field_0x12;
    local_50.hiddenValueOldByte4.fields =
         (__this->fields).LFEPLFBMMDG.fields.hiddenValueOldByte4.fields;
    local_50.fakeValue = (__this->fields).LFEPLFBMMDG.fields.fakeValue;
    local_50.currentCryptoKey = (__this->fields).LFEPLFBMMDG.fields.currentCryptoKey;
    local_50.hiddenValue = (__this->fields).LFEPLFBMMDG.fields.hiddenValue;
    OINGNJDJJKN = (__this->fields).super.GCOAKFIEAAL;
                    /* try { // try from 031e3698 to 032e369f has its CatchHandler @ 031e3f50 */
    KHCEOFBMAPN = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_50,
                             (MethodInfo *)0x0);
    bVar1 = EAAHMDAMHNI__OKACBKHDEIO(OINGNJDJJKN,ABS(fVar9 - fVar10),KHCEOFBMAPN,(MethodInfo *)0x0);
  }
  return bVar1;
}

