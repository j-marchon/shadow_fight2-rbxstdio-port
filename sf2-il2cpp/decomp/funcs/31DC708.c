// MCIEPLBJLKN$$HNIHOIAMDPC @ RVA 0x31DC708

void MCIEPLBJLKN__HNIHOIAMDPC
               (MCIEPLBJLKN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  MGNPHCAAEIO_FNHCJBGGHLH_o *pMVar4;
  float fVar5;
  
  if ((DAT_04566d1d & 1) == 0) {
    FUN_01bab630(&StringLiteral_15316);
    FUN_01bab630(&StringLiteral_5640);
    DAT_04566d1d = 1;
  }
  IIMNGGHGKOD__HNIHOIAMDPC((IIMNGGHGKOD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pMVar4 = (__this->fields).BFLPNKEHKCM;
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_5640,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
      if (pMVar4 != (MGNPHCAAEIO_FNHCJBGGHLH_o *)0x0) {
        (pMVar4->fields).EOOHODKJDHH = iVar1;
        pMVar4 = (__this->fields).BFLPNKEHKCM;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_15316,(MethodInfo *)0x0);
          fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
          if (pMVar4 != (MGNPHCAAEIO_FNHCJBGGHLH_o *)0x0) {
            (pMVar4->fields).NMBDLKFCIPG = fVar5;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

