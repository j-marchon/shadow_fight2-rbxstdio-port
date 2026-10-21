// JCHNBADDBGO$$GKJKNKCEMPN @ RVA 0x32FEDB0

void JCHNBADDBGO__GKJKNKCEMPN
               (JCHNBADDBGO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t EBDDELGICGB;
  int32_t JLAFGLDIFOC;
  HOOAAGABMBL_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  System_Xml_XmlAttributeCollection_o *__this_02;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  IGFGDDANEPE_o *__this_03;
  IGFGDDANEPE_o **ppIVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456770c & 1) == 0) {
    FUN_01bab630(&HOOAAGABMBL_TypeInfo);
    FUN_01bab630(&IGFGDDANEPE_TypeInfo);
    FUN_01bab630(&JCHNBADDBGO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8095);
    FUN_01bab630(&StringLiteral_9067);
    DAT_0456770c = 1;
  }
  __this_00 = (HOOAAGABMBL_o *)thunk_FUN_01bda818(HOOAAGABMBL_TypeInfo);
  HOOAAGABMBL___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
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
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_01 != (ACHLOMELAJE_o *)0x0) {
    EBDDELGICGB = ACHLOMELAJE__EOEAKGGDBFH(__this_01,(MethodInfo *)0x0);
    if ((__this_00 != (HOOAAGABMBL_o *)0x0) && (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) {
      pSVar3 = (__this_00->fields)._COIPKAKHDFP_k__BackingField;
      __this_02 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (__this_02 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_02,StringLiteral_9067,(MethodInfo *)0x0);
        JLAFGLDIFOC = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
        __this_03 = (IGFGDDANEPE_o *)thunk_FUN_01bda818(IGFGDDANEPE_TypeInfo);
        IGFGDDANEPE___ctor(__this_03,EBDDELGICGB,AHDGNOJPPIB,pSVar3,false,1,JLAFGLDIFOC,0,0,true,
                           StringLiteral_8095,(MethodInfo *)0x0);
        ppIVar2 = &(__this->fields).DPCOEJPACKA;
        *ppIVar2 = __this_03;
        thunk_FUN_01c20e04(ppIVar2,__this_03);
        if (*ppIVar2 != (IGFGDDANEPE_o *)0x0) {
          IGFGDDANEPE__CLIDHHJIGOC(*ppIVar2,__this_00,(MethodInfo *)0x0);
          if (((__this->fields).HHCHGNIMDJK == false) && (*ppIVar2 != (IGFGDDANEPE_o *)0x0)) {
            pSVar3 = ((*ppIVar2)->fields).NPFMOEOIEKM;
            if ((JCHNBADDBGO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 033fefb8 to 034ff47b has its CatchHandler @ 033fefb8
                       catch() { ... } // from try @ 033fefb8 with catch @ 033fefb8
                       catch() { ... } // from try @ 033ff68c with catch @ 033fefb8
                       catch() { ... } // from try @ 033ff9c4 with catch @ 033fefb8
                       catch() { ... } // from try @ 033ff9d0 with catch @ 033fefb8
                       catch() { ... } // from try @ 033ffa1c with catch @ 033fefb8
                       catch() { ... } // from try @ 033ffb4c with catch @ 033fefb8 */
            bVar1 = PCOEHCPGBBG__JLHMNJLHNBO
                              (pSVar3,(System_Collections_Generic_IEnumerable_string__o *)
                                      JCHNBADDBGO_TypeInfo->static_fields->AMAMBMDFBOF,
                               (MethodInfo *)0x0);
            if (bVar1) {
              (__this->fields).HHCHGNIMDJK = true;
            }
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

