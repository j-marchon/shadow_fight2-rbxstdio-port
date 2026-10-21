// OBCHCBKCAHC$$HNIHOIAMDPC @ RVA 0x35946F4

void OBCHCBKCAHC__HNIHOIAMDPC
               (OBCHCBKCAHC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar5;
  float fVar6;
  UnityEngine_Color_o UVar7;
  
  if ((DAT_04568d94 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4476);
    FUN_01bab630(&StringLiteral_12067);
    FUN_01bab630(&StringLiteral_6583);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_9937);
    DAT_04568d94 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  (__this->fields).super._KPCCNJJEIAN_k__BackingField = false;
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0x1a,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9937,(MethodInfo *)0x0);
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar3,StringLiteral_4476,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
        if (pSVar5 != (System_String_o *)0x0) {
          pSVar5 = System_String__ToLower(pSVar5,(MethodInfo *)0x0);
          UVar7 = CFBGPBCDAGA__DJEMAAMAJHF(pSVar5,(MethodInfo *)0x0);
          fVar6 = UVar7.fields.a;
          if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03694820 to 03794827 has its CatchHandler @ 03695338 */
            fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,1.0,(MethodInfo *)0x0);
          }
          (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.r = UVar7.fields.r;
          (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.g = UVar7.fields.g;
                    /* try { // try from 03694834 to 0379483f has its CatchHandler @ 03695330 */
          (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.b = UVar7.fields.b;
          (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.a = fVar6;
                    /* try { // try from 03694840 to 03794f67 has its CatchHandler @ 0369430c */
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_6583,(MethodInfo *)0x0);
            iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
            (__this->fields)._FAMPPCNLDJI_k__BackingField = iVar2;
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_12067,(MethodInfo *)0x0);
              bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
              (__this->fields)._JIDINBPLOPJ_k__BackingField = bVar1;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

