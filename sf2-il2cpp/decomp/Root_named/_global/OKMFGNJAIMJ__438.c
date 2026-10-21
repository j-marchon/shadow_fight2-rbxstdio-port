// TypeDefIndex 438
// Namespace: 
// public class OKMFGNJAIMJ : QuestAction
// Fields:
//   private string AEMECFMDJLB; // 0x68
//   private string PMHMOJGEAAN; // 0x70
//   private string EEKNEMEIBOJ; // 0x78

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL HLAGOHADLKH)  [RVA 0x348D808]
// OKMFGNJAIMJ$$MAHFCKJGBPP @ RVA 0x348D808

void OKMFGNJAIMJ__MAHFCKJGBPP(OKMFGNJAIMJ_o *__this,PKHMIGFEJCL_o *HLAGOHADLKH,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_DebugModules_ScreenDebug_o *pNVar3;
  float fVar4;
  UnityEngine_Color_o UVar8;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_045683f6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_22);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3672);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045683f6 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,HLAGOHADLKH,(MethodInfo *)0x0);
  if (DAT_0456684a == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo);
    DAT_0456684a = '\x01';
  }
  pNVar3 = Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__IsNullOrEmpty((__this->fields).AEMECFMDJLB,(MethodInfo *)0x0);
    if (bVar1) {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3672,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_22,(MethodInfo *)0x0
                );
      pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    }
    else {
      pSVar2 = (__this->fields).PMHMOJGEAAN;
      if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = MFBNFJGBPBB__HAKLDDOPIAF(HLAGOHADLKH,pSVar2,(MethodInfo *)0x0);
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).EEKNEMEIBOJ,(MethodInfo *)0x0);
      if (bVar1) {
        fVar4 = 1.0;
        fVar5 = 0.0;
        fVar6 = 0.0;
        fVar7 = 1.0;
      }
      else {
        UVar8 = CFBGPBCDAGA__DJEMAAMAJHF((__this->fields).EEKNEMEIBOJ,(MethodInfo *)0x0);
        fVar7 = UVar8.fields.a;
        fVar6 = UVar8.fields.b;
        fVar5 = UVar8.fields.g;
        fVar4 = UVar8.fields.r;
      }
      if (DAT_0456684a == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo);
        DAT_0456684a = '\x01';
      }
      pNVar3 = Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo->static_fields->FFOLFLCMFCH;
      if (pNVar3 == (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UVar8.fields.g = fVar5;
      UVar8.fields.r = fVar4;
      UVar8.fields.a = fVar7;
      UVar8.fields.b = fVar6;
      Nekki_SF2_GUI_DebugModules_ScreenDebug__ShowDebugLine
                (pNVar3,(__this->fields).AEMECFMDJLB,pSVar2,UVar8,(MethodInfo *)0x0);
    }
  }
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x348DA74]
// OKMFGNJAIMJ$$.ctor @ RVA 0x348DA74

void OKMFGNJAIMJ___ctor(OKMFGNJAIMJ_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x348DA7C]
// OKMFGNJAIMJ$$HNIHOIAMDPC @ RVA 0x348DA7C

void OKMFGNJAIMJ__HNIHOIAMDPC
               (OKMFGNJAIMJ_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_045683f7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4476/*"Color"*/);
    FUN_01bab630(&StringLiteral_12880/*"Text"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045683f7 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).AEMECFMDJLB = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_12880/*"Text"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).PMHMOJGEAAN = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_4476/*"Color"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          if (pSVar3 != (System_String_o *)0x0) {
            pSVar3 = System_String__ToLower(pSVar3,(MethodInfo *)0x0);
            ppSVar4 = &(__this->fields).EEKNEMEIBOJ;
            *ppSVar4 = pSVar3;
            thunk_FUN_01c20e04(ppSVar4,pSVar3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

