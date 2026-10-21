// HJNEOLCKEMD$$HNIHOIAMDPC @ RVA 0x31626CC

void HJNEOLCKEMD__HNIHOIAMDPC
               (HJNEOLCKEMD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *JEIGFGPCGMM;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *FGLEGAOAEAO;
  NILLKLHKLHG_o *__this_00;
  NILLKLHKLHG_o **ppNVar5;
  System_String_o **ppSVar6;
  
  if ((DAT_0456688b & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                    /* try { // try from 032626fc to 03362727 has its CatchHandler @ 03262c4c */
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9345);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_6584);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456688b = 1;
  }
                    /* try { // try from 03262768 to 0336276f has its CatchHandler @ 03262c44 */
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03262778 to 0336277f has its CatchHandler @ 03262c48 */
                    /* try { // try from 03262780 to 0336278b has its CatchHandler @ 03262c38 */
    pSVar2 = (System_String_o *)
             (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
    (__this->fields)._APNFLKNBGKE_k__BackingField = pSVar2;
    thunk_FUN_01c20e04();
                    /* try { // try from 0326279c to 033627b3 has its CatchHandler @ 03262c58 */
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 032627b4 to 033627bf has its CatchHandler @ 03262c40 */
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar2;
      thunk_FUN_01c20e04();
                    /* try { // try from 032627f8 to 0336281f has its CatchHandler @ 03262aa8 */
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_6584,(MethodInfo *)0x0);
        pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
        if ((pSVar2 != (System_String_o *)0x0) &&
           (bVar1 = System_String__Equals
                              (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0),
           !bVar1)) {
                    /* try { // try from 03262854 to 0336287f has its CatchHandler @ 03262aa4 */
          JEIGFGPCGMM = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                        thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
          System_Action<object>___ctor();
          FGLEGAOAEAO = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                        thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
          System_Action<object>___ctor();
          __this_00 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
                    /* try { // try from 032628b8 to 033628bb has its CatchHandler @ 03262a98 */
                    /* try { // try from 032628c4 to 033628cb has its CatchHandler @ 03262a94 */
          NILLKLHKLHG___ctor(__this_00,pSVar2,JEIGFGPCGMM,FGLEGAOAEAO,(Il2CppObject *)__this,
                             (MethodInfo *)0x0);
          ppNVar5 = &(__this->fields)._MIOHGLOGDHL_k__BackingField;
                    /* try { // try from 032628cc to 03362933 has its CatchHandler @ 03262aac */
          *ppNVar5 = __this_00;
          thunk_FUN_01c20e04(ppNVar5,__this_00);
        }
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_9345,(MethodInfo *)0x0);
          pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
          ppSVar6 = &(__this->fields)._HFALHOCIDCH_k__BackingField;
          *ppSVar6 = pSVar2;
          thunk_FUN_01c20e04(ppSVar6,pSVar2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

