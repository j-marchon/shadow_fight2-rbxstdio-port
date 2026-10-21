// Nekki.SF2.GUI.TextPic$$OnPopulateMesh @ RVA 0x30B5FBC

void Nekki_SF2_GUI_TextPic__OnPopulateMesh
               (Nekki_SF2_GUI_TextPic_o *__this,UnityEngine_UI_VertexHelper_o *BKAFIEMJJGM,
               MethodInfo *method)

{
  System_Collections_Generic_List_IHIFNKAMALG__o *IMEAEJHODHL;
  UnityEngine_TextGenerator_o *__this_00;
  UnityEngine_UILineInfo_array *OGMLLFDBBHD;
  UnityEngine_UI_VertexHelper_o *extraout_x1;
  UnityEngine_UI_VertexHelper_o *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_Action_o *pSVar1;
  long lVar2;
  
  method_00 = BKAFIEMJJGM;
  if ((DAT_045661ff & 1) == 0) {
    FUN_01bab630(&StringLiteral_12900);
    DAT_045661ff = 1;
    method_00 = extraout_x1;
  }
  *(undefined1 *)&(__this->fields).super.m_TextCacheForLayout = 1;
  IMEAEJHODHL = Nekki_SF2_GUI_TextPic__DLLFGLAOKHG(__this,(MethodInfo *)method_00);
  pSVar1 = (__this->fields).NFECDKAEFJL;
  if (pSVar1 != (System_Action_o *)0x0) {
    Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__FBDFGPFFJEO
              ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar1,IMEAEJHODHL,method);
    pSVar1 = (__this->fields).NFECDKAEFJL;
    __this_00 = UnityEngine_UI_Text__get_cachedTextGenerator
                          ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
    if ((__this_00 != (UnityEngine_TextGenerator_o *)0x0) &&
       (OGMLLFDBBHD = UnityEngine_TextGenerator__GetLinesArray(__this_00,(MethodInfo *)0x0),
       pSVar1 != (System_Action_o *)0x0)) {
      Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__ONEAILACKJN
                ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar1,OGMLLFDBBHD,method);
      Nekki_SF2_GUI_TextPic__JPIJBLCPOGM(__this,method_01);
      Nekki_SF2_GUI_TextPic__HLBPMEDPOMB(__this,method_02);
      Nekki_SF2_GUI_TextPic__AMMHDMOMDIM(__this,BKAFIEMJJGM,method);
      pSVar1 = (__this->fields).NFECDKAEFJL;
      if (pSVar1 != (System_Action_o *)0x0) {
        Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__HMMKHGFOMNP
                  ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar1,method_03);
        lVar2 = *(long *)&(__this->fields)._FONMBPGDLBL_k__BackingField;
        *(undefined1 *)&(__this->fields).super.m_TextCacheForLayout = 0;
        if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x031b6084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

