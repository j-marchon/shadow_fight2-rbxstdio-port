// TypeDefIndex 2409
// Namespace: 
// public class OHDDKGHEEPA.PKBJJBGAIGC
// Fields:
//   public ObscuredInt NLPOCKANMGL; // 0x10
//   public ObscuredInt HHOPNIKFJNE; // 0x20
//   public ObscuredInt BPAGMAPDNEJ; // 0x30
//   public ObscuredLong DLMFBBKAALO; // 0x40
//   public ObscuredInt NEKMDLBLENC; // 0x60
//   public ObscuredInt LLOOLLFFDKI; // 0x70
//   public ObscuredInt LLNNLGDGJHE; // 0x80
//   public ObscuredUInt DCOMFGPIBOE; // 0x90
//   public ObscuredUInt OAFBLBIBJBG; // 0xA0
//   public Color CDHDDNHHJIH; // 0xB0
//   public string LFJDLFMCLMO; // 0xC0
//   public FPLOLKHJIAF KMANGLPAOJM; // 0xC8
//   public List<NHPEALHAHOA> FFJAKJDNFAM; // 0xD0

// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x33367A8]
// OHDDKGHEEPA.PKBJJBGAIGC$$HNIHOIAMDPC @ RVA 0x33367A8

void OHDDKGHEEPA_PKBJJBGAIGC__HNIHOIAMDPC
               (OHDDKGHEEPA_PKBJJBGAIGC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  FPLOLKHJIAF_c *pFVar3;
  undefined8 uVar4;
  int32_t iVar5;
  uint32_t uVar6;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  int64_t CJNHFNHJHPE;
  System_String_o *pSVar9;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  FPLOLKHJIAF_o *__this_00;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  NHPEALHAHOA_o *__this_01;
  System_Collections_Generic_List_NHPEALHAHOA__o *__this_02;
  long lVar13;
  NHPEALHAHOA_array *pNVar14;
  ulong uVar15;
  int *piVar16;
  FPLOLKHJIAF_o **ppFVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar22;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields CVar23;
  UnityEngine_Color_o UVar24;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o local_b8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  int64_t local_80;
  int64_t iStack_78;
  int64_t local_70;
  bool_conflict bStack_68;
  bool_conflict bStack_67;
  undefined6 uStack_66;
  
  if ((DAT_04567953 & 1) == 0) {
    FUN_01bab630(&FPLOLKHJIAF_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>_Add__);
    FUN_01bab630(&NHPEALHAHOA_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_6197/*"Factor"*/);
    FUN_01bab630(&StringLiteral_10970/*"RaidTime"*/);
    FUN_01bab630(&StringLiteral_10860/*"RaidID"*/);
    FUN_01bab630(&StringLiteral_4214/*"CdMinTime"*/);
    FUN_01bab630(&StringLiteral_10964/*"RaidSize"*/);
    FUN_01bab630(&StringLiteral_5618/*"Eclipse"*/);
    FUN_01bab630(&StringLiteral_10830/*"RaidCurrencyCost"*/);
    FUN_01bab630(&StringLiteral_4213/*"CdCost"*/);
    FUN_01bab630(&StringLiteral_5060/*"DamageColor"*/);
    FUN_01bab630(&StringLiteral_3215/*"AttributesAlign"*/);
    FUN_01bab630(&StringLiteral_10470/*"Priority"*/);
    FUN_01bab630(&StringLiteral_11028/*"Rating"*/);
    FUN_01bab630(&StringLiteral_5077/*"DanRestriction"*/);
    FUN_01bab630(&StringLiteral_5072/*"Dan"*/);
    FUN_01bab630(&StringLiteral_11991/*"Shift"*/);
    FUN_01bab630(&StringLiteral_4934/*"CurrencyRewardForBatlleInfo"*/);
    FUN_01bab630(&StringLiteral_11432/*"RoundCoolDown"*/);
                    /* try { // try from 034368fc to 03536ad3 has its CatchHandler @ 034368fc
                       catch() { ... } // from try @ 034368fc with catch @ 034368fc
                       catch() { ... } // from try @ 03436c44 with catch @ 034368fc
                       catch() { ... } // from try @ 03436d14 with catch @ 034368fc
                       catch() { ... } // from try @ 03436d1c with catch @ 034368fc
                       catch() { ... } // from try @ 03436e10 with catch @ 034368fc */
    DAT_04567953 = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar7 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar7,StringLiteral_10860/*"RaidID"*/,(MethodInfo *)0x0);
    iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
    CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0);
    (__this->fields).NLPOCKANMGL.fields = CVar22;
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar7,StringLiteral_11028/*"Rating"*/,(MethodInfo *)0x0);
      iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
      CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0);
      (__this->fields).HHOPNIKFJNE.fields = CVar22;
      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_10964/*"RaidSize"*/,(MethodInfo *)0x0);
        iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
        CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                 CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0)
        ;
        (__this->fields).BPAGMAPDNEJ.fields = CVar22;
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_10970/*"RaidTime"*/,(MethodInfo *)0x0);
          CJNHFNHJHPE = EIABCPKDEBD__HNIGPBMJJOL(pSVar8,0,(MethodInfo *)0x0);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                    (&local_a0,CJNHFNHJHPE,(MethodInfo *)0x0);
          local_70 = CONCAT44(local_a0.fields.fakeValue._4_4_,(undefined4)local_a0.fields.fakeValue)
          ;
          iStack_78 = local_a0.fields.hiddenValue;
          local_80 = local_a0.fields.currentCryptoKey;
          bStack_68 = local_a0.fields.fakeValueActive;
          bStack_67 = local_a0.fields.inited;
          uStack_66 = local_a0.fields._26_6_;
          (__this->fields).DLMFBBKAALO.fields.hiddenValue = local_a0.fields.hiddenValue;
          (__this->fields).DLMFBBKAALO.fields.currentCryptoKey = local_a0.fields.currentCryptoKey;
          (__this->fields).DLMFBBKAALO.fields.fakeValueActive = local_a0.fields.fakeValueActive;
          (__this->fields).DLMFBBKAALO.fields.inited = local_a0.fields.inited;
          *(undefined6 *)&(__this->fields).DLMFBBKAALO.fields.field_0x1a = local_a0.fields._26_6_;
          (__this->fields).DLMFBBKAALO.fields.fakeValue = local_70;
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar7,StringLiteral_5072/*"Dan"*/,(MethodInfo *)0x0);
            iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
            CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                     CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                               (iVar5,(MethodInfo *)0x0);
            (__this->fields).NEKMDLBLENC.fields = CVar22;
            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar7,StringLiteral_5077/*"DanRestriction"*/,(MethodInfo *)0x0);
              iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
              CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                       CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                 (iVar5,(MethodInfo *)0x0);
              (__this->fields).LLOOLLFFDKI.fields = CVar22;
              pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar7,StringLiteral_4214/*"CdMinTime"*/,(MethodInfo *)0x0);
                    /* try { // try from 03436ad4 to 03536afb has its CatchHandler @ 03436d58 */
                uVar6 = EIABCPKDEBD__FECKAJHFDJM(pSVar8,0,(MethodInfo *)0x0);
                CVar23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields)
                         CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO
                                   (uVar6,(MethodInfo *)0x0);
                (__this->fields).DCOMFGPIBOE.fields = CVar23;
                pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_4213/*"CdCost"*/,(MethodInfo *)0x0);
                  uVar6 = EIABCPKDEBD__FECKAJHFDJM(pSVar8,0,(MethodInfo *)0x0);
                  CVar23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields)
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO
                                     (uVar6,(MethodInfo *)0x0);
                  (__this->fields).OAFBLBIBJBG.fields = CVar23;
                    /* try { // try from 03436b30 to 03536b5b has its CatchHandler @ 03436d54 */
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar7,StringLiteral_4934/*"CurrencyRewardForBatlleInfo"*/,(MethodInfo *)0x0);
                    pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                       (pSVar8,string_TypeInfo->static_fields->Empty,
                                        (MethodInfo *)0x0);
                    (__this->fields).LFJDLFMCLMO = pSVar9;
                    thunk_FUN_01c20e04();
                    /* try { // try from 03436b98 to 03536b9f has its CatchHandler @ 03436d50 */
                    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03436bb4 to 03536bbb has its CatchHandler @ 03436d38 */
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_5060/*"DamageColor"*/,(MethodInfo *)0x0);
                      if (pSVar8 == (System_Xml_XmlAttribute_o *)0x0) {
                        fVar18 = 1.0;
                        fVar19 = 1.0;
                        fVar20 = 1.0;
                        fVar21 = 1.0;
                      }
                      else {
                    /* try { // try from 03436bc4 to 03536bcb has its CatchHandler @ 03436d44 */
                        pSVar9 = (System_String_o *)
                                 (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                                           (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
                    /* try { // try from 03436bcc to 03536bd7 has its CatchHandler @ 03436d48 */
                        UVar24 = CFBGPBCDAGA__DJEMAAMAJHF(pSVar9,(MethodInfo *)0x0);
                        fVar21 = UVar24.fields.a;
                        fVar20 = UVar24.fields.b;
                        fVar19 = UVar24.fields.g;
                        fVar18 = UVar24.fields.r;
                      }
                    /* try { // try from 03436be8 to 03536bef has its CatchHandler @ 03436d34 */
                      (__this->fields).CDHDDNHHJIH.fields.r = fVar18;
                      (__this->fields).CDHDDNHHJIH.fields.g = fVar19;
                      (__this->fields).CDHDDNHHJIH.fields.b = fVar20;
                      (__this->fields).CDHDDNHHJIH.fields.a = fVar21;
                    /* try { // try from 03436bf4 to 03536bff has its CatchHandler @ 03436d40 */
                      AHDGNOJPPIB_00 =
                           (System_Xml_XmlNode_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                     (AHDGNOJPPIB,StringLiteral_10830/*"RaidCurrencyCost"*/,
                                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                    /* try { // try from 03436c0c to 03536c27 has its CatchHandler @ 03436d3c */
                      if ((AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) &&
                         (ppFVar17 = &(__this->fields).KMANGLPAOJM,
                         *ppFVar17 == (FPLOLKHJIAF_o *)0x0)) {
                        __this_00 = (FPLOLKHJIAF_o *)
                                    FCFEFEBAILK__POKFALBPBDI(AHDGNOJPPIB_00,(MethodInfo *)0x0);
                        if (__this_00 == (FPLOLKHJIAF_o *)0x0) goto LAB_03437118;
                        iVar5 = AJNNHGGLGIF__NHGGBEACKBD
                                          ((AJNNHGGLGIF_o *)__this_00,(MethodInfo *)0x0);
                        pFVar3 = FPLOLKHJIAF_TypeInfo;
                        if (iVar5 == 0x25) {
                    /* try { // try from 03436c38 to 03536c43 has its CatchHandler @ 03436d28 */
                    /* try { // try from 03436c44 to 03536cff has its CatchHandler @ 034368fc */
                          bVar1 = (FPLOLKHJIAF_TypeInfo->_2).naturalAligment;
                          if (((__this_00->klass->_2).naturalAligment < bVar1) ||
                             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                              (Il2CppClass *)FPLOLKHJIAF_TypeInfo)) {
LAB_0343712c:
                    /* WARNING: Subroutine does not return */
                            FUN_01babc64(__this_00);
                          }
                          *ppFVar17 = __this_00;
                          if (((__this_00->klass->_2).naturalAligment < bVar1) ||
                             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                              (Il2CppClass *)pFVar3)) goto LAB_0343712c;
                          thunk_FUN_01c20e04(ppFVar17,__this_00);
                        }
                      }
                      plVar10 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                                  (AHDGNOJPPIB,StringLiteral_3215/*"AttributesAlign"*/,
                                                   (AHDGNOJPPIB->klass->vtable)._51_get_Item.method)
                      ;
                      if (plVar10 == (long *)0x0) {
                        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                           (AHDGNOJPPIB,
                                            (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                        if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar7,StringLiteral_11432/*"RoundCoolDown"*/,(MethodInfo *)0x0);
                          iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
                          CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                                   CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                             (iVar5,(MethodInfo *)0x0);
                          (__this->fields).LLNNLGDGJHE.fields = CVar22;
                          return;
                        }
                      }
                      else {
                        plVar10 = (long *)(**(code **)(*plVar10 + 0x208))
                                                    (plVar10,*(undefined8 *)(*plVar10 + 0x210));
                        if (plVar10 != (long *)0x0) {
                          plVar10 = (long *)(**(code **)(*plVar10 + 0x1b8))
                                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
                          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          do {
                    /* catch() { ... } // from try @ 03436d18 with catch @ 03436d24 */
                            lVar13 = *plVar10;
                    /* catch() { ... } // from try @ 03436c38 with catch @ 03436d28 */
                    /* catch() { ... } // from try @ 03436d10 with catch @ 03436d2c */
                            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    /* catch() { ... } // from try @ 03436d0c with catch @ 03436d30 */
                            if (uVar15 != 0) {
                    /* catch() { ... } // from try @ 03436be8 with catch @ 03436d34 */
                    /* catch() { ... } // from try @ 03436bb4 with catch @ 03436d38 */
                              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                              do {
                    /* catch() { ... } // from try @ 03436c0c with catch @ 03436d3c */
                    /* catch() { ... } // from try @ 03436bf4 with catch @ 03436d40 */
                    /* catch() { ... } // from try @ 03436bc4 with catch @ 03436d44 */
                                if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                                    System_Collections_IEnumerator_TypeInfo) {
                                  puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                                  goto LAB_03436d70;
                                }
                    /* catch() { ... } // from try @ 03436bcc with catch @ 03436d48 */
                                uVar15 = uVar15 - 1;
                    /* catch() { ... } // from try @ 03436d08 with catch @ 03436d4c */
                                piVar16 = piVar16 + 4;
                    /* catch() { ... } // from try @ 03436b98 with catch @ 03436d50 */
                              } while (uVar15 != 0);
                            }
                    /* catch() { ... } // from try @ 03436b30 with catch @ 03436d54 */
                    /* catch() { ... } // from try @ 03436ad4 with catch @ 03436d58 */
                    /* catch() { ... } // from try @ 03436d00 with catch @ 03436d5c */
                            puVar11 = (undefined8 *)
                                      FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,0
                                                  );
LAB_03436d70:
                            uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                            if ((uVar15 & 1) == 0) {
                              FUN_03f93a20();
                              return;
                            }
                    /* try { // try from 03436d80 to 03536d83 has its CatchHandler @ 03436d90 */
                            lVar13 = *plVar10;
                            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                            if (uVar15 != 0) {
                    /* catch() { ... } // from try @ 03436d80 with catch @ 03436d90 */
                              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                              do {
                    /* try { // try from 03436da0 to 03536e0f has its CatchHandler @ 03436e24 */
                                if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                                    System_Collections_IEnumerator_TypeInfo) {
                                  puVar11 = (undefined8 *)
                                            (lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                                  goto LAB_03436dd0;
                                }
                                uVar15 = uVar15 - 1;
                                piVar16 = piVar16 + 4;
                              } while (uVar15 != 0);
                            }
                            puVar11 = (undefined8 *)
                                      FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,1
                                                  );
LAB_03436dd0:
                            plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
                            if (plVar12 != (long *)0x0) {
                              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03436e10 to 03536e1b has its CatchHandler @ 034368fc */
                              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                                 (*(System_Xml_XmlNode_c **)
                                   (*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                                  System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                                FUN_01babc64(plVar12);
                              }
                            }
                    /* try { // try from 03436e1c to 03536e23 has its CatchHandler @ 03436e24 */
                            __this_01 = (NHPEALHAHOA_o *)thunk_FUN_01bda818(NHPEALHAHOA_TypeInfo);
                    /* catch() { ... } // from try @ 03436da0 with catch @ 03436e24
                       catch() { ... } // from try @ 03436e1c with catch @ 03436e24 */
                    /* try { // try from 03436e28 to 03536feb has its CatchHandler @ 03436e28
                       catch() { ... } // from try @ 03436e28 with catch @ 03436e28
                       catch() { ... } // from try @ 034370b4 with catch @ 03436e28
                       catch() { ... } // from try @ 03437144 with catch @ 03436e28
                       catch() { ... } // from try @ 0343714c with catch @ 03436e28
                       catch() { ... } // from try @ 034371fc with catch @ 03436e28 */
                            NHPEALHAHOA___ctor(__this_01,(MethodInfo *)0x0);
                            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                     (**(code **)(*plVar12 + 0x238))
                                               (plVar12,*(undefined8 *)(*plVar12 + 0x240));
                            if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar7,StringLiteral_6197/*"Factor"*/,(MethodInfo *)0x0);
                            fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
                            CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)
                                       &local_a0,fVar18,(MethodInfo *)0x0);
                            iStack_78 = local_a0.fields.hiddenValue;
                            local_80 = local_a0.fields.currentCryptoKey;
                            local_70 = CONCAT44(local_70._4_4_,(undefined4)local_a0.fields.fakeValue
                                               );
                            if (__this_01 == (NHPEALHAHOA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            (__this_01->fields).JHLJELAKADM.fields.fakeValueActive =
                                 local_a0.fields.fakeValue._0_1_;
                            (__this_01->fields).JHLJELAKADM.fields.inited =
                                 local_a0.fields.fakeValue._1_1_;
                            *(undefined2 *)&(__this_01->fields).JHLJELAKADM.fields.field_0x12 =
                                 local_a0.fields.fakeValue._2_2_;
                            (__this_01->fields).JHLJELAKADM.fields.hiddenValueOldByte4 =
                                 (CodeStage_AntiCheat_Common_ACTkByte4_o)
                                 (undefined4)local_a0.fields.hiddenValue;
                            (__this_01->fields).JHLJELAKADM.fields.fakeValue =
                                 (float)local_a0.fields.hiddenValue._4_4_;
                            (__this_01->fields).JHLJELAKADM.fields.currentCryptoKey =
                                 (undefined4)local_a0.fields.currentCryptoKey;
                            (__this_01->fields).JHLJELAKADM.fields.hiddenValue =
                                 local_a0.fields.currentCryptoKey._4_4_;
                            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                     (**(code **)(*plVar12 + 0x238))
                                               (plVar12,*(undefined8 *)(*plVar12 + 0x240));
                            if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar7,StringLiteral_11991/*"Shift"*/,(MethodInfo *)0x0);
                            fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
                            CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                      (&local_b8,fVar18,(MethodInfo *)0x0);
                            uVar4 = local_b8.fields._8_8_;
                            local_a0.fields.hiddenValue._0_1_ =
                                 local_b8.fields.hiddenValueOldByte4.fields.b1;
                            local_a0.fields.hiddenValue._1_1_ =
                                 local_b8.fields.hiddenValueOldByte4.fields.b2;
                            local_a0.fields.hiddenValue._2_1_ =
                                 local_b8.fields.hiddenValueOldByte4.fields.b3;
                            local_a0.fields.hiddenValue._3_1_ =
                                 local_b8.fields.hiddenValueOldByte4.fields.b4;
                            local_a0.fields.hiddenValue._4_4_ = local_b8.fields.fakeValue;
                            local_a0.fields.currentCryptoKey._0_4_ =
                                 local_b8.fields.currentCryptoKey;
                            local_a0.fields.currentCryptoKey._4_4_ = local_b8.fields.hiddenValue;
                            local_a0.fields.fakeValue._0_1_ = local_b8.fields.fakeValueActive;
                            local_a0.fields.fakeValue._1_1_ = local_b8.fields.inited;
                            local_a0.fields.fakeValue._2_2_ = local_b8.fields._18_2_;
                            (__this_01->fields).GHKNFJJOIDM.fields.fakeValueActive =
                                 local_b8.fields.fakeValueActive;
                            (__this_01->fields).GHKNFJJOIDM.fields.inited = local_b8.fields.inited;
                            *(undefined2 *)&(__this_01->fields).GHKNFJJOIDM.fields.field_0x12 =
                                 local_b8.fields._18_2_;
                            local_b8.fields.hiddenValueOldByte4.fields = SUB84(uVar4,0);
                            local_b8.fields.fakeValue = SUB84(uVar4,4);
                            (__this_01->fields).GHKNFJJOIDM.fields.hiddenValueOldByte4 =
                                 (CodeStage_AntiCheat_Common_ACTkByte4_o)
                                 local_b8.fields.hiddenValueOldByte4.fields;
                            (__this_01->fields).GHKNFJJOIDM.fields.fakeValue =
                                 local_b8.fields.fakeValue;
                            (__this_01->fields).GHKNFJJOIDM.fields.currentCryptoKey =
                                 local_b8.fields.currentCryptoKey;
                            (__this_01->fields).GHKNFJJOIDM.fields.hiddenValue =
                                 local_b8.fields.hiddenValue;
                            local_b8.fields._8_8_ = uVar4;
                            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                     (**(code **)(*plVar12 + 0x238))
                                               (plVar12,*(undefined8 *)(*plVar12 + 0x240));
                            if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar7,StringLiteral_10470/*"Priority"*/,(MethodInfo *)0x0);
                            iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
                            CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                                     CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                               (iVar5,(MethodInfo *)0x0);
                            (__this_01->fields).EAFPDFHFBOM.fields = CVar22;
                            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                     (**(code **)(*plVar12 + 0x238))
                                               (plVar12,*(undefined8 *)(*plVar12 + 0x240));
                            if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar7,StringLiteral_5618/*"Eclipse"*/,(MethodInfo *)0x0);
                            if (pSVar8 == (System_Xml_XmlAttribute_o *)0x0) {
                              iVar5 = 2;
LAB_03436f90:
                              (__this_01->fields).HPIDBKGJCAF = iVar5;
                            }
                            else {
                              pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                       (**(code **)(*plVar12 + 0x238))
                                                 (plVar12,*(undefined8 *)(*plVar12 + 0x240));
                              if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8c8();
                              }
                              pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                 (pSVar7,StringLiteral_5618/*"Eclipse"*/,(MethodInfo *)0x0);
                              iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
                              if (iVar5 == 0) {
                                iVar5 = 1;
                                goto LAB_03436f90;
                              }
                              (__this_01->fields).HPIDBKGJCAF = 0;
                            }
                            lVar13 = Method_System_Collections_Generic_List<NHPEALHAHOA>_Add__;
                            __this_02 = (__this->fields).FFJAKJDNFAM;
                            if (__this_02 == (System_Collections_Generic_List_NHPEALHAHOA__o *)0x0)
                            {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            pNVar14 = (__this_02->fields)._items;
                            (__this_02->fields)._version = (__this_02->fields)._version + 1;
                            if (pNVar14 == (NHPEALHAHOA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            uVar2 = (__this_02->fields)._size;
                            if (uVar2 < (uint)pNVar14->max_length) {
                              (__this_02->fields)._size = uVar2 + 1;
                              pNVar14->m_Items[(int)uVar2] = __this_01;
                              thunk_FUN_01c20e04(pNVar14->m_Items + (int)uVar2,__this_01);
                            }
                            else {
                    /* try { // try from 03436fec to 03537013 has its CatchHandler @ 03437170 */
                              System_Collections_Generic_List<object>__AddWithResize
                                        ((System_Collections_Generic_List_object__o *)__this_02,
                                         (Il2CppObject *)__this_01,
                                         *(MethodInfo_26E4DAC **)
                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                            }
                          } while( true );
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
  }
LAB_03437118:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x3335EA0]
// OHDDKGHEEPA.PKBJJBGAIGC$$RandomizeObscuredVars @ RVA 0x3335EA0

void OHDDKGHEEPA_PKBJJBGAIGC__RandomizeObscuredVars
               (OHDDKGHEEPA_PKBJJBGAIGC_o *__this,MethodInfo *method)

{
  System_Action_NHPEALHAHOA__o **ppSVar1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_NHPEALHAHOA__o *__this_00;
  System_Action_NHPEALHAHOA__o *action;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_03;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_04;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_05;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_06;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o __this_07;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o __this_08;
  
  if ((DAT_04567954 & 1) == 0) {
    FUN_01bab630(&System_Action<NHPEALHAHOA>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>_ForEach__);
    FUN_01bab630(&Method_OHDDKGHEEPA_PKBJJBGAIGC_<>c_HJNOOBPICAJ__);
    FUN_01bab630(&OHDDKGHEEPA_PKBJJBGAIGC_<>c_TypeInfo);
    DAT_04567954 = 1;
  }
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &__this->fields;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  __this_02.fields.fakeValue = 0;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields.inited = false;
  __this_02.fields._14_2_ = 0;
  __this_02.fields._0_8_ = &(__this->fields).HHOPNIKFJNE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_02,in_x2);
  __this_03.fields.fakeValue = 0;
  __this_03.fields.fakeValueActive = false;
  __this_03.fields.inited = false;
  __this_03.fields._14_2_ = 0;
  __this_03.fields._0_8_ = &(__this->fields).BPAGMAPDNEJ;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_03,in_x2);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&(__this->fields).DLMFBBKAALO,(MethodInfo *)0x0);
  __this_04.fields.fakeValue = 0;
  __this_04.fields.fakeValueActive = false;
  __this_04.fields.inited = false;
  __this_04.fields._14_2_ = 0;
  __this_04.fields._0_8_ = &(__this->fields).NEKMDLBLENC;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_04,in_x2);
  __this_05.fields.fakeValue = 0;
  __this_05.fields.fakeValueActive = false;
  __this_05.fields.inited = false;
  __this_05.fields._14_2_ = 0;
  __this_05.fields._0_8_ = &(__this->fields).LLOOLLFFDKI;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_05,in_x2);
  __this_06.fields.fakeValue = 0;
  __this_06.fields.fakeValueActive = false;
  __this_06.fields.inited = false;
  __this_06.fields._14_2_ = 0;
  __this_06.fields._0_8_ = &(__this->fields).LLNNLGDGJHE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_06,in_x2);
  __this_07.fields.fakeValue = 0;
  __this_07.fields.fakeValueActive = false;
  __this_07.fields.inited = false;
  __this_07.fields._14_2_ = 0;
  __this_07.fields._0_8_ = &(__this->fields).DCOMFGPIBOE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__GPJJDLBJOAL(__this_07,in_x2);
  __this_08.fields.fakeValue = 0;
  __this_08.fields.fakeValueActive = false;
  __this_08.fields.inited = false;
  __this_08.fields._14_2_ = 0;
  __this_08.fields._0_8_ = &(__this->fields).OAFBLBIBJBG;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__GPJJDLBJOAL(__this_08,in_x2);
  __this_00 = (__this->fields).FFJAKJDNFAM;
  if ((OHDDKGHEEPA_PKBJJBGAIGC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = OHDDKGHEEPA_PKBJJBGAIGC_<>c_TypeInfo->static_fields->__9__14_0;
  if (action == (System_Action_NHPEALHAHOA__o *)0x0) {
    if ((OHDDKGHEEPA_PKBJJBGAIGC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_NHPEALHAHOA__o *)thunk_FUN_01bda818(System_Action<NHPEALHAHOA>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &OHDDKGHEEPA_PKBJJBGAIGC_<>c_TypeInfo->static_fields->__9__14_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_NHPEALHAHOA__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<NHPEALHAHOA>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33376C0]
// OHDDKGHEEPA.PKBJJBGAIGC$$.ctor @ RVA 0x33376C0

void OHDDKGHEEPA_PKBJJBGAIGC___ctor(OHDDKGHEEPA_PKBJJBGAIGC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_NHPEALHAHOA__o *__this_00;
  System_Collections_Generic_List_NHPEALHAHOA__o **ppSVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields CVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  int64_t local_50;
  int64_t iStack_48;
  int64_t iStack_40;
  bool_conflict bStack_38;
  bool_conflict bStack_37;
  undefined6 uStack_36;
  
  if ((DAT_04567955 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NHPEALHAHOA>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04567955 = 1;
  }
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
  (__this->fields).NLPOCKANMGL.fields = CVar2;
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
  (__this->fields).HHOPNIKFJNE.fields = CVar2;
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
  (__this->fields).BPAGMAPDNEJ.fields = CVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_70,-1,(MethodInfo *)0x0);
  iStack_48 = local_70.fields.hiddenValue;
  local_50 = local_70.fields.currentCryptoKey;
  bStack_38 = local_70.fields.fakeValueActive;
  bStack_37 = local_70.fields.inited;
  uStack_36 = local_70.fields._26_6_;
  iStack_40 = local_70.fields.fakeValue;
  (__this->fields).DLMFBBKAALO.fields.hiddenValue = local_70.fields.hiddenValue;
  (__this->fields).DLMFBBKAALO.fields.currentCryptoKey = local_70.fields.currentCryptoKey;
  (__this->fields).DLMFBBKAALO.fields.fakeValueActive = local_70.fields.fakeValueActive;
  (__this->fields).DLMFBBKAALO.fields.inited = local_70.fields.inited;
  *(undefined6 *)&(__this->fields).DLMFBBKAALO.fields.field_0x1a = local_70.fields._26_6_;
  (__this->fields).DLMFBBKAALO.fields.fakeValue = local_70.fields.fakeValue;
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
  (__this->fields).NEKMDLBLENC.fields = CVar2;
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
  (__this->fields).LLOOLLFFDKI.fields = CVar2;
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
  (__this->fields).LLNNLGDGJHE.fields = CVar2;
  CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).DCOMFGPIBOE.fields = CVar3;
  CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).OAFBLBIBJBG.fields = CVar3;
  (__this->fields).LFJDLFMCLMO = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_NHPEALHAHOA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<NHPEALHAHOA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NHPEALHAHOA>__ctor__);
  ppSVar1 = &(__this->fields).FFJAKJDNFAM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

