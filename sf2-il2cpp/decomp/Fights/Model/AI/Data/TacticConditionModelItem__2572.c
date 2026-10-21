// Original name: Nekki.SF2.Core.Fights.Model.AI.Data.TacticConditionModelItem  (obfuscated HDNBOMFNDFJ)
// TypeDefIndex 2572
// Namespace: 
// public class TacticConditionModelItem : TacticConditionBase
// Fields:
//   private LCAJGLLBBEC.ELJAALFNLIP EOPBEKGNABN; // 0x20
//   private ObscuredString ABHLDGFCJJB; // 0x28
//   private HOOAAGABMBL MHDJAEILAJL; // 0x30
//   private ObscuredString HANDJABEIBK; // 0x38
//   private ObscuredString MLPKGJACOFA; // 0x40

// ===== public override void RandomizeObscuredVars()  [RVA 0x33A0DA8]
// TacticConditionModelItem$$RandomizeObscuredVars @ RVA 0x33A0DA8

void TacticConditionModelItem__RandomizeObscuredVars(TacticConditionModelItem_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *pCVar1;
  
                    /* try { // try from 034a0db0 to 035a0dbf has its CatchHandler @ 034a10cc */
  pCVar1 = (__this->fields).ABHLDGFCJJB;
  if (pCVar1 != (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)0x0) {
    CodeStage_AntiCheat_ObscuredTypes_ObscuredString__GPJJDLBJOAL(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).HANDJABEIBK;
                    /* try { // try from 034a0dc4 to 035a0dcb has its CatchHandler @ 034a10f0 */
    if (pCVar1 != (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)0x0) {
      CodeStage_AntiCheat_ObscuredTypes_ObscuredString__GPJJDLBJOAL(pCVar1,(MethodInfo *)0x0);
                    /* try { // try from 034a0dd0 to 035a0ddb has its CatchHandler @ 034a10e4 */
      pCVar1 = (__this->fields).MLPKGJACOFA;
      if (pCVar1 != (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)0x0) {
                    /* try { // try from 034a0de0 to 035a0de7 has its CatchHandler @ 034a10d8 */
        CodeStage_AntiCheat_ObscuredTypes_ObscuredString__GPJJDLBJOAL(pCVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33A0DE8]
// TacticConditionModelItem$$.ctor @ RVA 0x33A0DE8

void TacticConditionModelItem___ctor(TacticConditionModelItem_o *__this,MethodInfo *method)

{
                    /* try { // try from 034a0dec to 035a0df3 has its CatchHandler @ 034a10e0 */
  TacticConditionBase___ctor((TacticConditionBase_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode IIBFFEPEHPF)  [RVA 0x33A0DF0]
// TacticConditionModelItem$$HNIHOIAMDPC @ RVA 0x33A0DF0

void TacticConditionModelItem__HNIHOIAMDPC
               (TacticConditionModelItem_o *__this,System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *pCVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **ppCVar6;
  
                    /* try { // try from 034a0df8 to 035a0e03 has its CatchHandler @ 034a1114 */
                    /* try { // try from 034a0e08 to 035a0e0f has its CatchHandler @ 034a10d4 */
  if ((DAT_04567cb7 & 1) == 0) {
                    /* try { // try from 034a0e14 to 035a0e1f has its CatchHandler @ 034a111c */
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
                    /* try { // try from 034a0e24 to 035a0e2f has its CatchHandler @ 034a10f8 */
    FUN_01bab630(&StringLiteral_8907/*"Me"*/);
                    /* try { // try from 034a0e34 to 035a0e3f has its CatchHandler @ 034a1104 */
    FUN_01bab630(&StringLiteral_12187/*"SlotType"*/);
                    /* try { // try from 034a0e44 to 035a0e4b has its CatchHandler @ 034a10fc */
    FUN_01bab630(&StringLiteral_12509/*"SubType"*/);
                    /* try { // try from 034a0e50 to 035a0e57 has its CatchHandler @ 034a10c4 */
    FUN_01bab630(&StringLiteral_8110/*"ItemName"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    DAT_04567cb7 = 1;
  }
  TacticConditionBase__HNIHOIAMDPC((TacticConditionBase_o *)__this,IIBFFEPEHPF,(MethodInfo *)0x0);
  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                       (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034a0e9c to 035a0eab has its CatchHandler @ 034a10b8 */
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
                    /* try { // try from 034a0eb0 to 035a0ebb has its CatchHandler @ 034a10c8 */
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_8907/*"Me"*/,(MethodInfo *)0x0);
      iVar1 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar4,(MethodInfo *)0x0);
      (__this->fields).EOPBEKGNABN = iVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                         (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_12187/*"SlotType"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_14870/*"Weapon"*/,(MethodInfo *)0x0);
                    /* try { // try from 034a0f0c to 035a0f2f has its CatchHandler @ 034a1140 */
        pCVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                           (pSVar4,(MethodInfo *)0x0);
        (__this->fields).ABHLDGFCJJB = pCVar5;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                           (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_12509/*"SubType"*/,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                             (pSVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
          pCVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                             (pSVar4,(MethodInfo *)0x0);
          (__this->fields).HANDJABEIBK = pCVar5;
          thunk_FUN_01c20e04();
                    /* try { // try from 034a0f80 to 035a0f9b has its CatchHandler @ 034a1144 */
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                             (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_8110/*"ItemName"*/,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                               (pSVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            pCVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                               (pSVar4,(MethodInfo *)0x0);
            ppCVar6 = &(__this->fields).MLPKGJACOFA;
            *ppCVar6 = pCVar5;
                    /* try { // try from 034a0fd8 to 035a0fdf has its CatchHandler @ 034a1154 */
            thunk_FUN_01c20e04(ppCVar6,pCVar5);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool DGCODECJJCC()  [RVA 0x33A0FE4]
// TacticConditionModelItem$$DGCODECJJCC @ RVA 0x33A0FE4

bool TacticConditionModelItem__DGCODECJJCC(TacticConditionModelItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *pCVar3;
  Model_o *pOVar4;
  HOOAAGABMBL_o *pHVar5;
  MethodInfo *method_00;
  HOOAAGABMBL_o **ppHVar6;
  
  ppHVar6 = &(__this->fields).MHDJAEILAJL;
                    /* try { // try from 034a0ff0 to 035a0fff has its CatchHandler @ 034a113c */
  if (*ppHVar6 == (HOOAAGABMBL_o *)0x0) {
    pOVar4 = (__this->fields).super.HMMEFNNMBJK;
    if (pOVar4 == (Model_o *)0x0) goto LAB_034a10c8;
    pOVar4 = Model__GMBBOANEBJJ(pOVar4,(__this->fields).EOPBEKGNABN,(MethodInfo *)0x0);
    if (pOVar4 == (Model_o *)0x0) {
      return false;
    }
    pHVar5 = TacticConditionModelItem__AAJGHPJPEGO(__this,method_00);
                    /* try { // try from 034a1078 to 035a107b has its CatchHandler @ 034a117c */
                    /* try { // try from 034a107c to 035a107f has its CatchHandler @ 034a1164 */
    (__this->fields).MHDJAEILAJL = pHVar5;
                    /* try { // try from 034a1080 to 035a1083 has its CatchHandler @ 034a1160 */
                    /* try { // try from 034a1084 to 035a1087 has its CatchHandler @ 034a115c */
    thunk_FUN_01c20e04(ppHVar6,pHVar5);
                    /* try { // try from 034a1088 to 035a108b has its CatchHandler @ 034a1178 */
                    /* try { // try from 034a108c to 035a108f has its CatchHandler @ 034a117c */
    if ((__this->fields).MHDJAEILAJL != (HOOAAGABMBL_o *)0x0) goto LAB_034a0ffc;
LAB_034a1090:
                    /* try { // try from 034a1090 to 035a1097 has its CatchHandler @ 034a1174 */
    bVar1 = false;
  }
  else {
LAB_034a0ffc:
                    /* try { // try from 034a1000 to 035a100b has its CatchHandler @ 034a1168 */
    pSVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                       ((__this->fields).HANDJABEIBK,(MethodInfo *)0x0);
                    /* try { // try from 034a100c to 035a1077 has its CatchHandler @ 034a0a68 */
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      if (*ppHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_034a10c8;
      pCVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                         (((*ppHVar6)->fields)._DKODBGOHKGH_k__BackingField,(MethodInfo *)0x0);
      bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__LCAEEPKOHMN
                        (pCVar3,(__this->fields).HANDJABEIBK,(MethodInfo *)0x0);
      if (!bVar1) goto LAB_034a1090;
    }
    pSVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                       ((__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
                    /* try { // try from 034a10a0 to 035a10a3 has its CatchHandler @ 034a114c */
                    /* try { // try from 034a10a4 to 035a10a7 has its CatchHandler @ 034a1148 */
      if (*ppHVar6 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 034a10a8 to 035a10ab has its CatchHandler @ 034a0a68 */
                    /* try { // try from 034a10ac to 035a10af has its CatchHandler @ 034a1118 */
                    /* try { // try from 034a10b0 to 035a10b3 has its CatchHandler @ 034a1110 */
        pCVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                           (((*ppHVar6)->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
                    /* try { // try from 034a10b4 to 035a10b7 has its CatchHandler @ 034a10d0 */
                    /* catch() { ... } // from try @ 034a0e9c with catch @ 034a10b8
                       try { // try from 034a10b8 to 035a1193 has its CatchHandler @ 034a0a68 */
                    /* catch() { ... } // from try @ 034a0d74 with catch @ 034a10bc */
                    /* catch() { ... } // from try @ 034a0ce4 with catch @ 034a10c0 */
                    /* catch() { ... } // from try @ 034a0e50 with catch @ 034a10c4 */
        bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__LCAEEPKOHMN
                          (pCVar3,(__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
        return bVar1;
      }
LAB_034a10c8:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034a0eb0 with catch @ 034a10c8 */
      FUN_01bab8c8();
    }
    bVar1 = true;
  }
                    /* try { // try from 034a1098 to 035a109b has its CatchHandler @ 034a1178 */
                    /* try { // try from 034a109c to 035a109f has its CatchHandler @ 034a1150 */
  return bVar1;
}


// ===== public override void GIENGNEGHPJ(TacticConditionData APOLFFJGBEO)  [RVA 0x33A1134]
// TacticConditionModelItem$$GIENGNEGHPJ @ RVA 0x33A1134

void TacticConditionModelItem__GIENGNEGHPJ(TacticConditionModelItem_o *__this,TacticConditionData_o APOLFFJGBEO,MethodInfo *method)

{
  HOOAAGABMBL_o *pHVar1;
  MethodInfo *method_00;
  HOOAAGABMBL_o **ppHVar2;
  
                    /* catch() { ... } // from try @ 034a0c60 with catch @ 034a1134 */
                    /* catch() { ... } // from try @ 034a0c88 with catch @ 034a1138 */
                    /* catch() { ... } // from try @ 034a0ff0 with catch @ 034a113c */
                    /* catch() { ... } // from try @ 034a0f0c with catch @ 034a1140 */
  TacticConditionBase__GIENGNEGHPJ((TacticConditionBase_o *)__this,APOLFFJGBEO,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a0f80 with catch @ 034a1144 */
                    /* catch() { ... } // from try @ 034a10a4 with catch @ 034a1148 */
  pHVar1 = TacticConditionModelItem__AAJGHPJPEGO(__this,method_00);
  ppHVar2 = &(__this->fields).MHDJAEILAJL;
                    /* catch() { ... } // from try @ 034a10a0 with catch @ 034a114c */
  *ppHVar2 = pHVar1;
                    /* catch() { ... } // from try @ 034a109c with catch @ 034a1150 */
                    /* catch() { ... } // from try @ 034a0fd8 with catch @ 034a1154 */
                    /* catch() { ... } // from try @ 034a0c14 with catch @ 034a1158 */
                    /* catch() { ... } // from try @ 034a1084 with catch @ 034a115c */
  thunk_FUN_01c20e04(ppHVar2,pHVar1);
  return;
}


// ===== private HOOAAGABMBL AAJGHPJPEGO()  [RVA 0x33A10CC]
// TacticConditionModelItem$$AAJGHPJPEGO @ RVA 0x33A10CC

HOOAAGABMBL_o * TacticConditionModelItem__AAJGHPJPEGO(TacticConditionModelItem_o *__this,MethodInfo *method)

{
  Model_o *pOVar1;
  System_String_o *pSVar2;
  HOOAAGABMBL_o *pHVar3;
  ModelParameters_o *pPVar4;
  
                    /* catch() { ... } // from try @ 034a0db0 with catch @ 034a10cc */
                    /* catch() { ... } // from try @ 034a10b4 with catch @ 034a10d0 */
                    /* catch() { ... } // from try @ 034a0e08 with catch @ 034a10d4 */
                    /* catch() { ... } // from try @ 034a0de0 with catch @ 034a10d8 */
  pOVar1 = (__this->fields).super.HMMEFNNMBJK;
                    /* catch() { ... } // from try @ 034a0d10 with catch @ 034a10dc */
  if (pOVar1 != (Model_o *)0x0) {
                    /* catch() { ... } // from try @ 034a0dec with catch @ 034a10e0 */
                    /* catch() { ... } // from try @ 034a0dd0 with catch @ 034a10e4 */
                    /* catch() { ... } // from try @ 034a0d88 with catch @ 034a10e8 */
    pOVar1 = Model__GMBBOANEBJJ(pOVar1,(__this->fields).EOPBEKGNABN,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a0da0 with catch @ 034a10ec */
    if (pOVar1 == (Model_o *)0x0) {
                    /* catch() { ... } // from try @ 034a0c3c with catch @ 034a1124 */
                    /* catch() { ... } // from try @ 034a0c78 with catch @ 034a1128 */
                    /* catch() { ... } // from try @ 034a0c6c with catch @ 034a112c */
      return (HOOAAGABMBL_o *)0x0;
    }
                    /* catch() { ... } // from try @ 034a0dc4 with catch @ 034a10f0 */
    pPVar4 = (pOVar1->fields).FAPMJJBOFEF;
                    /* catch() { ... } // from try @ 034a0cf4 with catch @ 034a10f4 */
                    /* catch() { ... } // from try @ 034a0e24 with catch @ 034a10f8 */
                    /* catch() { ... } // from try @ 034a0e44 with catch @ 034a10fc */
    pSVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                       ((__this->fields).ABHLDGFCJJB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a0d00 with catch @ 034a1100 */
    if (pPVar4 != (ModelParameters_o *)0x0) {
                    /* catch() { ... } // from try @ 034a0e34 with catch @ 034a1104 */
                    /* catch() { ... } // from try @ 034a0c94 with catch @ 034a1108 */
                    /* catch() { ... } // from try @ 034a0d94 with catch @ 034a110c */
                    /* catch() { ... } // from try @ 034a10b0 with catch @ 034a1110 */
                    /* catch() { ... } // from try @ 034a0df8 with catch @ 034a1114 */
                    /* catch() { ... } // from try @ 034a10ac with catch @ 034a1118 */
                    /* catch() { ... } // from try @ 034a0e14 with catch @ 034a111c */
                    /* WARNING: Could not recover jumptable at 0x034a1120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 034a0d24 with catch @ 034a1120 */
      pHVar3 = (HOOAAGABMBL_o *)
               (*(pPVar4->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                         (pPVar4,pSVar2,0,(pPVar4->klass->vtable)._4_CJPIJKJDHGI.method);
      return pHVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034a0c50 with catch @ 034a1130 */
  FUN_01bab8c8();
}

