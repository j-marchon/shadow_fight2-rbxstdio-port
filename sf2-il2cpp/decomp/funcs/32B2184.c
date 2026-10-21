// FCNNPBIIEOK$$POCBAMDFNGM @ RVA 0x32B2184

void FCNNPBIIEOK__POCBAMDFNGM
               (JMDPBFOCHHP_BEGFIIECDMN_o *IMMNELPBGIF,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  long lVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  NLPJLHOEAOE_o *pNVar6;
  NLPJLHOEAOE_NNODIMKLNFM_o *pNVar7;
  ADGIHFGIFHO_o *pAVar8;
  System_Xml_XmlNode_o **ppSVar9;
  System_Collections_Generic_List_IHDFIJGDCBL__o *__this;
  FPLCEOJCPOD_o *pFVar10;
  ulong uVar11;
  ABCMPMHNMAP_o *pAVar12;
  ADGIHFGIFHO_o **ppAVar13;
  Il2CppClass *PMACBPAMPJA;
  PJKHAJKEHEL_o *pPVar14;
  System_String_o **ppSVar15;
  System_String_o *pSVar16;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  ulong uVar17;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  int32_t local_44;
  
  if ((DAT_04567443 & 1) == 0) {
    FUN_01bab630(&ADGIHFGIFHO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_5061);
    FUN_01bab630(&StringLiteral_10999);
    FUN_01bab630(&StringLiteral_6922);
    FUN_01bab630(&StringLiteral_5255);
    FUN_01bab630(&StringLiteral_12864);
    DAT_04567443 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_44 = 0;
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  lVar3 = FUN_01bab718(string___TypeInfo,2);
  if (lVar3 == 0) goto LAB_033b2614;
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = StringLiteral_5061;
    thunk_FUN_01c20e04((undefined8 *)(lVar3 + 0x20));
    if (1 < *(uint *)(lVar3 + 0x18)) {
      *(undefined8 *)(lVar3 + 0x28) = StringLiteral_5255;
      thunk_FUN_01c20e04((undefined8 *)(lVar3 + 0x28));
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar17 = 0;
        uVar11 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar11 <= uVar17) goto LAB_033b2624;
          pSVar16 = *(System_String_o **)(lVar3 + 0x20 + uVar17 * 8);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_033b2614;
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar4,pSVar16,(MethodInfo *)0x0);
          if (pSVar5 != (System_Xml_XmlAttribute_o *)0x0) {
            if (IMMNELPBGIF == (JMDPBFOCHHP_BEGFIIECDMN_o *)0x0) goto LAB_033b2614;
            __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
                        (IMMNELPBGIF->fields).GJCCGCCOJCO;
            iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
            if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0)
            goto LAB_033b2614;
            System_Collections_Generic_Dictionary<object,_int>__set_Item
                      (__this_00,(Il2CppObject *)pSVar16,iVar2,
                       Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
          }
          uVar11 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar17 = uVar17 + 1;
        } while ((long)uVar17 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_12864,(MethodInfo *)0x0);
        pPVar14 = (PJKHAJKEHEL_o *)0x0;
        if (pSVar5 != (System_Xml_XmlAttribute_o *)0x0) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pNVar6 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
          pSVar16 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
          if (pNVar6 == (NLPJLHOEAOE_o *)0x0) goto LAB_033b2614;
          pNVar7 = NLPJLHOEAOE__ADKMBOALAKN(pNVar6,pSVar16,(MethodInfo *)0x0);
          if (pNVar7 == (NLPJLHOEAOE_NNODIMKLNFM_o *)0x0) {
            pPVar14 = (PJKHAJKEHEL_o *)0x0;
          }
          else {
            pPVar14 = (pNVar7->fields).BAKIMFMMFMP;
          }
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar6 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if ((pNVar6 != (NLPJLHOEAOE_o *)0x0) &&
           (pPVar14 = NLPJLHOEAOE__MDEGKNMDKPN(pNVar6,AHDGNOJPPIB,pPVar14,true,(MethodInfo *)0x0),
           pPVar14 != (PJKHAJKEHEL_o *)0x0)) {
          (*(pPVar14->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                    (pPVar14,(pPVar14->klass->vtable)._7_LBNKPLKIIOP.method);
          pAVar8 = (ADGIHFGIFHO_o *)thunk_FUN_01bda818(ADGIHFGIFHO_TypeInfo);
          ADGIHFGIFHO___ctor(pAVar8,pPVar14,(MethodInfo *)0x0);
          if (IMMNELPBGIF != (JMDPBFOCHHP_BEGFIIECDMN_o *)0x0) {
            ppAVar13 = &(IMMNELPBGIF->fields).HCOMKFDFPEK;
            *ppAVar13 = pAVar8;
            thunk_FUN_01c20e04(ppAVar13,pAVar8);
            pAVar8 = *ppAVar13;
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_6922,(MethodInfo *)0x0);
              pSVar16 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
              if (pAVar8 != (ADGIHFGIFHO_o *)0x0) {
                ppSVar15 = &(pAVar8->fields).super.LBNOMMMFDJE;
                *ppSVar15 = pSVar16;
                thunk_FUN_01c20e04(ppSVar15,pSVar16);
                pAVar8 = *ppAVar13;
                pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar4,StringLiteral_10999,(MethodInfo *)0x0);
                  iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
                  if (pAVar8 != (ADGIHFGIFHO_o *)0x0) {
                    (pAVar8->fields).super.PPKEAHBFAAM = iVar2;
                    if (*ppAVar13 != (ADGIHFGIFHO_o *)0x0) {
                      ppSVar9 = &((*ppAVar13)->fields).super.JHFENACKNPG;
                      *ppSVar9 = AHDGNOJPPIB;
                      thunk_FUN_01c20e04(ppSVar9,AHDGNOJPPIB);
                      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pAVar12 = MGNPHCAAEIO_TypeInfo->static_fields->EDKELIKNDEP;
                      if ((pAVar12 != (ABCMPMHNMAP_o *)0x0) &&
                         (__this = (pAVar12->fields).ACHJNNOKEDK,
                         __this != (System_Collections_Generic_List_IHDFIJGDCBL__o *)0x0)) {
                        System_Collections_Generic_List<object>__GetEnumerator
                                  (&local_88,(System_Collections_Generic_List_object__o *)__this,
                                   Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__
                                  );
                        local_70.fields._index = local_88.fields._index;
                        local_70.fields._version = local_88.fields._version;
                        local_70.fields._list = local_88.fields._list;
                        local_70.fields._current = local_88.fields._current;
                        while( true ) {
                          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                            (&local_70,
                                             Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__
                                            );
                          if (!bVar1) {
                            System_Collections_Generic_List_Enumerator<object>__Dispose
                                      (&local_70,
                                       Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__
                                      );
                            return;
                          }
                          if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          PMACBPAMPJA = local_70.fields._current[1].klass;
                          local_44 = 0;
                          if (*ppAVar13 == (ADGIHFGIFHO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pFVar10 = ((*ppAVar13)->fields).super.NIDLHDFNACM;
                          if (pFVar10 == (FPLCEOJCPOD_o *)0x0) break;
                          bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                                            (pFVar10,(System_String_o *)PMACBPAMPJA,&local_44,true,
                                             false,(MethodInfo *)0x0);
                          if (local_44 != 0) {
                            if (*ppAVar13 == (ADGIHFGIFHO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8(bVar1);
                            }
                            pFVar10 = ((*ppAVar13)->fields).super.ACHJNNOKEDK;
                            if (pFVar10 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            FPLCEOJCPOD__FOOHBJNHOKK
                                      (pFVar10,(System_String_o *)PMACBPAMPJA,local_44,false,
                                       (MethodInfo *)0x0);
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_033b2614:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_033b2624:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

