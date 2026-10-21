// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$UpdateView @ RVA 0x3552FF0

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__UpdateView
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  JMDPBFOCHHP_HKDMLOKOJPH_o **ppJVar1;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *EDEHNHIHDDH;
  JMDPBFOCHHP_CMLEEJPGHNC_o *pJVar2;
  System_Collections_Generic_Dictionary_int__JMDPBFOCHHP_HKDMLOKOJPH__o *source_00;
  System_Collections_Generic_KeyValuePair_int__object__o SVar3;
  
  if ((DAT_04568b50 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__)
    ;
    FUN_01bab630(&System_Func<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>,_bool>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Value__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>_get_Count__
                );
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_DKIAKJIDBJE__);
    DAT_04568b50 = 1;
  }
  (__this->fields).DICNIMJBGML = HEHMPFLAEGE;
  thunk_FUN_01c20e04(&(__this->fields).DICNIMJBGML,HEHMPFLAEGE);
  ppJVar1 = &(__this->fields).LDBJGDMBCKM;
  (__this->fields).LDBJGDMBCKM = (JMDPBFOCHHP_HKDMLOKOJPH_o *)0x0;
  thunk_FUN_01c20e04(ppJVar1,0);
  if ((__this->fields).DICNIMJBGML !=
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    pJVar2 = (__this->fields).LLLCBLJMPIH;
    if (pJVar2 != (JMDPBFOCHHP_CMLEEJPGHNC_o *)0x0) {
      source_00 = (pJVar2->fields).MOJCKKMAKOE;
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(
                                    System_Func<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>,_bool>_TypeInfo
                                    );
      System_Func<KeyValuePair<int,_object>,_bool>___ctor();
      source = System_Linq_Enumerable__Where<KeyValuePair<int,_object>>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,predicate,
                          Method_System_Linq_Enumerable_Where<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                         );
      EDEHNHIHDDH = System_Linq_Enumerable__ToList<KeyValuePair<int,_object>>
                              (source,
                               Method_System_Linq_Enumerable_ToList<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                              );
      if (EDEHNHIHDDH == (System_Collections_Generic_List_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (0 < (EDEHNHIHDDH->fields)._size) {
        SVar3 = DJNBJHPDKDP__PHPELPFMOII<KeyValuePair<int,_object>>
                          ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                           Method_DJNBJHPDKDP_PHPELPFMOII<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                          );
        *ppJVar1 = (JMDPBFOCHHP_HKDMLOKOJPH_o *)SVar3.fields.value;
        thunk_FUN_01c20e04(ppJVar1);
      }
    }
    (*(__this->klass->vtable)._56_NOLAJAADKAL.methodPtr)
              (__this,(__this->klass->vtable)._56_NOLAJAADKAL.method);
                    /* WARNING: Could not recover jumptable at 0x03653154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._53_KHKLLNFCMME.methodPtr)
              (__this,(__this->klass->vtable)._53_KHKLLNFCMME.method);
    return;
  }
  return;
}

