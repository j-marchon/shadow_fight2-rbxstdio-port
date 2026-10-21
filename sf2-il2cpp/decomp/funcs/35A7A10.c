// Nekki.SF2.GUI.TextDebugger$$GIENGNEGHPJ @ RVA 0x35A7A10

void Nekki_SF2_GUI_TextDebugger__GIENGNEGHPJ
               (Nekki_SF2_GUI_TextDebugger_o *__this,Nekki_SF2_GUI_TextPic_o *FJIIJLKIKLE,
               MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  bool_conflict *pbVar1;
  
                    /* try { // try from 036a7a18 to 037a7adb has its CatchHandler @ 036a7a18
                       catch() { ... } // from try @ 036a7a18 with catch @ 036a7a18
                       catch() { ... } // from try @ 036a7b94 with catch @ 036a7a18
                       catch() { ... } // from try @ 036a7bd0 with catch @ 036a7a18
                       catch() { ... } // from try @ 036a7bdc with catch @ 036a7a18
                       catch() { ... } // from try @ 036a7c34 with catch @ 036a7a18
                       catch() { ... } // from try @ 036a7c7c with catch @ 036a7a18 */
  if ((DAT_04568e27 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Material_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextDebugger_JELBJIIOFDK__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    FUN_01bab630(&StringLiteral_14098);
    DAT_04568e27 = 1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  method_00 = extraout_x1;
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  Nekki_SF2_GUI_TextDebugger__DKHEFKJGCOB(CJNHFNHJHPE,method_00);
                    /* try { // try from 036a7adc to 037a7ae3 has its CatchHandler @ 036a7c18 */
  shader = UnityEngine_Shader__Find(StringLiteral_14098,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Material_o *)thunk_FUN_01bda818(UnityEngine_Material_TypeInfo);
                    /* try { // try from 036a7afc to 037a7b03 has its CatchHandler @ 036a7c0c */
  UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
                    /* try { // try from 036a7b08 to 037a7b0f has its CatchHandler @ 036a7c10 */
                    /* try { // try from 036a7b10 to 037a7b1b has its CatchHandler @ 036a7c14 */
  (*(__this->klass->vtable)._33_set_material.methodPtr)
            (__this,__this_00,(__this->klass->vtable)._33_set_material.method);
                    /* try { // try from 036a7b38 to 037a7b43 has its CatchHandler @ 036a7bf4 */
  (*(__this->klass->vtable)._23_set_color.methodPtr)
            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,__this,
             (__this->klass->vtable)._23_set_color.method);
                    /* try { // try from 036a7b48 to 037a7b4f has its CatchHandler @ 036a7bf0 */
                    /* try { // try from 036a7b50 to 037a7b5b has its CatchHandler @ 036a7bec */
  (*(__this->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this,0,(__this->klass->vtable)._25_set_raycastTarget.method);
  pbVar1 = &(__this->fields).MLLLAEJFHLL;
  *(Nekki_SF2_GUI_TextPic_o **)pbVar1 = FJIIJLKIKLE;
                    /* try { // try from 036a7b6c to 037a7b73 has its CatchHandler @ 036a7bdc */
  thunk_FUN_01c20e04(pbVar1,FJIIJLKIKLE);
  return;
}

