// LabelButton$$set_Color @ RVA 0x308AEF4

void LabelButton__set_Color
               (LabelButton_o *__this,UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  pNVar1 = (__this->fields).Label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._23_set_color.method);
    (__this->fields).EGMBJLELLPB.fields.r = CJNHFNHJHPE.fields.r;
    (__this->fields).EGMBJLELLPB.fields.g = CJNHFNHJHPE.fields.g;
    (__this->fields).EGMBJLELLPB.fields.b = CJNHFNHJHPE.fields.b;
    (__this->fields).EGMBJLELLPB.fields.a = CJNHFNHJHPE.fields.a;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

