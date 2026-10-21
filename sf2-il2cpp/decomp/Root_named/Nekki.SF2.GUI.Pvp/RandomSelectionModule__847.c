// TypeDefIndex 847
// Namespace: Nekki.SF2.GUI.Pvp
// public class RandomSelectionModule : UIModule
// Fields:
//   private RandomItem _RandomItemLeft; // 0x28
//   private RandomItem _RandomItemRight; // 0x30
//   private float _StartTime; // 0x38
//   private float _SlowFactor; // 0x3C
//   private float _SwitchTime; // 0x40
//   private float _EndTimer; // 0x44
//   private Action<string> LKGKDIMGDHL; // 0x48
//   private float KCLCLHMMDJO; // 0x50
//   private float HDADKFPCEGM; // 0x54
//   private bool OJODPOEPFHO; // 0x58
//   private string OIBMIOMGGAC; // 0x60
//   private string AEDHBGPDLPB; // 0x68

// ===== public void Update()  [RVA 0x3084D90]
// Nekki.SF2.GUI.Pvp.RandomSelectionModule$$Update @ RVA 0x3084D90

void Nekki_SF2_GUI_Pvp_RandomSelectionModule__Update
               (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *routine;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (__this->fields).KCLCLHMMDJO;
  if (0.0 <= fVar4) {
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar3 = (__this->fields)._SlowFactor;
    fVar2 = (__this->fields).HDADKFPCEGM;
    fVar4 = fVar4 + fVar1 * fVar3;
    (__this->fields).KCLCLHMMDJO = fVar4;
    method_01 = method_00;
    if (fVar2 < fVar4) {
      (__this->fields).KCLCLHMMDJO = fVar4 - fVar2;
      (__this->fields).HDADKFPCEGM = fVar3 * fVar2;
      Nekki_SF2_GUI_Pvp_RandomSelectionModule__ELJPNGLJAPJ(__this,method_00);
      fVar2 = (__this->fields).HDADKFPCEGM;
      method_01 = extraout_x1;
    }
    if ((__this->fields)._EndTimer < fVar2) {
      (__this->fields).KCLCLHMMDJO = -1.0;
      routine = Nekki_SF2_GUI_Pvp_RandomSelectionModule__KBEPLOJMFCL(__this,method_01);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== private void ELJPNGLJAPJ()  [RVA 0x3084E24]
// Nekki.SF2.GUI.Pvp.RandomSelectionModule$$ELJPNGLJAPJ @ RVA 0x3084E24

void Nekki_SF2_GUI_Pvp_RandomSelectionModule__ELJPNGLJAPJ
               (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *t;
  DG_Tweening_TweenCallback_o **ppDVar2;
  long lVar3;
  long lVar4;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_Color_o endValue;
  UnityEngine_Color_o endValue_00;
  
  if ((DAT_04566018 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_GANCOFBMIFL__);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo);
    DAT_04566018 = 1;
  }
  bVar1 = (__this->fields).OJODPOEPFHO != false;
  lVar4 = 0x28;
  if (bVar1) {
    lVar4 = 0x30;
  }
  lVar3 = *(long *)((long)&__this->klass + lVar4);
  lVar4 = 0x30;
  if (bVar1) {
    lVar4 = 0x28;
  }
  if (lVar3 != 0) {
    lVar4 = *(long *)((long)&__this->klass + lVar4);
    endValue.fields.b = 0.5;
    endValue.fields.a = 1.0;
    endValue.fields.r = 0.5;
    endValue.fields.g = 0.5;
    DG_Tweening_DOTweenModuleUI__DOColor
              (*(UnityEngine_UI_Image_o **)(lVar3 + 0x10),endValue,(__this->fields)._SwitchTime,
               (MethodInfo *)0x0);
    if (lVar4 != 0) {
      endValue_00.fields.b = 1.0;
      endValue_00.fields.a = 1.0;
      endValue_00.fields.r = 1.0;
      endValue_00.fields.g = 1.0;
      t = DG_Tweening_DOTweenModuleUI__DOColor
                    (*(UnityEngine_UI_Image_o **)(lVar4 + 0x10),endValue_00,
                     (__this->fields)._SwitchTime,(MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo);
      }
      action = Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->static_fields->__9__17_0;
      if (action == (DG_Tweening_TweenCallback_o *)0x0) {
        if ((Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo);
        }
        action = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        ppDVar2 = &Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->static_fields->__9__17_0;
        *ppDVar2 = action;
        thunk_FUN_01c20e04(ppDVar2,action);
      }
      DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                ((Il2CppObject *)t,action,
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Color,_Color,_ColorOptions>>__
                );
      (__this->fields).OJODPOEPFHO = (bool_conflict)((__this->fields).OJODPOEPFHO ^ 1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnAnimationEnd(Action<string> CJNHFNHJHPE)  [RVA 0x3085018]
// Nekki.SF2.GUI.Pvp.RandomSelectionModule$$add_OnAnimationEnd @ RVA 0x3085018

void Nekki_SF2_GUI_Pvp_RandomSelectionModule__add_OnAnimationEnd
               (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this,
               System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *a;
  
  if ((DAT_04566019 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04566019 = 1;
  }
  ppSVar6 = &(__this->fields).LKGKDIMGDHL;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void InitContents(string HCFOALNNIAI, string AIAPPFBGDFL, string MIBCCGANIIL, string JPENNNFFCBM)  [RVA 0x30850C8]
// Nekki.SF2.GUI.Pvp.RandomSelectionModule$$InitContents @ RVA 0x30850C8

void Nekki_SF2_GUI_Pvp_RandomSelectionModule__InitContents
               (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this,System_String_o *HCFOALNNIAI,
               System_String_o *AIAPPFBGDFL,System_String_o *MIBCCGANIIL,
               System_String_o *JPENNNFFCBM,MethodInfo *method)

{
  undefined4 uVar1;
  System_String_o **ppSVar2;
  Nekki_SF2_GUI_Pvp_RandomItem_o *pNVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  float fVar5;
  
  if ((DAT_0456601a & 1) == 0) {
    FUN_01bab630(&StringLiteral_14114/*"UI/battles/"*/);
    DAT_0456601a = 1;
  }
  (__this->fields).KCLCLHMMDJO = 0.0;
  (__this->fields).HDADKFPCEGM = (__this->fields)._StartTime;
  fVar5 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
  pNVar3 = (__this->fields)._RandomItemLeft;
  (__this->fields).OJODPOEPFHO = fVar5 < 0.5;
  if ((pNVar3 != (Nekki_SF2_GUI_Pvp_RandomItem_o *)0x0) &&
     (pNVar4 = (pNVar3->fields)._Preview, pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
    uVar1 = StringLiteral_14114/*"UI/battles/"*/._4_4_;
    (pNVar4->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14114/*"UI/battles/"*/;
    (pNVar4->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
    thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
    pNVar3 = (__this->fields)._RandomItemLeft;
    if ((pNVar3 != (Nekki_SF2_GUI_Pvp_RandomItem_o *)0x0) &&
       (pNVar4 = (pNVar3->fields)._Preview, pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,AIAPPFBGDFL,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._RandomItemRight;
      if ((pNVar3 != (Nekki_SF2_GUI_Pvp_RandomItem_o *)0x0) &&
         (pNVar4 = (pNVar3->fields)._Preview, pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
        uVar1 = StringLiteral_14114/*"UI/battles/"*/._4_4_;
        (pNVar4->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14114/*"UI/battles/"*/;
        (pNVar4->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
        thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
        pNVar3 = (__this->fields)._RandomItemRight;
        if ((pNVar3 != (Nekki_SF2_GUI_Pvp_RandomItem_o *)0x0) &&
           (pNVar4 = (pNVar3->fields)._Preview, pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,JPENNNFFCBM,(MethodInfo *)0x0);
          ppSVar2 = &(__this->fields).OIBMIOMGGAC;
          *ppSVar2 = HCFOALNNIAI;
          thunk_FUN_01c20e04(ppSVar2,HCFOALNNIAI);
          ppSVar2 = &(__this->fields).AEDHBGPDLPB;
          *ppSVar2 = MIBCCGANIIL;
          thunk_FUN_01c20e04(ppSVar2,MIBCCGANIIL);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnAnimationEnd(Action<string> CJNHFNHJHPE)  [RVA 0x30851EC]
// Nekki.SF2.GUI.Pvp.RandomSelectionModule$$remove_OnAnimationEnd @ RVA 0x30851EC

void Nekki_SF2_GUI_Pvp_RandomSelectionModule__remove_OnAnimationEnd
               (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this,
               System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *source;
  
  if ((DAT_0456601b & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_0456601b = 1;
  }
  ppSVar6 = &(__this->fields).LKGKDIMGDHL;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void .ctor()  [RVA 0x308529C]
// Nekki.SF2.GUI.Pvp.RandomSelectionModule$$.ctor @ RVA 0x308529C

void Nekki_SF2_GUI_Pvp_RandomSelectionModule___ctor
               (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this,MethodInfo *method)

{
  System_Action_string__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_string__o *pSVar2;
  
  if ((DAT_0456601c & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_AKDKNJIDHNE__);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_0456601c = 1;
    method = extraout_x1;
  }
  (__this->fields)._SwitchTime = 0.1;
  (__this->fields)._EndTimer = 0.65;
  (__this->fields)._StartTime = 0.15;
  (__this->fields)._SlowFactor = 1.25;
  if ((Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->static_fields->__9__18_0;
  if (pSVar2 == (System_Action_string__o *)0x0) {
    if ((Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->static_fields->__9__18_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  ppSVar1 = &(__this->fields).LKGKDIMGDHL;
  *ppSVar1 = pSVar2;
  thunk_FUN_01c20e04(ppSVar1,pSVar2);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private IEnumerator KBEPLOJMFCL()  [RVA 0x3084FAC]
// Nekki.SF2.GUI.Pvp.RandomSelectionModule$$KBEPLOJMFCL @ RVA 0x3084FAC

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Pvp_RandomSelectionModule__KBEPLOJMFCL
          (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456601d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_RandomSelectionModule_NGBNNGGGCOC_TypeInfo);
    DAT_0456601d = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Pvp_RandomSelectionModule_NGBNNGGGCOC_TypeInfo,method
                                );
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

