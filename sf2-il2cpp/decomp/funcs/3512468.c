// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$.ctor @ RVA 0x3512468

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog___ctor
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_LootCell__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045688ff & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LootCell>__ctor__);
                    /* try { // try from 036124a4 to 037124ab has its CatchHandler @ 0361259c */
    FUN_01bab630(&System_Collections_Generic_List<LootCell>_TypeInfo);
    DAT_045688ff = 1;
    method = extraout_x1;
  }
                    /* try { // try from 036124b4 to 037124b7 has its CatchHandler @ 036124d0 */
  __this_00 = (System_Collections_Generic_List_LootCell__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LootCell>_TypeInfo,method);
                    /* try { // try from 036124bc to 037124c7 has its CatchHandler @ 036124d8 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LootCell>__ctor__);
                    /* try { // try from 036124c8 to 037124ef has its CatchHandler @ 03612174 */
                    /* catch() { ... } // from try @ 036123f8 with catch @ 036124cc */
                    /* catch() { ... } // from try @ 036124b4 with catch @ 036124d0 */
  (__this->fields).ONENMEPPGMD = __this_00;
                    /* catch() { ... } // from try @ 036123fc with catch @ 036124d4 */
  thunk_FUN_01c20e04(&(__this->fields).ONENMEPPGMD,__this_00);
                    /* catch() { ... } // from try @ 036124bc with catch @ 036124d8 */
                    /* catch() { ... } // from try @ 036123d4 with catch @ 036124dc */
                    /* catch() { ... } // from try @ 03612410 with catch @ 036124e0 */
  Nekki_SF2_GUI_Dialogs_SimpleDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

