// Nekki.SF2.Core.Quests.QuestsManager$$HGKKAHIMGFI @ RVA 0x33057A8

bool Nekki_SF2_Core_Quests_QuestsManager__HGKKAHIMGFI
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_00;
  
  if ((DAT_04567764 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_FMJCOFMECGL_LLCDPGPAFFP__);
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_FMJCOFMECGL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Exists__);
    FUN_01bab630(&System_Predicate<FPPKHNNABAD>_TypeInfo);
    DAT_04567764 = 1;
  }
                    /* try { // try from 03405808 to 0350580f has its CatchHandler @ 0340598c */
  pIVar2 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_Core_Quests_QuestsManager_FMJCOFMECGL_TypeInfo);
                    /* try { // try from 03405818 to 0350581f has its CatchHandler @ 03405990 */
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
                    /* try { // try from 03405824 to 0350582b has its CatchHandler @ 03405994 */
    pIVar2->klass = (Il2CppClass *)NDBPOFMECGL;
                    /* try { // try from 03405830 to 03505837 has its CatchHandler @ 03405998 */
    thunk_FUN_01c20e04(pIVar2,NDBPOFMECGL);
    if (pIVar2->klass != (Il2CppClass *)0x0) {
      if (*(char *)((long)&(pIVar2->klass->_1).events + 4) != '\0') {
        return false;
      }
      __this_00 = (__this->fields).GOAJEJNPDFA;
                    /* try { // try from 03405864 to 035058d3 has its CatchHandler @ 03405b34 */
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<FPPKHNNABAD>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_00 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
        bVar1 = System_Collections_Generic_List<object>__Exists
                          ((System_Collections_Generic_List_object__o *)__this_00,match,
                           Method_System_Collections_Generic_List<FPPKHNNABAD>_Exists__);
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

