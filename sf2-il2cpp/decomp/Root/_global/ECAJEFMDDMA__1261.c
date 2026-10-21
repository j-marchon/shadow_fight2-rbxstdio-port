// TypeDefIndex 1261
// Namespace: 
// public class ECAJEFMDDMA : BOFEMGGNODC
// Fields:
//   private readonly bool LOEKILNCFAJ; // 0x61
//   private bool JPEGIBOACBJ; // 0x62
//   private bool BAKEAOMEGNN; // 0x63
//   private string MLLMBEEDACP; // 0x68
//   private string DEKCPPOJFEH; // 0x70
//   private string PPMPPALDABM; // 0x78
//   private string HPGIIPGAPFO; // 0x80

// ===== protected override string OFPHPMGMCAL()  [RVA 0x314A7F8]
// ECAJEFMDDMA$$OFPHPMGMCAL @ RVA 0x314A7F8

System_String_o * ECAJEFMDDMA__OFPHPMGMCAL(ECAJEFMDDMA_o *__this,MethodInfo *method)

{
  System_String_o *str2;
  MethodInfo *extraout_x1;
  System_String_o *pSVar1;
  
  if ((DAT_045667b1 & 1) == 0) {
                    /* try { // try from 0324a820 to 0334a827 has its CatchHandler @ 0324a89c */
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&StringLiteral_211/*"  locked="*/);
    DAT_045667b1 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).MLLMBEEDACP;
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0324a850 to 0334a85b has its CatchHandler @ 0324a894 */
    thunk_FUN_01ba7564(bool_TypeInfo,method);
  }
                    /* try { // try from 0324a85c to 0334a88b has its CatchHandler @ 0324a71c */
  str2 = System_Boolean__ToString((bool)((char)__this + 'b'),(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_211/*"  locked="*/,str2,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor(bool MJDICHGKPGE)  [RVA 0x314A87C]
// ECAJEFMDDMA$$.ctor @ RVA 0x314A87C

void ECAJEFMDDMA___ctor(ECAJEFMDDMA_o *__this,bool MJDICHGKPGE,MethodInfo *method)

{
                    /* try { // try from 0324a88c to 0334a88f has its CatchHandler @ 0324a898 */
                    /* try { // try from 0324a890 to 0334a8b3 has its CatchHandler @ 0324a71c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324a850 with catch @ 0324a894
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324a88c with catch @ 0324a898
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324a820 with catch @ 0324a89c
                        */
  if ((DAT_045667b2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 0324a8b4 to 0334a8b7 has its CatchHandler @ 0324a8e0 */
    DAT_045667b2 = 1;
  }
                    /* try { // try from 0324a8b8 to 0334a8ef has its CatchHandler @ 0324a71c */
  *(System_String_o **)&(__this->fields).LOEKILNCFAJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).MLLMBEEDACP = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 0324a8b4 with catch @ 0324a8e0 */
  (__this->fields).DEKCPPOJFEH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
                    /* try { // try from 0324a8f0 to 0334a8f7 has its CatchHandler @ 0324a90c */
  (__this->fields).PPMPPALDABM = StringLiteral_1/*""*/;
                    /* try { // try from 0324a8f8 to 0334a903 has its CatchHandler @ 0324a71c */
  thunk_FUN_01c20e04();
                    /* try { // try from 0324a904 to 0334a90b has its CatchHandler @ 0324a90c */
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super.field_0x51 = MJDICHGKPGE;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0324a8f0 with catch @ 0324a90c
                       catch(type#2 @ 00000000) { ... } // from try @ 0324a904 with catch @ 0324a90c
                        */
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x314A91C]
// ECAJEFMDDMA$$HNIHOIAMDPC @ RVA 0x314A91C

void ECAJEFMDDMA__HNIHOIAMDPC
               (ECAJEFMDDMA_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_045667b3 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8602/*"Locked"*/);
    FUN_01bab630(&StringLiteral_2816/*"AllEqualBattles"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_7590/*"Instant"*/);
    FUN_01bab630(&StringLiteral_11237/*"ReplayCount"*/);
    FUN_01bab630(&StringLiteral_7076/*"Hidden"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_045667b3 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_8602/*"Locked"*/,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
      (__this->fields).super.field_0x52 = bVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).MLLMBEEDACP = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_7590/*"Instant"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
          (__this->fields).super.field_0x53 = bVar1;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                             (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_7076/*"Hidden"*/,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
            *(System_String_o **)&(__this->fields).LOEKILNCFAJ = pSVar4;
            thunk_FUN_01c20e04();
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                               (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_11237/*"ReplayCount"*/,(MethodInfo *)0x0);
              pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              (__this->fields).DEKCPPOJFEH = pSVar4;
              thunk_FUN_01c20e04();
              pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                       (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                                 (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar2,StringLiteral_2816/*"AllEqualBattles"*/,(MethodInfo *)0x0);
                pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
                ppSVar5 = &(__this->fields).PPMPPALDABM;
                *ppSVar5 = pSVar4;
                thunk_FUN_01c20e04(ppSVar5,pSVar4);
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


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL OKBIKHHKOEN)  [RVA 0x314AB78]
// ECAJEFMDDMA$$MAHFCKJGBPP @ RVA 0x314AB78

void ECAJEFMDDMA__MAHFCKJGBPP(ECAJEFMDDMA_o *__this,PKHMIGFEJCL_o *OKBIKHHKOEN,MethodInfo *method)

{
  int32_t GEOFJHKICMD;
  Il2CppObject *pIVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  LEGDPJHPEOB_o *__this_00;
  PKHMIGFEJCL_o **ppPVar5;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_01;
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar6;
  DNELIPCHKLK_o *__this_02;
  ACHLOMELAJE_o *pAVar7;
  NLPJLHOEAOE_o *__this_03;
  MEJIKMPNBNL_o *BHHBEIACGPB;
  MKIBNAAANPO_o *pMVar8;
  OOMHDDBCBJP_o *pOVar9;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_04;
  long lVar10;
  Nekki_SF2_GUI_Map_MapScene_o *__this_05;
  System_String_o *OOGPLJBADCD;
  double dVar11;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045667b4 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045667b4 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,OKBIKHHKOEN,(MethodInfo *)0x0);
  __this_00 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar5 = &(__this_00->fields).AAJBIMFNMBB;
    *ppPVar5 = OKBIKHHKOEN;
    thunk_FUN_01c20e04(ppPVar5,OKBIKHHKOEN);
    __this_01 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_01,(MethodInfo *)0x0);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_00,(__this->fields).MLLMBEEDACP,__this_01,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    pEVar6 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar6,(MethodInfo *)0x0);
    bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    if (!bVar2) {
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_00,(__this->fields).DEKCPPOJFEH,pEVar6,false,
                 (System_String_o *)0x0,(MethodInfo *)0x0);
    }
    if (pEVar6 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      dVar11 = (pEVar6->fields).HNFHNNLOLGK;
      GEOFJHKICMD = -0x80000000;
      if (dVar11 != INFINITY) {
        GEOFJHKICMD = (int)dVar11;
      }
      pEVar6 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
      EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar6,(MethodInfo *)0x0);
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_00,*(System_String_o **)&(__this->fields).LOEKILNCFAJ,
                 pEVar6,false,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (pEVar6 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
        bVar2 = Util__JFJCDAJGFKD((float)(pEVar6->fields).HNFHNNLOLGK,1.0,0.01,(MethodInfo *)0x0);
        __this_02 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
        DNELIPCHKLK___ctor(__this_02,(MethodInfo *)0x0);
        if ((__this_01 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) && (__this_02 != (DNELIPCHKLK_o *)0x0))
        {
          DNELIPCHKLK__LGOFNFEIKFB(__this_02,(__this_01->fields).DFJBJLBLBGB,(MethodInfo *)0x0);
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
          pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar7 != (ACHLOMELAJE_o *)0x0) {
            ACHLOMELAJE__OIMBEHKPFIC
                      (pAVar7,__this_02,true,(bool)(__this->fields).super.field_0x51,
                       (bool)(__this->fields).super.field_0x52,bVar2,GEOFJHKICMD,(MethodInfo *)0x0);
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar7 != (ACHLOMELAJE_o *)0x0) {
              CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar7,false,(MethodInfo *)0x0);
              __this_03 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
              if (__this_03 != (NLPJLHOEAOE_o *)0x0) {
                NLPJLHOEAOE__FDFHMHPOHKA(__this_03,(MethodInfo *)0x0);
                BHHBEIACGPB = NLPJLHOEAOE__KHHBHBLIANB
                                        ((__this_02->fields).GDPFBDIJNHA,(MethodInfo *)0x0);
                if (DAT_045663a7 == '\0') {
                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                  DAT_045663a7 = '\x01';
                }
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pMVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_JLCHCNLLPEC_k__BackingField;
                if (pMVar8 != (MKIBNAAANPO_o *)0x0) {
                  bVar2 = MKIBNAAANPO__ALPHLMLJFJJ(pMVar8,BHHBEIACGPB,(MethodInfo *)0x0);
                  if ((BHHBEIACGPB != (MEJIKMPNBNL_o *)0x0) &&
                     (pOVar9 = MEJIKMPNBNL__KKPHCCBPIMN
                                         (BHHBEIACGPB,(__this_02->fields).GJFJPLHCBKJ,
                                          (MethodInfo *)0x0), pOVar9 != (OOMHDDBCBJP_o *)0x0)) {
                    (pOVar9->fields).HHDBIGKBMEC = (bool_conflict)(__this->fields).super.field_0x51;
                  }
                  OOGPLJBADCD = (__this->fields).PPMPPALDABM;
                  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  bVar3 = MFBNFJGBPBB__EDBBDECOKAF(OKBIKHHKOEN,OOGPLJBADCD,(MethodInfo *)0x0);
                  if ((BHHBEIACGPB != (MEJIKMPNBNL_o *)0x0) && (bVar3)) {
                    __this_04 = (BHHBEIACGPB->fields).BDCBJJGNPMC;
                    if (__this_04 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0)
                    goto LAB_0324b0e0;
                    System_Collections_Generic_List<object>__GetEnumerator
                              (&local_88,(System_Collections_Generic_List_object__o *)__this_04,
                               Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
                    local_70.fields._index = local_88.fields._index;
                    local_70.fields._version = local_88.fields._version;
                    local_70.fields._list = local_88.fields._list;
                    local_70.fields._current = local_88.fields._current;
                    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                             (&local_70,
                                              Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                                             ), pIVar1 = local_70.fields._current, bVar3) {
                      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      bVar3 = System_String__op_Equality
                                        (local_70.fields._current[1].monitor,
                                         (__this_02->fields).GJFJPLHCBKJ,(MethodInfo *)0x0);
                      if (bVar3) {
                        *(undefined1 *)&pIVar1[0xb].klass = (__this->fields).super.field_0x51;
                      }
                    }
                    System_Collections_Generic_List_Enumerator<object>__Dispose
                              (&local_70,
                               Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__
                              );
                  }
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  if (DAT_045663a7 == '\0') {
                    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    DAT_045663a7 = '\x01';
                  }
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pMVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_JLCHCNLLPEC_k__BackingField;
                  if (pMVar8 != (MKIBNAAANPO_o *)0x0) {
                    bVar3 = MKIBNAAANPO__ALPHLMLJFJJ(pMVar8,BHHBEIACGPB,(MethodInfo *)0x0);
                    lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01b81620(lVar10);
                    }
                    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01b81620();
                    }
                    __this_05 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar10 + 0xb8);
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
                    }
                    bVar4 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0
                                       ,(MethodInfo *)0x0);
                    if (bVar4) {
                      if (bVar2 == bVar3) {
                        if (__this_05 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_0324b0e0;
                      }
                      else {
                        if (__this_05 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_0324b0e0;
                        Nekki_SF2_GUI_Map_MapScene__ReloadZones(__this_05,(MethodInfo *)0x0);
                      }
                      Nekki_SF2_GUI_Map_MapScene__ActiveBattleByFightIDS
                                (__this_05,__this_02,(bool)(__this->fields).super.field_0x51,false,
                                 (bool)(__this->fields).super.field_0x53,(MethodInfo *)0x0);
                    }
                    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0324b0e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

