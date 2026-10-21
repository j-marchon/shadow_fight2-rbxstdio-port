// Nekki.SF2.GUI.SFScrollRect$$SetLayoutVertical @ RVA 0x323BD9C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_SFScrollRect__SetLayoutVertical
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_Rect_o UVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Bounds_o local_58;
  
  Nekki_SF2_GUI_SFScrollRect__BOBEODDENPC(__this,method);
  pUVar2 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_00);
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar3 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    pUVar2 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_01);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0333bdf0 to 0343be1b has its CatchHandler @ 0333c5f4 */
      UVar4 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x =
           UVar3.fields.m_XMin + UVar3.fields.m_Width * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y =
           UVar3.fields.m_YMin + UVar3.fields.m_Height * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.z = 0.0;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x = UVar4.fields.m_Width * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y = UVar4.fields.m_Height * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.z = 0.0;
      Nekki_SF2_GUI_SFScrollRect__PDAJIKLPGAN(&local_58,__this,method_02);
      pUVar1 = &(__this->fields).GOOOAGHGBPJ;
      (pUVar1->fields).m_Extents.fields.y = local_58.fields.m_Extents.fields.y;
      (pUVar1->fields).m_Extents.fields.z = local_58.fields.m_Extents.fields.z;
      pUVar1 = &(__this->fields).GOOOAGHGBPJ;
      *(undefined8 *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z = local_58.fields._8_8_;
      (pUVar1->fields).m_Center.fields.x = local_58.fields.m_Center.fields.x;
      (pUVar1->fields).m_Center.fields.y = local_58.fields.m_Center.fields.y;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

