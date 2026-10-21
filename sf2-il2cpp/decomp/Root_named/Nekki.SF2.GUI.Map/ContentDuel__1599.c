// TypeDefIndex 1599
// Namespace: Nekki.SF2.GUI.Map
// public class ContentDuel : ContentBase
// Fields:
//   private LabelAlias _lblDescription; // 0x28
//   private DifficultyPanel _difficultyPanel; // 0x30
//   private PrizePanel _prizePanel; // 0x38
//   protected Button _btnPeriodicReset; // 0x40
//   private OOMHDDBCBJP ACMHOIKOLBE; // 0x48

// ===== public void .ctor()  [RVA 0x31B512C]
// Nekki.SF2.GUI.Map.ContentDuel$$.ctor @ RVA 0x31B512C

void Nekki_SF2_GUI_Map_ContentDuel___ctor
               (Nekki_SF2_GUI_Map_ContentDuel_o *__this,MethodInfo *method)

{
                    /* try { // try from 032b512c to 033b51d3 has its CatchHandler @ 032b4ecc */
  Nekki_SF2_GUI_Map_ContentBase___ctor((Nekki_SF2_GUI_Map_ContentBase_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Init(OOMHDDBCBJP BANHBMINMMP, FightList AGONJKOMAAA)  [RVA 0x31B5134]
// Nekki.SF2.GUI.Map.ContentDuel$$Init @ RVA 0x31B5134

void Nekki_SF2_GUI_Map_ContentDuel__Init
               (Nekki_SF2_GUI_Map_ContentDuel_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               FightList_o *AGONJKOMAAA,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Map_ContentDuel_o *__this_00;
  Nekki_SF2_GUI_Map_PrizePanel_o *__this_01;
  Nekki_SF2_GUI_Map_DifficultyPanel_o *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Button_o *__this_02;
  FightList_o *method_00;
  OOMHDDBCBJP_o **ppOVar5;
  Nekki_SF2_GUI_LabelAlias_o *__this_03;
  float OEBANKNLEMN;
  
  method_00 = AGONJKOMAAA;
  if ((DAT_04566bac & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04566bac = 1;
  }
  ppOVar5 = &(__this->fields).ACMHOIKOLBE;
  *ppOVar5 = BANHBMINMMP;
  thunk_FUN_01c20e04(ppOVar5,BANHBMINMMP);
  if (AGONJKOMAAA != (FightList_o *)0x0) {
    __this_03 = (__this->fields)._lblDescription;
    CJNHFNHJHPE = FightList__CJPIFPJMENP(AGONJKOMAAA,(MethodInfo *)0x0);
    if (__this_03 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_03,CJNHFNHJHPE,(MethodInfo *)method_00);
      bVar1 = Nekki_SF2_GUI_Map_ContentDuel__OLEJJPPJKKO
                        (__this_00,AGONJKOMAAA,(MethodInfo *)method_00);
      if (bVar1) {
        if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) goto LAB_032b52a8;
        iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
                    /* try { // try from 032b51d4 to 033b51d7 has its CatchHandler @ 032b51e8 */
                    /* try { // try from 032b51d8 to 033b51db has its CatchHandler @ 032b51e0 */
        if ((iVar2 == 2) ||
           (iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar2 == 10)) {
                    /* try { // try from 032b51dc to 033b5207 has its CatchHandler @ 032b4ecc */
          bVar1 = false;
                    /* catch() { ... } // from try @ 032b51d8 with catch @ 032b51e0 */
        }
        else {
                    /* catch() { ... } // from try @ 032b526c with catch @ 032b5298 */
          iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
          bVar1 = iVar2 != 0x15;
        }
      }
      else {
                    /* catch() { ... } // from try @ 032b5120 with catch @ 032b51e4 */
        bVar1 = true;
      }
                    /* catch() { ... } // from try @ 032b51d4 with catch @ 032b51e8 */
      __this_01 = (__this->fields)._prizePanel;
                    /* catch() { ... } // from try @ 032b50a0 with catch @ 032b51ec */
      if (__this_01 != (Nekki_SF2_GUI_Map_PrizePanel_o *)0x0) {
                    /* catch() { ... } // from try @ 032b50ec with catch @ 032b51f0 */
        Nekki_SF2_GUI_Map_PrizePanel__Init(__this_01,-1,bVar1,AGONJKOMAAA,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._difficultyPanel;
                    /* try { // try from 032b5208 to 033b520b has its CatchHandler @ 032b5230 */
                    /* try { // try from 032b520c to 033b523f has its CatchHandler @ 032b4ecc */
        if (((pNVar3 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) &&
            (pUVar4 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
            BANHBMINMMP != (OOMHDDBCBJP_o *)0x0)) && (pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch() { ... } // from try @ 032b5208 with catch @ 032b5230 */
          UnityEngine_GameObject__SetActive
                    (pUVar4,(BANHBMINMMP->fields).KIHDFNGKPGN != 0,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._difficultyPanel;
                    /* try { // try from 032b5240 to 033b5253 has its CatchHandler @ 032b52c4 */
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          OEBANKNLEMN = GameUtils__HLFLDFDKDFN(AGONJKOMAAA,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b506c with catch @ 032b5254
                       try { // try from 032b5254 to 033b526b has its CatchHandler @ 032b4ecc */
          if (pNVar3 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) {
            Nekki_SF2_GUI_Map_DifficultyPanel__Init(pNVar3,OEBANKNLEMN,(MethodInfo *)0x0);
            __this_02 = (__this->fields)._btnPeriodicReset;
                    /* try { // try from 032b526c to 033b526f has its CatchHandler @ 032b5298 */
                    /* try { // try from 032b5270 to 033b52a7 has its CatchHandler @ 032b4ecc */
            if ((__this_02 != (UnityEngine_UI_Button_o *)0x0) &&
               (pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_032b52a8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032b52a8 to 033b52af has its CatchHandler @ 032b52c4 */
  FUN_01bab8c8();
}


// ===== private bool OLEJJPPJKKO(FightList AGONJKOMAAA)  [RVA 0x31B52AC]
// Nekki.SF2.GUI.Map.ContentDuel$$OLEJJPPJKKO @ RVA 0x31B52AC

bool Nekki_SF2_GUI_Map_ContentDuel__OLEJJPPJKKO
               (Nekki_SF2_GUI_Map_ContentDuel_o *__this,FightList_o *AGONJKOMAAA,
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
  
                    /* try { // try from 032b52b0 to 033b52bb has its CatchHandler @ 032b4ecc */
                    /* try { // try from 032b52bc to 033b52c3 has its CatchHandler @ 032b52c4 */
  if ((DAT_04566bad & 1) == 0) {
                    /* catch() { ... } // from try @ 032b5240 with catch @ 032b52c4
                       catch() { ... } // from try @ 032b52a8 with catch @ 032b52c4
                       catch() { ... } // from try @ 032b52bc with catch @ 032b52c4 */
                    /* try { // try from 032b52c8 to 033b5353 has its CatchHandler @ 032b52c8
                       catch() { ... } // from try @ 032b52c8 with catch @ 032b52c8
                       catch() { ... } // from try @ 032b5374 with catch @ 032b52c8
                       catch() { ... } // from try @ 032b5398 with catch @ 032b52c8
                       catch() { ... } // from try @ 032b53c0 with catch @ 032b52c8
                       catch() { ... } // from try @ 032b5400 with catch @ 032b52c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566bad = 1;
  }
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
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
                    /* try { // try from 032b5354 to 033b535b has its CatchHandler @ 032b53a4 */
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 032b536c to 033b5373 has its CatchHandler @ 032b53a0 */
                    /* try { // try from 032b5374 to 033b5393 has its CatchHandler @ 032b52c8 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 032b5394 to 033b5397 has its CatchHandler @ 032b539c */
                    /* try { // try from 032b5398 to 033b53bb has its CatchHandler @ 032b52c8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5394 with catch @ 032b539c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b536c with catch @ 032b53a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5354 with catch @ 032b53a4
                        */
    if ((((__this_02 != (Roster_o *)0x0) &&
         (JLAFGLDIFOC = Roster__EOEAKGGDBFH(__this_02,(MethodInfo *)0x0),
         __this_01 != (JBCGDIEHOHH_o *)0x0)) &&
        (pJVar1 = JBCGDIEHOHH__ALLFNDNBMCO(__this_01,JLAFGLDIFOC,(MethodInfo *)0x0),
        pJVar1 != (JHBHHHKEFOO_o *)0x0)) &&
       (__this_03 = (pJVar1->fields).GHAAKPDHIJJ,
       __this_03 != (System_Collections_Generic_List_OCOEAJMJEOP__o *)0x0)) {
      if ((__this_03->fields)._size == 0) {
        return false;
      }
                    /* try { // try from 032b53bc to 033b53bf has its CatchHandler @ 032b53e8 */
                    /* try { // try from 032b53c0 to 033b53f7 has its CatchHandler @ 032b52c8 */
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_03,0,
                          Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Item__);
      if (pIVar2 != (Il2CppObject *)0x0) {
        if (*(char *)((long)&pIVar2[1].klass + 5) == '\0') {
          return false;
        }
                    /* catch() { ... } // from try @ 032b53bc with catch @ 032b53e8 */
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 032b53f8 to 033b53ff has its CatchHandler @ 032b5414 */
        if (DAT_04563eaa == '\0') {
                    /* try { // try from 032b5400 to 033b540b has its CatchHandler @ 032b52c8 */
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 032b540c to 033b5413 has its CatchHandler @ 032b5414 */
          DAT_04563eaa = '\x01';
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b53f8 with catch @ 032b5414
                       catch(type#2 @ 00000000) { ... } // from try @ 032b540c with catch @ 032b5414
                        */
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
                    /* try { // try from 032b5420 to 033b54e7 has its CatchHandler @ 032b5420
                       catch() { ... } // from try @ 032b5420 with catch @ 032b5420
                       catch() { ... } // from try @ 032b5564 with catch @ 032b5420
                       catch() { ... } // from try @ 032b5598 with catch @ 032b5420
                       catch() { ... } // from try @ 032b55cc with catch @ 032b5420
                       catch() { ... } // from try @ 032b55fc with catch @ 032b5420 */
        }
        __this_04 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if (__this_04 != (Item_o *)0x0) {
          pHVar3 = Item__CKKIPBAIEMN(__this_04,pIVar2[1].monitor,(MethodInfo *)0x0);
          return pHVar3 != (HOOAAGABMBL_o *)0x0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

