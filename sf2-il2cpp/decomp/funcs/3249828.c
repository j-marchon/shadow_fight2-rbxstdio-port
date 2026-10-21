// Nekki.SF2.GUI.Scripts.EditBox$$set_FontColor @ RVA 0x3249828

void Nekki_SF2_GUI_Scripts_EditBox__set_FontColor
               (Nekki_SF2_GUI_Scripts_EditBox_o *__this,UnityEngine_Color_o CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  
  pUVar1 = (__this->fields).super.m_TextComponent;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03349844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CJNHFNHJHPE.fields.r,CJNHFNHJHPE.fields.g,CJNHFNHJHPE.fields.b,CJNHFNHJHPE.fields.a);
}

