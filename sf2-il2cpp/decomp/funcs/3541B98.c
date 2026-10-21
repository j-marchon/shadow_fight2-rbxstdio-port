// Nekki.SF2.GUI.DebugModules.BuildInfoUI$$Update @ RVA 0x3541B98

void Nekki_SF2_GUI_DebugModules_BuildInfoUI__Update
               (Nekki_SF2_GUI_DebugModules_BuildInfoUI_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *str1;
  System_String_o *pSVar2;
  
  pUVar1 = (__this->fields)._InfoText;
  pSVar2 = (__this->fields).DOPCLAKBBAB;
  str1 = Nekki_SF2_GUI_DebugModules_BuildInfoUI__JOFNCJLMDFH(__this,method);
  pSVar2 = System_String__Concat(pSVar2,str1,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03641bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,pSVar2,(pUVar1->klass->vtable)._75_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

