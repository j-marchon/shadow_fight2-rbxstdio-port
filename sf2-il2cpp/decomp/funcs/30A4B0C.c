// IGFGDDANEPE$$.ctor @ RVA 0x30A4B0C

void IGFGDDANEPE___ctor(IGFGDDANEPE_o *__this,int32_t EBDDELGICGB,System_Xml_XmlNode_o *GGDPPDFOEOH,
                       System_String_o *KGLJICLJHEL,bool FCPLINEFDIO,int32_t DFIBGGDJPLM,
                       int32_t JLAFGLDIFOC,int64_t LFJGFLNMBMC,int32_t LDPENJNJGDI,bool DJMBGIPJDNA,
                       System_String_o *NMABNFMBFJF,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar1;
  System_Xml_XmlElement_o *AHDGNOJPPIB;
  
  if ((DAT_04566164 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&StringLiteral_8095);
    DAT_04566164 = 1;
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
  AHDGNOJPPIB = EIABCPKDEBD__BHPIHHJHELJ(GGDPPDFOEOH,StringLiteral_8095,(MethodInfo *)0x0);
  IGFGDDANEPE__GIENGNEGHPJ
            (__this,(System_Xml_XmlNode_o *)AHDGNOJPPIB,KGLJICLJHEL,FCPLINEFDIO,DFIBGGDJPLM,
             JLAFGLDIFOC,LFJGFLNMBMC,LDPENJNJGDI,DJMBGIPJDNA,NMABNFMBFJF,true,method);
  return;
}

