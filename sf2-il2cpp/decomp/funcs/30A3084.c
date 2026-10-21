// IGFGDDANEPE$$.ctor @ RVA 0x30A3084

void IGFGDDANEPE___ctor(IGFGDDANEPE_o *__this,int32_t EBDDELGICGB,HOOAAGABMBL_o *IHGFKLOLPOK,
                       bool FCPLINEFDIO,int32_t DFIBGGDJPLM,int32_t JLAFGLDIFOC,int64_t LFJGFLNMBMC,
                       int32_t LDPENJNJGDI,bool DJMBGIPJDNA,System_String_o *NMABNFMBFJF,
                       MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar1;
  System_Xml_XmlElement_o *AHDGNOJPPIB;
  ACHLOMELAJE_o *pAVar2;
  MethodInfo *in_stack_ffffffffffffff88;
  
  if ((DAT_04566158 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8095);
    DAT_04566158 = 1;
  }
  __this_00 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
  ppSVar1 = &(__this->fields).PAPANCDPPIF;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).APCAEINELHJ = 0x34;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).APCAEINELHJ = EBDDELGICGB;
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    if ((pAVar2->fields).LNPJFGHNPFN != (System_Xml_XmlNode_o *)0x0) {
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
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar2 == (ACHLOMELAJE_o *)0x0) ||
         (AHDGNOJPPIB = EIABCPKDEBD__BHPIHHJHELJ
                                  ((pAVar2->fields).LNPJFGHNPFN,StringLiteral_8095,(MethodInfo *)0x0
                                  ), IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0)) goto LAB_031a3274;
      IGFGDDANEPE__GIENGNEGHPJ
                (__this,(System_Xml_XmlNode_o *)AHDGNOJPPIB,
                 (IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField,FCPLINEFDIO,DFIBGGDJPLM,
                 JLAFGLDIFOC,LFJGFLNMBMC,LDPENJNJGDI,DJMBGIPJDNA,NMABNFMBFJF,true,
                 in_stack_ffffffffffffff88);
    }
    return;
  }
LAB_031a3274:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

