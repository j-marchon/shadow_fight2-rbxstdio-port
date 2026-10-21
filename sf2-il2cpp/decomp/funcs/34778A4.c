// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$NCDOMAGEGCF @ RVA 0x34778A4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__NCDOMAGEGCF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_BaseScrollItem_o *DKIDCBPNMPD;
  PBAKFOBIHEG_o *pPVar5;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar8;
  ulong uVar9;
  int32_t *piVar10;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
                    /* try { // try from 035778a4 to 036778ab has its CatchHandler @ 03577b28 */
                    /* try { // try from 035778b0 to 036778bb has its CatchHandler @ 03577b30 */
  if ((DAT_04568333 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidLeaguesCell>__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_10900);
    DAT_04568333 = 1;
  }
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 035778f4 to 0367790f has its CatchHandler @ 03577b24 */
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
    if ((!bVar3) || ((__this->fields).CCEJPHCCIMO != (System_Collections_IEnumerator_o *)0x0)) {
                    /* try { // try from 03577910 to 036779cb has its CatchHandler @ 03577498 */
      return;
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__ScrollClearData(__this,method_00);
    pUVar4 = (__this->fields).IBEANLBJNMM;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = (__this->fields).PDHMLFAMNCO;
      DKIDCBPNMPD = (Nekki_SF2_GUI_BaseScrollItem_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar4,Method_UnityEngine_GameObject_GetComponent<RaidLeaguesCell>__)
      ;
      if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__UsePoolPrefab
                  (__this_00,StringLiteral_10900,DKIDCBPNMPD,(MethodInfo *)0x0);
        pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
        pSVar6 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__NHOJCBHAMIK(__this,method_01);
        if (pPVar5 != (PBAKFOBIHEG_o *)0x0) {
          pPVar8 = pPVar5->klass;
          ppSVar1 = &(__this->fields).CCEJPHCCIMO;
          uVar2._0_1_ = (pPVar8->_2).rank;
          uVar2._1_1_ = (pPVar8->_2).minimumAlignment;
          uVar9 = (ulong)uVar2;
          if (uVar9 != 0) {
            piVar10 = &((pPVar8->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                  (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 035779cc to 036779d3 has its CatchHandler @ 03577b44 */
                pVVar7 = pPVar8->vtable + *piVar10;
                goto LAB_035779d0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,0);
LAB_035779d0:
          pSVar6 = (System_Collections_IEnumerator_o *)
                   (*pVVar7->methodPtr)(pPVar5,pSVar6,1,pVVar7->method);
                    /* try { // try from 035779e8 to 036779f3 has its CatchHandler @ 03577b48 */
          *ppSVar1 = pSVar6;
                    /* try { // try from 035779f8 to 03677a03 has its CatchHandler @ 03577b38 */
          thunk_FUN_01c20e04(ppSVar1,pSVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

