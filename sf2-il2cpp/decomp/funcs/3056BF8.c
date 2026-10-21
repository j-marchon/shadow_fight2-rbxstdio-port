// NHBBOEHHEKG$$EPNFJNCPIFC @ RVA 0x3056BF8

void NHBBOEHHEKG__EPNFJNCPIFC
               (NHBBOEHHEKG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MEHKKHFBNLM_o *DPOMBGDLHCJ,
               int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  GMGALNFPLPA_o *__this_00;
  float OAGELANKMBH;
  float fVar5;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03156bec with catch @ 03156bf8
                        */
  if ((DAT_04565e6c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GMGALNFPLPA_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_4422);
    FUN_01bab630(&StringLiteral_12918);
                    /* try { // try from 03156c64 to 03256d13 has its CatchHandler @ 03156c64
                       catch() { ... } // from try @ 03156c64 with catch @ 03156c64
                       catch() { ... } // from try @ 03156e20 with catch @ 03156c64
                       catch() { ... } // from try @ 03156e74 with catch @ 03156c64
                       catch() { ... } // from try @ 03156ec0 with catch @ 03156c64
                       catch() { ... } // from try @ 03157028 with catch @ 03156c64 */
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_21815);
    FUN_01bab630(&StringLiteral_15021);
    DAT_04565e6c = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (MGNPHCAAEIO_TypeInfo->static_fields->NJDGNMENDPI != false) {
    return;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_4422,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03156d14 to 03256d1b has its CatchHandler @ 03156e88 */
    pSVar4 = System_String__Concat(StringLiteral_12918,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03156d2c to 03256d33 has its CatchHandler @ 03156e84 */
    __this_00 = (GMGALNFPLPA_o *)thunk_FUN_01bda818(GMGALNFPLPA_TypeInfo);
                    /* try { // try from 03156d38 to 03256d3f has its CatchHandler @ 03156e80 */
    GMGALNFPLPA___ctor(__this_00,2,(MethodInfo *)0x0);
                    /* try { // try from 03156d50 to 03256d57 has its CatchHandler @ 03156e7c */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03156d58 to 03256d63 has its CatchHandler @ 03156e78 */
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_15021,(MethodInfo *)0x0);
                    /* try { // try from 03156d74 to 03256d7b has its CatchHandler @ 03156e74 */
      OAGELANKMBH = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                    /* try { // try from 03156d90 to 03256db3 has its CatchHandler @ 03156e8c */
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_15134,(MethodInfo *)0x0);
        fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                    /* try { // try from 03156dc0 to 03256e1f has its CatchHandler @ 03156e90 */
        if ((ACCIHBHMFPN != 1) && (ACCIHBHMFPN != 0)) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 03156e20 to 03256e4b has its CatchHandler @ 03156c64 */
          UnityEngine_Debug__Log(StringLiteral_21815,(MethodInfo *)0x0);
          return;
        }
        if (__this_00 != (GMGALNFPLPA_o *)0x0) {
          bVar1 = GMGALNFPLPA__ODHMPKGLNPP(__this_00,pSVar4,OAGELANKMBH,-fVar5,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          if (DPOMBGDLHCJ != (MEHKKHFBNLM_o *)0x0) {
            MEHKKHFBNLM__GFFDLGBPMHM(DPOMBGDLHCJ,__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

