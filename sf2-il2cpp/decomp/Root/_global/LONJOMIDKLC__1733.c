// TypeDefIndex 1733
// Namespace: 
// public static class LONJOMIDKLC
// Fields:

// ===== public static void OOHGBBAKBFD(XmlNode HJKNLNHOLOJ, List<GDCFAOAEIMA> EDEHNHIHDDH)  [RVA 0x31D9EDC]
// LONJOMIDKLC$$OOHGBBAKBFD @ RVA 0x31D9EDC

void LONJOMIDKLC__OOHGBBAKBFD
               (System_Xml_XmlNode_o *HJKNLNHOLOJ,
               System_Collections_Generic_List_GDCFAOAEIMA__o *EDEHNHIHDDH,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = EDEHNHIHDDH;
  auVar1._0_8_ = HJKNLNHOLOJ;
  if ((DAT_04566d0f & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OLGILMECDLP<GDCFAOAEIMA>__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&GDCFAOAEIMA___TypeInfo);
    FUN_01bab630(&GDCFAOAEIMA_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GDCFAOAEIMA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GDCFAOAEIMA>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_2948/*"And"*/);
    FUN_01bab630(&StringLiteral_10282/*"Platform"*/);
    FUN_01bab630(&StringLiteral_10152/*"PartLog"*/);
    FUN_01bab630(&StringLiteral_7324/*"IgnoredExceptions"*/);
    FUN_01bab630(&StringLiteral_12202/*"Socket"*/);
    FUN_01bab630(&StringLiteral_10153/*"PartName"*/);
    FUN_01bab630(&StringLiteral_11149/*"Reflection"*/);
    FUN_01bab630(&StringLiteral_3738/*"CUDLR"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_10154/*"PartStackTrace"*/);
    auVar1 = FUN_01bab630(&StringLiteral_7251/*"IOS"*/);
    DAT_04566d0f = 1;
  }
  if (EDEHNHIHDDH != (System_Collections_Generic_List_GDCFAOAEIMA__o *)0x0) {
    FUN_03f93628((EDEHNHIHDDH->fields)._version,auVar1._0_8_,auVar1._8_8_,
                 (EDEHNHIHDDH->fields)._size);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar1._0_8_);
}


// ===== public static void NMMPGFEEJGK(XmlNode HJKNLNHOLOJ)  [RVA 0x31DA754]
// LONJOMIDKLC$$NMMPGFEEJGK @ RVA 0x31DA754

void LONJOMIDKLC__NMMPGFEEJGK(System_Xml_XmlNode_o *HJKNLNHOLOJ,MethodInfo *method)

{
  long *plVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  float fVar4;
  
  if ((DAT_04566d10 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    FUN_01bab630(&StringLiteral_6002/*"Exc"*/);
    FUN_01bab630(&StringLiteral_11186/*"ReleaseSendLogChance"*/);
    FUN_01bab630(&StringLiteral_9637/*"NuR"*/);
    FUN_01bab630(&StringLiteral_7000/*"Hack"*/);
    FUN_01bab630(&StringLiteral_5215/*"Dbl"*/);
    FUN_01bab630(&StringLiteral_2797/*"Alg"*/);
    DAT_04566d10 = 1;
  }
  if ((HJKNLNHOLOJ != (System_Xml_XmlNode_o *)0x0) &&
     (plVar1 = (long *)(*(HJKNLNHOLOJ->klass->vtable)._51_get_Item.methodPtr)
                                 (HJKNLNHOLOJ,StringLiteral_11186/*"ReleaseSendLogChance"*/,
                                  (HJKNLNHOLOJ->klass->vtable)._51_get_Item.method),
     plVar1 != (long *)0x0)) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_7000/*"Hack"*/,(MethodInfo *)0x0);
      fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
      if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->ReleaseSendLogChance_Hack = fVar4;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_9637/*"NuR"*/,(MethodInfo *)0x0);
        fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
        Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->ReleaseSendLogChance_NuR = fVar4;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_6002/*"Exc"*/,(MethodInfo *)0x0);
          fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
          Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->ReleaseSendLogChance_Exc = fVar4;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_5215/*"Dbl"*/,(MethodInfo *)0x0);
            fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
            Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->ReleaseSendLogChance_DuplicatedItems
                 = fVar4;
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_2797/*"Alg"*/,(MethodInfo *)0x0);
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

