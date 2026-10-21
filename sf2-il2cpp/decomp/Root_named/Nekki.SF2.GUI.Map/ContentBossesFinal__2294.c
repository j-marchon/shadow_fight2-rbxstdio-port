// TypeDefIndex 2294
// Namespace: Nekki.SF2.GUI.Map
// public class ContentBossesFinal : ContentBase
// Fields:
//   private LabelAlias _replaysLabel; // 0x28
//   private LabelAlias _lblDescription; // 0x30
//   private PrizePanel _prizePanel; // 0x38

// ===== public void .ctor()  [RVA 0x3308A14]
// Nekki.SF2.GUI.Map.ContentBossesFinal$$.ctor @ RVA 0x3308A14

void Nekki_SF2_GUI_Map_ContentBossesFinal___ctor
               (Nekki_SF2_GUI_Map_ContentBossesFinal_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_ContentBase___ctor((Nekki_SF2_GUI_Map_ContentBase_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void HKCNMPNMAJA(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3308A1C]
// Nekki.SF2.GUI.Map.ContentBossesFinal$$HKCNMPNMAJA @ RVA 0x3308A1C

void Nekki_SF2_GUI_Map_ContentBossesFinal__HKCNMPNMAJA
               (Nekki_SF2_GUI_Map_ContentBossesFinal_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  bool value;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  int32_t local_24;
  
  if ((DAT_04567774 & 1) == 0) {
    FUN_01bab630(&PMFNDKKBEKN_TypeInfo);
    FUN_01bab630(&StringLiteral_15850/*"^replays^: {0}"*/);
    DAT_04567774 = 1;
  }
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._replaysLabel;
    if (iVar2 == 0x13) {
                    /* try { // try from 03408a80 to 03508bab has its CatchHandler @ 03408a80
                       catch() { ... } // from try @ 03408a80 with catch @ 03408a80
                       catch() { ... } // from try @ 03408bf0 with catch @ 03408a80
                       catch() { ... } // from try @ 03408c0c with catch @ 03408a80
                       catch() { ... } // from try @ 03408c30 with catch @ 03408a80
                       catch() { ... } // from try @ 03408cf8 with catch @ 03408a80 */
      bVar1 = (PMFNDKKBEKN_TypeInfo->_2).naturalAligment;
      if (((BANHBMINMMP->klass->_2).naturalAligment < bVar1) ||
         ((BANHBMINMMP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)PMFNDKKBEKN_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(BANHBMINMMP);
      }
      local_24 = PMFNDKKBEKN__EBDBABMAIAM((PMFNDKKBEKN_o *)BANHBMINMMP,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      pSVar3 = System_String__Format(StringLiteral_15850/*"^replays^: {0}"*/,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,pSVar3,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._replaysLabel;
        if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          value = true;
          goto LAB_03408b2c;
        }
      }
    }
    else if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
            (__this_00 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
            __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      value = false;
LAB_03408b2c:
      UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool JEAINKCPKKN(FightList AGONJKOMAAA)  [RVA 0x3308B50]
// Nekki.SF2.GUI.Map.ContentBossesFinal$$JEAINKCPKKN @ RVA 0x3308B50

bool Nekki_SF2_GUI_Map_ContentBossesFinal__JEAINKCPKKN
               (Nekki_SF2_GUI_Map_ContentBossesFinal_o *__this,FightList_o *AGONJKOMAAA,
               MethodInfo *method)

{
  int32_t JLAFGLDIFOC;
  System_Collections_Generic_List_JBCGDIEHOHH__o *__this_00;
  JBCGDIEHOHH_o *__this_01;
  Roster_o *__this_02;
  JHBHHHKEFOO_o *pJVar1;
  System_Collections_Generic_List_OCOEAJMJEOP__o *__this_03;
  Il2CppObject *pIVar2;
  Item_o *__this_04;
  HOOAAGABMBL_o *pHVar3;
  
  if ((DAT_04567775 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567775 = 1;
  }
                    /* try { // try from 03408bac to 03508bb3 has its CatchHandler @ 03408c1c */
  if (AGONJKOMAAA == (FightList_o *)0x0) {
    return false;
  }
  __this_00 = (AGONJKOMAAA->fields).FGAENDJJOGN;
  if (__this_00 != (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) {
    __this_01 = (JBCGDIEHOHH_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (__this_00->fields)._size + -1,
                           Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
                    /* try { // try from 03408bdc to 03508bdf has its CatchHandler @ 03408c10 */
                    /* try { // try from 03408be4 to 03508bef has its CatchHandler @ 03408c18 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
                    /* try { // try from 03408bf0 to 03508c07 has its CatchHandler @ 03408a80 */
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03408c08 to 03508c0b has its CatchHandler @ 03408c14 */
                    /* try { // try from 03408c0c to 03508c2b has its CatchHandler @ 03408a80 */
      DAT_04565b7d = '\x01';
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03408bdc with catch @ 03408c10
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03408c08 with catch @ 03408c14
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03408be4 with catch @ 03408c18
                        */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03408bac with catch @ 03408c1c
                        */
      thunk_FUN_01ba7564();
    }
    __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 03408c2c to 03508c2f has its CatchHandler @ 03408ce8 */
                    /* try { // try from 03408c30 to 03508cef has its CatchHandler @ 03408a80 */
    if ((((__this_02 != (Roster_o *)0x0) &&
         (JLAFGLDIFOC = Roster__EOEAKGGDBFH(__this_02,(MethodInfo *)0x0),
         __this_01 != (JBCGDIEHOHH_o *)0x0)) &&
        (pJVar1 = JBCGDIEHOHH__ALLFNDNBMCO(__this_01,JLAFGLDIFOC,(MethodInfo *)0x0),
        pJVar1 != (JHBHHHKEFOO_o *)0x0)) &&
       (__this_03 = (pJVar1->fields).GHAAKPDHIJJ,
       __this_03 != (System_Collections_Generic_List_OCOEAJMJEOP__o *)0x0)) {
      if ((__this_03->fields)._size == 0) {
                    /* try { // try from 03408cf0 to 03508cf7 has its CatchHandler @ 03408d0c */
                    /* try { // try from 03408cf8 to 03508d03 has its CatchHandler @ 03408a80 */
        return false;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_03,0,
                          Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Item__);
      if (pIVar2 != (Il2CppObject *)0x0) {
        if (*(char *)((long)&pIVar2[1].klass + 5) == '\0') {
          return false;
        }
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
        __this_04 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if (__this_04 != (Item_o *)0x0) {
          pHVar3 = Item__CKKIPBAIEMN(__this_04,pIVar2[1].monitor,(MethodInfo *)0x0);
          return pHVar3 != (HOOAAGABMBL_o *)0x0;
                    /* catch() { ... } // from try @ 03408c2c with catch @ 03408ce8 */
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(OOMHDDBCBJP BANHBMINMMP, FightList AGONJKOMAAA)  [RVA 0x3308D00]
// Nekki.SF2.GUI.Map.ContentBossesFinal$$Init @ RVA 0x3308D00

void Nekki_SF2_GUI_Map_ContentBossesFinal__Init
               (Nekki_SF2_GUI_Map_ContentBossesFinal_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               FightList_o *AGONJKOMAAA,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  uint uVar3;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Map_PrizePanel_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  Nekki_SF2_GUI_Map_ContentBossesFinal_o *__this_00;
  
                    /* try { // try from 03408d04 to 03508d0b has its CatchHandler @ 03408d0c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03408cf0 with catch @ 03408d0c
                       catch(type#2 @ 00000000) { ... } // from try @ 03408d04 with catch @ 03408d0c
                        */
  if ((DAT_04567776 & 1) == 0) {
    FUN_01bab630(&StringLiteral_15811/*"^ ^challengeBoss^"*/);
    FUN_01bab630(&StringLiteral_15810/*"^"*/);
    DAT_04567776 = 1;
  }
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) goto LAB_03408e54;
  iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
  if (((iVar2 == 2) ||
      (iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar2 == 10)) ||
     (iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar2 == 0x15)) {
    __this_02 = (__this->fields)._lblDescription;
    CJNHFNHJHPE = System_String__Concat
                            (StringLiteral_15810/*"^"*/,(BANHBMINMMP->fields).ICPECIILDFJ,
                             StringLiteral_15811/*"^ ^challengeBoss^"*/,(MethodInfo *)0x0);
    if (__this_02 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03408e54;
  }
  else {
    __this_02 = (__this->fields)._lblDescription;
    if (__this_02 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03408e54;
    CJNHFNHJHPE = (BANHBMINMMP->fields).BJMHBMDFFPA;
  }
  method_00 = (MethodInfo *)0x0;
  Nekki_SF2_GUI_LabelAlias__set_Alias(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Map_ContentBossesFinal__HKCNMPNMAJA(__this,BANHBMINMMP,method_00);
  uVar3 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
  __this_00 = (Nekki_SF2_GUI_Map_ContentBossesFinal_o *)(ulong)uVar3;
  if (uVar3 == 2) {
LAB_03408e08:
    bVar1 = Nekki_SF2_GUI_Map_ContentBossesFinal__JEAINKCPKKN(__this_00,AGONJKOMAAA,method_00);
    bVar1 = !bVar1;
  }
  else {
    uVar3 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
    __this_00 = (Nekki_SF2_GUI_Map_ContentBossesFinal_o *)(ulong)uVar3;
    if (uVar3 == 10) goto LAB_03408e08;
    uVar3 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
    __this_00 = (Nekki_SF2_GUI_Map_ContentBossesFinal_o *)(ulong)uVar3;
    if (uVar3 == 0x15) goto LAB_03408e08;
    bVar1 = true;
  }
  __this_01 = (__this->fields)._prizePanel;
  if (__this_01 != (Nekki_SF2_GUI_Map_PrizePanel_o *)0x0) {
    Nekki_SF2_GUI_Map_PrizePanel__Init(__this_01,-1,bVar1,AGONJKOMAAA,(MethodInfo *)0x0);
    return;
  }
LAB_03408e54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

