// Nekki.SF2.GUI.Dialogs.StoryDialog$$DBNAPIBFLEB @ RVA 0x32BF950

Nekki_SF2_GUI_TimerLabel_o *
Nekki_SF2_GUI_Dialogs_StoryDialog__DBNAPIBFLEB
          (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,NBLEEDEAPHB_o *FDLJCNLNCOC,MethodInfo *method
          )

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_TimerLabel_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  LBMOOFGGPEB_o *pLVar2;
  System_String_StaticFields *pSVar3;
  undefined4 uVar4;
  
  if ((DAT_045674be & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<TimerLabel>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_13795);
    FUN_01bab630(&StringLiteral_13819);
    DAT_045674be = 1;
  }
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,StringLiteral_13819,(MethodInfo *)0x0);
  if ((((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_01 = (Nekki_SF2_GUI_TimerLabel_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              (__this_00,Method_UnityEngine_GameObject_AddComponent<TimerLabel>__),
       FDLJCNLNCOC != (NBLEEDEAPHB_o *)0x0)) &&
      (pLVar2 = (FDLJCNLNCOC->fields).KOLIPNBCKOB, pLVar2 != (LBMOOFGGPEB_o *)0x0)) &&
     (__this_01 != (Nekki_SF2_GUI_TimerLabel_o *)0x0)) {
    *(bool_conflict *)((long)&(__this_01->fields).super._Alias + 1) = (pLVar2->fields).DGGBINHAFDB;
    *(bool_conflict *)((long)&(__this_01->fields).super._Alias + 2) = (pLVar2->fields).JAPGAIELCNJ;
    *(bool_conflict *)((long)&(__this_01->fields).super._Alias + 3) = (pLVar2->fields).CNLFJDCAIFD;
    *(bool_conflict *)((long)&(__this_01->fields).super._Alias + 4) = (pLVar2->fields).BKNLGDOJJHP;
    *(System_String_o **)&(__this_01->fields).UseDaysDelimiter = (pLVar2->fields).MLNKOENNJDF;
    thunk_FUN_01c20e04(&(__this_01->fields).UseDaysDelimiter);
    pLVar2 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
    if (pLVar2 != (LBMOOFGGPEB_o *)0x0) {
      (__this_01->fields).Delimiter = (pLVar2->fields).MOGICNLLBEM;
      thunk_FUN_01c20e04(&(__this_01->fields).Delimiter);
      pLVar2 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
      if (pLVar2 != (LBMOOFGGPEB_o *)0x0) {
        (__this_01->fields).super.field_0x1e1 = (pLVar2->fields).LNOCGDONOKL;
        *(bool_conflict *)((long)&(__this_01->fields).super._Alias + 5) =
             (pLVar2->fields).EOGMODIBAAI;
        *(bool_conflict *)((long)&(__this_01->fields).super._Alias + 6) =
             (pLVar2->fields).EGKABALFMPP;
        *(bool_conflict *)((long)&(__this_01->fields).super._Alias + 7) =
             (pLVar2->fields).AHKJNOGHCCK;
        (__this_01->fields).super._ToUpperCase = (pLVar2->fields).BAGAHOJOINM;
        Nekki_SF2_GUI_LabelAlias__set_LabelFontSize
                  ((Nekki_SF2_GUI_LabelAlias_o *)__this_01,0x67,(MethodInfo *)0x0);
        pLVar2 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
        if (pLVar2 != (LBMOOFGGPEB_o *)0x0) {
          (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                    ((pLVar2->fields).BANIDGFENDE.fields.r,(pLVar2->fields).BANIDGFENDE.fields.g,
                     (pLVar2->fields).BANIDGFENDE.fields.b,(pLVar2->fields).BANIDGFENDE.fields.a,
                     __this_01,(__this_01->klass->vtable)._23_set_color.method);
          pLVar2 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
          if (pLVar2 != (LBMOOFGGPEB_o *)0x0) {
            bVar1 = (pLVar2->fields).BKNLGDOJJHP;
            (__this_01->fields).IsMinutes = true;
            uVar4 = 3;
            if (bVar1 != false) {
              uVar4 = 4;
            }
            *(undefined4 *)&(__this_01->fields).super.field_0x1e4 = uVar4;
            if (bVar1 == false) {
              pSVar3 = string_TypeInfo->static_fields;
            }
            else {
              pSVar3 = (System_String_StaticFields *)&StringLiteral_13795;
            }
            Nekki_SF2_GUI_TimerLabel__set_DaysStringAlias(__this_01,pSVar3->Empty,(MethodInfo *)0x0)
            ;
            UnityEngine_UI_Text__set_alignment
                      ((UnityEngine_UI_Text_o *)__this_01,3,(MethodInfo *)0x0);
            __this_02 = UnityEngine_UI_Graphic__get_rectTransform
                                  ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_sizeDelta
                        (__this_02,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
              UnityEngine_UI_Text__set_verticalOverflow
                        ((UnityEngine_UI_Text_o *)__this_01,1,(MethodInfo *)0x0);
              UnityEngine_UI_Text__set_horizontalOverflow
                        ((UnityEngine_UI_Text_o *)__this_01,1,(MethodInfo *)0x0);
              return __this_01;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

