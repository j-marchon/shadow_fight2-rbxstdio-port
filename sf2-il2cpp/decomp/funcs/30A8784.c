// Nekki.SF2.GUI.Fight.ScreenFight$$CreateVS @ RVA 0x30A8784

void Nekki_SF2_GUI_Fight_ScreenFight__CreateVS
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,PJKHAJKEHEL_o *OKBIKHHKOEN,
               System_Collections_Generic_List_PJKHAJKEHEL__o *DFGLEOANOFI,int32_t FJJJGOHDLBH,
               bool CGMFGFBHMHK,bool BLOEBCBBGBK,bool EOGKCNNHPFL,bool HIOHGCIKLNF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *pNVar1;
  System_Collections_Generic_List_PJKHAJKEHEL__o **ppSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)(ulong)CGMFGFBHMHK;
                    /* try { // try from 031a8790 to 032a8797 has its CatchHandler @ 031a8a70 */
  pNVar1 = (__this->fields).MPMMEGJACCD;
  if (pNVar1 != (Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *)0x0) {
    (pNVar1->fields).FAPMJJBOFEF = OKBIKHHKOEN;
    thunk_FUN_01c20e04();
    pNVar1 = (__this->fields).MPMMEGJACCD;
    if (pNVar1 != (Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *)0x0) {
      ppSVar2 = &(pNVar1->fields).LFMGOAKIOPC;
      *ppSVar2 = DFGLEOANOFI;
      thunk_FUN_01c20e04(ppSVar2,DFGLEOANOFI);
      pNVar1 = (__this->fields).MPMMEGJACCD;
      if (pNVar1 != (Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *)0x0) {
        (pNVar1->fields).OJNKIAFGCBL = FJJJGOHDLBH;
        (__this->fields).PCLDELEFHBP = HIOHGCIKLNF;
        if ((0 < FJJJGOHDLBH) && (BLOEBCBBGBK)) {
                    /* try { // try from 031a8804 to 032a8827 has its CatchHandler @ 031a8a78 */
          Nekki_SF2_GUI_Fight_ScreenFight__CreateEnemiesScreen
                    (__this,DFGLEOANOFI,FJJJGOHDLBH,CGMFGFBHMHK,method_01);
          return;
        }
        (__this->fields).Type = 1;
                    /* try { // try from 031a8828 to 032a883f has its CatchHandler @ 031a8a58 */
        Nekki_SF2_GUI_Fight_ScreenFight__IOEHKDBENCJ(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

