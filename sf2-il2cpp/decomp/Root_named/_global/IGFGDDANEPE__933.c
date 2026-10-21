// TypeDefIndex 933
// Namespace: 
// public class IGFGDDANEPE
// Fields:
//   private string NPFMOEOIEKM; // 0x10
//   private HOOAAGABMBL PCBECBEFJOI; // 0x18
//   private bool OFIKEBGDMBE; // 0x20
//   private ObscuredInt DHPCMDOLAHE; // 0x24
//   private ObscuredLong MCCADBLBPMN; // 0x38
//   private ObscuredInt NOBPPMJKPLM; // 0x58
//   private ObscuredInt DCFOJDEFIHG; // 0x68
//   private XmlNode DMLGJFCNNJF; // 0x78
//   private bool MMNCAIGLMJB; // 0x80
//   private AMJMGFCCAKN HJLEJIJKJKD; // 0x88
//   private HOOAAGABMBL EGAAAFHLNOE; // 0x90
//   private HOOAAGABMBL LFPOIAJDMBK; // 0x98
//   private bool GOJELHDHCDP; // 0xA0
//   private bool DKNFBKANNGN; // 0xA1
//   private bool IIPJCIFKCIH; // 0xA2
//   private bool KGBJHBCIOGH; // 0xA3
//   private string MLEHIIGFDKM; // 0xA8
//   private readonly List<PerkInfoItem> PAPANCDPPIF; // 0xB0
//   private int APCAEINELHJ; // 0xB8

// ===== public string KCHJCGEMCGE()  [RVA 0x30A2744]
// IGFGDDANEPE$$KCHJCGEMCGE @ RVA 0x30A2744

System_String_o * IGFGDDANEPE__KCHJCGEMCGE(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}


// ===== private void OKEGPAKHPDC(List<PKKLIJLIKGF> LDAIPGBJEOG)  [RVA 0x30A274C]
// IGFGDDANEPE$$OKEGPAKHPDC @ RVA 0x30A274C

void IGFGDDANEPE__OKEGPAKHPDC
               (IGFGDDANEPE_o *__this,System_Collections_Generic_List_PKKLIJLIKGF__o *LDAIPGBJEOG,
               MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  Il2CppObject *pIVar3;
  System_Predicate_T__o *match;
  Il2CppObject *item;
  System_Xml_XmlNode_o *pSVar4;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566151 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_IGFGDDANEPE_GAOEJMFJPEK_LBHBEHKKCFC__);
    FUN_01bab630(&IGFGDDANEPE_GAOEJMFJPEK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Remove__);
    FUN_01bab630(&System_Predicate<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    DAT_04566151 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).DMLGJFCNNJF;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlNode_o *)
             (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar2,StringLiteral_5703/*"Enchantments"*/,(pSVar2->klass->vtable)._51_get_Item.method);
    if (LDAIPGBJEOG != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)LDAIPGBJEOG,
                 Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
          return;
        }
        pIVar3 = (Il2CppObject *)thunk_FUN_01bda818(IGFGDDANEPE_GAOEJMFJPEK_TypeInfo);
        System_Object___ctor(pIVar3,(MethodInfo *)0x0);
        if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar3 = pIVar3 + 1;
        pIVar3->klass = (Il2CppClass *)local_80.fields._current;
        thunk_FUN_01c20e04(pIVar3);
        pSVar5 = (__this->fields).PAPANCDPPIF;
        match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<PerkInfoItem>_TypeInfo);
        System_Predicate<object>___ctor();
        if (pSVar5 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)pSVar5,match,
                          Method_System_Collections_Generic_List<PerkInfoItem>_Find__);
        bVar1 = false;
        if (item != (Il2CppObject *)0x0) {
          pSVar5 = (__this->fields).PAPANCDPPIF;
          if (pSVar5 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = System_Collections_Generic_List<object>__Remove
                            ((System_Collections_Generic_List_object__o *)pSVar5,item,
                             Method_System_Collections_Generic_List<PerkInfoItem>_Remove__);
        }
        if (pIVar3->klass == (Il2CppClass *)0x0) break;
        pSVar4 = EIABCPKDEBD__MHJPHEMBOLK
                           (pSVar2,StringLiteral_10213/*"Perk"*/,StringLiteral_9327/*"Name"*/,
                            (System_String_o *)(pIVar3->klass->_1).name,(MethodInfo *)0x0);
        if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
          if (pSVar2 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
                    (pSVar2,pSVar4,(pSVar2->klass->vtable)._25_RemoveChild.method);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(bVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x30A2A74]
// IGFGDDANEPE$$RandomizeObscuredVars @ RVA 0x30A2A74

void IGFGDDANEPE__RandomizeObscuredVars(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  System_Action_HEFOANCOHDC__o **ppSVar1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  System_Action_HEFOANCOHDC__o *action;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_03;
  
  if ((DAT_04566152 & 1) == 0) {
    FUN_01bab630(&System_Action<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_ForEach__);
    FUN_01bab630(&Method_IGFGDDANEPE_<>c_ODNOFIFMFEA__);
    FUN_01bab630(&IGFGDDANEPE_<>c_TypeInfo);
    DAT_04566152 = 1;
  }
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &(__this->fields).DHPCMDOLAHE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&(__this->fields).MCCADBLBPMN,(MethodInfo *)0x0);
  __this_02.fields.fakeValue = 0;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields.inited = false;
  __this_02.fields._14_2_ = 0;
  __this_02.fields._0_8_ = &(__this->fields).NOBPPMJKPLM;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_02,in_x2);
  __this_03.fields.fakeValue = 0;
  __this_03.fields.fakeValueActive = false;
  __this_03.fields.inited = false;
  __this_03.fields._14_2_ = 0;
  __this_03.fields._0_8_ = &(__this->fields).DCFOJDEFIHG;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_03,in_x2);
  __this_00 = (__this->fields).PAPANCDPPIF;
  if ((IGFGDDANEPE_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = IGFGDDANEPE_<>c_TypeInfo->static_fields->__9__97_0;
  if (action == (System_Action_HEFOANCOHDC__o *)0x0) {
    if ((IGFGDDANEPE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_HEFOANCOHDC__o *)thunk_FUN_01bda818(System_Action<PerkInfoItem>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &IGFGDDANEPE_<>c_TypeInfo->static_fields->__9__97_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<PerkInfoItem>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int LDJLMEFOMLG()  [RVA 0x30A2BA8]
// IGFGDDANEPE$$LDJLMEFOMLG @ RVA 0x30A2BA8

int32_t IGFGDDANEPE__LDJLMEFOMLG(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).DHPCMDOLAHE.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public bool FAOJKCPGECC()  [RVA 0x30A2BBC]
// IGFGDDANEPE$$FAOJKCPGECC @ RVA 0x30A2BBC

bool IGFGDDANEPE__FAOJKCPGECC(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  return (__this->fields).GOJELHDHCDP;
}


// ===== public bool DABHOGHGNBB()  [RVA 0x30A2BC4]
// IGFGDDANEPE$$DABHOGHGNBB @ RVA 0x30A2BC4

bool IGFGDDANEPE__DABHOGHGNBB(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566153 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14587/*"Upgrade"*/);
    DAT_04566153 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).MLEHIIGFDKM;
  if (__this_00 != (System_String_o *)0x0) {
    bVar1 = System_String__Equals(__this_00,StringLiteral_14587/*"Upgrade"*/,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public AMJMGFCCAKN FJKBJKOGCJL()  [RVA 0x30A2C18]
// IGFGDDANEPE$$FJKBJKOGCJL @ RVA 0x30A2C18

AMJMGFCCAKN_o * IGFGDDANEPE__FJKBJKOGCJL(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  return (__this->fields).HJLEJIJKJKD;
}


// ===== public void OEMBIADDDEE(bool CJNHFNHJHPE)  [RVA 0x30A2C20]
// IGFGDDANEPE$$OEMBIADDDEE @ RVA 0x30A2C20

void IGFGDDANEPE__OEMBIADDDEE(IGFGDDANEPE_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
  if ((DAT_04566154 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5837/*"Equipped"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04566154 = 1;
  }
  (__this->fields).OFIKEBGDMBE = CJNHFNHJHPE;
  if ((__this->fields).MMNCAIGLMJB != false) {
    pSVar2 = (__this->fields).DMLGJFCNNJF;
    if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_5837/*"Equipped"*/,(MethodInfo *)0x0);
        if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
          EIABCPKDEBD__HBGAGFJBGKD
                    ((__this->fields).DMLGJFCNNJF,StringLiteral_5837/*"Equipped"*/,(MethodInfo *)0x0);
        }
        pSVar2 = (__this->fields).DMLGJFCNNJF;
        if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
          if ((pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
             (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_5837/*"Equipped"*/,(MethodInfo *)0x0),
             pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
            puVar1 = &StringLiteral_1606/*"1"*/;
            if (!CJNHFNHJHPE) {
              puVar1 = &StringLiteral_1567/*"0"*/;
            }
                    /* WARNING: Could not recover jumptable at 0x031a2d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar4,*puVar1,(pSVar4->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void CCOEOCPGJBG(string CJNHFNHJHPE)  [RVA 0x30A2D34]
// IGFGDDANEPE$$CCOEOCPGJBG @ RVA 0x30A2D34

void IGFGDDANEPE__CCOEOCPGJBG(IGFGDDANEPE_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04566155 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2724/*"AcquireType"*/);
    DAT_04566155 = 1;
  }
  ppSVar4 = &(__this->fields).MLEHIIGFDKM;
  *ppSVar4 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar4,CJNHFNHJHPE);
  if ((__this->fields).MMNCAIGLMJB != false) {
    pSVar1 = (__this->fields).DMLGJFCNNJF;
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_2724/*"AcquireType"*/,(MethodInfo *)0x0);
        if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
          EIABCPKDEBD__HBGAGFJBGKD
                    ((__this->fields).DMLGJFCNNJF,StringLiteral_2724/*"AcquireType"*/,(MethodInfo *)0x0);
        }
        pSVar1 = (__this->fields).DMLGJFCNNJF;
        if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
          if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
             (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_2724/*"AcquireType"*/,(MethodInfo *)0x0),
             pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x031a2e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar3,*ppSVar4,(pSVar3->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public HOOAAGABMBL DHNBLNPDGMD()  [RVA 0x30A2E18]
// IGFGDDANEPE$$DHNBLNPDGMD @ RVA 0x30A2E18

HOOAAGABMBL_o * IGFGDDANEPE__DHNBLNPDGMD(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  Roster_o *pAVar2;
  HOOAAGABMBL_o *pHVar3;
  
  if ((DAT_04566156 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566156 = 1;
  }
  method_00 = (MethodInfo *)0x0;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).NOBPPMJKPLM.fields,(MethodInfo *)0x0);
  if ((0 < iVar1) && (pHVar3 = (__this->fields).PCBECBEFJOI, pHVar3 != (HOOAAGABMBL_o *)0x0)) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).NOBPPMJKPLM.fields,(MethodInfo *)0x0);
    pHVar3 = HOOAAGABMBL__PIGMAMNLCMH(pHVar3,iVar1,(MethodInfo *)0x0);
    return pHVar3;
  }
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (Roster_o *)0x0) {
    pHVar3 = IGFGDDANEPE__JPNNODJPOCL(__this,(pAVar2->fields).CDAFCFNLDND,method_00);
    return pHVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DJJHOOKLHHL(int CJNHFNHJHPE)  [RVA 0x30A2F6C]
// IGFGDDANEPE$$DJJHOOKLHHL @ RVA 0x30A2F6C

void IGFGDDANEPE__DJJHOOKLHHL(IGFGDDANEPE_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar6;
  int32_t local_24;
  
  local_24 = CJNHFNHJHPE;
  if ((DAT_04566157 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14589/*"UpgradeLevel"*/);
    DAT_04566157 = 1;
  }
  CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  bVar1 = (__this->fields).MMNCAIGLMJB;
  (__this->fields).DCFOJDEFIHG.fields = CVar6;
  if (bVar1 == false) {
    return;
  }
  pSVar2 = (__this->fields).DMLGJFCNNJF;
  if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_14589/*"UpgradeLevel"*/,(MethodInfo *)0x0);
    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
      EIABCPKDEBD__HBGAGFJBGKD((__this->fields).DMLGJFCNNJF,StringLiteral_14589/*"UpgradeLevel"*/,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).DMLGJFCNNJF;
    if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
       (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
       pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_14589/*"UpgradeLevel"*/,(MethodInfo *)0x0);
      pSVar5 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pSVar5,(pSVar4->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int LGIMDOAMCNG()  [RVA 0x30A3064]
// IGFGDDANEPE$$LGIMDOAMCNG @ RVA 0x30A3064

int32_t IGFGDDANEPE__LGIMDOAMCNG(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).DCFOJDEFIHG.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public List<PerkInfoItem> FIAHMKOGKNH()  [RVA 0x30A3074]
// IGFGDDANEPE$$FIAHMKOGKNH @ RVA 0x30A3074

System_Collections_Generic_List_HEFOANCOHDC__o *
IGFGDDANEPE__FIAHMKOGKNH(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  return (__this->fields).PAPANCDPPIF;
}


// ===== public XmlNode NBLFIEEHECP()  [RVA 0x30A307C]
// IGFGDDANEPE$$NBLFIEEHECP @ RVA 0x30A307C

System_Xml_XmlNode_o * IGFGDDANEPE__NBLFIEEHECP(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  return (__this->fields).DMLGJFCNNJF;
}


// ===== public void .ctor(int EBDDELGICGB, HOOAAGABMBL IHGFKLOLPOK, bool FCPLINEFDIO, int DFIBGGDJPLM, int JLAFGLDIFOC = -1, long LFJGFLNMBMC = 0, int LDPENJNJGDI = -1, bool DJMBGIPJDNA = True, string NMABNFMBFJF = "Item")  [RVA 0x30A3084]
// IGFGDDANEPE$$.ctor @ RVA 0x30A3084

void IGFGDDANEPE___ctor(IGFGDDANEPE_o *__this,int32_t EBDDELGICGB,HOOAAGABMBL_o *IHGFKLOLPOK,
                       bool FCPLINEFDIO,int32_t DFIBGGDJPLM,int32_t JLAFGLDIFOC,int64_t LFJGFLNMBMC,
                       int32_t LDPENJNJGDI,bool DJMBGIPJDNA,System_String_o *NMABNFMBFJF,
                       MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar1;
  System_Xml_XmlElement_o *AHDGNOJPPIB;
  Roster_o *pAVar2;
  MethodInfo *in_stack_ffffffffffffff88;
  
  if ((DAT_04566158 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    DAT_04566158 = 1;
  }
  __this_00 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
  ppSVar1 = &(__this->fields).PAPANCDPPIF;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).APCAEINELHJ = 0x34;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).APCAEINELHJ = EBDDELGICGB;
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (Roster_o *)0x0) {
    if ((pAVar2->fields).LNPJFGHNPFN != (System_Xml_XmlNode_o *)0x0) {
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
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar2 == (Roster_o *)0x0) ||
         (AHDGNOJPPIB = EIABCPKDEBD__BHPIHHJHELJ
                                  ((pAVar2->fields).LNPJFGHNPFN,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0
                                  ), IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0)) goto LAB_031a3274;
      IGFGDDANEPE__GIENGNEGHPJ
                (__this,(System_Xml_XmlNode_o *)AHDGNOJPPIB,
                 (IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField,FCPLINEFDIO,DFIBGGDJPLM,
                 JLAFGLDIFOC,LFJGFLNMBMC,LDPENJNJGDI,DJMBGIPJDNA,NMABNFMBFJF,true,
                 in_stack_ffffffffffffff88);
    }
    return;
  }
LAB_031a3274:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long OMMIKNKEKJN()  [RVA 0x30A3500]
// IGFGDDANEPE$$OMMIKNKEKJN @ RVA 0x30A3500

int64_t IGFGDDANEPE__OMMIKNKEKJN(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_30;
  
  local_30.fields.fakeValueActive = (__this->fields).MCCADBLBPMN.fields.fakeValueActive;
  local_30.fields.inited = (__this->fields).MCCADBLBPMN.fields.inited;
  local_30.fields._26_6_ = *(undefined6 *)&(__this->fields).MCCADBLBPMN.fields.field_0x1a;
  local_30.fields.fakeValue = (__this->fields).MCCADBLBPMN.fields.fakeValue;
  local_30.fields.hiddenValue = (__this->fields).MCCADBLBPMN.fields.hiddenValue;
  local_30.fields.currentCryptoKey = (__this->fields).MCCADBLBPMN.fields.currentCryptoKey;
                    /* try { // try from 031a3514 to 032a351b has its CatchHandler @ 031a3574 */
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_30,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public void PICGGLNNJFA(int CJNHFNHJHPE)  [RVA 0x30A352C]
// IGFGDDANEPE$$PICGGLNNJFA @ RVA 0x30A352C

void IGFGDDANEPE__PICGGLNNJFA(IGFGDDANEPE_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool HFJDDNBBENI;
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar5;
  int32_t local_24;
  
                    /* try { // try from 031a3534 to 032a3543 has its CatchHandler @ 031a3570 */
                    /* try { // try from 031a3544 to 032a3567 has its CatchHandler @ 031a3478 */
  local_24 = CJNHFNHJHPE;
  if ((DAT_04566159 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
                    /* try { // try from 031a3568 to 032a356b has its CatchHandler @ 031a356c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3568 with catch @ 031a356c
                       try { // try from 031a356c to 032a358b has its CatchHandler @ 031a3478 */
    FUN_01bab630(&StringLiteral_4824/*"Count"*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3534 with catch @ 031a3570
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3514 with catch @ 031a3574
                        */
    DAT_04566159 = 1;
  }
  CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).MLEHIIGFDKM;
                    /* try { // try from 031a358c to 032a358f has its CatchHandler @ 031a35b0 */
  (__this->fields).DHPCMDOLAHE.fields = CVar5;
                    /* try { // try from 031a3590 to 032a35b7 has its CatchHandler @ 031a3478 */
  HFJDDNBBENI = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031a358c with catch @ 031a35b0 */
    thunk_FUN_01ba7564(GameUtils_TypeInfo);
  }
                    /* try { // try from 031a35b8 to 032a35bf has its CatchHandler @ 031a35d4 */
                    /* try { // try from 031a35c0 to 032a35cb has its CatchHandler @ 031a3478 */
  GameUtils__NOIIBMIKOHL(__this,HFJDDNBBENI,(MethodInfo *)0x0);
  if ((__this->fields).MMNCAIGLMJB == false) {
    return;
  }
                    /* try { // try from 031a35cc to 032a35d3 has its CatchHandler @ 031a35d4 */
  pSVar1 = (__this->fields).DMLGJFCNNJF;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031a35b8 with catch @ 031a35d4
                       catch(type#2 @ 00000000) { ... } // from try @ 031a35cc with catch @ 031a35d4
                        */
                    /* try { // try from 031a35d8 to 032a3673 has its CatchHandler @ 031a35d8
                       catch() { ... } // from try @ 031a35d8 with catch @ 031a35d8
                       catch() { ... } // from try @ 031a36a4 with catch @ 031a35d8
                       catch() { ... } // from try @ 031a36cc with catch @ 031a35d8
                       catch() { ... } // from try @ 031a36f0 with catch @ 031a35d8
                       catch() { ... } // from try @ 031a3720 with catch @ 031a35d8 */
  if ((pSVar1 != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_4824/*"Count"*/,(MethodInfo *)0x0);
    if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
      EIABCPKDEBD__HBGAGFJBGKD((__this->fields).DMLGJFCNNJF,StringLiteral_4824/*"Count"*/,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields).DMLGJFCNNJF;
    if ((pSVar1 != (System_Xml_XmlNode_o *)0x0) &&
       (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method),
       pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_4824/*"Count"*/,(MethodInfo *)0x0);
      pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
        (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar3,pSVar4,(pSVar3->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long PEFAGDNIMCK()  [RVA 0x30A3674]
// IGFGDDANEPE$$PEFAGDNIMCK @ RVA 0x30A3674

int64_t IGFGDDANEPE__PEFAGDNIMCK(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  AMJMGFCCAKN_o *__this_00;
  int64_t iVar1;
  
                    /* try { // try from 031a3674 to 032a367b has its CatchHandler @ 031a36d4 */
  __this_00 = (__this->fields).HJLEJIJKJKD;
  if (__this_00 != (AMJMGFCCAKN_o *)0x0) {
    iVar1 = AMJMGFCCAKN__IEMNJCLKOIP(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


// ===== public bool IKCDGFNMKPF()  [RVA 0x30A3688]
// IGFGDDANEPE$$IKCDGFNMKPF @ RVA 0x30A3688

bool IGFGDDANEPE__IKCDGFNMKPF(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  return (__this->fields).KGBJHBCIOGH;
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x30A3690]
// IGFGDDANEPE$$HCOCAAIGNNL @ RVA 0x30A3690

void IGFGDDANEPE__HCOCAAIGNNL(IGFGDDANEPE_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  
                    /* try { // try from 031a3694 to 032a36a3 has its CatchHandler @ 031a36d0 */
                    /* try { // try from 031a36a4 to 032a36c7 has its CatchHandler @ 031a35d8 */
  if ((DAT_0456615a & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_0456615a = 1;
  }
  (__this->fields).NPFMOEOIEKM = CJNHFNHJHPE;
                    /* try { // try from 031a36c8 to 032a36cb has its CatchHandler @ 031a36cc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a36c8 with catch @ 031a36cc
                       try { // try from 031a36cc to 032a36eb has its CatchHandler @ 031a35d8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3694 with catch @ 031a36d0
                        */
  thunk_FUN_01c20e04(&__this->fields,CJNHFNHJHPE);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3674 with catch @ 031a36d4
                        */
  if ((__this->fields).MMNCAIGLMJB != false) {
    pSVar1 = (__this->fields).DMLGJFCNNJF;
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031a36ec to 032a36ef has its CatchHandler @ 031a3710 */
                    /* try { // try from 031a36f0 to 032a3717 has its CatchHandler @ 031a35d8 */
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* catch() { ... } // from try @ 031a36ec with catch @ 031a3710 */
                    /* try { // try from 031a3718 to 032a371f has its CatchHandler @ 031a3734 */
          EIABCPKDEBD__HBGAGFJBGKD
                    ((__this->fields).DMLGJFCNNJF,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        }
                    /* try { // try from 031a3720 to 032a372b has its CatchHandler @ 031a35d8 */
        pSVar1 = (__this->fields).DMLGJFCNNJF;
        if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031a372c to 032a3733 has its CatchHandler @ 031a3734 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031a3718 with catch @ 031a3734
                       catch(type#2 @ 00000000) { ... } // from try @ 031a372c with catch @ 031a3734
                        */
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 031a3738 to 032a37d3 has its CatchHandler @ 031a3738
                       catch() { ... } // from try @ 031a3738 with catch @ 031a3738
                       catch() { ... } // from try @ 031a3804 with catch @ 031a3738
                       catch() { ... } // from try @ 031a382c with catch @ 031a3738
                       catch() { ... } // from try @ 031a3850 with catch @ 031a3738
                       catch() { ... } // from try @ 031a3880 with catch @ 031a3738 */
          if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
             (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0),
             pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x031a3760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar3,CJNHFNHJHPE,(pSVar3->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public PerkInfoItem MNKGCEAHBBI()  [RVA 0x30A3774]
// IGFGDDANEPE$$MNKGCEAHBBI @ RVA 0x30A3774

PerkInfoItem_o * IGFGDDANEPE__MNKGCEAHBBI(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  MethodInfo *extraout_x1;
  PerkInfoItem_o *pHVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456615b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    DAT_0456615b = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PAPANCDPPIF;
                    /* try { // try from 031a37d4 to 032a37db has its CatchHandler @ 031a3834 */
  if (__this_00 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
                    /* try { // try from 031a37f4 to 032a3803 has its CatchHandler @ 031a3830 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
  do {
                    /* try { // try from 031a3804 to 032a3827 has its CatchHandler @ 031a3738 */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    if (!bVar1) {
      pHVar2 = (PerkInfoItem_o *)0x0;
      break;
    }
    if ((PerkInfoItem_o *)local_38.fields._current == (PerkInfoItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar2 = (PerkInfoItem_o *)local_38.fields._current;
  } while (((PerkInfoItem_Fields *)((long)local_38.fields._current + 0x10))->OCABLLPNEGL != 0);
                    /* try { // try from 031a3828 to 032a382b has its CatchHandler @ 031a382c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3828 with catch @ 031a382c
                       try { // try from 031a382c to 032a384b has its CatchHandler @ 031a3738 */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a37f4 with catch @ 031a3830
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a37d4 with catch @ 031a3834
                        */
  return pHVar2;
}


// ===== public HOOAAGABMBL JGBDIHJDIHD()  [RVA 0x30A38B4]
// IGFGDDANEPE$$JGBDIHJDIHD @ RVA 0x30A38B4

HOOAAGABMBL_o * IGFGDDANEPE__JGBDIHJDIHD(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = 0x18;
  if ((__this->fields).EGAAAFHLNOE != (HOOAAGABMBL_o *)0x0) {
    lVar1 = 0x90;
  }
  return *(HOOAAGABMBL_o **)((long)&__this->klass + lVar1);
}


// ===== private void DCIBJNCLIKP()  [RVA 0x30A38D0]
// IGFGDDANEPE$$DCIBJNCLIKP @ RVA 0x30A38D0

void IGFGDDANEPE__DCIBJNCLIKP(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  Il2CppObject *item;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlNode_o *pSVar3;
  int index;
  
  if ((DAT_0456615c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
                    /* try { // try from 031a3934 to 032a393b has its CatchHandler @ 031a3994 */
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    DAT_0456615c = 1;
  }
  pSVar1 = (__this->fields).PAPANCDPPIF;
  if (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* try { // try from 031a3954 to 032a3963 has its CatchHandler @ 031a3990 */
                    /* try { // try from 031a3964 to 032a3987 has its CatchHandler @ 031a3898 */
    index = 0;
    do {
      while( true ) {
        if ((pSVar1->fields)._size <= index) {
          return;
        }
                    /* try { // try from 031a3988 to 032a398b has its CatchHandler @ 031a398c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3988 with catch @ 031a398c
                       try { // try from 031a398c to 032a39ab has its CatchHandler @ 031a3898 */
        item = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3954 with catch @ 031a3990
                        */
        if (item == (Il2CppObject *)0x0) goto LAB_031a3a1c;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3934 with catch @ 031a3994
                        */
        if (*(int *)((long)&item[0xd].klass + 4) != 0) break;
        pSVar1 = (__this->fields).PAPANCDPPIF;
        if (pSVar1 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_031a3a1c;
                    /* try { // try from 031a39ac to 032a39af has its CatchHandler @ 031a39d0 */
                    /* try { // try from 031a39b0 to 032a39d7 has its CatchHandler @ 031a3898 */
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar1,item,
                   Method_System_Collections_Generic_List<PerkInfoItem>_Remove__);
        pSVar2 = (__this->fields).DMLGJFCNNJF;
        if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_031a3a1c;
        pSVar2 = (System_Xml_XmlNode_o *)
                 (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                           (pSVar2,StringLiteral_5703/*"Enchantments"*/,(pSVar2->klass->vtable)._51_get_Item.method);
                    /* catch() { ... } // from try @ 031a39ac with catch @ 031a39d0 */
                    /* try { // try from 031a39d8 to 032a39df has its CatchHandler @ 031a39f4 */
                    /* try { // try from 031a39e0 to 032a39eb has its CatchHandler @ 031a3898 */
        pSVar3 = EIABCPKDEBD__MHJPHEMBOLK
                           (pSVar2,StringLiteral_10213/*"Perk"*/,StringLiteral_9327/*"Name"*/,
                            (System_String_o *)item[4].klass,(MethodInfo *)0x0);
        if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_031a3a1c;
                    /* try { // try from 031a39ec to 032a39f3 has its CatchHandler @ 031a39f4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031a39d8 with catch @ 031a39f4
                       catch(type#2 @ 00000000) { ... } // from try @ 031a39ec with catch @ 031a39f4
                        */
                    /* try { // try from 031a39f8 to 032a3a9b has its CatchHandler @ 031a39f8
                       catch() { ... } // from try @ 031a39f8 with catch @ 031a39f8
                       catch() { ... } // from try @ 031a3ad0 with catch @ 031a39f8
                       catch() { ... } // from try @ 031a3afc with catch @ 031a39f8
                       catch() { ... } // from try @ 031a3b20 with catch @ 031a39f8
                       catch() { ... } // from try @ 031a3b50 with catch @ 031a39f8 */
        (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._25_RemoveChild.method);
        pSVar1 = (__this->fields).PAPANCDPPIF;
        if (pSVar1 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_031a3a1c;
      }
      pSVar1 = (__this->fields).PAPANCDPPIF;
      index = index + 1;
    } while (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0);
  }
LAB_031a3a1c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool NJEADKGGIJH()  [RVA 0x30A3A38]
// IGFGDDANEPE$$NJEADKGGIJH @ RVA 0x30A3A38

bool IGFGDDANEPE__NJEADKGGIJH(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).DHPCMDOLAHE.fields,(MethodInfo *)0x0);
  return 0 < iVar1;
}


// ===== public void ECPOIIMILFO()  [RVA 0x30A3A60]
// IGFGDDANEPE$$ECPOIIMILFO @ RVA 0x30A3A60

void IGFGDDANEPE__ECPOIIMILFO(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  AMJMGFCCAKN_o **ppAVar1;
  
  if ((DAT_0456615d & 1) == 0) {
    FUN_01bab630(&StringLiteral_11107/*"RecipeDelivery"*/);
    DAT_0456615d = 1;
  }
  ppAVar1 = &(__this->fields).HJLEJIJKJKD;
  *ppAVar1 = (AMJMGFCCAKN_o *)0x0;
                    /* try { // try from 031a3a9c to 032a3aa3 has its CatchHandler @ 031a3b04 */
  thunk_FUN_01c20e04(ppAVar1,0);
  EIABCPKDEBD__LKPNNANEJKF((__this->fields).DMLGJFCNNJF,StringLiteral_11107/*"RecipeDelivery"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void MKAKAOLLEFO()  [RVA 0x30A3ABC]
// IGFGDDANEPE$$MKAKAOLLEFO @ RVA 0x30A3ABC

void IGFGDDANEPE__MKAKAOLLEFO(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
                    /* try { // try from 031a3abc to 032a3acf has its CatchHandler @ 031a3b00 */
  IGFGDDANEPE__FOKDEHBAMIG(__this,true,false,in_x3);
                    /* try { // try from 031a3ad0 to 032a3af7 has its CatchHandler @ 031a39f8 */
  if ((__this->fields).PCBECBEFJOI != (HOOAAGABMBL_o *)0x0) {
    IGFGDDANEPE__PHAGOINEABA(__this,method_00);
    return;
  }
  return;
}


// ===== public void FDAILKOHIKF(int CJNHFNHJHPE)  [RVA 0x30A3DCC]
// IGFGDDANEPE$$FDAILKOHIKF @ RVA 0x30A3DCC

void IGFGDDANEPE__FDAILKOHIKF(IGFGDDANEPE_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar6;
  int32_t local_24;
  
  local_24 = CJNHFNHJHPE;
  if ((DAT_0456615e & 1) == 0) {
    FUN_01bab630(&StringLiteral_5294/*"DeliveryUpgradeLevel"*/);
    DAT_0456615e = 1;
  }
  CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  bVar1 = (__this->fields).MMNCAIGLMJB;
  (__this->fields).NOBPPMJKPLM.fields = CVar6;
  if (bVar1 == false) {
    return;
  }
  pSVar2 = (__this->fields).DMLGJFCNNJF;
  if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_5294/*"DeliveryUpgradeLevel"*/,(MethodInfo *)0x0);
    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
      EIABCPKDEBD__HBGAGFJBGKD((__this->fields).DMLGJFCNNJF,StringLiteral_5294/*"DeliveryUpgradeLevel"*/,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).DMLGJFCNNJF;
    if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
       (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
       pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_5294/*"DeliveryUpgradeLevel"*/,(MethodInfo *)0x0);
      pSVar5 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pSVar5,(pSVar4->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool COLNEELKCGH()  [RVA 0x30A3EC4]
// IGFGDDANEPE$$COLNEELKCGH @ RVA 0x30A3EC4

bool IGFGDDANEPE__COLNEELKCGH(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  return (__this->fields).DKNFBKANNGN;
}


// ===== public bool FGDEJFIKMCP(PerkInfoItem EIKFGOCCOIE)  [RVA 0x30A3ECC]
// IGFGDDANEPE$$FGDEJFIKMCP @ RVA 0x30A3ECC

bool IGFGDDANEPE__FGDEJFIKMCP(IGFGDDANEPE_o *__this,PerkInfoItem_o *EIKFGOCCOIE,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  Il2CppObject *pIVar3;
  int index;
  
  if ((DAT_0456615f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
    DAT_0456615f = 1;
  }
  __this_00 = (__this->fields).PAPANCDPPIF;
  if (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
LAB_031a3f64:
        return index < iVar1;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
      if ((pIVar3 == (Il2CppObject *)0x0) || (EIKFGOCCOIE == (PerkInfoItem_o *)0x0)) break;
      bVar2 = System_String__op_Equality
                        ((System_String_o *)pIVar3[4].klass,(EIKFGOCCOIE->fields).JIJLBFGKNJK,
                         (MethodInfo *)0x0);
      if (bVar2) goto LAB_031a3f64;
      __this_00 = (__this->fields).PAPANCDPPIF;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PHEAFMPDJEM(AMJMGFCCAKN CJNHFNHJHPE)  [RVA 0x30A3F7C]
// IGFGDDANEPE$$PHEAFMPDJEM @ RVA 0x30A3F7C

void IGFGDDANEPE__PHEAFMPDJEM(IGFGDDANEPE_o *__this,AMJMGFCCAKN_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlElement_o *pSVar1;
  System_String_o *pSVar2;
  AMJMGFCCAKN_o *extraout_x1;
  AMJMGFCCAKN_o *method_00;
  GGLKHCAIGDI_o *pGVar3;
  AMJMGFCCAKN_o **ppAVar4;
  int64_t local_30;
  int32_t local_24;
  
  method_00 = CJNHFNHJHPE;
  if ((DAT_04566160 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11107/*"RecipeDelivery"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_10317/*"PlayerLevel"*/);
    FUN_01bab630(&StringLiteral_5292/*"DeliveryTime"*/);
    FUN_01bab630(&StringLiteral_8108/*"ItemLevel"*/);
    DAT_04566160 = 1;
    method_00 = extraout_x1;
  }
  local_30 = 0;
  if ((__this->fields).MMNCAIGLMJB == false) {
    return;
  }
  IGFGDDANEPE__ECPOIIMILFO(__this,(MethodInfo *)method_00);
  ppAVar4 = &(__this->fields).HJLEJIJKJKD;
  *ppAVar4 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppAVar4,CJNHFNHJHPE);
  pSVar1 = EIABCPKDEBD__BHPIHHJHELJ
                     ((__this->fields).DMLGJFCNNJF,StringLiteral_11107/*"RecipeDelivery"*/,(MethodInfo *)0x0);
  if (((*ppAVar4 != (AMJMGFCCAKN_o *)0x0) &&
      (pGVar3 = ((*ppAVar4)->fields).PHAGOJCOMPN, pGVar3 != (GGLKHCAIGDI_o *)0x0)) &&
     (pSVar1 != (System_Xml_XmlElement_o *)0x0)) {
    (*(pSVar1->klass->vtable)._66_SetAttribute.methodPtr)
              (pSVar1,StringLiteral_9327/*"Name"*/,(pGVar3->fields)._COIPKAKHDFP_k__BackingField,
               (pSVar1->klass->vtable)._66_SetAttribute.method);
    if (*ppAVar4 != (AMJMGFCCAKN_o *)0x0) {
      local_24 = ((*ppAVar4)->fields).PFNIFGEBIAC;
      pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      (*(pSVar1->klass->vtable)._66_SetAttribute.methodPtr)
                (pSVar1,StringLiteral_8108/*"ItemLevel"*/,pSVar2,(pSVar1->klass->vtable)._66_SetAttribute.method);
      if (*ppAVar4 != (AMJMGFCCAKN_o *)0x0) {
        local_24 = ((*ppAVar4)->fields).BMPFHIJEDOD;
        pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        (*(pSVar1->klass->vtable)._66_SetAttribute.methodPtr)
                  (pSVar1,StringLiteral_10317/*"PlayerLevel"*/,pSVar2,(pSVar1->klass->vtable)._66_SetAttribute.method
                  );
        if (*ppAVar4 != (AMJMGFCCAKN_o *)0x0) {
          local_30 = ((*ppAVar4)->fields).CJKLJJIMECK;
          pSVar2 = System_Int64__ToString((int64_t)&local_30,(MethodInfo *)0x0);
          (*(pSVar1->klass->vtable)._66_SetAttribute.methodPtr)
                    (pSVar1,StringLiteral_5292/*"DeliveryTime"*/,pSVar2,
                     (pSVar1->klass->vtable)._66_SetAttribute.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HOOAAGABMBL CLDPCJADIMH()  [RVA 0x30A412C]
// IGFGDDANEPE$$CLDPCJADIMH @ RVA 0x30A412C

HOOAAGABMBL_o * IGFGDDANEPE__CLDPCJADIMH(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  return (__this->fields).LFPOIAJDMBK;
}


// ===== public void GIIJHCLHFDK(int PIDMGHLCFAJ)  [RVA 0x30A4134]
// IGFGDDANEPE$$GIIJHCLHFDK @ RVA 0x30A4134

void IGFGDDANEPE__GIIJHCLHFDK(IGFGDDANEPE_o *__this,int32_t PIDMGHLCFAJ,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t EPINGPGECOM;
  System_Collections_Generic_List_PONNKDFAMFM__o *pSVar3;
  HOOAAGABMBL_o **DOGHDPHAEON;
  HOOAAGABMBL_o **PBNOJCMNDDN;
  HOOAAGABMBL_o *pHVar4;
  
  if ((DAT_04566161 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_get_Count__);
    DAT_04566161 = 1;
  }
  PBNOJCMNDDN = &(__this->fields).EGAAAFHLNOE;
  *PBNOJCMNDDN = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(PBNOJCMNDDN,0);
  DOGHDPHAEON = &(__this->fields).LFPOIAJDMBK;
  *DOGHDPHAEON = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(DOGHDPHAEON,0);
  pHVar4 = (__this->fields).PCBECBEFJOI;
  (__this->fields).GOJELHDHCDP = false;
  (__this->fields).DKNFBKANNGN = false;
  (__this->fields).IIPJCIFKCIH = false;
  (__this->fields).KGBJHBCIOGH = false;
  if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  EPINGPGECOM = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (__this->fields).DCFOJDEFIHG.fields,(MethodInfo *)0x0);
  HOOAAGABMBL__MJGMEEKMAOE(pHVar4,PIDMGHLCFAJ,EPINGPGECOM,PBNOJCMNDDN,DOGHDPHAEON,(MethodInfo *)0x0)
  ;
  pHVar4 = (__this->fields).PCBECBEFJOI;
  if ((pHVar4 == (HOOAAGABMBL_o *)0x0) ||
     (pSVar3 = HOOAAGABMBL__DBONHFEAOEG(pHVar4,false,0x7fffffff,(MethodInfo *)0x0),
     pSVar3 == (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (pSVar3->fields)._size;
  (__this->fields).GOJELHDHCDP = 0 < iVar1;
  if (iVar1 < 1) {
    (__this->fields).DKNFBKANNGN = false;
    (__this->fields).IIPJCIFKCIH = false;
  }
  else {
    pHVar4 = (__this->fields).LFPOIAJDMBK;
    (__this->fields).DKNFBKANNGN = (__this->fields).EGAAAFHLNOE != (HOOAAGABMBL_o *)0x0;
    (__this->fields).IIPJCIFKCIH = pHVar4 == (HOOAAGABMBL_o *)0x0;
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
      bVar2 = false;
      goto LAB_031a422c;
    }
  }
  bVar2 = *DOGHDPHAEON != (HOOAAGABMBL_o *)0x0;
LAB_031a422c:
  (__this->fields).KGBJHBCIOGH = bVar2;
  return;
}


// ===== public void JJPJJDHOFLE(List<PKKLIJLIKGF> AEFIPJLKAFI, int EDEIFHGMBFA, int EBDDELGICGB)  [RVA 0x30A4244]
// IGFGDDANEPE$$JJPJJDHOFLE @ RVA 0x30A4244

/* WARNING: Removing unreachable block (ram,0x031a4698) */
/* WARNING: Removing unreachable block (ram,0x031a4784) */
/* WARNING: Removing unreachable block (ram,0x031a47e8) */

void IGFGDDANEPE__JJPJJDHOFLE
               (IGFGDDANEPE_o *__this,System_Collections_Generic_List_PKKLIJLIKGF__o *AEFIPJLKAFI,
               int32_t EDEIFHGMBFA,int32_t EBDDELGICGB,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  bool bVar7;
  FOKJBDHLIMG_o *__this_00;
  PerkInfoItem_o *pHVar8;
  System_Xml_XmlNode_o *pSVar9;
  long lVar10;
  System_Xml_XmlElement_o *JHMENEKPIBO;
  System_Xml_XmlAttribute_o *pSVar11;
  System_Xml_XmlNode_o *JHMENEKPIBO_00;
  PKKLIJLIKGF_o *__this_01;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_02;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar12;
  System_Collections_Generic_List_KeyValuePair_string__string___o *pSVar13;
  PerkInfoItem_array *pHVar14;
  Roster_o *pAVar15;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  undefined8 uStack_a8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  undefined8 uStack_88;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  pMVar12 = (MethodInfo *)(ulong)(uint)EDEIFHGMBFA;
  if ((DAT_04566162 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_get_Count__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PKKLIJLIKGF_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    DAT_04566162 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  uStack_88 = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).MMNCAIGLMJB == false) {
    return;
  }
  if (AEFIPJLKAFI != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_c0,(System_Collections_Generic_List_object__o *)AEFIPJLKAFI,
               Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    bVar3 = false;
    bVar7 = false;
    local_80.fields._index = local_c0.fields._index;
    local_80.fields._version = local_c0.fields._version;
    local_80.fields._list = local_c0.fields._list;
    local_80.fields._current = local_c0.fields._current;
    while (bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__
                             ), pIVar5 = local_80.fields._current, bVar6) {
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if ((PKKLIJLIKGF_o *)pIVar5 == (PKKLIJLIKGF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
      if (__this_00 == (FOKJBDHLIMG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pHVar8 = FOKJBDHLIMG__JMMDGEOBMOC
                         (__this_00,((PKKLIJLIKGF_Fields *)((long)pIVar5 + 0x10))->DEKCPPOJFEH,
                          pMVar12);
      if (pHVar8 != (PerkInfoItem_o *)0x0) {
        iVar1 = (pHVar8->fields).OCABLLPNEGL;
        if (iVar1 == 0) {
          bVar3 = true;
        }
        else if (iVar1 == 1) {
          bVar7 = true;
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    pMVar12 = method_00;
    if (bVar7) {
      IGFGDDANEPE__JMOIFIMNBPM(__this,method_00);
      pMVar12 = extraout_x1;
    }
    if (bVar3) {
      IGFGDDANEPE__DCIBJNCLIKP(__this,pMVar12);
    }
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
    pAVar15 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar15 != (Roster_o *)0x0) {
      (pAVar15->fields).MPFOJMPNGAC = EBDDELGICGB;
      (pAVar15->fields).BDKAFFAFIMP = true;
      if (0 < (AEFIPJLKAFI->fields)._size) {
        pSVar9 = (__this->fields).DMLGJFCNNJF;
        if (pSVar9 == (System_Xml_XmlNode_o *)0x0) goto LAB_031a4800;
        lVar10 = (*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                           (pSVar9,StringLiteral_5703/*"Enchantments"*/,(pSVar9->klass->vtable)._51_get_Item.method);
        pSVar9 = (__this->fields).DMLGJFCNNJF;
        if (lVar10 == 0) {
          JHMENEKPIBO = EIABCPKDEBD__BHPIHHJHELJ(pSVar9,StringLiteral_5703/*"Enchantments"*/,(MethodInfo *)0x0);
        }
        else {
          if (pSVar9 == (System_Xml_XmlNode_o *)0x0) goto LAB_031a4800;
          JHMENEKPIBO = (System_Xml_XmlElement_o *)
                        (*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                                  (pSVar9,StringLiteral_5703/*"Enchantments"*/,
                                   (pSVar9->klass->vtable)._51_get_Item.method);
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_c0,(System_Collections_Generic_List_object__o *)AEFIPJLKAFI,
                   Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
        local_80.fields._index = local_c0.fields._index;
        local_80.fields._version = local_c0.fields._version;
        local_80.fields._list = local_c0.fields._list;
        local_80.fields._current = local_c0.fields._current;
        while (bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__
                                 ), pIVar5 = local_80.fields._current, bVar7) {
          pSVar9 = EIABCPKDEBD__KPODFFHOHGK
                             ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_10213/*"Perk"*/,
                              (MethodInfo *)0x0);
          pSVar11 = EIABCPKDEBD__HBGAGFJBGKD(pSVar9,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
          if ((PKKLIJLIKGF_o *)pIVar5 == (PKKLIJLIKGF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (pSVar11 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (*(pSVar11->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar11,((PKKLIJLIKGF_Fields *)((long)pIVar5 + 0x10))->DEKCPPOJFEH,
                     (pSVar11->klass->vtable)._10_set_Value.method);
          pSVar13 = ((PKKLIJLIKGF_Fields *)((long)pIVar5 + 0x10))->NAPHDEGHDNP;
          if (pSVar13 == (System_Collections_Generic_List_KeyValuePair_string__string___o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (0 < (pSVar13->fields)._size) {
            JHMENEKPIBO_00 = EIABCPKDEBD__KPODFFHOHGK(pSVar9,StringLiteral_11876/*"Set"*/,(MethodInfo *)0x0);
            __this_01 = (PKKLIJLIKGF_o *)thunk_FUN_01bda818(PKKLIJLIKGF_TypeInfo);
            PKKLIJLIKGF___ctor(__this_01,(PKKLIJLIKGF_o *)pIVar5,(MethodInfo *)0x0);
            if (__this_01 == (PKKLIJLIKGF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            PKKLIJLIKGF__JNPGCELEPGH(__this_01,(MethodInfo *)0x0);
            pSVar13 = (__this_01->fields).NAPHDEGHDNP;
            if (pSVar13 == (System_Collections_Generic_List_KeyValuePair_string__string___o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_List<KeyValuePair<object,_object>>__GetEnumerator
                      (&local_c0,(System_Collections_Generic_List_T__o *)pSVar13,
                       Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_GetEnumerator__
                      );
            local_a0.fields._index = local_c0.fields._index;
            local_a0.fields._version = local_c0.fields._version;
            local_a0.fields._list = local_c0.fields._list;
            uStack_88 = uStack_a8;
            local_a0.fields._current = local_c0.fields._current;
            while (bVar7 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__MoveNext
                                     (&local_a0,
                                      Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_MoveNext__
                                     ), uVar4 = uStack_88, bVar7) {
              pSVar11 = EIABCPKDEBD__HBGAGFJBGKD
                                  (JHMENEKPIBO_00,(System_String_o *)local_a0.fields._current,
                                   (MethodInfo *)0x0);
              if (pSVar11 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              (*(pSVar11->klass->vtable)._10_set_Value.methodPtr)
                        (pSVar11,uVar4,(pSVar11->klass->vtable)._10_set_Value.method);
            }
            System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__Dispose
                      (&local_a0,
                       Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_Dispose__
                      );
          }
          pHVar8 = HOOAAGABMBL__PHKPGHEINHB(pSVar9,(MethodInfo *)0x0);
          lVar10 = Method_System_Collections_Generic_List<PerkInfoItem>_Add__;
          if (pHVar8 != (PerkInfoItem_o *)0x0) {
            __this_02 = (__this->fields).PAPANCDPPIF;
            if (__this_02 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pHVar14 = (__this_02->fields)._items;
            (__this_02->fields)._version = (__this_02->fields)._version + 1;
            if (pHVar14 == (PerkInfoItem_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (__this_02->fields)._size;
            if (uVar2 < (uint)pHVar14->max_length) {
              (__this_02->fields)._size = uVar2 + 1;
              pHVar14->m_Items[(int)uVar2] = pHVar8;
              thunk_FUN_01c20e04(pHVar14->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,
                         (Il2CppObject *)pHVar8,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
      }
      (pAVar15->fields).BDKAFFAFIMP = false;
      return;
    }
  }
LAB_031a4800:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JIIEJGCOACC(bool CJNHFNHJHPE)  [RVA 0x30A4A9C]
// IGFGDDANEPE$$JIIEJGCOACC @ RVA 0x30A4A9C

void IGFGDDANEPE__JIIEJGCOACC(IGFGDDANEPE_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04566163 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14587/*"Upgrade"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    DAT_04566163 = 1;
  }
  puVar1 = &StringLiteral_14587/*"Upgrade"*/;
  if (!CJNHFNHJHPE) {
    puVar1 = &StringLiteral_8095/*"Item"*/;
  }
  IGFGDDANEPE__CCOEOCPGJBG(__this,(System_String_o *)*puVar1,method);
  return;
}


// ===== public int IJNIFKFEGND()  [RVA 0x30A2EF4]
// IGFGDDANEPE$$IJNIFKFEGND @ RVA 0x30A2EF4

int32_t IGFGDDANEPE__IJNIFKFEGND(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).NOBPPMJKPLM.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public void .ctor(int EBDDELGICGB, XmlNode GGDPPDFOEOH, string KGLJICLJHEL, bool FCPLINEFDIO, int DFIBGGDJPLM, int JLAFGLDIFOC = -1, long LFJGFLNMBMC = 0, int LDPENJNJGDI = -1, bool DJMBGIPJDNA = True, string NMABNFMBFJF = "Item")  [RVA 0x30A4B0C]
// IGFGDDANEPE$$.ctor @ RVA 0x30A4B0C

void IGFGDDANEPE___ctor(IGFGDDANEPE_o *__this,int32_t EBDDELGICGB,System_Xml_XmlNode_o *GGDPPDFOEOH,
                       System_String_o *KGLJICLJHEL,bool FCPLINEFDIO,int32_t DFIBGGDJPLM,
                       int32_t JLAFGLDIFOC,int64_t LFJGFLNMBMC,int32_t LDPENJNJGDI,bool DJMBGIPJDNA,
                       System_String_o *NMABNFMBFJF,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar1;
  System_Xml_XmlElement_o *AHDGNOJPPIB;
  
  if ((DAT_04566164 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    DAT_04566164 = 1;
  }
  __this_00 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
  ppSVar1 = &(__this->fields).PAPANCDPPIF;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).APCAEINELHJ = 0x34;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).APCAEINELHJ = EBDDELGICGB;
  AHDGNOJPPIB = EIABCPKDEBD__BHPIHHJHELJ(GGDPPDFOEOH,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
  IGFGDDANEPE__GIENGNEGHPJ
            (__this,(System_Xml_XmlNode_o *)AHDGNOJPPIB,KGLJICLJHEL,FCPLINEFDIO,DFIBGGDJPLM,
             JLAFGLDIFOC,LFJGFLNMBMC,LDPENJNJGDI,DJMBGIPJDNA,NMABNFMBFJF,true,method);
  return;
}


// ===== private void LGJMNCPJOML(XmlNode AHDGNOJPPIB)  [RVA 0x30A4C44]
// IGFGDDANEPE$$LGJMNCPJOML @ RVA 0x30A4C44

void IGFGDDANEPE__LGJMNCPJOML
               (IGFGDDANEPE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  AMJMGFCCAKN_o *__this_00;
  AMJMGFCCAKN_o **ppAVar1;
  
  if ((DAT_04566165 & 1) == 0) {
    FUN_01bab630(&AMJMGFCCAKN_TypeInfo);
    DAT_04566165 = 1;
  }
  __this_00 = (AMJMGFCCAKN_o *)thunk_FUN_01bda818(AMJMGFCCAKN_TypeInfo);
  AMJMGFCCAKN___ctor(__this_00,AHDGNOJPPIB,__this,(MethodInfo *)0x0);
  ppAVar1 = &(__this->fields).HJLEJIJKJKD;
  *ppAVar1 = __this_00;
  thunk_FUN_01c20e04(ppAVar1,__this_00);
  return;
}


// ===== public void JONJCPBEJDP(long CJNHFNHJHPE)  [RVA 0x30A4CB8]
// IGFGDDANEPE$$JONJCPBEJDP @ RVA 0x30A4CB8

void IGFGDDANEPE__JONJCPBEJDP(IGFGDDANEPE_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlElement_o *pSVar2;
  System_String_o *pSVar3;
  AMJMGFCCAKN_o *pAVar4;
  int64_t local_28;
  
  if ((DAT_04566166 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11107/*"RecipeDelivery"*/);
    FUN_01bab630(&StringLiteral_5292/*"DeliveryTime"*/);
    DAT_04566166 = 1;
  }
  local_28 = 0;
  pAVar4 = (__this->fields).HJLEJIJKJKD;
  if (pAVar4 == (AMJMGFCCAKN_o *)0x0) {
    return;
  }
  (pAVar4->fields).CJKLJJIMECK = CJNHFNHJHPE;
  pSVar1 = (__this->fields).DMLGJFCNNJF;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlElement_o *)
             (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_11107/*"RecipeDelivery"*/,(pSVar1->klass->vtable)._51_get_Item.method);
    if (pSVar2 == (System_Xml_XmlElement_o *)0x0) {
      pSVar2 = EIABCPKDEBD__BHPIHHJHELJ
                         ((__this->fields).DMLGJFCNNJF,StringLiteral_11107/*"RecipeDelivery"*/,(MethodInfo *)0x0);
    }
    pAVar4 = (__this->fields).HJLEJIJKJKD;
    if (pAVar4 != (AMJMGFCCAKN_o *)0x0) {
      local_28 = (pAVar4->fields).CJKLJJIMECK;
      pSVar3 = System_Int64__ToString((int64_t)&local_28,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlElement_o *)0x0) {
        (*(pSVar2->klass->vtable)._66_SetAttribute.methodPtr)
                  (pSVar2,StringLiteral_5292/*"DeliveryTime"*/,pSVar3,(pSVar2->klass->vtable)._66_SetAttribute.method)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GIENGNEGHPJ(XmlNode AHDGNOJPPIB, string KGLJICLJHEL, bool FCPLINEFDIO, int DFIBGGDJPLM, int JLAFGLDIFOC, long LBAAJNDIEMD, int BHAFBPOOLDK, bool DJMBGIPJDNA, string NMABNFMBFJF, bool AFDAKILJHBK = True)  [RVA 0x30A3278]
// IGFGDDANEPE$$GIENGNEGHPJ @ RVA 0x30A3278

void IGFGDDANEPE__GIENGNEGHPJ
               (IGFGDDANEPE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *KGLJICLJHEL
               ,bool FCPLINEFDIO,int32_t DFIBGGDJPLM,int32_t JLAFGLDIFOC,int64_t LBAAJNDIEMD,
               int32_t BHAFBPOOLDK,bool DJMBGIPJDNA,System_String_o *NMABNFMBFJF,bool AFDAKILJHBK,
               MethodInfo *method)

{
  System_Xml_XmlNode_o **ppSVar1;
  AMJMGFCCAKN_o **ppAVar2;
  HOOAAGABMBL_o **ppHVar3;
  Item_o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  long lVar5;
  System_Xml_XmlNode_o *pSVar6;
  MethodInfo *pMVar7;
  MethodInfo *method_00;
  HOOAAGABMBL_o **ppHVar8;
  
  method_00 = (MethodInfo *)(ulong)FCPLINEFDIO;
  pMVar7 = (MethodInfo *)KGLJICLJHEL;
  if ((DAT_04566167 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11107/*"RecipeDelivery"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    DAT_04566167 = 1;
  }
  ppSVar1 = &(__this->fields).DMLGJFCNNJF;
  *ppSVar1 = AHDGNOJPPIB;
  thunk_FUN_01c20e04(ppSVar1,AHDGNOJPPIB);
  (__this->fields).MMNCAIGLMJB = DJMBGIPJDNA;
  ppHVar8 = &(__this->fields).PCBECBEFJOI;
  *ppHVar8 = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(ppHVar8,0);
  ppAVar2 = &(__this->fields).HJLEJIJKJKD;
  *ppAVar2 = (AMJMGFCCAKN_o *)0x0;
  thunk_FUN_01c20e04(ppAVar2,0);
  ppHVar3 = &(__this->fields).EGAAAFHLNOE;
  *ppHVar3 = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(ppHVar3,0);
  ppHVar3 = &(__this->fields).LFPOIAJDMBK;
  *ppHVar3 = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(ppHVar3,0);
  (__this->fields).GOJELHDHCDP = false;
  (__this->fields).DKNFBKANNGN = false;
  (__this->fields).IIPJCIFKCIH = false;
  IGFGDDANEPE__HCOCAAIGNNL(__this,KGLJICLJHEL,pMVar7);
  IGFGDDANEPE__OEMBIADDDEE(__this,FCPLINEFDIO,pMVar7);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_00 != (Item_o *)0x0) {
    pMVar7 = (MethodInfo *)0x0;
    pHVar4 = Item__CKKIPBAIEMN(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
    (__this->fields).PCBECBEFJOI = pHVar4;
    thunk_FUN_01c20e04(ppHVar8,pHVar4);
    IGFGDDANEPE__PICGGLNNJFA(__this,DFIBGGDJPLM,pMVar7);
    IGFGDDANEPE__DJJHOOKLHHL(__this,JLAFGLDIFOC,pMVar7);
    IGFGDDANEPE__DOOKHLFKCAI(__this,LBAAJNDIEMD,pMVar7);
    IGFGDDANEPE__FDAILKOHIKF(__this,BHAFBPOOLDK,pMVar7);
    IGFGDDANEPE__CCOEOCPGJBG(__this,NMABNFMBFJF,pMVar7);
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      lVar5 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                        (AHDGNOJPPIB,StringLiteral_5703/*"Enchantments"*/,
                         (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      if (lVar5 != 0) {
        pSVar6 = (System_Xml_XmlNode_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                           (AHDGNOJPPIB,StringLiteral_5703/*"Enchantments"*/,
                            (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                    /* try { // try from 031a3478 to 032a3513 has its CatchHandler @ 031a3478
                       catch() { ... } // from try @ 031a3478 with catch @ 031a3478
                       catch() { ... } // from try @ 031a3544 with catch @ 031a3478
                       catch() { ... } // from try @ 031a356c with catch @ 031a3478
                       catch() { ... } // from try @ 031a3590 with catch @ 031a3478
                       catch() { ... } // from try @ 031a35c0 with catch @ 031a3478 */
        IGFGDDANEPE__LPLGJMMAKJG(__this,pSVar6,AFDAKILJHBK,method_00);
      }
      lVar5 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                        (AHDGNOJPPIB,StringLiteral_11107/*"RecipeDelivery"*/,
                         (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      if (lVar5 != 0) {
        pMVar7 = (AHDGNOJPPIB->klass->vtable)._51_get_Item.method;
        pSVar6 = (System_Xml_XmlNode_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                           (AHDGNOJPPIB,StringLiteral_11107/*"RecipeDelivery"*/);
        IGFGDDANEPE__LGJMNCPJOML(__this,pSVar6,pMVar7);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool MLFGGLEFKDF()  [RVA 0x30A5E48]
// IGFGDDANEPE$$MLFGGLEFKDF @ RVA 0x30A5E48

bool IGFGDDANEPE__MLFGGLEFKDF(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  return (__this->fields).MMNCAIGLMJB;
}


// ===== public void CLIDHHJIGOC(HOOAAGABMBL CJNHFNHJHPE)  [RVA 0x30A5E50]
// IGFGDDANEPE$$CLIDHHJIGOC @ RVA 0x30A5E50

void IGFGDDANEPE__CLIDHHJIGOC(IGFGDDANEPE_o *__this,HOOAAGABMBL_o *CJNHFNHJHPE,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  HOOAAGABMBL_o *pHVar2;
  HOOAAGABMBL_o **ppHVar3;
  
  ppHVar3 = &(__this->fields).PCBECBEFJOI;
  *ppHVar3 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppHVar3);
  pHVar2 = *ppHVar3;
  if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
    if ((pHVar2->fields)._NPMFPMGCNEC_k__BackingField == false) {
      (pHVar2->fields)._ILHGDFFOGHP_k__BackingField = true;
    }
    method_00 = (MethodInfo *)0x0;
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).DCFOJDEFIHG.fields,(MethodInfo *)0x0);
    if (iVar1 == -1) {
      if (*ppHVar3 == (HOOAAGABMBL_o *)0x0) goto LAB_031a5ec8;
      iVar1 = ((*ppHVar3)->fields)._HCHGENFJLHA_k__BackingField;
    }
    else {
      method_00 = (MethodInfo *)0x0;
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).DCFOJDEFIHG.fields,(MethodInfo *)0x0);
    }
    IGFGDDANEPE__DJJHOOKLHHL(__this,iVar1,method_00);
    return;
  }
LAB_031a5ec8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DOOKHLFKCAI(long CJNHFNHJHPE)  [RVA 0x30A4DA0]
// IGFGDDANEPE$$DOOKHLFKCAI @ RVA 0x30A4DA0

void IGFGDDANEPE__DOOKHLFKCAI(IGFGDDANEPE_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  int64_t local_50;
  int64_t iStack_48;
  int64_t iStack_40;
  bool_conflict bStack_38;
  bool_conflict bStack_37;
  undefined6 uStack_36;
  int64_t local_28;
  
  local_28 = CJNHFNHJHPE;
  if ((DAT_04566168 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5292/*"DeliveryTime"*/);
    DAT_04566168 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
            (&local_70,CJNHFNHJHPE,(MethodInfo *)0x0);
  iStack_48 = local_70.fields.hiddenValue;
  local_50 = local_70.fields.currentCryptoKey;
  bStack_38 = local_70.fields.fakeValueActive;
  bStack_37 = local_70.fields.inited;
  uStack_36 = local_70.fields._26_6_;
  iStack_40 = local_70.fields.fakeValue;
  bVar1 = (__this->fields).MMNCAIGLMJB;
  (__this->fields).MCCADBLBPMN.fields.fakeValueActive = local_70.fields.fakeValueActive;
  (__this->fields).MCCADBLBPMN.fields.inited = local_70.fields.inited;
  *(undefined6 *)&(__this->fields).MCCADBLBPMN.fields.field_0x1a = local_70.fields._26_6_;
  (__this->fields).MCCADBLBPMN.fields.fakeValue = local_70.fields.fakeValue;
  (__this->fields).MCCADBLBPMN.fields.hiddenValue = local_70.fields.hiddenValue;
  (__this->fields).MCCADBLBPMN.fields.currentCryptoKey = local_70.fields.currentCryptoKey;
  if (bVar1 == false) {
    return;
  }
  pSVar2 = (__this->fields).DMLGJFCNNJF;
  if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_5292/*"DeliveryTime"*/,(MethodInfo *)0x0);
    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
      EIABCPKDEBD__HBGAGFJBGKD((__this->fields).DMLGJFCNNJF,StringLiteral_5292/*"DeliveryTime"*/,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).DMLGJFCNNJF;
    if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
       (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
       pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_5292/*"DeliveryTime"*/,(MethodInfo *)0x0);
      pSVar5 = System_Int64__ToString((int64_t)&local_28,(MethodInfo *)0x0);
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pSVar5,(pSVar4->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IHPKFKLKPPP(List<PKKLIJLIKGF> AEFIPJLKAFI, int EDEIFHGMBFA, int EBDDELGICGB)  [RVA 0x30A5ECC]
// IGFGDDANEPE$$IHPKFKLKPPP @ RVA 0x30A5ECC

void IGFGDDANEPE__IHPKFKLKPPP
               (IGFGDDANEPE_o *__this,System_Collections_Generic_List_PKKLIJLIKGF__o *AEFIPJLKAFI,
               int32_t EDEIFHGMBFA,int32_t EBDDELGICGB,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)EDEIFHGMBFA;
  IGFGDDANEPE__OKEGPAKHPDC(__this,AEFIPJLKAFI,method_00);
  IGFGDDANEPE__JJPJJDHOFLE(__this,AEFIPJLKAFI,(int32_t)method_00,EBDDELGICGB,method);
  return;
}


// ===== public bool EFFOCICKBBK()  [RVA 0x30A5EFC]
// IGFGDDANEPE$$EFFOCICKBBK @ RVA 0x30A5EFC

bool IGFGDDANEPE__EFFOCICKBBK(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  return (__this->fields).IIPJCIFKCIH;
}


// ===== public void LPLGJMMAKJG(XmlNode AHDGNOJPPIB, bool AFDAKILJHBK = True)  [RVA 0x30A4EA8]
// IGFGDDANEPE$$LPLGJMMAKJG @ RVA 0x30A4EA8

/* WARNING: Removing unreachable block (ram,0x031a58d0) */
/* WARNING: Removing unreachable block (ram,0x031a58d4) */
/* WARNING: Removing unreachable block (ram,0x031a5b9c) */
/* WARNING: Removing unreachable block (ram,0x031a53c4) */
/* WARNING: Removing unreachable block (ram,0x031a54c4) */
/* WARNING: Removing unreachable block (ram,0x031a55b4) */
/* WARNING: Removing unreachable block (ram,0x031a5b10) */
/* WARNING: Removing unreachable block (ram,0x031a5bb0) */
/* WARNING: Removing unreachable block (ram,0x031a5bbc) */

void IGFGDDANEPE__LPLGJMMAKJG
               (IGFGDDANEPE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,bool AFDAKILJHBK,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  bool bVar7;
  int32_t iVar8;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Collections_IEnumerator_o *pSVar9;
  VirtualInvokeData *pVVar10;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  PerkInfoItem_o *pHVar11;
  long *plVar12;
  undefined8 *puVar13;
  DEKKGJNMFEB_o *__this_03;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_04;
  AntiCheatSettings_o *pLVar14;
  System_String_o *message;
  System_Collections_IEnumerator_c *pSVar15;
  System_Object_array *pSVar16;
  long lVar17;
  HOOAAGABMBL_o *pHVar18;
  PerkInfoItem_array *pHVar19;
  ulong uVar20;
  int32_t *piVar21;
  int *piVar22;
  int iVar23;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar24;
  System_Collections_Generic_List_Enumerator_T__o local_108;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_f0;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  int local_a8 [2];
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566169 & 1) == 0) {
    FUN_01bab630(&Method_CAOJHCDPDBH_OBECCOPBADO<PerkInfoItem,_XmlNode>__);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<PerkInfoItem>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<PerkInfoItem,_XmlNode>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<PerkInfoItem,_XmlNode>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<PerkInfoItem,_XmlNode>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<PerkInfoItem,_XmlNode>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<PerkInfoItem,_XmlNode>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<PerkInfoItem,_XmlNode>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<PerkInfoItem,_XmlNode>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<PerkInfoItem,_XmlNode>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<PerkInfoItem,_XmlNode>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<PerkInfoItem,_XmlNode>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_256/*" :P"*/);
    FUN_01bab630(&StringLiteral_15620/*"[cheater] bad excess enchants removed from "*/);
    DAT_04566169 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  local_c0.fields._current = (Il2CppObject *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_c0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_f0.fields._getEnumeratorRetType = 0;
  local_f0.fields._36_4_ = 0;
  local_f0.fields._version = 0;
  local_f0.fields._index = 0;
  local_f0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f0.fields._current.fields.value = (Il2CppObject *)0x0;
  local_f0.fields._current.fields.key = (Il2CppObject *)0x0;
  IGFGDDANEPE__FOKDEHBAMIG(__this,true,false,method);
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
  __this_01 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_01,Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_Dictionary<PerkInfoItem,_XmlNode>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_02,Method_System_Collections_Generic_Dictionary<PerkInfoItem,_XmlNode>__ctor__);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar9 = System_Xml_XmlNode__GetEnumerator(AHDGNOJPPIB,(MethodInfo *)0x0);
    if (pSVar9 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar15 = pSVar9->klass;
      uVar2._0_1_ = (pSVar15->_2).rank;
      uVar2._1_1_ = (pSVar15->_2).minimumAlignment;
      uVar20 = (ulong)uVar2;
      if (uVar20 != 0) {
        piVar21 = &((pSVar15->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar21 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar10 = pSVar15->vtable + *piVar21;
            goto LAB_031a5198;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      pVVar10 = (VirtualInvokeData *)FUN_01b81914(pSVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_031a5198:
      uVar20 = (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
      if ((uVar20 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_01bda71c(pSVar9,System_IDisposable_TypeInfo);
        if (plVar12 == (long *)0x0) goto LAB_031a53b8;
        lVar17 = *plVar12;
        uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar20 == 0) goto LAB_031a5390;
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto LAB_031a5378;
      }
      pSVar15 = pSVar9->klass;
      uVar3._0_1_ = (pSVar15->_2).rank;
      uVar3._1_1_ = (pSVar15->_2).minimumAlignment;
      uVar20 = (ulong)uVar3;
      if (uVar20 != 0) {
        piVar21 = &((pSVar15->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar21 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar10 = pSVar15->vtable + (*piVar21 + 1);
            goto LAB_031a51f8;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      pVVar10 = (VirtualInvokeData *)FUN_01b81914(pSVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_031a51f8:
      AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*pVVar10->methodPtr)(pSVar9,pVVar10->method);
      if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB_00);
        }
      }
      pHVar11 = HOOAAGABMBL__NMEEENDNOOP
                          (AHDGNOJPPIB_00,(__this->fields).APCAEINELHJ,(MethodInfo *)0x0);
      if (pHVar11 != (PerkInfoItem_o *)0x0) {
        if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_02,(Il2CppObject *)pHVar11,(Il2CppObject *)AHDGNOJPPIB_00,
                   Method_System_Collections_Generic_Dictionary<PerkInfoItem,_XmlNode>_Add__);
        lVar17 = Method_System_Collections_Generic_List<PerkInfoItem>_Add__;
        if ((pHVar11->fields).OCABLLPNEGL == 0) {
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar16 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar16 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar4 = (__this_00->fields)._size;
          if (uVar4 < (uint)pSVar16->max_length) {
            (__this_00->fields)._size = uVar4 + 1;
            pSVar16->m_Items[(int)uVar4] = (Il2CppObject *)pHVar11;
            thunk_FUN_01c20e04(pSVar16->m_Items + (int)uVar4,pHVar11);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,(Il2CppObject *)pHVar11,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar16 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pSVar16 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar4 = (__this_01->fields)._size;
          if (uVar4 < (uint)pSVar16->max_length) {
            (__this_01->fields)._size = uVar4 + 1;
            pSVar16->m_Items[(int)uVar4] = (Il2CppObject *)pHVar11;
            thunk_FUN_01c20e04(pSVar16->m_Items + (int)uVar4,pHVar11);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_01,(Il2CppObject *)pHVar11,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    } while( true );
  }
  goto LAB_031a5b54;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar22 = piVar22 + 4;
    if (uVar20 == 0) break;
LAB_031a5378:
    if (*(System_IDisposable_c **)(piVar22 + -2) == System_IDisposable_TypeInfo) {
      puVar13 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_031a53ac;
    }
  }
LAB_031a5390:
  puVar13 = (undefined8 *)FUN_01b81914(plVar12,System_IDisposable_TypeInfo,0);
LAB_031a53ac:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_031a53b8:
  bVar6 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)__this_01,
                     Method_DJNBJHPDKDP_OBECCOPBADO<PerkInfoItem>__);
  if ((!bVar6) && (pHVar18 = (__this->fields).PCBECBEFJOI, pHVar18 != (HOOAAGABMBL_o *)0x0)) {
    pSVar24 = (pHVar18->fields)._GJPBKHJCFBE_k__BackingField;
    if (pSVar24 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_031a5b54;
    if (0 < (pSVar24->fields)._size) {
      if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_031a5b54;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_108,__this_01,
                 Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
      local_80.fields._index = local_108.fields._index;
      local_80.fields._version = local_108.fields._version;
      local_80.fields._list = local_108.fields._list;
      local_80.fields._current = local_108.fields._current;
      do {
        bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__
                          );
        pIVar5 = local_80.fields._current;
        if (!bVar6) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
          if (0 < (__this_01->fields)._size) {
            pSVar24 = (__this->fields).PAPANCDPPIF;
            pHVar11 = (PerkInfoItem_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (__this_01,0,
                                 Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
            lVar17 = Method_System_Collections_Generic_List<PerkInfoItem>_Add__;
            if (pSVar24 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_031a5b54;
            pHVar19 = (pSVar24->fields)._items;
            (pSVar24->fields)._version = (pSVar24->fields)._version + 1;
            if (pHVar19 == (PerkInfoItem_array *)0x0) goto LAB_031a5b54;
            uVar4 = (pSVar24->fields)._size;
            if (uVar4 < (uint)pHVar19->max_length) {
              (pSVar24->fields)._size = uVar4 + 1;
              pHVar19->m_Items[(int)uVar4] = pHVar11;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar24,
                         (Il2CppObject *)pHVar11,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pHVar18 = (__this->fields).PCBECBEFJOI;
          if ((pHVar18 == (HOOAAGABMBL_o *)0x0) ||
             (pLVar14 = GameUtils_TypeInfo->static_fields->ODMIMKMDBPO,
             pLVar14 == (AntiCheatSettings_o *)0x0)) goto LAB_031a5b54;
          bVar6 = AntiCheatSettings__NIIAHHEEJAO
                            (pLVar14,(pHVar18->fields)._COIPKAKHDFP_k__BackingField,local_a8 + 1,
                             (MethodInfo *)0x0);
          if ((!bVar6) || ((__this_01->fields)._size < 2)) goto LAB_031a56c4;
          iVar23 = 1;
          goto LAB_031a5634;
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_108,(System_Collections_Generic_List_object__o *)pSVar24,
                   Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
        local_a0.fields._index = local_108.fields._index;
        local_a0.fields._version = local_108.fields._version;
        local_a0.fields._list = local_108.fields._list;
        local_a0.fields._current = local_108.fields._current;
        do {
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_a0,
                             Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__
                            );
          if (!bVar6) break;
          if ((PerkInfoItem_o *)pIVar5 == (PerkInfoItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((PerkInfoItem_o *)local_a0.fields._current == (PerkInfoItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar7 = System_String__op_Equality
                            (((PerkInfoItem_Fields *)((long)pIVar5 + 0x10))->JIJLBFGKNJK,
                             ((PerkInfoItem_Fields *)((long)local_a0.fields._current + 0x10))->
                             JIJLBFGKNJK,(MethodInfo *)0x0);
        } while (!bVar7);
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
      } while (bVar6);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__)
      ;
    }
    goto LAB_031a56c4;
  }
  goto LAB_031a5948;
  while( true ) {
    pSVar24 = (__this->fields).PAPANCDPPIF;
    pHVar11 = (PerkInfoItem_o *)
              System_Collections_Generic_List<object>__get_Item
                        (__this_01,iVar23,
                         Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
    lVar17 = Method_System_Collections_Generic_List<PerkInfoItem>_Add__;
    if (pSVar24 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_031a5b54;
    pHVar19 = (pSVar24->fields)._items;
    (pSVar24->fields)._version = (pSVar24->fields)._version + 1;
    if (pHVar19 == (PerkInfoItem_array *)0x0) goto LAB_031a5b54;
    uVar4 = (pSVar24->fields)._size;
    if (uVar4 < (uint)pHVar19->max_length) {
      (pSVar24->fields)._size = uVar4 + 1;
      pHVar19->m_Items[(int)uVar4] = pHVar11;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar24,(Il2CppObject *)pHVar11,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
    iVar23 = iVar23 + 1;
    if ((__this_01->fields)._size <= iVar23) break;
LAB_031a5634:
    if (local_a8[1] + -1 <= iVar23) break;
  }
LAB_031a56c4:
  bVar6 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).PAPANCDPPIF,
                     Method_DJNBJHPDKDP_OBECCOPBADO<PerkInfoItem>__);
  if (bVar6) {
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_03 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((__this_03 == (DEKKGJNMFEB_o *)0x0) ||
       (__this_04 = DEKKGJNMFEB__DNKMKLILMCH(__this_03,__this,(MethodInfo *)0x0),
       __this_01 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_031a5b54;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_108,__this_01,
               Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    local_80.fields._index = local_108.fields._index;
    local_80.fields._version = local_108.fields._version;
    local_80.fields._list = local_108.fields._list;
    local_80.fields._current = local_108.fields._current;
    while (bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__
                             ), pIVar5 = local_80.fields._current, bVar6) {
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pHVar18 = (__this->fields).PCBECBEFJOI;
      if (pHVar18 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pLVar14 = GameUtils_TypeInfo->static_fields->ODMIMKMDBPO;
      if (pLVar14 == (AntiCheatSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar6 = AntiCheatSettings__NIIAHHEEJAO
                        (pLVar14,(pHVar18->fields)._COIPKAKHDFP_k__BackingField,local_a8,
                         (MethodInfo *)0x0);
      bVar7 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(__this->fields).PAPANCDPPIF,
                         Method_DJNBJHPDKDP_OBECCOPBADO<PerkInfoItem>__);
      if (!bVar7) {
        if (!bVar6) break;
        pSVar24 = (__this->fields).PAPANCDPPIF;
        if (pSVar24 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_a8[0] + -1 <= (pSVar24->fields)._size) break;
      }
      if (__this_04 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_108,(System_Collections_Generic_List_object__o *)__this_04,
                 Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
      local_c0.fields._index = local_108.fields._index;
      local_c0.fields._version = local_108.fields._version;
      local_c0.fields._list = local_108.fields._list;
      local_c0.fields._current = local_108.fields._current;
      do {
        bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_c0,
                           Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__
                          );
        if (!bVar6) goto LAB_031a58a8;
        if ((PerkInfoItem_o *)pIVar5 == (PerkInfoItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((PerkInfoItem_o *)local_c0.fields._current == (PerkInfoItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar6 = System_String__op_Equality
                          (((PerkInfoItem_Fields *)((long)pIVar5 + 0x10))->JIJLBFGKNJK,
                           *(System_String_o **)
                            &(((PerkInfoItem_Fields *)((long)local_c0.fields._current + 0x10))->
                             ICCBEPAFBFI).fields,(MethodInfo *)0x0);
        lVar17 = Method_System_Collections_Generic_List<PerkInfoItem>_Add__;
      } while (!bVar6);
      pSVar24 = (__this->fields).PAPANCDPPIF;
      if (pSVar24 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pHVar19 = (pSVar24->fields)._items;
      (pSVar24->fields)._version = (pSVar24->fields)._version + 1;
      if (pHVar19 == (PerkInfoItem_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar4 = (pSVar24->fields)._size;
      if (uVar4 < (uint)pHVar19->max_length) {
        (pSVar24->fields)._size = uVar4 + 1;
        pHVar19->m_Items[(int)uVar4] = (PerkInfoItem_o *)pIVar5;
        thunk_FUN_01c20e04(pHVar19->m_Items + (int)uVar4,pIVar5);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar24,pIVar5,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
LAB_031a58a8:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_c0,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__)
      ;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
  }
LAB_031a5948:
  bVar6 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)__this_00,
                     Method_DJNBJHPDKDP_OBECCOPBADO<PerkInfoItem>__);
  if (!bVar6) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_031a5b54;
    pSVar24 = (__this->fields).PAPANCDPPIF;
    pHVar11 = (PerkInfoItem_o *)
              System_Collections_Generic_List<object>__get_Item
                        (__this_00,0,Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__)
    ;
    lVar17 = Method_System_Collections_Generic_List<PerkInfoItem>_Add__;
    if (pSVar24 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_031a5b54;
    pHVar19 = (pSVar24->fields)._items;
    (pSVar24->fields)._version = (pSVar24->fields)._version + 1;
    if (pHVar19 == (PerkInfoItem_array *)0x0) goto LAB_031a5b54;
    uVar4 = (pSVar24->fields)._size;
    if (uVar4 < (uint)pHVar19->max_length) {
      (pSVar24->fields)._size = uVar4 + 1;
      pHVar19->m_Items[(int)uVar4] = pHVar11;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar24,(Il2CppObject *)pHVar11,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
  }
  if ((AFDAKILJHBK) &&
     (bVar6 = CAOJHCDPDBH__OBECCOPBADO<object,_object>
                        ((System_Collections_Generic_Dictionary_T__U__o *)__this_02,
                         Method_CAOJHCDPDBH_OBECCOPBADO<PerkInfoItem,_XmlNode>__), !bVar6)) {
    pSVar24 = (__this->fields).PAPANCDPPIF;
    if ((pSVar24 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) ||
       (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
LAB_031a5b54:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar23 = (pSVar24->fields)._size;
    iVar8 = System_Collections_Generic_Dictionary<object,_object>__get_Count
                      (__this_02,
                       Method_System_Collections_Generic_Dictionary<PerkInfoItem,_XmlNode>_get_Count__
                      );
    if (iVar23 < iVar8) {
      System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                (&local_f0,__this_02,
                 Method_System_Collections_Generic_Dictionary<PerkInfoItem,_XmlNode>_GetEnumerator__)
      ;
      while (bVar6 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                               (&local_f0,
                                Method_System_Collections_Generic_Dictionary_Enumerator<PerkInfoItem,_XmlNode>_MoveNext__
                               ), pIVar5 = local_f0.fields._current.fields.value, bVar6) {
        pSVar24 = (__this->fields).PAPANCDPPIF;
        if (pSVar24 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar6 = System_Collections_Generic_List<object>__Contains
                          ((System_Collections_Generic_List_object__o *)pSVar24,
                           local_f0.fields._current.fields.key,
                           Method_System_Collections_Generic_List<PerkInfoItem>_Contains__);
        if (!bVar6) {
          (*(AHDGNOJPPIB->klass->vtable)._25_RemoveChild.methodPtr)
                    (AHDGNOJPPIB,pIVar5,(AHDGNOJPPIB->klass->vtable)._25_RemoveChild.method);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                (&local_f0,
                 Method_System_Collections_Generic_Dictionary_Enumerator<PerkInfoItem,_XmlNode>_Dispose__
                );
      message = System_String__Concat
                          (StringLiteral_15620/*"[cheater] bad excess enchants removed from "*/,(__this->fields).NPFMOEOIEKM,StringLiteral_256/*" :P"*/,
                           (MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    }
  }
  return;
}


// ===== public void .ctor(XmlNode EBLABJMFLJB, int EBDDELGICGB)  [RVA 0x30A5F04]
// IGFGDDANEPE$$.ctor @ RVA 0x30A5F04

void IGFGDDANEPE___ctor(IGFGDDANEPE_o *__this,System_Xml_XmlNode_o *EBLABJMFLJB,int32_t EBDDELGICGB,
                       MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool FCPLINEFDIO;
  bool bVar2;
  int32_t DFIBGGDJPLM;
  int32_t JLAFGLDIFOC;
  int32_t iVar3;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *KGLJICLJHEL;
  int64_t LBAAJNDIEMD;
  System_String_o *NMABNFMBFJF;
  long *plVar7;
  MethodInfo *in_stack_ffffffffffffff98;
  
  if ((DAT_0456616a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&StringLiteral_5837/*"Equipped"*/);
    FUN_01bab630(&StringLiteral_14587/*"Upgrade"*/);
    FUN_01bab630(&StringLiteral_4824/*"Count"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* try { // try from 031a5f90 to 032a6133 has its CatchHandler @ 031a5f90
                       catch() { ... } // from try @ 031a5f90 with catch @ 031a5f90
                       catch() { ... } // from try @ 031a6234 with catch @ 031a5f90
                       catch() { ... } // from try @ 031a62d8 with catch @ 031a5f90
                       catch() { ... } // from try @ 031a62e0 with catch @ 031a5f90
                       catch() { ... } // from try @ 031a6390 with catch @ 031a5f90 */
    FUN_01bab630(&StringLiteral_2724/*"AcquireType"*/);
    FUN_01bab630(&StringLiteral_5292/*"DeliveryTime"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_8054/*"IsUpgrade"*/);
    FUN_01bab630(&StringLiteral_14589/*"UpgradeLevel"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_5294/*"DeliveryUpgradeLevel"*/);
    DAT_0456616a = 1;
  }
  __this_00 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
  ppSVar4 = &(__this->fields).PAPANCDPPIF;
  *ppSVar4 = __this_00;
  thunk_FUN_01c20e04(ppSVar4,__this_00);
  (__this->fields).APCAEINELHJ = 0x34;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).APCAEINELHJ = EBDDELGICGB;
  if (EBLABJMFLJB != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                       (EBLABJMFLJB,(EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                         (EBLABJMFLJB,(EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_4824/*"Count"*/,(MethodInfo *)0x0);
        DFIBGGDJPLM = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                           (EBLABJMFLJB,(EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_14589/*"UpgradeLevel"*/,(MethodInfo *)0x0);
          JLAFGLDIFOC = EIABCPKDEBD__EHJNCGCICMP(pSVar6,-1,(MethodInfo *)0x0);
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                             (EBLABJMFLJB,(EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_5837/*"Equipped"*/,(MethodInfo *)0x0);
            FCPLINEFDIO = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
                    /* try { // try from 031a6134 to 032a615b has its CatchHandler @ 031a6300 */
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                               (EBLABJMFLJB,(EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_5292/*"DeliveryTime"*/,(MethodInfo *)0x0);
              LBAAJNDIEMD = EIABCPKDEBD__HNIGPBMJJOL(pSVar6,0,(MethodInfo *)0x0);
              if ((0 < LBAAJNDIEMD) &&
                 (iVar3 = HOOAAGABMBL__NNOMKMDICIG((MethodInfo *)0x0), 0 < iVar3)) {
                iVar3 = HOOAAGABMBL__NNOMKMDICIG((MethodInfo *)0x0);
                LBAAJNDIEMD = (int64_t)iVar3;
              }
                    /* try { // try from 031a6190 to 032a61b7 has its CatchHandler @ 031a62fc */
              pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                       (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (EBLABJMFLJB,(EBLABJMFLJB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar5,StringLiteral_5294/*"DeliveryUpgradeLevel"*/,(MethodInfo *)0x0);
                iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,-1,(MethodInfo *)0x0);
                    /* try { // try from 031a61c8 to 032a61cf has its CatchHandler @ 031a62f0 */
                pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                         (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (EBLABJMFLJB,
                                    (EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
                if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar5,StringLiteral_2724/*"AcquireType"*/,(MethodInfo *)0x0);
                    /* try { // try from 031a61f8 to 032a61ff has its CatchHandler @ 031a62f4 */
                  NMABNFMBFJF = EIABCPKDEBD__JPKEHIBGOEM
                                          (pSVar6,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
                  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                           (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (EBLABJMFLJB,
                                      (EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 031a6228 to 032a6233 has its CatchHandler @ 031a62e8 */
                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,StringLiteral_8054/*"IsUpgrade"*/,(MethodInfo *)0x0);
                    if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) {
LAB_031a62a4:
                    /* try { // try from 031a62d4 to 032a62d7 has its CatchHandler @ 031a62f8 */
                      IGFGDDANEPE__GIENGNEGHPJ
                                (__this,EBLABJMFLJB,KGLJICLJHEL,FCPLINEFDIO,DFIBGGDJPLM,JLAFGLDIFOC,
                                 LBAAJNDIEMD,iVar3,true,NMABNFMBFJF,false,in_stack_ffffffffffffff98)
                      ;
                    /* try { // try from 031a62d8 to 032a62db has its CatchHandler @ 031a5f90 */
                    /* try { // try from 031a62dc to 032a62df has its CatchHandler @ 031a62ec */
                    /* try { // try from 031a62e0 to 032a6317 has its CatchHandler @ 031a5f90 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a6228 with catch @ 031a62e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a62dc with catch @ 031a62ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a61c8 with catch @ 031a62f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a61f8 with catch @ 031a62f4
                        */
                      return;
                    }
                    /* try { // try from 031a6234 to 032a62d3 has its CatchHandler @ 031a5f90 */
                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                             (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (EBLABJMFLJB,
                                        (EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar5,StringLiteral_8054/*"IsUpgrade"*/,(MethodInfo *)0x0);
                      bVar2 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
                      plVar7 = (long *)(*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                                                 (EBLABJMFLJB,
                                                  (EBLABJMFLJB->klass->vtable)._16_get_Attributes.
                                                  method);
                      if (plVar7 != (long *)0x0) {
                        (**(code **)(*plVar7 + 0x1a8))
                                  (plVar7,StringLiteral_8054/*"IsUpgrade"*/,*(undefined8 *)(*plVar7 + 0x1b0));
                        ppSVar1 = (System_String_o **)&StringLiteral_14587/*"Upgrade"*/;
                        if (!bVar2) {
                          ppSVar1 = &StringLiteral_8095/*"Item"*/;
                        }
                        NMABNFMBFJF = *ppSVar1;
                        goto LAB_031a62a4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a62d4 with catch @ 031a62f8
                        */
  FUN_01bab8c8();
}


// ===== public bool ICLJJAMOFPD()  [RVA 0x30A62FC]
// IGFGDDANEPE$$ICLJJAMOFPD @ RVA 0x30A62FC

bool IGFGDDANEPE__ICLJJAMOFPD(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  bool bVar1;
  AMJMGFCCAKN_o *__this_00;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a6190 with catch @ 031a62fc
                        */
  __this_00 = (__this->fields).HJLEJIJKJKD;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a6134 with catch @ 031a6300
                        */
  if (__this_00 != (AMJMGFCCAKN_o *)0x0) {
    bVar1 = AMJMGFCCAKN__FLMFEBPHFIP(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== public void PHAGOINEABA()  [RVA 0x30A053C]
// IGFGDDANEPE$$PHAGOINEABA @ RVA 0x30A053C

void IGFGDDANEPE__PHAGOINEABA(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  int32_t EBDDELGICGB;
  Roster_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  int32_t in_w2;
  MethodInfo *in_x4;
  HOOAAGABMBL_o *pHVar1;
  System_Collections_Generic_List_PKKLIJLIKGF__o *AEFIPJLKAFI;
  
  if ((DAT_0456616b & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456616b = 1;
    method = extraout_x1;
  }
  pHVar1 = (__this->fields).PCBECBEFJOI;
  if (pHVar1 != (HOOAAGABMBL_o *)0x0) {
    AEFIPJLKAFI = (pHVar1->fields)._LCJBEIKDDNA_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
      method = extraout_x1_01;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (Roster_o *)0x0) {
      EBDDELGICGB = Roster__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
      IGFGDDANEPE__JJPJJDHOFLE(__this,AEFIPJLKAFI,in_w2,EBDDELGICGB,in_x4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FOKDEHBAMIG(bool DMLNNCDIKGA = True, bool ADJGJIBCLKA = False)  [RVA 0x30A3AEC]
// IGFGDDANEPE$$FOKDEHBAMIG @ RVA 0x30A3AEC

void IGFGDDANEPE__FOKDEHBAMIG
               (IGFGDDANEPE_o *__this,bool DMLNNCDIKGA,bool ADJGJIBCLKA,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppObject *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_02;
  System_Action_T__o *action;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 031a3af8 to 032a3afb has its CatchHandler @ 031a3afc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3af8 with catch @ 031a3afc
                       try { // try from 031a3afc to 032a3b1b has its CatchHandler @ 031a39f8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3abc with catch @ 031a3b00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3a9c with catch @ 031a3b04
                        */
                    /* try { // try from 031a3b1c to 032a3b1f has its CatchHandler @ 031a3b40 */
                    /* try { // try from 031a3b20 to 032a3b47 has its CatchHandler @ 031a39f8 */
  if ((DAT_0456616c & 1) == 0) {
    FUN_01bab630(&System_Action<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
                    /* catch() { ... } // from try @ 031a3b1c with catch @ 031a3b40 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
                    /* try { // try from 031a3b48 to 032a3b4f has its CatchHandler @ 031a3b64 */
                    /* try { // try from 031a3b50 to 032a3b5b has its CatchHandler @ 031a39f8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_get_Current__);
                    /* try { // try from 031a3b5c to 032a3b63 has its CatchHandler @ 031a3b64 */
    FUN_01bab630(&Method_IGFGDDANEPE_JDFPAGJHCKG_KKBIOGGBOIP__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031a3b48 with catch @ 031a3b64
                       catch(type#2 @ 00000000) { ... } // from try @ 031a3b5c with catch @ 031a3b64
                        */
    FUN_01bab630(&IGFGDDANEPE_JDFPAGJHCKG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
    DAT_0456616c = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(IGFGDDANEPE_JDFPAGJHCKG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    *(bool *)&__this_00[1].monitor = ADJGJIBCLKA;
    __this_01 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_01,Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
    __this_02 = (__this->fields).PAPANCDPPIF;
    if (__this_02 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__
                          );
        lVar2 = Method_System_Collections_Generic_List<PerkInfoItem>_Add__;
        if (!bVar3) break;
        if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((*(int *)((long)&local_70.fields._current[0xd].klass + 4) != 0) || (DMLNNCDIKGA)) {
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar4 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pSVar4->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pSVar4->m_Items[(int)uVar1] = local_70.fields._current;
            thunk_FUN_01c20e04(pSVar4->m_Items + (int)uVar1,local_70.fields._current);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_01,local_70.fields._current,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__)
      ;
      action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<PerkInfoItem>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  (__this_01,action,Method_System_Collections_Generic_List<PerkInfoItem>_ForEach__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HOOAAGABMBL LNLJPPIMPPJ()  [RVA 0x30A6318]
// IGFGDDANEPE$$LNLJPPIMPPJ @ RVA 0x30A6318

HOOAAGABMBL_o * IGFGDDANEPE__LNLJPPIMPPJ(IGFGDDANEPE_o *__this,MethodInfo *method)

{
                    /* try { // try from 031a6318 to 032a631b has its CatchHandler @ 031a6328 */
  return (__this->fields).PCBECBEFJOI;
}


// ===== public void KBDGOMHPLBL(XmlNode AHDGNOJPPIB)  [RVA 0x30A6320]
// IGFGDDANEPE$$KBDGOMHPLBL @ RVA 0x30A6320

/* WARNING: Removing unreachable block (ram,0x031a65d0) */

void IGFGDDANEPE__KBDGOMHPLBL
               (IGFGDDANEPE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  PerkInfoItem_o *item;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  MethodInfo *in_x3;
  long lVar5;
  PerkInfoItem_array *pHVar6;
  ulong uVar7;
  int *piVar8;
  
                    /* catch() { ... } // from try @ 031a6318 with catch @ 031a6328 */
  if ((DAT_0456616d & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Add__);
                    /* try { // try from 031a6368 to 032a638f has its CatchHandler @ 031a63a4 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_0456616d = 1;
  }
  IGFGDDANEPE__FOKDEHBAMIG(__this,true,false,in_x3);
                    /* try { // try from 031a6390 to 032a639b has its CatchHandler @ 031a5f90 */
                    /* try { // try from 031a639c to 032a63a3 has its CatchHandler @ 031a63a4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031a6368 with catch @ 031a63a4
                       catch(type#2 @ 00000000) { ... } // from try @ 031a639c with catch @ 031a63a4
                        */
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_031a6428;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_031a6428:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_031a657c;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_031a6488;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_031a6488:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
         ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
    }
    item = HOOAAGABMBL__PHKPGHEINHB(AHDGNOJPPIB_00,(MethodInfo *)0x0);
    lVar5 = Method_System_Collections_Generic_List<PerkInfoItem>_Add__;
    if (item != (PerkInfoItem_o *)0x0) {
      __this_00 = (__this->fields).PAPANCDPPIF;
      if (__this_00 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pHVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pHVar6 == (PerkInfoItem_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pHVar6->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pHVar6->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_031a6598;
    }
  }
LAB_031a657c:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_031a6598:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public HOOAAGABMBL JPNNODJPOCL(bool CMBICCILAEF)  [RVA 0x30A2F04]
// IGFGDDANEPE$$JPNNODJPOCL @ RVA 0x30A2F04

HOOAAGABMBL_o * IGFGDDANEPE__JPNNODJPOCL(IGFGDDANEPE_o *__this,bool CMBICCILAEF,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  int32_t iVar3;
  HOOAAGABMBL_o *pHVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)CMBICCILAEF;
  if ((((!CMBICCILAEF) || ((__this->fields).GOJELHDHCDP == false)) ||
      (iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                          (__this->fields).DHPCMDOLAHE.fields,(MethodInfo *)0x0),
      method_00 = extraout_x1, iVar3 < 1)) ||
     (pHVar4 = (__this->fields).LFPOIAJDMBK, pHVar4 == (HOOAAGABMBL_o *)0x0)) {
    bVar2 = IGFGDDANEPE__DABHOGHGNBB(__this,method_00);
    if (bVar2) {
      lVar1 = 0x18;
      if ((__this->fields).EGAAAFHLNOE != (HOOAAGABMBL_o *)0x0) {
        lVar1 = 0x90;
      }
      pHVar4 = *(HOOAAGABMBL_o **)((long)&__this->klass + lVar1);
      if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
        return pHVar4;
      }
    }
    pHVar4 = (__this->fields).PCBECBEFJOI;
  }
  return pHVar4;
}


// ===== public bool GEJMOHFLOHL()  [RVA 0x30A669C]
// IGFGDDANEPE$$GEJMOHFLOHL @ RVA 0x30A669C

bool IGFGDDANEPE__GEJMOHFLOHL(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  return (__this->fields).OFIKEBGDMBE;
}


// ===== public long HJNDKMKFGIP()  [RVA 0x30A66A4]
// IGFGDDANEPE$$HJNDKMKFGIP @ RVA 0x30A66A4

int64_t IGFGDDANEPE__HJNDKMKFGIP(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  AMJMGFCCAKN_o *pAVar1;
  
  pAVar1 = (__this->fields).HJLEJIJKJKD;
  if (pAVar1 != (AMJMGFCCAKN_o *)0x0) {
    return (pAVar1->fields).CJKLJJIMECK;
  }
  return 0;
}


// ===== public string PCKNGDCDPKD()  [RVA 0x30A66BC]
// IGFGDDANEPE$$PCKNGDCDPKD @ RVA 0x30A66BC

System_String_o * IGFGDDANEPE__PCKNGDCDPKD(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  return (__this->fields).MLEHIIGFDKM;
}


// ===== private void JMOIFIMNBPM()  [RVA 0x30A4940]
// IGFGDDANEPE$$JMOIFIMNBPM @ RVA 0x30A4940

void IGFGDDANEPE__JMOIFIMNBPM(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  Il2CppObject *item;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlNode_o *pSVar3;
  int index;
  
  if ((DAT_0456616e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    DAT_0456616e = 1;
  }
  pSVar1 = (__this->fields).PAPANCDPPIF;
  if (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    index = 0;
    do {
      if ((pSVar1->fields)._size <= index) {
        return;
      }
      item = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,index,
                        Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
      if (item == (Il2CppObject *)0x0) break;
      if (*(int *)((long)&item[0xd].klass + 4) != 0) {
        pSVar1 = (__this->fields).PAPANCDPPIF;
        if (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar1,item,
                     Method_System_Collections_Generic_List<PerkInfoItem>_Remove__);
          pSVar2 = (__this->fields).DMLGJFCNNJF;
          if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
            pSVar2 = (System_Xml_XmlNode_o *)
                     (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_5703/*"Enchantments"*/,
                                (pSVar2->klass->vtable)._51_get_Item.method);
            pSVar3 = EIABCPKDEBD__MHJPHEMBOLK
                               (pSVar2,StringLiteral_10213/*"Perk"*/,StringLiteral_9327/*"Name"*/,
                                (System_String_o *)item[4].klass,(MethodInfo *)0x0);
            if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031a4a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
                        (pSVar2,pSVar3,(pSVar2->klass->vtable)._25_RemoveChild.method);
              return;
            }
          }
        }
        break;
      }
      pSVar1 = (__this->fields).PAPANCDPPIF;
      index = index + 1;
    } while (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

