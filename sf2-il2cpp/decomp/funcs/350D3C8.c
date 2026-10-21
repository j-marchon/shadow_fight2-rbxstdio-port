// Nekki.SF2.GUI.Dialogs.NewsDialog$$EJHAPHAHMHG @ RVA 0x350D3C8

void Nekki_SF2_GUI_Dialogs_NewsDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_Transform_o *transform;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  UnityEngine_Vector3_o UVar3;
  
  if ((DAT_045688d9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_17803);
    DAT_045688d9 = 1;
  }
  pNVar2 = (__this->fields).super._header;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__Clear(pNVar2,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(EHNFGMGKCHO,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).super._header;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      CJNHFNHJHPE = StringLiteral_17803;
      if (!bVar1) {
        CJNHFNHJHPE = EHNFGMGKCHO;
      }
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).super._header;
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        transform = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
        __this_01 = (__this->fields).super._topStripe;
        if ((__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_Transform_o *)0x0)) {
          UVar3 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (transform,UVar3.fields.y + 5.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0360d48c to 0370d493 has its CatchHandler @ 0360d624 */
  FUN_01bab8c8();
}

