// TypeDefIndex 2144
// Namespace: 
// public class BAFPOJFOFOC : QuestAction
// Fields:
//   private string IBAHLODPHDK; // 0x68
//   private string PHAGOJCOMPN; // 0x70
//   private HPPDIEDAKEC GNBLMDBLJAN; // 0x78
//   private string KFPKPDDIFCD; // 0x80

// ===== public void .ctor()  [RVA 0x32D47D8]
// BAFPOJFOFOC$$.ctor @ RVA 0x32D47D8

void BAFPOJFOFOC___ctor(BAFPOJFOFOC_o *__this,MethodInfo *method)

{
  System_Action_MEMHEPBAJJA__o **ppSVar1;
  System_Action_PKHMIGFEJCL__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_MEMHEPBAJJA__o *pSVar3;
  System_Action_PKHMIGFEJCL__o *pSVar4;
  
  if ((DAT_04567527 & 1) == 0) {
    FUN_01bab630(&System_Action<PKHMIGFEJCL>_TypeInfo);
    FUN_01bab630(&System_Action<MEMHEPBAJJA>_TypeInfo);
    FUN_01bab630(&Method_BOFEMGGNODC_<>c_EKBJCNLEMME__);
    FUN_01bab630(&Method_BOFEMGGNODC_<>c_NAKGFOAHNPG__);
    FUN_01bab630(&QuestAction_<>c_TypeInfo);
    DAT_04567527 = 1;
    method = extraout_x1;
  }
  if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(QuestAction_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = QuestAction_<>c_TypeInfo->static_fields->__9__34_0;
  if (pSVar3 == (System_Action_MEMHEPBAJJA__o *)0x0) {
    if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(QuestAction_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_MEMHEPBAJJA__o *)thunk_FUN_01bda818(System_Action<MEMHEPBAJJA>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &QuestAction_<>c_TypeInfo->static_fields->__9__34_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (BAFPOJFOFOC_o *)0x0) {
    ppSVar1 = &(__this->fields).super.EKJDIBEOCDF;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = QuestAction_<>c_TypeInfo->static_fields->__9__34_1;
    if (pSVar4 == (System_Action_PKHMIGFEJCL__o *)0x0) {
      if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_PKHMIGFEJCL__o *)
               thunk_FUN_01bda818(System_Action<PKHMIGFEJCL>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &QuestAction_<>c_TypeInfo->static_fields->__9__34_1;
      *ppSVar2 = pSVar4;
      thunk_FUN_01c20e04(ppSVar2,pSVar4);
    }
    ppSVar2 = &(__this->fields).super.BHHLJDLBINB;
    *ppSVar2 = pSVar4;
    thunk_FUN_01c20e04(ppSVar2,pSVar4);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IGHPJAOOKAF(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x32D47DC]
// BAFPOJFOFOC$$IGHPJAOOKAF @ RVA 0x32D47DC

void BAFPOJFOFOC__IGHPJAOOKAF(BAFPOJFOFOC_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567577 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo,KDLGNPCKLIJ);
    FUN_01bab630(&Method_BAFPOJFOFOC_IGHPJAOOKAF__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567577 = 1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
        (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_033d498c;
    Nekki_SF2_GUI_Shop_ShopScene__ScrollToItemByName
              ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),
               (__this->fields).GNBLMDBLJAN,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
        (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_033d498c;
    Nekki_SF2_GUI_Shop_ShopScene__OpenForgeAndSetRecipe
              ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),
               (__this->fields).KFPKPDDIFCD,(MethodInfo *)0x0);
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__NJBAKIMLGHB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,method_00);
    return;
  }
LAB_033d498c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x32D4990]
// BAFPOJFOFOC$$HNIHOIAMDPC @ RVA 0x32D4990

void BAFPOJFOFOC__HNIHOIAMDPC
               (BAFPOJFOFOC_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04567578 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_11106/*"Recipe"*/);
    FUN_01bab630(&StringLiteral_12788/*"Tab"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567578 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,JHMENEKPIBO,method);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_12788/*"Tab"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_14870/*"Weapon"*/,(MethodInfo *)0x0);
      (__this->fields).IBAHLODPHDK = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_11106/*"Recipe"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).PHAGOJCOMPN;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x32D4AA0]
// BAFPOJFOFOC$$MAHFCKJGBPP @ RVA 0x32D4AA0

void BAFPOJFOFOC__MAHFCKJGBPP(BAFPOJFOFOC_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  System_String_o *pSVar2;
  
  if ((DAT_04567579 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04567579 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,MNBMHEAHIIA,method);
  pSVar2 = (__this->fields).IBAHLODPHDK;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar2,(MethodInfo *)0x0);
  iVar1 = MMOGKBGEPGM__GFLCMDMEOBN(pSVar2,(MethodInfo *)0x0);
  (__this->fields).GNBLMDBLJAN = iVar1;
  pSVar2 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,(__this->fields).PHAGOJCOMPN,(MethodInfo *)0x0);
  (__this->fields).KFPKPDDIFCD = pSVar2;
  thunk_FUN_01c20e04();
  BAFPOJFOFOC__GBPHJBEGCEH(__this,method_00);
  return;
}


// ===== private void LGEMJFBPAGO(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x32D4DF8]
// BAFPOJFOFOC$$LGEMJFBPAGO @ RVA 0x32D4DF8

void BAFPOJFOFOC__LGEMJFBPAGO(BAFPOJFOFOC_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  
  if ((DAT_0456757a & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo,KDLGNPCKLIJ);
    FUN_01bab630(&Method_BAFPOJFOFOC_LGEMJFBPAGO__);
    DAT_0456757a = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__NJBAKIMLGHB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GBPHJBEGCEH()  [RVA 0x32D4B4C]
// BAFPOJFOFOC$$GBPHJBEGCEH @ RVA 0x32D4B4C

void BAFPOJFOFOC__GBPHJBEGCEH(BAFPOJFOFOC_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  long lVar3;
  NDPMLPGANCI_o *pNVar4;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  FFHKCJAOPLI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  System_String_o *JFPHHHFKKIK;
  undefined1 auVar5 [16];
  
  if ((DAT_0456757b & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&Method_BAFPOJFOFOC_IGHPJAOOKAF__);
    FUN_01bab630(&Method_BAFPOJFOFOC_LGEMJFBPAGO__);
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456757b = 1;
    method = extraout_x1;
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  auVar5._8_8_ = method;
  auVar5._0_8_ = lVar3;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    auVar5 = FUN_01b81620(lVar3,method);
  }
  lVar3 = *(long *)(*(long *)(auVar5._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620(lVar3,auVar5._8_8_);
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).GNBLMDBLJAN != 0)) {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
        (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
      Nekki_SF2_GUI_Shop_ShopScene__ScrollToItemByName
                ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                 (__this->fields).GNBLMDBLJAN,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
          (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
        Nekki_SF2_GUI_Shop_ShopScene__OpenForgeAndSetRecipe
                  ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                   (__this->fields).KFPKPDDIFCD,(MethodInfo *)0x0);
        QuestAction__FGNINNOOCCL((QuestAction_o *)__this,method_00);
        return;
      }
    }
  }
  else {
    pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar4,(MethodInfo *)0x0);
      pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                    thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
      if (iVar2 == 4) {
        System_Action<Int32Enum>___ctor();
        if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EAPNEKLDLLM(pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        System_Action<Int32Enum>___ctor();
        if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EAPNEKLDLLM(pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
          iVar2 = (__this->fields).GNBLMDBLJAN;
          JFPHHHFKKIK = (__this->fields).KFPKPDDIFCD;
          __this_00 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
          FFHKCJAOPLI___ctor(__this_00,iVar2,(HOOAAGABMBL_o *)0x0,JFPHHHFKKIK,(System_String_o *)0x0
                             ,(MethodInfo *)0x0);
          if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
            NDPMLPGANCI__EKPAFDJIAGI
                      (pNVar4,4,(Il2CppObject *)__this_00,(System_Action_object__o *)0x0,true,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

