// Nekki.SF2.GUI.SimpleScroll$$ECJKHJHFOAF @ RVA 0x302C654

void Nekki_SF2_GUI_SimpleScroll__ECJKHJHFOAF
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  int32_t GAJONDLDKLI;
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  float fVar2;
  float fVar3;
  UnityEngine_Vector2_o MJBMLNKAPGC;
  
                    /* try { // try from 0312c6a0 to 0322c6e7 has its CatchHandler @ 0312c6a0
                       catch() { ... } // from try @ 0312c6a0 with catch @ 0312c6a0
                       catch() { ... } // from try @ 0312c6f8 with catch @ 0312c6a0
                       catch() { ... } // from try @ 0312c78c with catch @ 0312c6a0
                       catch() { ... } // from try @ 0312c80c with catch @ 0312c6a0 */
  if ((((*(char *)&(__this->fields)._visibilityChecker != '\0') &&
       (bVar1 = Nekki_SF2_GUI_SimpleScroll__CanInvokeScrolling(__this,method), bVar1)) &&
      (fVar2 = (__this->fields).KFDLOCBGNEA.fields.x, fVar3 = (__this->fields).KFDLOCBGNEA.fields.y,
      fVar2 * fVar2 + fVar3 * fVar3 < 0.1)) &&
     (MJBMLNKAPGC = Nekki_SF2_GUI_SimpleScroll__ODIEMJGFIFB(__this,method_00),
     0.5 < MJBMLNKAPGC.fields.x * MJBMLNKAPGC.fields.x + MJBMLNKAPGC.fields.y * MJBMLNKAPGC.fields.y
     )) {
    GAJONDLDKLI._0_1_ = (__this->fields)._snap;
    GAJONDLDKLI._1_1_ = (__this->fields)._looped;
    GAJONDLDKLI._2_2_ = *(undefined2 *)&(__this->fields).field_0x14a;
    Nekki_SF2_GUI_SimpleScroll__IGENILJIHFN
              (__this,MJBMLNKAPGC,*(float *)&(__this->fields).field_0x14c,GAJONDLDKLI,in_x2);
    return;
  }
  return;
}

