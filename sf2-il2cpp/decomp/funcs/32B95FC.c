// UIFigures.UIArcBorder$$set_SetAllColor @ RVA 0x32B95FC

void UIFigures_UIArcBorder__set_SetAllColor
               (UIFigures_UIArcBorder_o *__this,UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  (*(__this->klass->vtable)._23_set_color.methodPtr)
            (__this,(__this->klass->vtable)._23_set_color.method);
  (__this->fields).super.INCPCFENLPJ.fields.y = CJNHFNHJHPE.fields.r;
  *(float *)&(__this->fields)._UseEndColor = CJNHFNHJHPE.fields.g;
  (__this->fields)._EndColor.fields.r = CJNHFNHJHPE.fields.b;
  (__this->fields)._EndColor.fields.g = CJNHFNHJHPE.fields.a;
  return;
}

