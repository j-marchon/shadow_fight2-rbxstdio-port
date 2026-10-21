// Nekki.SF2.GUI.Shop.InfoPanelContent$$PJNIDLOFIML @ RVA 0x3009354

void Nekki_SF2_GUI_Shop_InfoPanelContent__PJNIDLOFIML
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  MethodInfo *pMVar5;
  HOOAAGABMBL_o *pHVar6;
  
  if ((DAT_04565b57 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11073);
    FUN_01bab630(&StringLiteral_4617);
    FUN_01bab630(&StringLiteral_6589);
    FUN_01bab630(&StringLiteral_12834);
    DAT_04565b57 = 1;
  }
  pNVar2 = (__this->fields)._description;
  if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 031093b8 to 032093c3 has its CatchHandler @ 0310942c */
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                    /* try { // try from 031093c4 to 032093ef has its CatchHandler @ 03109160 */
    pNVar2 = (__this->fields)._descriptionDonate;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pHVar6 = (__this->fields).BBODGCMLKFP;
      pMVar5 = extraout_x1;
      if (pHVar6 == (HOOAAGABMBL_o *)0x0) {
LAB_031094b4:
        Nekki_SF2_GUI_Shop_InfoPanelContent__SetDefaultDescription(__this,pMVar5);
        return;
      }
      pSVar4 = (pHVar6->fields)._GMPAEDFIIHF_k__BackingField;
                    /* try { // try from 031093f0 to 03209413 has its CatchHandler @ 03109450 */
      if (pSVar4 != (System_String_o *)0x0) {
        bVar1 = System_String__Equals(pSVar4,StringLiteral_4617,(MethodInfo *)0x0);
        if (bVar1) {
                    /* try { // try from 03109414 to 0320941b has its CatchHandler @ 0310942c */
          Nekki_SF2_GUI_Shop_InfoPanelContent__IDAFPIICNIF(__this,method_00);
          return;
        }
                    /* try { // try from 0310941c to 03209463 has its CatchHandler @ 03109160 */
        pHVar6 = (__this->fields).BBODGCMLKFP;
                    /* catch() { ... } // from try @ 031092ac with catch @ 03109420 */
        pMVar5 = method_00;
        if (pHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_031094b4;
                    /* catch() { ... } // from try @ 03109290 with catch @ 03109424 */
        pSVar4 = (pHVar6->fields)._GMPAEDFIIHF_k__BackingField;
                    /* catch() { ... } // from try @ 03109260 with catch @ 03109428 */
        if (pSVar4 != (System_String_o *)0x0) {
                    /* catch() { ... } // from try @ 031093b8 with catch @ 0310942c
                       catch() { ... } // from try @ 03109414 with catch @ 0310942c */
                    /* catch() { ... } // from try @ 03109270 with catch @ 03109438 */
          bVar1 = System_String__Equals(pSVar4,StringLiteral_6589,(MethodInfo *)0x0);
          pMVar5 = extraout_x1_00;
          if (!bVar1) {
                    /* catch() { ... } // from try @ 031092fc with catch @ 03109444 */
            pHVar6 = (__this->fields).BBODGCMLKFP;
                    /* catch() { ... } // from try @ 031092dc with catch @ 03109448 */
                    /* catch() { ... } // from try @ 03109300 with catch @ 0310944c */
                    /* catch() { ... } // from try @ 031093f0 with catch @ 03109450 */
            if ((pHVar6 == (HOOAAGABMBL_o *)0x0) ||
               (pSVar4 = (pHVar6->fields)._DKODBGOHKGH_k__BackingField,
               pSVar4 == (System_String_o *)0x0)) goto LAB_031094c4;
                    /* try { // try from 03109464 to 03209467 has its CatchHandler @ 031094cc */
            bVar1 = System_String__Equals(pSVar4,StringLiteral_12834,(MethodInfo *)0x0);
            pMVar5 = extraout_x1_01;
            if (!bVar1) {
              pHVar6 = (__this->fields).BBODGCMLKFP;
              if (pHVar6 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 03109484 to 0320949f has its CatchHandler @ 03109160 */
                pSVar4 = (pHVar6->fields)._GMPAEDFIIHF_k__BackingField;
                if (pSVar4 == (System_String_o *)0x0) goto LAB_031094c4;
                bVar1 = System_String__Equals(pSVar4,StringLiteral_11073,(MethodInfo *)0x0);
                pMVar5 = method_01;
                    /* try { // try from 031094a0 to 032094a3 has its CatchHandler @ 031094d8 */
                if (bVar1) {
                    /* try { // try from 031094a4 to 032094c3 has its CatchHandler @ 03109160 */
                  Nekki_SF2_GUI_Shop_InfoPanelContent__CIGHKOCIDBN(__this,method_01);
                  return;
                }
              }
              goto LAB_031094b4;
            }
          }
                    /* try { // try from 03109478 to 03209483 has its CatchHandler @ 031094fc */
          Nekki_SF2_GUI_Shop_InfoPanelContent__ALIIMHNKFNO(__this,pMVar5);
          return;
        }
      }
    }
  }
LAB_031094c4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031094c4 to 032094e7 has its CatchHandler @ 031094fc */
  FUN_01bab8c8();
}

