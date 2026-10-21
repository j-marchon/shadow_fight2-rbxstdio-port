// Nekki.SF2.GUI.Common.SceneMenuScroll$$BEMFAFLLOLP @ RVA 0x30BBF94

void Nekki_SF2_GUI_Common_SceneMenuScroll__BEMFAFLLOLP
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o *pNVar4;
  Nekki_SF2_GUI_Common_SceneSelector_o *pNVar5;
  Nekki_SF2_GUI_Common_SectionButton_o *__this_00;
  MethodInfo *method_00;
  int iVar6;
  System_Collections_Generic_List_SceneSelector__o *pSVar7;
  int iVar8;
  System_Collections_Generic_List_SceneSelector__o *__this_01;
  
                    /* try { // try from 031bbf9c to 032bbf9f has its CatchHandler @ 031bc150 */
                    /* try { // try from 031bbfa0 to 032bbfaf has its CatchHandler @ 031bc178 */
  pNVar4 = __this;
  if ((DAT_04566246 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_IndexOf__,NAIJBCMHBFK,
                 OPHMGAKOJLP);
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_get_Count__);
                    /* try { // try from 031bbfc8 to 032bbfcb has its CatchHandler @ 031bc18c */
                    /* try { // try from 031bbfcc to 032bbfcf has its CatchHandler @ 031bc174 */
    pNVar4 = (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_get_Item__);
    DAT_04566246 = 1;
  }
                    /* try { // try from 031bbfdc to 032bbfe3 has its CatchHandler @ 031bc16c */
  if ((__this->fields).IAAABJBDEMK != 1) {
    return;
  }
  if ((__this->fields).GLDOIEEOPCB != 0) {
    return;
  }
  if (0xd < (uint)AAJGEHHPMGH) {
    return;
  }
  uVar3 = 1 << (ulong)(AAJGEHHPMGH & 0x1f);
  if ((uVar3 & 0x1110) == 0) {
                    /* try { // try from 031bc018 to 032bc01b has its CatchHandler @ 031bc15c */
    if ((uVar3 & 0x2220) == 0) {
                    /* try { // try from 031bc0e0 to 032bc0fb has its CatchHandler @ 031bc140 */
      if (AAJGEHHPMGH != 0) {
                    /* try { // try from 031bbff4 to 032bbfff has its CatchHandler @ 031bc164 */
        return;
      }
      pNVar5 = (__this->fields).NFFFEDGMBIL;
      if (pNVar5 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) {
        bVar2 = AKJJAPEHKCG__MNKFDLHJPAA
                          ((UnityEngine_UI_Selectable_o *)(pNVar5->fields)._Button,(MethodInfo *)0x0
                          );
        if (bVar2) {
          return;
        }
        pNVar5 = (__this->fields).NFFFEDGMBIL;
                    /* try { // try from 031bc100 to 032bc137 has its CatchHandler @ 031bc138 */
        pNVar4 = (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0;
        if (pNVar5 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) {
          __this_00 = (pNVar5->fields)._Button;
          pNVar4 = (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0;
          if (__this_00 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
            SFButton__SetStatePressed((SFButton_o *)__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
                    /* try { // try from 031bc02c to 032bc02f has its CatchHandler @ 031bc180 */
      uVar3 = EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
      pNVar4 = (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)(ulong)uVar3;
                    /* try { // try from 031bc030 to 032bc047 has its CatchHandler @ 031bc18c */
      __this_01 = (__this->fields).FGIFPAPGJJN;
      if (__this_01 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
                    /* try { // try from 031bc048 to 032bc04f has its CatchHandler @ 031bc14c */
        uVar3 = System_Collections_Generic_List<object>__IndexOf
                          ((System_Collections_Generic_List_object__o *)__this_01,
                           (Il2CppObject *)(__this->fields).NFFFEDGMBIL,
                           Method_System_Collections_Generic_List<SceneSelector>_IndexOf__);
        pNVar4 = (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)(ulong)uVar3;
        pSVar7 = (__this->fields).FGIFPAPGJJN;
        if (pSVar7 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
                    /* try { // try from 031bc058 to 032bc073 has its CatchHandler @ 031bc148 */
          iVar6 = (pSVar7->fields)._size;
          iVar8 = uVar3 + iVar6 + -1;
          goto LAB_031bc0bc;
        }
      }
    }
  }
  else {
                    /* try { // try from 031bc078 to 032bc0af has its CatchHandler @ 031bc13c */
    uVar3 = EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)(ulong)uVar3;
    __this_01 = (__this->fields).FGIFPAPGJJN;
    if (__this_01 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
      uVar3 = System_Collections_Generic_List<object>__IndexOf
                        ((System_Collections_Generic_List_object__o *)__this_01,
                         (Il2CppObject *)(__this->fields).NFFFEDGMBIL,
                         Method_System_Collections_Generic_List<SceneSelector>_IndexOf__);
      pNVar4 = (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)(ulong)uVar3;
      pSVar7 = (__this->fields).FGIFPAPGJJN;
      if (pSVar7 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
        iVar6 = (pSVar7->fields)._size;
                    /* try { // try from 031bc0b0 to 032bc0b3 has its CatchHandler @ 031bc170 */
                    /* try { // try from 031bc0b4 to 032bc0b7 has its CatchHandler @ 031bc168 */
                    /* try { // try from 031bc0b8 to 032bc0cf has its CatchHandler @ 031bc18c */
        iVar8 = uVar3 + 1;
LAB_031bc0bc:
        iVar1 = 0;
        if (iVar6 != 0) {
          iVar1 = iVar8 / iVar6;
        }
        method_00 = Method_System_Collections_Generic_List<SceneSelector>_get_Item__;
        pNVar5 = (Nekki_SF2_GUI_Common_SceneSelector_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,
                            iVar8 - iVar1 * iVar6,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<SceneSelector>_get_Item__);
                    /* try { // try from 031bc0d0 to 032bc0d7 has its CatchHandler @ 031bc144 */
        Nekki_SF2_GUI_Common_SceneMenuScroll__SelectScene(__this,pNVar5,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pNVar4);
}

