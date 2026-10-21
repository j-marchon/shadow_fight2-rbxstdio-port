// Nekki.SF2.GUI.Tutorial.Controls.TutorialTouch$$Update @ RVA 0x3293F1C

void Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch__Update
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar3;
  MethodInfo *in_x2;
  Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_c *pNVar4;
  
                    /* try { // try from 03393f20 to 03493f2f has its CatchHandler @ 0339400c */
  pNVar3 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (pNVar3 == (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03393f40 to 03493f43 has its CatchHandler @ 03394000 */
  if (((pNVar3->fields).DBNNMLAONOF == false) || ((__this->fields).super.IsActive == false)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393ec0 with catch @ 0339401c
                        */
    return;
  }
                    /* try { // try from 03393f44 to 03493f53 has its CatchHandler @ 03394008 */
  bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  if ((bVar1) || (bVar1 = UnityEngine_Input__GetMouseButtonUp(0,(MethodInfo *)0x0), bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
  }
                    /* try { // try from 03393f94 to 03493faf has its CatchHandler @ 03394004 */
  if (((__this->fields).super.field_0x11 != '\0') &&
     ((iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0), bVar1 == false || (1 < iVar2)))
     ) {
    pNVar4 = __this->klass;
    (__this->fields).super.field_0x11 = 0;
                    /* WARNING: Could not recover jumptable at 0x03393fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 03393fec to 03493fef has its CatchHandler @ 03394014 */
    (*(pNVar4->vtable)._4_CGMNBHOHEPO.methodPtr)(__this,(pNVar4->vtable)._4_CGMNBHOHEPO.method);
    return;
  }
  bVar1 = HPHIGFJMKAC__KCLHDFJFHAE(0,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 0;
  }
  else {
                    /* try { // try from 03393fb8 to 03493fbf has its CatchHandler @ 03393ffc */
    if ((__this->fields).super.field_0x11 == '\0') {
      return;
    }
                    /* try { // try from 03393fc0 to 03493feb has its CatchHandler @ 03393db0 */
    bVar1 = HPHIGFJMKAC__OCAKHFGDEBH(0,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 1;
    }
    else {
                    /* try { // try from 03393ff0 to 03493ff7 has its CatchHandler @ 03394010 */
      if ((__this->fields).super.field_0x11 == '\0') {
        return;
      }
                    /* try { // try from 03393ff8 to 03494033 has its CatchHandler @ 03393db0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393fb8 with catch @ 03393ffc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393f40 with catch @ 03394000
                        */
      bVar1 = HPHIGFJMKAC__JCHBNNNJOCL(0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393f94 with catch @ 03394004
                        */
      if (!bVar1) {
        return;
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393f44 with catch @ 03394008
                        */
      iVar2 = 2;
    }
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393ff0 with catch @ 03394010
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393fec with catch @ 03394014
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393ed4 with catch @ 03394018
                        */
  Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch__IACJCFBKLNL(__this,iVar2,in_x2);
  return;
}

