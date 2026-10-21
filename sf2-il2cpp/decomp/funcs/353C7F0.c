// Nekki.SF2.GUI.DebugModules.ConsoleUI$$AINKNNKAGCI @ RVA 0x353C7F0

void Nekki_SF2_GUI_DebugModules_ConsoleUI__AINKNNKAGCI
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *original;
  UnityEngine_RectTransform_o *parent;
  Il2CppObject *pIVar1;
  
  if ((DAT_04568ac6 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<Text>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ac6 = 1;
  }
  original = (__this->fields)._textEntry;
  parent = (__this->fields)._textRoot;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)original,(UnityEngine_Transform_o *)parent,
                      Method_UnityEngine_Object_Instantiate<Text>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363c884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pIVar1->klass->vtable[0x4b].methodPtr)(pIVar1,EHNFGMGKCHO,pIVar1->klass->vtable[0x4b].method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

