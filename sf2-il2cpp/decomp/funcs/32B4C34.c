// FCNNPBIIEOK$$JFFIPAFJJDK @ RVA 0x32B4C34

void FCNNPBIIEOK__JFFIPAFJJDK
               (JMDPBFOCHHP_DLMLPMIANHI_o *HKKNGGLALNA,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  int32_t iVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  float fVar5;
  
  if ((DAT_04567445 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4892);
    FUN_01bab630(&StringLiteral_2766);
    FUN_01bab630(&StringLiteral_10477);
    DAT_04567445 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_4892,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar2 != (long *)0x0) {
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_10477,(MethodInfo *)0x0);
        fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
        if (HKKNGGLALNA != (JMDPBFOCHHP_DLMLPMIANHI_o *)0x0) {
          (HKKNGGLALNA->fields).ODEJMJFJDAI = fVar5;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_2766,(MethodInfo *)0x0);
            iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
            (HKKNGGLALNA->fields).OCPHBEEPAEG = iVar1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

