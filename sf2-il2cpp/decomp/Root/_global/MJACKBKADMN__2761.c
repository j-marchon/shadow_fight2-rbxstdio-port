// TypeDefIndex 2761
// Namespace: 
// public class MJACKBKADMN : JCHNBADDBGO
// Fields:
//   private string OAKCHEGKLBP; // 0x68

// ===== public void KFPIKBGFKBC()  [RVA 0x33FB9A0]
// MJACKBKADMN$$KFPIKBGFKBC @ RVA 0x33FB9A0

void MJACKBKADMN__KFPIKBGFKBC(MJACKBKADMN_o *__this,MethodInfo *method)

{
  bool bVar1;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *pIVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar3;
  IGFGDDANEPE_o **ppIVar4;
  System_String_o *JGHIJMJNJLE;
  
  if ((DAT_04567fba & 1) == 0) {
    FUN_01bab630(&JCHNBADDBGO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567fba = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar3->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    pIVar2 = GGHCLMEFIGO__DOIFEOAFLDI(__this_00,(__this->fields).OAKCHEGKLBP,(MethodInfo *)0x0);
    ppIVar4 = &(__this->fields).super.DPCOEJPACKA;
    *ppIVar4 = pIVar2;
    thunk_FUN_01c20e04(ppIVar4,pIVar2);
    if (((__this->fields).super.HHCHGNIMDJK == false) && (*ppIVar4 != (IGFGDDANEPE_o *)0x0)) {
      JGHIJMJNJLE = ((*ppIVar4)->fields).NPFMOEOIEKM;
      if ((JCHNBADDBGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = PCOEHCPGBBG__JLHMNJLHNBO
                        (JGHIJMJNJLE,
                         (System_Collections_Generic_IEnumerable_string__o *)
                         JCHNBADDBGO_TypeInfo->static_fields->AMAMBMDFBOF,(MethodInfo *)0x0);
      if (bVar1) {
        (__this->fields).super.HHCHGNIMDJK = true;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x33FBABC]
// MJACKBKADMN$$.ctor @ RVA 0x33FBABC

void MJACKBKADMN___ctor(MJACKBKADMN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  if ((DAT_04567fbb & 1) == 0) {
    FUN_01bab630(&JCHNBADDBGO_TypeInfo);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567fbb = 1;
  }
  if ((JCHNBADDBGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JCHNBADDBGO___ctor((JCHNBADDBGO_o *)__this,AHDGNOJPPIB,false,(MethodInfo *)0x0);
  AJNNHGGLGIF__GNLPNKGBAFL((AJNNHGGLGIF_o *)__this,2,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).OAKCHEGKLBP = pSVar1;
      thunk_FUN_01c20e04();
      MJACKBKADMN__KFPIKBGFKBC(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void GKJKNKCEMPN()  [RVA 0x33FBBB0]
// MJACKBKADMN$$GKJKNKCEMPN @ RVA 0x33FBBB0

void MJACKBKADMN__GKJKNKCEMPN(MJACKBKADMN_o *__this,MethodInfo *method)

{
  return;
}

