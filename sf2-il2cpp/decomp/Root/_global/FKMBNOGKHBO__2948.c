// TypeDefIndex 2948
// Namespace: 
// public class FKMBNOGKHBO : BOFEMGGNODC
// Fields:
//   private string NBMALGBGMIG; // 0x68
//   private string MNEOMBIFDHF; // 0x70
//   private HPPDIEDAKEC AAHBIHMHFPL; // 0x78
//   private DBMPKPJGIPI KFHECLNEPJM; // 0x7C

// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x3491A38]
// FKMBNOGKHBO$$HNIHOIAMDPC @ RVA 0x3491A38

void FKMBNOGKHBO__HNIHOIAMDPC
               (FKMBNOGKHBO_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
                    /* try { // try from 03591a44 to 03691a47 has its CatchHandler @ 03591aac */
                    /* try { // try from 03591a48 to 03691a77 has its CatchHandler @ 035918b0 */
  if ((DAT_04568423 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12788/*"Tab"*/);
    FUN_01bab630(&StringLiteral_6504/*"Focus"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 03591a78 to 03691a7b has its CatchHandler @ 03591ab8 */
                    /* try { // try from 03591a7c to 03691a83 has its CatchHandler @ 03591ab4 */
    DAT_04568423 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
                    /* try { // try from 03591a90 to 03691aa7 has its CatchHandler @ 03591b20 */
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03591aa8 to 03691ad3 has its CatchHandler @ 035918b0 */
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03591a44 with catch @ 03591aac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03591a7c with catch @ 03591ab4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03591a78 with catch @ 03591ab8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03591a24 with catch @ 03591abc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035919e4 with catch @ 03591ac0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035919cc with catch @ 03591ac4
                        */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_12788/*"Tab"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 03591ad4 to 03691ad7 has its CatchHandler @ 03591afc */
                    /* try { // try from 03591ad8 to 03691b03 has its CatchHandler @ 035918b0 */
      (__this->fields).NBMALGBGMIG = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 03591ad4 with catch @ 03591afc */
                    /* try { // try from 03591b04 to 03691b0b has its CatchHandler @ 03591b20 */
                    /* try { // try from 03591b0c to 03691b17 has its CatchHandler @ 035918b0 */
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_6504/*"Focus"*/,(MethodInfo *)0x0);
                    /* try { // try from 03591b18 to 03691b1f has its CatchHandler @ 03591b20 */
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).MNEOMBIFDHF;
        *ppSVar4 = pSVar3;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03591a90 with catch @ 03591b20
                       catch(type#2 @ 00000000) { ... } // from try @ 03591b04 with catch @ 03591b20
                       catch(type#2 @ 00000000) { ... } // from try @ 03591b18 with catch @ 03591b20
                        */
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LGEMJFBPAGO(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x3491B38]
// FKMBNOGKHBO$$LGEMJFBPAGO @ RVA 0x3491B38

/* WARNING: Control flow encountered bad instruction data */

void FKMBNOGKHBO__LGEMJFBPAGO(FKMBNOGKHBO_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t BACJDPMBFFE;
  long lVar3;
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  UnityEngine_Object_o *pUVar4;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_01;
  
  if ((DAT_04568424 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo,KDLGNPCKLIJ);
    FUN_01bab630(&Method_FKMBNOGKHBO_LGEMJFBPAGO__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04568424 = 1;
  }
  iVar1 = (__this->fields).KFHECLNEPJM;
  if (iVar1 == 7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar1 == 5) {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    pUVar4 = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8) ==
          (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_03591e48;
      Nekki_SF2_GUI_Map_MapScene__ScrollToItemByName
                ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                 (__this->fields).AAHBIHMHFPL,(MethodInfo *)0x0);
    }
  }
  else if (iVar1 == 4) {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    pUVar4 = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      __this_01 = (Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8);
      BACJDPMBFFE = BKBFFEJEBAI__PPGMDDODKFG((__this->fields).AAHBIHMHFPL,(MethodInfo *)0x0);
      if (__this_01 != (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
        Nekki_SF2_GUI_Shop_ShopScene__ScrollToItemByName
                  (__this_01,BACJDPMBFFE,(__this->fields).MNEOMBIFDHF,(MethodInfo *)0x0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_03591e48;
    }
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__NJBAKIMLGHB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_03591e48:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3491E4C]
// FKMBNOGKHBO$$.ctor @ RVA 0x3491E4C

void FKMBNOGKHBO___ctor(FKMBNOGKHBO_o *__this,MethodInfo *method)

{
  (__this->fields).KFHECLNEPJM = 0xb;
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x3491E5C]
// FKMBNOGKHBO$$MAHFCKJGBPP @ RVA 0x3491E5C

void FKMBNOGKHBO__MAHFCKJGBPP(FKMBNOGKHBO_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *pNVar3;
  long lVar4;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  UnityEngine_Object_o *pUVar5;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_00;
  Nekki_SF2_GUI_Profile_ProfileScene_o *__this_01;
  System_String_o *pSVar6;
  
  if ((DAT_04568425 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&Method_FKMBNOGKHBO_LGEMJFBPAGO__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04568425 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar6 = (__this->fields).NBMALGBGMIG;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar6 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar6,(MethodInfo *)0x0);
  iVar2 = MMOGKBGEPGM__GFLCMDMEOBN(pSVar6,(MethodInfo *)0x0);
  (__this->fields).AAHBIHMHFPL = iVar2;
  iVar2 = MMOGKBGEPGM__KBMJOICLEHN(iVar2,(MethodInfo *)0x0);
  (__this->fields).KFHECLNEPJM = iVar2;
  pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
    iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
    if (iVar2 != (__this->fields).KFHECLNEPJM) goto LAB_0359218c;
    if (iVar2 == 7) {
      lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      pUVar5 = (UnityEngine_Object_o *)**(undefined8 **)(lVar4 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        __this_01 = (Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar4 + 0xb8);
        iVar2 = HLHCKNLCOBM__OHCFIOGGNHO((__this->fields).AAHBIHMHFPL,(MethodInfo *)0x0);
        if (__this_01 == (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) goto LAB_03592200;
        Nekki_SF2_GUI_Profile_ProfileScene__ScrollToItemByName
                  (__this_01,iVar2,(__this->fields).MNEOMBIFDHF,(MethodInfo *)0x0);
        goto LAB_0359218c;
      }
    }
    else if (iVar2 == 5) {
      lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      pUVar5 = (UnityEngine_Object_o *)**(undefined8 **)(lVar4 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar4 + 0xb8) ==
            (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_03592200;
        Nekki_SF2_GUI_Map_MapScene__ScrollToItemByName
                  ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar4 + 0xb8),
                   (__this->fields).AAHBIHMHFPL,(MethodInfo *)0x0);
        goto LAB_0359218c;
      }
    }
    else {
      if (iVar2 != 4) {
LAB_0359218c:
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        return;
      }
      lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      pUVar5 = (UnityEngine_Object_o *)**(undefined8 **)(lVar4 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        __this_00 = (Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar4 + 0xb8);
        iVar2 = BKBFFEJEBAI__PPGMDDODKFG((__this->fields).AAHBIHMHFPL,(MethodInfo *)0x0);
        if (__this_00 == (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_03592200;
        Nekki_SF2_GUI_Shop_ShopScene__ScrollToItemByName
                  (__this_00,iVar2,(__this->fields).MNEOMBIFDHF,(MethodInfo *)0x0);
        goto LAB_0359218c;
      }
    }
    pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                  thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EAPNEKLDLLM(pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03592200:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

