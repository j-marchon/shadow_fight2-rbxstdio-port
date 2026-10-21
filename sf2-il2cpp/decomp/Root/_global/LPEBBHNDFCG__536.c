// TypeDefIndex 536
// Namespace: 
// public class LPEBBHNDFCG
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x10
//   private long <PGKPHJLHJCO>k__BackingField; // 0x18
//   private XmlNode <OLIGHNIEIGK>k__BackingField; // 0x20

// ===== public string KCHJCGEMCGE()  [RVA 0x359A5A4]
// LPEBBHNDFCG$$KCHJCGEMCGE @ RVA 0x359A5A4

System_String_o * LPEBBHNDFCG__KCHJCGEMCGE(LPEBBHNDFCG_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public void IIDNKPHCCMG(long CJNHFNHJHPE)  [RVA 0x359A5AC]
// LPEBBHNDFCG$$IIDNKPHCCMG @ RVA 0x359A5AC

void LPEBBHNDFCG__IIDNKPHCCMG(LPEBBHNDFCG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PGKPHJLHJCO_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public XmlNode NBLFIEEHECP()  [RVA 0x359A5B4]
// LPEBBHNDFCG$$NBLFIEEHECP @ RVA 0x359A5B4

System_Xml_XmlNode_o * LPEBBHNDFCG__NBLFIEEHECP(LPEBBHNDFCG_o *__this,MethodInfo *method)

{
  return (__this->fields)._OLIGHNIEIGK_k__BackingField;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x359A5BC]
// LPEBBHNDFCG$$.ctor @ RVA 0x359A5BC

void LPEBBHNDFCG___ctor(LPEBBHNDFCG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  int64_t iVar6;
  System_Xml_XmlNode_o **ppSVar7;
  
  if ((DAT_04568dbc & 1) == 0) {
    FUN_01bab630(&StringLiteral_5750/*"EndTime"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568dbc = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar7 = &(__this->fields)._OLIGHNIEIGK_k__BackingField;
  *ppSVar7 = AHDGNOJPPIB;
  thunk_FUN_01c20e04(ppSVar7,AHDGNOJPPIB);
  pSVar2 = *ppSVar7;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(*ppSVar7,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_0369a794;
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,StringLiteral_1/*""*/,(pSVar4->klass->vtable)._10_set_Value.method);
      }
      pSVar2 = *ppSVar7;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_5750/*"EndTime"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
          if (bVar1) {
                    /* try { // try from 0369a6e0 to 0379a6e7 has its CatchHandler @ 0369ac6c */
            pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(*ppSVar7,StringLiteral_5750/*"EndTime"*/,(MethodInfo *)0x0);
            if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_0369a794;
                    /* try { // try from 0369a6fc to 0379a703 has its CatchHandler @ 0369ac68 */
            (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar4,StringLiteral_1567/*"0"*/,(pSVar4->klass->vtable)._10_set_Value.method);
          }
          pSVar2 = *ppSVar7;
          if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
              pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 0369a73c to 0379a743 has its CatchHandler @ 0369ac58 */
              (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar5;
                    /* try { // try from 0369a744 to 0379ac43 has its CatchHandler @ 0369a494 */
              thunk_FUN_01c20e04(&__this->fields,pSVar5);
              pSVar2 = (__this->fields)._OLIGHNIEIGK_k__BackingField;
              if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                         (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                                   (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
                if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar3,StringLiteral_5750/*"EndTime"*/,(MethodInfo *)0x0);
                  iVar6 = EIABCPKDEBD__HNIGPBMJJOL(pSVar4,0,(MethodInfo *)0x0);
                  (__this->fields)._PGKPHJLHJCO_k__BackingField = iVar6;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0369a794:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(string KGLJICLJHEL, long MMFDFGIMKPJ)  [RVA 0x359A798]
// LPEBBHNDFCG$$.ctor @ RVA 0x359A798

void LPEBBHNDFCG___ctor(LPEBBHNDFCG_o *__this,System_String_o *KGLJICLJHEL,int64_t MMFDFGIMKPJ,
                       MethodInfo *method)

{
  System_Xml_XmlElement_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  ACHLOMELAJE_o *pAVar4;
  LAMJOHEKJNJ_o *pLVar5;
  System_Xml_XmlNode_o **ppSVar6;
  int64_t local_38;
  
  if ((DAT_04568dbd & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_13814/*"Timer"*/);
    FUN_01bab630(&StringLiteral_5750/*"EndTime"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04568dbd = 1;
  }
  local_38 = 0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._COIPKAKHDFP_k__BackingField = KGLJICLJHEL;
  thunk_FUN_01c20e04(&__this->fields,KGLJICLJHEL);
  (__this->fields)._PGKPHJLHJCO_k__BackingField = MMFDFGIMKPJ;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
     (pLVar5 = (pAVar4->fields)._DDGPMHMNKNA_k__BackingField, pLVar5 != (LAMJOHEKJNJ_o *)0x0)) {
    pSVar1 = EIABCPKDEBD__BHPIHHJHELJ
                       ((pLVar5->fields)._OLIGHNIEIGK_k__BackingField,StringLiteral_13814/*"Timer"*/,
                        (MethodInfo *)0x0);
    ppSVar6 = &(__this->fields)._OLIGHNIEIGK_k__BackingField;
    *ppSVar6 = (System_Xml_XmlNode_o *)pSVar1;
    thunk_FUN_01c20e04(ppSVar6,pSVar1);
    pSVar2 = EIABCPKDEBD__HBGAGFJBGKD(*ppSVar6,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
      (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                (pSVar2,(__this->fields)._COIPKAKHDFP_k__BackingField,
                 (pSVar2->klass->vtable)._10_set_Value.method);
      pSVar2 = EIABCPKDEBD__HBGAGFJBGKD
                         ((__this->fields)._OLIGHNIEIGK_k__BackingField,StringLiteral_5750/*"EndTime"*/,
                          (MethodInfo *)0x0);
      local_38 = (__this->fields)._PGKPHJLHJCO_k__BackingField;
      pSVar3 = System_UInt64__ToString((uint64_t)&local_38,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long AMAGGHOJKKC()  [RVA 0x359A938]
// LPEBBHNDFCG$$AMAGGHOJKKC @ RVA 0x359A938

int64_t LPEBBHNDFCG__AMAGGHOJKKC(LPEBBHNDFCG_o *__this,MethodInfo *method)

{
  return (__this->fields)._PGKPHJLHJCO_k__BackingField;
}


// ===== private void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x359A940]
// LPEBBHNDFCG$$HCOCAAIGNNL @ RVA 0x359A940

void LPEBBHNDFCG__HCOCAAIGNNL(LPEBBHNDFCG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void EBHKHMHKPEP(XmlNode CJNHFNHJHPE)  [RVA 0x359A948]
// LPEBBHNDFCG$$EBHKHMHKPEP @ RVA 0x359A948

void LPEBBHNDFCG__EBHKHMHKPEP
               (LPEBBHNDFCG_o *__this,System_Xml_XmlNode_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OLIGHNIEIGK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

