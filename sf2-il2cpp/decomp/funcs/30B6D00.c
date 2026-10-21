// Nekki.SF2.GUI.TextPic$$POIOFMEMHBP @ RVA 0x30B6D00

void Nekki_SF2_GUI_TextPic__POIOFMEMHBP(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *in_x2;
  
                    /* try { // try from 031b6d00 to 032b6d27 has its CatchHandler @ 031b7094 */
  if ((DAT_04566200 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12903);
    FUN_01bab630(&StringLiteral_12902);
    DAT_04566200 = 1;
  }
  bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled
                    ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    JLNPKGGFFDD = (System_String_o *)
                  (*(__this->klass->vtable)._74_get_text.methodPtr)
                            (__this,(__this->klass->vtable)._74_get_text.method);
                    /* try { // try from 031b6d5c to 032b6d87 has its CatchHandler @ 031b7090 */
    Nekki_SF2_GUI_TextPic__ICFBFBMGPGC(__this,JLNPKGGFFDD,in_x2);
    (*(__this->klass->vtable)._27_SetLayoutDirty.methodPtr)
              (__this,(__this->klass->vtable)._27_SetLayoutDirty.method);
                    /* try { // try from 031b6d90 to 032b6d9f has its CatchHandler @ 031b708c */
                    /* WARNING: Could not recover jumptable at 0x031b6d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._28_SetVerticesDirty.methodPtr)
              (__this,(__this->klass->vtable)._28_SetVerticesDirty.method);
    return;
  }
  return;
}

