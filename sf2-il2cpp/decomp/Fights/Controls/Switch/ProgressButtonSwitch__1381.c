// TypeDefIndex 1381
// Namespace: Nekki.SF2.Core.Fights.Controls.Switch
// public class ProgressButtonSwitch : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler
// Fields:
//   private ResolutionImage _FillImage; // 0x20
//   private Color _FillHightLightColor; // 0x28
//   private ResolutionImage _IconNotReadyImage; // 0x38
//   private ResolutionImage _IconReadyImage; // 0x40
//   private GameObject _DisabledIcon; // 0x48
//   private float _PulseOffset; // 0x50
//   private DMMJFKCBHEK _ControlQuadrant; // 0x54
//   private ProgressButtonSwitch.ControlQuadrantEvent _OnPressed; // 0x58
//   private ProgressButtonSwitch.ControlQuadrantEvent _OnReleased; // 0x60
//   private float MOPCMOLEEIN; // 0x68
//   private bool CEPACCGIINO; // 0x6C
//   private const float ECCEKDGCCFI = 2.5;
//   private const float OKBBFOGIPDM = 3;
//   private readonly Color PNDDALIFKEK; // 0x70
//   private Image JDDOPDPMFGJ; // 0x80
//   private bool CPIJELCNKJA; // 0x88
//   private float ADHJEOCGNDN; // 0x8C
//   private IEnumerator CBILKJAEFOM; // 0x90

// ===== private void IPIGMILHFKP()  [RVA 0x3170BC4]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$IPIGMILHFKP @ RVA 0x3170BC4

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__IPIGMILHFKP
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_IEnumerator_o **ppSVar9;
  UnityEngine_UI_Image_o *pUVar10;
  
  if ((DAT_0456691d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456691d = 1;
    method = extraout_x1;
  }
  pUVar10 = (__this->fields).JDDOPDPMFGJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar10 = (__this->fields).JDDOPDPMFGJ;
    if ((pUVar10 == (UnityEngine_UI_Image_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03270d04;
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
  }
  bVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled
                    ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar4 = Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__MIMGJEDCDHE(__this,method_00)
  ;
  if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
    pPVar6 = pPVar3->klass;
    uVar1._0_1_ = (pPVar6->_2).rank;
    uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar5 = pPVar6->vtable + *piVar8;
          goto LAB_03270cd8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_03270cd8:
    pSVar4 = (System_Collections_IEnumerator_o *)
             (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
    ppSVar9 = &(__this->fields).CBILKJAEFOM;
    *ppSVar9 = pSVar4;
    thunk_FUN_01c20e04(ppSVar9,pSVar4);
    return;
  }
LAB_03270d04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3170D74]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$.ctor @ RVA 0x3170D74

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch___ctor
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_o *pNVar1;
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_o **ppNVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_0456691e & 1) == 0) {
    FUN_01bab630(&
                 Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_TypeInfo
                );
    DAT_0456691e = 1;
    method = extraout_x1;
  }
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_TypeInfo
                              ,method);
  pNVar1 = auVar3._0_8_;
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent___ctor
            (pNVar1,auVar3._8_8_);
  ppNVar2 = &(__this->fields)._OnPressed;
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  auVar3 = thunk_FUN_01bda818(
                             Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_TypeInfo
                             );
  pNVar1 = auVar3._0_8_;
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent___ctor
            (pNVar1,auVar3._8_8_);
  ppNVar2 = &(__this->fields)._OnReleased;
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  (__this->fields).CEPACCGIINO = true;
  (__this->fields).PNDDALIFKEK.fields.r = 0.0;
  (__this->fields).PNDDALIFKEK.fields.g = 0.0;
  (__this->fields).PNDDALIFKEK.fields.b = 0.0;
  (__this->fields).PNDDALIFKEK.fields.a = 0.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public ProgressButtonSwitch.ControlQuadrantEvent get_OnPressed()  [RVA 0x3170E50]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$get_OnPressed @ RVA 0x3170E50

Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_o *
Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__get_OnPressed
          (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnPressed;
}


// ===== private IEnumerator MIMGJEDCDHE()  [RVA 0x3170D08]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$MIMGJEDCDHE @ RVA 0x3170D08

System_Collections_IEnumerator_o *
Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__MIMGJEDCDHE
          (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456691f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_IGJBOHBBNFF_TypeInfo);
    DAT_0456691f = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_IGJBOHBBNFF_TypeInfo
                                 ,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void Awake()  [RVA 0x3170E80]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$Awake @ RVA 0x3170E80

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__Awake
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Image_o **ppUVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  
  if ((DAT_04566920 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566920 = 1;
  }
  __this_01 = (__this->fields)._IconReadyImage;
  if ((__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_Transform_o *)0x0)) {
    pUVar1 = UnityEngine_Transform__get_parent(pUVar1,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    pUVar2 = (UnityEngine_UI_Image_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)__this_01,pUVar1,
                        Method_UnityEngine_Object_Instantiate<ResolutionImage>__);
    ppUVar3 = &(__this->fields).JDDOPDPMFGJ;
    *ppUVar3 = pUVar2;
    thunk_FUN_01c20e04(ppUVar3,pUVar2);
    if ((*ppUVar3 != (UnityEngine_UI_Image_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppUVar3,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ProgressButtonSwitch.ControlQuadrantEvent get_OnReleased()  [RVA 0x3170F54]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$get_OnReleased @ RVA 0x3170F54

Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_o *
Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__get_OnReleased
          (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnReleased;
}


// ===== private void PFAHHIBDFHF()  [RVA 0x3170F5C]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$PFAHHIBDFHF @ RVA 0x3170F5C

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__PFAHHIBDFHF
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  PBAKFOBIHEG_o *pPVar5;
  VirtualInvokeData *pVVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  UnityEngine_UI_Image_o *pUVar11;
  System_Collections_IEnumerator_o *pSVar12;
  UnityEngine_Vector3_o endValue;
  
  if ((DAT_04566921 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566921 = 1;
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  DG_Tweening_ShortcutExtensions__DOComplete
            ((UnityEngine_Component_o *)pUVar3,false,(MethodInfo *)0x0);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (DAT_0455fa7e == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa7e = '\x01';
  }
  endValue.fields.z = 0.0;
  endValue.fields._0_8_ = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields;
  DG_Tweening_ShortcutExtensions__DOScale(pUVar3,endValue,0.5,(MethodInfo *)0x0);
  pUVar11 = (__this->fields).JDDOPDPMFGJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar11 = (__this->fields).JDDOPDPMFGJ;
    if ((pUVar11 == (UnityEngine_UI_Image_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03271128;
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields)._FillImage;
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
              ((__this->fields).PNDDALIFKEK.fields.r,(__this->fields).PNDDALIFKEK.fields.g,
               (__this->fields).PNDDALIFKEK.fields.b,(__this->fields).PNDDALIFKEK.fields.a,pNVar4,
               (pNVar4->klass->vtable)._23_set_color.method);
    ppSVar10 = &(__this->fields).CBILKJAEFOM;
    if (*ppSVar10 == (System_Collections_IEnumerator_o *)0x0) {
      return;
    }
    pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
    if (pPVar5 != (PBAKFOBIHEG_o *)0x0) {
      pPVar7 = pPVar5->klass;
      pSVar12 = *ppSVar10;
      uVar1._0_1_ = (pPVar7->_2).rank;
      uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar6 = pPVar7->vtable + (*piVar9 + 1);
            goto LAB_032710fc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,1);
LAB_032710fc:
      (*pVVar6->methodPtr)(pPVar5,pSVar12,pVVar6->method);
      *ppSVar10 = (System_Collections_IEnumerator_o *)0x0;
      thunk_FUN_01c20e04(ppSVar10,0);
      return;
    }
  }
LAB_03271128:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Progress(float CJNHFNHJHPE)  [RVA 0x317112C]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$set_Progress @ RVA 0x317112C

/* WARNING: Removing unreachable block (ram,0x0327117c) */

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__set_Progress
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               float CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566922 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_04566922 = 1;
    method = extraout_x1;
  }
  if (CJNHFNHJHPE < 0.0) {
    CJNHFNHJHPE = 0.0;
  }
  if (ABS((__this->fields).MOPCMOLEEIN - CJNHFNHJHPE) <=
      UnityEngine_Mathf_TypeInfo->static_fields->Epsilon) {
    return;
  }
  (__this->fields).MOPCMOLEEIN = CJNHFNHJHPE;
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__GJGDEBECOEO(__this,method);
  return;
}


// ===== public bool get_IsEnabled()  [RVA 0x31712E4]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$get_IsEnabled @ RVA 0x31712E4

bool Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__get_IsEnabled
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               MethodInfo *method)

{
  return (__this->fields).CEPACCGIINO;
}


// ===== public void OnPointerDown(PointerEventData MELGPLLNBGH)  [RVA 0x31712EC]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$OnPointerDown @ RVA 0x31712EC

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__OnPointerDown
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_o *__this_00;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  
  if ((DAT_04566923 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<DMMJFKCBHEK>_Invoke__);
    DAT_04566923 = 1;
    MELGPLLNBGH = extraout_x1;
  }
  if ((__this->fields).CEPACCGIINO != false) {
    __this_00 = (__this->fields)._OnPressed;
    if (__this_00 !=
        (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(__this->fields)._ControlQuadrant,
                 Method_UnityEngine_Events_UnityEvent<DMMJFKCBHEK>_Invoke__);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,MELGPLLNBGH);
  }
  return;
}


// ===== public void set_IsEnabled(bool CJNHFNHJHPE)  [RVA 0x3171354]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$set_IsEnabled @ RVA 0x3171354

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__set_IsEnabled
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  
  if ((DAT_04566924 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566924 = 1;
  }
  (__this->fields).CEPACCGIINO = CJNHFNHJHPE;
  x = (UnityEngine_Object_o *)(__this->fields)._DisabledIcon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    __this_00 = (__this->fields)._DisabledIcon;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive
              (__this_00,(__this->fields).CEPACCGIINO == false,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__GJGDEBECOEO(__this,method_00);
  return;
}


// ===== public float get_Progress()  [RVA 0x31713F0]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$get_Progress @ RVA 0x31713F0

float Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__get_Progress
                (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
                MethodInfo *method)

{
  return (__this->fields).MOPCMOLEEIN;
}


// ===== public bool get_IsFull()  [RVA 0x31713F8]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$get_IsFull @ RVA 0x31713F8

bool Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__get_IsFull
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               MethodInfo *method)

{
  if ((DAT_04566925 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_04566925 = 1;
  }
  return ABS(100.0 - (__this->fields).MOPCMOLEEIN) <
         UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
}


// ===== private void OnDestroy()  [RVA 0x317145C]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$OnDestroy @ RVA 0x317145C

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__OnDestroy
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04566926 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566926 = 1;
  }
  ppSVar7 = &(__this->fields).CBILKJAEFOM;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_03271508;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03271508:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private float AEBCAAABENJ(float KEFILECBPMF)  [RVA 0x3171534]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$AEBCAAABENJ @ RVA 0x3171534

float Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__AEBCAAABENJ
                (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
                float KEFILECBPMF,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = KEFILECBPMF < 0.0;
  if (1.0 < KEFILECBPMF) {
    KEFILECBPMF = 1.0;
  }
  if (bVar1) {
    KEFILECBPMF = 0.0;
  }
  return KEFILECBPMF * KEFILECBPMF * 3.0 - KEFILECBPMF * KEFILECBPMF * (KEFILECBPMF + KEFILECBPMF);
}


// ===== public void OnPointerUp(PointerEventData MELGPLLNBGH)  [RVA 0x3171568]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$OnPointerUp @ RVA 0x3171568

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__OnPointerUp
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_o *__this_00;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  
  if ((DAT_04566927 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<DMMJFKCBHEK>_Invoke__);
    DAT_04566927 = 1;
    MELGPLLNBGH = extraout_x1;
  }
  if ((__this->fields).CEPACCGIINO != false) {
    __this_00 = (__this->fields)._OnReleased;
    if (__this_00 !=
        (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(__this->fields)._ControlQuadrant,
                 Method_UnityEngine_Events_UnityEvent<DMMJFKCBHEK>_Invoke__);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,MELGPLLNBGH);
  }
  return;
}


// ===== private void GJGDEBECOEO()  [RVA 0x31711C4]
// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$GJGDEBECOEO @ RVA 0x31711C4

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__GJGDEBECOEO
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               MethodInfo *method)

{
  byte bVar1;
  bool value;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  if ((DAT_04566928 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_04566928 = 1;
  }
  pNVar2 = (__this->fields)._FillImage;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    UnityEngine_UI_Image__set_fillAmount
              ((UnityEngine_UI_Image_o *)pNVar2,(__this->fields).MOPCMOLEEIN * 0.75 * 0.01,
               (MethodInfo *)0x0);
    if (UnityEngine_Mathf_TypeInfo->static_fields->Epsilon <=
        ABS((__this->fields).MOPCMOLEEIN + -100.0)) {
      value = false;
    }
    else {
      value = (__this->fields).CEPACCGIINO != false;
    }
    pNVar2 = (__this->fields)._IconNotReadyImage;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,(bool)(value ^ 1),(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._IconReadyImage;
      if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,value,(MethodInfo *)0x0);
        bVar1 = (__this->fields).CPIJELCNKJA;
        method_01 = method_00;
        if ((value & (bVar1 ^ 0xff)) != 0) {
          (__this->fields).ADHJEOCGNDN = 0.0;
          Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__IPIGMILHFKP(__this,method_00);
          bVar1 = (__this->fields).CPIJELCNKJA;
          method_01 = extraout_x1;
        }
        if (value == false && bVar1 != 0) {
          Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__PFAHHIBDFHF(__this,method_01);
        }
        (__this->fields).CPIJELCNKJA = value;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

