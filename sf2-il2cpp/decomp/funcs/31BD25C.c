// Nekki.SF2.GUI.TableViewCell$$GetSize @ RVA 0x31BD25C

UnityEngine_Rect_o
Nekki_SF2_GUI_TableViewCell__GetSize(Nekki_SF2_GUI_TableViewCell_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Rect_Fields UVar1;
  
  if ((DAT_04566bfd & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566bfd = 1;
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 032bd2a0 to 033bd42f has its CatchHandler @ 032bd2a0
                       catch() { ... } // from try @ 032bd2a0 with catch @ 032bd2a0
                       catch() { ... } // from try @ 032bd568 with catch @ 032bd2a0
                       catch() { ... } // from try @ 032bd60c with catch @ 032bd2a0
                       catch() { ... } // from try @ 032bd614 with catch @ 032bd2a0
                       catch() { ... } // from try @ 032bd6c4 with catch @ 032bd2a0 */
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_00->klass == UnityEngine_RectTransform_TypeInfo)) {
    UVar1 = (UnityEngine_Rect_Fields)
            UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Rect_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

