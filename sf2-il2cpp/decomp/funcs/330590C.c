// Nekki.SF2.Core.Quests.QuestsManager$$PHHDBNIKFDK @ RVA 0x330590C

void Nekki_SF2_Core_Quests_QuestsManager__PHHDBNIKFDK
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03405918 to 0350591f has its CatchHandler @ 03405aec */
  if ((DAT_0456775e & 1) == 0) {
                    /* try { // try from 03405924 to 03505943 has its CatchHandler @ 03405b2c */
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Sort__);
    DAT_0456775e = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).GOAJEJNPDFA;
  if (__this_00 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* try { // try from 03405950 to 03505957 has its CatchHandler @ 03405b00 */
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<FPPKHNNABAD>_Sort__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

