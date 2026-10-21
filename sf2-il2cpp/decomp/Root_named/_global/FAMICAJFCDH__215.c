// TypeDefIndex 215
// Namespace: 
// public class FAMICAJFCDH : QuestAction
// Fields:
//   private string EIIJDFHACJN; // 0x68
//   private bool IIKPDAEPPLI; // 0x70
//   private bool MCNDIFEIEJH; // 0x71
//   private bool PEGFPLIAHHC; // 0x72

// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x3121400]
// FAMICAJFCDH$$HNIHOIAMDPC @ RVA 0x3121400

void FAMICAJFCDH__HNIHOIAMDPC
               (FAMICAJFCDH_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_0456662a & 1) == 0) {
    FUN_01bab630(&StringLiteral_11232/*"ReopenScene"*/);
    FUN_01bab630(&StringLiteral_3760/*"CallEvents"*/);
    FUN_01bab630(&StringLiteral_5315/*"Destination"*/);
    FUN_01bab630(&StringLiteral_5475/*"DownloadBundle"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456662a = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_5315/*"Destination"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).EIIJDFHACJN = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_3760/*"CallEvents"*/,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,true,(MethodInfo *)0x0);
        (__this->fields).IIKPDAEPPLI = bVar1;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_11232/*"ReopenScene"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
          (__this->fields).MCNDIFEIEJH = bVar1;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_5475/*"DownloadBundle"*/,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
            (__this->fields).PEGFPLIAHHC = bVar1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OOMNPLFJHPB(DBMPKPJGIPI JNOELFJHALI)  [RVA 0x3121594]
// FAMICAJFCDH$$OOMNPLFJHPB @ RVA 0x3121594

void FAMICAJFCDH__OOMNPLFJHPB(FAMICAJFCDH_o *__this,int32_t JNOELFJHALI,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *pNVar3;
  MEJIKMPNBNL_o *pMVar4;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  OOMHDDBCBJP_o *__this_01;
  System_String_o *OIAJEEOAPNB;
  int32_t extraout_w1;
  int32_t extraout_w1_00;
  Roster_o *pAVar5;
  DNELIPCHKLK_o *pDVar6;
  
  if ((DAT_0456662b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15236/*"ZONE_1"*/);
    DAT_0456662b = 1;
  }
  pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
    iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
    if ((iVar2 == JNOELFJHALI) && (iVar2 = extraout_w1, (__this->fields).MCNDIFEIEJH == false)) {
LAB_03221764:
      FAMICAJFCDH__LGEMJFBPAGO(__this,iVar2,method);
      return;
    }
    if (JNOELFJHALI == 6) {
      pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__EKPAFDJIAGI
                  (pNVar3,3,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,
                   (__this->fields).IIKPDAEPPLI,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((JNOELFJHALI == 5) && ((__this->fields).PEGFPLIAHHC != false)) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar5 == (Roster_o *)0x0) ||
           (pDVar6 = (pAVar5->fields).DHDPPCNPAIE, pDVar6 == (DNELIPCHKLK_o *)0x0))
        goto LAB_032217a8;
        bVar1 = System_String__op_Inequality
                          ((pDVar6->fields).GDPFBDIJNHA,StringLiteral_15236/*"ZONE_1"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          pMVar4 = NLPJLHOEAOE__KHHBHBLIANB(StringLiteral_15236/*"ZONE_1"*/,(MethodInfo *)0x0);
          if ((((pMVar4 == (MEJIKMPNBNL_o *)0x0) ||
               (__this_00 = (pMVar4->fields).BDCBJJGNPMC,
               __this_00 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0)) ||
              (__this_01 = (OOMHDDBCBJP_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)__this_00,0,
                                      Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__
                                     ), __this_01 == (OOMHDDBCBJP_o *)0x0)) ||
             (OIAJEEOAPNB = OOMHDDBCBJP__LOHPFCGCHNH(__this_01,(MethodInfo *)0x0),
             pAVar5 == (Roster_o *)0x0)) goto LAB_032217a8;
          Roster__MKKABLNAEOD(pAVar5,OIAJEEOAPNB,(MethodInfo *)0x0);
        }
      }
      pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
        method = (MethodInfo *)0x0;
        bVar1 = NDPMLPGANCI__EKPAFDJIAGI
                          (pNVar3,JNOELFJHALI,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,
                           (__this->fields).IIKPDAEPPLI,(MethodInfo *)0x0);
        iVar2 = extraout_w1_00;
        if (bVar1) {
          return;
        }
        goto LAB_03221764;
      }
    }
  }
LAB_032217a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x3121854]
// FAMICAJFCDH$$MAHFCKJGBPP @ RVA 0x3121854

void FAMICAJFCDH__MAHFCKJGBPP(FAMICAJFCDH_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  int32_t JNOELFJHALI;
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  System_String_o *pSVar2;
  
  if ((DAT_0456662c & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_FAMICAJFCDH_LGEMJFBPAGO__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&StringLiteral_10649/*"QuestActionChangeScene SceneName is empty - go to dojo"*/);
    DAT_0456662c = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__EAPNEKLDLLM(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).EIIJDFHACJN;
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo *)0x0;
    pSVar2 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar2,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_10649/*"QuestActionChangeScene SceneName is empty - go to dojo"*/,(MethodInfo *)0x0);
      JNOELFJHALI = 3;
    }
    else {
      JNOELFJHALI = ScreenTypeExtension__GDDGNMOMMCE(pSVar2,(MethodInfo *)0x0);
    }
    FAMICAJFCDH__OOMNPLFJHPB(__this,JNOELFJHALI,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31219B0]
// FAMICAJFCDH$$.ctor @ RVA 0x31219B0

void FAMICAJFCDH___ctor(FAMICAJFCDH_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x31219B8]
// FAMICAJFCDH$$OFPHPMGMCAL @ RVA 0x31219B8

System_String_o * FAMICAJFCDH__OFPHPMGMCAL(FAMICAJFCDH_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_0456662d & 1) == 0) {
    FUN_01bab630(&StringLiteral_981/*"("*/);
    FUN_01bab630(&StringLiteral_1100/*")"*/);
    DAT_0456662d = 1;
  }
  pSVar1 = System_String__Concat
                     (StringLiteral_981/*"("*/,(__this->fields).EIIJDFHACJN,StringLiteral_1100/*")"*/,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ===== private void LGEMJFBPAGO(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x31217AC]
// FAMICAJFCDH$$LGEMJFBPAGO @ RVA 0x31217AC

void FAMICAJFCDH__LGEMJFBPAGO(FAMICAJFCDH_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  
  if ((DAT_0456662e & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo,KDLGNPCKLIJ);
    FUN_01bab630(&Method_FAMICAJFCDH_LGEMJFBPAGO__);
    DAT_0456662e = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__NJBAKIMLGHB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

