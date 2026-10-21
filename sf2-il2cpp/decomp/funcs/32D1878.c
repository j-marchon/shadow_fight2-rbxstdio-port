// Nekki.SF2.GUI.Profile.PerksController$$ScrollToItem @ RVA 0x32D1878

bool Nekki_SF2_GUI_Profile_PerksController__ScrollToItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,System_String_o *AFKICLAFDKC,
               float GGMALJLKHHB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t JDEFJPHCNMM;
  int32_t iVar3;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  KELJDKIIHMM_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_01;
  
                    /* catch() { ... } // from try @ 033d181c with catch @ 033d1878 */
                    /* catch() { ... } // from try @ 033d1748 with catch @ 033d187c */
                    /* catch() { ... } // from try @ 033d1720 with catch @ 033d1880 */
                    /* catch() { ... } // from try @ 033d166c with catch @ 033d1884 */
                    /* catch() { ... } // from try @ 033d167c with catch @ 033d1888 */
                    /* catch() { ... } // from try @ 033d1818 with catch @ 033d188c */
                    /* catch() { ... } // from try @ 033d1814 with catch @ 033d1890 */
                    /* catch() { ... } // from try @ 033d1694 with catch @ 033d1894 */
                    /* catch() { ... } // from try @ 033d1684 with catch @ 033d1898 */
  if ((DAT_04567557 & 1) == 0) {
                    /* catch() { ... } // from try @ 033d1600 with catch @ 033d189c */
                    /* catch() { ... } // from try @ 033d15a4 with catch @ 033d18a0 */
                    /* catch() { ... } // from try @ 033d180c with catch @ 033d18a4 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_04567557 = 1;
  }
                    /* try { // try from 033d18bc to 034d18bf has its CatchHandler @ 033d18cc */
  JDEFJPHCNMM = Nekki_SF2_GUI_Profile_PerksController__HNJLAMEEFAD(__this,AFKICLAFDKC,method);
  if (JDEFJPHCNMM < 0) {
    return false;
  }
                    /* catch() { ... } // from try @ 033d18bc with catch @ 033d18cc */
  pNVar4 = (__this->fields).super._TableView;
                    /* try { // try from 033d18d4 to 034d193b has its CatchHandler @ 033d1950 */
  if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar4,(MethodInfo *)0x0);
    if (iVar3 <= JDEFJPHCNMM) {
      return false;
    }
    pNVar4 = (__this->fields).super._TableView;
    if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ScrollToCell(pNVar4,JDEFJPHCNMM,GGMALJLKHHB,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).super._TableView;
      if ((pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
         (__this_00 = (pNVar4->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 != (KELJDKIIHMM_o *)0x0)) {
        __this_01 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                    KELJDKIIHMM__KHGEMIEPBJB(__this_00,JDEFJPHCNMM,(MethodInfo *)0x0);
        if (__this_01 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
          bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033d193c to 034d1947 has its CatchHandler @ 033d1474 */
                    /* try { // try from 033d1948 to 034d194f has its CatchHandler @ 033d1950 */
                    /* catch() { ... } // from try @ 033d18d4 with catch @ 033d1950
                       catch() { ... } // from try @ 033d1948 with catch @ 033d1950 */
                    /* try { // try from 033d1954 to 034d1a83 has its CatchHandler @ 033d1954
                       catch() { ... } // from try @ 033d1954 with catch @ 033d1954
                       catch() { ... } // from try @ 033d1b90 with catch @ 033d1954
                       catch() { ... } // from try @ 033d1bd0 with catch @ 033d1954
                       catch() { ... } // from try @ 033d1c18 with catch @ 033d1954
                       catch() { ... } // from try @ 033d1c58 with catch @ 033d1954 */
          if (((__this_01->klass->_2).naturalAligment < bVar1) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(__this_01);
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if (__this_01 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_033d19b4;
          Nekki_SF2_GUI_Profile_PerkCell__ChoosePerkByName(__this_01,AFKICLAFDKC,(MethodInfo *)0x0);
        }
        return true;
      }
    }
  }
LAB_033d19b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

