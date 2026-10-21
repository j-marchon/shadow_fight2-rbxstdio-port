// Nekki.SF2.GUI.SimpleScroll$$set_SnapEase @ RVA 0x302BDE4

void Nekki_SF2_GUI_SimpleScroll__set_SnapEase
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._snap = (bool_conflict)(char)CJNHFNHJHPE;
  (__this->fields)._looped = (bool_conflict)(char)((uint)CJNHFNHJHPE >> 8);
  *(short *)&(__this->fields).field_0x14a = (short)((uint)CJNHFNHJHPE >> 0x10);
  return;
}

