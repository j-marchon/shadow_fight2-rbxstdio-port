// TypeDefIndex 2600
// Namespace: 
// public class NKILLHEPOMM : QuestAction
// Fields:
//   private string AJAPMBHEBKK; // 0x68
//   private string DEKCPPOJFEH; // 0x70

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL OKBIKHHKOEN)  [RVA 0x33AA228]
// NKILLHEPOMM$$MAHFCKJGBPP @ RVA 0x33AA228

void NKILLHEPOMM__MAHFCKJGBPP(NKILLHEPOMM_o *__this,PKHMIGFEJCL_o *OKBIKHHKOEN,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool MJDICHGKPGE;
  bool bVar2;
  DNELIPCHKLK_o *__this_00;
  OOMHDDBCBJP_o *BANHBMINMMP;
  OLKPEJMEBPJ_o *pOVar3;
  Roster_o *pAVar4;
  NLPJLHOEAOE_o *__this_01;
  int64_t iVar5;
  MEJIKMPNBNL_o *pMVar6;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_02;
  long lVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *pSVar8;
  Nekki_SF2_GUI_Map_MapScene_o *__this_03;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567d09 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&StringLiteral_4172/*"Cant find battle with name "*/);
    DAT_04567d09 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,OKBIKHHKOEN,(MethodInfo *)0x0);
  pSVar8 = (__this->fields).AJAPMBHEBKK;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MJDICHGKPGE = MFBNFJGBPBB__EDBBDECOKAF(OKBIKHHKOEN,pSVar8,(MethodInfo *)0x0);
  pSVar8 = MFBNFJGBPBB__ACJKLBMNMEJ(OKBIKHHKOEN,(__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
  __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
  DNELIPCHKLK___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (DNELIPCHKLK_o *)0x0) goto LAB_034aa6e4;
  method_01 = (MethodInfo *)0x0;
  DNELIPCHKLK__LGOFNFEIKFB(__this_00,pSVar8,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  BANHBMINMMP = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) {
    pSVar8 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    pSVar8 = System_String__Concat(StringLiteral_4172/*"Cant find battle with name "*/,pSVar8,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
    goto LAB_034aa6b8;
  }
  pOVar3 = (BANHBMINMMP->fields).LFJPDELEIHG;
  method_00 = extraout_x1;
  if (pOVar3 == (OLKPEJMEBPJ_o *)0x0) {
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
    pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar4 == (Roster_o *)0x0) goto LAB_034aa6e4;
    Roster__OIMBEHKPFIC(pAVar4,__this_00,false,true,false,!MJDICHGKPGE,0,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar4 == (Roster_o *)0x0) goto LAB_034aa6e4;
    method_01 = (MethodInfo *)0x0;
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar4,false,(MethodInfo *)0x0);
    __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 == (NLPJLHOEAOE_o *)0x0) goto LAB_034aa6e4;
    NLPJLHOEAOE__FDFHMHPOHKA(__this_01,(MethodInfo *)0x0);
    pOVar3 = (BANHBMINMMP->fields).LFJPDELEIHG;
    method_00 = extraout_x1_00;
    if (pOVar3 == (OLKPEJMEBPJ_o *)0x0) goto LAB_034aa6e4;
  }
  if ((pOVar3->fields).BFPMONAEFGM == false) {
    if ((pOVar3->fields).DAJFCLOOMDM == -1) {
      if (!MJDICHGKPGE) goto LAB_034aa510;
    }
    else {
      iVar5 = OLKPEJMEBPJ__KPPFAPANAMH(pOVar3,method_00);
      if (MJDICHGKPGE == iVar5 < 1) {
LAB_034aa510:
        pSVar8 = (__this_00->fields).GDPFBDIJNHA;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pMVar6 = NLPJLHOEAOE__KHHBHBLIANB(pSVar8,(MethodInfo *)0x0);
        if (pMVar6 != (MEJIKMPNBNL_o *)0x0) {
          __this_02 = (pMVar6->fields).BDCBJJGNPMC;
          if (__this_02 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) goto LAB_034aa6e4;
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_88,(System_Collections_Generic_List_object__o *)__this_02,
                     Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
          local_70.fields._index = local_88.fields._index;
          local_70.fields._version = local_88.fields._version;
          local_70.fields._list = local_88.fields._list;
          local_70.fields._current = local_88.fields._current;
          while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_70,
                                    Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                                   ), pIVar1 = local_70.fields._current, bVar2) {
            if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            method_01 = (MethodInfo *)0x0;
            bVar2 = System_String__op_Equality
                              (local_70.fields._current[1].monitor,(__this_00->fields).GJFJPLHCBKJ,
                               (MethodInfo *)0x0);
            if (bVar2) {
              *(bool *)&pIVar1[0xb].klass = MJDICHGKPGE;
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
        }
        pOVar3 = (BANHBMINMMP->fields).LFJPDELEIHG;
        if (pOVar3 == (OLKPEJMEBPJ_o *)0x0) goto LAB_034aa6e4;
        OLKPEJMEBPJ__DPLIHJEANGE(pOVar3,!MJDICHGKPGE,method_01);
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
        pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar4 == (Roster_o *)0x0) goto LAB_034aa6e4;
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar4,false,(MethodInfo *)0x0);
      }
    }
  }
  else if (MJDICHGKPGE) goto LAB_034aa510;
  lVar7 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
  __this_03 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar7 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar2) {
    if (__this_03 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
LAB_034aa6e4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Map_MapScene__UpdateBattleButtonHidden(__this_03,BANHBMINMMP,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__ActiveBattleByFightIDS
              (__this_03,__this_00,MJDICHGKPGE,true,true,(MethodInfo *)0x0);
  }
LAB_034aa6b8:
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x33AA894]
// NKILLHEPOMM$$HNIHOIAMDPC @ RVA 0x33AA894

void NKILLHEPOMM__HNIHOIAMDPC
               (NKILLHEPOMM_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04567d0a & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    FUN_01bab630(&StringLiteral_8057/*"IsVisible"*/);
    DAT_04567d0a = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      (__this->fields).DEKCPPOJFEH = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_8057/*"IsVisible"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).AJAPMBHEBKK;
        *ppSVar4 = pSVar3;
                    /* try { // try from 034aa9a8 to 035aa9cf has its CatchHandler @ 034aaba4 */
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33AA9B0]
// NKILLHEPOMM$$.ctor @ RVA 0x33AA9B0

void NKILLHEPOMM___ctor(NKILLHEPOMM_o *__this,MethodInfo *method)

{
  if ((DAT_04567d0b & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04567d0b = 1;
  }
  (__this->fields).AJAPMBHEBKK = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
                    /* try { // try from 034aaa04 to 035aaa2f has its CatchHandler @ 034aaba0 */
  (__this->fields).DEKCPPOJFEH = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

