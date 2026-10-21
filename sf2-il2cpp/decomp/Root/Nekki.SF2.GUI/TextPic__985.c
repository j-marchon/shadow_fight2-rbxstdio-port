// TypeDefIndex 985
// Namespace: Nekki.SF2.GUI
// [ExecuteAlways]
// public class TextPic : Text
// Fields:
//   public GameObject[] GlyphPrefabs; // 0x108
//   public bool ForceUseAlignedBestFit; // 0x110
//   public bool ForbiddenUseAlignedBestFit; // 0x111
//   private Bounds <BAHHBJMJCEM>k__BackingField; // 0x114
//   private List<Bounds> <CECMNNLFJKO>k__BackingField; // 0x130
//   private Bounds <CDKHEGGEFOC>k__BackingField; // 0x138
//   private List<Bounds> <OAFKPIMLHJE>k__BackingField; // 0x150
//   private string <KOKCPBMJANE>k__BackingField; // 0x158
//   private StrikeThroughTextLine KALCEPKCEPP; // 0x160
//   private HorizontalLayoutGroup POHAMNFPKNM; // 0x168
//   private bool LINICNCLMBA; // 0x170
//   private float CHFMBPPOCLK; // 0x174
//   public TextPic.FitImageLineHeightParams FitImageLineHeightParam; // 0x178
//   private LabelButton JPDGLLDKPHC; // 0x180
//   private Action MPHECBPOAIC; // 0x188
//   private Button MEIDNEHHHKI; // 0x190
//   private const float NCKBDOKLLGD = 0.35;
//   private static readonly UIVertex[] FDHHLOLJNFE; // 0x0
//   private bool <FONMBPGDLBL>k__BackingField; // 0x198
//   private int <JEIOLGNJLLE>k__BackingField; // 0x19C
//   private Action NFECDKAEFJL; // 0x1A0
//   private TextPic.AIBKGOEIOLC LHLEDNAJOAK; // 0x1A8
//   private TextDebugger IHEKNEDMHDK; // 0x1B0
//   private TextPic.ABOHOFBMBHP NMHDAIIIHFP; // 0x1B8
//   private readonly List<Glyph> OIHEBGFLFLH; // 0x1C0

// ===== public Vector3 LocalTextMeshBounds_Anchored(TextAnchor POJKEOPHOAI)  [RVA 0x30B441C]
// Nekki.SF2.GUI.TextPic$$LocalTextMeshBounds_Anchored @ RVA 0x30B441C

/* WARNING: Type propagation algorithm not settling */

UnityEngine_Vector3_o
Nekki_SF2_GUI_TextPic__LocalTextMeshBounds_Anchored
          (Nekki_SF2_GUI_TextPic_o *__this,int32_t POJKEOPHOAI,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  UnityEngine_Vector3_Fields UVar2;
  UnityEngine_Bounds_o local_30;
  
  local_30.fields.m_Extents.fields._4_8_ =
       *(undefined8 *)&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z;
  pUVar1 = &(__this->fields)._BAHHBJMJCEM_k__BackingField;
  local_30.fields.m_Center.fields.z = (pUVar1->fields).m_Center.fields.x;
  local_30.fields.m_Extents.fields.x = (pUVar1->fields).m_Center.fields.y;
  local_30.fields.m_Center.fields._0_8_ = *(undefined8 *)((long)&(__this->fields).GlyphPrefabs + 4);
  UVar2 = (UnityEngine_Vector3_Fields)
          OMANDMDCGMF__OIMANFCDDIJ(POJKEOPHOAI,&local_30,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar2;
}


// ===== public void ParseGlyhs(ref string JLNPKGGFFDD)  [RVA 0x30B4458]
// Nekki.SF2.GUI.TextPic$$ParseGlyhs @ RVA 0x30B4458

void Nekki_SF2_GUI_TextPic__ParseGlyhs
               (Nekki_SF2_GUI_TextPic_o *__this,System_String_o **JLNPKGGFFDD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AEGOLGIJEBI_MCGKJAGBFKP__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045661f4 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_MCGKJAGBFKP>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_MCGKJAGBFKP>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_MCGKJAGBFKP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>_GetEnumerator__);
    DAT_045661f4 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  Nekki_SF2_GUI_TextPic__ELMFBJIPKHJ(__this,true,method);
  __this_00 = AEGOLGIJEBI__HJDNHACEPJI(JLNPKGGFFDD,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_AEGOLGIJEBI_MCGKJAGBFKP__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_MCGKJAGBFKP>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_TextPic__MJBPNMOFPOJ
                (__this,(AEGOLGIJEBI_MCGKJAGBFKP_o *)local_38.fields._current,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_MCGKJAGBFKP>_Dispose__)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnRendered(Action CJNHFNHJHPE)  [RVA 0x30B484C]
// Nekki.SF2.GUI.TextPic$$remove_OnRendered @ RVA 0x30B484C

void Nekki_SF2_GUI_TextPic__remove_OnRendered
               (Nekki_SF2_GUI_TextPic_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *source;
  
  if ((DAT_045661f5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045661f5 = 1;
  }
  source = *(System_Delegate_o **)&(__this->fields)._FONMBPGDLBL_k__BackingField;
  while ((pSVar2 = System_Delegate__Remove
                             (source,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar2 = (System_Delegate_o *)
             FUN_01c07368(&(__this->fields)._FONMBPGDLBL_k__BackingField,pSVar2,source);
    bVar1 = source == pSVar2;
    source = pSVar2;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== protected override void Awake()  [RVA 0x30B48EC]
// Nekki.SF2.GUI.TextPic$$Awake @ RVA 0x30B48EC

void Nekki_SF2_GUI_TextPic__Awake(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_StrikeThroughTextLine_o *pNVar3;
  MethodInfo *method_00;
  
  if ((DAT_045661f6 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Button>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<HorizontalLayoutGroup>__);
    DAT_045661f6 = 1;
  }
  UnityEngine_EventSystems_UIBehaviour__Awake
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_TextPic__MGJFCJLEHLC(__this,method_00);
  pSVar1 = (System_Action_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<Button>__);
  if (pSVar1 == (System_Action_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_031b49dc;
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
      pSVar1 = (System_Action_o *)0x0;
    }
    else {
      pSVar1 = (System_Action_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar2,
                          Method_UnityEngine_Component_GetComponent<Button>__);
    }
  }
  if (__this != (Nekki_SF2_GUI_TextPic_o *)0x0) {
    (__this->fields).MPHECBPOAIC = pSVar1;
    thunk_FUN_01c20e04(&(__this->fields).MPHECBPOAIC);
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
        pNVar3 = (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0;
      }
      else {
        pNVar3 = (Nekki_SF2_GUI_StrikeThroughTextLine_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar2,
                            Method_UnityEngine_Component_GetComponent<HorizontalLayoutGroup>__);
      }
      (__this->fields).KALCEPKCEPP = pNVar3;
      thunk_FUN_01c20e04(&(__this->fields).KALCEPKCEPP);
      return;
    }
  }
LAB_031b49dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DADKFEFJKEC()  [RVA 0x30B4A60]
// Nekki.SF2.GUI.TextPic$$DADKFEFJKEC @ RVA 0x30B4A60

void Nekki_SF2_GUI_TextPic__DADKFEFJKEC(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  return;
}


// ===== public string get_ReplaсeImagePath()  [RVA 0x30B4A64]
// Nekki.SF2.GUI.TextPic$$get_ReplaсeImagePath @ RVA 0x30B4A64

System_String_o *
Nekki_SF2_GUI_TextPic__get_ReplaсeImagePath(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  return (System_String_o *)(__this->fields)._OAFKPIMLHJE_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x30B4A6C]
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


// ===== private void PCIEJIHDIPE(string IHNKCJHDDKD)  [RVA 0x30B4EC8]
// Nekki.SF2.GUI.TextPic$$PCIEJIHDIPE @ RVA 0x30B4EC8

void Nekki_SF2_GUI_TextPic__PCIEJIHDIPE
               (Nekki_SF2_GUI_TextPic_o *__this,System_String_o *IHNKCJHDDKD,MethodInfo *method)

{
  return;
}


// ===== private void HLBPMEDPOMB()  [RVA 0x30B4ECC]
// Nekki.SF2.GUI.TextPic$$HLBPMEDPOMB @ RVA 0x30B4ECC

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextPic__HLBPMEDPOMB(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  bool bVar2;
  Nekki_SF2_GUI_TextDebugger_o *pNVar3;
  UnityEngine_RectTransform_o *pUVar4;
  System_Collections_Generic_List_Bounds__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_o *pSVar6;
  Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *x;
  UnityEngine_Rect_o UVar7;
  UnityEngine_Rect_o UVar8;
  System_Collections_Generic_List_Bounds__o *local_170 [4];
  System_Collections_Generic_List_Bounds__o *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  System_Collections_Generic_List_T__o *local_130 [2];
  System_Collections_Generic_List_T__o *local_120;
  System_Collections_Generic_List_T__o *local_110 [2];
  System_Collections_Generic_List_T__o *local_100;
  System_Collections_Generic_List_T__o *local_f0 [2];
  System_Collections_Generic_List_T__o *local_e0;
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  int32_t iStack_b8;
  int32_t iStack_b4;
  System_Collections_Generic_List_T__o *local_b0;
  UnityEngine_Bounds_o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  undefined8 uStack_78;
  System_Collections_Generic_List_T__o *local_70;
  
  if ((DAT_045661f8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Bounds>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Bounds>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Bounds>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661f8 = 1;
    method = extraout_x1;
  }
  local_70 = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  uStack_78._0_4_ = 0;
  uStack_78._4_4_ = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  x = (__this->fields).LHLEDNAJOAK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pNVar3 = (Nekki_SF2_GUI_TextDebugger_o *)(__this->fields).LHLEDNAJOAK;
  if (pNVar3 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
    Nekki_SF2_GUI_TextDebugger__Clear(pNVar3,(MethodInfo *)0x0);
    pSVar6 = (__this->fields).NFECDKAEFJL;
    if ((pSVar6 != (System_Action_o *)0x0) &&
       (pNVar3 = (Nekki_SF2_GUI_TextDebugger_o *)(__this->fields).LHLEDNAJOAK,
       pNVar3 != (Nekki_SF2_GUI_TextDebugger_o *)0x0)) {
      Nekki_SF2_GUI_TextDebugger__PushGlyphs
                (pNVar3,(System_Collections_Generic_List_IHIFNKAMALG__o *)
                        (pSVar6->fields).super.super.m_target,(MethodInfo *)0x0);
      pNVar3 = (Nekki_SF2_GUI_TextDebugger_o *)(__this->fields).LHLEDNAJOAK;
      pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        UVar7 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
          if (pNVar3 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
            local_a8.fields.m_Extents.fields.y = UVar8.fields.m_Height * 0.5;
            local_a8.fields.m_Extents.fields.x = UVar8.fields.m_Width * 0.5;
            local_a8.fields.m_Center.fields.x = UVar7.fields.m_XMin + UVar7.fields.m_Width * 0.5;
            local_a8.fields.m_Center.fields.y = UVar7.fields.m_YMin + UVar7.fields.m_Height * 0.5;
            local_a8.fields.m_Center.fields.z = 0.0;
            local_a8.fields.m_Extents.fields.z = 0.0;
            Nekki_SF2_GUI_TextDebugger__PushRTBounds(pNVar3,&local_a8,(MethodInfo *)0x0);
            pSVar5 = *(System_Collections_Generic_List_Bounds__o **)
                      &(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.z;
            if (pSVar5 != (System_Collections_Generic_List_Bounds__o *)0x0) {
              System_Collections_Generic_List<Bounds>__GetEnumerator
                        (&local_d0,pSVar5,
                         Method_System_Collections_Generic_List<Bounds>_GetEnumerator__);
              local_90.fields._index = local_d0.fields._index;
              local_90.fields._version = local_d0.fields._version;
              local_90.fields._list = local_d0.fields._list;
              uStack_78._0_4_ = iStack_b8;
              uStack_78._4_4_ = iStack_b4;
              local_90.fields._current = local_d0.fields._current;
              local_70 = local_b0;
              while (bVar2 = System_Collections_Generic_List_Enumerator<Bounds>__MoveNext
                                       (&local_90,
                                        Method_System_Collections_Generic_List_Enumerator<Bounds>_MoveNext__
                                       ), bVar2) {
                pNVar3 = (Nekki_SF2_GUI_TextDebugger_o *)(__this->fields).LHLEDNAJOAK;
                local_d0.fields._current = (Il2CppObject *)local_70;
                local_d0.fields._index = (int32_t)uStack_78;
                local_d0.fields._version = uStack_78._4_4_;
                local_d0.fields._list =
                     (System_Collections_Generic_List_T__o *)local_90.fields._current;
                if (pNVar3 == (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                local_f0[1] = (System_Collections_Generic_List_T__o *)uStack_78;
                local_f0[0] = (System_Collections_Generic_List_T__o *)local_90.fields._current;
                local_e0 = local_70;
                Nekki_SF2_GUI_TextDebugger__PushTextLineBounds
                          (pNVar3,(UnityEngine_Bounds_o *)local_f0,(MethodInfo *)0x0);
              }
              System_Collections_Generic_List_Enumerator<Bounds>__Dispose
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<Bounds>_Dispose__);
              pSVar5 = *(System_Collections_Generic_List_Bounds__o **)
                        &(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y;
              if (pSVar5 != (System_Collections_Generic_List_Bounds__o *)0x0) {
                System_Collections_Generic_List<Bounds>__GetEnumerator
                          (&local_d0,pSVar5,
                           Method_System_Collections_Generic_List<Bounds>_GetEnumerator__);
                local_90.fields._index = local_d0.fields._index;
                local_90.fields._version = local_d0.fields._version;
                local_90.fields._list = local_d0.fields._list;
                uStack_78._0_4_ = iStack_b8;
                uStack_78._4_4_ = iStack_b4;
                local_90.fields._current = local_d0.fields._current;
                local_70 = local_b0;
                while (bVar2 = System_Collections_Generic_List_Enumerator<Bounds>__MoveNext
                                         (&local_90,
                                          Method_System_Collections_Generic_List_Enumerator<Bounds>_MoveNext__
                                         ), bVar2) {
                  pNVar3 = (Nekki_SF2_GUI_TextDebugger_o *)(__this->fields).LHLEDNAJOAK;
                  local_d0.fields._current = (Il2CppObject *)local_70;
                  local_d0.fields._index = (int32_t)uStack_78;
                  local_d0.fields._version = uStack_78._4_4_;
                  local_d0.fields._list =
                       (System_Collections_Generic_List_T__o *)local_90.fields._current;
                  if (pNVar3 == (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  local_110[1] = (System_Collections_Generic_List_T__o *)uStack_78;
                  local_110[0] = (System_Collections_Generic_List_T__o *)local_90.fields._current;
                  local_100 = local_70;
                  Nekki_SF2_GUI_TextDebugger__PushAlignedTextLineBounds
                            (pNVar3,(UnityEngine_Bounds_o *)local_110,(MethodInfo *)0x0);
                }
                System_Collections_Generic_List_Enumerator<Bounds>__Dispose
                          (&local_90,
                           Method_System_Collections_Generic_List_Enumerator<Bounds>_Dispose__);
                pNVar3 = (Nekki_SF2_GUI_TextDebugger_o *)(__this->fields).LHLEDNAJOAK;
                local_d0.fields._current =
                     *(Il2CppObject **)
                      &(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z;
                pUVar1 = &(__this->fields)._BAHHBJMJCEM_k__BackingField;
                local_d0.fields._index = (int32_t)(pUVar1->fields).m_Center.fields.x;
                local_d0.fields._version = (int32_t)(pUVar1->fields).m_Center.fields.y;
                local_d0.fields._list =
                     *(System_Collections_Generic_List_T__o **)
                      ((long)&(__this->fields).GlyphPrefabs + 4);
                if (pNVar3 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
                  local_130[0] = local_d0.fields._list;
                  local_130[1] = (System_Collections_Generic_List_T__o *)local_d0.fields._8_8_;
                  local_120 = (System_Collections_Generic_List_T__o *)local_d0.fields._current;
                  Nekki_SF2_GUI_TextDebugger__PushTextBounds
                            (pNVar3,(UnityEngine_Bounds_o *)local_130,(MethodInfo *)0x0);
                  pNVar3 = (Nekki_SF2_GUI_TextDebugger_o *)(__this->fields).LHLEDNAJOAK;
                  local_170[2] = *(System_Collections_Generic_List_Bounds__o **)
                                  &(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.
                                   fields.z;
                  pUVar1 = &(__this->fields)._CDKHEGGEFOC_k__BackingField;
                  local_170[1]._0_4_ = (pUVar1->fields).m_Center.fields.x;
                  local_170[1]._4_4_ = (pUVar1->fields).m_Center.fields.y;
                  local_170[0] = (__this->fields)._CECMNNLFJKO_k__BackingField;
                  local_150 = local_170[0];
                  uStack_148 = local_170[1];
                  local_140 = local_170[2];
                  if (pNVar3 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
                    Nekki_SF2_GUI_TextDebugger__PushAlignedTextBounds
                              (pNVar3,(UnityEngine_Bounds_o *)local_170,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IKJOHPDHMME()  [RVA 0x30B52C8]
// Nekki.SF2.GUI.TextPic$$IKJOHPDHMME @ RVA 0x30B52C8

void Nekki_SF2_GUI_TextPic__IKJOHPDHMME(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045661f9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    DAT_045661f9 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,__this_00,Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
        return;
      }
      if ((Nekki_SF2_GUI_Glyphs_Glyph_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_Glyphs_Glyph_o *)0x0) break;
      Nekki_SF2_GUI_Glyphs_Glyph__ComputePosition
                ((Nekki_SF2_GUI_Glyphs_Glyph_o *)local_38.fields._current,
                 (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public Button get_ParentOrMyButton()  [RVA 0x30B5418]
// Nekki.SF2.GUI.TextPic$$get_ParentOrMyButton @ RVA 0x30B5418

UnityEngine_UI_Button_o *
Nekki_SF2_GUI_TextPic__get_ParentOrMyButton(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  return (UnityEngine_UI_Button_o *)(__this->fields).MPHECBPOAIC;
}


// ===== private void LEACABKPAJF()  [RVA 0x30B5420]
// Nekki.SF2.GUI.TextPic$$LEACABKPAJF @ RVA 0x30B5420

void Nekki_SF2_GUI_TextPic__LEACABKPAJF(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  Nekki_SF2_GUI_TextDebugger_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *extraout_x1;
  byte bVar4;
  undefined8 uVar5;
  System_Action_o *pSVar6;
  uint uVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045661fa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661fa = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).IHEKNEDMHDK;
  if (__this_00 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
    Nekki_SF2_GUI_TextPic_ABOHOFBMBHP__LLCONNGHGKD
              ((Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)__this_00,method);
    __this_01 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,__this_01,Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
        pIVar2 = local_70.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
          return;
        }
        pUVar1 = &(__this->fields)._CDKHEGGEFOC_k__BackingField;
        uVar5._0_4_ = (pUVar1->fields).m_Extents.fields.y;
        uVar5._4_4_ = (pUVar1->fields).m_Extents.fields.z;
        uVar7 = *(uint *)((long)&(__this->fields).POHAMNFPKNM + 4);
        pSVar6 = (__this->fields).MPHECBPOAIC;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar3) {
          pSVar6 = (__this->fields).MPHECBPOAIC;
          if (pSVar6 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar4 = *(byte *)&pSVar6[1].fields.super.super.method_info ^ 1;
        }
        else {
          bVar4 = 0;
        }
        if (pIVar2 == (Il2CppObject *)0x0) break;
        (*pIVar2->klass->vtable[7].methodPtr)
                  ((ulong)uVar7,pIVar2,uVar5,(ulong)(bVar4 != 0),pIVar2->klass->vtable[7].method);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<GameObject> GetPresentedPrefabs(bool CHBLGJGLBAE = False)  [RVA 0x30B5818]
// Nekki.SF2.GUI.TextPic$$GetPresentedPrefabs @ RVA 0x30B5818

System_Collections_Generic_List_GameObject__o *
Nekki_SF2_GUI_TextPic__GetPresentedPrefabs
          (Nekki_SF2_GUI_TextPic_o *__this,bool CHBLGJGLBAE,MethodInfo *method)

{
  int32_t capacity;
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *pNVar5;
  UnityEngine_GameObject_array *pUVar6;
  UnityEngine_Object_o *x;
  UnityEngine_Object_c *pUVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045661fb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<GameObject>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_PrefabGlyph_TypeInfo);
    DAT_045661fb = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pNVar5 = (__this->fields).NMHDAIIIHFP;
  if (pNVar5 != (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)0x0) {
    capacity = *(int32_t *)&pNVar5[1].klass;
    __this_00 = (System_Collections_Generic_List_GameObject__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<GameObject>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,capacity,
               Method_System_Collections_Generic_List<GameObject>__ctor__);
    __this_01 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,__this_01,Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      do {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
        if (!bVar4) {
                    /* try { // try from 031b5a54 to 032b5a6b has its CatchHandler @ 031b5e50 */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
                    /* try { // try from 031b5a6c to 032b5b8f has its CatchHandler @ 031b57ec */
          return __this_00;
        }
        if ((UnityEngine_Object_o *)local_70.fields._current == (UnityEngine_Object_o *)0x0) {
LAB_031b5984:
          x = (UnityEngine_Object_o *)0x0;
        }
        else {
          bVar1 = (Nekki_SF2_GUI_Glyphs_PrefabGlyph_TypeInfo->_2).naturalAligment;
          if ((((UnityEngine_Object_c *)(local_70.fields._current)->klass)->_2).naturalAligment <
              bVar1) goto LAB_031b5984;
          x = (UnityEngine_Object_o *)local_70.fields._current;
          if ((((UnityEngine_Object_c *)(local_70.fields._current)->klass)->_2).typeHierarchy
              [(ulong)bVar1 - 1] != (Il2CppClass *)Nekki_SF2_GUI_Glyphs_PrefabGlyph_TypeInfo) {
            x = (UnityEngine_Object_o *)0x0;
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 031b59c8 to 032b59eb has its CatchHandler @ 031b5a3c */
          pUVar7 = x[3].klass;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          lVar3 = Method_System_Collections_Generic_List<GameObject>_Add__;
          if (bVar4 || CHBLGJGLBAE) {
                    /* try { // try from 031b59f4 to 032b59ff has its CatchHandler @ 031b5a38 */
            if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pUVar7 = x[3].klass;
            pUVar6 = (__this_00->fields)._items;
                    /* try { // try from 031b5a04 to 032b5a1b has its CatchHandler @ 031b5a34 */
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pUVar6 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pUVar6->max_length) {
                    /* try { // try from 031b5a2c to 032b5a2f has its CatchHandler @ 031b5a38 */
              (__this_00->fields)._size = uVar2 + 1;
                    /* try { // try from 031b5a30 to 032b5a53 has its CatchHandler @ 031b57ec */
              pUVar6->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)pUVar7;
                    /* catch() { ... } // from try @ 031b5a04 with catch @ 031b5a34 */
              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 031b59f4 with catch @ 031b5a38
                       catch() { ... } // from try @ 031b5a2c with catch @ 031b5a38 */
            }
            else {
                    /* catch() { ... } // from try @ 031b59c8 with catch @ 031b5a3c */
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)pUVar7,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HMHNOKBAMND(string MFDCCBAJNIO)  [RVA 0x30B5B10]
// Nekki.SF2.GUI.TextPic$$HMHNOKBAMND @ RVA 0x30B5B10

void Nekki_SF2_GUI_TextPic__HMHNOKBAMND
               (Nekki_SF2_GUI_TextPic_o *__this,System_String_o *MFDCCBAJNIO,MethodInfo *method)

{
  return;
}


// ===== public void Invalidate()  [RVA 0x30B5B14]
// Nekki.SF2.GUI.TextPic$$Invalidate @ RVA 0x30B5B14

void Nekki_SF2_GUI_TextPic__Invalidate(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._27_SetLayoutDirty.methodPtr)
            (__this,(__this->klass->vtable)._27_SetLayoutDirty.method);
                    /* WARNING: Could not recover jumptable at 0x031b5b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._28_SetVerticesDirty.methodPtr)
            (__this,(__this->klass->vtable)._28_SetVerticesDirty.method);
  return;
}


// ===== private bool KHKPMMKDLAM(int AMEHENBCENL)  [RVA 0x30B5B44]
// Nekki.SF2.GUI.TextPic$$KHKPMMKDLAM @ RVA 0x30B5B44

bool Nekki_SF2_GUI_TextPic__KHKPMMKDLAM
               (Nekki_SF2_GUI_TextPic_o *__this,int32_t AMEHENBCENL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar2;
  System_Action_o *pSVar3;
  
  if ((DAT_045661fc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    DAT_045661fc = 1;
  }
  pSVar3 = (__this->fields).NFECDKAEFJL;
                    /* try { // try from 031b5b90 to 032b5bb7 has its CatchHandler @ 031b5e94 */
  if (((pSVar3 != (System_Action_o *)0x0) &&
      (__this_00 = (System_Collections_Generic_List_object__o *)
                   (pSVar3->fields).super.super.invoke_impl,
      __this_00 != (System_Collections_Generic_List_object__o *)0x0)) &&
     (pIVar2 = System_Collections_Generic_List<object>__get_Item
                         (__this_00,AMEHENBCENL,
                          Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__),
     pIVar2 != (Il2CppObject *)0x0)) {
    if (*(char *)((long)&pIVar2[1].monitor + 6) == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = *(char *)((long)&pIVar2[1].monitor + 4) == '\0';
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private Nullable<int> LAGLMDPBDKN()  [RVA 0x30B5BE8]
// Nekki.SF2.GUI.TextPic$$LAGLMDPBDKN @ RVA 0x30B5BE8

System_Nullable_int__o
Nekki_SF2_GUI_TextPic__LAGLMDPBDKN(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  int32_t size;
  UnityEngine_Font_o *pUVar1;
  OMANDMDCGMF_MOHBDJOFHEN_o *__this_00;
  System_Nullable_int__Fields SVar2;
  int32_t value;
  MethodInfo *in_x2;
  System_Action_o *pSVar3;
  System_String_o *CJNHFNHJHPE;
  float fVar4;
  UnityEngine_Vector2_Fields local_40;
  System_Nullable_int__Fields local_38;
  
                    /* try { // try from 031b5bf4 to 032b5c1b has its CatchHandler @ 031b5e90 */
  if ((DAT_045661fd & 1) == 0) {
    FUN_01bab630(&OMANDMDCGMF_MOHBDJOFHEN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
                    /* try { // try from 031b5c24 to 032b5c2f has its CatchHandler @ 031b5e8c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextPic_KHKPMMKDLAM__);
    DAT_045661fd = 1;
  }
  local_40.x = 0.0;
  local_40.y = 0.0;
                    /* try { // try from 031b5c38 to 032b5c43 has its CatchHandler @ 031b5e80 */
  size = Nekki_SF2_GUI_TextPic__CGDJKDDKKKC(__this,(UnityEngine_Vector2_o *)&local_40,in_x2);
                    /* try { // try from 031b5c50 to 032b5c63 has its CatchHandler @ 031b5e84 */
  pUVar1 = UnityEngine_UI_Text__get_font((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).NFECDKAEFJL;
  if ((pSVar3 != (System_Action_o *)0x0) && (pUVar1 != (UnityEngine_Font_o *)0x0)) {
    UnityEngine_Font__RequestCharactersInTexture
              (pUVar1,(System_String_o *)(pSVar3->fields).super.super.method_ptr,size,
               (MethodInfo *)0x0);
    pUVar1 = UnityEngine_UI_Text__get_font((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 031b5c7c to 032b5c83 has its CatchHandler @ 031b5e7c */
    pSVar3 = (__this->fields).NFECDKAEFJL;
    if (pSVar3 != (System_Action_o *)0x0) {
                    /* try { // try from 031b5c88 to 032b5ca3 has its CatchHandler @ 031b5e88 */
      CJNHFNHJHPE = (System_String_o *)(pSVar3->fields).super.super.method_ptr;
      __this_00 = (OMANDMDCGMF_MOHBDJOFHEN_o *)thunk_FUN_01bda818(OMANDMDCGMF_MOHBDJOFHEN_TypeInfo);
                    /* try { // try from 031b5cb4 to 032b5cbf has its CatchHandler @ 031b5e74 */
      OMANDMDCGMF_MOHBDJOFHEN___ctor
                (__this_00,(Il2CppObject *)__this,Method_Nekki_SF2_GUI_TextPic_KHKPMMKDLAM__,
                 (MethodInfo *)0x0);
                    /* try { // try from 031b5cc0 to 032b5ccf has its CatchHandler @ 031b5e70 */
      fVar4 = OMANDMDCGMF__GPEPOJMOHKA(pUVar1,CJNHFNHJHPE,size,__this_00,(MethodInfo *)0x0);
                    /* try { // try from 031b5cd4 to 032b5cf3 has its CatchHandler @ 031b5e78 */
      if ((fVar4 <= 0.0) || (local_40.x <= 0.0)) {
        local_38.hasValue = false;
        local_38._1_3_ = 0;
        local_38.value = 0;
      }
      else {
        fVar4 = local_40.x / fVar4;
        value = size;
        if (fVar4 < 1.0) {
                    /* try { // try from 031b5d04 to 032b5d0f has its CatchHandler @ 031b5e68 */
          if (fVar4 <= 0.35) {
            SVar2.hasValue = false;
            SVar2._1_3_ = 0;
            SVar2.value = 0;
            return (System_Nullable_int__o)SVar2;
          }
                    /* try { // try from 031b5d10 to 032b5d2f has its CatchHandler @ 031b5e6c */
          value = -0x80000000;
                    /* try { // try from 031b5d30 to 032b5e17 has its CatchHandler @ 031b57ec */
          if (fVar4 * (float)size != INFINITY) {
            value = (int)(fVar4 * (float)size);
          }
        }
        local_38.hasValue = false;
        local_38._1_3_ = 0;
        local_38.value = 0;
        System_Nullable<int>___ctor
                  ((System_Nullable_int__o)&local_38,value,Method_System_Nullable<int>__ctor__);
      }
      return (System_Nullable_int__o)local_38;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool MCLPFBNCJIB()  [RVA 0x30B5EFC]
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


// ===== protected override void OnPopulateMesh(VertexHelper BKAFIEMJJGM)  [RVA 0x30B5FBC]
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
    FUN_01bab630(&StringLiteral_12900/*"TextPic.OnPopulateMesh"*/);
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


// ===== public List<Bounds> get_TextLineBounds()  [RVA 0x30B6CF8]
// Nekki.SF2.GUI.TextPic$$get_TextLineBounds @ RVA 0x30B6CF8

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_Bounds__o *
Nekki_SF2_GUI_TextPic__get_TextLineBounds(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  return *(System_Collections_Generic_List_Bounds__o **)
          &(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.z;
}


// ===== private void POIOFMEMHBP()  [RVA 0x30B6D00]
// Nekki.SF2.GUI.TextPic$$POIOFMEMHBP @ RVA 0x30B6D00

void Nekki_SF2_GUI_TextPic__POIOFMEMHBP(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *in_x2;
  
                    /* try { // try from 031b6d00 to 032b6d27 has its CatchHandler @ 031b7094 */
  if ((DAT_04566200 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12903/*"TextPic.text"*/);
    FUN_01bab630(&StringLiteral_12902/*"TextPic.UpdateContent"*/);
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


// ===== private void EGBIBJPLLHI(List<Bounds> CJNHFNHJHPE)  [RVA 0x30B706C]
// Nekki.SF2.GUI.TextPic$$EGBIBJPLLHI @ RVA 0x30B706C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextPic__EGBIBJPLLHI
               (Nekki_SF2_GUI_TextPic_o *__this,
               System_Collections_Generic_List_Bounds__o *CJNHFNHJHPE,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 031b6efc with catch @ 031b706c */
                    /* catch() { ... } // from try @ 031b6ec8 with catch @ 031b7070 */
  *(System_Collections_Generic_List_Bounds__o **)
   &(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.z = CJNHFNHJHPE;
                    /* try { // try from 031b7078 to 032b707b has its CatchHandler @ 031b715c */
  thunk_FUN_01c20e04(&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.z);
  return;
}


// ===== private void IHAENEAJGBH(Glyph GMKMNGAHIME)  [RVA 0x30B707C]
// Nekki.SF2.GUI.TextPic$$IHAENEAJGBH @ RVA 0x30B707C

void Nekki_SF2_GUI_TextPic__IHAENEAJGBH
               (Nekki_SF2_GUI_TextPic_o *__this,Nekki_SF2_GUI_Glyphs_Glyph_o *GMKMNGAHIME,
               MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  uint uVar3;
  System_Action_o *pSVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Vector3_StaticFields *pUVar9;
  BOGDEGPCIJI_o *__this_00;
  float fVar10;
  float GANJLDMKLAE;
  float fVar11;
  float fVar12;
  float AFLKEKAJJEA;
  float fVar13;
  float fVar14;
  UnityEngine_Vector2_o UVar15;
  UnityEngine_Vector3_o MJBMLNKAPGC;
  UnityEngine_Vector3_o MJBMLNKAPGC_00;
  
                    /* try { // try from 031b707c to 032b70af has its CatchHandler @ 031b68b4 */
                    /* catch() { ... } // from try @ 031b7024 with catch @ 031b7084 */
                    /* catch() { ... } // from try @ 031b6db8 with catch @ 031b7088 */
                    /* catch() { ... } // from try @ 031b6d90 with catch @ 031b708c */
                    /* catch() { ... } // from try @ 031b6d5c with catch @ 031b7090 */
                    /* catch() { ... } // from try @ 031b6d00 with catch @ 031b7094 */
  method_00 = (MethodInfo *)GMKMNGAHIME;
  if ((DAT_04566201 & 1) == 0) {
                    /* try { // try from 031b70b0 to 032b70b3 has its CatchHandler @ 031b70c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
                    /* catch() { ... } // from try @ 031b70b0 with catch @ 031b70c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_04566201 = 1;
    method_00 = extraout_x1;
  }
  if (GMKMNGAHIME != (Nekki_SF2_GUI_Glyphs_Glyph_o *)0x0) {
                    /* try { // try from 031b70d8 to 032b7147 has its CatchHandler @ 031b715c */
    iVar1 = (GMKMNGAHIME->fields)._HEJNKDEACJE_k__BackingField;
    if (iVar1 < 0) {
                    /* try { // try from 031b7148 to 032b7153 has its CatchHandler @ 031b68b4 */
      return;
    }
    pSVar4 = (__this->fields).NFECDKAEFJL;
    if (pSVar4 != (System_Action_o *)0x0) {
      iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__ILAMEAMIMMP
                        ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar4,method_00);
      if (iVar2 <= iVar1) {
        return;
      }
      pSVar4 = (__this->fields).NFECDKAEFJL;
      if (((pSVar4 != (System_Action_o *)0x0) &&
          (pSVar5 = (System_Collections_Generic_List_object__o *)
                    (pSVar4->fields).super.super.invoke_impl,
          pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) &&
         (pIVar6 = System_Collections_Generic_List<object>__get_Item
                             (pSVar5,(GMKMNGAHIME->fields)._CBEOMKIMKNO_k__BackingField,
                              Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                             ), pIVar6 != (Il2CppObject *)0x0)) {
        if (*(char *)((long)&pIVar6[1].monitor + 6) == '\0') {
          return;
        }
        if (*(char *)((long)&pIVar6[1].monitor + 4) != '\0') {
          return;
        }
        pSVar4 = (__this->fields).NFECDKAEFJL;
                    /* try { // try from 031b7154 to 032b715b has its CatchHandler @ 031b715c */
        if ((pSVar4 != (System_Action_o *)0x0) &&
           (pSVar5 = (System_Collections_Generic_List_object__o *)
                     (pSVar4->fields).super.super.method,
           pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
                    /* catch() { ... } // from try @ 031b7078 with catch @ 031b715c
                       catch() { ... } // from try @ 031b70d8 with catch @ 031b715c
                       catch() { ... } // from try @ 031b7154 with catch @ 031b715c */
                    /* try { // try from 031b7160 to 032b7337 has its CatchHandler @ 031b7160
                       catch() { ... } // from try @ 031b7160 with catch @ 031b7160
                       catch() { ... } // from try @ 031b7388 with catch @ 031b7160
                       catch() { ... } // from try @ 031b73d0 with catch @ 031b7160
                       catch() { ... } // from try @ 031b7634 with catch @ 031b7160
                       catch() { ... } // from try @ 031b76bc with catch @ 031b7160
                       catch() { ... } // from try @ 031b77a8 with catch @ 031b7160
                       catch() { ... } // from try @ 031b77dc with catch @ 031b7160
                       catch() { ... } // from try @ 031b7844 with catch @ 031b7160 */
          pIVar7 = System_Collections_Generic_List<object>__get_Item
                             (pSVar5,(GMKMNGAHIME->fields)._HEJNKDEACJE_k__BackingField,
                              Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__
                             );
          if (DAT_0455fa77 == '\0') {
            FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
            DAT_0455fa77 = '\x01';
          }
          pSVar4 = (__this->fields).NFECDKAEFJL;
          if ((pSVar4 != (System_Action_o *)0x0) &&
             (pSVar5 = (System_Collections_Generic_List_object__o *)
                       (pSVar4->fields).super.super.m_target,
             pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
            pUVar9 = UnityEngine_Vector3_TypeInfo->static_fields;
            fVar10 = (pUVar9->zeroVector).fields.x;
            fVar12 = (pUVar9->zeroVector).fields.y;
            fVar11 = (pUVar9->zeroVector).fields.z;
            pIVar8 = System_Collections_Generic_List<object>__get_Item
                               (pSVar5,*(int *)&pIVar6[1].monitor << 2 | 3,
                                Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
            if ((pIVar8 != (Il2CppObject *)0x0) &&
               ((pSVar4 = (__this->fields).NFECDKAEFJL, pSVar4 != (System_Action_o *)0x0 &&
                (pSVar5 = (System_Collections_Generic_List_object__o *)
                          (pSVar4->fields).super.super.m_target,
                pSVar5 != (System_Collections_Generic_List_object__o *)0x0)))) {
              fVar13 = *(float *)&pIVar8[1].klass;
              pIVar8 = System_Collections_Generic_List<object>__get_Item
                                 (pSVar5,*(int *)&pIVar6[1].monitor << 2 | 2,
                                  Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
              if ((pIVar8 != (Il2CppObject *)0x0) &&
                 (__this_00 = (GMKMNGAHIME->fields)._FAPFIEABBBO_k__BackingField,
                 __this_00 != (BOGDEGPCIJI_o *)0x0)) {
                fVar14 = *(float *)&pIVar8[1].klass;
                UVar15 = BOGDEGPCIJI__GCMGMGMCMNK(__this_00,(MethodInfo *)0x0);
                uVar3 = UnityEngine_UI_Text__get_alignment
                                  ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
                GANJLDMKLAE = fVar10;
                AFLKEKAJJEA = fVar10;
                if (uVar3 < 9) {
                  uVar3 = 1 << (ulong)(uVar3 & 0x1f);
                  AFLKEKAJJEA = UVar15.fields.x - ABS(fVar13 - fVar14);
                  if ((uVar3 & 0x49) == 0) {
                    if ((uVar3 & 0x92) == 0) {
                      GANJLDMKLAE = -AFLKEKAJJEA;
                      AFLKEKAJJEA = fVar10;
                    }
                    else {
                      GANJLDMKLAE = AFLKEKAJJEA * -0.5;
                      AFLKEKAJJEA = AFLKEKAJJEA * 0.5;
                    }
                  }
                }
                if (pIVar7 != (Il2CppObject *)0x0) {
                  MJBMLNKAPGC.fields.y = fVar12;
                  MJBMLNKAPGC.fields.x = GANJLDMKLAE;
                  MJBMLNKAPGC.fields.z = fVar11;
                  OMANDMDCGMF__EJKENGNOLPL
                            ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                             *(int32_t *)&pIVar7[1].klass,*(int *)&pIVar6[1].klass + -1,MJBMLNKAPGC,
                             (MethodInfo *)0x0);
                  MJBMLNKAPGC_00.fields.y = fVar12;
                  MJBMLNKAPGC_00.fields.x = AFLKEKAJJEA;
                  MJBMLNKAPGC_00.fields.z = fVar11;
                  OMANDMDCGMF__EJKENGNOLPL
                            ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                             *(int *)&pIVar6[1].klass + 1,*(int32_t *)((long)&pIVar7[1].klass + 4),
                             MJBMLNKAPGC_00,(MethodInfo *)0x0);
                  OMANDMDCGMF__JINKFEFKLCA
                            ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                             *(int *)&pIVar6[1].monitor << 2 | 3,GANJLDMKLAE,AFLKEKAJJEA,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FKGOGDIMOEP()  [RVA 0x30B736C]
// Nekki.SF2.GUI.TextPic$$FKGOGDIMOEP @ RVA 0x30B736C

void Nekki_SF2_GUI_TextPic__FKGOGDIMOEP(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 031b7370 to 032b7387 has its CatchHandler @ 031b7398 */
  if ((DAT_04566202 & 1) == 0) {
                    /* try { // try from 031b7388 to 032b73b7 has its CatchHandler @ 031b7160 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
                    /* catch() { ... } // from try @ 031b7370 with catch @ 031b7398 */
                    /* catch() { ... } // from try @ 031b7360 with catch @ 031b739c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
                    /* catch() { ... } // from try @ 031b7338 with catch @ 031b73a0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
                    /* try { // try from 031b73b8 to 032b73cf has its CatchHandler @ 031b783c */
    DAT_04566202 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 031b73d0 to 032b74eb has its CatchHandler @ 031b7160 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,__this_00,Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
        return;
      }
      if ((Nekki_SF2_GUI_Glyphs_Glyph_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_Glyphs_Glyph_o *)0x0) break;
      Nekki_SF2_GUI_Glyphs_Glyph__UpdateLineID
                ((Nekki_SF2_GUI_Glyphs_Glyph_o *)local_38.fields._current,
                 (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void ICFBFBMGPGC(string JLNPKGGFFDD)  [RVA 0x30B6DA8]
// Nekki.SF2.GUI.TextPic$$ICFBFBMGPGC @ RVA 0x30B6DA8

void Nekki_SF2_GUI_TextPic__ICFBFBMGPGC
               (Nekki_SF2_GUI_TextPic_o *__this,System_String_o *JLNPKGGFFDD,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  System_String_o *ODAMFBHJKIH;
  Nekki_SF2_GUI_StrikeThroughTextLine_o *pNVar3;
  UnityEngine_Transform_o *JJHEGPBBMLG;
  System_Action_o *pSVar4;
  System_Predicate_Glyph__o **ppSVar5;
  UnityEngine_Object_o *x;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Predicate_Glyph__o *match;
  System_String_o *x_00;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o HCPAAIJOOKK;
  System_String_o *local_38;
  
                    /* try { // try from 031b6db8 to 032b6dbf has its CatchHandler @ 031b7088 */
  local_38 = JLNPKGGFFDD;
  if ((DAT_04566203 & 1) == 0) {
                    /* try { // try from 031b6dd0 to 032b6ddb has its CatchHandler @ 031b6e9c */
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<StrikeThroughTextLine>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_Find__);
                    /* try { // try from 031b6de8 to 032b6e03 has its CatchHandler @ 031b6eb4 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Predicate<Glyph>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
                    /* try { // try from 031b6e18 to 032b6e23 has its CatchHandler @ 031b6eb0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextPic_<>c_HHPLKKIOCKH__);
                    /* try { // try from 031b6e24 to 032b6e33 has its CatchHandler @ 031b6ea8 */
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_<>c_TypeInfo);
    DAT_04566203 = 1;
  }
                    /* try { // try from 031b6e38 to 032b6e57 has its CatchHandler @ 031b6eac */
  if (JLNPKGGFFDD == (System_String_o *)0x0) {
    JLNPKGGFFDD = string_TypeInfo->static_fields->Empty;
    local_38 = JLNPKGGFFDD;
  }
  bVar2 = UnityEngine_UI_Text__get_supportRichText
                    ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  if (bVar2) {
                    /* try { // try from 031b6e6c to 032b6e77 has its CatchHandler @ 031b6ea4 */
    ODAMFBHJKIH = AEGOLGIJEBI__FPLAOOJFKGJ(JLNPKGGFFDD,(MethodInfo *)0x0);
                    /* try { // try from 031b6e78 to 032b6e97 has its CatchHandler @ 031b6ea0 */
    x_00 = (__this->fields)._KOKCPBMJANE_k__BackingField;
    local_38 = ODAMFBHJKIH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 031b6e98 to 032b6ec7 has its CatchHandler @ 031b68b4 */
                    /* catch() { ... } // from try @ 031b6dd0 with catch @ 031b6e9c */
                    /* catch() { ... } // from try @ 031b6e78 with catch @ 031b6ea0 */
                    /* catch() { ... } // from try @ 031b6e6c with catch @ 031b6ea4 */
    ppSVar1 = &(__this->fields)._KOKCPBMJANE_k__BackingField;
                    /* catch() { ... } // from try @ 031b6e24 with catch @ 031b6ea8 */
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b6e38 with catch @ 031b6eac */
                    /* catch() { ... } // from try @ 031b6e18 with catch @ 031b6eb0 */
                    /* catch() { ... } // from try @ 031b6de8 with catch @ 031b6eb4 */
    if ((bVar2) && (bVar2 = AEGOLGIJEBI__PJANGFCAOLJ(ODAMFBHJKIH,(MethodInfo *)0x0), bVar2)) {
                    /* try { // try from 031b6ec8 to 032b6edf has its CatchHandler @ 031b7070 */
      pNVar3 = (Nekki_SF2_GUI_StrikeThroughTextLine_o *)
               UnityEngine_Component__GetComponentInChildren<object>
                         ((UnityEngine_Component_o *)__this,
                          Method_UnityEngine_Component_GetComponentInChildren<StrikeThroughTextLine>__
                         );
      if (pNVar3 == (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0) {
        JJHEGPBBMLG = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 031b6ee8 to 032b6eeb has its CatchHandler @ 031b7064 */
                    /* try { // try from 031b6eec to 032b6ef7 has its CatchHandler @ 031b705c */
        if ((Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031b6efc to 032b6f17 has its CatchHandler @ 031b706c */
          thunk_FUN_01ba7564(Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo);
        }
        pNVar3 = Nekki_SF2_GUI_StrikeThroughTextLine__Instantiate(JJHEGPBBMLG,(MethodInfo *)0x0);
      }
      *ppSVar1 = (System_String_o *)pNVar3;
                    /* try { // try from 031b6f1c to 032b6f2b has its CatchHandler @ 031b7058 */
      thunk_FUN_01c20e04(ppSVar1);
    }
    pNVar3 = (Nekki_SF2_GUI_StrikeThroughTextLine_o *)*ppSVar1;
    if (pNVar3 != (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0) {
                    /* try { // try from 031b6f2c to 032b7023 has its CatchHandler @ 031b68b4 */
      HCPAAIJOOKK.fields.r =
           (*(__this->klass->vtable)._22_get_color.methodPtr)
                     (__this,(__this->klass->vtable)._22_get_color.method);
      HCPAAIJOOKK.fields.g = (float)in_s1;
      HCPAAIJOOKK.fields.a = (float)in_s3;
      HCPAAIJOOKK.fields.b = (float)in_s2;
      Nekki_SF2_GUI_StrikeThroughTextLine__ParseText(pNVar3,&local_38,HCPAAIJOOKK,(MethodInfo *)0x0)
      ;
    }
    pSVar4 = (__this->fields).NFECDKAEFJL;
    if (pSVar4 != (System_Action_o *)0x0) {
      method_00 = (MethodInfo *)0x1;
      Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__CJEEDJHKDBE
                ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar4,&local_38,true,in_x3);
      Nekki_SF2_GUI_TextPic__ParseGlyhs(__this,&local_38,method_00);
      __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
      if ((Nekki_SF2_GUI_TextPic_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = Nekki_SF2_GUI_TextPic_<>c_TypeInfo->static_fields->__9__51_0;
      if (match == (System_Predicate_Glyph__o *)0x0) {
        if ((Nekki_SF2_GUI_TextPic_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        match = (System_Predicate_Glyph__o *)thunk_FUN_01bda818(System_Predicate<Glyph>_TypeInfo);
        System_Predicate<object>___ctor();
        ppSVar5 = &Nekki_SF2_GUI_TextPic_<>c_TypeInfo->static_fields->__9__51_0;
        *ppSVar5 = match;
        thunk_FUN_01c20e04(ppSVar5,match);
      }
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        x = (UnityEngine_Object_o *)
            System_Collections_Generic_List<object>__Find
                      (__this_00,(System_Predicate_T__o *)match,
                       Method_System_Collections_Generic_List<Glyph>_Find__);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
                    /* try { // try from 031b7024 to 032b7027 has its CatchHandler @ 031b7084 */
                    /* try { // try from 031b7028 to 032b702f has its CatchHandler @ 031b68b4 */
                    /* try { // try from 031b7030 to 032b7037 has its CatchHandler @ 031b7068 */
        bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 031b7038 to 032b7047 has its CatchHandler @ 031b68b4 */
        *(bool *)&(__this->fields).POHAMNFPKNM = bVar2;
        return;
      }
    }
  }
  else {
    pSVar4 = (__this->fields).NFECDKAEFJL;
    if (pSVar4 != (System_Action_o *)0x0) {
                    /* try { // try from 031b7048 to 032b7057 has its CatchHandler @ 031b7060 */
      Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__CJEEDJHKDBE
                ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar4,&local_38,true,in_x3);
                    /* catch() { ... } // from try @ 031b6f1c with catch @ 031b7058 */
                    /* catch() { ... } // from try @ 031b6eec with catch @ 031b705c */
                    /* catch() { ... } // from try @ 031b7048 with catch @ 031b7060 */
                    /* catch() { ... } // from try @ 031b6ee8 with catch @ 031b7064 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031b7030 with catch @ 031b7068 */
  FUN_01bab8c8();
}


// ===== private void ELMFBJIPKHJ(bool CNHLCHHDHCF = True)  [RVA 0x30B45A0]
// Nekki.SF2.GUI.TextPic$$ELMFBJIPKHJ @ RVA 0x30B45A0

void Nekki_SF2_GUI_TextPic__ELMFBJIPKHJ
               (Nekki_SF2_GUI_TextPic_o *__this,bool CNHLCHHDHCF,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  uint uVar2;
  bool bVar3;
  System_Object_array *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *y;
  Nekki_SF2_GUI_TextDebugger_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *pNVar6;
  Nekki_SF2_GUI_Glyphs_Glyph_o *__this_01;
  uint uVar7;
  
  if ((DAT_04566204 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<Glyph>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_Clear__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566204 = 1;
  }
  pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                     ((UnityEngine_Component_o *)__this,true,
                      Method_UnityEngine_Component_GetComponentsInChildren<Glyph>__);
  if (pSVar4 != (System_Object_array *)0x0) {
    uVar2 = (uint)pSVar4->max_length;
    if (0 < (int)uVar2) {
      uVar7 = 0;
      do {
        if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        __this_01 = (Nekki_SF2_GUI_Glyphs_Glyph_o *)pSVar4->m_Items[(int)uVar7];
        if ((__this_01 == (Nekki_SF2_GUI_Glyphs_Glyph_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_031b4720;
        pUVar5 = UnityEngine_Transform__get_parent(pUVar5,(MethodInfo *)0x0);
        y = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        method_00 = (MethodInfo *)0x0;
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)y,
                           (MethodInfo *)0x0);
        if (!bVar3) {
          if (CNHLCHHDHCF) {
            __this_00 = (__this->fields).IHEKNEDMHDK;
            if (__this_00 == (Nekki_SF2_GUI_TextDebugger_o *)0x0) goto LAB_031b4720;
            Nekki_SF2_GUI_TextPic_ABOHOFBMBHP__ECKFHNINNIN
                      ((Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)__this_00,__this_01,method_00);
          }
          else {
            Nekki_SF2_GUI_Glyphs_Glyph__Destroy(__this_01,(MethodInfo *)0x0);
          }
        }
        uVar2 = (uint)pSVar4->max_length;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar2);
    }
    pNVar6 = (__this->fields).NMHDAIIIHFP;
    if (pNVar6 != (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)0x0) {
      length = *(int32_t *)&pNVar6[1].klass;
      iVar1 = *(int *)((long)&pNVar6[1].klass + 4);
      *(undefined4 *)&pNVar6[1].klass = 0;
      *(int *)((long)&pNVar6[1].klass + 4) = iVar1 + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pNVar6->fields).CNFAHCPFONL,0,length,
                            (MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_031b4720:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GEDECBAJOBH()  [RVA 0x30B7A30]
// Nekki.SF2.GUI.TextPic$$GEDECBAJOBH @ RVA 0x30B7A30

void Nekki_SF2_GUI_TextPic__GEDECBAJOBH(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Action_o *pSVar3;
  System_Collections_Generic_List_Bounds__o *GAPOMBJDGMG;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566205 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    DAT_04566205 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
  *(undefined4 *)((long)&(__this->fields).POHAMNFPKNM + 4) = 0x3f800000;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,__this_00,Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__),
          bVar1) {
      Nekki_SF2_GUI_TextPic__IHAENEAJGBH
                (__this,(Nekki_SF2_GUI_Glyphs_Glyph_o *)local_48.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    iVar2 = UnityEngine_UI_Text__get_horizontalOverflow
                      ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
    if (iVar2 == 0) {
      pSVar3 = (__this->fields).NFECDKAEFJL;
      if (pSVar3 == (System_Action_o *)0x0) goto LAB_031b7b90;
      iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__HHLLNMFOMGD
                        ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar3,method_00);
      if (0 < iVar2) {
        GAPOMBJDGMG = OMANDMDCGMF__GNPDINFDHKG
                                ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL
                                 ,(MethodInfo *)0x0);
        Nekki_SF2_GUI_TextPic__IMOIFLIIIAI(__this,GAPOMBJDGMG,in_x2);
        if (*(char *)&(__this->fields).POHAMNFPKNM != '\0') {
          pSVar3 = (__this->fields).NFECDKAEFJL;
          UVar5 = Nekki_SF2_GUI_TextPic__get_GenerationGeometryBounds(__this,method_01);
          iVar2 = UnityEngine_UI_Text__get_alignment
                            ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
          UVar5.fields.y = (float)((ulong)UVar5.fields >> 0x20);
          fVar4 = OMANDMDCGMF__AKJLNDMOICM
                            ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar3,
                             (System_Collections_Generic_IList_Bounds__o *)GAPOMBJDGMG,UVar5,iVar2,
                             (MethodInfo *)0x0);
          *(float *)((long)&(__this->fields).POHAMNFPKNM + 4) = fVar4;
        }
      }
    }
    return;
  }
LAB_031b7b90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private TextGenerationSettings GGKHBFKNNOC(Vector2 AEEBBHBIHIK)  [RVA 0x30B815C]
// Nekki.SF2.GUI.TextPic$$GGKHBFKNNOC @ RVA 0x30B815C

void Nekki_SF2_GUI_TextPic__GGKHBFKNNOC
               (UnityEngine_TextGenerationSettings_o *__return_storage_ptr__,
               Nekki_SF2_GUI_TextPic_o *__this,UnityEngine_Vector2_o AEEBBHBIHIK,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Font_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar5;
  UnityEngine_TextGenerationSettings_o local_138;
  System_Nullable_int__Fields local_d8;
  UnityEngine_Font_o *local_d0;
  UnityEngine_Color_Fields UStack_c8;
  UnityEngine_Vector2_Fields local_b0;
  UnityEngine_Vector2_Fields UStack_a8;
  bool_conflict local_a0;
  undefined7 uStack_9f;
  float local_90;
  bool_conflict bStack_8c;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined3 uStack_83;
  int32_t iStack_80;
  bool_conflict bStack_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((DAT_04566206 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566206 = 1;
  }
  local_d8.hasValue = false;
  local_d8._1_3_ = 0;
  local_d8.value = 0;
  UnityEngine_UI_Text__GetGenerationSettings
            (&local_138,(UnityEngine_UI_Text_o *)__this,AEEBBHBIHIK,(MethodInfo *)0x0);
  UStack_c8.b = local_138.fields.color.fields.b;
  UStack_c8.a = local_138.fields.color.fields.a;
  uStack_88 = local_138.fields._36_5_;
  local_90 = local_138.fields.lineSpacing;
  bStack_8c = local_138.fields.richText;
  uStack_8b = local_138.fields._33_3_;
  local_a0 = local_138.fields.generateOutOfBounds;
  uStack_9f = local_138.fields._89_7_;
  uStack_83 = local_138.fields.fontStyle._1_3_;
  iStack_80 = local_138.fields.textAnchor;
  bStack_7c = local_138.fields.alignByGeometry;
  UStack_c8.r = local_138.fields.color.fields.r;
  UStack_c8.g = local_138.fields.color.fields.g;
  local_d0 = local_138.fields.font;
  UStack_a8 = local_138.fields.pivot.fields;
  local_b0 = local_138.fields.generationExtents.fields;
  *(undefined1 *)&(__this->fields).MEIDNEHHHKI = 0;
  *(undefined4 *)((long)&(__this->fields).MEIDNEHHHKI + 4) = 0xffffffff;
  bVar2 = Nekki_SF2_GUI_TextPic__MCLPFBNCJIB(__this,method_00);
  uVar5 = local_138.fields._64_8_;
  if (bVar2) {
    local_d8 = (System_Nullable_int__Fields)Nekki_SF2_GUI_TextPic__LAGLMDPBDKN(__this,method_01);
    if (((ulong)local_d8 & 0xff) != 0) {
      *(undefined1 *)&(__this->fields).MEIDNEHHHKI = 1;
      iVar3 = System_Nullable<int>__get_Value
                        ((System_Nullable_int__o)&local_d8,Method_System_Nullable<int>_get_Value__);
      *(int32_t *)((long)&(__this->fields).MEIDNEHHHKI + 4) = iVar3;
      pUVar4 = UnityEngine_UI_Text__get_font((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      uVar5._0_4_ = 1;
      uVar5._4_4_ = 1;
      if (bVar2) {
        pUVar4 = UnityEngine_UI_Text__get_font((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Font_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = UnityEngine_Font__get_dynamic(pUVar4,(MethodInfo *)0x0);
        if (bVar2) {
          local_138.fields.fontSize = *(int32_t *)((long)&(__this->fields).MEIDNEHHHKI + 4);
          local_138.fields.resizeTextMinSize = 0;
          local_138.fields.resizeTextForBestFit = false;
          local_138.fields.resizeTextMaxSize = local_138.fields.fontSize;
          goto LAB_031b82fc;
        }
      }
      local_138.fields.resizeTextForBestFit = false;
    }
  }
LAB_031b82fc:
  (__return_storage_ptr__->fields).color.fields.r = UStack_c8.r;
  (__return_storage_ptr__->fields).color.fields.g = UStack_c8.g;
  (__return_storage_ptr__->fields).font = local_d0;
  (__return_storage_ptr__->fields).fontSize = local_138.fields.fontSize;
  (__return_storage_ptr__->fields).verticalOverflow = (int32_t)uVar5;
  (__return_storage_ptr__->fields).horizontalOverflow = SUB84(uVar5,4);
  (__return_storage_ptr__->fields).resizeTextForBestFit = local_138.fields.resizeTextForBestFit;
  *(undefined2 *)&(__return_storage_ptr__->fields).field_0x32 = local_138.fields._50_2_;
  (__return_storage_ptr__->fields).resizeTextMinSize = local_138.fields.resizeTextMinSize;
  (__return_storage_ptr__->fields).resizeTextMaxSize = local_138.fields.resizeTextMaxSize;
  (__return_storage_ptr__->fields).updateBounds = local_138.fields.updateBounds;
  *(undefined3 *)&(__return_storage_ptr__->fields).field_0x3d = local_138.fields._61_3_;
  (__return_storage_ptr__->fields).color.fields.b = UStack_c8.b;
  (__return_storage_ptr__->fields).color.fields.a = UStack_c8.a;
  *(ulong *)((long)&(__return_storage_ptr__->fields).fontStyle + 1) = CONCAT53(_iStack_80,uStack_83)
  ;
  (__return_storage_ptr__->fields).scaleFactor = (float)(int)uStack_88;
  (__return_storage_ptr__->fields).fontStyle = (int)(CONCAT35(uStack_83,uStack_88) >> 0x20);
  (__return_storage_ptr__->fields).lineSpacing = local_90;
  (__return_storage_ptr__->fields).richText = bStack_8c;
  *(undefined3 *)&(__return_storage_ptr__->fields).field_0x21 = uStack_8b;
  (__return_storage_ptr__->fields).generateOutOfBounds = local_a0;
  *(undefined7 *)&(__return_storage_ptr__->fields).field_0x59 = uStack_9f;
  (__return_storage_ptr__->fields).pivot.fields = UStack_a8;
  (__return_storage_ptr__->fields).generationExtents.fields = local_b0;
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== public Vector3 LocalAlignedTextMeshLastLineBounds_Anchored(TextAnchor POJKEOPHOAI)  [RVA 0x30B8380]
// Nekki.SF2.GUI.TextPic$$LocalAlignedTextMeshLastLineBounds_Anchored @ RVA 0x30B8380

/* WARNING: Type propagation algorithm not settling */

UnityEngine_Vector3_o
Nekki_SF2_GUI_TextPic__LocalAlignedTextMeshLastLineBounds_Anchored
          (Nekki_SF2_GUI_TextPic_o *__this,int32_t POJKEOPHOAI,MethodInfo *method)

{
  UnityEngine_Vector3_Fields UVar1;
  UnityEngine_Bounds_o local_60;
  UnityEngine_Bounds_o local_48;
  
  if ((DAT_04566207 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<Bounds>__);
    DAT_04566207 = 1;
  }
  DJNBJHPDKDP__KIKGKKGDCKK<Bounds>
            (&local_48,
             *(System_Collections_Generic_List_T__o **)
              &(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y,
             Method_DJNBJHPDKDP_KIKGKKGDCKK<Bounds>__);
  local_60.fields.m_Center.fields.z = local_48.fields.m_Center.fields.z;
  local_60.fields.m_Extents.fields.x = local_48.fields.m_Extents.fields.x;
  local_60.fields.m_Center.fields.x = local_48.fields.m_Center.fields.x;
  local_60.fields.m_Center.fields.y = local_48.fields.m_Center.fields.y;
  local_60.fields.m_Extents.fields.y = local_48.fields.m_Extents.fields.y;
  local_60.fields.m_Extents.fields.z = local_48.fields.m_Extents.fields.z;
  UVar1 = (UnityEngine_Vector3_Fields)
          OMANDMDCGMF__OIMANFCDDIJ(POJKEOPHOAI,&local_60,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar1;
}


// ===== private bool HOBJFEPMIGH()  [RVA 0x30B8404]
// Nekki.SF2.GUI.TextPic$$HOBJFEPMIGH @ RVA 0x30B8404

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_TextPic__HOBJFEPMIGH(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [12];
  int32_t iVar2;
  uint uVar3;
  System_Action_o *__this_00;
  UnityEngine_RectTransform_o *pUVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppObject *pIVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Rect_o UVar13;
  
  if ((DAT_04566208 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    DAT_04566208 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).NFECDKAEFJL;
  if ((__this_00 != (System_Action_o *)0x0) &&
     (pIVar5 = (__this_00->fields).super.super.m_target, pIVar5 != (Il2CppObject *)0x0)) {
    if (*(int *)&pIVar5[1].monitor < 1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031b8544 with catch @ 031b8554
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031b8500 with catch @ 031b8558
                        */
      return false;
    }
    iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__ILAMEAMIMMP
                      ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)__this_00,method);
    if (iVar2 == 0) {
      return false;
    }
    Nekki_SF2_GUI_TextPic__LKJOHANKEDP(__this,method_00);
    fVar10 = *(float *)((long)&(__this->fields)._CECMNNLFJKO_k__BackingField + 4);
    fVar11 = (__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields.z;
                    /* try { // try from 031b8478 to 032b84b7 has its CatchHandler @ 031b8478
                       catch() { ... } // from try @ 031b8478 with catch @ 031b8478
                       catch() { ... } // from try @ 031b854c with catch @ 031b8478
                       catch() { ... } // from try @ 031b8588 with catch @ 031b8478
                       catch() { ... } // from try @ 031b8658 with catch @ 031b8478 */
    pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar12 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        UVar13 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        uVar3 = UnityEngine_UI_Text__get_alignment
                          ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 031b84b8 to 032b84bf has its CatchHandler @ 031b8550 */
        if (uVar3 < 9) {
          fVar8 = UVar13.fields.m_Height * 0.5;
          uVar3 = 1 << (ulong)(uVar3 & 0x1f);
          fVar9 = UVar12.fields.m_YMin + UVar12.fields.m_Height * 0.5;
          fVar6 = fVar9 + fVar8;
          fVar7 = fVar10 + fVar11;
          if ((uVar3 & 7) == 0) {
            fVar9 = fVar9 - fVar8;
            fVar10 = fVar10 - fVar11;
            if ((uVar3 & 0x38) == 0) {
              fVar9 = fVar9 - fVar10;
            }
            else {
                    /* try { // try from 031b8500 to 032b8533 has its CatchHandler @ 031b8558 */
              fVar9 = ((fVar6 - fVar7) - (fVar10 - fVar9)) * 0.5;
            }
          }
          else {
            fVar9 = fVar6 - fVar7;
          }
        }
        else {
          fVar9 = 0.0;
        }
        if (ABS(fVar9) <= 0.01) {
          return false;
        }
        auVar1._4_8_ = 0;
        auVar1._0_4_ = fVar9;
                    /* try { // try from 031b8544 to 032b8547 has its CatchHandler @ 031b8554 */
                    /* try { // try from 031b8548 to 032b854b has its CatchHandler @ 031b854c */
        OMANDMDCGMF__CKOPLFDLFPL
                  ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                   (UnityEngine_Vector3_o)(auVar1 << 0x20),(MethodInfo *)0x0);
        return true;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031b8548 with catch @ 031b854c
                       try { // try from 031b854c to 032b856f has its CatchHandler @ 031b8478 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031b84b8 with catch @ 031b8550
                        */
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031b8570 to 032b8587 has its CatchHandler @ 031b8650 */
  FUN_01bab8c8();
}


// ===== public bool get_IsUsedSpecialBestFit()  [RVA 0x30B8D40]
// Nekki.SF2.GUI.TextPic$$get_IsUsedSpecialBestFit @ RVA 0x30B8D40

bool Nekki_SF2_GUI_TextPic__get_IsUsedSpecialBestFit
               (Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  return (bool)*(undefined1 *)&(__this->fields).MEIDNEHHHKI;
}


// ===== private void KBIGLOGHNNM()  [RVA 0x30B8D48]
// Nekki.SF2.GUI.TextPic$$KBIGLOGHNNM @ RVA 0x30B8D48

void Nekki_SF2_GUI_TextPic__KBIGLOGHNNM(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Action_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *extraout_x1;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566209 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    DAT_04566209 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  lVar3 = *(long *)&(__this->fields).LINICNCLMBA;
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x15) == '\0')) {
    return;
  }
  __this_00 = (__this->fields).NFECDKAEFJL;
  if (__this_00 != (System_Action_o *)0x0) {
    iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__ILAMEAMIMMP
                      ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)__this_00,method);
    lVar3 = *(long *)&(__this->fields).LINICNCLMBA;
    if (iVar2 == 1) {
      if (lVar3 == 0) goto LAB_031b8e98;
      if (*(char *)(lVar3 + 0x14) == '\0') {
        return;
      }
    }
    else if (lVar3 == 0) goto LAB_031b8e98;
    fVar6 = *(float *)(lVar3 + 0x10);
    fVar4 = OMANDMDCGMF__LAGJEPOKPHD
                      ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                       (MethodInfo *)0x0);
    fVar5 = UnityEngine_UI_Text__get_lineSpacing((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      if (fVar5 <= 1.0) {
        fVar5 = 1.0;
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,__this_01,Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
          return;
        }
        if (local_48.fields._current == (Il2CppObject *)0x0) break;
        if (local_48.fields._current[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        BOGDEGPCIJI__IAIOGBPAABH
                  ((BOGDEGPCIJI_o *)local_48.fields._current[3].klass,fVar6 * fVar4 * fVar5,
                   (MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_031b8e98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_ReplaсeImagePath(string CJNHFNHJHPE)  [RVA 0x30B8F1C]
// Nekki.SF2.GUI.TextPic$$set_ReplaсeImagePath @ RVA 0x30B8F1C

void Nekki_SF2_GUI_TextPic__set_ReplaсeImagePath
               (Nekki_SF2_GUI_TextPic_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OAFKPIMLHJE_k__BackingField =
       (System_Collections_Generic_List_Bounds__o *)CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields)._OAFKPIMLHJE_k__BackingField);
  return;
}


// ===== public void SetLabelButtonOwner(LabelButton ACBNKLODJEG)  [RVA 0x30B8F2C]
// Nekki.SF2.GUI.TextPic$$SetLabelButtonOwner @ RVA 0x30B8F2C

void Nekki_SF2_GUI_TextPic__SetLabelButtonOwner
               (Nekki_SF2_GUI_TextPic_o *__this,LabelButton_o *ACBNKLODJEG,MethodInfo *method)

{
  (__this->fields).FitImageLineHeightParam =
       (Nekki_SF2_GUI_TextPic_FitImageLineHeightParams_o *)ACBNKLODJEG;
  thunk_FUN_01c20e04(&(__this->fields).FitImageLineHeightParam);
  return;
}


// ===== private void POOAGHHGIFD()  [RVA 0x30B6CF4]
// Nekki.SF2.GUI.TextPic$$POOAGHHGIFD @ RVA 0x30B6CF4

void Nekki_SF2_GUI_TextPic__POOAGHHGIFD(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  return;
}


// ===== public int get_GeneratedFontSize()  [RVA 0x30B8F3C]
// Nekki.SF2.GUI.TextPic$$get_GeneratedFontSize @ RVA 0x30B8F3C

int32_t Nekki_SF2_GUI_TextPic__get_GeneratedFontSize
                  (Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  return *(int32_t *)((long)&(__this->fields).MEIDNEHHHKI + 4);
}


// ===== private void LKJOHANKEDP()  [RVA 0x30B8574]
// Nekki.SF2.GUI.TextPic$$LKJOHANKEDP @ RVA 0x30B8574

void Nekki_SF2_GUI_TextPic__LKJOHANKEDP(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  UnityEngine_UI_Button_Fields *pUVar5;
  Il2CppObject *KAHAJHDGCFF;
  bool bVar6;
  bool bVar7;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Bounds__o *pSVar8;
  Il2CppObject *pIVar9;
  Il2CppMethodPointer *ppIVar10;
  System_Collections_Generic_HashSet_char__o *HOJFIEJGIHA;
  System_Collections_Generic_HashSet_char__o *NINLELPNDEB;
  System_Collections_Generic_HashSet_char__o *HLBAFDGKOMM;
  undefined8 uVar11;
  long lVar12;
  System_Action_o *pSVar13;
  UnityEngine_Bounds_array *pUVar14;
  Il2CppClass *pIVar15;
  LabelButton_o *pLVar16;
  ulong uVar17;
  int32_t *piVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  
                    /* try { // try from 031b8588 to 032b863f has its CatchHandler @ 031b8478 */
  if ((DAT_0456620a & 1) == 0) {
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
    DAT_0456620a = 1;
  }
  local_d0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d0.fields._index = 0;
  local_d0.fields._version = 0;
  local_d0.fields._current = (Il2CppObject *)0x0;
  lVar12 = *(long *)&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.z;
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    /* try { // try from 031b8640 to 032b864f has its CatchHandler @ 031b8650 */
    lVar12 = *(long *)&(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y;
    if (lVar12 != 0) {
                    /* catch() { ... } // from try @ 031b8570 with catch @ 031b8650
                       catch() { ... } // from try @ 031b8640 with catch @ 031b8650 */
                    /* try { // try from 031b8654 to 032b8657 has its CatchHandler @ 031b8660 */
                    /* try { // try from 031b8658 to 032b8663 has its CatchHandler @ 031b8478 */
      *(undefined4 *)(lVar12 + 0x18) = 0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031b8654 with catch @ 031b8660
                        */
      bVar6 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
      pSVar13 = (__this->fields).NFECDKAEFJL;
      if ((pSVar13 != (System_Action_o *)0x0) &&
         (__this_00 = (System_Collections_Generic_List_object__o *)
                      (pSVar13->fields).super.super.method,
         __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&local_b8,__this_00,
                   Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
        local_d0.fields._current = (Il2CppObject *)CONCAT44(fStack_a4,local_a8);
        local_dc = 0.0;
        local_e0 = 0.0;
        local_e4 = 0.0;
        local_d4 = 0.0;
        fVar23 = 0.0;
        fVar31 = 0.0;
        fVar29 = 0.0;
        fVar21 = 0.0;
        fVar24 = 0.0;
        fVar30 = 0.0;
        local_d8 = 0.0;
        fVar26 = 0.0;
        do {
          bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_d0,
                             Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__
                            );
          KAHAJHDGCFF = local_d0.fields._current;
          if (!bVar7) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_d0,
                       Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__
                      );
            pLVar16 = (__this->fields).JPDGLLDKPHC;
            *(float *)((long)&(__this->fields).GlyphPrefabs + 4) = fVar26;
            (__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.y = fVar30;
            *(float *)&(__this->fields).ForceUseAlignedBestFit = local_d8;
            (__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z = fVar24;
            (__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.x = fVar21;
            (__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields.y = fVar29;
            (__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.x = local_d4;
            (__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields.z = fVar31;
            (__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.x = fVar23;
            *(float *)&(__this->fields)._CECMNNLFJKO_k__BackingField = local_e4;
            *(float *)((long)&(__this->fields)._CECMNNLFJKO_k__BackingField + 4) = local_e0;
            (__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields.x = local_dc;
            if (pLVar16 != (LabelButton_o *)0x0) {
              pUVar5 = &(pLVar16->fields).super.super.super;
              uVar11._0_4_ = (pUVar5->super).m_Navigation.fields.m_Mode;
              uVar11._4_1_ = (pUVar5->super).m_Navigation.fields.m_WrapAround;
              uVar11._5_3_ = *(undefined3 *)&(pUVar5->super).m_Navigation.fields.field_0x5;
              (*(code *)(pLVar16->fields).super.super.super.super.super.super.
                        m_CancellationTokenSource)
                        ((pLVar16->fields).super.super.super.super.m_Navigation.fields.
                         m_SelectOnLeft,uVar11);
            }
            return;
          }
          OMANDMDCGMF__MLCFOLPGDBO
                    ((UnityEngine_Bounds_o *)&local_b8,
                     (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                     (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)local_d0.fields._current,
                     (System_Collections_Generic_HashSet_char__o *)0x0,
                     (System_Collections_Generic_HashSet_char__o *)0x0,
                     (System_Collections_Generic_HashSet_char__o *)0x0,(MethodInfo *)0x0);
          lVar12 = Method_System_Collections_Generic_List<Bounds>_Add__;
          fVar25 = local_b8 - fStack_ac;
          fVar27 = fStack_b4 - local_a8;
          fVar28 = fStack_b0 - fStack_a4;
          fVar32 = fVar26 - fVar30;
          if (fVar25 <= fVar26 - fVar30) {
            fVar32 = fVar25;
          }
          fVar19 = local_d8 - fVar24;
          if (fVar27 <= local_d8 - fVar24) {
            fVar19 = fVar27;
          }
          fVar20 = local_d4 - fVar21;
          if (fVar28 <= local_d4 - fVar21) {
            fVar20 = fVar28;
          }
          fVar22 = fVar30 + fVar26;
          if (fVar30 + fVar26 <= fVar25) {
            fVar22 = fVar25;
          }
          fVar26 = fVar24 + local_d8;
          if (fVar24 + local_d8 <= fVar27) {
            fVar26 = fVar27;
          }
          fVar30 = fVar21 + local_d4;
          if (fVar21 + local_d4 <= fVar28) {
            fVar30 = fVar28;
          }
          fVar21 = (fVar22 - fVar32) * 0.5;
          fVar24 = (fVar26 - fVar19) * 0.5;
          fVar27 = local_b8 + fStack_ac;
          fVar25 = (fVar30 - fVar20) * 0.5;
          fVar26 = (fVar32 + fVar21) - fVar21;
          fVar30 = fStack_b4 + local_a8;
          fVar21 = fVar21 + fVar32 + fVar21;
          local_d8 = (fVar19 + fVar24) - fVar24;
          fVar32 = fStack_b0 + fStack_a4;
          fVar24 = fVar24 + fVar19 + fVar24;
          local_d4 = (fVar20 + fVar25) - fVar25;
          if (fVar27 <= fVar26) {
            fVar26 = fVar27;
          }
          if (fVar30 <= local_d8) {
            local_d8 = fVar30;
          }
          if (fVar32 <= local_d4) {
            local_d4 = fVar32;
          }
          fVar25 = fVar25 + fVar20 + fVar25;
          if (fVar21 <= fVar27) {
            fVar21 = fVar27;
          }
          if (fVar24 <= fVar30) {
            fVar24 = fVar30;
          }
          pSVar8 = *(System_Collections_Generic_List_Bounds__o **)
                    &(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.z;
          if (fVar25 <= fVar32) {
            fVar25 = fVar32;
          }
          fVar30 = (fVar21 - fVar26) * 0.5;
          fVar24 = (fVar24 - local_d8) * 0.5;
          fVar21 = (fVar25 - local_d4) * 0.5;
          fVar26 = fVar26 + fVar30;
          local_d8 = local_d8 + fVar24;
          local_d4 = local_d4 + fVar21;
          if (pSVar8 == (System_Collections_Generic_List_Bounds__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar14 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pUVar14 == (UnityEngine_Bounds_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar4 = (pSVar8->fields)._size;
          if (uVar4 < (uint)pUVar14->max_length) {
            (pSVar8->fields)._size = uVar4 + 1;
            pUVar14->m_Items[(int)uVar4].fields.m_Center.fields.x = local_b8;
            pUVar14->m_Items[(int)uVar4].fields.m_Center.fields.y = fStack_b4;
            pUVar14->m_Items[(int)uVar4].fields.m_Center.fields.z = fStack_b0;
            pUVar14->m_Items[(int)uVar4].fields.m_Extents.fields.x = fStack_ac;
            pUVar14->m_Items[(int)uVar4].fields.m_Extents.fields.y = local_a8;
            pUVar14->m_Items[(int)uVar4].fields.m_Extents.fields.z = fStack_a4;
          }
          else {
            System_Collections_Generic_List<Bounds>__AddWithResize
                      (pSVar8,(UnityEngine_Bounds_o *)&local_b8,
                       *(MethodInfo_269FCFC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          pSVar13 = (__this->fields).NFECDKAEFJL;
          if (bVar6) {
            pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar15 = pIVar9->klass;
            uVar1._0_1_ = (pIVar15->_2).rank;
            uVar1._1_1_ = (pIVar15->_2).minimumAlignment;
            uVar17 = (ulong)uVar1;
            if (uVar17 != 0) {
              piVar18 = &((pIVar15->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                  ppIVar10 = &pIVar15->vtable[*piVar18 + 6].methodPtr;
                  goto LAB_031b8928;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            ppIVar10 = (Il2CppMethodPointer *)FUN_01b81914(pIVar9,DFLJPJMIMHI_TypeInfo,6);
LAB_031b8928:
            HOJFIEJGIHA = (System_Collections_Generic_HashSet_char__o *)
                          (**ppIVar10)(pIVar9,(MethodInfo *)ppIVar10[1]);
            pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar15 = pIVar9->klass;
            uVar2._0_1_ = (pIVar15->_2).rank;
            uVar2._1_1_ = (pIVar15->_2).minimumAlignment;
            uVar17 = (ulong)uVar2;
            if (uVar17 != 0) {
              piVar18 = &((pIVar15->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                  ppIVar10 = &pIVar15->vtable[*piVar18].methodPtr;
                  goto LAB_031b8994;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            ppIVar10 = (Il2CppMethodPointer *)FUN_01b81914(pIVar9,DFLJPJMIMHI_TypeInfo,0);
LAB_031b8994:
            NINLELPNDEB = (System_Collections_Generic_HashSet_char__o *)
                          (**ppIVar10)(pIVar9,(MethodInfo *)ppIVar10[1]);
            if (bVar6) {
              pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                 (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
              if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pIVar15 = pIVar9->klass;
              uVar3._0_1_ = (pIVar15->_2).rank;
              uVar3._1_1_ = (pIVar15->_2).minimumAlignment;
              uVar17 = (ulong)uVar3;
              if (uVar17 != 0) {
                piVar18 = &((pIVar15->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                      (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                    ppIVar10 = &pIVar15->vtable[*piVar18 + 7].methodPtr;
                    goto LAB_031b8a18;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              ppIVar10 = (Il2CppMethodPointer *)FUN_01b81914(pIVar9,DFLJPJMIMHI_TypeInfo,7);
LAB_031b8a18:
              HLBAFDGKOMM = (System_Collections_Generic_HashSet_char__o *)
                            (**ppIVar10)(pIVar9,(MethodInfo *)ppIVar10[1]);
            }
            else {
              HLBAFDGKOMM = (System_Collections_Generic_HashSet_char__o *)0x0;
            }
          }
          else {
            HLBAFDGKOMM = (System_Collections_Generic_HashSet_char__o *)0x0;
            NINLELPNDEB = (System_Collections_Generic_HashSet_char__o *)0x0;
            HOJFIEJGIHA = (System_Collections_Generic_HashSet_char__o *)0x0;
          }
          OMANDMDCGMF__MLCFOLPGDBO
                    ((UnityEngine_Bounds_o *)&local_b8,
                     (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar13,
                     (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)KAHAJHDGCFF,HOJFIEJGIHA,NINLELPNDEB,
                     HLBAFDGKOMM,(MethodInfo *)0x0);
          lVar12 = Method_System_Collections_Generic_List<Bounds>_Add__;
          fVar25 = local_b8 - fStack_ac;
          fVar27 = fStack_b4 - local_a8;
          fVar28 = fStack_b0 - fStack_a4;
          fVar32 = local_e4 - fVar29;
          if (fVar25 <= local_e4 - fVar29) {
            fVar32 = fVar25;
          }
          fVar19 = local_e0 - fVar31;
          if (fVar27 <= local_e0 - fVar31) {
            fVar19 = fVar27;
          }
          fVar20 = local_dc - fVar23;
          if (fVar28 <= local_dc - fVar23) {
            fVar20 = fVar28;
          }
          fVar22 = fVar29 + local_e4;
          if (fVar29 + local_e4 <= fVar25) {
            fVar22 = fVar25;
          }
          fVar29 = fVar31 + local_e0;
          if (fVar31 + local_e0 <= fVar27) {
            fVar29 = fVar27;
          }
          fVar31 = fVar23 + local_dc;
          if (fVar23 + local_dc <= fVar28) {
            fVar31 = fVar28;
          }
          fVar23 = (fVar22 - fVar32) * 0.5;
          fVar25 = (fVar29 - fVar19) * 0.5;
          fVar29 = local_b8 + fStack_ac;
          fVar27 = (fVar31 - fVar20) * 0.5;
          local_e4 = (fVar32 + fVar23) - fVar23;
          fVar31 = fStack_b4 + local_a8;
          fVar23 = fVar23 + fVar32 + fVar23;
          local_e0 = (fVar19 + fVar25) - fVar25;
          fVar32 = fStack_b0 + fStack_a4;
          fVar25 = fVar25 + fVar19 + fVar25;
          local_dc = (fVar20 + fVar27) - fVar27;
          if (fVar29 <= local_e4) {
            local_e4 = fVar29;
          }
          if (fVar31 <= local_e0) {
            local_e0 = fVar31;
          }
          if (fVar32 <= local_dc) {
            local_dc = fVar32;
          }
          fVar27 = fVar27 + fVar20 + fVar27;
          if (fVar23 <= fVar29) {
            fVar23 = fVar29;
          }
          if (fVar25 <= fVar31) {
            fVar25 = fVar31;
          }
          pSVar8 = *(System_Collections_Generic_List_Bounds__o **)
                    &(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y;
          if (fVar27 <= fVar32) {
            fVar27 = fVar32;
          }
          fVar29 = (fVar23 - local_e4) * 0.5;
          fVar31 = (fVar25 - local_e0) * 0.5;
          local_e4 = local_e4 + fVar29;
          fVar23 = (fVar27 - local_dc) * 0.5;
          local_e0 = local_e0 + fVar31;
          local_dc = local_dc + fVar23;
          if (pSVar8 == (System_Collections_Generic_List_Bounds__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar14 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pUVar14 == (UnityEngine_Bounds_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar4 = (pSVar8->fields)._size;
          if (uVar4 < (uint)pUVar14->max_length) {
            (pSVar8->fields)._size = uVar4 + 1;
            pUVar14->m_Items[(int)uVar4].fields.m_Center.fields.x = local_b8;
            pUVar14->m_Items[(int)uVar4].fields.m_Center.fields.y = fStack_b4;
            pUVar14->m_Items[(int)uVar4].fields.m_Center.fields.z = fStack_b0;
            pUVar14->m_Items[(int)uVar4].fields.m_Extents.fields.x = fStack_ac;
            pUVar14->m_Items[(int)uVar4].fields.m_Extents.fields.y = local_a8;
            pUVar14->m_Items[(int)uVar4].fields.m_Extents.fields.z = fStack_a4;
          }
          else {
            System_Collections_Generic_List<Bounds>__AddWithResize
                      (pSVar8,(UnityEngine_Bounds_o *)&local_b8,
                       *(MethodInfo_269FCFC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x30B8F44]
// Nekki.SF2.GUI.TextPic$$.cctor @ RVA 0x30B8F44

void Nekki_SF2_GUI_TextPic___cctor(MethodInfo *method)

{
  UnityEngine_UIVertex_array *pUVar1;
  
  if ((DAT_0456620b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_TypeInfo);
    FUN_01bab630(&UnityEngine_UIVertex___TypeInfo);
    DAT_0456620b = 1;
  }
  pUVar1 = (UnityEngine_UIVertex_array *)FUN_01bab718(UnityEngine_UIVertex___TypeInfo,4);
  Nekki_SF2_GUI_TextPic_TypeInfo->static_fields->FDHHLOLJNFE = pUVar1;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_TextPic_TypeInfo->static_fields,pUVar1);
  return;
}


// ===== private void AMMHDMOMDIM(VertexHelper BKAFIEMJJGM)  [RVA 0x30B6AD4]
// Nekki.SF2.GUI.TextPic$$AMMHDMOMDIM @ RVA 0x30B6AD4

void Nekki_SF2_GUI_TextPic__AMMHDMOMDIM
               (Nekki_SF2_GUI_TextPic_o *__this,UnityEngine_UI_VertexHelper_o *BKAFIEMJJGM,
               MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_object__o *__this_00;
  IHIFNKAMALG_o *__this_01;
  System_Action_o *pSVar2;
  Il2CppObject *pIVar3;
  uint OGPGLGPMEPD;
  uint uVar4;
  
  if ((DAT_0456620c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_TypeInfo);
    DAT_0456620c = 1;
  }
  if (BKAFIEMJJGM != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(BKAFIEMJJGM,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).NFECDKAEFJL;
    if ((pSVar2 != (System_Action_o *)0x0) &&
       (pIVar3 = (pSVar2->fields).super.super.m_target, pIVar3 != (Il2CppObject *)0x0)) {
      uVar1 = *(uint *)&pIVar3[1].monitor;
      if ((int)uVar1 < 1) {
        return;
      }
      OGPGLGPMEPD = 0;
      uVar4 = 1;
      do {
        __this_00 = (System_Collections_Generic_List_object__o *)
                    (pSVar2->fields).super.super.m_target;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) break;
        __this_01 = (IHIFNKAMALG_o *)
                    System_Collections_Generic_List<object>__get_Item
                              (__this_00,uVar4 - 1,
                               Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
        if ((Nekki_SF2_GUI_TextPic_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_TextPic_TypeInfo);
        }
        if (__this_01 == (IHIFNKAMALG_o *)0x0) break;
        IHIFNKAMALG__MGFGGIPGFNJ
                  (__this_01,Nekki_SF2_GUI_TextPic_TypeInfo->static_fields->FDHHLOLJNFE,OGPGLGPMEPD,
                   (MethodInfo *)0x0);
        if (OGPGLGPMEPD == 3) {
          if ((Nekki_SF2_GUI_TextPic_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_UI_VertexHelper__AddUIVertexQuad
                    (BKAFIEMJJGM,Nekki_SF2_GUI_TextPic_TypeInfo->static_fields->FDHHLOLJNFE,
                     (MethodInfo *)0x0);
        }
        if (uVar1 == uVar4) {
          return;
        }
        pSVar2 = (__this->fields).NFECDKAEFJL;
        OGPGLGPMEPD = uVar4 & 3;
        uVar4 = uVar4 + 1;
      } while (pSVar2 != (System_Action_o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<ResolutionImage> GetPresentedQuadImages(bool CHBLGJGLBAE = False)  [RVA 0x30B8FB8]
// Nekki.SF2.GUI.TextPic$$GetPresentedQuadImages @ RVA 0x30B8FB8

System_Collections_Generic_List_ResolutionImage__o *
Nekki_SF2_GUI_TextPic__GetPresentedQuadImages
          (Nekki_SF2_GUI_TextPic_o *__this,bool CHBLGJGLBAE,MethodInfo *method)

{
  int32_t capacity;
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_List_ResolutionImage__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *pNVar5;
  Nekki_SF2_GUI_ResolutionImage_array *pNVar6;
  UnityEngine_Object_o *x;
  UnityEngine_Object_c *pUVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_0456620d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<ResolutionImage>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456620d = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pNVar5 = (__this->fields).NMHDAIIIHFP;
  if (pNVar5 != (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)0x0) {
    capacity = *(int32_t *)&pNVar5[1].klass;
    __this_00 = (System_Collections_Generic_List_ResolutionImage__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<ResolutionImage>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,capacity,
               Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
    __this_01 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,__this_01,Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      do {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
          return __this_00;
        }
        if ((UnityEngine_Object_o *)local_70.fields._current == (UnityEngine_Object_o *)0x0) {
LAB_031b9124:
          x = (UnityEngine_Object_o *)0x0;
        }
        else {
          bVar1 = (Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo->_2).naturalAligment;
          if ((((UnityEngine_Object_c *)(local_70.fields._current)->klass)->_2).naturalAligment <
              bVar1) goto LAB_031b9124;
          x = (UnityEngine_Object_o *)local_70.fields._current;
          if ((((UnityEngine_Object_c *)(local_70.fields._current)->klass)->_2).typeHierarchy
              [(ulong)bVar1 - 1] != (Il2CppClass *)Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo) {
            x = (UnityEngine_Object_o *)0x0;
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar7 = x[3].klass;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          lVar3 = Method_System_Collections_Generic_List<ResolutionImage>_Add__;
          if (bVar4 || CHBLGJGLBAE) {
            if (__this_00 == (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pUVar7 = x[3].klass;
            pNVar6 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pNVar6 == (Nekki_SF2_GUI_ResolutionImage_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pNVar6->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pNVar6->m_Items[(int)uVar2] = (Nekki_SF2_GUI_ResolutionImage_o *)pUVar7;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)pUVar7,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool BBHONBCGBOL()  [RVA 0x30B92B0]
// Nekki.SF2.GUI.TextPic$$BBHONBCGBOL @ RVA 0x30B92B0

bool Nekki_SF2_GUI_TextPic__BBHONBCGBOL(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  undefined1 uVar5;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  long lVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_Action_o *x;
  UnityEngine_Object_o *x_00;
  
  if ((DAT_0456620e & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456620e = 1;
  }
  bVar4 = UnityEngine_UI_Text__get_alignByGeometry
                    ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  if (bVar4) {
    return true;
  }
  x_00 = (UnityEngine_Object_o *)(__this->fields).FitImageLineHeightParam;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    x = (__this->fields).MPHECBPOAIC;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      return false;
    }
  }
  bVar4 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                    (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
  if (!bVar4) {
    return false;
  }
  pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar6 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar6->klass;
    uVar1._0_1_ = (pIVar9->_2).rank;
    uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar7 = pIVar9->vtable + (*piVar11 + 6);
          goto LAB_031b9400;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,6);
LAB_031b9400:
    lVar8 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
    if (lVar8 == 0) {
      return false;
    }
    pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar6 != (Il2CppObject *)0x0) {
      pIVar9 = pIVar6->klass;
      uVar2._0_1_ = (pIVar9->_2).rank;
      uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar2;
      if (uVar10 != 0) {
        piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar7 = pIVar9->vtable + (*piVar11 + 6);
            goto LAB_031b9470;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,6);
LAB_031b9470:
      lVar8 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
      if (lVar8 != 0) {
        if (*(char *)(lVar8 + 0x58) == '\0') {
          return false;
        }
        pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        if (pIVar6 != (Il2CppObject *)0x0) {
          pIVar9 = pIVar6->klass;
          uVar3._0_1_ = (pIVar9->_2).rank;
          uVar3._1_1_ = (pIVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar3;
          if (uVar10 != 0) {
            piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                pVVar7 = pIVar9->vtable + (*piVar11 + 0xb);
                goto LAB_031b9500;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar6,DFLJPJMIMHI_TypeInfo,0xb);
LAB_031b9500:
                    /* WARNING: Could not recover jumptable at 0x031b9510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
          return (bool)uVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BMHJEBCABGH(Bounds CJNHFNHJHPE)  [RVA 0x30B9518]
// Nekki.SF2.GUI.TextPic$$BMHJEBCABGH @ RVA 0x30B9518

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextPic__BMHJEBCABGH
               (Nekki_SF2_GUI_TextPic_o *__this,UnityEngine_Bounds_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  UnityEngine_Bounds_o *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)&(CJNHFNHJHPE->fields).m_Center.fields.z;
  uVar2 = *(undefined8 *)&(CJNHFNHJHPE->fields).m_Center.fields;
  *(undefined8 *)&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z =
       *(undefined8 *)&(CJNHFNHJHPE->fields).m_Extents.fields.y;
  pUVar1 = &(__this->fields)._BAHHBJMJCEM_k__BackingField;
  (pUVar1->fields).m_Center.fields.x = (float)(int)uVar3;
  (pUVar1->fields).m_Center.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
  *(undefined8 *)((long)&(__this->fields).GlyphPrefabs + 4) = uVar2;
  return;
}


// ===== private void MJBPNMOFPOJ(AEGOLGIJEBI.MCGKJAGBFKP ADOIANOKIIK)  [RVA 0x30B4728]
// Nekki.SF2.GUI.TextPic$$MJBPNMOFPOJ @ RVA 0x30B4728

void Nekki_SF2_GUI_TextPic__MJBPNMOFPOJ
               (Nekki_SF2_GUI_TextPic_o *__this,AEGOLGIJEBI_MCGKJAGBFKP_o *ADOIANOKIIK,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_RectTransform_o *JJHEGPBBMLG;
  Nekki_SF2_GUI_Glyphs_Glyph_o *item;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  UnityEngine_UIVertex_array *KGGEIJMLEGC;
  
  if ((DAT_0456620f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_Add__);
    DAT_0456620f = 1;
  }
  JJHEGPBBMLG = UnityEngine_UI_Graphic__get_rectTransform
                          ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  KGGEIJMLEGC = (__this->fields).super.m_TempVerts;
  if ((Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
  }
  item = Nekki_SF2_GUI_Glyphs_Glyph__Create
                   ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,(UnityEngine_Transform_o *)JJHEGPBBMLG,
                    (UnityEngine_GameObject_array *)KGGEIJMLEGC,(MethodInfo *)0x0);
  if (item != (Nekki_SF2_GUI_Glyphs_Glyph_o *)0x0) {
    (*(item->klass->vtable)._5_ParseParams.methodPtr)
              (item,ADOIANOKIIK,(__this->fields)._OAFKPIMLHJE_k__BackingField,
               (item->klass->vtable)._5_ParseParams.method);
    lVar2 = Method_System_Collections_Generic_List<Glyph>_Add__;
    __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar3 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
          thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,item);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string get_text()  [RVA 0x30B9530]
// Nekki.SF2.GUI.TextPic$$get_text @ RVA 0x30B9530

System_String_o *
Nekki_SF2_GUI_TextPic__get_text(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  return (System_String_o *)(__this->fields).super.m_FontData;
}


// ===== public Vector2 get_GenerationGeometryBounds()  [RVA 0x30B8134]
// Nekki.SF2.GUI.TextPic$$get_GenerationGeometryBounds @ RVA 0x30B8134

UnityEngine_Vector2_o
Nekki_SF2_GUI_TextPic__get_GenerationGeometryBounds
          (Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Rect_o UVar1;
  
  __this_00 = Nekki_SF2_GUI_TextPic__get_FittingBoundsRectTransform(__this,method);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1.fields._8_8_;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Bounds get_AlignedTextBounds()  [RVA 0x30B9678]
// Nekki.SF2.GUI.TextPic$$get_AlignedTextBounds @ RVA 0x30B9678

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextPic__get_AlignedTextBounds
               (UnityEngine_Bounds_o *__return_storage_ptr__,Nekki_SF2_GUI_TextPic_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Collections_Generic_List_Bounds__o *pSVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)&(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields.z;
  uVar3 = *(undefined8 *)&(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields;
  pSVar2 = (__this->fields)._CECMNNLFJKO_k__BackingField;
  (__return_storage_ptr__->fields).m_Extents.fields.y = (float)(int)uVar1;
  (__return_storage_ptr__->fields).m_Extents.fields.z = (float)(int)((ulong)uVar1 >> 0x20);
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Center.fields.z = uVar3;
  *(System_Collections_Generic_List_Bounds__o **)&(__return_storage_ptr__->fields).m_Center.fields =
       pSVar2;
  return;
}


// ===== private void EMMEEAOJEJK(Bounds CJNHFNHJHPE)  [RVA 0x30B9690]
// Nekki.SF2.GUI.TextPic$$EMMEEAOJEJK @ RVA 0x30B9690

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextPic__EMMEEAOJEJK
               (Nekki_SF2_GUI_TextPic_o *__this,UnityEngine_Bounds_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  UnityEngine_Bounds_o *pUVar1;
  System_Collections_Generic_List_Bounds__o *pSVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)&(CJNHFNHJHPE->fields).m_Center.fields.z;
  pSVar2 = *(System_Collections_Generic_List_Bounds__o **)&(CJNHFNHJHPE->fields).m_Center.fields;
  *(undefined8 *)&(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields.z =
       *(undefined8 *)&(CJNHFNHJHPE->fields).m_Extents.fields.y;
  pUVar1 = &(__this->fields)._CDKHEGGEFOC_k__BackingField;
  (pUVar1->fields).m_Center.fields.x = (float)(int)uVar3;
  (pUVar1->fields).m_Center.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
  (__this->fields)._CECMNNLFJKO_k__BackingField = pSVar2;
  return;
}


// ===== private List<IHIFNKAMALG> DLLFGLAOKHG()  [RVA 0x30B6098]
// Nekki.SF2.GUI.TextPic$$DLLFGLAOKHG @ RVA 0x30B6098

System_Collections_Generic_List_IHIFNKAMALG__o *
Nekki_SF2_GUI_TextPic__DLLFGLAOKHG(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  int32_t iVar7;
  int capacity;
  UnityEngine_Font_o *x;
  System_Collections_Generic_List_IHIFNKAMALG__o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_TextGenerator_o *pUVar8;
  UnityEngine_GameObject_o *context;
  System_Collections_Generic_IList_UIVertex__o *JGHIJMJNJLE;
  Il2CppMethodPointer *ppIVar9;
  IHIFNKAMALG_o *__this_02;
  MethodInfo *method_00;
  System_Action_o *pSVar10;
  System_Collections_Generic_IList_UIVertex__c *pSVar11;
  IHIFNKAMALG_array *pIVar12;
  ulong uVar13;
  int32_t *piVar14;
  System_String_o *str;
  int OGPGLGPMEPD;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector2_o UVar18;
  UnityEngine_Rect_o UVar19;
  float local_1b8;
  float local_1b4;
  UnityEngine_TextGenerationSettings_o UStack_148;
  System_Collections_Generic_List_Enumerator_T__o local_e8;
  UnityEngine_TextGenerationSettings_o local_d0;
  
  if ((DAT_04566210 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_get_Current__);
    FUN_01bab630(&System_Collections_Generic_ICollection<UIVertex>_TypeInfo);
    FUN_01bab630(&IHIFNKAMALG_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<UIVertex>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IHIFNKAMALG>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566210 = 1;
  }
  local_e8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_e8.fields._index = 0;
  local_e8.fields._version = 0;
  local_d0.fields.generationExtents.fields.x = 0.0;
  local_d0.fields.generationExtents.fields.y = 0.0;
  local_d0.fields.verticalOverflow = 0;
  local_d0.fields.horizontalOverflow = 0;
  local_d0.fields.generateOutOfBounds = false;
  local_d0.fields._89_7_ = 0;
  local_d0.fields.pivot.fields.x = 0.0;
  local_d0.fields.pivot.fields.y = 0.0;
  local_d0.fields.fontStyle = 0;
  local_d0.fields.textAnchor = 0;
  local_d0.fields.richText = false;
  local_d0.fields._33_3_ = 0;
  local_d0.fields.scaleFactor = 0.0;
  local_d0.fields.resizeTextMaxSize = 0;
  local_d0.fields.updateBounds = false;
  local_d0.fields._61_3_ = 0;
  local_d0.fields.alignByGeometry = false;
  local_d0.fields.resizeTextForBestFit = false;
  local_d0.fields._50_2_ = 0;
  local_d0.fields.resizeTextMinSize = 0;
  local_d0.fields.color.fields.r = 0.0;
  local_d0.fields.color.fields.g = 0.0;
  local_d0.fields.font = (UnityEngine_Font_o *)0x0;
  local_d0.fields.fontSize = 0;
  local_d0.fields.lineSpacing = 0.0;
  local_d0.fields.color.fields.b = 0.0;
  local_d0.fields.color.fields.a = 0.0;
  local_e8.fields._current = (Il2CppObject *)0x0;
  x = UnityEngine_UI_Text__get_font((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 031b61c8 to 032b61ef has its CatchHandler @ 031b656c */
  if (bVar6) {
    __this_00 = (System_Collections_Generic_List_IHIFNKAMALG__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<IHIFNKAMALG>_TypeInfo);
LAB_031b6450:
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IHIFNKAMALG>__ctor__);
                    /* try { // try from 031b6584 to 032b6587 has its CatchHandler @ 031b6598 */
                    /* catch() { ... } // from try @ 031b6584 with catch @ 031b6598 */
    return __this_00;
  }
  __this_01 = UnityEngine_UI_Graphic__get_rectTransform
                        ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar19 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    Nekki_SF2_GUI_TextPic__GGKHBFKNNOC
              (&local_d0,__this,(UnityEngine_Vector2_o)UVar19.fields._8_8_,method_00);
    pUVar8 = UnityEngine_UI_Text__get_cachedTextGenerator
                       ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
    pSVar10 = (__this->fields).NFECDKAEFJL;
    if (pSVar10 != (System_Action_o *)0x0) {
      str = (System_String_o *)(pSVar10->fields).super.super.method_ptr;
                    /* try { // try from 031b6224 to 032b624f has its CatchHandler @ 031b6568 */
      memcpy(&local_1b8,&local_d0,0x60);
      context = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_TextGenerator_o *)0x0) {
        memcpy(&UStack_148,&local_1b8,0x60);
                    /* try { // try from 031b6264 to 032b626f has its CatchHandler @ 031b6304 */
        UnityEngine_TextGenerator__PopulateWithErrors
                  (pUVar8,str,&UStack_148,context,(MethodInfo *)0x0);
                    /* try { // try from 031b627c to 032b6297 has its CatchHandler @ 031b6314 */
        if (*(int *)((long)&(__this->fields).MEIDNEHHHKI + 4) < 1) {
          pUVar8 = UnityEngine_UI_Text__get_cachedTextGenerator
                             ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_TextGenerator_o *)0x0) goto LAB_031b65a4;
          iVar7 = UnityEngine_TextGenerator__get_fontSizeUsedForBestFit(pUVar8,(MethodInfo *)0x0);
          *(int32_t *)((long)&(__this->fields).MEIDNEHHHKI + 4) = iVar7;
        }
                    /* try { // try from 031b629c to 032b62ab has its CatchHandler @ 031b6310 */
        pUVar8 = UnityEngine_UI_Text__get_cachedTextGenerator
                           ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 031b62b0 to 032b62cf has its CatchHandler @ 031b630c */
        if ((pUVar8 != (UnityEngine_TextGenerator_o *)0x0) &&
           (JGHIJMJNJLE = UnityEngine_TextGenerator__get_verts(pUVar8,(MethodInfo *)0x0),
           JGHIJMJNJLE != (System_Collections_Generic_IList_UIVertex__o *)0x0)) {
          pSVar11 = JGHIJMJNJLE->klass;
          uVar1._0_1_ = (pSVar11->_2).rank;
          uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
          uVar13 = (ulong)uVar1;
          if (uVar13 != 0) {
                    /* try { // try from 031b62d4 to 032b62f3 has its CatchHandler @ 031b6308 */
            piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_ICollection<UIVertex>_TypeInfo) {
                    /* catch() { ... } // from try @ 031b6264 with catch @ 031b6304 */
                    /* catch() { ... } // from try @ 031b62d4 with catch @ 031b6308 */
                    /* catch() { ... } // from try @ 031b62b0 with catch @ 031b630c */
                ppIVar9 = &pSVar11->vtable[*piVar14].methodPtr;
                goto LAB_031b6310;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
                    /* try { // try from 031b62fc to 032b62ff has its CatchHandler @ 031b6318 */
          ppIVar9 = (Il2CppMethodPointer *)
                    FUN_01b81914(JGHIJMJNJLE,
                                 System_Collections_Generic_ICollection<UIVertex>_TypeInfo,0);
                    /* try { // try from 031b6300 to 032b632f has its CatchHandler @ 031b5f3c */
LAB_031b6310:
                    /* catch() { ... } // from try @ 031b629c with catch @ 031b6310 */
                    /* catch() { ... } // from try @ 031b627c with catch @ 031b6314 */
                    /* catch() { ... } // from try @ 031b62fc with catch @ 031b6318 */
          capacity = (**ppIVar9)(JGHIJMJNJLE,(MethodInfo *)ppIVar9[1]);
          __this_00 = (System_Collections_Generic_List_IHIFNKAMALG__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<IHIFNKAMALG>_TypeInfo);
                    /* try { // try from 031b6330 to 032b6347 has its CatchHandler @ 031b6404 */
          if (0 < capacity) {
            System_Collections_Generic_List<object>___ctor
                      ((System_Collections_Generic_List_object__o *)__this_00,capacity,
                       Method_System_Collections_Generic_List<IHIFNKAMALG>__ctor__);
                    /* try { // try from 031b6350 to 032b6353 has its CatchHandler @ 031b63f4 */
                    /* try { // try from 031b6358 to 032b636b has its CatchHandler @ 031b63fc */
            OGPGLGPMEPD = 0;
            do {
              __this_02 = (IHIFNKAMALG_o *)thunk_FUN_01bda818(IHIFNKAMALG_TypeInfo);
                    /* try { // try from 031b6370 to 032b637b has its CatchHandler @ 031b63f0 */
              IHIFNKAMALG___ctor(__this_02,JGHIJMJNJLE,OGPGLGPMEPD,(MethodInfo *)0x0);
              lVar5 = Method_System_Collections_Generic_List<IHIFNKAMALG>_Add__;
                    /* try { // try from 031b6380 to 032b639b has its CatchHandler @ 031b63ec */
              if (__this_00 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)
              goto LAB_031b65a4;
              pIVar12 = (__this_00->fields)._items;
              (__this_00->fields)._version = (__this_00->fields)._version + 1;
              if (pIVar12 == (IHIFNKAMALG_array *)0x0) goto LAB_031b65a4;
              uVar4 = (__this_00->fields)._size;
                    /* try { // try from 031b63a0 to 032b63af has its CatchHandler @ 031b63e4 */
              if (uVar4 < (uint)pIVar12->max_length) {
                    /* try { // try from 031b63b0 to 032b63c3 has its CatchHandler @ 031b5f3c */
                (__this_00->fields)._size = uVar4 + 1;
                pIVar12->m_Items[(int)uVar4] = __this_02;
                thunk_FUN_01c20e04(pIVar12->m_Items + (int)uVar4,__this_02);
                    /* try { // try from 031b63c4 to 032b63d3 has its CatchHandler @ 031b6404 */
              }
              else {
                    /* try { // try from 031b63d8 to 032b63df has its CatchHandler @ 031b63e8 */
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (Il2CppObject *)__this_02,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              OGPGLGPMEPD = OGPGLGPMEPD + 1;
                    /* catch() { ... } // from try @ 031b63a0 with catch @ 031b63e4 */
                    /* catch() { ... } // from try @ 031b63d8 with catch @ 031b63e8 */
            } while (capacity != OGPGLGPMEPD);
                    /* catch() { ... } // from try @ 031b6380 with catch @ 031b63ec */
                    /* catch() { ... } // from try @ 031b6370 with catch @ 031b63f0 */
                    /* catch() { ... } // from try @ 031b6350 with catch @ 031b63f4 */
            fVar15 = UnityEngine_UI_Text__get_pixelsPerUnit
                               ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b6358 with catch @ 031b63fc */
            pSVar11 = JGHIJMJNJLE->klass;
            uVar2._0_1_ = (pSVar11->_2).rank;
            uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 031b6330 with catch @ 031b6404
                       catch() { ... } // from try @ 031b63c4 with catch @ 031b6404 */
                    /* try { // try from 031b640c to 032b640f has its CatchHandler @ 031b6560 */
            uVar13 = (ulong)uVar2;
                    /* try { // try from 031b6410 to 032b642b has its CatchHandler @ 031b5f3c */
            if (uVar13 != 0) {
              piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_Generic_IList<UIVertex>_TypeInfo) {
                  ppIVar9 = &pSVar11->vtable[*piVar14].methodPtr;
                  goto LAB_031b6464;
                }
                    /* try { // try from 031b642c to 032b642f has its CatchHandler @ 031b6554 */
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
                    /* try { // try from 031b6434 to 032b643b has its CatchHandler @ 031b6550 */
              } while (uVar13 != 0);
            }
                    /* try { // try from 031b643c to 032b6543 has its CatchHandler @ 031b5f3c */
            ppIVar9 = (Il2CppMethodPointer *)
                      FUN_01b81914(JGHIJMJNJLE,System_Collections_Generic_IList<UIVertex>_TypeInfo,0
                                  );
LAB_031b6464:
            fVar15 = 1.0 / fVar15;
            (**ppIVar9)(&local_1b8,JGHIJMJNJLE,0,(MethodInfo *)ppIVar9[1]);
            pSVar11 = JGHIJMJNJLE->klass;
            uVar3._0_1_ = (pSVar11->_2).rank;
            uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
            uVar13 = (ulong)uVar3;
            if (uVar13 != 0) {
              piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_Generic_IList<UIVertex>_TypeInfo) {
                  ppIVar9 = &pSVar11->vtable[*piVar14].methodPtr;
                  goto LAB_031b64cc;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            ppIVar9 = (Il2CppMethodPointer *)
                      FUN_01b81914(JGHIJMJNJLE,System_Collections_Generic_IList<UIVertex>_TypeInfo,0
                                  );
LAB_031b64cc:
            (**ppIVar9)(&local_1b8,JGHIJMJNJLE,0,(MethodInfo *)ppIVar9[1]);
            UVar18.fields.y = fVar15 * local_1b4;
            UVar18.fields.x = fVar15 * local_1b8;
            UVar18 = UnityEngine_UI_Graphic__PixelAdjustPoint
                               ((UnityEngine_UI_Graphic_o *)__this,UVar18,(MethodInfo *)0x0);
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_e8,(System_Collections_Generic_List_object__o *)__this_00,
                       Method_System_Collections_Generic_List<IHIFNKAMALG>_GetEnumerator__);
            while( true ) {
              bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_e8,
                                 Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_MoveNext__
                                );
              if (!bVar6) {
                    /* catch() { ... } // from try @ 031b6224 with catch @ 031b6568 */
                    /* catch() { ... } // from try @ 031b61c8 with catch @ 031b656c */
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_e8,
                           Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_Dispose__)
                ;
                return __this_00;
              }
              if (local_e8.fields._current == (Il2CppObject *)0x0) break;
              fVar16 = *(float *)((long)&local_e8.fields._current[1].klass + 4);
                    /* try { // try from 031b6544 to 032b6547 has its CatchHandler @ 031b6564 */
              fVar17 = *(float *)&local_e8.fields._current[1].monitor;
                    /* try { // try from 031b6548 to 032b6557 has its CatchHandler @ 031b5f3c */
                    /* catch() { ... } // from try @ 031b6434 with catch @ 031b6550 */
                    /* catch() { ... } // from try @ 031b642c with catch @ 031b6554 */
                    /* try { // try from 031b6558 to 032b655f has its CatchHandler @ 031b662c */
              *(float *)&local_e8.fields._current[1].klass =
                   (UVar18.fields.x - fVar15 * local_1b8) +
                   fVar15 * *(float *)&local_e8.fields._current[1].klass;
                    /* catch() { ... } // from try @ 031b640c with catch @ 031b6560
                       try { // try from 031b6560 to 032b6583 has its CatchHandler @ 031b5f3c */
              *(float *)((long)&local_e8.fields._current[1].klass + 4) =
                   (UVar18.fields.y - fVar15 * local_1b4) + fVar15 * fVar16;
              *(float *)&local_e8.fields._current[1].monitor = fVar15 * fVar17;
                    /* catch() { ... } // from try @ 031b6544 with catch @ 031b6564 */
            }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031b65a8 to 032b6617 has its CatchHandler @ 031b662c */
            FUN_01bab8c8();
          }
          goto LAB_031b6450;
        }
      }
    }
  }
LAB_031b65a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JPIJBLCPOGM()  [RVA 0x30B6A04]
// Nekki.SF2.GUI.TextPic$$JPIJBLCPOGM @ RVA 0x30B6A04

void Nekki_SF2_GUI_TextPic__JPIJBLCPOGM(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Action_o *__this_00;
  Nekki_SF2_GUI_StrikeThroughTextLine_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_04;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar3;
  MethodInfo *method_05;
  
  if ((DAT_04566211 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12901/*"TextPic.OnPopulateMeshGlyphs: complete"*/);
    DAT_04566211 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).NFECDKAEFJL;
  if (__this_00 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__ILAMEAMIMMP
                    ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)__this_00,method);
  if (iVar2 == 0) {
    Nekki_SF2_GUI_TextPic__MGJFCJLEHLC(__this,method_00);
    return;
  }
  bVar1 = Nekki_SF2_GUI_TextPic__get_HasGlyphs(__this,method_00);
  pMVar3 = method_01;
  if (bVar1) {
    Nekki_SF2_GUI_TextPic__FKGOGDIMOEP(__this,method_01);
    Nekki_SF2_GUI_TextPic__KBIGLOGHNNM(__this,method_02);
    Nekki_SF2_GUI_TextPic__GEDECBAJOBH(__this,method_03);
    pMVar3 = extraout_x1_00;
  }
  bVar1 = Nekki_SF2_GUI_TextPic__BBHONBCGBOL(__this,pMVar3);
  pMVar3 = method_04;
  if ((!bVar1) ||
     (bVar1 = Nekki_SF2_GUI_TextPic__HOBJFEPMIGH(__this,method_04), pMVar3 = extraout_x1_01, bVar1))
  {
    Nekki_SF2_GUI_TextPic__LKJOHANKEDP(__this,pMVar3);
    pMVar3 = extraout_x1_02;
  }
  bVar1 = Nekki_SF2_GUI_TextPic__get_HasGlyphs(__this,pMVar3);
  if (bVar1) {
    Nekki_SF2_GUI_TextPic__IKJOHPDHMME(__this,method_05);
  }
  __this_01 = (Nekki_SF2_GUI_StrikeThroughTextLine_o *)(__this->fields)._KOKCPBMJANE_k__BackingField
  ;
  if (__this_01 != (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0) {
    Nekki_SF2_GUI_StrikeThroughTextLine__ComputePositions
              (__this_01,(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
               (MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public RectTransform get_FittingBoundsRectTransform()  [RVA 0x30B9538]
// Nekki.SF2.GUI.TextPic$$get_FittingBoundsRectTransform @ RVA 0x30B9538

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_TextPic__get_FittingBoundsRectTransform
          (Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *pUVar4;
  MethodInfo *extraout_x1;
  int index;
  Nekki_SF2_GUI_StrikeThroughTextLine_o *pNVar5;
  int iVar6;
  
  if ((DAT_04566212 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566212 = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields).KALCEPKCEPP;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
LAB_031b9628:
    pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    return pUVar4;
  }
  pNVar5 = (__this->fields).KALCEPKCEPP;
  if (pNVar5 != (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0) {
    iVar6 = 0;
    index = 0;
    while (pUVar3 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
          pUVar3 != (UnityEngine_Transform_o *)0x0) {
      iVar2 = UnityEngine_Transform__get_childCount(pUVar3,(MethodInfo *)0x0);
      pNVar5 = (__this->fields).KALCEPKCEPP;
      if (iVar2 <= index) {
        if (pNVar5 != (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0) {
          pUVar4 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
          if ((pUVar4 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar4->klass != UnityEngine_RectTransform_TypeInfo)) {
            pUVar4 = (UnityEngine_RectTransform_o *)0x0;
          }
          return pUVar4;
        }
        break;
      }
      if ((((pNVar5 == (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0) ||
           (pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
          (pUVar3 = UnityEngine_Transform__GetChild(pUVar3,index,(MethodInfo *)0x0),
          pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) break;
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      if (bVar1) {
        if (0 < iVar6) goto LAB_031b9628;
        iVar6 = iVar6 + 1;
      }
      pNVar5 = (__this->fields).KALCEPKCEPP;
      index = index + 1;
      if (pNVar5 == (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MGJFCJLEHLC()  [RVA 0x30B49E0]
// Nekki.SF2.GUI.TextPic$$MGJFCJLEHLC @ RVA 0x30B49E0

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextPic__MGJFCJLEHLC(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04566213 & 1) == 0) {
    auVar3 = FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_Clear__);
    DAT_04566213 = 1;
  }
  pUVar1 = &(__this->fields)._BAHHBJMJCEM_k__BackingField;
  (pUVar1->fields).m_Center.fields.x = 0.0;
  (pUVar1->fields).m_Center.fields.y = 0.0;
  *(undefined8 *)((long)&(__this->fields).GlyphPrefabs + 4) = 0;
  *(undefined8 *)&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z = 0;
  lVar2 = *(long *)&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.z;
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    lVar2 = *(long *)&(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y;
    (__this->fields)._CECMNNLFJKO_k__BackingField = (System_Collections_Generic_List_Bounds__o *)0x0
    ;
    pUVar1 = &(__this->fields)._CDKHEGGEFOC_k__BackingField;
    (pUVar1->fields).m_Center.fields.x = 0.0;
    (pUVar1->fields).m_Center.fields.y = 0.0;
    *(undefined8 *)&(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields.z = 0;
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== public void add_OnBoundsUpdated(Action CJNHFNHJHPE)  [RVA 0x30B96F8]
// Nekki.SF2.GUI.TextPic$$add_OnBoundsUpdated @ RVA 0x30B96F8

void Nekki_SF2_GUI_TextPic__add_OnBoundsUpdated
               (Nekki_SF2_GUI_TextPic_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  LabelButton_o *pLVar3;
  LabelButton_o *a;
  
  if ((DAT_04566214 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566214 = 1;
  }
  a = (__this->fields).JPDGLLDKPHC;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pLVar3 = (LabelButton_o *)FUN_01c07368(&(__this->fields).JPDGLLDKPHC,pSVar2,a);
    bVar1 = a == pLVar3;
    a = pLVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== protected override void OnDestroy()  [RVA 0x30B9798]
// Nekki.SF2.GUI.TextPic$$OnDestroy @ RVA 0x30B9798

void Nekki_SF2_GUI_TextPic__OnDestroy(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TextDebugger_o *__this_00;
  MethodInfo *method_00;
  
  UnityEngine_UI_Graphic__OnDestroy((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).IHEKNEDMHDK;
  if (__this_00 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
    Nekki_SF2_GUI_TextPic_ABOHOFBMBHP__ILKDIPBPEDL
              ((Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)__this_00,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector3 LocalTextMeshLastLineBounds_Anchored(TextAnchor POJKEOPHOAI)  [RVA 0x30B982C]
// Nekki.SF2.GUI.TextPic$$LocalTextMeshLastLineBounds_Anchored @ RVA 0x30B982C

/* WARNING: Type propagation algorithm not settling */

UnityEngine_Vector3_o
Nekki_SF2_GUI_TextPic__LocalTextMeshLastLineBounds_Anchored
          (Nekki_SF2_GUI_TextPic_o *__this,int32_t POJKEOPHOAI,MethodInfo *method)

{
  UnityEngine_Vector3_Fields UVar1;
  UnityEngine_Bounds_o local_60;
  UnityEngine_Bounds_o local_48;
  
  if ((DAT_04566215 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<Bounds>__);
    DAT_04566215 = 1;
  }
  DJNBJHPDKDP__KIKGKKGDCKK<Bounds>
            (&local_48,
             *(System_Collections_Generic_List_T__o **)
              &(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.z,
             Method_DJNBJHPDKDP_KIKGKKGDCKK<Bounds>__);
  local_60.fields.m_Center.fields.z = local_48.fields.m_Center.fields.z;
  local_60.fields.m_Extents.fields.x = local_48.fields.m_Extents.fields.x;
  local_60.fields.m_Center.fields.x = local_48.fields.m_Center.fields.x;
  local_60.fields.m_Center.fields.y = local_48.fields.m_Center.fields.y;
  local_60.fields.m_Extents.fields.y = local_48.fields.m_Extents.fields.y;
  local_60.fields.m_Extents.fields.z = local_48.fields.m_Extents.fields.z;
  UVar1 = (UnityEngine_Vector3_Fields)
          OMANDMDCGMF__OIMANFCDDIJ(POJKEOPHOAI,&local_60,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar1;
}


// ===== public void add_OnRendered(Action CJNHFNHJHPE)  [RVA 0x30B98B0]
// Nekki.SF2.GUI.TextPic$$add_OnRendered @ RVA 0x30B98B0

void Nekki_SF2_GUI_TextPic__add_OnRendered
               (Nekki_SF2_GUI_TextPic_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *a;
  
  if ((DAT_04566216 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566216 = 1;
  }
  a = *(System_Delegate_o **)&(__this->fields)._FONMBPGDLBL_k__BackingField;
  while ((pSVar2 = System_Delegate__Combine(a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar2 = (System_Delegate_o *)
             FUN_01c07368(&(__this->fields)._FONMBPGDLBL_k__BackingField,pSVar2,a);
    bVar1 = a == pSVar2;
    a = pSVar2;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private int CGDJKDDKKKC(out Vector2 DOPCACEJKOG)  [RVA 0x30B5D7C]
// Nekki.SF2.GUI.TextPic$$CGDJKDDKKKC @ RVA 0x30B5D7C

int32_t Nekki_SF2_GUI_TextPic__CGDJKDDKKKC
                  (Nekki_SF2_GUI_TextPic_o *__this,UnityEngine_Vector2_o *DOPCACEJKOG,
                  MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  int iVar5;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  float fVar11;
  UnityEngine_Vector2_Fields UVar12;
  
  method_00 = (MethodInfo *)DOPCACEJKOG;
  if ((DAT_04566217 & 1) == 0) {
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    DAT_04566217 = 1;
    method_00 = extraout_x1;
  }
  UVar12 = (UnityEngine_Vector2_Fields)
           Nekki_SF2_GUI_TextPic__get_GenerationGeometryBounds(__this,method_00);
  DOPCACEJKOG->fields = UVar12;
  bVar3 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                    (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
  if (bVar3) {
    pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 031b5e18 to 032b5e1b has its CatchHandler @ 031b5e64 */
    pIVar8 = pIVar6->klass;
    uVar2._0_1_ = (pIVar8->_2).rank;
    uVar2._1_1_ = (pIVar8->_2).minimumAlignment;
                    /* try { // try from 031b5e1c to 032b5e37 has its CatchHandler @ 031b57ec */
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 031b5e38 to 032b5e47 has its CatchHandler @ 031b5e54 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                    /* catch() { ... } // from try @ 031b5d10 with catch @ 031b5e6c */
                    /* catch() { ... } // from try @ 031b5cc0 with catch @ 031b5e70 */
                    /* catch() { ... } // from try @ 031b5cb4 with catch @ 031b5e74 */
                    /* catch() { ... } // from try @ 031b5cd4 with catch @ 031b5e78 */
          pVVar7 = pIVar8->vtable + (*piVar10 + 0xd);
          goto LAB_031b5e7c;
        }
        uVar9 = uVar9 - 1;
                    /* try { // try from 031b5e48 to 032b5e57 has its CatchHandler @ 031b57ec */
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
                    /* catch() { ... } // from try @ 031b5a54 with catch @ 031b5e50 */
                    /* catch() { ... } // from try @ 031b5e38 with catch @ 031b5e54 */
                    /* try { // try from 031b5e58 to 032b5e5b has its CatchHandler @ 031b5f38 */
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar6,DFLJPJMIMHI_TypeInfo,0xd);
                    /* try { // try from 031b5e5c to 032b5eab has its CatchHandler @ 031b57ec */
LAB_031b5e7c:
                    /* catch() { ... } // from try @ 031b5c7c with catch @ 031b5e7c */
                    /* catch() { ... } // from try @ 031b5c38 with catch @ 031b5e80 */
                    /* catch() { ... } // from try @ 031b5c50 with catch @ 031b5e84 */
    fVar11 = (float)(*pVVar7->methodPtr)(pIVar6,pVVar7->method);
                    /* catch() { ... } // from try @ 031b5c88 with catch @ 031b5e88 */
  }
  else {
    fVar11 = 1.0;
                    /* catch() { ... } // from try @ 031b5e18 with catch @ 031b5e64 */
                    /* catch() { ... } // from try @ 031b5d04 with catch @ 031b5e68 */
  }
                    /* catch() { ... } // from try @ 031b5c24 with catch @ 031b5e8c */
                    /* catch() { ... } // from try @ 031b5bf4 with catch @ 031b5e90 */
                    /* catch() { ... } // from try @ 031b5b90 with catch @ 031b5e94 */
  iVar4 = UnityEngine_UI_Text__get_fontSize((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  fVar11 = UVar12.y * fVar11;
                    /* try { // try from 031b5eac to 032b5eaf has its CatchHandler @ 031b5ec4 */
  iVar1 = -0x80000000;
  if (fVar11 != INFINITY) {
    iVar1 = (int)fVar11;
  }
  if (iVar4 < 1) {
    iVar5 = UnityEngine_UI_Text__get_resizeTextMaxSize
                      ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  }
  else {
                    /* catch() { ... } // from try @ 031b5eac with catch @ 031b5ec4 */
    iVar5 = UnityEngine_UI_Text__get_fontSize((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  }
  if (iVar5 <= iVar1) {
    iVar1 = iVar5;
  }
  return iVar1;
}


// ===== public bool get_HasGlyphs()  [RVA 0x30B96A8]
// Nekki.SF2.GUI.TextPic$$get_HasGlyphs @ RVA 0x30B96A8

bool Nekki_SF2_GUI_TextPic__get_HasGlyphs(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *pNVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566218 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_get_Count__);
    DAT_04566218 = 1;
  }
  pNVar1 = (__this->fields).NMHDAIIIHFP;
  if (pNVar1 != (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)0x0) {
    return 0 < *(int *)&pNVar1[1].klass;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void remove_OnBoundsUpdated(Action CJNHFNHJHPE)  [RVA 0x30B9950]
// Nekki.SF2.GUI.TextPic$$remove_OnBoundsUpdated @ RVA 0x30B9950

void Nekki_SF2_GUI_TextPic__remove_OnBoundsUpdated
               (Nekki_SF2_GUI_TextPic_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  LabelButton_o *pLVar3;
  LabelButton_o *source;
  
  if ((DAT_04566219 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566219 = 1;
  }
  source = (__this->fields).JPDGLLDKPHC;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pLVar3 = (LabelButton_o *)FUN_01c07368(&(__this->fields).JPDGLLDKPHC,pSVar2,source);
    bVar1 = source == pLVar3;
    source = pLVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== protected override void OnEnable()  [RVA 0x30B99F0]
// Nekki.SF2.GUI.TextPic$$OnEnable @ RVA 0x30B99F0

void Nekki_SF2_GUI_TextPic__OnEnable(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  UnityEngine_UI_Text__OnEnable((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_TextPic__POIOFMEMHBP(__this,method_00);
  return;
}


// ===== private void GBBGBLKKEFF(List<Bounds> CJNHFNHJHPE)  [RVA 0x30B9A0C]
// Nekki.SF2.GUI.TextPic$$GBBGBLKKEFF @ RVA 0x30B9A0C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextPic__GBBGBLKKEFF
               (Nekki_SF2_GUI_TextPic_o *__this,
               System_Collections_Generic_List_Bounds__o *CJNHFNHJHPE,MethodInfo *method)

{
  *(System_Collections_Generic_List_Bounds__o **)
   &(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y);
  return;
}


// ===== public Bounds get_TextBounds()  [RVA 0x30B9A1C]
// Nekki.SF2.GUI.TextPic$$get_TextBounds @ RVA 0x30B9A1C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextPic__get_TextBounds
               (UnityEngine_Bounds_o *__return_storage_ptr__,Nekki_SF2_GUI_TextPic_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z;
  uVar3 = *(undefined8 *)&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields;
  uVar2 = *(undefined8 *)((long)&(__this->fields).GlyphPrefabs + 4);
  (__return_storage_ptr__->fields).m_Extents.fields.y = (float)(int)uVar1;
  (__return_storage_ptr__->fields).m_Extents.fields.z = (float)(int)((ulong)uVar1 >> 0x20);
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Center.fields.z = uVar3;
  (__return_storage_ptr__->fields).m_Center.fields.x = (float)(int)uVar2;
  (__return_storage_ptr__->fields).m_Center.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  return;
}


// ===== private void IMOIFLIIIAI(List<Bounds> GAPOMBJDGMG)  [RVA 0x30B7D28]
// Nekki.SF2.GUI.TextPic$$IMOIFLIIIAI @ RVA 0x30B7D28

void Nekki_SF2_GUI_TextPic__IMOIFLIIIAI
               (Nekki_SF2_GUI_TextPic_o *__this,
               System_Collections_Generic_List_Bounds__o *GAPOMBJDGMG,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  System_Action_o *pSVar6;
  int index;
  float fVar7;
  float fVar8;
  float fVar10;
  ulong uVar9;
  float fVar11;
  float fVar13;
  ulong uVar12;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  Il2CppClass *pIVar20;
  float fVar21;
  UnityEngine_Vector2_o UVar22;
  undefined1 local_e8 [20];
  float fStack_d4;
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  UnityEngine_Bounds_o local_b8;
  
  if ((DAT_0456621a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_set_Item__);
    DAT_0456621a = 1;
  }
  local_d0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d0.fields._index = 0;
  local_d0.fields._version = 0;
  local_d0.fields._current = (Il2CppObject *)0x0;
  if (GAPOMBJDGMG != (System_Collections_Generic_List_Bounds__o *)0x0) {
    iVar1 = (GAPOMBJDGMG->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
        if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_031b80f4;
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_e8,pSVar3,
                   Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
        local_d0.fields._version = local_e8._12_4_;
        local_d0.fields._index = local_e8._8_4_;
        local_d0.fields._current = (Il2CppObject *)CONCAT44(fStack_d4,local_e8._16_4_);
        local_d0.fields._list = (System_Collections_Generic_List_T__o *)local_e8._0_8_;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_d0,
                                  Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__
                                 ), pIVar5 = local_d0.fields._current, bVar2) {
          if (local_d0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (*(int *)&local_d0.fields._current[3].monitor == index) {
            pSVar6 = (__this->fields).NFECDKAEFJL;
            if (pSVar6 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar3 = (System_Collections_Generic_List_object__o *)
                     (pSVar6->fields).super.super.invoke_impl;
            if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               (pSVar3,*(int32_t *)&local_d0.fields._current[2].monitor,
                                Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                               );
            if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((*(char *)((long)&pIVar4[1].monitor + 6) != '\0') &&
               (*(char *)((long)&pIVar4[1].monitor + 4) == '\0')) {
              if (pIVar5[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              UVar22 = BOGDEGPCIJI__GCMGMGMCMNK((BOGDEGPCIJI_o *)pIVar5[3].klass,(MethodInfo *)0x0);
              pSVar6 = (__this->fields).NFECDKAEFJL;
              if (pSVar6 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar3 = (System_Collections_Generic_List_object__o *)
                       (pSVar6->fields).super.super.m_target;
              if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pIVar5 = System_Collections_Generic_List<object>__get_Item
                                 (pSVar3,*(int *)&pIVar4[1].monitor << 2 | 3,
                                  Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
              if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pIVar20 = pIVar5[1].klass;
              fVar21 = *(float *)&pIVar5[1].monitor;
              System_Collections_Generic_List<Bounds>__get_Item
                        ((UnityEngine_Bounds_o *)local_e8,GAPOMBJDGMG,index,
                         Method_System_Collections_Generic_List<Bounds>_get_Item__);
              fVar7 = UVar22.fields.y * 0.5;
              fVar14 = UVar22.fields.x * 0.5;
              fVar8 = SUB84(pIVar20,0) + 0.0;
              fVar10 = (float)((ulong)pIVar20 >> 0x20) + fVar7;
              fVar21 = fVar21 + 0.0;
              fVar11 = fVar8 - fVar14;
              fVar13 = fVar10 - fVar7;
              uVar12 = CONCAT44(fVar13,fVar11);
              fVar14 = fVar14 + fVar8;
              fVar7 = fVar7 + fVar10;
              uVar9 = CONCAT44(fVar7,fVar14);
              fVar8 = (float)local_e8._0_8_ - (float)local_e8._12_4_;
              fVar10 = SUB84(local_e8._0_8_,4) - (float)local_e8._16_4_;
              uVar15 = CONCAT44(fVar10,fVar8);
              fVar16 = (float)local_e8._0_8_ + (float)local_e8._12_4_;
              fVar17 = SUB84(local_e8._0_8_,4) + (float)local_e8._16_4_;
              uVar15 = uVar15 ^ (uVar15 ^ uVar12) &
                                ~CONCAT44(-(uint)(fVar10 < fVar13),-(uint)(fVar8 < fVar11));
              fVar8 = (float)local_e8._8_4_ - fStack_d4;
              if (fVar21 <= (float)local_e8._8_4_ - fStack_d4) {
                fVar8 = fVar21;
              }
              uVar12 = uVar12 ^ (uVar12 ^ CONCAT44(fVar17,fVar16)) &
                                CONCAT44(-(uint)(fVar13 < fVar17),-(uint)(fVar11 < fVar16));
              fVar10 = (float)local_e8._8_4_ + fStack_d4;
              if ((float)local_e8._8_4_ + fStack_d4 <= fVar21) {
                fVar10 = fVar21;
              }
              fVar16 = (float)uVar15;
              fVar17 = (float)(uVar15 >> 0x20);
              fVar11 = ((float)uVar12 - fVar16) * 0.5;
              fVar13 = ((float)(uVar12 >> 0x20) - fVar17) * 0.5;
              fVar10 = (fVar10 - fVar8) * 0.5;
              fVar16 = fVar16 + fVar11;
              fVar17 = fVar17 + fVar13;
              fVar18 = fVar16 - fVar11;
              fVar19 = fVar17 - fVar13;
              uVar12 = CONCAT44(fVar19,fVar18);
              fVar11 = fVar11 + fVar16;
              fVar13 = fVar13 + fVar17;
              local_b8.fields.m_Center.fields.z = (fVar8 + fVar10) - fVar10;
              fVar10 = fVar10 + fVar8 + fVar10;
              uVar12 = uVar12 ^ (uVar12 ^ uVar9) &
                                ~CONCAT44(-(uint)(fVar19 < fVar7),-(uint)(fVar18 < fVar14));
              uVar9 = uVar9 ^ (uVar9 ^ CONCAT44(fVar13,fVar11)) &
                              CONCAT44(-(uint)(fVar7 < fVar13),-(uint)(fVar14 < fVar11));
              if (fVar21 <= local_b8.fields.m_Center.fields.z) {
                local_b8.fields.m_Center.fields.z = fVar21;
              }
              if (fVar10 <= fVar21) {
                fVar10 = fVar21;
              }
              fVar8 = (float)uVar12;
              fVar21 = (float)(uVar12 >> 0x20);
              local_b8.fields.m_Extents.fields.x = ((float)uVar9 - fVar8) * 0.5;
              local_b8.fields.m_Extents.fields.y = ((float)(uVar9 >> 0x20) - fVar21) * 0.5;
              local_b8.fields.m_Extents.fields.z =
                   (fVar10 - local_b8.fields.m_Center.fields.z) * 0.5;
              local_b8.fields.m_Center.fields.x = fVar8 + local_b8.fields.m_Extents.fields.x;
              local_b8.fields.m_Center.fields.y = fVar21 + local_b8.fields.m_Extents.fields.y;
              local_b8.fields.m_Center.fields.z =
                   local_b8.fields.m_Center.fields.z + local_b8.fields.m_Extents.fields.z;
              System_Collections_Generic_List<Bounds>__set_Item
                        (GAPOMBJDGMG,index,&local_b8,
                         Method_System_Collections_Generic_List<Bounds>_set_Item__);
            }
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_d0,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
        index = index + 1;
      } while (index != iVar1);
    }
    return;
  }
LAB_031b80f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void set_text(string CJNHFNHJHPE)  [RVA 0x30B9A34]
// Nekki.SF2.GUI.TextPic$$set_text @ RVA 0x30B9A34

void Nekki_SF2_GUI_TextPic__set_text
               (Nekki_SF2_GUI_TextPic_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  
  UnityEngine_UI_Text__set_text((UnityEngine_UI_Text_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_GUI_TextPic__POIOFMEMHBP(__this,method_00);
  return;
}


// ===== private void Update()  [RVA 0x30B9A50]
// Nekki.SF2.GUI.TextPic$$Update @ RVA 0x30B9A50

void Nekki_SF2_GUI_TextPic__Update(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  Nekki_SF2_GUI_TextDebugger_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *extraout_x1;
  byte bVar4;
  undefined8 uVar5;
  System_Action_o *pSVar6;
  uint uVar7;
  System_Collections_Generic_List_Enumerator_T__o SStack_88;
  System_Collections_Generic_List_Enumerator_T__o SStack_70;
  
  if ((DAT_045661fa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661fa = 1;
    method = extraout_x1;
  }
  SStack_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_70.fields._index = 0;
  SStack_70.fields._version = 0;
  SStack_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).IHEKNEDMHDK;
  if (__this_00 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
    Nekki_SF2_GUI_TextPic_ABOHOFBMBHP__LLCONNGHGKD
              ((Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)__this_00,method);
    __this_01 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&SStack_88,__this_01,Method_System_Collections_Generic_List<Glyph>_GetEnumerator__)
      ;
      SStack_70.fields._index = SStack_88.fields._index;
      SStack_70.fields._version = SStack_88.fields._version;
      SStack_70.fields._list = SStack_88.fields._list;
      SStack_70.fields._current = SStack_88.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&SStack_70,
                           Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
        pIVar2 = SStack_70.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&SStack_70,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
          return;
        }
        pUVar1 = &(__this->fields)._CDKHEGGEFOC_k__BackingField;
        uVar5._0_4_ = (pUVar1->fields).m_Extents.fields.y;
        uVar5._4_4_ = (pUVar1->fields).m_Extents.fields.z;
        uVar7 = *(uint *)((long)&(__this->fields).POHAMNFPKNM + 4);
        pSVar6 = (__this->fields).MPHECBPOAIC;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar3) {
          pSVar6 = (__this->fields).MPHECBPOAIC;
          if (pSVar6 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar4 = *(byte *)&pSVar6[1].fields.super.super.method_info ^ 1;
        }
        else {
          bVar4 = 0;
        }
        if (pIVar2 == (Il2CppObject *)0x0) break;
        (*pIVar2->klass->vtable[7].methodPtr)
                  ((ulong)uVar7,pIVar2,uVar5,(ulong)(bVar4 != 0),pIVar2->klass->vtable[7].method);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KLOKPLHMGMC(string IHNKCJHDDKD)  [RVA 0x30B6DA4]
// Nekki.SF2.GUI.TextPic$$KLOKPLHMGMC @ RVA 0x30B6DA4

void Nekki_SF2_GUI_TextPic__KLOKPLHMGMC
               (Nekki_SF2_GUI_TextPic_o *__this,System_String_o *IHNKCJHDDKD,MethodInfo *method)

{
  return;
}


// ===== private void BGKBGEOMOKM(bool CJNHFNHJHPE)  [RVA 0x30B9A54]
// Nekki.SF2.GUI.TextPic$$BGKBGEOMOKM @ RVA 0x30B9A54

void Nekki_SF2_GUI_TextPic__BGKBGEOMOKM
               (Nekki_SF2_GUI_TextPic_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  *(bool *)&(__this->fields).MEIDNEHHHKI = CJNHFNHJHPE;
  return;
}


// ===== private void GEAFCPCPEAB(int CJNHFNHJHPE)  [RVA 0x30B9A60]
// Nekki.SF2.GUI.TextPic$$GEAFCPCPEAB @ RVA 0x30B9A60

void Nekki_SF2_GUI_TextPic__GEAFCPCPEAB
               (Nekki_SF2_GUI_TextPic_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  *(int32_t *)((long)&(__this->fields).MEIDNEHHHKI + 4) = CJNHFNHJHPE;
  return;
}


// ===== public List<Bounds> get_AlignedTextLineBounds()  [RVA 0x30B9A68]
// Nekki.SF2.GUI.TextPic$$get_AlignedTextLineBounds @ RVA 0x30B9A68

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_Bounds__o *
Nekki_SF2_GUI_TextPic__get_AlignedTextLineBounds(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  return *(System_Collections_Generic_List_Bounds__o **)
          &(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y;
}

