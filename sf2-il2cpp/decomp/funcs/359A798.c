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
    FUN_01bab630(&StringLiteral_13814);
    FUN_01bab630(&StringLiteral_5750);
    FUN_01bab630(&StringLiteral_9327);
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
                       ((pLVar5->fields)._OLIGHNIEIGK_k__BackingField,StringLiteral_13814,
                        (MethodInfo *)0x0);
    ppSVar6 = &(__this->fields)._OLIGHNIEIGK_k__BackingField;
    *ppSVar6 = (System_Xml_XmlNode_o *)pSVar1;
    thunk_FUN_01c20e04(ppSVar6,pSVar1);
    pSVar2 = EIABCPKDEBD__HBGAGFJBGKD(*ppSVar6,StringLiteral_9327,(MethodInfo *)0x0);
    if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
      (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                (pSVar2,(__this->fields)._COIPKAKHDFP_k__BackingField,
                 (pSVar2->klass->vtable)._10_set_Value.method);
      pSVar2 = EIABCPKDEBD__HBGAGFJBGKD
                         ((__this->fields)._OLIGHNIEIGK_k__BackingField,StringLiteral_5750,
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

