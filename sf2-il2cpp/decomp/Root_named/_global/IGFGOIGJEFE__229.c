// TypeDefIndex 229
// Namespace: 
// public class IGFGOIGJEFE : QuestAction
// Fields:
//   private LCKCDEKNLOA PGLINMCHKGC; // 0x68
//   private LCKCDEKNLOA EBAHJECPAHA; // 0x70

// ===== public override void PKIFMKGDJJN()  [RVA 0x31271C8]
// IGFGOIGJEFE$$PKIFMKGDJJN @ RVA 0x31271C8

void IGFGOIGJEFE__PKIFMKGDJJN(IGFGOIGJEFE_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  
                    /* try { // try from 032271c8 to 033271ef has its CatchHandler @ 03227cc4 */
  pLVar1 = (__this->fields).PGLINMCHKGC;
  if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).EBAHJECPAHA;
    if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MCEDBILCHNA()  [RVA 0x31271F8]
// IGFGOIGJEFE$$MCEDBILCHNA @ RVA 0x31271F8

void IGFGOIGJEFE__MCEDBILCHNA(IGFGOIGJEFE_o *__this,MethodInfo *method)

{
  Roster_o *__this_00;
  
  if ((DAT_0456665f & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456665f = 1;
  }
                    /* try { // try from 03227230 to 0332725b has its CatchHandler @ 03227cbc */
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
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
                    /* try { // try from 03227280 to 03327283 has its CatchHandler @ 03227bf4 */
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 03227284 to 0332728b has its CatchHandler @ 03227c5c */
  if (__this_00 != (Roster_o *)0x0) {
                    /* try { // try from 03227294 to 0332729b has its CatchHandler @ 03227c64 */
    Roster__PJNFEIMKILE(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x312729C]
// IGFGOIGJEFE$$.ctor @ RVA 0x312729C

void IGFGOIGJEFE___ctor(IGFGOIGJEFE_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  LCKCDEKNLOA_o **ppLVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 032272a4 to 033272ab has its CatchHandler @ 03227c60 */
  if ((DAT_04566660 & 1) == 0) {
                    /* try { // try from 032272bc to 033272c3 has its CatchHandler @ 03227c58 */
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
                    /* try { // try from 032272c8 to 033272cf has its CatchHandler @ 03227c48 */
    DAT_04566660 = 1;
    method = extraout_x1;
  }
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
                    /* try { // try from 032272d8 to 033272df has its CatchHandler @ 03227c38 */
                    /* try { // try from 032272e0 to 033272ef has its CatchHandler @ 03227c3c */
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).PGLINMCHKGC;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
                    /* try { // try from 032272fc to 0332730b has its CatchHandler @ 03227c54 */
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).EBAHJECPAHA;
                    /* try { // try from 0322730c to 03327317 has its CatchHandler @ 03227c4c */
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
                    /* try { // try from 03227324 to 03327387 has its CatchHandler @ 03227ce0 */
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x312732C]
// IGFGOIGJEFE$$MAHFCKJGBPP @ RVA 0x312732C

void IGFGOIGJEFE__MAHFCKJGBPP(IGFGOIGJEFE_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_MEMHEPBAJJA__o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_01;
  FPPKHNNABAD_o *__this_02;
  LCKCDEKNLOA_o *__this_03;
  Roster_o *pAVar4;
  System_String_o *message;
  int iVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566661 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEMHEPBAJJA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEMHEPBAJJA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEMHEPBAJJA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEMHEPBAJJA>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566661 = 1;
  }
                    /* try { // try from 032273ac to 033273af has its CatchHandler @ 03227bb4 */
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03227410 to 03327437 has its CatchHandler @ 03227cc0 */
    thunk_FUN_01ba7564();
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar4 != (Roster_o *)0x0) &&
     (__this_00 = (pAVar4->fields).ECEOENIJAPJ,
     __this_00 != (System_Collections_Generic_List_MEMHEPBAJJA__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MEMHEPBAJJA>_GetEnumerator__);
    iVar5 = 0;
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<MEMHEPBAJJA>_MoveNext__);
      pIVar2 = local_60.fields._current;
                    /* try { // try from 03227478 to 033274a3 has its CatchHandler @ 03227cb8 */
      if (!bVar3) break;
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = System_String__op_Inequality
                        ((__this->fields).super._LLOFHDDBKFD_k__BackingField,
                         local_60.fields._current[1].monitor,(MethodInfo *)0x0);
      if ((bVar3) && (pIVar2[1].klass != (Il2CppClass *)0x0)) {
        __this_01 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (__this_01 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName
                              (__this_01,pIVar2[1].monitor,(MethodInfo *)0x0);
                    /* try { // try from 032274c8 to 033274cb has its CatchHandler @ 03227bf0 */
                    /* try { // try from 032274cc to 033274d3 has its CatchHandler @ 03227c2c */
        if ((__this_02 != (FPPKHNNABAD_o *)0x0) &&
           (bVar3 = FPPKHNNABAD__KEAKFNDNBGH(__this_02,(MethodInfo *)0x0), !bVar3)) {
          message = (__this_02->fields)._COIPKAKHDFP_k__BackingField;
          iVar5 = iVar5 + 1;
                    /* try { // try from 032274dc to 033274e3 has its CatchHandler @ 03227c34 */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 032274ec to 033274f3 has its CatchHandler @ 03227c30 */
          UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<MEMHEPBAJJA>_Dispose__);
                    /* try { // try from 03227504 to 0332750b has its CatchHandler @ 03227c28 */
    if (iVar5 == 0) {
      if (DAT_04565e5a == '\0') {
                    /* try { // try from 03227544 to 03327553 has its CatchHandler @ 03227c24 */
        FUN_01bab630(&SceneManagerSF_TypeInfo);
        DAT_04565e5a = '\x01';
      }
                    /* try { // try from 03227554 to 0332755f has its CatchHandler @ 03227c1c */
      uVar1 = SceneManagerSF_TypeInfo->static_fields->DLOIHNBNGDB;
                    /* try { // try from 0322756c to 033275cf has its CatchHandler @ 03227cd8 */
      if ((uVar1 < 0xc) && ((1 << (ulong)(uVar1 & 0x1f) & 0x905U) != 0)) {
        __this_03 = (__this->fields).EBAHJECPAHA;
        if (__this_03 == (LCKCDEKNLOA_o *)0x0) goto LAB_0322758c;
        goto LAB_03227510;
      }
    }
    __this_03 = (__this->fields).PGLINMCHKGC;
    if (__this_03 != (LCKCDEKNLOA_o *)0x0) {
LAB_03227510:
                    /* try { // try from 03227510 to 03327517 has its CatchHandler @ 03227c18 */
      LCKCDEKNLOA__MAHFCKJGBPP(__this_03,AAJBIMFNMBB,(MethodInfo *)0x0);
                    /* try { // try from 03227520 to 03327527 has its CatchHandler @ 03227c08 */
                    /* try { // try from 03227528 to 03327537 has its CatchHandler @ 03227c0c */
      return;
    }
  }
LAB_0322758c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x312761C]
// IGFGOIGJEFE$$HNIHOIAMDPC @ RVA 0x312761C

void IGFGOIGJEFE__HNIHOIAMDPC
               (IGFGOIGJEFE_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlNode_o *NPLGCIFGFOK_00;
  System_Xml_XmlNode_o *NPLGCIFGFOK_01;
  System_Action_o *pSVar1;
  LCKCDEKNLOA_o *pLVar2;
  
                    /* try { // try from 03227624 to 0332762b has its CatchHandler @ 03227b90 */
                    /* try { // try from 0322763c to 03327643 has its CatchHandler @ 03227b8c */
  if ((DAT_04566662 & 1) == 0) {
                    /* try { // try from 03227644 to 03327653 has its CatchHandler @ 03227b88 */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_IGFGOIGJEFE_MCEDBILCHNA__);
                    /* try { // try from 03227660 to 0332766f has its CatchHandler @ 03227b84 */
    FUN_01bab630(&Method_IGFGOIGJEFE_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_12524/*"Success"*/);
                    /* try { // try from 03227670 to 0332767b has its CatchHandler @ 03227b80 */
    FUN_01bab630(&StringLiteral_5840/*"Error"*/);
    DAT_04566662 = 1;
  }
                    /* try { // try from 03227688 to 0332768f has its CatchHandler @ 03227b7c */
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 032276a0 to 033276a7 has its CatchHandler @ 03227b78 */
                    /* try { // try from 032276ac to 033276b3 has its CatchHandler @ 03227b74 */
                    /* try { // try from 032276c4 to 033276cb has its CatchHandler @ 03227b70 */
                    /* try { // try from 032276cc to 033276db has its CatchHandler @ 03227b6c */
    NPLGCIFGFOK_00 =
         (System_Xml_XmlNode_o *)
         (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                   (NPLGCIFGFOK,StringLiteral_12524/*"Success"*/,(NPLGCIFGFOK->klass->vtable)._51_get_Item.method
                   );
                    /* try { // try from 032276dc to 0332774b has its CatchHandler @ 03227bd8 */
    NPLGCIFGFOK_01 =
         (System_Xml_XmlNode_o *)
         (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                   (NPLGCIFGFOK,StringLiteral_5840/*"Error"*/,(NPLGCIFGFOK->klass->vtable)._51_get_Item.method)
    ;
    pLVar2 = (__this->fields).PGLINMCHKGC;
    pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    QuestAction__KIBBEDPGMBB((QuestAction_o *)__this,NPLGCIFGFOK_00,pLVar2,pSVar1,(MethodInfo *)0x0)
    ;
    pLVar2 = (__this->fields).EBAHJECPAHA;
    pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
                    /* try { // try from 03227760 to 0332776f has its CatchHandler @ 03227bdc */
    QuestAction__KIBBEDPGMBB((QuestAction_o *)__this,NPLGCIFGFOK_01,pLVar2,pSVar1,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NDJAJHFFPKP()  [RVA 0x3127780]
// IGFGOIGJEFE$$NDJAJHFFPKP @ RVA 0x3127780

void IGFGOIGJEFE__NDJAJHFFPKP(IGFGOIGJEFE_o *__this,MethodInfo *method)

{
                    /* try { // try from 03227784 to 0332778b has its CatchHandler @ 03227ba8 */
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

