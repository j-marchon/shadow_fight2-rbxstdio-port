// Nekki.SF2.GUI.Pvp.SelectModule$$BHOPECNMJAC @ RVA 0x31781DC

void Nekki_SF2_GUI_Pvp_SelectModule__BHOPECNMJAC
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t HEHMPFLAEGE,int32_t MKACJBMOMHC,
               int32_t JJBKAMIAMNE,bool OFKBEIFPFMN,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
                    /* try { // try from 032781e0 to 033781e3 has its CatchHandler @ 0327820c */
                    /* try { // try from 032781e4 to 0337821b has its CatchHandler @ 03277e9c */
  if ((DAT_04566961 & 1) == 0) {
                    /* catch() { ... } // from try @ 032781e0 with catch @ 0327820c */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 0327821c to 0337822f has its CatchHandler @ 032782a8 */
    DAT_04566961 = 1;
  }
  if (HEHMPFLAEGE == 1) {
                    /* catch() { ... } // from try @ 0327813c with catch @ 03278238 */
    cVar1 = (__this->fields).FODJGPABKLP;
  }
  else {
    if (HEHMPFLAEGE != 0) goto LAB_03278240;
    cVar1 = (__this->fields).FPFGDOBNLCP;
                    /* catch() { ... } // from try @ 0327818c with catch @ 03278230
                       try { // try from 03278230 to 0337824f has its CatchHandler @ 03277e9c */
  }
  if (cVar1 != '\0') {
    return;
  }
LAB_03278240:
  __this_00 = (__this->fields)._selectTable;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
                    /* try { // try from 03278250 to 03378253 has its CatchHandler @ 0327827c */
                    /* try { // try from 03278254 to 0337828b has its CatchHandler @ 03277e9c */
    Nekki_SF2_GUI_Pvp_PlayersSelectTable__MoveSelection
              (__this_00,HEHMPFLAEGE,MKACJBMOMHC,JJBKAMIAMNE,(__this->fields).selectorMoveTime,
               (MethodInfo *)0x0);
    if ((!OFKBEIFPFMN) || ((__this->fields).LGJBHOIAOOG != false)) {
                    /* catch() { ... } // from try @ 03278250 with catch @ 0327827c */
      return;
    }
    (__this->fields).LGJBHOIAOOG = true;
                    /* try { // try from 0327828c to 03378293 has its CatchHandler @ 032782a8 */
    pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* try { // try from 03278294 to 0337829f has its CatchHandler @ 03277e9c */
    pSVar4 = Nekki_SF2_GUI_Pvp_SelectModule__ONFNOHDJKPM(__this,method_00);
    if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
                    /* try { // try from 032782a0 to 033782a7 has its CatchHandler @ 032782a8 */
      pPVar6 = pPVar3->klass;
      uVar2._0_1_ = (pPVar6->_2).rank;
      uVar2._1_1_ = (pPVar6->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 0327821c with catch @ 032782a8
                       catch() { ... } // from try @ 0327828c with catch @ 032782a8
                       catch() { ... } // from try @ 032782a0 with catch @ 032782a8 */
      uVar7 = (ulong)uVar2;
      if (uVar7 != 0) {
        piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar5 = pPVar6->vtable + *piVar8;
            goto LAB_032782f8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_032782f8:
                    /* WARNING: Could not recover jumptable at 0x03278318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

