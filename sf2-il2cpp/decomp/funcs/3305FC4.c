// Nekki.SF2.Core.Quests.QuestsManager$$RegisterLocalVariable @ RVA 0x3305FC4

void Nekki_SF2_Core_Quests_QuestsManager__RegisterLocalVariable
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MEMHEPBAJJA_HIAEDCDJJDJ_o *ECGIMBNBIMM
               ,System_String_o *FDHGPAPAPDF,MethodInfo *method)

{
  System_Collections_Generic_List_FPPKHNNABAD__o *EDEHNHIHDDH;
  FPPKHNNABAD_o *__this_00;
  
  if ((DAT_04567754 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<FPPKHNNABAD>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&StringLiteral_4069);
    DAT_04567754 = 1;
  }
  EDEHNHIHDDH = (__this->fields).GAMJEFPADCD;
  if (EDEHNHIHDDH != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    if ((EDEHNHIHDDH->fields)._size < 1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_4069,(MethodInfo *)0x0);
      return;
    }
    __this_00 = (FPPKHNNABAD_o *)
                DJNBJHPDKDP__KIKGKKGDCKK<object>
                          ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                           Method_DJNBJHPDKDP_KIKGKKGDCKK<FPPKHNNABAD>__);
    if (__this_00 != (FPPKHNNABAD_o *)0x0) {
      FPPKHNNABAD__CCHEJCDCGFE(__this_00,ECGIMBNBIMM,FDHGPAPAPDF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

