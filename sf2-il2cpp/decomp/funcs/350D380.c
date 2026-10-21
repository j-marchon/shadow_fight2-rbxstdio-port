// Nekki.SF2.GUI.Dialogs.NewsDialog$$MKLEJABEFLH @ RVA 0x350D380

void Nekki_SF2_GUI_Dialogs_NewsDialog__MKLEJABEFLH
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._loadingPicture;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 0360d3b4 to 0370d48b has its CatchHandler @ 0360d3b4
                       catch() { ... } // from try @ 0360d3b4 with catch @ 0360d3b4
                       catch() { ... } // from try @ 0360d53c with catch @ 0360d3b4
                       catch() { ... } // from try @ 0360d57c with catch @ 0360d3b4
                       catch() { ... } // from try @ 0360d5f0 with catch @ 0360d3b4
                       catch() { ... } // from try @ 0360d638 with catch @ 0360d3b4
                       catch() { ... } // from try @ 0360d674 with catch @ 0360d3b4 */
    (__this->fields).IKKPHIEKOEL = CJNHFNHJHPE;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

