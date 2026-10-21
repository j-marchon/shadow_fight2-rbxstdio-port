// Nekki.SF2.GUI.Fight.ViewerFight$$UpdatePointsTable @ RVA 0x35BF5C4

void Nekki_SF2_GUI_Fight_ViewerFight__UpdatePointsTable
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,int32_t HLGODJGOMPL,int32_t JJIMOBDENPB,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_PointsTable_o *pNVar2;
  
  if ((DAT_04568f0c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f0c = 1;
  }
  pNVar2 = (__this->fields).HLOILANGFLF;
                    /* try { // try from 036bf60c to 037bf613 has its CatchHandler @ 036bf660 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 036bf650 to 037bf653 has its CatchHandler @ 036bf658 */
                    /* try { // try from 036bf654 to 037bf677 has its CatchHandler @ 036bf51c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bf650 with catch @ 036bf658
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bf62c with catch @ 036bf65c
                        */
    return;
  }
                    /* try { // try from 036bf62c to 037bf62f has its CatchHandler @ 036bf65c */
  pNVar2 = (__this->fields).HLOILANGFLF;
                    /* try { // try from 036bf630 to 037bf64f has its CatchHandler @ 036bf51c */
  if (pNVar2 != (Nekki_SF2_GUI_Fight_PointsTable_o *)0x0) {
    Nekki_SF2_GUI_Fight_PointsTable__set_LeftScore(pNVar2,HLGODJGOMPL,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).HLOILANGFLF;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_PointsTable_o *)0x0) {
      if ((pNVar2->fields)._GMPAEDFIIHF_k__BackingField != 0) {
        return;
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bf60c with catch @ 036bf660
                        */
      Nekki_SF2_GUI_Fight_PointsTable__set_RightScore(pNVar2,JJIMOBDENPB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036bf678 to 037bf67b has its CatchHandler @ 036bf6a4 */
  FUN_01bab8c8();
}

