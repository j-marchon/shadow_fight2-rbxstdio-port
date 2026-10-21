// TypeDefIndex 2782
// Namespace: 
// [CompilerGenerated]
// private sealed class GameUtils.HCLHDFADEEG
// Fields:
//   public List<KMJDCOABCCG> completedAchievements; // 0x10
//   public int i; // 0x18
//   public Predicate<KAJIALENBGD> <>9__0; // 0x20

// ===== public void .ctor()  [RVA 0x34136A4]
// GameUtils.HCLHDFADEEG$$.ctor @ RVA 0x34136A4

void GameUtils_HCLHDFADEEG___ctor(GameUtils_HCLHDFADEEG_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 035135ec with catch @ 035136a4
                       catch() { ... } // from try @ 03513604 with catch @ 035136a4 */
                    /* catch() { ... } // from try @ 035131c0 with catch @ 035136a8 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool KACAAFBIHLO(KAJIALENBGD repAch)  [RVA 0x34136AC]
// GameUtils.HCLHDFADEEG$$KACAAFBIHLO @ RVA 0x34136AC

bool GameUtils_HCLHDFADEEG__KACAAFBIHLO
               (GameUtils_HCLHDFADEEG_o *__this,KAJIALENBGD_o *repAch,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_KMJDCOABCCG__o *__this_00;
  Il2CppObject *pIVar2;
  System_String_o *a;
  
                    /* catch() { ... } // from try @ 0351357c with catch @ 035136ac */
                    /* catch() { ... } // from try @ 03513214 with catch @ 035136b0 */
                    /* catch() { ... } // from try @ 03513200 with catch @ 035136b4 */
                    /* catch() { ... } // from try @ 035131e4 with catch @ 035136b8 */
                    /* catch() { ... } // from try @ 03513198 with catch @ 035136bc */
                    /* catch() { ... } // from try @ 0351328c with catch @ 035136c0 */
                    /* catch() { ... } // from try @ 03513578 with catch @ 035136c4 */
  if ((DAT_04568098 & 1) == 0) {
                    /* catch() { ... } // from try @ 03513574 with catch @ 035136c8 */
                    /* catch() { ... } // from try @ 03513570 with catch @ 035136cc */
                    /* catch() { ... } // from try @ 03513320 with catch @ 035136d0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
                    /* catch() { ... } // from try @ 03513370 with catch @ 035136d4 */
                    /* catch() { ... } // from try @ 03513564 with catch @ 035136d8 */
    DAT_04568098 = 1;
  }
                    /* catch() { ... } // from try @ 03513560 with catch @ 035136dc */
                    /* catch() { ... } // from try @ 0351335c with catch @ 035136e0 */
                    /* catch() { ... } // from try @ 0351355c with catch @ 035136e4 */
  if ((repAch != (KAJIALENBGD_o *)0x0) &&
     (__this_00 = (__this->fields).completedAchievements,
     __this_00 != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0)) {
                    /* catch() { ... } // from try @ 03513230 with catch @ 035136e8 */
                    /* catch() { ... } // from try @ 03513558 with catch @ 035136ec */
                    /* catch() { ... } // from try @ 03513270 with catch @ 035136f0 */
                    /* catch() { ... } // from try @ 035132c4 with catch @ 035136f4 */
    a = (repAch->fields).DEKCPPOJFEH;
                    /* catch() { ... } // from try @ 035132fc with catch @ 035136f8 */
                    /* catch() { ... } // from try @ 035132e0 with catch @ 035136fc */
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,(__this->fields).i,
                        Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
                    /* catch() { ... } // from try @ 03513554 with catch @ 03513700 */
    if (pIVar2 != (Il2CppObject *)0x0) {
                    /* catch() { ... } // from try @ 03513254 with catch @ 03513704 */
                    /* catch() { ... } // from try @ 03513380 with catch @ 03513708 */
                    /* catch() { ... } // from try @ 03513188 with catch @ 0351370c */
                    /* catch() { ... } // from try @ 03513338 with catch @ 03513710 */
                    /* catch() { ... } // from try @ 03513568 with catch @ 03513714 */
      bVar1 = System_String__op_Equality(a,(System_String_o *)pIVar2[2].klass,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03512ed0 with catch @ 0351371c */
  FUN_01bab8c8();
}

