// TypeDefIndex 549
// Namespace: Nekki.SF2.GUI
// public class TextDebugger : MaskableGraphic
// Fields:
//   private static Action EBDPAKONFGG; // 0x0
//   private static bool GONBFJNOFAA; // 0x8
//   private static bool DOLEAAFOLFC; // 0x9
//   private static bool FGNKMKFJHDK; // 0xA
//   private static bool NIGDAINCGMM; // 0xB
//   private static bool EDPGCJOCHIN; // 0xC
//   private static bool AJOAHCMGKNH; // 0xD
//   private static bool BEIEJGPCMEM; // 0xE
//   private List<TextDebugger.PMOEINNJDPK> NOLPECJJJPE; // 0xD8
//   private bool MLLLAEJFHLL; // 0xE0
//   private TextPic MFLJHPAJCNH; // 0xE8

// ===== protected override void OnDestroy()  [RVA 0x35A5E9C]
// Nekki.SF2.GUI.TextDebugger$$OnDestroy @ RVA 0x35A5E9C

void Nekki_SF2_GUI_TextDebugger__OnDestroy(Nekki_SF2_GUI_TextDebugger_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04568e0a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextDebugger_JELBJIIOFDK__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e0a = 1;
  }
  UnityEngine_UI_Graphic__OnDestroy((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  method_00 = extraout_x1;
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  Nekki_SF2_GUI_TextDebugger__JENDHHCONLG(CJNHFNHJHPE,method_00);
  return;
}


// ===== public static void set_GenerateAlignedLineBounds(bool CJNHFNHJHPE)  [RVA 0x35A6020]
// Nekki.SF2.GUI.TextDebugger$$set_GenerateAlignedLineBounds @ RVA 0x35A6020

void Nekki_SF2_GUI_TextDebugger__set_GenerateAlignedLineBounds(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568e0b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e0b = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_TextDebugger_TypeInfo,method);
  }
  Nekki_SF2_GUI_TextDebugger__DJAEEGIEDIO
            (&Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->FGNKMKFJHDK,CJNHFNHJHPE,in_x2);
  return;
}


// ===== public static bool get_GenerateAlignedLineBounds()  [RVA 0x35A61C4]
// Nekki.SF2.GUI.TextDebugger$$get_GenerateAlignedLineBounds @ RVA 0x35A61C4

bool Nekki_SF2_GUI_TextDebugger__get_GenerateAlignedLineBounds(MethodInfo *method)

{
  if ((DAT_04568e0c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e0c = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->FGNKMKFJHDK;
}


// ===== private static void DJAEEGIEDIO(ref bool PJNIFDCGNHG, bool NBHHBBOJJME)  [RVA 0x35A6080]
// Nekki.SF2.GUI.TextDebugger$$DJAEEGIEDIO @ RVA 0x35A6080

void Nekki_SF2_GUI_TextDebugger__DJAEEGIEDIO(bool *PJNIFDCGNHG,bool NBHHBBOJJME,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  System_Action_o *pSVar5;
  Il2CppClass *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04568e0d & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e0d = 1;
  }
  if (*PJNIFDCGNHG != NBHHBBOJJME) {
    *PJNIFDCGNHG = NBHHBBOJJME;
    if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->EBDPAKONFGG;
    if (pSVar5 != (System_Action_o *)0x0) {
      (*(code *)(pSVar5->fields).super.super.invoke_impl)
                ((pSVar5->fields).super.super.method_code,(pSVar5->fields).super.super.method);
    }
    bVar2 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                      (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    if (bVar2) {
      pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar6 = pIVar3->klass;
      uVar1._0_1_ = (pIVar6->_2).rank;
      uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar4 = pIVar6->vtable + (*piVar8 + 8);
            goto LAB_036a61ac;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,8);
LAB_036a61ac:
                    /* WARNING: Could not recover jumptable at 0x036a61bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(pIVar3,pVVar4->method);
      return;
    }
  }
  return;
}


// ===== public static void set_GenerateGlyphBounds(bool CJNHFNHJHPE)  [RVA 0x35A621C]
// Nekki.SF2.GUI.TextDebugger$$set_GenerateGlyphBounds @ RVA 0x35A621C

void Nekki_SF2_GUI_TextDebugger__set_GenerateGlyphBounds(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568e0e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e0e = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_TextDebugger_TypeInfo,method);
  }
  Nekki_SF2_GUI_TextDebugger__DJAEEGIEDIO
            (&Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->NIGDAINCGMM,CJNHFNHJHPE,in_x2);
  return;
}


// ===== private void Update()  [RVA 0x35A627C]
// Nekki.SF2.GUI.TextDebugger$$Update @ RVA 0x35A627C

void Nekki_SF2_GUI_TextDebugger__Update(Nekki_SF2_GUI_TextDebugger_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_RectTransform_o *that;
  UnityEngine_RectTransform_o *thiz;
  
  if ((DAT_04568e0f & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04568e0f = 1;
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__SetAsLastSibling(pUVar1,(MethodInfo *)0x0);
    if (*(char *)&(__this->fields).NOLPECJJJPE != '\0') {
      (*(__this->klass->vtable)._28_SetVerticesDirty.methodPtr)
                (__this,(__this->klass->vtable)._28_SetVerticesDirty.method);
      (*(__this->klass->vtable)._27_SetLayoutDirty.methodPtr)
                (__this,(__this->klass->vtable)._27_SetLayoutDirty.method);
      *(undefined1 *)&(__this->fields).NOLPECJJJPE = 0;
    }
    pUVar1 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      that = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__get_parent(pUVar1,(MethodInfo *)0x0);
      if (that == (UnityEngine_RectTransform_o *)0x0) {
        that = (UnityEngine_RectTransform_o *)0x0;
      }
      else if (that->klass != UnityEngine_RectTransform_TypeInfo) {
        that = (UnityEngine_RectTransform_o *)0x0;
      }
      thiz = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__ImposeOn(thiz,that,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool get_GenerateLineBounds()  [RVA 0x35A6354]
// Nekki.SF2.GUI.TextDebugger$$get_GenerateLineBounds @ RVA 0x35A6354

bool Nekki_SF2_GUI_TextDebugger__get_GenerateLineBounds(MethodInfo *method)

{
  if ((DAT_04568e10 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e10 = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->DOLEAAFOLFC;
}


// ===== public void PushAlignedTextLineBounds(Bounds ENGIOBJKJPM)  [RVA 0x35A63AC]
// Nekki.SF2.GUI.TextDebugger$$PushAlignedTextLineBounds @ RVA 0x35A63AC

void Nekki_SF2_GUI_TextDebugger__PushAlignedTextLineBounds
               (Nekki_SF2_GUI_TextDebugger_o *__this,UnityEngine_Bounds_o *ENGIOBJKJPM,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *__this_00;
  Il2CppArrayBounds *pIVar3;
  UnityEngine_Vector3_array *__this_01;
  UnityEngine_Color_o EFJKPCADGJH;
  UnityEngine_Bounds_o local_50;
  
  if ((DAT_04568e11 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e11 = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566f4f == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04566f4f = '\x01';
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->FGNKMKFJHDK != false) {
    *(undefined1 *)&(__this->fields).NOLPECJJJPE = 1;
    local_50.fields.m_Extents.fields.y = (ENGIOBJKJPM->fields).m_Extents.fields.y;
    local_50.fields.m_Extents.fields.z = (ENGIOBJKJPM->fields).m_Extents.fields.z;
    local_50.fields._8_8_ = *(undefined8 *)&(ENGIOBJKJPM->fields).m_Center.fields.z;
    local_50.fields.m_Center.fields.x = (ENGIOBJKJPM->fields).m_Center.fields.x;
    local_50.fields.m_Center.fields.y = (ENGIOBJKJPM->fields).m_Center.fields.y;
    __this_01 = (__this->fields).super.m_Corners;
    __this_00 = (Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *)
                thunk_FUN_01bda818(Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
    EFJKPCADGJH.fields.b = 0.0;
    EFJKPCADGJH.fields.a = 1.0;
    EFJKPCADGJH.fields.r = 0.0;
    EFJKPCADGJH.fields.g = 1.0;
    Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK___ctor(__this_00,&local_50,2.0,EFJKPCADGJH,-5.0,method);
    lVar2 = Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__;
    if (__this_01 != (UnityEngine_Vector3_array *)0x0) {
      pIVar3 = __this_01->bounds;
      *(int *)((long)&__this_01->max_length + 4) = *(int *)((long)&__this_01->max_length + 4) + 1;
      if (pIVar3 != (Il2CppArrayBounds *)0x0) {
        uVar1 = (uint)__this_01->max_length;
        if (uVar1 < (uint)pIVar3[1].lower_bound) {
          *(uint *)&__this_01->max_length = uVar1 + 1;
          (&pIVar3[2].length)[(int)uVar1] = (il2cpp_array_size_t)__this_00;
          thunk_FUN_01c20e04(&pIVar3[2].length + (int)uVar1,__this_00);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public static bool get_GenerateTextBounds()  [RVA 0x35A65F4]
// Nekki.SF2.GUI.TextDebugger$$get_GenerateTextBounds @ RVA 0x35A65F4

bool Nekki_SF2_GUI_TextDebugger__get_GenerateTextBounds(MethodInfo *method)

{
  if ((DAT_04568e12 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e12 = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->EDPGCJOCHIN;
}


// ===== public void PushTextLineBounds(Bounds ENGIOBJKJPM)  [RVA 0x35A664C]
// Nekki.SF2.GUI.TextDebugger$$PushTextLineBounds @ RVA 0x35A664C

void Nekki_SF2_GUI_TextDebugger__PushTextLineBounds
               (Nekki_SF2_GUI_TextDebugger_o *__this,UnityEngine_Bounds_o *ENGIOBJKJPM,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *__this_00;
  Il2CppArrayBounds *pIVar3;
  UnityEngine_Vector3_array *__this_01;
  UnityEngine_Color_o EFJKPCADGJH;
  UnityEngine_Bounds_o local_50;
  
  if ((DAT_04568e13 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e13 = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566f4e == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04566f4e = '\x01';
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->DOLEAAFOLFC != false) {
    *(undefined1 *)&(__this->fields).NOLPECJJJPE = 1;
    local_50.fields.m_Extents.fields.y = (ENGIOBJKJPM->fields).m_Extents.fields.y;
    local_50.fields.m_Extents.fields.z = (ENGIOBJKJPM->fields).m_Extents.fields.z;
    local_50.fields._8_8_ = *(undefined8 *)&(ENGIOBJKJPM->fields).m_Center.fields.z;
    local_50.fields.m_Center.fields.x = (ENGIOBJKJPM->fields).m_Center.fields.x;
    local_50.fields.m_Center.fields.y = (ENGIOBJKJPM->fields).m_Center.fields.y;
    __this_01 = (__this->fields).super.m_Corners;
    __this_00 = (Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *)
                thunk_FUN_01bda818(Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
    EFJKPCADGJH.fields.b = 1.0;
    EFJKPCADGJH.fields.a = 1.0;
    EFJKPCADGJH.fields.r = 0.0;
    EFJKPCADGJH.fields.g = 1.0;
    Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK___ctor(__this_00,&local_50,2.0,EFJKPCADGJH,-3.0,method);
    lVar2 = Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__;
    if (__this_01 != (UnityEngine_Vector3_array *)0x0) {
      pIVar3 = __this_01->bounds;
      *(int *)((long)&__this_01->max_length + 4) = *(int *)((long)&__this_01->max_length + 4) + 1;
      if (pIVar3 != (Il2CppArrayBounds *)0x0) {
        uVar1 = (uint)__this_01->max_length;
        if (uVar1 < (uint)pIVar3[1].lower_bound) {
          *(uint *)&__this_01->max_length = uVar1 + 1;
          (&pIVar3[2].length)[(int)uVar1] = (il2cpp_array_size_t)__this_00;
          thunk_FUN_01c20e04(&pIVar3[2].length + (int)uVar1,__this_00);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void PushGlyphs(List<IHIFNKAMALG> KIOJIHNIIDE)  [RVA 0x35A67E0]
// Nekki.SF2.GUI.TextDebugger$$PushGlyphs @ RVA 0x35A67E0

void Nekki_SF2_GUI_TextDebugger__PushGlyphs
               (Nekki_SF2_GUI_TextDebugger_o *__this,
               System_Collections_Generic_List_IHIFNKAMALG__o *KIOJIHNIIDE,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *__this_00;
  MethodInfo *in_x3;
  Il2CppArrayBounds *pIVar5;
  uint index;
  UnityEngine_Vector3_array *__this_01;
  float CJJFPABAAFB;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  uint uVar11;
  UnityEngine_Color_o EFJKPCADGJH;
  
  if ((DAT_04568e14 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e14 = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566f50 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04566f50 = '\x01';
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if ((((KIOJIHNIIDE != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) &&
       (Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->NIGDAINCGMM != false)) &&
      (iVar1 = (KIOJIHNIIDE->fields)._size, iVar1 != 0)) &&
     (*(undefined1 *)&(__this->fields).NOLPECJJJPE = 1, 0 < iVar1)) {
    index = 0;
    do {
      CJJFPABAAFB = 10.0;
      uVar11 = 0x3f800000;
      if ((index & 4) != 0) {
        CJJFPABAAFB = 15.0;
        uVar11 = 0;
      }
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)KIOJIHNIIDE,index,
                          Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) {
LAB_036a6a70:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      fVar9 = *(float *)&pIVar4[1].klass;
      uVar10 = *(undefined8 *)((long)&pIVar4[1].klass + 4);
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)KIOJIHNIIDE,index + 2,
                          Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_036a6a70;
      uVar7 = *(undefined8 *)((long)&pIVar4[1].klass + 4);
      __this_01 = (__this->fields).super.m_Corners;
      fVar9 = fVar9 - *(float *)&pIVar4[1].klass;
      fVar6 = (float)uVar10 - (float)uVar7;
      fVar8 = (float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar7 >> 0x20);
      fVar6 = fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8;
      fVar9 = 2.0;
      if (fVar6 <= 0.1) {
        fVar9 = 3.0;
      }
      uVar2 = 0x3f800000;
      if (fVar6 <= 0.1) {
        CJJFPABAAFB = -5.0;
        uVar11 = 0;
        uVar2 = 0;
      }
      __this_00 = (Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *)
                  thunk_FUN_01bda818(Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
      EFJKPCADGJH.fields.g = 0.0;
      EFJKPCADGJH.fields.r = (float)uVar2;
      EFJKPCADGJH.fields.a = 1.0;
      EFJKPCADGJH.fields.b = (float)uVar11;
      Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK___ctor
                (__this_00,KIOJIHNIIDE,index,fVar9,EFJKPCADGJH,CJJFPABAAFB,in_x3);
      lVar3 = Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__;
      if (__this_01 == (UnityEngine_Vector3_array *)0x0) goto LAB_036a6a70;
      pIVar5 = __this_01->bounds;
      *(int *)((long)&__this_01->max_length + 4) = *(int *)((long)&__this_01->max_length + 4) + 1;
      if (pIVar5 == (Il2CppArrayBounds *)0x0) goto LAB_036a6a70;
      uVar11 = (uint)__this_01->max_length;
      if (uVar11 < (uint)pIVar5[1].lower_bound) {
        *(uint *)&__this_01->max_length = uVar11 + 1;
        (&pIVar5[2].length)[(int)uVar11] = (il2cpp_array_size_t)__this_00;
        thunk_FUN_01c20e04(&pIVar5[2].length + (int)uVar11,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      index = index + 4;
    } while ((int)index < (KIOJIHNIIDE->fields)._size);
  }
  return;
}


// ===== public void .ctor()  [RVA 0x35A6CAC]
// Nekki.SF2.GUI.TextDebugger$$.ctor @ RVA 0x35A6CAC

void Nekki_SF2_GUI_TextDebugger___ctor(Nekki_SF2_GUI_TextDebugger_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_array *__this_00;
  UnityEngine_Vector3_array **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568e15 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_TypeInfo);
    DAT_04568e15 = 1;
    method = extraout_x1;
  }
  __this_00 = (UnityEngine_Vector3_array *)
              thunk_FUN_01bda818(System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>__ctor__);
  ppUVar1 = &(__this->fields).super.m_Corners;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  *(undefined1 *)&(__this->fields).NOLPECJJJPE = 1;
  UnityEngine_UI_MaskableGraphic___ctor
            ((UnityEngine_UI_MaskableGraphic_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static bool get_GenerateRTBounds()  [RVA 0x35A6D3C]
// Nekki.SF2.GUI.TextDebugger$$get_GenerateRTBounds @ RVA 0x35A6D3C

bool Nekki_SF2_GUI_TextDebugger__get_GenerateRTBounds(MethodInfo *method)

{
  if ((DAT_04568e16 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e16 = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->BEIEJGPCMEM;
}


// ===== public static bool get_GenerateDebugInfo()  [RVA 0x35A6D94]
// Nekki.SF2.GUI.TextDebugger$$get_GenerateDebugInfo @ RVA 0x35A6D94

bool Nekki_SF2_GUI_TextDebugger__get_GenerateDebugInfo(MethodInfo *method)

{
  if ((DAT_04568e17 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e17 = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->GONBFJNOFAA;
}


// ===== public static void set_GenerateAlignedTextBounds(bool CJNHFNHJHPE)  [RVA 0x35A6DEC]
// Nekki.SF2.GUI.TextDebugger$$set_GenerateAlignedTextBounds @ RVA 0x35A6DEC

void Nekki_SF2_GUI_TextDebugger__set_GenerateAlignedTextBounds(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568e18 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e18 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_TextDebugger_TypeInfo,method);
  }
  Nekki_SF2_GUI_TextDebugger__DJAEEGIEDIO
            (&Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->AJOAHCMGKNH,CJNHFNHJHPE,in_x2);
  return;
}


// ===== public void Clear()  [RVA 0x35A6E4C]
// Nekki.SF2.GUI.TextDebugger$$Clear @ RVA 0x35A6E4C

void Nekki_SF2_GUI_TextDebugger__Clear(Nekki_SF2_GUI_TextDebugger_o *__this,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  UnityEngine_Vector3_array *pUVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04568e19 & 1) == 0) {
    auVar3 = FUN_01bab630(&Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Clear__)
    ;
    DAT_04568e19 = 1;
  }
  pUVar2 = (__this->fields).super.m_Corners;
  *(undefined1 *)&(__this->fields).NOLPECJJJPE = 1;
  if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
    length = (int32_t)pUVar2->max_length;
    iVar1 = *(int *)((long)&pUVar2->max_length + 4);
    *(undefined4 *)&pUVar2->max_length = 0;
    *(int *)((long)&pUVar2->max_length + 4) = iVar1 + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)pUVar2->bounds,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== public static void set_GenerateDebugInfo(bool CJNHFNHJHPE)  [RVA 0x35A6EC4]
// Nekki.SF2.GUI.TextDebugger$$set_GenerateDebugInfo @ RVA 0x35A6EC4

void Nekki_SF2_GUI_TextDebugger__set_GenerateDebugInfo(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568e1a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e1a = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_TextDebugger_TypeInfo,method);
  }
  Nekki_SF2_GUI_TextDebugger__DJAEEGIEDIO
            (&Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->GONBFJNOFAA,CJNHFNHJHPE,in_x2);
  return;
}


// ===== public void PushRTBounds(Bounds ENGIOBJKJPM)  [RVA 0x35A6F24]
// Nekki.SF2.GUI.TextDebugger$$PushRTBounds @ RVA 0x35A6F24

void Nekki_SF2_GUI_TextDebugger__PushRTBounds
               (Nekki_SF2_GUI_TextDebugger_o *__this,UnityEngine_Bounds_o *ENGIOBJKJPM,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *__this_00;
  Il2CppArrayBounds *pIVar3;
  UnityEngine_Vector3_array *__this_01;
  UnityEngine_Color_o EFJKPCADGJH;
  UnityEngine_Bounds_o local_50;
  
  if ((DAT_04568e1b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e1b = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568eea == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568eea = '\x01';
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->BEIEJGPCMEM != false) {
    *(undefined1 *)&(__this->fields).NOLPECJJJPE = 1;
    local_50.fields.m_Extents.fields.y = (ENGIOBJKJPM->fields).m_Extents.fields.y;
    local_50.fields.m_Extents.fields.z = (ENGIOBJKJPM->fields).m_Extents.fields.z;
    local_50.fields._8_8_ = *(undefined8 *)&(ENGIOBJKJPM->fields).m_Center.fields.z;
    local_50.fields.m_Center.fields.x = (ENGIOBJKJPM->fields).m_Center.fields.x;
    local_50.fields.m_Center.fields.y = (ENGIOBJKJPM->fields).m_Center.fields.y;
    __this_01 = (__this->fields).super.m_Corners;
    __this_00 = (Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *)
                thunk_FUN_01bda818(Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
    EFJKPCADGJH.fields.b = 1.0;
    EFJKPCADGJH.fields.a = 1.0;
    EFJKPCADGJH.fields.r = 1.0;
    EFJKPCADGJH.fields.g = 1.0;
    Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK___ctor(__this_00,&local_50,2.0,EFJKPCADGJH,5.0,method);
    lVar2 = Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__;
    if (__this_01 != (UnityEngine_Vector3_array *)0x0) {
      pIVar3 = __this_01->bounds;
      *(int *)((long)&__this_01->max_length + 4) = *(int *)((long)&__this_01->max_length + 4) + 1;
      if (pIVar3 != (Il2CppArrayBounds *)0x0) {
        uVar1 = (uint)__this_01->max_length;
        if (uVar1 < (uint)pIVar3[1].lower_bound) {
          *(uint *)&__this_01->max_length = uVar1 + 1;
          (&pIVar3[2].length)[(int)uVar1] = (il2cpp_array_size_t)__this_00;
          thunk_FUN_01c20e04(&pIVar3[2].length + (int)uVar1,__this_00);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public static void set_GenerateLineBounds(bool CJNHFNHJHPE)  [RVA 0x35A70B8]
// Nekki.SF2.GUI.TextDebugger$$set_GenerateLineBounds @ RVA 0x35A70B8

void Nekki_SF2_GUI_TextDebugger__set_GenerateLineBounds(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568e1c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e1c = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_TextDebugger_TypeInfo,method);
  }
  Nekki_SF2_GUI_TextDebugger__DJAEEGIEDIO
            (&Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->DOLEAAFOLFC,CJNHFNHJHPE,in_x2);
  return;
}


// ===== public static bool get_GenerateGlyphBounds()  [RVA 0x35A7118]
// Nekki.SF2.GUI.TextDebugger$$get_GenerateGlyphBounds @ RVA 0x35A7118

bool Nekki_SF2_GUI_TextDebugger__get_GenerateGlyphBounds(MethodInfo *method)

{
  if ((DAT_04568e1d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e1d = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->NIGDAINCGMM;
}


// ===== private static void DKHEFKJGCOB(Action CJNHFNHJHPE)  [RVA 0x35A7170]
// Nekki.SF2.GUI.TextDebugger$$DKHEFKJGCOB @ RVA 0x35A7170

void Nekki_SF2_GUI_TextDebugger__DKHEFKJGCOB(System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *a;
  
                    /* try { // try from 036a7188 to 037a7437 has its CatchHandler @ 036a7188
                       catch() { ... } // from try @ 036a7188 with catch @ 036a7188
                       catch() { ... } // from try @ 036a7544 with catch @ 036a7188
                       catch() { ... } // from try @ 036a7614 with catch @ 036a7188
                       catch() { ... } // from try @ 036a761c with catch @ 036a7188
                       catch() { ... } // from try @ 036a76e4 with catch @ 036a7188 */
  if ((DAT_04568e1e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e1e = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_TextDebugger_TypeInfo,method);
  }
  a = Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->EBDPAKONFGG;
  do {
    pSVar2 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)
             FUN_01c07368(Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields,pSVar2,a);
    bVar1 = a != pSVar3;
    a = pSVar3;
  } while (bVar1);
  return;
}


// ===== public static void set_GenerateRTBounds(bool CJNHFNHJHPE)  [RVA 0x35A7248]
// Nekki.SF2.GUI.TextDebugger$$set_GenerateRTBounds @ RVA 0x35A7248

void Nekki_SF2_GUI_TextDebugger__set_GenerateRTBounds(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568e1f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e1f = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_TextDebugger_TypeInfo,method);
  }
  Nekki_SF2_GUI_TextDebugger__DJAEEGIEDIO
            (&Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->BEIEJGPCMEM,CJNHFNHJHPE,in_x2);
  return;
}


// ===== protected override void OnPopulateMesh(VertexHelper AABJHMHFLDI)  [RVA 0x35A72A8]
// Nekki.SF2.GUI.TextDebugger$$OnPopulateMesh @ RVA 0x35A72A8

void Nekki_SF2_GUI_TextDebugger__OnPopulateMesh
               (Nekki_SF2_GUI_TextDebugger_o *__this,UnityEngine_UI_VertexHelper_o *AABJHMHFLDI,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector3_array *__this_00;
  Il2CppClass *local_60;
  void *pvStack_58;
  Il2CppClass *local_50;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568e20 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextDebugger_PMOEINNJDPK>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextDebugger_PMOEINNJDPK>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextDebugger_PMOEINNJDPK>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_GetEnumerator__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e20 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (AABJHMHFLDI != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(AABJHMHFLDI,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04566f4d == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
      DAT_04566f4d = '\x01';
    }
    if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->GONBFJNOFAA != false) {
      __this_00 = (__this->fields).super.m_Corners;
      if (__this_00 == (UnityEngine_Vector3_array *)0x0) goto LAB_036a7418;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_GetEnumerator__);
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<TextDebugger_PMOEINNJDPK>_MoveNext__
                          );
        if (!bVar1) break;
        if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pvStack_58 = local_48.fields._current[1].monitor;
        local_60 = local_48.fields._current[1].klass;
        local_50 = local_48.fields._current[2].klass;
        OMANDMDCGMF__PMNCECHABEA
                  ((UnityEngine_Bounds_o *)&local_60,
                   (UnityEngine_Color_o)
                   *(UnityEngine_Color_Fields *)((long)&local_48.fields._current[2].monitor + 4),
                   *(float *)&local_48.fields._current[2].monitor,AABJHMHFLDI,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,
                 Method_System_Collections_Generic_List_Enumerator<TextDebugger_PMOEINNJDPK>_Dispose__
                );
    }
    return;
  }
LAB_036a7418:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static TextDebugger Instantiate(GameObject ELOCKFLGKNO, TextPic FJIIJLKIKLE)  [RVA 0x35A7498]
// Nekki.SF2.GUI.TextDebugger$$Instantiate @ RVA 0x35A7498

Nekki_SF2_GUI_TextDebugger_o *
Nekki_SF2_GUI_TextDebugger__Instantiate
          (UnityEngine_GameObject_o *ELOCKFLGKNO,Nekki_SF2_GUI_TextPic_o *FJIIJLKIKLE,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_TextDebugger_o *pNVar1;
  
  if ((DAT_04568e21 & 1) == 0) {
                    /* try { // try from 036a74d0 to 037a74d7 has its CatchHandler @ 036a7650 */
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<TextDebugger>__);
                    /* try { // try from 036a74e0 to 037a74e7 has its CatchHandler @ 036a7640 */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
                    /* try { // try from 036a74ec to 037a74f3 has its CatchHandler @ 036a7644 */
    FUN_01bab630(&StringLiteral_12890/*"TextDebugger"*/);
    DAT_04568e21 = 1;
  }
  __this = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
                    /* try { // try from 036a750c to 037a7513 has its CatchHandler @ 036a763c */
  UnityEngine_GameObject___ctor(__this,StringLiteral_12890/*"TextDebugger"*/,(MethodInfo *)0x0);
                    /* try { // try from 036a751c to 037a7523 has its CatchHandler @ 036a762c */
                    /* try { // try from 036a7524 to 037a752f has its CatchHandler @ 036a7634 */
                    /* try { // try from 036a7538 to 037a7543 has its CatchHandler @ 036a7630 */
  if (((__this != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
      ELOCKFLGKNO != (UnityEngine_GameObject_o *)0x0)) &&
     (parent = UnityEngine_GameObject__get_transform(ELOCKFLGKNO,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 036a7544 to 037a7603 has its CatchHandler @ 036a7188 */
    UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
    UnityEngine_GameObject__AddComponent<object>
              (__this,Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    pNVar1 = (Nekki_SF2_GUI_TextDebugger_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this,Method_UnityEngine_GameObject_AddComponent<TextDebugger>__);
    if (pNVar1 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
      (*((Il2CppClass *)pNVar1->klass)->vtable[0x41].methodPtr)
                (pNVar1,FJIIJLKIKLE,((Il2CppClass *)pNVar1->klass)->vtable[0x41].method);
      return pNVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool get_GenerateAlignedTextBounds()  [RVA 0x35A75B0]
// Nekki.SF2.GUI.TextDebugger$$get_GenerateAlignedTextBounds @ RVA 0x35A75B0

bool Nekki_SF2_GUI_TextDebugger__get_GenerateAlignedTextBounds(MethodInfo *method)

{
  if ((DAT_04568e22 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e22 = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 036a7604 to 037a7607 has its CatchHandler @ 036a764c */
  return Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->AJOAHCMGKNH;
}


// ===== public static void set_GenerateTextBounds(bool CJNHFNHJHPE)  [RVA 0x35A7608]
// Nekki.SF2.GUI.TextDebugger$$set_GenerateTextBounds @ RVA 0x35A7608

void Nekki_SF2_GUI_TextDebugger__set_GenerateTextBounds(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 036a7608 to 037a760b has its CatchHandler @ 036a7648 */
                    /* try { // try from 036a760c to 037a760f has its CatchHandler @ 036a7638 */
                    /* try { // try from 036a7610 to 037a7613 has its CatchHandler @ 036a7628 */
                    /* try { // try from 036a7614 to 037a7617 has its CatchHandler @ 036a7188 */
                    /* try { // try from 036a7618 to 037a761b has its CatchHandler @ 036a7624 */
                    /* try { // try from 036a761c to 037a7667 has its CatchHandler @ 036a7188 */
                    /* catch() { ... } // from try @ 036a7618 with catch @ 036a7624 */
  if ((DAT_04568e23 & 1) == 0) {
                    /* catch() { ... } // from try @ 036a7610 with catch @ 036a7628 */
                    /* catch() { ... } // from try @ 036a751c with catch @ 036a762c */
                    /* catch() { ... } // from try @ 036a7538 with catch @ 036a7630 */
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
                    /* catch() { ... } // from try @ 036a7524 with catch @ 036a7634 */
                    /* catch() { ... } // from try @ 036a760c with catch @ 036a7638 */
    DAT_04568e23 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 036a750c with catch @ 036a763c */
                    /* catch() { ... } // from try @ 036a74e0 with catch @ 036a7640 */
                    /* catch() { ... } // from try @ 036a74ec with catch @ 036a7644 */
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 036a7608 with catch @ 036a7648 */
    thunk_FUN_01ba7564(Nekki_SF2_GUI_TextDebugger_TypeInfo,method);
                    /* catch() { ... } // from try @ 036a7604 with catch @ 036a764c */
  }
                    /* catch() { ... } // from try @ 036a74d0 with catch @ 036a7650 */
                    /* catch() { ... } // from try @ 036a7494 with catch @ 036a7654 */
                    /* catch() { ... } // from try @ 036a7438 with catch @ 036a7658 */
  Nekki_SF2_GUI_TextDebugger__DJAEEGIEDIO
            (&Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->EDPGCJOCHIN,CJNHFNHJHPE,in_x2);
  return;
}


// ===== private void JELBJIIOFDK()  [RVA 0x35A7668]
// Nekki.SF2.GUI.TextDebugger$$JELBJIIOFDK @ RVA 0x35A7668

void Nekki_SF2_GUI_TextDebugger__JELBJIIOFDK
               (Nekki_SF2_GUI_TextDebugger_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TextPic_o *__this_00;
  
                    /* try { // try from 036a7668 to 037a766b has its CatchHandler @ 036a767c */
  Nekki_SF2_GUI_TextDebugger__Clear(__this,method);
  __this_00 = *(Nekki_SF2_GUI_TextPic_o **)&(__this->fields).MLLLAEJFHLL;
  if (__this_00 != (Nekki_SF2_GUI_TextPic_o *)0x0) {
                    /* catch() { ... } // from try @ 036a7668 with catch @ 036a767c */
    Nekki_SF2_GUI_TextPic__Invalidate(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x35A768C]
// Nekki.SF2.GUI.TextDebugger$$.cctor @ RVA 0x35A768C

void Nekki_SF2_GUI_TextDebugger___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_TextDebugger_StaticFields *pNVar1;
  
  if ((DAT_04568e24 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e24 = 1;
  }
                    /* try { // try from 036a76bc to 037a76e3 has its CatchHandler @ 036a76f8 */
  pNVar1 = Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields;
  pNVar1->GONBFJNOFAA = false;
  pNVar1->DOLEAAFOLFC = true;
  pNVar1->FGNKMKFJHDK = true;
  pNVar1->NIGDAINCGMM = true;
  pNVar1->EDPGCJOCHIN = true;
  pNVar1->AJOAHCMGKNH = true;
  pNVar1->BEIEJGPCMEM = true;
  return;
}


// ===== public void PushTextBounds(Bounds ENGIOBJKJPM)  [RVA 0x35A76E0]
// Nekki.SF2.GUI.TextDebugger$$PushTextBounds @ RVA 0x35A76E0

void Nekki_SF2_GUI_TextDebugger__PushTextBounds
               (Nekki_SF2_GUI_TextDebugger_o *__this,UnityEngine_Bounds_o *ENGIOBJKJPM,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *__this_00;
  Il2CppArrayBounds *pIVar3;
  UnityEngine_Vector3_array *__this_01;
  UnityEngine_Color_o EFJKPCADGJH;
  UnityEngine_Bounds_o local_50;
  
                    /* try { // try from 036a76e4 to 037a76ef has its CatchHandler @ 036a7188 */
                    /* try { // try from 036a76f0 to 037a76f7 has its CatchHandler @ 036a76f8 */
                    /* catch() { ... } // from try @ 036a76bc with catch @ 036a76f8
                       catch() { ... } // from try @ 036a76f0 with catch @ 036a76f8 */
  if ((DAT_04568e25 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e25 = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566f51 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04566f51 = '\x01';
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->EDPGCJOCHIN != false) {
    *(undefined1 *)&(__this->fields).NOLPECJJJPE = 1;
    local_50.fields.m_Extents.fields.y = (ENGIOBJKJPM->fields).m_Extents.fields.y;
    local_50.fields.m_Extents.fields.z = (ENGIOBJKJPM->fields).m_Extents.fields.z;
    local_50.fields._8_8_ = *(undefined8 *)&(ENGIOBJKJPM->fields).m_Center.fields.z;
    local_50.fields.m_Center.fields.x = (ENGIOBJKJPM->fields).m_Center.fields.x;
    local_50.fields.m_Center.fields.y = (ENGIOBJKJPM->fields).m_Center.fields.y;
    __this_01 = (__this->fields).super.m_Corners;
    __this_00 = (Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *)
                thunk_FUN_01bda818(Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
    EFJKPCADGJH.fields.b = 0.015686275;
    EFJKPCADGJH.fields.a = 1.0;
    EFJKPCADGJH.fields.r = 1.0;
    EFJKPCADGJH.fields.g = 0.92156863;
    Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK___ctor(__this_00,&local_50,2.0,EFJKPCADGJH,7.0,method);
    lVar2 = Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__;
    if (__this_01 != (UnityEngine_Vector3_array *)0x0) {
      pIVar3 = __this_01->bounds;
      *(int *)((long)&__this_01->max_length + 4) = *(int *)((long)&__this_01->max_length + 4) + 1;
      if (pIVar3 != (Il2CppArrayBounds *)0x0) {
        uVar1 = (uint)__this_01->max_length;
        if (uVar1 < (uint)pIVar3[1].lower_bound) {
          *(uint *)&__this_01->max_length = uVar1 + 1;
          (&pIVar3[2].length)[(int)uVar1] = (il2cpp_array_size_t)__this_00;
          thunk_FUN_01c20e04(&pIVar3[2].length + (int)uVar1,__this_00);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void PushAlignedTextBounds(Bounds ENGIOBJKJPM)  [RVA 0x35A787C]
// Nekki.SF2.GUI.TextDebugger$$PushAlignedTextBounds @ RVA 0x35A787C

void Nekki_SF2_GUI_TextDebugger__PushAlignedTextBounds
               (Nekki_SF2_GUI_TextDebugger_o *__this,UnityEngine_Bounds_o *ENGIOBJKJPM,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *__this_00;
  Il2CppArrayBounds *pIVar3;
  UnityEngine_Vector3_array *__this_01;
  UnityEngine_Color_o EFJKPCADGJH;
  UnityEngine_Bounds_o local_50;
  
  if ((DAT_04568e26 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e26 = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566f52 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04566f52 = '\x01';
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->AJOAHCMGKNH != false) {
    *(undefined1 *)&(__this->fields).NOLPECJJJPE = 1;
    local_50.fields.m_Extents.fields.y = (ENGIOBJKJPM->fields).m_Extents.fields.y;
    local_50.fields.m_Extents.fields.z = (ENGIOBJKJPM->fields).m_Extents.fields.z;
    local_50.fields._8_8_ = *(undefined8 *)&(ENGIOBJKJPM->fields).m_Center.fields.z;
    local_50.fields.m_Center.fields.x = (ENGIOBJKJPM->fields).m_Center.fields.x;
    local_50.fields.m_Center.fields.y = (ENGIOBJKJPM->fields).m_Center.fields.y;
    __this_01 = (__this->fields).super.m_Corners;
    __this_00 = (Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *)
                thunk_FUN_01bda818(Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
    EFJKPCADGJH.fields.b = 0.0;
    EFJKPCADGJH.fields.a = 1.0;
    EFJKPCADGJH.fields.r = 1.0;
    EFJKPCADGJH.fields.g = 0.0;
    Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK___ctor(__this_00,&local_50,2.0,EFJKPCADGJH,9.0,method);
    lVar2 = Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__;
    if (__this_01 != (UnityEngine_Vector3_array *)0x0) {
      pIVar3 = __this_01->bounds;
      *(int *)((long)&__this_01->max_length + 4) = *(int *)((long)&__this_01->max_length + 4) + 1;
      if (pIVar3 != (Il2CppArrayBounds *)0x0) {
        uVar1 = (uint)__this_01->max_length;
        if (uVar1 < (uint)pIVar3[1].lower_bound) {
          *(uint *)&__this_01->max_length = uVar1 + 1;
          (&pIVar3[2].length)[(int)uVar1] = (il2cpp_array_size_t)__this_00;
          thunk_FUN_01c20e04(&pIVar3[2].length + (int)uVar1,__this_00);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== protected virtual void GIENGNEGHPJ(TextPic FJIIJLKIKLE)  [RVA 0x35A7A10]
// Nekki.SF2.GUI.TextDebugger$$GIENGNEGHPJ @ RVA 0x35A7A10

void Nekki_SF2_GUI_TextDebugger__GIENGNEGHPJ
               (Nekki_SF2_GUI_TextDebugger_o *__this,Nekki_SF2_GUI_TextPic_o *FJIIJLKIKLE,
               MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  bool_conflict *pbVar1;
  
                    /* try { // try from 036a7a18 to 037a7adb has its CatchHandler @ 036a7a18
                       catch() { ... } // from try @ 036a7a18 with catch @ 036a7a18
                       catch() { ... } // from try @ 036a7b94 with catch @ 036a7a18
                       catch() { ... } // from try @ 036a7bd0 with catch @ 036a7a18
                       catch() { ... } // from try @ 036a7bdc with catch @ 036a7a18
                       catch() { ... } // from try @ 036a7c34 with catch @ 036a7a18
                       catch() { ... } // from try @ 036a7c7c with catch @ 036a7a18 */
  if ((DAT_04568e27 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Material_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextDebugger_JELBJIIOFDK__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    FUN_01bab630(&StringLiteral_14098/*"UI/Default"*/);
    DAT_04568e27 = 1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  method_00 = extraout_x1;
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  Nekki_SF2_GUI_TextDebugger__DKHEFKJGCOB(CJNHFNHJHPE,method_00);
                    /* try { // try from 036a7adc to 037a7ae3 has its CatchHandler @ 036a7c18 */
  shader = UnityEngine_Shader__Find(StringLiteral_14098/*"UI/Default"*/,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Material_o *)thunk_FUN_01bda818(UnityEngine_Material_TypeInfo);
                    /* try { // try from 036a7afc to 037a7b03 has its CatchHandler @ 036a7c0c */
  UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
                    /* try { // try from 036a7b08 to 037a7b0f has its CatchHandler @ 036a7c10 */
                    /* try { // try from 036a7b10 to 037a7b1b has its CatchHandler @ 036a7c14 */
  (*(__this->klass->vtable)._33_set_material.methodPtr)
            (__this,__this_00,(__this->klass->vtable)._33_set_material.method);
                    /* try { // try from 036a7b38 to 037a7b43 has its CatchHandler @ 036a7bf4 */
  (*(__this->klass->vtable)._23_set_color.methodPtr)
            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,__this,
             (__this->klass->vtable)._23_set_color.method);
                    /* try { // try from 036a7b48 to 037a7b4f has its CatchHandler @ 036a7bf0 */
                    /* try { // try from 036a7b50 to 037a7b5b has its CatchHandler @ 036a7bec */
  (*(__this->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this,0,(__this->klass->vtable)._25_set_raycastTarget.method);
  pbVar1 = &(__this->fields).MLLLAEJFHLL;
  *(Nekki_SF2_GUI_TextPic_o **)pbVar1 = FJIIJLKIKLE;
                    /* try { // try from 036a7b6c to 037a7b73 has its CatchHandler @ 036a7bdc */
  thunk_FUN_01c20e04(pbVar1,FJIIJLKIKLE);
  return;
}


// ===== private static void JENDHHCONLG(Action CJNHFNHJHPE)  [RVA 0x35A5F48]
// Nekki.SF2.GUI.TextDebugger$$JENDHHCONLG @ RVA 0x35A5F48

void Nekki_SF2_GUI_TextDebugger__JENDHHCONLG(System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *source;
  
  if ((DAT_04568e28 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e28 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_TextDebugger_TypeInfo,method);
  }
  source = Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->EBDPAKONFGG;
  do {
    pSVar2 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)
             FUN_01c07368(Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields,pSVar2,source);
    bVar1 = source != pSVar3;
    source = pSVar3;
  } while (bVar1);
  return;
}

