// Nekki.SF2.GUI.SimpleScroll$$JJLHMNAMHIL @ RVA 0x302CF88

void Nekki_SF2_GUI_SimpleScroll__JJLHMNAMHIL
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  long lVar2;
  float fVar3;
  float fVar4;
  
                    /* catch() { ... } // from try @ 0312cf04 with catch @ 0312cf94
                       catch() { ... } // from try @ 0312cf84 with catch @ 0312cf94 */
                    /* try { // try from 0312cf98 to 0322cf9b has its CatchHandler @ 0312cfa4 */
                    /* try { // try from 0312cf9c to 0322cfa7 has its CatchHandler @ 0312ce30 */
  if ((DAT_04565cc8 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0312cf98 with catch @ 0312cfa4
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_04565cc8 = 1;
    method = extraout_x1;
  }
  if (*(char *)((long)&(__this->fields)._visibilityChecker + 1) == '\0') {
    return;
  }
  lVar2 = *(long *)&(__this->fields)._snapEase;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) < 2) {
      return;
    }
    fVar3 = (__this->fields).KFDLOCBGNEA.fields.x;
    fVar4 = (__this->fields).KFDLOCBGNEA.fields.y;
    if (fVar3 * fVar3 + fVar4 * fVar4 < 0.01) {
      return;
    }
    bVar1 = Nekki_SF2_GUI_SimpleScroll__IsContentBiggerThanView(__this,method);
    if (!bVar1) {
      return;
    }
    lVar2 = *(long *)&(__this->fields)._snapEase;
    if (lVar2 != 0) {
      Nekki_SF2_GUI_SimpleScroll__JKALGOKABOK(__this,*(int *)(lVar2 + 0x18) + -1,in_x2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

