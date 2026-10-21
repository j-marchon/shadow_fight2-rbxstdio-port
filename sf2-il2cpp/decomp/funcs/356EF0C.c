// Nekki.SF2.GUI.Menu.MainMenu$$NFPKGJADONL @ RVA 0x356EF0C

void Nekki_SF2_GUI_Menu_MainMenu__NFPKGJADONL
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar2;
  
                    /* try { // try from 0366ef20 to 0376ef23 has its CatchHandler @ 03673328 */
  if ((DAT_04568c4c & 1) == 0) {
                    /* try { // try from 0366ef24 to 0376ef27 has its CatchHandler @ 03672b80 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568c4c = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0366ef38 to 0376ef3f has its CatchHandler @ 03672b84 */
  if (*(char *)&(__this->fields)._money != '\0') {
                    /* try { // try from 0366ef50 to 0376ef57 has its CatchHandler @ 03672b7c */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 0366ef64 to 0376ef6b has its CatchHandler @ 03672b78 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
      method = extraout_x1_01;
    }
                    /* try { // try from 0366ef7c to 0376ef83 has its CatchHandler @ 03672b74 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366ef84 to 0376ef97 has its CatchHandler @ 03672b70 */
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 == (ACHLOMELAJE_o *)0x0) {
LAB_0366efdc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0366ef98 to 0376efa3 has its CatchHandler @ 03672b6c */
    if ((pAVar2->fields).MMOJIJHAJJL == false) {
      __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_0366efdc;
      bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                        (__this_00,0x16,(MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 0366efbc to 0376efbf has its CatchHandler @ 03673328 */
                    /* try { // try from 0366efc0 to 0376efc3 has its CatchHandler @ 03672b08 */
        EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* try { // try from 0366efd4 to 0376efdb has its CatchHandler @ 03672b24 */
  return;
}

