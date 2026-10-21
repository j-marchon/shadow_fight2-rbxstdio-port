// TypeDefIndex 2383
// Namespace: Nekki.SF2.GUI.Pvp
// public class PlayerSelector : MonoBehaviour
// Fields:
//   private Transform _LeftBorderContainer; // 0x20
//   private Transform _RightBorderContainer; // 0x28
//   private UILine NAFBBOFAHAB; // 0x30
//   private UILine OAIKFLKDOBC; // 0x38
//   public int xPosition; // 0x40
//   public int yPosition; // 0x44
//   private bool KKPJEFOMLBP; // 0x48
//   private Transform[] FCGNALDLKNA; // 0x50
//   private Vector2 OCKGCJMKBIG; // 0x58
//   public Color defaultColor; // 0x60
//   public Color paleColor; // 0x70

// ===== private void Start()  [RVA 0x332F650]
// Nekki.SF2.GUI.Pvp.PlayerSelector$$Start @ RVA 0x332F650

void Nekki_SF2_GUI_Pvp_PlayerSelector__Start
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_Fields UVar1;
  
  if ((DAT_045678f9 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_045678f9 = 1;
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,
                         Method_UnityEngine_Component_GetComponent<RectTransform>__);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
    (__this->fields).OCKGCJMKBIG.fields = UVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private UILine GCPGIJOGPIP()  [RVA 0x332F6B0]
// Nekki.SF2.GUI.Pvp.PlayerSelector$$GCPGIJOGPIP @ RVA 0x332F6B0

UIFigures_UILine_o *
Nekki_SF2_GUI_Pvp_PlayerSelector__GCPGIJOGPIP
          (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_x1;
  UIFigures_UILine_o **ppUVar2;
  UIFigures_UILine_o *pUVar3;
  
  if ((DAT_045678fa & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<UILine>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045678fa = 1;
    method = extraout_x1;
  }
  ppUVar2 = &(__this->fields).OAIKFLKDOBC;
  pUVar3 = *ppUVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._RightBorderContainer;
    if (__this_00 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar3 = (UIFigures_UILine_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this_00,
                        Method_UnityEngine_Component_GetComponent<UILine>__);
    *ppUVar2 = pUVar3;
    thunk_FUN_01c20e04(ppUVar2,pUVar3);
  }
  return *ppUVar2;
}


// ===== private IEnumerator EEEOCIACHAA(Transform DJGDJPGAFPG, int DPJIDNBJIBG, float JONBHCOPDOE, float LFJGFLNMBMC)  [RVA 0x332F760]
// Nekki.SF2.GUI.Pvp.PlayerSelector$$EEEOCIACHAA @ RVA 0x332F760

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Pvp_PlayerSelector__EEEOCIACHAA
          (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,UnityEngine_Transform_o *DJGDJPGAFPG,
          int32_t DPJIDNBJIBG,float JONBHCOPDOE,float LFJGFLNMBMC,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_045678fb & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA_TypeInfo);
    DAT_045678fb = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].monitor = DJGDJPGAFPG;
  thunk_FUN_01c20e04(&__this_00[2].monitor,DJGDJPGAFPG);
  *(int32_t *)&__this_00[3].klass = DPJIDNBJIBG;
  *(float *)((long)&__this_00[3].klass + 4) = JONBHCOPDOE;
  *(float *)&__this_00[2].klass = LFJGFLNMBMC;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void OnDisable()  [RVA 0x332F81C]
// Nekki.SF2.GUI.Pvp.PlayerSelector$$OnDisable @ RVA 0x332F81C

void Nekki_SF2_GUI_Pvp_PlayerSelector__OnDisable
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar1 = (__this->fields)._LeftBorderContainer;
  if ((pUVar1 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._RightBorderContainer;
    if ((pUVar1 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SelectCurrentItem(bool CJNHFNHJHPE)  [RVA 0x332F86C]
// Nekki.SF2.GUI.Pvp.PlayerSelector$$SelectCurrentItem @ RVA 0x332F86C

void Nekki_SF2_GUI_Pvp_PlayerSelector__SelectCurrentItem
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Color_o *pUVar3;
  UIFigures_UILine_o *pUVar4;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar5;
  Il2CppObject *pIVar6;
  MethodInfo *pMVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *extraout_x1_01;
  int32_t ease;
  int32_t loops;
  UnityEngine_Color_o *pUVar8;
  float duration;
  UnityEngine_Color_o endValue;
  
  pMVar7 = (MethodInfo *)(ulong)CJNHFNHJHPE;
  if ((DAT_045678fc & 1) == 0) {
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    DAT_045678fc = 1;
    pMVar7 = extraout_x1;
  }
  (__this->fields).KKPJEFOMLBP = CJNHFNHJHPE;
  pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__PDGEDEIGEHM(__this,pMVar7);
  DG_Tweening_ShortcutExtensions__DOKill((UnityEngine_Component_o *)pUVar4,false,(MethodInfo *)0x0);
  pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__PDGEDEIGEHM(__this,method_00);
  if (CJNHFNHJHPE) {
    if (pUVar4 != (UIFigures_UILine_o *)0x0) {
      (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pUVar4,
                 (pUVar4->klass->vtable)._23_set_color.method);
      pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__PDGEDEIGEHM(__this,method_01);
      duration = 0.06;
      pUVar8 = &(__this->fields).defaultColor;
      pUVar1 = &(__this->fields).defaultColor;
      pUVar2 = &(__this->fields).defaultColor;
      pUVar3 = &(__this->fields).defaultColor;
      pDVar5 = DG_Tweening_DOTweenModuleUI__DOColor
                         ((UnityEngine_UI_Graphic_o *)pUVar4,(UnityEngine_Color_o)pUVar8->fields,
                          0.06,(MethodInfo *)0x0);
      pIVar6 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                         ((Il2CppObject *)pDVar5,7,1,
                          Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                         );
      DG_Tweening_TweenSettingsExtensions__SetEase<object>
                (pIVar6,6,
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                );
      pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__GCPGIJOGPIP(__this,method_02);
      DG_Tweening_ShortcutExtensions__DOKill
                ((UnityEngine_Component_o *)pUVar4,false,(MethodInfo *)0x0);
      pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__GCPGIJOGPIP(__this,method_03);
      if (pUVar4 != (UIFigures_UILine_o *)0x0) {
        (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pUVar4,
                   (pUVar4->klass->vtable)._23_set_color.method);
        ease = 6;
        loops = 7;
        pMVar7 = extraout_x1_00;
LAB_0342fa6c:
        pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__GCPGIJOGPIP(__this,pMVar7);
        endValue.fields.r = (pUVar8->fields).r;
        endValue.fields.g = (pUVar1->fields).g;
        endValue.fields.b = (pUVar2->fields).b;
        endValue.fields.a = (pUVar3->fields).a;
        pDVar5 = DG_Tweening_DOTweenModuleUI__DOColor
                           ((UnityEngine_UI_Graphic_o *)pUVar4,endValue,duration,(MethodInfo *)0x0);
        pIVar6 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                           ((Il2CppObject *)pDVar5,loops,1,
                            Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                           );
        DG_Tweening_TweenSettingsExtensions__SetEase<object>
                  (pIVar6,ease,
                   Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                  );
        return;
      }
    }
  }
  else if (pUVar4 != (UIFigures_UILine_o *)0x0) {
    (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
              ((__this->fields).defaultColor.fields.r,(__this->fields).defaultColor.fields.g,
               (__this->fields).defaultColor.fields.b,(__this->fields).defaultColor.fields.a,pUVar4,
               (pUVar4->klass->vtable)._23_set_color.method);
    pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__PDGEDEIGEHM(__this,method_04);
    duration = 0.3;
    pUVar8 = &(__this->fields).paleColor;
    pUVar1 = &(__this->fields).paleColor;
    pUVar2 = &(__this->fields).paleColor;
    pUVar3 = &(__this->fields).paleColor;
    pDVar5 = DG_Tweening_DOTweenModuleUI__DOColor
                       ((UnityEngine_UI_Graphic_o *)pUVar4,(UnityEngine_Color_o)pUVar8->fields,0.3,
                        (MethodInfo *)0x0);
    pIVar6 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                       ((Il2CppObject *)pDVar5,-1,1,
                        Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                       );
    DG_Tweening_TweenSettingsExtensions__SetEase<object>
              (pIVar6,5,
               Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
              );
    pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__GCPGIJOGPIP(__this,method_05);
    DG_Tweening_ShortcutExtensions__DOKill
              ((UnityEngine_Component_o *)pUVar4,false,(MethodInfo *)0x0);
    pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__GCPGIJOGPIP(__this,method_06);
    if (pUVar4 != (UIFigures_UILine_o *)0x0) {
      (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                ((__this->fields).defaultColor.fields.r,(__this->fields).defaultColor.fields.g,
                 (__this->fields).defaultColor.fields.b,(__this->fields).defaultColor.fields.a,
                 pUVar4,(pUVar4->klass->vtable)._23_set_color.method);
      ease = 5;
      loops = -1;
      pMVar7 = extraout_x1_01;
      goto LAB_0342fa6c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator DAPNAKOICBI(Transform DJGDJPGAFPG, int DPJIDNBJIBG, float JONBHCOPDOE, float LFJGFLNMBMC)  [RVA 0x332FB78]
// Nekki.SF2.GUI.Pvp.PlayerSelector$$DAPNAKOICBI @ RVA 0x332FB78

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Pvp_PlayerSelector__DAPNAKOICBI
          (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,UnityEngine_Transform_o *DJGDJPGAFPG,
          int32_t DPJIDNBJIBG,float JONBHCOPDOE,float LFJGFLNMBMC,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_045678fd & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PlayerSelector_IHBEAIOFKMN_TypeInfo);
    DAT_045678fd = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Pvp_PlayerSelector_IHBEAIOFKMN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[3].monitor = __this;
  thunk_FUN_01c20e04(&__this_00[3].monitor,__this);
  __this_00[2].klass = (Il2CppClass *)DJGDJPGAFPG;
  thunk_FUN_01c20e04(__this_00 + 2,DJGDJPGAFPG);
  *(int32_t *)&__this_00[2].monitor = DPJIDNBJIBG;
  *(float *)((long)&__this_00[2].monitor + 4) = LFJGFLNMBMC;
  *(float *)&__this_00[3].klass = JONBHCOPDOE;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private UILine PDGEDEIGEHM()  [RVA 0x332FAC8]
// Nekki.SF2.GUI.Pvp.PlayerSelector$$PDGEDEIGEHM @ RVA 0x332FAC8

UIFigures_UILine_o *
Nekki_SF2_GUI_Pvp_PlayerSelector__PDGEDEIGEHM
          (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_x1;
  UIFigures_UILine_o **ppUVar2;
  UIFigures_UILine_o *pUVar3;
  
  if ((DAT_045678fe & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<UILine>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045678fe = 1;
    method = extraout_x1;
  }
  ppUVar2 = &(__this->fields).NAFBBOFAHAB;
  pUVar3 = *ppUVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._LeftBorderContainer;
    if (__this_00 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar3 = (UIFigures_UILine_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this_00,
                        Method_UnityEngine_Component_GetComponent<UILine>__);
    *ppUVar2 = pUVar3;
    thunk_FUN_01c20e04(ppUVar2,pUVar3);
  }
  return *ppUVar2;
}


// ===== private void OnEnable()  [RVA 0x332FC44]
// Nekki.SF2.GUI.Pvp.PlayerSelector$$OnEnable @ RVA 0x332FC44

void Nekki_SF2_GUI_Pvp_PlayerSelector__OnEnable
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar1 = (__this->fields)._LeftBorderContainer;
  if ((pUVar1 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._RightBorderContainer;
    if ((pUVar1 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator LKKCCNDIDDM(Transform DJGDJPGAFPG, int DPJIDNBJIBG, Graphic HOFIICIPGOM, float ILEBEOCFAHA, float EEMALGJACCO, float DDBONJDKEJM, Func<float, float> JJEAGPPNDJN)  [RVA 0x332FC94]
// Nekki.SF2.GUI.Pvp.PlayerSelector$$LKKCCNDIDDM @ RVA 0x332FC94

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Pvp_PlayerSelector__LKKCCNDIDDM
          (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,UnityEngine_Transform_o *DJGDJPGAFPG,
          int32_t DPJIDNBJIBG,UnityEngine_UI_Graphic_o *HOFIICIPGOM,float ILEBEOCFAHA,
          float EEMALGJACCO,float DDBONJDKEJM,System_Func_float__float__o *JJEAGPPNDJN,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_045678ff & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB_TypeInfo);
    DAT_045678ff = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)DJGDJPGAFPG;
  thunk_FUN_01c20e04(__this_00 + 2,DJGDJPGAFPG);
  *(int32_t *)&__this_00[2].monitor = DPJIDNBJIBG;
  __this_00[3].monitor = HOFIICIPGOM;
  thunk_FUN_01c20e04(&__this_00[3].monitor,HOFIICIPGOM);
  *(float *)((long)&__this_00[2].monitor + 4) = ILEBEOCFAHA;
  *(float *)&__this_00[3].klass = EEMALGJACCO;
  *(float *)&__this_00[4].monitor = DDBONJDKEJM;
  __this_00[4].klass = (Il2CppClass *)JJEAGPPNDJN;
  thunk_FUN_01c20e04(__this_00 + 4,JJEAGPPNDJN);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void MoveTo(int MLGDMNLHIKD, int JHLALAPPDFE, Vector2 BLEOKMIDGIK, float LFJGFLNMBMC, bool MBOJNOFHMCP = False, bool JKHALGFBMFC = False)  [RVA 0x332FD8C]
// Nekki.SF2.GUI.Pvp.PlayerSelector$$MoveTo @ RVA 0x332FD8C

void Nekki_SF2_GUI_Pvp_PlayerSelector__MoveTo
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,int32_t MLGDMNLHIKD,int32_t JHLALAPPDFE,
               UnityEngine_Vector2_o BLEOKMIDGIK,float LFJGFLNMBMC,bool MBOJNOFHMCP,bool JKHALGFBMFC
               ,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)MBOJNOFHMCP;
  if ((__this->fields).KKPJEFOMLBP == false) {
    if ((__this->fields).xPosition != MLGDMNLHIKD) {
      Nekki_SF2_GUI_Pvp_PlayerSelector__DKOKAFFCHHJ
                (__this,MBOJNOFHMCP,BLEOKMIDGIK,LFJGFLNMBMC,0,method_00);
    }
    if ((__this->fields).yPosition != JHLALAPPDFE) {
      Nekki_SF2_GUI_Pvp_PlayerSelector__DKOKAFFCHHJ
                (__this,JKHALGFBMFC,BLEOKMIDGIK,LFJGFLNMBMC,1,method_00);
    }
    (__this->fields).xPosition = MLGDMNLHIKD;
    (__this->fields).yPosition = JHLALAPPDFE;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3330038]
// Nekki.SF2.GUI.Pvp.PlayerSelector$$.ctor @ RVA 0x3330038

void Nekki_SF2_GUI_Pvp_PlayerSelector___ctor
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void DKOKAFFCHHJ(bool EOKHCDLHMDA, Vector2 BLEOKMIDGIK, float LFJGFLNMBMC, int DPJIDNBJIBG)  [RVA 0x332FE30]
// Nekki.SF2.GUI.Pvp.PlayerSelector$$DKOKAFFCHHJ @ RVA 0x332FE30

void Nekki_SF2_GUI_Pvp_PlayerSelector__DKOKAFFCHHJ
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,bool EOKHCDLHMDA,
               UnityEngine_Vector2_o BLEOKMIDGIK,float LFJGFLNMBMC,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  PBAKFOBIHEG_o *pPVar4;
  undefined8 uVar5;
  VirtualInvokeData *pVVar6;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  ulong uVar7;
  PBAKFOBIHEG_c *pPVar8;
  int32_t *piVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_array *pUVar11;
  ulong uVar12;
  undefined4 in_register_00005044;
  
  if ((DAT_04567900 & 1) == 0) {
    FUN_01bab630(&System_Func<Transform,_int,_float,_float,_IEnumerator>_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PlayerSelector_DAPNAKOICBI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PlayerSelector_EEEOCIACHAA__);
    DAT_04567900 = 1;
  }
  lVar3 = thunk_FUN_01bda818(System_Func<Transform,_int,_float,_float,_IEnumerator>_TypeInfo);
  System_Func<object,_int,_float,_float,_object>___ctor();
  pUVar11 = (__this->fields).FCGNALDLKNA;
  if (pUVar11 != (UnityEngine_Transform_array *)0x0) {
    if (0 < (int)pUVar11->max_length) {
      uVar12 = 0;
      uVar7 = pUVar11->max_length & 0xffffffff;
      do {
        if (uVar7 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pUVar10 = pUVar11->m_Items[uVar12];
        pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
        uVar7 = (ulong)BLEOKMIDGIK.fields & 0xffffffff;
        if ((DPJIDNBJIBG != 0) && (uVar7 = (ulong)BLEOKMIDGIK.fields >> 0x20, DPJIDNBJIBG != 1)) {
          thunk_FUN_01bb9178((ulong)BLEOKMIDGIK.fields >> 0x20,
                             &System_IndexOutOfRangeException_TypeInfo);
          __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
          message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706/*"Invalid Vector2 index!"*/);
          System_IndexOutOfRangeException___ctor(__this_00,message,(MethodInfo *)0x0);
          uVar5 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector2_get_Item__);
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(__this_00,uVar5);
        }
        if ((lVar3 == 0) ||
           (uVar5 = (**(code **)(lVar3 + 0x18))
                              (uVar7,CONCAT44(in_register_00005044,LFJGFLNMBMC),
                               *(undefined8 *)(lVar3 + 0x40),pUVar10,DPJIDNBJIBG,
                               *(undefined8 *)(lVar3 + 0x28)), pPVar4 == (PBAKFOBIHEG_o *)0x0))
        goto LAB_0342ffe8;
        pPVar8 = pPVar4->klass;
        uVar2._0_1_ = (pPVar8->_2).rank;
        uVar2._1_1_ = (pPVar8->_2).minimumAlignment;
        uVar7 = (ulong)uVar2;
        if (uVar7 != 0) {
          piVar9 = &((pPVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar6 = pPVar8->vtable + *piVar9;
              goto LAB_0342ffa8;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,0);
LAB_0342ffa8:
        (*pVVar6->methodPtr)(pPVar4,uVar5,0,pVVar6->method);
        uVar1 = (uint)pUVar11->max_length;
        uVar7 = (ulong)uVar1;
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)uVar1);
    }
    return;
  }
LAB_0342ffe8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Awake()  [RVA 0x3330040]
// Nekki.SF2.GUI.Pvp.PlayerSelector$$Awake @ RVA 0x3330040

void Nekki_SF2_GUI_Pvp_PlayerSelector__Awake
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_array *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  undefined8 uVar4;
  UnityEngine_Transform_array **ppUVar5;
  
  if ((DAT_04567901 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Transform___TypeInfo);
    DAT_04567901 = 1;
  }
  pUVar1 = (UnityEngine_Transform_array *)FUN_01bab718(UnityEngine_Transform___TypeInfo,3);
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 == (UnityEngine_Transform_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(pUVar2,(((pUVar1->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_03430154:
    uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar4,0);
  }
  if ((int)pUVar1->max_length != 0) {
    pUVar1->m_Items[0] = pUVar2;
    thunk_FUN_01c20e04(pUVar1->m_Items,pUVar2);
    pUVar2 = (__this->fields)._LeftBorderContainer;
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pUVar2,(((pUVar1->obj).klass)->_1).element_class), lVar3 == 0))
    goto LAB_03430154;
    if (1 < (uint)pUVar1->max_length) {
      pUVar1->m_Items[1] = pUVar2;
      thunk_FUN_01c20e04(pUVar1->m_Items + 1,pUVar2);
      pUVar2 = (__this->fields)._RightBorderContainer;
      if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pUVar2,(((pUVar1->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_03430154;
      if (2 < (uint)pUVar1->max_length) {
        pUVar1->m_Items[2] = pUVar2;
        thunk_FUN_01c20e04(pUVar1->m_Items + 2,pUVar2);
        ppUVar5 = &(__this->fields).FCGNALDLKNA;
        *ppUVar5 = pUVar1;
        thunk_FUN_01c20e04(ppUVar5,pUVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void SetSize(Vector2 FDFANDCCJAG)  [RVA 0x3330164]
// Nekki.SF2.GUI.Pvp.PlayerSelector$$SetSize @ RVA 0x3330164

void Nekki_SF2_GUI_Pvp_PlayerSelector__SetSize
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,UnityEngine_Vector2_o FDFANDCCJAG,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_RectTransform_o *__this_00;
  UIFigures_UILine_o *pUVar3;
  System_Collections_Generic_List_Vector2__o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x2;
  UnityEngine_Vector2_array *pUVar5;
  bool_conflict *pbVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector2_o item;
  UnityEngine_Vector2_o item_00;
  UnityEngine_Vector2_o item_01;
  UnityEngine_Vector2_o item_02;
  UnityEngine_Vector2_o item_03;
  UnityEngine_Vector2_o item_04;
  UnityEngine_Vector2_o item_05;
  UnityEngine_Vector2_o item_06;
  
  if ((DAT_04567902 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Vector2>_TypeInfo);
    DAT_04567902 = 1;
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,
                         Method_UnityEngine_Component_GetComponent<RectTransform>__);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_sizeDelta(__this_00,FDFANDCCJAG,(MethodInfo *)0x0);
    (__this->fields).KKPJEFOMLBP = false;
    pUVar3 = Nekki_SF2_GUI_Pvp_PlayerSelector__PDGEDEIGEHM(__this,method_00);
    if (pUVar3 != (UIFigures_UILine_o *)0x0) {
      fVar10 = *(float *)&(pUVar3->fields)._Points;
      pUVar3 = Nekki_SF2_GUI_Pvp_PlayerSelector__PDGEDEIGEHM(__this,method_01);
      pSVar4 = (System_Collections_Generic_List_Vector2__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<Vector2>_TypeInfo);
      System_Collections_Generic_List<Vector2>___ctor
                (pSVar4,Method_System_Collections_Generic_List<Vector2>__ctor__);
      lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
      if (pSVar4 != (System_Collections_Generic_List_Vector2__o *)0x0) {
        pUVar5 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
          uVar1 = (pSVar4->fields)._size;
          fVar7 = FDFANDCCJAG.fields.x * 0.5;
          fVar8 = -(fVar10 * 0.5);
          if (uVar1 < (uint)pUVar5->max_length) {
            (pSVar4->fields)._size = uVar1 + 1;
            pUVar5->m_Items[(int)uVar1].fields.x = fVar7;
            pUVar5->m_Items[(int)uVar1].fields.y = fVar8;
          }
          else {
            item.fields.y = fVar8;
            item.fields.x = fVar7;
            System_Collections_Generic_List<Vector2>__AddWithResize
                      (pSVar4,item,
                       *(MethodInfo_2759B90 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
          pUVar5 = (pSVar4->fields)._items;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
            uVar1 = (pSVar4->fields)._size;
            fVar10 = fVar10 * 0.5;
            if (uVar1 < (uint)pUVar5->max_length) {
              (pSVar4->fields)._size = uVar1 + 1;
              pUVar5->m_Items[(int)uVar1].fields.x = fVar10;
              pUVar5->m_Items[(int)uVar1].fields.y = fVar8;
            }
            else {
              item_00.fields.y = fVar8;
              item_00.fields.x = fVar10;
              System_Collections_Generic_List<Vector2>__AddWithResize
                        (pSVar4,item_00,
                         *(MethodInfo_2759B90 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
            pUVar5 = (pSVar4->fields)._items;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
              uVar1 = (pSVar4->fields)._size;
              fVar9 = fVar10 - FDFANDCCJAG.fields.y;
              if (uVar1 < (uint)pUVar5->max_length) {
                (pSVar4->fields)._size = uVar1 + 1;
                pUVar5->m_Items[(int)uVar1].fields.x = fVar10;
                pUVar5->m_Items[(int)uVar1].fields.y = fVar9;
              }
              else {
                item_01.fields.y = fVar9;
                item_01.fields.x = fVar10;
                System_Collections_Generic_List<Vector2>__AddWithResize
                          (pSVar4,item_01,
                           *(MethodInfo_2759B90 **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
              pUVar5 = (pSVar4->fields)._items;
              (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
              if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                uVar1 = (pSVar4->fields)._size;
                if (uVar1 < (uint)pUVar5->max_length) {
                  (pSVar4->fields)._size = uVar1 + 1;
                  pUVar5->m_Items[(int)uVar1].fields.x = fVar7;
                  pUVar5->m_Items[(int)uVar1].fields.y = fVar9;
                }
                else {
                  item_02.fields.y = fVar9;
                  item_02.fields.x = fVar7;
                  System_Collections_Generic_List<Vector2>__AddWithResize
                            (pSVar4,item_02,
                             *(MethodInfo_2759B90 **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                if (pUVar3 != (UIFigures_UILine_o *)0x0) {
                  pbVar6 = &(pUVar3->fields)._SingleTexturCord;
                  *(System_Collections_Generic_List_Vector2__o **)pbVar6 = pSVar4;
                  thunk_FUN_01c20e04(pbVar6,pSVar4);
                  pUVar3 = Nekki_SF2_GUI_Pvp_PlayerSelector__GCPGIJOGPIP(__this,method_02);
                  pSVar4 = (System_Collections_Generic_List_Vector2__o *)
                           thunk_FUN_01bda818(System_Collections_Generic_List<Vector2>_TypeInfo);
                  System_Collections_Generic_List<Vector2>___ctor
                            (pSVar4,Method_System_Collections_Generic_List<Vector2>__ctor__);
                  lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
                  if (pSVar4 != (System_Collections_Generic_List_Vector2__o *)0x0) {
                    pUVar5 = (pSVar4->fields)._items;
                    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                    if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                      uVar1 = (pSVar4->fields)._size;
                      if (uVar1 < (uint)pUVar5->max_length) {
                        (pSVar4->fields)._size = uVar1 + 1;
                        pUVar5->m_Items[(int)uVar1].fields.x = fVar7;
                        pUVar5->m_Items[(int)uVar1].fields.y = fVar8;
                      }
                      else {
                        item_03.fields.y = fVar8;
                        item_03.fields.x = fVar7;
                        System_Collections_Generic_List<Vector2>__AddWithResize
                                  (pSVar4,item_03,
                                   *(MethodInfo_2759B90 **)
                                    (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
                      pUVar5 = (pSVar4->fields)._items;
                      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                      if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                        uVar1 = (pSVar4->fields)._size;
                        fVar10 = FDFANDCCJAG.fields.x - fVar10;
                        if (uVar1 < (uint)pUVar5->max_length) {
                          (pSVar4->fields)._size = uVar1 + 1;
                          pUVar5->m_Items[(int)uVar1].fields.x = fVar10;
                          pUVar5->m_Items[(int)uVar1].fields.y = fVar8;
                        }
                        else {
                          item_04.fields.y = fVar8;
                          item_04.fields.x = fVar10;
                          System_Collections_Generic_List<Vector2>__AddWithResize
                                    (pSVar4,item_04,
                                     *(MethodInfo_2759B90 **)
                                      (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
                        pUVar5 = (pSVar4->fields)._items;
                        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                        if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                          uVar1 = (pSVar4->fields)._size;
                          if (uVar1 < (uint)pUVar5->max_length) {
                            (pSVar4->fields)._size = uVar1 + 1;
                            pUVar5->m_Items[(int)uVar1].fields.x = fVar10;
                            pUVar5->m_Items[(int)uVar1].fields.y = fVar9;
                          }
                          else {
                            item_05.fields.y = fVar9;
                            item_05.fields.x = fVar10;
                            System_Collections_Generic_List<Vector2>__AddWithResize
                                      (pSVar4,item_05,
                                       *(MethodInfo_2759B90 **)
                                        (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
                          pUVar5 = (pSVar4->fields)._items;
                          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                          if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                            uVar1 = (pSVar4->fields)._size;
                            if (uVar1 < (uint)pUVar5->max_length) {
                              (pSVar4->fields)._size = uVar1 + 1;
                              pUVar5->m_Items[(int)uVar1].fields.x = fVar7;
                              pUVar5->m_Items[(int)uVar1].fields.y = fVar9;
                            }
                            else {
                              item_06.fields.y = fVar9;
                              item_06.fields.x = fVar7;
                              System_Collections_Generic_List<Vector2>__AddWithResize
                                        (pSVar4,item_06,
                                         *(MethodInfo_2759B90 **)
                                          (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                            }
                            if (pUVar3 != (UIFigures_UILine_o *)0x0) {
                              pbVar6 = &(pUVar3->fields)._SingleTexturCord;
                              *(System_Collections_Generic_List_Vector2__o **)pbVar6 = pSVar4;
                              thunk_FUN_01c20e04(pbVar6,pSVar4);
                              Nekki_SF2_GUI_Pvp_PlayerSelector__SelectCurrentItem
                                        (__this,false,in_x2);
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

