// BMKPIFBPBMF.PAELLCEFPAH$$.ctor @ RVA 0x30D727C

void BMKPIFBPBMF_PAELLCEFPAH___ctor
               (BMKPIFBPBMF_PAELLCEFPAH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  float fVar6;
  
  if ((DAT_04566339 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9386);
    FUN_01bab630(&StringLiteral_3023);
    FUN_01bab630(&StringLiteral_5759);
    FUN_01bab630(&StringLiteral_5068);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_9061);
    FUN_01bab630(&StringLiteral_10305);
    DAT_04566339 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar4 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).JIJLBFGKNJK = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_5068,(MethodInfo *)0x0);
        fVar6 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar3,2.0,(MethodInfo *)0x0);
        (__this->fields).BNHBDMKGCDM = fVar6;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_9386,(MethodInfo *)0x0);
          fVar6 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar3,0.1,(MethodInfo *)0x0);
          (__this->fields).HHOOGLKPELG = fVar6;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_9061,(MethodInfo *)0x0);
            fVar6 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar3,0.0,(MethodInfo *)0x0);
            (__this->fields).CLBDKNPJGEB = fVar6;
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_3023,(MethodInfo *)0x0);
              pSVar4 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar3,StringLiteral_10305,(MethodInfo *)0x0);
              ppSVar5 = &(__this->fields).EJJLLHENJBN;
              *ppSVar5 = pSVar4;
              thunk_FUN_01c20e04(ppSVar5,pSVar4);
              bVar1 = System_String__op_Inequality(*ppSVar5,StringLiteral_10305,(MethodInfo *)0x0);
              if ((bVar1) &&
                 (bVar1 = System_String__op_Inequality
                                    (*ppSVar5,StringLiteral_5759,(MethodInfo *)0x0), bVar1)) {
                *ppSVar5 = StringLiteral_10305;
                thunk_FUN_01c20e04(ppSVar5);
                return;
              }
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

