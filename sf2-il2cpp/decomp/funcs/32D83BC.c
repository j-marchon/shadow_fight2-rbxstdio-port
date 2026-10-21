// Nekki.SF2.GUI.Pvp.PhaseBox$$ChangeCharacter @ RVA 0x32D83BC

void Nekki_SF2_GUI_Pvp_PhaseBox__ChangeCharacter
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,BNAIBAODKAK_o *CJDCMKEBBNK,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  Nekki_SF2_GUI_Pvp_PhaseItem_o *pNVar4;
  Nekki_SF2_GUI_Pvp_PhaseItem_array *pNVar5;
  uint uVar6;
  UnityEngine_GameObject_o *pUVar7;
  
  if (CJDCMKEBBNK != (BNAIBAODKAK_o *)0x0) {
    pUVar7 = (__this->fields)._phaseContainer;
                    /* try { // try from 033d83dc to 034d83e3 has its CatchHandler @ 033d842c */
    bVar2 = BNAIBAODKAK__AAAMBLLDPHJ(CJDCMKEBBNK,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar7,bVar2,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._lockedDescription;
                    /* try { // try from 033d83f8 to 034d83fb has its CatchHandler @ 033d8428 */
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 033d83fc to 034d841b has its CatchHandler @ 033d834c */
        pUVar7 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
        bVar2 = BNAIBAODKAK__AAAMBLLDPHJ(CJDCMKEBBNK,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 033d841c to 034d841f has its CatchHandler @ 033d8424 */
                    /* try { // try from 033d8420 to 034d8443 has its CatchHandler @ 033d834c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d841c with catch @ 033d8424
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d83f8 with catch @ 033d8428
                        */
          UnityEngine_GameObject__SetActive(pUVar7,(bool)(~bVar2 & 1),(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d83dc with catch @ 033d842c
                        */
          pNVar3 = (__this->fields)._lockedDescription;
          if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            Nekki_SF2_GUI_LabelAlias__set_Alias
                      (pNVar3,(CJDCMKEBBNK->fields).FNFCJDKHLKK,(MethodInfo *)0x0);
            pNVar5 = (__this->fields)._phases;
                    /* try { // try from 033d8444 to 034d8447 has its CatchHandler @ 033d8470 */
            if (pNVar5 != (Nekki_SF2_GUI_Pvp_PhaseItem_array *)0x0) {
                    /* try { // try from 033d8448 to 034d847f has its CatchHandler @ 033d834c */
              uVar1 = (uint)pNVar5->max_length;
              if (0 < (int)uVar1) {
                uVar6 = 0;
                do {
                  if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033d8480 with catch @ 033d849c
                       catch(type#2 @ 00000000) { ... } // from try @ 033d8494 with catch @ 033d849c
                        */
                    FUN_01bab8d0();
                  }
                  pNVar4 = pNVar5->m_Items[(int)uVar6];
                  if (pNVar4 == (Nekki_SF2_GUI_Pvp_PhaseItem_o *)0x0) goto LAB_033d8498;
                    /* catch() { ... } // from try @ 033d8444 with catch @ 033d8470 */
                  (*(pNVar4->klass->vtable)._8_ChangeCharacter.methodPtr)
                            (pNVar4,CJDCMKEBBNK,(pNVar4->klass->vtable)._8_ChangeCharacter.method);
                  uVar1 = (uint)pNVar5->max_length;
                    /* try { // try from 033d8480 to 034d8487 has its CatchHandler @ 033d849c */
                  uVar6 = uVar6 + 1;
                    /* try { // try from 033d8488 to 034d8493 has its CatchHandler @ 033d834c */
                } while ((int)uVar6 < (int)uVar1);
              }
                    /* try { // try from 033d8494 to 034d849b has its CatchHandler @ 033d849c */
              return;
            }
          }
        }
      }
    }
  }
LAB_033d8498:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

