// MPFCDEPCALP$$MAHEOMJKNLK @ RVA 0x30360D8

void MPFCDEPCALP__MAHEOMJKNLK(MPFCDEPCALP_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *pNVar3;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_Transform_o *INPDGILCEBL;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Map_RaidToggleButton_o **ppNVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_04565d42 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_MPFCDEPCALP_KPPLCBBJIOA__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&StringLiteral_10659);
    DAT_04565d42 = 1;
    method = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  auVar5._8_8_ = method;
  auVar5._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar5 = FUN_01b81620(lVar2,method);
  }
  lVar2 = *(long *)(*(long *)(auVar5._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar5._8_8_);
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0313618c to 03236193 has its CatchHandler @ 031366c4 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031361c8 to 032361cb has its CatchHandler @ 03136620 */
    UnityEngine_Debug__LogError(StringLiteral_10659,(MethodInfo *)0x0);
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 031361e8 to 032361eb has its CatchHandler @ 03136608 */
                    /* try { // try from 031361ec to 032361f7 has its CatchHandler @ 03136630 */
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
                    /* try { // try from 03136200 to 03236223 has its CatchHandler @ 031366cc */
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
      (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
    pNVar3 = Nekki_SF2_GUI_Map_MapScene__GetRaidToggleBtn
                       ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                        (MethodInfo *)0x0);
    ppNVar4 = &(__this->fields).OGOAKBNLIDJ;
    *ppNVar4 = pNVar3;
                    /* try { // try from 03136234 to 0323623b has its CatchHandler @ 031366d4 */
    thunk_FUN_01c20e04(ppNVar4,pNVar3);
    if (*ppNVar4 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
                    /* try { // try from 03136248 to 0323624f has its CatchHandler @ 031366bc */
      AKJJAPEHKCG__GOCEMJOCNEE
                ((UnityEngine_UI_Selectable_o *)((*ppNVar4)->fields)._goToRaidBtn,(MethodInfo *)0x0)
      ;
      __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 03136268 to 0323628b has its CatchHandler @ 031366e4 */
      if (((*ppNVar4 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) &&
          (__this_01 = ((*ppNVar4)->fields)._goToRaidBtn,
          __this_01 != (UnityEngine_UI_Button_o *)0x0)) &&
         (INPDGILCEBL = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0)) {
        Nekki_SF2_GUI_Tutorial_ArrowCanvas__ShowArrow
                  (__this_00,INPDGILCEBL,(UnityEngine_Vector2_o)(__this->fields).JDIMEBGEJFE.fields,
                   (__this->fields).GBJHFDKDAIB,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).OGOAKBNLIDJ;
                    /* try { // try from 03136298 to 032362af has its CatchHandler @ 031366dc */
        CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar3 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
                    /* try { // try from 031362c8 to 032362cb has its CatchHandler @ 03136610 */
                    /* try { // try from 031362cc to 03236313 has its CatchHandler @ 031366e0 */
          Nekki_SF2_GUI_Map_RaidToggleButton__add_OnClick(pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

