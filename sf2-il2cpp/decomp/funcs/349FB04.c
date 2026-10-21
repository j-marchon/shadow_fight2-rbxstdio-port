// Nekki.SF2.GUI.HintBoxAutoKilled$$Update @ RVA 0x349FB04

void Nekki_SF2_GUI_HintBoxAutoKilled__Update
               (Nekki_SF2_GUI_HintBoxAutoKilled_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  float fVar2;
  float fVar3;
  
  Nekki_SF2_GUI_HintBox__Update((Nekki_SF2_GUI_HintBox_o *)__this,(MethodInfo *)0x0);
  bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
  if ((bVar1) || (fVar3 = *(float *)&(__this->fields).super.field_0x4c, fVar3 <= 0.0)) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    fVar3 = *(float *)&(__this->fields).super.field_0x4c;
  }
  fVar2 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  *(float *)&(__this->fields).super.field_0x4c = fVar3 - fVar2;
  return;
}

