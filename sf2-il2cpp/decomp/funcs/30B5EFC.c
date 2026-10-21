// Nekki.SF2.GUI.TextPic$$MCLPFBNCJIB @ RVA 0x30B5EFC

bool Nekki_SF2_GUI_TextPic__MCLPFBNCJIB(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  System_Action_o *x_00;
  
                    /* try { // try from 031b5f04 to 032b5f37 has its CatchHandler @ 031b5f38 */
  if ((DAT_045661fe & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661fe = 1;
  }
  bVar1 = UnityEngine_UI_Text__get_resizeTextForBestFit
                    ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b5e58 with catch @ 031b5f38
                       catch() { ... } // from try @ 031b5f04 with catch @ 031b5f38 */
                    /* try { // try from 031b5f3c to 032b61c7 has its CatchHandler @ 031b5f3c
                       catch() { ... } // from try @ 031b5f3c with catch @ 031b5f3c
                       catch() { ... } // from try @ 031b6300 with catch @ 031b5f3c
                       catch() { ... } // from try @ 031b63b0 with catch @ 031b5f3c
                       catch() { ... } // from try @ 031b6410 with catch @ 031b5f3c
                       catch() { ... } // from try @ 031b643c with catch @ 031b5f3c
                       catch() { ... } // from try @ 031b6548 with catch @ 031b5f3c
                       catch() { ... } // from try @ 031b6560 with catch @ 031b5f3c
                       catch() { ... } // from try @ 031b6618 with catch @ 031b5f3c */
  if ((bVar1) && (*(char *)((long)&(__this->fields).GlyphPrefabs + 1) == '\0')) {
    if (*(char *)&(__this->fields).GlyphPrefabs == '\0') {
      x_00 = (__this->fields).MPHECBPOAIC;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
      ;
      if (!bVar1) {
        x = (UnityEngine_Object_o *)(__this->fields).FitImageLineHeightParam;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        return bVar1;
      }
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

