// TypeDefIndex 2677
// Namespace: 
// public class MEMHEPBAJJA
// Fields:
//   private KCFIOKDFHIB <JNLLKNHOBDG>k__BackingField; // 0x10
//   public string JIJLBFGKNJK; // 0x18
//   public string KBCOHMPJELJ; // 0x20
//   public string BGHFADDGPAD; // 0x28
//   public XmlNode JHFENACKNPG; // 0x30
//   public bool KBODCOAHGFG; // 0x38

// ===== public KCFIOKDFHIB CIKBAKGAHDE()  [RVA 0x33C6B68]
// MEMHEPBAJJA$$CIKBAKGAHDE @ RVA 0x33C6B68

KCFIOKDFHIB_o * MEMHEPBAJJA__CIKBAKGAHDE(MEMHEPBAJJA_o *__this,MethodInfo *method)

{
  return (__this->fields)._JNLLKNHOBDG_k__BackingField;
}


// ===== public int OJBDPLCMPFA()  [RVA 0x33C6B70]
// MEMHEPBAJJA$$OJBDPLCMPFA @ RVA 0x33C6B70

int32_t MEMHEPBAJJA__OJBDPLCMPFA(MEMHEPBAJJA_o *__this,MethodInfo *method)

{
  KCFIOKDFHIB_o *pKVar1;
  
  pKVar1 = (__this->fields)._JNLLKNHOBDG_k__BackingField;
  if (pKVar1 != (KCFIOKDFHIB_o *)0x0) {
    return (pKVar1->fields).HBGJECJNMFN;
  }
  return 0;
}


// ===== private void MKMMMFKKADG(string LFGKEPCBPKF)  [RVA 0x33C6B88]
// MEMHEPBAJJA$$MKMMMFKKADG @ RVA 0x33C6B88

void MEMHEPBAJJA__MKMMMFKKADG(MEMHEPBAJJA_o *__this,System_String_o *LFGKEPCBPKF,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_Xml_XmlNode_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_04567df4 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6396/*"FileName"*/);
    DAT_04567df4 = 1;
  }
  pSVar1 = LCOODJKAICL__DDGMDKMKBHH(LFGKEPCBPKF,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).JHFENACKNPG;
  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_6396/*"FileName"*/,(MethodInfo *)0x0);
    if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
      EIABCPKDEBD__HBGAGFJBGKD((__this->fields).JHFENACKNPG,StringLiteral_6396/*"FileName"*/,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields).JHFENACKNPG;
    if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
      if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
         (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_6396/*"FileName"*/,(MethodInfo *)0x0),
         pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
        (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar3,pSVar1,(pSVar3->klass->vtable)._10_set_Value.method);
        ppSVar5 = &(__this->fields).KBCOHMPJELJ;
        *ppSVar5 = pSVar1;
        thunk_FUN_01c20e04(ppSVar5,pSVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FKKKDIGNEFO(object IMMNELPBGIF, int PHNOPDEALFJ, int OHBHCKNMKOD)  [RVA 0x33C6C68]
// MEMHEPBAJJA$$FKKKDIGNEFO @ RVA 0x33C6C68

void MEMHEPBAJJA__FKKKDIGNEFO
               (MEMHEPBAJJA_o *__this,Il2CppObject *IMMNELPBGIF,int32_t PHNOPDEALFJ,
               int32_t OHBHCKNMKOD,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlElement_o *PCAIKIGGBMJ;
  AFFHKININGD_o *pAVar2;
  DNELIPCHKLK_o *pDVar3;
  System_String_o *CJNHFNHJHPE;
  MEMHEPBAJJA_Fields *pMVar4;
  KCFIOKDFHIB_o *pKVar5;
  
  if ((DAT_04567df5 & 1) == 0) {
    FUN_01bab630(&KCFIOKDFHIB_TypeInfo);
    FUN_01bab630(&PKHMIGFEJCL_TypeInfo);
    FUN_01bab630(&StringLiteral_10714/*"QuestParameters"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567df5 = 1;
  }
  pMVar4 = &__this->fields;
  if (pMVar4->_JNLLKNHOBDG_k__BackingField == (KCFIOKDFHIB_o *)0x0) {
    PCAIKIGGBMJ = EIABCPKDEBD__BHPIHHJHELJ
                            ((__this->fields).JHFENACKNPG,StringLiteral_10714/*"QuestParameters"*/,(MethodInfo *)0x0);
    pKVar5 = (KCFIOKDFHIB_o *)thunk_FUN_01bda818(KCFIOKDFHIB_TypeInfo);
    KCFIOKDFHIB___ctor(pKVar5,(System_Xml_XmlNode_o *)PCAIKIGGBMJ,(MethodInfo *)0x0);
    (__this->fields)._JNLLKNHOBDG_k__BackingField = pKVar5;
    thunk_FUN_01c20e04(pMVar4,pKVar5);
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (((Il2CppClass *)PKHMIGFEJCL_TypeInfo)->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)PKHMIGFEJCL_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
  }
  if (pMVar4->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) {
    KCFIOKDFHIB__DMGAKPLCJEL(pMVar4->_JNLLKNHOBDG_k__BackingField,OHBHCKNMKOD,(MethodInfo *)0x0);
    if ((pMVar4->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) &&
       (KCFIOKDFHIB__DLGLNFNKONH(pMVar4->_JNLLKNHOBDG_k__BackingField,PHNOPDEALFJ,(MethodInfo *)0x0)
       , IMMNELPBGIF != (Il2CppObject *)0x0)) {
      pKVar5 = pMVar4->_JNLLKNHOBDG_k__BackingField;
      pAVar2 = PKHMIGFEJCL__ACPCMCCBDEI((PKHMIGFEJCL_o *)IMMNELPBGIF,(MethodInfo *)0x0);
      CJNHFNHJHPE = StringLiteral_1/*""*/;
      if (pAVar2 != (AFFHKININGD_o *)0x0) {
        pAVar2 = PKHMIGFEJCL__ACPCMCCBDEI((PKHMIGFEJCL_o *)IMMNELPBGIF,(MethodInfo *)0x0);
        if ((pAVar2 == (AFFHKININGD_o *)0x0) ||
           (pDVar3 = (pAVar2->fields).KOILJHHCIEE, pDVar3 == (DNELIPCHKLK_o *)0x0))
        goto LAB_034c6e68;
        CJNHFNHJHPE = (System_String_o *)
                      (*(pDVar3->klass->vtable)._3_ToString.methodPtr)
                                (pDVar3,(pDVar3->klass->vtable)._3_ToString.method);
      }
      if (pKVar5 != (KCFIOKDFHIB_o *)0x0) {
        KCFIOKDFHIB__NBFLGFJIJCL(pKVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
        if (pMVar4->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) {
          KCFIOKDFHIB__GFABHCMJOLH
                    (pMVar4->_JNLLKNHOBDG_k__BackingField,IMMNELPBGIF[4].monitor,(MethodInfo *)0x0);
          if (pMVar4->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) {
            KCFIOKDFHIB__MNGPLNIAIHH
                      (pMVar4->_JNLLKNHOBDG_k__BackingField,(System_String_o *)IMMNELPBGIF[6].klass,
                       (MethodInfo *)0x0);
            if (pMVar4->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) {
              KCFIOKDFHIB__GNCKPENHMCA
                        (pMVar4->_JNLLKNHOBDG_k__BackingField,
                         *(int32_t *)((long)&IMMNELPBGIF[0xe].klass + 4),(MethodInfo *)0x0);
              if (pMVar4->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) {
                KCFIOKDFHIB__GKKEMMNPNJE
                          (pMVar4->_JNLLKNHOBDG_k__BackingField,*(int32_t *)&IMMNELPBGIF[0xe].klass,
                           (MethodInfo *)0x0);
                if (pMVar4->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) {
                  KCFIOKDFHIB__EPICBGAJMIG
                            (pMVar4->_JNLLKNHOBDG_k__BackingField,
                             *(float *)&IMMNELPBGIF[0x10].monitor,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_034c6e68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CBLCMEMAPOP(KCFIOKDFHIB CJNHFNHJHPE)  [RVA 0x33C6E74]
// MEMHEPBAJJA$$CBLCMEMAPOP @ RVA 0x33C6E74

void MEMHEPBAJJA__CBLCMEMAPOP(MEMHEPBAJJA_o *__this,KCFIOKDFHIB_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._JNLLKNHOBDG_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(XmlNode CJNHFNHJHPE)  [RVA 0x33C6E7C]
// MEMHEPBAJJA$$.ctor @ RVA 0x33C6E7C

void MEMHEPBAJJA___ctor(MEMHEPBAJJA_o *__this,System_Xml_XmlNode_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o **ppSVar6;
  System_String_o **ppSVar7;
  System_Xml_XmlNode_o **ppSVar8;
  System_String_o **ppSVar9;
  
  if ((DAT_04567df6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6396/*"FileName"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_20373/*"quests.xml"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567df6 = 1;
  }
  ppSVar7 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar7 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar7);
  ppSVar9 = &(__this->fields).KBCOHMPJELJ;
  *ppSVar9 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar9);
  ppSVar6 = &(__this->fields).BGHFADDGPAD;
  *ppSVar6 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar6);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar8 = &(__this->fields).JHFENACKNPG;
  *ppSVar8 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar8,CJNHFNHJHPE);
  *ppSVar9 = StringLiteral_20373/*"quests.xml"*/;
  thunk_FUN_01c20e04(ppSVar9);
  pSVar2 = *ppSVar8;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_6396/*"FileName"*/,(MethodInfo *)0x0);
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        pSVar2 = *ppSVar8;
        if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_034c70e0;
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_034c70e0;
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_6396/*"FileName"*/,(MethodInfo *)0x0);
        method_01 = (MethodInfo *)0x0;
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        bVar1 = LCOODJKAICL__KFFIFGDKGCE(*ppSVar9,(MethodInfo *)0x0);
        pSVar5 = LCOODJKAICL__DDGMDKMKBHH(pSVar5,(MethodInfo *)0x0);
        pSVar5 = LCOODJKAICL__IPFHDLKHBDC(pSVar5,(MethodInfo *)0x0);
        *ppSVar9 = pSVar5;
        thunk_FUN_01c20e04(ppSVar9,pSVar5);
        if (bVar1) {
          MEMHEPBAJJA__MKMMMFKKADG(__this,(__this->fields).KBCOHMPJELJ,method_01);
        }
      }
      pSVar2 = (__this->fields).JHFENACKNPG;
      (__this->fields).KBODCOAHGFG = false;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
          pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          *ppSVar7 = pSVar5;
          thunk_FUN_01c20e04(ppSVar7,pSVar5);
          pSVar2 = *ppSVar8;
          if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
              pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              (__this->fields).BGHFADDGPAD = pSVar5;
              thunk_FUN_01c20e04(ppSVar6,pSVar5);
              (__this->fields)._JNLLKNHOBDG_k__BackingField = (KCFIOKDFHIB_o *)0x0;
              thunk_FUN_01c20e04(&__this->fields,0);
              MEMHEPBAJJA__ADKAJLAIBBM(__this,method_00);
              return;
            }
          }
        }
      }
    }
  }
LAB_034c70e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MAMEMHEFIKB()  [RVA 0x33C7190]
// MEMHEPBAJJA$$MAMEMHEFIKB @ RVA 0x33C7190

void MEMHEPBAJJA__MAMEMHEFIKB(MEMHEPBAJJA_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  MethodInfo *extraout_x1;
  MEMHEPBAJJA_Fields *pMVar2;
  
  if ((DAT_04567df7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10714/*"QuestParameters"*/);
    DAT_04567df7 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).JHFENACKNPG;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    method = (MethodInfo *)
             (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_10714/*"QuestParameters"*/,(pSVar1->klass->vtable)._51_get_Item.method);
    if (method != (MethodInfo *)0x0) {
      pSVar1 = (__this->fields).JHFENACKNPG;
      if (pSVar1 == (System_Xml_XmlNode_o *)0x0) goto LAB_034c722c;
      (*(pSVar1->klass->vtable)._25_RemoveChild.methodPtr)
                (pSVar1,method,(pSVar1->klass->vtable)._25_RemoveChild.method);
    }
    pMVar2 = &__this->fields;
    if (pMVar2->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) {
      pMVar2->_JNLLKNHOBDG_k__BackingField = (KCFIOKDFHIB_o *)0x0;
      thunk_FUN_01c20e04(pMVar2,0);
      return;
    }
    return;
  }
LAB_034c722c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public int IGBIPEOLJPK()  [RVA 0x33C7230]
// MEMHEPBAJJA$$IGBIPEOLJPK @ RVA 0x33C7230

int32_t MEMHEPBAJJA__IGBIPEOLJPK(MEMHEPBAJJA_o *__this,MethodInfo *method)

{
  KCFIOKDFHIB_o *pKVar1;
  
  pKVar1 = (__this->fields)._JNLLKNHOBDG_k__BackingField;
  if (pKVar1 != (KCFIOKDFHIB_o *)0x0) {
    return (pKVar1->fields).JKMLPKKLIDP;
  }
  return 0;
}


// ===== public void ADKAJLAIBBM()  [RVA 0x33C70E4]
// MEMHEPBAJJA$$ADKAJLAIBBM @ RVA 0x33C70E4

void MEMHEPBAJJA__ADKAJLAIBBM(MEMHEPBAJJA_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  KCFIOKDFHIB_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567df8 & 1) == 0) {
    FUN_01bab630(&KCFIOKDFHIB_TypeInfo);
    FUN_01bab630(&StringLiteral_10714/*"QuestParameters"*/);
    DAT_04567df8 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).JHFENACKNPG;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_10714/*"QuestParameters"*/,(pSVar1->klass->vtable)._51_get_Item.method);
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
      __this_00 = (KCFIOKDFHIB_o *)thunk_FUN_01bda818(KCFIOKDFHIB_TypeInfo);
      KCFIOKDFHIB___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
      (__this->fields)._JNLLKNHOBDG_k__BackingField = __this_00;
      thunk_FUN_01c20e04(&__this->fields,__this_00);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

