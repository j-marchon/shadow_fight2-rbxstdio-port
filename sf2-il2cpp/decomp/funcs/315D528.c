// BLFFMBFLIMI$$HNIHOIAMDPC @ RVA 0x315D528

void BLFFMBFLIMI__HNIHOIAMDPC
               (BLFFMBFLIMI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  BLFFMBFLIMI_o *pBVar5;
  MethodInfo *pMVar6;
  PICIKPNGDBE_o *pPVar7;
  
                    /* try { // try from 0325d538 to 0335d6ab has its CatchHandler @ 0325d538
                       catch() { ... } // from try @ 0325d538 with catch @ 0325d538
                       catch() { ... } // from try @ 0325d9a4 with catch @ 0325d538
                       catch() { ... } // from try @ 0325da6c with catch @ 0325d538
                       catch() { ... } // from try @ 0325da74 with catch @ 0325d538
                       catch() { ... } // from try @ 0325dbb8 with catch @ 0325d538 */
  if ((DAT_04566875 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8868);
    FUN_01bab630(&StringLiteral_9058);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566875 = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9058,(MethodInfo *)0x0);
      pMVar6 = (MethodInfo *)0x0;
      pBVar5 = (BLFFMBFLIMI_o *)EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
      iVar1 = BLFFMBFLIMI__FAMOFCBLIAM(pBVar5,(System_String_o *)pBVar5,pMVar6);
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_8868,(MethodInfo *)0x0);
        pMVar6 = (MethodInfo *)0x0;
        pBVar5 = (BLFFMBFLIMI_o *)EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0)
        ;
        iVar2 = BLFFMBFLIMI__FAMOFCBLIAM(pBVar5,(System_String_o *)pBVar5,pMVar6);
        pPVar7 = (__this->fields).super.DKGMKMJDMPC;
        if (pPVar7 != (PICIKPNGDBE_o *)0x0) {
          PICIKPNGDBE__CHKGAHCDFJF(pPVar7,(MethodInfo *)0x0);
          if (iVar1 != -1) {
            pPVar7 = (__this->fields).super.DKGMKMJDMPC;
            if (pPVar7 == (PICIKPNGDBE_o *)0x0) goto LAB_0325d674;
            (pPVar7->fields)._BIOJBFDLNNA_k__BackingField = (float)iVar1;
            (pPVar7->fields)._LEIDJIGJIAE_k__BackingField = false;
          }
          if (iVar2 != -1) {
            pPVar7 = (__this->fields).super.DKGMKMJDMPC;
            if (pPVar7 == (PICIKPNGDBE_o *)0x0) goto LAB_0325d674;
            (pPVar7->fields)._IJMLJAMCGPF_k__BackingField = (float)iVar2;
            (pPVar7->fields)._DONOGHEAFON_k__BackingField = false;
          }
          return;
        }
      }
    }
  }
LAB_0325d674:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

