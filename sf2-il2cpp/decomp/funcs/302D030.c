// Nekki.SF2.GUI.SimpleScroll$$IsContentBiggerThanView @ RVA 0x302D030

bool Nekki_SF2_GUI_SimpleScroll__IsContentBiggerThanView
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  short sVar1;
  UnityEngine_RectTransform_o *__this_00;
  System_IndexOutOfRangeException_o *__this_01;
  System_String_o *message;
  undefined8 uVar2;
  int16_t *piVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  
  sVar1 = (short)(__this->fields).POPINJOHFLF;
  if (sVar1 == 1) {
    piVar3 = (int16_t *)&(__this->fields).field_0x1a4;
  }
  else {
    if (sVar1 != 0) goto LAB_0312d098;
    piVar3 = &(__this->fields).GCNFFAAPOKE;
  }
  __this_00 = (__this->fields).super.m_Viewport;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  fVar5 = *(float *)piVar3;
  UVar6 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
  sVar1 = (short)(__this->fields).POPINJOHFLF;
  fVar4 = UVar6.fields.m_Width;
  if ((sVar1 == 0) || (fVar4 = UVar6.fields.m_Height, sVar1 == 1)) {
    return fVar4 <= fVar5;
  }
LAB_0312d098:
  thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
  __this_01 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
  message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706);
  System_IndexOutOfRangeException___ctor(__this_01,message,(MethodInfo *)0x0);
  uVar2 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector2_get_Item__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_01,uVar2);
}

