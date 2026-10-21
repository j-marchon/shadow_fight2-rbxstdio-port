// Nekki.SF2.GUI.Dialogs.Raids.RaidTopPlayerCell$$FEAKOMACIGA @ RVA 0x31D9E2C

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell__FEAKOMACIGA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_04566d0e & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d9e00 with catch @ 032d9e4c
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d9de8 with catch @ 032d9e50
                        */
    DAT_04566d0e = 1;
  }
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__IsFake
                    ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 032d9e68 to 033d9e6b has its CatchHandler @ 032d9e8c */
                    /* try { // try from 032d9e6c to 033d9e93 has its CatchHandler @ 032d9d24 */
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__FEAKOMACIGA
              ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).super._playerPosProgress;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 032d9e68 with catch @ 032d9e8c */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 032d9e94 to 033d9e9b has its CatchHandler @ 032d9eb0 */
                    /* try { // try from 032d9e9c to 033d9ea7 has its CatchHandler @ 032d9d24 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields).super._playerPosProgress;
                    /* try { // try from 032d9ea8 to 033d9eaf has its CatchHandler @ 032d9eb0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032d9e94 with catch @ 032d9eb0
                       catch(type#2 @ 00000000) { ... } // from try @ 032d9ea8 with catch @ 032d9eb0
                        */
      if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

