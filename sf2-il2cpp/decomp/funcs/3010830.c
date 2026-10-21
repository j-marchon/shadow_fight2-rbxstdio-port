// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyPlayerCell$$JHEAGBBIBOJ @ RVA 0x3010830

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__JHEAGBBIBOJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  int *piVar2;
  ACHLOMELAJE_o *__this_00;
  EEOMEMBBGNA_o *pEVar3;
  CJFBGEEIPBA_o *__this_01;
  GKLPDMLELJF_o *pGVar4;
  
                    /* try { // try from 03110830 to 0321083b has its CatchHandler @ 0311066c */
                    /* try { // try from 0311083c to 03210843 has its CatchHandler @ 03110844 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03110818 with catch @ 03110844
                       catch(type#2 @ 00000000) { ... } // from try @ 0311083c with catch @ 03110844
                        */
                    /* try { // try from 03110848 to 03210897 has its CatchHandler @ 03110848
                       catch() { ... } // from try @ 03110848 with catch @ 03110848
                       catch() { ... } // from try @ 031108e0 with catch @ 03110848
                       catch() { ... } // from try @ 03110930 with catch @ 03110848
                       catch() { ... } // from try @ 03110994 with catch @ 03110848 */
  if ((DAT_04565ba6 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565ba6 = 1;
  }
  if ((IMMNELPBGIF == (Il2CppObject *)0x0) || ((__this->fields).DICNIMJBGML == (GKLPDMLELJF_o *)0x0)
     ) {
    return;
  }
                    /* try { // try from 03110898 to 0321089b has its CatchHandler @ 03110930 */
  if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
                    /* try { // try from 031108a8 to 032108b3 has its CatchHandler @ 03110938 */
  piVar2 = (int *)thunk_FUN_01bda96c();
  iVar1 = *piVar2;
  if (iVar1 - 3U < 2) {
                    /* try { // try from 031108cc to 032108cf has its CatchHandler @ 0311093c */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031108d4 to 032108df has its CatchHandler @ 03110934 */
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 031108e0 to 0321092b has its CatchHandler @ 03110848 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__EBDABMENDJP(__this_00,iVar1 != 3,(MethodInfo *)0x0);
      return;
    }
  }
  else {
                    /* try { // try from 0311092c to 0321092f has its CatchHandler @ 0311093c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03110898 with catch @ 03110930
                       try { // try from 03110930 to 03210953 has its CatchHandler @ 03110848 */
    if (iVar1 != 1) {
      return;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031108d4 with catch @ 03110934
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031108a8 with catch @ 03110938
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031108cc with catch @ 0311093c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0311092c with catch @ 0311093c
                        */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar3 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    /* try { // try from 03110954 to 03210957 has its CatchHandler @ 03110964 */
                    /* catch() { ... } // from try @ 03110954 with catch @ 03110964 */
    if (((pEVar3 != (EEOMEMBBGNA_o *)0x0) &&
        (pGVar4 = (__this->fields).DICNIMJBGML, pGVar4 != (GKLPDMLELJF_o *)0x0)) &&
       (__this_01 = (pEVar3->fields).GMNJEBCECDA, __this_01 != (CJFBGEEIPBA_o *)0x0)) {
                    /* try { // try from 0311097c to 03210993 has its CatchHandler @ 031109a8 */
      CJFBGEEIPBA__HKPDBKGKBOO
                (__this_01,(pGVar4->fields).ANAJGHJEEOC,(System_Action_NLFLMJPNOLF__o *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

