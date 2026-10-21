// TypeDefIndex 1051
// Namespace: 
// public class SFToggle : Toggle
// Fields:
//   private const int JMCNNEEGMAK = 10;
//   private const float HDDPMEKIHOH = 0.3;
//   private ResolutionImage _FlashingImage; // 0x128
//   private ResolutionImage _Background; // 0x130
//   private Graphic _NormalGraphic; // 0x138
//   private Graphic _SwitchGraphic; // 0x140
//   private FBBNEILNOKK _Control; // 0x148
//   private HHNIGLIDHLK _ControlPriority; // 0x14C
//   private LabelAlias _HintLabel; // 0x150
//   private Color _InactiveHintColor; // 0x158
//   private Color _ActiveHintColor; // 0x168
//   private bool BDKMNPCCDNI; // 0x178
//   private bool DBGMEKCEBCO; // 0x179
//   private int MLCOHBGHGKF; // 0x17C
//   private Sequence OOIFAHNCKAO; // 0x180
//   private bool OJFJPPMMDKM; // 0x188

// ===== public void SetStatNormal()  [RVA 0x30D5484]
// SFToggle$$SetStatNormal @ RVA 0x30D5484

void SFToggle__SetStatNormal(SFToggle_o *__this,MethodInfo *method)

{
  if ((__this->fields).super.super.m_Interactable != false) {
                    /* WARNING: Could not recover jumptable at 0x031d54a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._26_DoStateTransition.methodPtr)
              (__this,0,0,(__this->klass->vtable)._26_DoStateTransition.method);
    return;
  }
  return;
}


// ===== public void AddFlashImage(string DMCFDIBHCPD)  [RVA 0x30D54A8]
// SFToggle$$AddFlashImage @ RVA 0x30D54A8

void SFToggle__AddFlashImage(SFToggle_o *__this,System_String_o *DMCFDIBHCPD,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o **ppNVar1;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_04566326 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&StringLiteral_6496/*"FlashingImage"*/);
    DAT_04566326 = 1;
  }
  __this_00 = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this_00,StringLiteral_6496/*"FlashingImage"*/,(MethodInfo *)0x0);
    __this_01 = UnityEngine_GameObject__get_transform
                          ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      pNVar2 = (Nekki_SF2_GUI_ResolutionImage_o *)
               UnityEngine_GameObject__AddComponent<object>
                         ((UnityEngine_GameObject_o *)__this_00,
                          Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
      ppNVar1 = &(__this->fields)._FlashingImage;
      (__this->fields)._FlashingImage = pNVar2;
      thunk_FUN_01c20e04(ppNVar1,pNVar2);
      pNVar2 = (__this->fields)._FlashingImage;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,DMCFDIBHCPD,(MethodInfo *)0x0);
        pNVar2 = *ppNVar1;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031d55bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar2->klass->vtable)._45_SetNativeSize.methodPtr)
                    (pNVar2,(pNVar2->klass->vtable)._45_SetNativeSize.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_IsFlashing(bool CJNHFNHJHPE)  [RVA 0x30D55C4]
// SFToggle$$set_IsFlashing @ RVA 0x30D55C4

void SFToggle__set_IsFlashing(SFToggle_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_04566327 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566327 = 1;
  }
  (__this->fields).BDKMNPCCDNI = CJNHFNHJHPE;
  pNVar2 = (__this->fields)._FlashingImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._FlashingImage;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,(__this->fields).BDKMNPCCDNI,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void set_Control(FBBNEILNOKK CJNHFNHJHPE)  [RVA 0x30D566C]
// SFToggle$$set_Control @ RVA 0x30D566C

void SFToggle__set_Control(SFToggle_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._Control != CJNHFNHJHPE) {
    (__this->fields)._Control = CJNHFNHJHPE;
  }
  return;
}


// ===== public HHNIGLIDHLK get_ControlPriority()  [RVA 0x30D5680]
// SFToggle$$get_ControlPriority @ RVA 0x30D5680

int32_t SFToggle__get_ControlPriority(SFToggle_o *__this,MethodInfo *method)

{
  return (__this->fields)._ControlPriority;
}


// ===== public void .ctor()  [RVA 0x30D5688]
// SFToggle$$.ctor @ RVA 0x30D5688

void SFToggle___ctor(SFToggle_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  auVar2 = NEON_fmov(0x3f800000,4);
  (__this->fields)._Control = -1;
  uVar3 = auVar2._8_8_;
  (__this->fields)._InactiveHintColor.fields.b = (float)(int)uVar3;
  (__this->fields)._InactiveHintColor.fields.a = (float)(int)((ulong)uVar3 >> 0x20);
  uVar1 = auVar2._0_8_;
  (__this->fields)._InactiveHintColor.fields.r = (float)(int)uVar1;
  (__this->fields)._InactiveHintColor.fields.g = (float)(int)((ulong)uVar1 >> 0x20);
  (__this->fields)._ActiveHintColor.fields.b = (float)(int)uVar3;
  (__this->fields)._ActiveHintColor.fields.a = (float)(int)((ulong)uVar3 >> 0x20);
  (__this->fields)._ActiveHintColor.fields.r = (float)(int)uVar1;
  (__this->fields)._ActiveHintColor.fields.g = (float)(int)((ulong)uVar1 >> 0x20);
  UnityEngine_UI_Toggle___ctor((UnityEngine_UI_Toggle_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public FBBNEILNOKK get_Control()  [RVA 0x30D56A4]
// SFToggle$$get_Control @ RVA 0x30D56A4

int32_t SFToggle__get_Control(SFToggle_o *__this,MethodInfo *method)

{
  return (__this->fields)._Control;
}


// ===== public void set_ControlPriority(HHNIGLIDHLK CJNHFNHJHPE)  [RVA 0x30D56AC]
// SFToggle$$set_ControlPriority @ RVA 0x30D56AC

void SFToggle__set_ControlPriority(SFToggle_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._ControlPriority != CJNHFNHJHPE) {
    (__this->fields)._ControlPriority = CJNHFNHJHPE;
  }
  return;
}


// ===== public bool get_IsFlashing()  [RVA 0x30D56C0]
// SFToggle$$get_IsFlashing @ RVA 0x30D56C0

bool SFToggle__get_IsFlashing(SFToggle_o *__this,MethodInfo *method)

{
  return (__this->fields).BDKMNPCCDNI;
}


// ===== private void HJCGAPCGEAE(PointerEventData OHNNFPGGEFK)  [RVA 0x30D56C8]
// SFToggle$$HJCGAPCGEAE @ RVA 0x30D56C8

void SFToggle__HJCGAPCGEAE
               (SFToggle_o *__this,UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,
               MethodInfo *method)

{
  UnityEngine_UI_Toggle__OnPointerClick
            ((UnityEngine_UI_Toggle_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  return;
}


// ===== public override void OnPointerClick(PointerEventData OHNNFPGGEFK)  [RVA 0x30D56D0]
// SFToggle$$OnPointerClick @ RVA 0x30D56D0

void SFToggle__OnPointerClick
               (SFToggle_o *__this,UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,
               MethodInfo *method)

{
  UnityEngine_UI_Toggle__OnPointerClick
            ((UnityEngine_UI_Toggle_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  return;
}


// ===== protected override void DoStateTransition(Selectable.SelectionState HJEBKCDDBAB, bool BPHNPNCDLOA)  [RVA 0x30D56D8]
// SFToggle$$DoStateTransition @ RVA 0x30D56D8

void SFToggle__DoStateTransition
               (SFToggle_o *__this,int32_t HJEBKCDDBAB,bool BPHNPNCDLOA,MethodInfo *method)

{
  UnityEngine_UI_Selectable__DoStateTransition
            ((UnityEngine_UI_Selectable_o *)__this,HJEBKCDDBAB,BPHNPNCDLOA,(MethodInfo *)0x0);
  return;
}


// ===== public LabelAlias get_HintLabel()  [RVA 0x30D56E4]
// SFToggle$$get_HintLabel @ RVA 0x30D56E4

Nekki_SF2_GUI_LabelAlias_o * SFToggle__get_HintLabel(SFToggle_o *__this,MethodInfo *method)

{
  return (__this->fields)._HintLabel;
}


// ===== protected virtual void Update()  [RVA 0x30D56EC]
// SFToggle$$Update @ RVA 0x30D56EC

void SFToggle__Update(SFToggle_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  int iVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  undefined8 uVar5;
  undefined8 in_d1;
  undefined1 in_q2 [16];
  
  if ((DAT_04566328 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566328 = 1;
  }
  bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if ((!bVar1) && ((__this->fields).BDKMNPCCDNI != false)) {
    pNVar4 = (__this->fields)._FlashingImage;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar4 = (__this->fields)._FlashingImage;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        uVar5 = (*(pNVar4->klass->vtable)._22_get_color.methodPtr)
                          (pNVar4,(pNVar4->klass->vtable)._22_get_color.method);
        pNVar2 = (__this->fields)._FlashingImage;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          (*(pNVar2->klass->vtable)._22_get_color.methodPtr)
                    (pNVar2,(pNVar2->klass->vtable)._22_get_color.method);
          pNVar2 = (__this->fields)._FlashingImage;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            (*(pNVar2->klass->vtable)._22_get_color.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._22_get_color.method);
            (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                      (uVar5,in_d1,in_q2,(float)(__this->fields).MLCOHBGHGKF / 255.0,pNVar4,
                       (pNVar4->klass->vtable)._23_set_color.method);
            iVar3 = (__this->fields).MLCOHBGHGKF;
            if ((__this->fields).DBGMEKCEBCO == false) {
              if (iVar3 < 1) {
                (__this->fields).DBGMEKCEBCO = true;
                if (-1 < iVar3) {
                  return;
                }
                (__this->fields).MLCOHBGHGKF = 0;
                return;
              }
              iVar3 = iVar3 + -10;
            }
            else if (iVar3 < 0xfa) {
              iVar3 = iVar3 + 10;
            }
            else {
              (__this->fields).DBGMEKCEBCO = false;
              if (iVar3 == 0xfa) {
                return;
              }
              iVar3 = 0xfa;
            }
            (__this->fields).MLCOHBGHGKF = iVar3;
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void SetStatePressed()  [RVA 0x30D5850]
// SFToggle$$SetStatePressed @ RVA 0x30D5850

void SFToggle__SetStatePressed(SFToggle_o *__this,MethodInfo *method)

{
  if ((__this->fields).super.super.m_Interactable != false) {
                    /* WARNING: Could not recover jumptable at 0x031d586c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._26_DoStateTransition.methodPtr)
              (__this,2,0,(__this->klass->vtable)._26_DoStateTransition.method);
    return;
  }
  return;
}


// ===== private IEnumerator DGIMIOFPGCI(PointerEventData OHNNFPGGEFK)  [RVA 0x30D5874]
// SFToggle$$DGIMIOFPGCI @ RVA 0x30D5874

System_Collections_IEnumerator_o *
SFToggle__DGIMIOFPGCI
          (SFToggle_o *__this,UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04566329 & 1) == 0) {
    FUN_01bab630(&SFToggle_MHGDIPJANID_TypeInfo);
    DAT_04566329 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(SFToggle_MHGDIPJANID_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  __this_00[2].monitor = OHNNFPGGEFK;
  thunk_FUN_01c20e04(&__this_00[2].monitor,OHNNFPGGEFK);
  return (System_Collections_IEnumerator_o *)__this_00;
}

