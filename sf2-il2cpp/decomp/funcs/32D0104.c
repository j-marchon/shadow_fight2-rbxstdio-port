// Nekki.SF2.GUI.Profile.PerksController$$UpdateCellAtIndex @ RVA 0x32D0104

void Nekki_SF2_GUI_Profile_PerksController__UpdateCellAtIndex
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,int32_t HAJDGFPLGNK,
               MethodInfo *method)

{
  byte bVar1;
  KELJDKIIHMM_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_01;
  EANNACPOJFA_o *PLKOKDEAMBE;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  System_Collections_Generic_List_EANNACPOJFA__o *pSVar3;
  
                    /* try { // try from 033d0108 to 034d010f has its CatchHandler @ 033d02ac */
  if ((DAT_04567546 & 1) == 0) {
                    /* try { // try from 033d0120 to 034d0127 has its CatchHandler @ 033d0298 */
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
                    /* try { // try from 033d0130 to 034d0137 has its CatchHandler @ 033d029c */
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
                    /* try { // try from 033d0138 to 034d0143 has its CatchHandler @ 033d0294 */
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_04567546 = 1;
  }
  pNVar2 = (__this->fields).super._TableView;
                    /* try { // try from 033d0154 to 034d015f has its CatchHandler @ 033d0284 */
  if ((pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
     (__this_00 = (pNVar2->fields)._LBHOKEBOIFN_k__BackingField, __this_00 != (KELJDKIIHMM_o *)0x0))
  {
    __this_01 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                KELJDKIIHMM__KHGEMIEPBJB(__this_00,HAJDGFPLGNK,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).GPFJGCCIHLB;
    if (pSVar3 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
                    /* try { // try from 033d0170 to 034d0177 has its CatchHandler @ 033d0288 */
                    /* try { // try from 033d0184 to 034d018b has its CatchHandler @ 033d02a0 */
      PLKOKDEAMBE = (EANNACPOJFA_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,HAJDGFPLGNK,
                               Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
      pSVar3 = (__this->fields).GPFJGCCIHLB;
                    /* try { // try from 033d0190 to 034d0197 has its CatchHandler @ 033d02a8 */
      if ((pSVar3 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) &&
         (__this_01 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0)) {
                    /* try { // try from 033d01a4 to 034d01bf has its CatchHandler @ 033d02a4 */
        bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033d01c0 to 034d025b has its CatchHandler @ 033cfdf4 */
        if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
          Nekki_SF2_GUI_Profile_PerkCell__Init
                    (__this_01,PLKOKDEAMBE,HAJDGFPLGNK == 0,
                     HAJDGFPLGNK + 1 == (pSVar3->fields)._size,(JEIEEMKCNOJ_o *)__this,95.0,
                     (MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_01);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

