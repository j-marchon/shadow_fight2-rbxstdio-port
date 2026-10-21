// TypeDefIndex 296
// Namespace: 
// public class OEBAPDOPOBH : QuestAction
// Fields:
//   private string MOMNHMKOKAN; // 0x68
//   private CCLKPGBIBOP KJAPDIOFGHP; // 0x70

// ===== public void .ctor()  [RVA 0x323790C]
// OEBAPDOPOBH$$.ctor @ RVA 0x323790C

void OEBAPDOPOBH___ctor(OEBAPDOPOBH_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3237914]
// OEBAPDOPOBH$$HNIHOIAMDPC @ RVA 0x3237914

void OEBAPDOPOBH__HNIHOIAMDPC
               (OEBAPDOPOBH_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  CCLKPGBIBOP_o **ppCVar2;
  
  if ((DAT_04567034 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10068/*"Pack"*/);
    DAT_04567034 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_10068/*"Pack"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).MOMNHMKOKAN = pSVar1;
      thunk_FUN_01c20e04();
      ppCVar2 = &(__this->fields).KJAPDIOFGHP;
      *ppCVar2 = (CCLKPGBIBOP_o *)0x0;
      thunk_FUN_01c20e04(ppCVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x32379BC]
// OEBAPDOPOBH$$MAHFCKJGBPP @ RVA 0x32379BC

void OEBAPDOPOBH__MAHFCKJGBPP(OEBAPDOPOBH_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  GCPFDLNAFDF_o *pGVar3;
  VirtualInvokeData *pVVar4;
  DADDKDFBPIJ_T__o *__this_00;
  CCLKPGBIBOP_o *pCVar5;
  System_String_o *pSVar6;
  System_Object_array *pSVar7;
  long lVar8;
  AAPGCAPGBLG_o *__this_01;
  CFGLKHFFEKA_o *pCVar9;
  System_String_o *CEHOJOFLMFF;
  undefined8 uVar10;
  GCPFDLNAFDF_c *pGVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_String_o *pSVar14;
  CCLKPGBIBOP_o **ppCVar15;
  
  if ((DAT_04567035 & 1) == 0) {
    FUN_01bab630(&Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&HHMDFAMGHPB_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10656/*"QuestActionPackCheckCache: can't find pack by name - '{0}'!"*/);
    FUN_01bab630(&StringLiteral_22364/*"{0}/{1}"*/);
    FUN_01bab630(&StringLiteral_10657/*"QuestActionPackCheckCache: detected valid cache for pack - '{0}', restore completed!"*/);
    DAT_04567035 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar14 = (__this->fields).MOMNHMKOKAN;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar14 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar14,(MethodInfo *)0x0);
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
  }
  pGVar3 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar3 != (GCPFDLNAFDF_o *)0x0) {
    pGVar11 = pGVar3->klass;
    uVar1._0_1_ = (pGVar11->_2).rank;
    uVar1._1_1_ = (pGVar11->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar13 = &((pGVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)HHMDFAMGHPB_TypeInfo) {
          pVVar4 = pGVar11->vtable + *piVar13;
          goto LAB_03337b2c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pGVar3,HHMDFAMGHPB_TypeInfo,0);
LAB_03337b2c:
    __this_00 = (DADDKDFBPIJ_T__o *)(*pVVar4->methodPtr)(pGVar3,pVVar4->method);
    if (__this_00 != (DADDKDFBPIJ_T__o *)0x0) {
      pCVar5 = (CCLKPGBIBOP_o *)
               DADDKDFBPIJ<object>__COMOKILJDGJ
                         (__this_00,pSVar14,Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
      ppCVar15 = &(__this->fields).KJAPDIOFGHP;
      *ppCVar15 = pCVar5;
      thunk_FUN_01c20e04(ppCVar15,pCVar5);
      if (*ppCVar15 == (CCLKPGBIBOP_o *)0x0) {
        pSVar7 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if (pSVar7 != (System_Object_array *)0x0) {
          if ((pSVar14 != (System_String_o *)0x0) &&
             (lVar8 = thunk_FUN_01bda71c(pSVar14,(((pSVar7->obj).klass)->_1).element_class),
             lVar8 == 0)) {
LAB_03337d80:
            uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar10,0);
          }
          if ((int)pSVar7->max_length == 0) {
LAB_03337d7c:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pSVar7->m_Items[0] = (Il2CppObject *)pSVar14;
          thunk_FUN_01c20e04(pSVar7->m_Items,pSVar14);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10656/*"QuestActionPackCheckCache: can't find pack by name - '{0}'!"*/,pSVar7,(MethodInfo *)0x0);
          goto LAB_03337d5c;
        }
      }
      else {
        if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar6 = SF2Paths__JKLFLNNFEMP((MethodInfo *)0x0);
        if (*ppCVar15 != (CCLKPGBIBOP_o *)0x0) {
          pSVar6 = System_String__Format
                             (StringLiteral_22364/*"{0}/{1}"*/,(Il2CppObject *)pSVar6,
                              (Il2CppObject *)((*ppCVar15)->fields)._COIPKAKHDFP_k__BackingField,
                              (MethodInfo *)0x0);
          bVar2 = NEHNBJKKABI__HALDCNGHJCO(pSVar6,(MethodInfo *)0x0);
          if (!bVar2) {
LAB_03337d5c:
            QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
            return;
          }
          pSVar6 = IAGNPGHOAIC__HLLOEIGKDPL(pSVar6,(MethodInfo *)0x0);
          if (*ppCVar15 != (CCLKPGBIBOP_o *)0x0) {
            bVar2 = System_String__op_Equality
                              (pSVar6,((*ppCVar15)->fields)._JKGLJFGKPNN_k__BackingField,
                               (MethodInfo *)0x0);
            if (!bVar2) goto LAB_03337d5c;
            pSVar7 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
            if (pSVar7 != (System_Object_array *)0x0) {
              if ((pSVar14 != (System_String_o *)0x0) &&
                 (lVar8 = thunk_FUN_01bda71c(pSVar14,(((pSVar7->obj).klass)->_1).element_class),
                 lVar8 == 0)) goto LAB_03337d80;
              if ((int)pSVar7->max_length == 0) goto LAB_03337d7c;
              pSVar7->m_Items[0] = (Il2CppObject *)pSVar14;
              thunk_FUN_01c20e04(pSVar7->m_Items,pSVar14);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogFormat(StringLiteral_10657/*"QuestActionPackCheckCache: detected valid cache for pack - '{0}', restore completed!"*/,pSVar7,(MethodInfo *)0x0);
              __this_01 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
              pCVar5 = *ppCVar15;
              if (pCVar5 != (CCLKPGBIBOP_o *)0x0) {
                pSVar14 = (pCVar5->fields)._COIPKAKHDFP_k__BackingField;
                pSVar6 = (pCVar5->fields)._HOHLBKMCIDD_k__BackingField;
                if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pCVar9 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
                if (pCVar9 != (CFGLKHFFEKA_o *)0x0) {
                  CEHOJOFLMFF = (System_String_o *)
                                (*(pCVar9->klass->vtable)._3_ToString.methodPtr)
                                          (pCVar9,(pCVar9->klass->vtable)._3_ToString.method);
                  pCVar5 = *ppCVar15;
                  if ((pCVar5 != (CCLKPGBIBOP_o *)0x0) && (__this_01 != (AAPGCAPGBLG_o *)0x0)) {
                    AAPGCAPGBLG__OPHDBLMDKJD
                              (__this_01,pSVar14,pSVar6,CEHOJOFLMFF,-1,
                               (pCVar5->fields)._BNIHGHLPOHB_k__BackingField,
                               (pCVar5->fields)._JKGLJFGKPNN_k__BackingField,0,(MethodInfo *)0x0);
                    goto LAB_03337d5c;
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

