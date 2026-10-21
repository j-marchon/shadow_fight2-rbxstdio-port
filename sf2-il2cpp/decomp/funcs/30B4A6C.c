// Nekki.SF2.GUI.TextPic$$.ctor @ RVA 0x30B4A6C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextPic___ctor(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Bounds__o *pSVar1;
  Il2CppObject *__this_00;
  System_Action_o **ppSVar2;
  System_Action_o *__this_01;
  Nekki_SF2_GUI_TextDebugger_o *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar3;
  undefined1 auVar4 [16];
  
  if ((DAT_045661f7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_FitImageLineHeightParams_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Bounds>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<Glyph>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextPic_<>c_AHGBGOCBEAP__);
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_<>c_TypeInfo);
    DAT_045661f7 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_Bounds__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<Bounds>_TypeInfo,method);
  System_Collections_Generic_List<Bounds>___ctor
            (pSVar1,Method_System_Collections_Generic_List<Bounds>__ctor__);
  *(System_Collections_Generic_List_Bounds__o **)
   &(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.z = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.z,pSVar1
                    );
  pSVar1 = (System_Collections_Generic_List_Bounds__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<Bounds>_TypeInfo);
  System_Collections_Generic_List<Bounds>___ctor
            (pSVar1,Method_System_Collections_Generic_List<Bounds>__ctor__);
  *(System_Collections_Generic_List_Bounds__o **)
   &(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y,pSVar1
                    );
  *(undefined4 *)((long)&(__this->fields).POHAMNFPKNM + 4) = 0x3f800000;
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_TextPic_FitImageLineHeightParams_TypeInfo);
  *(undefined4 *)&__this_00[1].klass = 0x3f800000;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(Il2CppObject **)&(__this->fields).LINICNCLMBA = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).LINICNCLMBA,__this_00);
  if ((Nekki_SF2_GUI_TextPic_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pLVar3 = (LabelButton_o *)Nekki_SF2_GUI_TextPic_<>c_TypeInfo->static_fields->__9__107_0;
  if (pLVar3 == (LabelButton_o *)0x0) {
    if ((Nekki_SF2_GUI_TextPic_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pLVar3 = (LabelButton_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar2 = &Nekki_SF2_GUI_TextPic_<>c_TypeInfo->static_fields->__9__107_0;
    *ppSVar2 = (System_Action_o *)pLVar3;
    thunk_FUN_01c20e04(ppSVar2,pLVar3);
  }
  (__this->fields).JPDGLLDKPHC = pLVar3;
  thunk_FUN_01c20e04(&(__this->fields).JPDGLLDKPHC,pLVar3);
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_TypeInfo);
  __this_01 = auVar4._0_8_;
  Nekki_SF2_GUI_TextPic_AIBKGOEIOLC___ctor
            ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)__this_01,auVar4._8_8_);
  (__this->fields).NFECDKAEFJL = __this_01;
  thunk_FUN_01c20e04(&(__this->fields).NFECDKAEFJL,__this_01);
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_TypeInfo);
  __this_02 = auVar4._0_8_;
  Nekki_SF2_GUI_TextPic_ABOHOFBMBHP___ctor
            ((Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)__this_02,auVar4._8_8_);
  (__this->fields).IHEKNEDMHDK = __this_02;
  thunk_FUN_01c20e04(&(__this->fields).IHEKNEDMHDK,__this_02);
  __this_03 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Glyph>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_03,Method_System_Collections_Generic_List<Glyph>__ctor__);
  (__this->fields).NMHDAIIIHFP = (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)__this_03;
  thunk_FUN_01c20e04(&(__this->fields).NMHDAIIIHFP,__this_03);
  UnityEngine_UI_Text___ctor((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  return;
}

