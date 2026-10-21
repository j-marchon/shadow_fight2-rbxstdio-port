// Nekki.SF2.GUI.Dialogs.ScrollDialogLine$$Init @ RVA 0x2FF60D8

void Nekki_SF2_GUI_Dialogs_ScrollDialogLine__Init
               (Nekki_SF2_GUI_Dialogs_ScrollDialogLine_o *__this,NBLEEDEAPHB_o *NOLAOGFOPJG,
               MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
                    /* try { // try from 030f60dc to 031f60df has its CatchHandler @ 030f610c */
                    /* try { // try from 030f60e0 to 031f610f has its CatchHandler @ 030f6098 */
  if ((NOLAOGFOPJG != (NBLEEDEAPHB_o *)0x0) &&
     (pNVar1 = (__this->fields)._text, pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              ((NOLAOGFOPJG->fields).ONNNBMCAJMN.fields.r,(NOLAOGFOPJG->fields).ONNNBMCAJMN.fields.g
               ,(NOLAOGFOPJG->fields).ONNNBMCAJMN.fields.b,
               (NOLAOGFOPJG->fields).ONNNBMCAJMN.fields.a,pNVar1,
               (pNVar1->klass->vtable)._23_set_color.method);
                    /* catch() { ... } // from try @ 030f60dc with catch @ 030f610c */
    pNVar1 = (__this->fields)._text;
                    /* try { // try from 030f6110 to 031f611b has its CatchHandler @ 030f6130 */
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 030f611c to 031f6127 has its CatchHandler @ 030f6098 */
      Nekki_SF2_GUI_LabelAlias__set_UseLabelFontSize(pNVar1,true,(MethodInfo *)0x0);
      CJNHFNHJHPE = (NOLAOGFOPJG->fields).ALFDOLMJLKI;
                    /* try { // try from 030f6128 to 031f612f has its CatchHandler @ 030f6130 */
      if (0 < CJNHFNHJHPE) {
        pNVar1 = (__this->fields)._text;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f6110 with catch @ 030f6130
                       catch(type#2 @ 00000000) { ... } // from try @ 030f6128 with catch @ 030f6130
                        */
        if (pNVar1 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_030f6180;
        Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      }
      pNVar1 = (__this->fields)._text;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias
                  (pNVar1,(NOLAOGFOPJG->fields).ABCHAOKFLGL,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._text;
        if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          UnityEngine_UI_Text__set_fontStyle
                    ((UnityEngine_UI_Text_o *)pNVar1,(uint)(NOLAOGFOPJG->fields).DCLFKPIKIMC << 1,
                     (MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x030f617c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(__this->klass->vtable)._4_UpdateHeightOrLocalization.methodPtr)
                    (__this,(__this->klass->vtable)._4_UpdateHeightOrLocalization.method);
          return;
        }
      }
    }
  }
LAB_030f6180:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

