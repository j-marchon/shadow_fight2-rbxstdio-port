// Nekki.SF2.Core.Quests.QuestsManager$$GetLocalVariable @ RVA 0x3306E98

MEMHEPBAJJA_HIAEDCDJJDJ_o *
Nekki_SF2_Core_Quests_QuestsManager__GetLocalVariable
          (Nekki_SF2_Core_Quests_QuestsManager_o *__this,System_String_o *FDHGPAPAPDF,
          MethodInfo *method)

{
  System_Collections_Generic_List_FPPKHNNABAD__o *EDEHNHIHDDH;
  FPPKHNNABAD_o *__this_00;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar1;
  
  if ((DAT_04567762 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<FPPKHNNABAD>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    DAT_04567762 = 1;
  }
  EDEHNHIHDDH = (__this->fields).GAMJEFPADCD;
  if (EDEHNHIHDDH != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    if ((EDEHNHIHDDH->fields)._size < 1) {
      return (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
    }
    __this_00 = (FPPKHNNABAD_o *)
                DJNBJHPDKDP__KIKGKKGDCKK<object>
                          ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                           Method_DJNBJHPDKDP_KIKGKKGDCKK<FPPKHNNABAD>__);
    if (__this_00 != (FPPKHNNABAD_o *)0x0) {
                    /* try { // try from 03406f00 to 03506f27 has its CatchHandler @ 03407258 */
      pMVar1 = FPPKHNNABAD__FDBCKDLEGEH(__this_00,FDHGPAPAPDF,(MethodInfo *)0x0);
      return pMVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

