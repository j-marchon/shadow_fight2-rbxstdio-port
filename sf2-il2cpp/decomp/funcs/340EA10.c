// MGNPHCAAEIO.CEMCIPLHMKD$$HNIHOIAMDPC @ RVA 0x340EA10

void MGNPHCAAEIO_CEMCIPLHMKD__HNIHOIAMDPC
               (MGNPHCAAEIO_CEMCIPLHMKD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  long *plVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  float fVar5;
  
  if ((DAT_04568067 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9311);
    FUN_01bab630(&StringLiteral_8901);
    FUN_01bab630(&StringLiteral_8900);
    FUN_01bab630(&StringLiteral_3774);
    FUN_01bab630(&StringLiteral_3696);
    FUN_01bab630(&StringLiteral_3490);
    FUN_01bab630(&StringLiteral_3775);
    FUN_01bab630(&StringLiteral_3491);
    DAT_04568067 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_3775,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar1 != (long *)0x0) {
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_3774,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_3696,(MethodInfo *)0x0);
        (__this->fields).INLHCNPCBFP = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_3491,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_9311,(MethodInfo *)0x0);
          (__this->fields).IDMFMJHDAFI = pSVar4;
          thunk_FUN_01c20e04();
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_3490,(MethodInfo *)0x0);
            fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
            (__this->fields).LMJDLCKDFLD = fVar5;
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_8900,(MethodInfo *)0x0);
              fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,-1.0,(MethodInfo *)0x0);
              (__this->fields).MMDEBECMCJE = fVar5;
              pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
              if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar2,StringLiteral_8901,(MethodInfo *)0x0);
                fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                (__this->fields).HGMJNJHLJLH = fVar5;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

