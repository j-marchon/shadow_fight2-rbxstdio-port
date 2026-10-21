// LONJOMIDKLC$$NMMPGFEEJGK @ RVA 0x31DA754

void LONJOMIDKLC__NMMPGFEEJGK(System_Xml_XmlNode_o *HJKNLNHOLOJ,MethodInfo *method)

{
  long *plVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  float fVar4;
  
  if ((DAT_04566d10 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    FUN_01bab630(&StringLiteral_6002);
    FUN_01bab630(&StringLiteral_11186);
    FUN_01bab630(&StringLiteral_9637);
    FUN_01bab630(&StringLiteral_7000);
    FUN_01bab630(&StringLiteral_5215);
    FUN_01bab630(&StringLiteral_2797);
    DAT_04566d10 = 1;
  }
  if ((HJKNLNHOLOJ != (System_Xml_XmlNode_o *)0x0) &&
     (plVar1 = (long *)(*(HJKNLNHOLOJ->klass->vtable)._51_get_Item.methodPtr)
                                 (HJKNLNHOLOJ,StringLiteral_11186,
                                  (HJKNLNHOLOJ->klass->vtable)._51_get_Item.method),
     plVar1 != (long *)0x0)) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_7000,(MethodInfo *)0x0);
      fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
      if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->ReleaseSendLogChance_Hack = fVar4;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_9637,(MethodInfo *)0x0);
        fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
        Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->ReleaseSendLogChance_NuR = fVar4;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_6002,(MethodInfo *)0x0);
          fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
          Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->ReleaseSendLogChance_Exc = fVar4;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_5215,(MethodInfo *)0x0);
            fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
            Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->ReleaseSendLogChance_DuplicatedItems
                 = fVar4;
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_2797,(MethodInfo *)0x0);
              fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
              Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->ReleaseSendLogChance_AdditionalLog
                   = fVar4;
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

