// AFIEAGJGHGK$$HNIHOIAMDPC @ RVA 0x3168C44

void AFIEAGJGHGK__HNIHOIAMDPC
               (AFIEAGJGHGK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  float fVar6;
  
  if ((DAT_045668d5 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11830);
    FUN_01bab630(&StringLiteral_6584);
    FUN_01bab630(&StringLiteral_11820);
    FUN_01bab630(&StringLiteral_1);
    DAT_045668d5 = 1;
  }
  method_00 = (MethodInfo *)0x0;
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  AFIEAGJGHGK__ABCNILIJHCG(__this,AHDGNOJPPIB,method_00);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_6584,(MethodInfo *)0x0);
    fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
    (__this->fields).BOHAGGJMOJN = fVar6;
    iVar1 = -0x80000000;
    if (fVar6 / 60.0 != INFINITY) {
      iVar1 = (int)(fVar6 / 60.0);
    }
    (__this->fields).PNIFHAMKLFF = iVar1;
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11820,(MethodInfo *)0x0);
      bVar2 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
      (__this->fields).EGEBPLAKCCK = (bool_conflict)(~bVar2 & 1);
      if (bVar2) {
        return;
      }
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_11820,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
        (__this->fields).DMKIFMOPHEC = pSVar5;
        thunk_FUN_01c20e04();
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_11830,(MethodInfo *)0x0);
          fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
          (__this->fields).MHHHFGONJGG = fVar6;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

