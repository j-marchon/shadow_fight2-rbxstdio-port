// AGIEIAOHIFK$$HNIHOIAMDPC @ RVA 0x343A668

void AGIEIAOHIFK__HNIHOIAMDPC
               (AGIEIAOHIFK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *CJNHFNHJHPE;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *JEIGFGPCGMM;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *FGLEGAOAEAO;
  NILLKLHKLHG_o *__this_01;
  NILLKLHKLHG_o **ppNVar2;
  
  if ((DAT_045681c9 & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&StringLiteral_4476);
    DAT_045681c9 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0x1e,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields)._JNIFJMNMCFA_k__BackingField;
  *ppNVar2 = (NILLKLHKLHG_o *)0x0;
  thunk_FUN_01c20e04(ppNVar2,0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_4476,(MethodInfo *)0x0);
      CJNHFNHJHPE = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      JEIGFGPCGMM = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                    thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
      System_Action<object>___ctor();
      FGLEGAOAEAO = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                    thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
      System_Action<object>___ctor();
      __this_01 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
      NILLKLHKLHG___ctor(__this_01,CJNHFNHJHPE,JEIGFGPCGMM,FGLEGAOAEAO,(Il2CppObject *)__this,
                         (MethodInfo *)0x0);
      (__this->fields)._JNIFJMNMCFA_k__BackingField = __this_01;
      thunk_FUN_01c20e04(ppNVar2,__this_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

