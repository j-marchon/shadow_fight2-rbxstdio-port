// TypeDefIndex 3349
// Namespace: 
// public class AJLPMEBENAE : JCHNBADDBGO
// Fields:

// ===== protected override void GKJKNKCEMPN(XmlNode AHDGNOJPPIB)  [RVA 0x3535CFC]
// AJLPMEBENAE$$GKJKNKCEMPN @ RVA 0x3535CFC

void AJLPMEBENAE__GKJKNKCEMPN
               (AJLPMEBENAE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t JLAFGLDIFOC;
  bool bVar1;
  int32_t EBDDELGICGB;
  HOOAAGABMBL_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  IGFGDDANEPE_o *__this_02;
  IGFGDDANEPE_o **ppIVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04568a8e & 1) == 0) {
    FUN_01bab630(&HOOAAGABMBL_TypeInfo);
    FUN_01bab630(&IGFGDDANEPE_TypeInfo);
    FUN_01bab630(&JCHNBADDBGO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    DAT_04568a8e = 1;
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
    if (__this_00 != (HOOAAGABMBL_o *)0x0) {
      pSVar3 = (__this_00->fields)._COIPKAKHDFP_k__BackingField;
      JLAFGLDIFOC = (__this_00->fields)._HCHGENFJLHA_k__BackingField;
      __this_02 = (IGFGDDANEPE_o *)thunk_FUN_01bda818(IGFGDDANEPE_TypeInfo);
      IGFGDDANEPE___ctor(__this_02,EBDDELGICGB,AHDGNOJPPIB,pSVar3,false,1,JLAFGLDIFOC,0,0,true,
                         StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
      ppIVar2 = &(__this->fields).super.DPCOEJPACKA;
      *ppIVar2 = __this_02;
      thunk_FUN_01c20e04(ppIVar2,__this_02);
      if (*ppIVar2 != (IGFGDDANEPE_o *)0x0) {
        IGFGDDANEPE__CLIDHHJIGOC(*ppIVar2,__this_00,(MethodInfo *)0x0);
        if (((__this->fields).super.HHCHGNIMDJK == false) && (*ppIVar2 != (IGFGDDANEPE_o *)0x0)) {
          pSVar3 = ((*ppIVar2)->fields).NPFMOEOIEKM;
          if ((JCHNBADDBGO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = PCOEHCPGBBG__JLHMNJLHNBO
                            (pSVar3,(System_Collections_Generic_IEnumerable_string__o *)
                                    JCHNBADDBGO_TypeInfo->static_fields->AMAMBMDFBOF,
                             (MethodInfo *)0x0);
          if (bVar1) {
            (__this->fields).super.HHCHGNIMDJK = true;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3535EE0]
// AJLPMEBENAE$$.ctor @ RVA 0x3535EE0

void AJLPMEBENAE___ctor(AJLPMEBENAE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  if ((DAT_04568a8f & 1) == 0) {
    FUN_01bab630(&JCHNBADDBGO_TypeInfo);
    DAT_04568a8f = 1;
  }
  if ((JCHNBADDBGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JCHNBADDBGO___ctor((JCHNBADDBGO_o *)__this,AHDGNOJPPIB,true,(MethodInfo *)0x0);
  (__this->fields).super.MPIICPLOKLF = true;
  return;
}

