// Nekki.SF2.GUI.Pvp.PhaseWeapon$$EHPMHOHOPGA @ RVA 0x33E02AC

void Nekki_SF2_GUI_Pvp_PhaseWeapon__EHPMHOHOPGA
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,Nekki_SF2_GUI_TableViewCell_o *HBHBCBJANIC,
               MethodInfo *method)

{
  int32_t index;
  byte bVar1;
  int32_t iVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar5;
  HOOAAGABMBL_o *pHVar6;
  MethodInfo *method_00;
  Nekki_SF2_GUI_TableViewCell_o *pNVar7;
  
                    /* catch() { ... } // from try @ 034e029c with catch @ 034e02c0 */
  if ((DAT_04567e94 & 1) == 0) {
                    /* try { // try from 034e02d0 to 035e02e3 has its CatchHandler @ 034e0348 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
                    /* catch() { ... } // from try @ 034e0020 with catch @ 034e02e4
                       try { // try from 034e02e4 to 035e02fb has its CatchHandler @ 034df29c */
                    /* catch() { ... } // from try @ 034dfff8 with catch @ 034e02e8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
                    /* catch() { ... } // from try @ 034dffc8 with catch @ 034e02ec */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 034e02fc to 035e02ff has its CatchHandler @ 034e0324 */
                    /* try { // try from 034e0300 to 035e032b has its CatchHandler @ 034df29c */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_WeaponPvpCell_TypeInfo);
    DAT_04567e94 = 1;
  }
  if (HBHBCBJANIC != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
                    /* catch() { ... } // from try @ 034e02fc with catch @ 034e0324 */
                    /* try { // try from 034e032c to 035e0333 has its CatchHandler @ 034e0348 */
    bVar1 = (Nekki_SF2_GUI_Pvp_WeaponPvpCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 034e0334 to 035e033f has its CatchHandler @ 034df29c */
    if (bVar1 <= (HBHBCBJANIC->klass->_2).naturalAligment) {
                    /* try { // try from 034e0340 to 035e0347 has its CatchHandler @ 034e0348 */
                    /* catch() { ... } // from try @ 034e0270 with catch @ 034e0348
                       catch() { ... } // from try @ 034e02d0 with catch @ 034e0348
                       catch() { ... } // from try @ 034e032c with catch @ 034e0348
                       catch() { ... } // from try @ 034e0340 with catch @ 034e0348 */
      pNVar7 = HBHBCBJANIC;
      if ((HBHBCBJANIC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Pvp_WeaponPvpCell_TypeInfo) {
        pNVar7 = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
      }
      goto LAB_034e0354;
    }
  }
  pNVar7 = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
LAB_034e0354:
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)HBHBCBJANIC,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar3) {
    if ((pNVar7 != (Nekki_SF2_GUI_TableViewCell_o *)0x0) &&
       (pSVar5 = (__this->fields).LGHNHMJIDIB,
       pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
      iVar4 = System_Collections_Generic_List<object>__IndexOf
                        ((System_Collections_Generic_List_object__o *)pSVar5,
                         (Il2CppObject *)pNVar7[1].fields.DidSelectEvent,
                         Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
      pSVar5 = (__this->fields).LGHNHMJIDIB;
      if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        iVar2 = (pSVar5->fields)._size + -1;
        if (iVar4 <= iVar2) {
          iVar2 = iVar4;
        }
        index = 0;
        if (-1 < iVar4) {
          index = iVar2;
        }
        (__this->fields).CCOCEGOEFNL = index;
        pHVar6 = (HOOAAGABMBL_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar5,index,
                            Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
        (__this->fields).DPPANFCEMLK = pHVar6;
        thunk_FUN_01c20e04();
        Nekki_SF2_GUI_Pvp_PhaseWeapon__FDNHGCEFCFK(__this,method_00);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

