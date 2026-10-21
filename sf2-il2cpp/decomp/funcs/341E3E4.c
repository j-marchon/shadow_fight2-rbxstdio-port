// HEFOANCOHDC$$HNIHOIAMDPC @ RVA 0x341E3E4

/* WARNING: Removing unreachable block (ram,0x0351ef20) */
/* WARNING: Removing unreachable block (ram,0x0351f078) */

void HEFOANCOHDC__HNIHOIAMDPC
               (HEFOANCOHDC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_Xml_XmlDocument_o *__this_00;
  System_Xml_XmlNode_o *pSVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_String_o *pSVar10;
  System_String_array *pSVar11;
  System_Collections_Generic_List_IHDFIJGDCBL__o *__this_01;
  System_Xml_XmlNode_o *pSVar12;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  long *plVar13;
  undefined8 *puVar14;
  MethodInfo *pMVar15;
  MethodInfo *method_00;
  ABCMPMHNMAP_o *pAVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  System_String_o **ppSVar20;
  FPLCEOJCPOD_o *__this_03;
  System_Collections_Generic_List_string__o *pSVar21;
  System_String_Fields PMACBPAMPJA;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar22;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar23;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_e0;
  float local_b4;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045680e5 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredString>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredString>_get_Value__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4507);
    FUN_01bab630(&StringLiteral_8111);
    FUN_01bab630(&StringLiteral_10235);
    FUN_01bab630(&StringLiteral_9209);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_3399);
    FUN_01bab630(&StringLiteral_11876);
    FUN_01bab630(&StringLiteral_3396);
    FUN_01bab630(&StringLiteral_11030);
    FUN_01bab630(&StringLiteral_3398);
    FUN_01bab630(&StringLiteral_8409);
    FUN_01bab630(&StringLiteral_13924);
    FUN_01bab630(&StringLiteral_12864);
    FUN_01bab630(&StringLiteral_2799);
    FUN_01bab630(&StringLiteral_7340);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_5304);
    FUN_01bab630(&StringLiteral_7076);
    FUN_01bab630(&StringLiteral_7230);
    DAT_045680e5 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_b0.fields._getEnumeratorRetType = 0;
  local_b0.fields._36_4_ = 0;
  local_b0.fields._version = 0;
  local_b0.fields._index = 0;
  local_b0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b0.fields._current.fields.value = (Il2CppObject *)0x0;
  local_b0.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b4 = 0.0;
  __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
  pSVar7 = EIABCPKDEBD__DGPOFACHGMP
                     ((System_Xml_XmlNode_o *)(__this->fields).DHNEDFGMFGM,AHDGNOJPPIB,
                      (MethodInfo *)0x0);
  (__this->fields).DCDJOJGHJEB = pSVar7;
  thunk_FUN_01c20e04();
  pSVar7 = EIABCPKDEBD__DGPOFACHGMP((System_Xml_XmlNode_o *)__this_00,AHDGNOJPPIB,(MethodInfo *)0x0)
  ;
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar8 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar8,StringLiteral_7230,(MethodInfo *)0x0);
    iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,-1,(MethodInfo *)0x0);
    CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0);
    (__this->fields)._MDAJFAPLLOH_k__BackingField.fields = CVar22;
    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar8,StringLiteral_8409,(MethodInfo *)0x0);
      iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
      CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0);
      (__this->fields).NOPGBJNLFHM.fields = CVar22;
      pSVar8 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this->fields).JIJLBFGKNJK = pSVar10;
        thunk_FUN_01c20e04();
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_2799,(MethodInfo *)0x0);
          pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
          (__this->fields).JMGIACHBIKG = pSVar10;
          thunk_FUN_01c20e04();
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0351e784 to 0361e8bb has its CatchHandler @ 0351e784
                       catch() { ... } // from try @ 0351e784 with catch @ 0351e784
                       catch() { ... } // from try @ 0351ea30 with catch @ 0351e784
                       catch() { ... } // from try @ 0351eadc with catch @ 0351e784
                       catch() { ... } // from try @ 0351eae4 with catch @ 0351e784
                       catch() { ... } // from try @ 0351ebac with catch @ 0351e784 */
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_3396,(MethodInfo *)0x0);
            pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this->fields).FFDAPDCFBDO = pSVar10;
            thunk_FUN_01c20e04();
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar8,StringLiteral_3399,(MethodInfo *)0x0);
              iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
              CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                       CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                 (iVar5,(MethodInfo *)0x0);
              (__this->fields).EAGEGPKAEKI.fields = CVar22;
              pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar8,StringLiteral_3398,(MethodInfo *)0x0);
                pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
                ppSVar20 = &(__this->fields).EHLKHAKJGGH;
                *ppSVar20 = pSVar10;
                thunk_FUN_01c20e04(ppSVar20,pSVar10);
                pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar8,StringLiteral_7340,(MethodInfo *)0x0);
                  pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
                  (__this->fields).KPDPJONADPJ = pSVar10;
                  thunk_FUN_01c20e04();
                  if ((pSVar7 != (System_Xml_XmlNode_o *)0x0) &&
                     (pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method),
                     pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 0351e8bc to 0361e8e3 has its CatchHandler @ 0351eb14 */
                    pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar8,StringLiteral_5304,(MethodInfo *)0x0);
                    pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1,(MethodInfo *)0x0);
                    (__this->fields).BPCADJLKKGA = pSVar10;
                    thunk_FUN_01c20e04();
                    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                             (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                                       (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
                    if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar8,StringLiteral_9209,(MethodInfo *)0x0);
                      pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                          (pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0351e918 to 0361e943 has its CatchHandler @ 0351eb10 */
                      (__this->fields).JJONOCGMEMK = pSVar10;
                      thunk_FUN_01c20e04();
                      pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
                      if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar8,StringLiteral_7076,(MethodInfo *)0x0);
                        bVar4 = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,false,(MethodInfo *)0x0);
                        CVar23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                                 CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                                           (bVar4,(MethodInfo *)0x0);
                        (__this->fields).CHLMHEGKKNH.fields = CVar23;
                        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                                           (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method
                                           );
                    /* try { // try from 0351e984 to 0361e98b has its CatchHandler @ 0351eb08 */
                        if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0351e994 to 0361e99b has its CatchHandler @ 0351eb00 */
                          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar8,StringLiteral_8111,(MethodInfo *)0x0);
                    /* try { // try from 0351e99c to 0361e9a7 has its CatchHandler @ 0351eaf0 */
                          pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                              (pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0351e9a8 to 0361e9af has its CatchHandler @ 0351eb04 */
                          (__this->fields).AKBDHOEGNNG = pSVar10;
                          thunk_FUN_01c20e04();
                    /* try { // try from 0351e9bc to 0361ea2f has its CatchHandler @ 0351eb0c */
                          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                             (AHDGNOJPPIB,
                                              (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                             );
                          if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar8,StringLiteral_12864,(MethodInfo *)0x0);
                            pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                                (pSVar9,StringLiteral_1,(MethodInfo *)0x0);
                            if (pSVar10 != (System_String_o *)0x0) {
                              pSVar21 = (__this->fields).FMFKGEJLDGO;
                              method_00 = (MethodInfo *)0x0;
                              pSVar11 = System_String__Split(pSVar10,0x7c,0,(MethodInfo *)0x0);
                              if (pSVar21 != (System_Collections_Generic_List_string__o *)0x0) {
                                System_Collections_Generic_List<object>__AddRange
                                          ((System_Collections_Generic_List_object__o *)pSVar21,
                                           (System_Collections_Generic_IEnumerable_T__o *)pSVar11,
                                           Method_System_Collections_Generic_List<string>_AddRange__
                                          );
                                lVar17 = Method_System_Collections_Generic_List<string>_Add__;
                                pSVar21 = (__this->fields).FMFKGEJLDGO;
                                if (pSVar21 != (System_Collections_Generic_List_string__o *)0x0) {
                    /* try { // try from 0351ea30 to 0361eac3 has its CatchHandler @ 0351e784 */
                                  pSVar10 = (__this->fields).JIJLBFGKNJK;
                                  pSVar11 = (pSVar21->fields)._items;
                                  (pSVar21->fields)._version = (pSVar21->fields)._version + 1;
                                  if (pSVar11 != (System_String_array *)0x0) {
                                    uVar2 = (pSVar21->fields)._size;
                                    if (uVar2 < (uint)pSVar11->max_length) {
                                      (pSVar21->fields)._size = uVar2 + 1;
                                      pSVar11->m_Items[(int)uVar2] = pSVar10;
                                      thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar2);
                                    }
                                    else {
                                      System_Collections_Generic_List<object>__AddWithResize
                                                ((System_Collections_Generic_List_object__o *)
                                                 pSVar21,(Il2CppObject *)pSVar10,
                                                 *(MethodInfo_26E4DAC **)
                                                  (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70
                                                  ));
                                    }
                                    (__this->fields).OCABLLPNEGL = 1;
                                    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                               methodPtr)(AHDGNOJPPIB,
                                                          (AHDGNOJPPIB->klass->vtable).
                                                          _16_get_Attributes.method);
                                    if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                      pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                         (pSVar8,StringLiteral_10235,
                                                          (MethodInfo *)0x0);
                    /* try { // try from 0351eac4 to 0361eacb has its CatchHandler @ 0351eb18 */
                                      pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                                          (pSVar9,StringLiteral_1,(MethodInfo *)0x0)
                                      ;
                    /* try { // try from 0351eacc to 0361eacf has its CatchHandler @ 0351eafc */
                                      if (pSVar10 != (System_String_o *)0x0) {
                    /* try { // try from 0351ead0 to 0361ead3 has its CatchHandler @ 0351eaf8 */
                    /* try { // try from 0351ead4 to 0361eadb has its CatchHandler @ 0351eaf4 */
                    /* try { // try from 0351eadc to 0361eadf has its CatchHandler @ 0351e784 */
                    /* try { // try from 0351eae0 to 0361eae3 has its CatchHandler @ 0351eaec */
                    /* try { // try from 0351eae4 to 0361eb27 has its CatchHandler @ 0351e784 */
                                        bVar4 = System_String__Equals
                                                          (pSVar10,StringLiteral_4507,
                                                           (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0351eae0 with catch @ 0351eaec */
                                        if (bVar4) {
                    /* catch() { ... } // from try @ 0351e99c with catch @ 0351eaf0 */
                                          (__this->fields).OCABLLPNEGL = 0;
                                        }
                    /* catch() { ... } // from try @ 0351ead4 with catch @ 0351eaf4 */
                    /* catch() { ... } // from try @ 0351ead0 with catch @ 0351eaf8 */
                    /* catch() { ... } // from try @ 0351eacc with catch @ 0351eafc */
                                        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0351e994 with catch @ 0351eb00 */
                                          thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 0351e9a8 with catch @ 0351eb04 */
                                        }
                    /* catch() { ... } // from try @ 0351e984 with catch @ 0351eb08 */
                    /* catch() { ... } // from try @ 0351e9bc with catch @ 0351eb0c */
                                        pAVar16 = MGNPHCAAEIO_TypeInfo->static_fields->EDKELIKNDEP;
                    /* catch() { ... } // from try @ 0351e918 with catch @ 0351eb10 */
                    /* catch() { ... } // from try @ 0351e8bc with catch @ 0351eb14 */
                    /* catch() { ... } // from try @ 0351eac4 with catch @ 0351eb18 */
                                        if ((pAVar16 != (ABCMPMHNMAP_o *)0x0) &&
                                           (__this_01 = (pAVar16->fields).ACHJNNOKEDK,
                                           __this_01 !=
                                           (System_Collections_Generic_List_IHDFIJGDCBL__o *)0x0)) {
                    /* try { // try from 0351eb28 to 0361eb2b has its CatchHandler @ 0351eb3c */
                    /* catch() { ... } // from try @ 0351eb28 with catch @ 0351eb3c */
                    /* try { // try from 0351eb44 to 0361ebab has its CatchHandler @ 0351ebc0 */
                                          System_Collections_Generic_List<object>__GetEnumerator
                                                    ((
                                                  System_Collections_Generic_List_Enumerator_T__o *)
                                                  &local_e0,
                                                  (System_Collections_Generic_List_object__o *)
                                                  __this_01,
                                                  Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__
                                                  );
                                          local_80.fields._index = local_e0.fields._version;
                                          local_80.fields._version = local_e0.fields._index;
                                          local_80.fields._list =
                                               (System_Collections_Generic_List_T__o *)
                                               local_e0.fields._dictionary;
                                          local_80.fields._current =
                                               local_e0.fields._current.fields.key;
                                          while (bVar4 = 
                                                  System_Collections_Generic_List_Enumerator<object>__MoveNext
                                                            (&local_80,
                                                                                                                          
                                                  Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__
                                                  ), pIVar3 = local_80.fields._current, bVar4) {
                                            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                                                     (*(pSVar7->klass->vtable)._16_get_Attributes.
                                                       methodPtr)(pSVar7,(pSVar7->klass->vtable).
                                                                         _16_get_Attributes.method);
                                            if ((System_String_o *)pIVar3 == (System_String_o *)0x0)
                                            {
                    /* WARNING: Subroutine does not return */
                                              FUN_01bab8c8();
                                            }
                                            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0
                                               ) {
                    /* WARNING: Subroutine does not return */
                                              FUN_01bab8c8();
                                            }
                                            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                               (pSVar8,(System_String_o *)
                                                                       *(System_String_Fields *)
                                                                        ((long)pIVar3 + 0x10),
                                                                (MethodInfo *)0x0);
                    /* try { // try from 0351ebac to 0361ebb7 has its CatchHandler @ 0351e784 */
                                            if (pSVar9 != (System_Xml_XmlAttribute_o *)0x0) {
                                              __this_03 = (__this->fields).ACHJNNOKEDK;
                                              PMACBPAMPJA = *(System_String_Fields *)
                                                             ((long)pIVar3 + 0x10);
                    /* try { // try from 0351ebb8 to 0361ebbf has its CatchHandler @ 0351ebc0 */
                    /* catch() { ... } // from try @ 0351eb44 with catch @ 0351ebc0
                       catch() { ... } // from try @ 0351ebb8 with catch @ 0351ebc0 */
                                              iVar5 = EIABCPKDEBD__EHJNCGCICMP
                                                                (pSVar9,0,(MethodInfo *)0x0);
                                              if (__this_03 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_01bab8c8();
                                              }
                                              method_00 = (MethodInfo *)0x0;
                                              FPLCEOJCPOD__FOOHBJNHOKK
                                                        (__this_03,(System_String_o *)PMACBPAMPJA,
                                                         iVar5,false,(MethodInfo *)0x0);
                                            }
                                          }
                                          System_Collections_Generic_List_Enumerator<object>__Dispose
                                                    (&local_80,
                                                                                                          
                                                  Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__
                                                  );
                                          pMVar15 = (pSVar7->klass->vtable)._51_get_Item.method;
                                          pSVar12 = (System_Xml_XmlNode_o *)
                                                    (*(pSVar7->klass->vtable)._51_get_Item.methodPtr
                                                    )(pSVar7,StringLiteral_11876);
                                          if (pSVar12 != (System_Xml_XmlNode_o *)0x0) {
                                            HEFOANCOHDC__JJHBIPGAPPG(__this,pSVar12,pMVar15);
                                          }
                                          CVar22 = (
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields
                                                  )
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                                            (0,(MethodInfo *)0x0);
                                          __this_02 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields).NBOMAJCMIIL;
                                          (__this->fields).EMLGCOFGNKH.fields = CVar22;
                                          if (__this_02 !=
                                              (System_Collections_Generic_Dictionary_object__object__o
                                               *)0x0) {
                                            System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                                                      (&local_e0,__this_02,
                                                                                                              
                                                  Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_GetEnumerator__
                                                  );
                                            local_b0.fields._version = local_e0.fields._version;
                                            local_b0.fields._index = local_e0.fields._index;
                                            local_b0.fields._dictionary =
                                                 local_e0.fields._dictionary;
                                            local_b0.fields._current.fields.value =
                                                 local_e0.fields._current.fields.value;
                                            local_b0.fields._current.fields.key =
                                                 local_e0.fields._current.fields.key;
                                            local_b0.fields._getEnumeratorRetType =
                                                 local_e0.fields._getEnumeratorRetType;
                                            local_b0.fields._36_4_ = local_e0.fields._36_4_;
                                            while (bVar4 = 
                                                  System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                                                            (&local_b0,
                                                                                                                          
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_MoveNext__
                                                  ), pIVar3 = local_b0.fields._current.fields.value,
                                                  bVar4) {
                                              bVar4 = System_String__op_Equality
                                                                ((System_String_o *)
                                                                 local_b0.fields._current.fields.key
                                                                 ,*ppSVar20,(MethodInfo *)0x0);
                                              if (bVar4) {
                                                pSVar10 = 
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                                                            ((
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o
                                                  *)pIVar3,(MethodInfo *)0x0);
                                                if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0)
                                                {
                                                  thunk_FUN_01ba7564();
                                                }
                                                bVar4 = PNPPAHHCBOM__MEEKIFOGCCL
                                                                  (pSVar10,&local_b4,
                                                                   (MethodInfo *)0x0);
                                                if (bVar4) {
                                                  iVar5 = -0x80000000;
                                                  if (local_b4 != INFINITY) {
                                                    iVar5 = (int)local_b4;
                                                  }
                                                  CVar22 = (
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields
                                                  )
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                                            (iVar5,(MethodInfo *)0x0);
                                                  (__this->fields).EMLGCOFGNKH.fields = CVar22;
                                                }
                                                else {
                                                  CVar22 = (__this->fields).EMLGCOFGNKH.fields;
                                                }
                                                iVar5 = 
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                                            ((
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                                  CVar22,(MethodInfo *)0x0);
                                                iVar6 = 
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                                            ((
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                                  (__this->fields).EAGEGPKAEKI.fields,
                                                  (MethodInfo *)0x0);
                                                CVar22 = (
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields
                                                  )
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                                            (iVar6 + iVar5,(MethodInfo *)0x0);
                                                (__this->fields).EMLGCOFGNKH.fields = CVar22;
                                              }
                                            }
                                            System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                                                      (&local_b0,
                                                                                                              
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_Dispose__
                                                  );
                                            plVar13 = (long *)(*(pSVar7->klass->vtable).
                                                                _13_get_ChildNodes.methodPtr)
                                                                        (pSVar7,(pSVar7->klass->
                                                                                vtable).
                                                  _13_get_ChildNodes.method);
                                            if (plVar13 != (long *)0x0) {
                                              plVar13 = (long *)(**(code **)(*plVar13 + 0x1b8))
                                                                          (plVar13,*(undefined8 *)
                                                                                    (*plVar13 +
                                                                                    0x1c0));
                                              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_01bab8c8();
                                              }
                                              do {
                                                lVar17 = *plVar13;
                                                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                                if (uVar18 != 0) {
                                                  piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                                  do {
                                                    if (*(System_Collections_IEnumerator_c **)
                                                         (piVar19 + -2) ==
                                                        System_Collections_IEnumerator_TypeInfo) {
                                                      puVar14 = (undefined8 *)
                                                                (lVar17 + (long)*piVar19 * 0x10 +
                                                                0x138);
                                                      goto LAB_0351edbc;
                                                    }
                                                    uVar18 = uVar18 - 1;
                                                    piVar19 = piVar19 + 4;
                                                  } while (uVar18 != 0);
                                                }
                                                puVar14 = (undefined8 *)
                                                          FUN_01b81914(plVar13,
                                                  System_Collections_IEnumerator_TypeInfo,0);
LAB_0351edbc:
                                                uVar18 = (*(code *)*puVar14)(plVar13,puVar14[1]);
                                                if ((uVar18 & 1) == 0) {
                                                  plVar13 = (long *)thunk_FUN_01bda71c(plVar13,
                                                  System_IDisposable_TypeInfo);
                                                  if (plVar13 == (long *)0x0) goto LAB_0351ef14;
                                                  lVar17 = *plVar13;
                                                  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                                  if (uVar18 == 0) goto LAB_0351eeec;
                                                  piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                                  goto LAB_0351eed4;
                                                }
                                                lVar17 = *plVar13;
                                                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                                if (uVar18 != 0) {
                                                  piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                                  do {
                                                    if (*(System_Collections_IEnumerator_c **)
                                                         (piVar19 + -2) ==
                                                        System_Collections_IEnumerator_TypeInfo) {
                                                      puVar14 = (undefined8 *)
                                                                (lVar17 + (long)(*piVar19 + 1) *
                                                                          0x10 + 0x138);
                                                      goto LAB_0351ee1c;
                                                    }
                                                    uVar18 = uVar18 - 1;
                                                    piVar19 = piVar19 + 4;
                                                  } while (uVar18 != 0);
                                                }
                                                puVar14 = (undefined8 *)
                                                          FUN_01b81914(plVar13,
                                                  System_Collections_IEnumerator_TypeInfo,1);
LAB_0351ee1c:
                                                pSVar12 = (System_Xml_XmlNode_o *)
                                                          (*(code *)*puVar14)(plVar13,puVar14[1]);
                                                if (pSVar12 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                  FUN_01bab8c8();
                                                }
                                                bVar1 = (System_Xml_XmlNode_TypeInfo->_2).
                                                        naturalAligment;
                                                if (((pSVar12->klass->_2).naturalAligment < bVar1)
                                                   || ((pSVar12->klass->_2).typeHierarchy
                                                       [(ulong)bVar1 - 1] !=
                                                       (Il2CppClass *)System_Xml_XmlNode_TypeInfo))
                                                {
                    /* WARNING: Subroutine does not return */
                                                  FUN_01babc64(pSVar12);
                                                }
                                                pSVar10 = (System_String_o *)
                                                          (*(pSVar12->klass->vtable)._8_unknown.
                                                            methodPtr)(pSVar12,(pSVar12->klass->
                                                                               vtable)._8_unknown.
                                                                               method);
                                                pMVar15 = (MethodInfo *)0x0;
                                                bVar4 = System_String__op_Equality
                                                                  (pSVar10,StringLiteral_13924,
                                                                   (MethodInfo *)0x0);
                                                if (bVar4) {
                                                  HEFOANCOHDC__PLEKILLMEEK(__this,pSVar12,pMVar15);
                                                  HEFOANCOHDC__IAPPOPBLBHP(__this,pSVar12,pMVar15);
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
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_0351eed4:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0351ef08;
    }
  }
LAB_0351eeec:
  puVar14 = (undefined8 *)FUN_01b81914(plVar13,System_IDisposable_TypeInfo,0);
LAB_0351ef08:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_0351ef14:
  pSVar7 = (System_Xml_XmlNode_o *)
           (*(pSVar7->klass->vtable)._51_get_Item.methodPtr)
                     (pSVar7,StringLiteral_11030,(pSVar7->klass->vtable)._51_get_Item.method);
  if (pSVar7 != (System_Xml_XmlNode_o *)0x0) {
    HEFOANCOHDC__OOPHKKNELPB(__this,pSVar7,(__this->fields).NBOMAJCMIIL,method_00);
  }
  return;
}

