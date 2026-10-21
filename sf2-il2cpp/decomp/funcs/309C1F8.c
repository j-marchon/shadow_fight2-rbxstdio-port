// Nekki.SF2.GUI.Fight.EndFightContent$$Init @ RVA 0x309C1F8

void Nekki_SF2_GUI_Fight_EndFightContent__Init
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,IGPDCHBJAPD_o *PNPKEKHEMCD,
               UnityEngine_UI_VerticalLayoutGroup_o *ODNJEHJPBGA,
               UnityEngine_UI_Button_o *IHDIBJAICLO,bool DCIKAIODOGP,bool GIANLAGKFCC,
               MethodInfo *method)

{
  bool bVar1;
  IGPDCHBJAPD_JMPAGIGEFME_o *pIVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  System_Collections_Generic_List_BNKBGIIJNLF__o *pSVar4;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar5;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  IGPDCHBJAPD_o *pIVar8;
  LabelButton_o *pLVar9;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar10;
  UnityEngine_Events_UnityEvent_o *pUVar11;
  IGPDCHBJAPD_o **ppIVar12;
  
                    /* try { // try from 0319c208 to 0329c20b has its CatchHandler @ 0319c3b0 */
                    /* try { // try from 0319c20c to 0329c223 has its CatchHandler @ 0319c400 */
  if ((DAT_04566119 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<VerticalLayoutGroup>__);
                    /* try { // try from 0319c240 to 0329c257 has its CatchHandler @ 0319c3b4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_HNELGIKFOIL__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0319c260 to 0329c267 has its CatchHandler @ 0319c41c */
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent_Invoke__);
    DAT_04566119 = 1;
  }
                    /* try { // try from 0319c270 to 0329c2fb has its CatchHandler @ 0319c408 */
  (__this->fields).GOAJIJFCOJD = DCIKAIODOGP;
  (__this->fields).OODOHJNONAO = GIANLAGKFCC;
  (__this->fields).HMJLEBNKJMH = IHDIBJAICLO;
  thunk_FUN_01c20e04(&(__this->fields).HMJLEBNKJMH,IHDIBJAICLO);
  ppIVar12 = &(__this->fields).CIKGADOJJMG;
  *ppIVar12 = PNPKEKHEMCD;
  thunk_FUN_01c20e04(ppIVar12,PNPKEKHEMCD);
  (__this->fields).BGINDOKLEKD = 0;
  if ((*ppIVar12 != (IGPDCHBJAPD_o *)0x0) &&
     (pIVar2 = ((*ppIVar12)->fields).GIIFANGGEHM, pIVar2 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0)) {
    pSVar3 = IGPDCHBJAPD_JMPAGIGEFME__ACBMLHJIFMD(pIVar2,true,(MethodInfo *)0x0);
    ppSVar10 = &(__this->fields).DPOPJKJLDEE;
    *ppSVar10 = pSVar3;
    thunk_FUN_01c20e04(ppSVar10,pSVar3);
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if ((pIVar8 != (IGPDCHBJAPD_o *)0x0) &&
       (pIVar2 = (pIVar8->fields).GIIFANGGEHM, pIVar2 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0)) {
      pSVar4 = IGPDCHBJAPD_JMPAGIGEFME__LLIHIDKHAPN(pIVar2,false,(MethodInfo *)0x0);
                    /* try { // try from 0319c2fc to 0329c333 has its CatchHandler @ 0319bae4 */
      (__this->fields).IJONCLJPNDO = pSVar4;
      thunk_FUN_01c20e04();
      ppUVar5 = &(__this->fields).BLJFLADGIJC;
      *ppUVar5 = ODNJEHJPBGA;
      thunk_FUN_01c20e04(ppUVar5,ODNJEHJPBGA);
      pUVar6 = (UnityEngine_UI_VerticalLayoutGroup_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this,
                          Method_UnityEngine_Component_GetComponent<VerticalLayoutGroup>__);
      ppUVar5 = &(__this->fields).OPOHEPKDHPD;
      *ppUVar5 = pUVar6;
      thunk_FUN_01c20e04(ppUVar5);
                    /* try { // try from 0319c334 to 0329c337 has its CatchHandler @ 0319c424 */
      pLVar9 = (__this->fields)._buttonRetry;
                    /* try { // try from 0319c338 to 0329c33b has its CatchHandler @ 0319c420 */
      if (pLVar9 != (LabelButton_o *)0x0) {
                    /* try { // try from 0319c33c to 0329c343 has its CatchHandler @ 0319c3f8 */
                    /* try { // try from 0319c344 to 0329c347 has its CatchHandler @ 0319c3f0 */
                    /* try { // try from 0319c348 to 0329c34f has its CatchHandler @ 0319c3f4 */
        pUVar11 = (UnityEngine_Events_UnityEvent_o *)(pLVar9->fields).super.super.super.m_OnClick;
                    /* try { // try from 0319c350 to 0329c353 has its CatchHandler @ 0319c3f0 */
                    /* try { // try from 0319c354 to 0329c35b has its CatchHandler @ 0319c3dc */
        pUVar7 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0319c35c to 0329c363 has its CatchHandler @ 0319c3c8 */
                    /* try { // try from 0319c364 to 0329c367 has its CatchHandler @ 0319c37c */
                    /* try { // try from 0319c368 to 0329c36b has its CatchHandler @ 0319c378 */
                    /* try { // try from 0319c36c to 0329c43f has its CatchHandler @ 0319bae4 */
        UnityEngine_Events_UnityAction___ctor();
                    /* catch() { ... } // from try @ 0319bcb4 with catch @ 0319c370 */
        if (pUVar11 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* catch() { ... } // from try @ 0319bce0 with catch @ 0319c374 */
                    /* catch() { ... } // from try @ 0319c368 with catch @ 0319c378 */
                    /* catch() { ... } // from try @ 0319c364 with catch @ 0319c37c */
                    /* catch() { ... } // from try @ 0319bcb8 with catch @ 0319c380 */
          UnityEngine_Events_UnityEvent__AddListener(pUVar11,pUVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0319bcc4 with catch @ 0319c384 */
          pLVar9 = (__this->fields)._buttonShop;
                    /* catch() { ... } // from try @ 0319bc98 with catch @ 0319c388 */
          if (pLVar9 != (LabelButton_o *)0x0) {
                    /* catch() { ... } // from try @ 0319bd80 with catch @ 0319c38c */
                    /* catch() { ... } // from try @ 0319bda0 with catch @ 0319c390 */
            pUVar11 = (UnityEngine_Events_UnityEvent_o *)
                      (pLVar9->fields).super.super.super.m_OnClick;
                    /* catch() { ... } // from try @ 0319bdd8 with catch @ 0319c394 */
                    /* catch() { ... } // from try @ 0319c0f0 with catch @ 0319c398 */
            pUVar7 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* catch() { ... } // from try @ 0319c128 with catch @ 0319c39c */
                    /* catch() { ... } // from try @ 0319c0d0 with catch @ 0319c3a0 */
                    /* catch() { ... } // from try @ 0319bfb0 with catch @ 0319c3a4 */
                    /* catch() { ... } // from try @ 0319bef0 with catch @ 0319c3a8 */
                    /* catch() { ... } // from try @ 0319beb8 with catch @ 0319c3ac */
            UnityEngine_Events_UnityAction___ctor();
                    /* catch() { ... } // from try @ 0319c208 with catch @ 0319c3b0 */
            if (pUVar11 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* catch() { ... } // from try @ 0319c240 with catch @ 0319c3b4 */
                    /* catch() { ... } // from try @ 0319bfd0 with catch @ 0319c3b8 */
                    /* catch() { ... } // from try @ 0319c008 with catch @ 0319c3bc */
                    /* catch() { ... } // from try @ 0319be98 with catch @ 0319c3c0 */
              UnityEngine_Events_UnityEvent__AddListener(pUVar11,pUVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0319c1e8 with catch @ 0319c3c4 */
              pLVar9 = (__this->fields)._buttonVideoAD;
                    /* catch() { ... } // from try @ 0319c35c with catch @ 0319c3c8 */
              if (pLVar9 != (LabelButton_o *)0x0) {
                    /* catch() { ... } // from try @ 0319bd84 with catch @ 0319c3cc */
                    /* catch() { ... } // from try @ 0319c0d4 with catch @ 0319c3d0 */
                    /* catch() { ... } // from try @ 0319be08 with catch @ 0319c3d4 */
                pUVar11 = (UnityEngine_Events_UnityEvent_o *)
                          (pLVar9->fields).super.super.super.m_OnClick;
                    /* catch() { ... } // from try @ 0319c158 with catch @ 0319c3d8 */
                    /* catch() { ... } // from try @ 0319c354 with catch @ 0319c3dc */
                pUVar7 = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* catch() { ... } // from try @ 0319c0f4 with catch @ 0319c3e0 */
                    /* catch() { ... } // from try @ 0319bda4 with catch @ 0319c3e4 */
                    /* catch() { ... } // from try @ 0319bebc with catch @ 0319c3e8 */
                    /* catch() { ... } // from try @ 0319bfd4 with catch @ 0319c3ec */
                    /* catch() { ... } // from try @ 0319c344 with catch @ 0319c3f0
                       catch() { ... } // from try @ 0319c350 with catch @ 0319c3f0 */
                UnityEngine_Events_UnityAction___ctor();
                    /* catch() { ... } // from try @ 0319c348 with catch @ 0319c3f4 */
                if (pUVar11 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* catch() { ... } // from try @ 0319c33c with catch @ 0319c3f8 */
                    /* catch() { ... } // from try @ 0319c1ec with catch @ 0319c3fc */
                    /* catch() { ... } // from try @ 0319c20c with catch @ 0319c400 */
                    /* catch() { ... } // from try @ 0319c038 with catch @ 0319c404 */
                  UnityEngine_Events_UnityEvent__AddListener(pUVar11,pUVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0319c270 with catch @ 0319c408 */
                    /* catch() { ... } // from try @ 0319be9c with catch @ 0319c40c */
                  bVar1 = Nekki_SF2_GUI_Fight_EndFightContent__FEFLGCCPJEC(__this,method_00);
                    /* catch() { ... } // from try @ 0319bd54 with catch @ 0319c410 */
                  if (bVar1) {
                    /* catch() { ... } // from try @ 0319bfb4 with catch @ 0319c414 */
                    /* catch() { ... } // from try @ 0319bf20 with catch @ 0319c418 */
                    /* catch() { ... } // from try @ 0319bdf8 with catch @ 0319c41c
                       catch() { ... } // from try @ 0319bf10 with catch @ 0319c41c
                       catch() { ... } // from try @ 0319c028 with catch @ 0319c41c
                       catch() { ... } // from try @ 0319c148 with catch @ 0319c41c
                       catch() { ... } // from try @ 0319c260 with catch @ 0319c41c */
                    /* catch() { ... } // from try @ 0319c338 with catch @ 0319c420 */
                    /* catch() { ... } // from try @ 0319c334 with catch @ 0319c424 */
                    /* catch() { ... } // from try @ 0319bd38 with catch @ 0319c428 */
                    Nekki_SF2_GUI_Fight_EndFightContent__EPKNCBDODNP(__this,method_01);
                    return;
                  }
                  if (*ppSVar10 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* try { // try from 0319c440 to 0329c443 has its CatchHandler @ 0319c46c */
                    if (0 < ((*ppSVar10)->fields)._size) {
                    /* try { // try from 0319c444 to 0329c47b has its CatchHandler @ 0319bae4 */
                      Nekki_SF2_GUI_Fight_EndFightContent__JMPGNDGCPLF(__this,method_01);
                      return;
                    }
                    Nekki_SF2_GUI_Fight_EndFightContent__GPCOJMMLMLG(__this,method_01);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0319c440 with catch @ 0319c46c */
  FUN_01bab8c8();
}

