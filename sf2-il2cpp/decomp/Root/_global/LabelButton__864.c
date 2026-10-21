// TypeDefIndex 864
// Namespace: 
// [RequireComponent(typeof(ResolutionImage))]
// public class LabelButton : ResolutionButton
// Fields:
//   public const string FILE_BUTTON_DARK = "CommonButtons.BtnDark";
//   public const string FILE_BUTTON_WHITE = "CommonButtons.BtnWhite";
//   public const string FILE_BUTTON_GREEN = "CommonButtons.BtnGreen";
//   public const string FILE_BUTTON_SILVER = "CommonButtons.btnSilver";
//   public const string FILE_BUTTON_YELLOW = "CommonButtons.BtnYellow";
//   public const string FILE_BUTTON_BEIGE = "CommonButtons.btnBeige";
//   public const string FILE_BUTTON_GOLD = "CommonButtons.BtnGold";
//   private static readonly string[] JMKEDHMEOAJ; // 0x0
//   private bool _textInvolvedTintTransaction; // 0x1A8
//   public LabelAlias Label; // 0x1B0
//   private FBBNEILNOKK _Control; // 0x1B8
//   private HHNIGLIDHLK _ControlPriority; // 0x1BC
//   private int _TrackingDeviceID; // 0x1C0
//   private LayoutGroup _Layout; // 0x1C8
//   private ButtonHintUI _Hint; // 0x1D0
//   private Color EGMBJLELLPB; // 0x1D8
//   protected float MFCHJFPDLGC; // 0x1E8

// ===== public void set_ButtonColor(LabelButton.MANJLBPDELA CJNHFNHJHPE)  [RVA 0x308A800]
// LabelButton$$set_ButtonColor @ RVA 0x308A800

/* WARNING: Type propagation algorithm not settling */

void LabelButton__set_ButtonColor(LabelButton_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB;
  
  if ((DAT_0456604c & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_0456604c = 1;
  }
  IEPECMCLKJB = (Nekki_SF2_GUI_ResolutionImage_o *)
                (__this->fields).super.super.super.super.m_TargetGraphic;
  if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    bVar1 = (((Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)->_2).naturalAligment;
    if (bVar1 <= (IEPECMCLKJB->klass->_2).naturalAligment) {
      if ((IEPECMCLKJB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo) {
        IEPECMCLKJB = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
      }
      goto LAB_0318a8a4;
    }
  }
  IEPECMCLKJB = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
LAB_0318a8a4:
  LabelButton__PGCFNOLMNDA(CJNHFNHJHPE,IEPECMCLKJB,method);
  return;
}


// ===== public virtual void set_Opacity(float CJNHFNHJHPE)  [RVA 0x308A8B8]
// LabelButton$$set_Opacity @ RVA 0x308A8B8

void LabelButton__set_Opacity(LabelButton_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  UnityEngine_UI_Graphic_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  float fVar5;
  float in_s1;
  float in_s2;
  
  if ((DAT_0456604d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_0456604d = 1;
  }
  pUVar3 = (__this->fields).super.super.super.super.m_TargetGraphic;
  (__this->fields).MFCHJFPDLGC = CJNHFNHJHPE;
  if (pUVar3 != (UnityEngine_UI_Graphic_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pUVar3->klass->_2).naturalAligment) &&
       ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) {
      (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
                (pUVar3,(pUVar3->klass->vtable)._22_get_color.method);
      (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                (pUVar3,(pUVar3->klass->vtable)._23_set_color.method);
      pNVar4 = (__this->fields).Label;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pNVar4 = (__this->fields).Label;
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        fVar5 = (float)(*(pNVar4->klass->vtable)._22_get_color.methodPtr)
                                 (pNVar4,(pNVar4->klass->vtable)._22_get_color.method);
        pNVar4 = (__this->fields).Label;
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                    (pNVar4,(pNVar4->klass->vtable)._23_set_color.method);
          (__this->fields).EGMBJLELLPB.fields.r = fVar5;
          (__this->fields).EGMBJLELLPB.fields.g = in_s1;
          (__this->fields).EGMBJLELLPB.fields.b = in_s2;
          (__this->fields).EGMBJLELLPB.fields.a = CJNHFNHJHPE;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Alias(string CJNHFNHJHPE)  [RVA 0x308AA00]
// LabelButton$$set_Alias @ RVA 0x308AA00

void LabelButton__set_Alias(LabelButton_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields).Label;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void Update()  [RVA 0x308989C]
// LabelButton$$Update @ RVA 0x308989C

void LabelButton__Update(LabelButton_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  SFButton__Update((SFButton_o *)__this,(MethodInfo *)0x0);
  LabelButton__NDGAACOPDKG(__this,method_00);
  return;
}


// ===== public HHNIGLIDHLK get_ControlPriority()  [RVA 0x308AB80]
// LabelButton$$get_ControlPriority @ RVA 0x308AB80

int32_t LabelButton__get_ControlPriority(LabelButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._ControlPriority;
}


// ===== private static void .cctor()  [RVA 0x308AB88]
// LabelButton$$.cctor @ RVA 0x308AB88

void LabelButton___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if ((DAT_0456604e & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_4524/*"CommonButtons.BtnGold"*/);
    FUN_01bab630(&StringLiteral_4525/*"CommonButtons.BtnGreen"*/);
    FUN_01bab630(&StringLiteral_4526/*"CommonButtons.BtnWhite"*/);
    FUN_01bab630(&StringLiteral_4528/*"CommonButtons.btnBeige"*/);
    FUN_01bab630(&StringLiteral_4523/*"CommonButtons.BtnDark"*/);
    FUN_01bab630(&StringLiteral_4529/*"CommonButtons.btnSilver"*/);
    FUN_01bab630(&StringLiteral_4527/*"CommonButtons.BtnYellow"*/);
    DAT_0456604e = 1;
  }
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = StringLiteral_4523/*"CommonButtons.BtnDark"*/;
      thunk_FUN_01c20e04(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = StringLiteral_4526/*"CommonButtons.BtnWhite"*/;
        thunk_FUN_01c20e04(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = StringLiteral_4525/*"CommonButtons.BtnGreen"*/;
          thunk_FUN_01c20e04(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = StringLiteral_4529/*"CommonButtons.btnSilver"*/;
            thunk_FUN_01c20e04(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = StringLiteral_4527/*"CommonButtons.BtnYellow"*/;
              thunk_FUN_01c20e04(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = StringLiteral_4528/*"CommonButtons.btnBeige"*/;
                thunk_FUN_01c20e04(pSVar1->m_Items + 5);
                if (6 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[6] = StringLiteral_4524/*"CommonButtons.BtnGold"*/;
                  thunk_FUN_01c20e04();
                  LabelButton_TypeInfo->static_fields->JMKEDHMEOAJ = pSVar1;
                  thunk_FUN_01c20e04(LabelButton_TypeInfo->static_fields,pSVar1);
                  return;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Text(string CJNHFNHJHPE)  [RVA 0x308AD70]
// LabelButton$$set_Text @ RVA 0x308AD70

void LabelButton__set_Text(LabelButton_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  pNVar1 = (__this->fields).Label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0318ad8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,CJNHFNHJHPE,(pNVar1->klass->vtable)._75_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string get_Alias()  [RVA 0x308AD94]
// LabelButton$$get_Alias @ RVA 0x308AD94

System_String_o * LabelButton__get_Alias(LabelButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  pNVar1 = (__this->fields).Label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    return *(System_String_o **)&(pNVar1->fields)._useLabelLineSpacing;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void DHDHDICMLCD()  [RVA 0x308ADB0]
// LabelButton$$DHDHDICMLCD @ RVA 0x308ADB0

void LabelButton__DHDHDICMLCD(LabelButton_o *__this,MethodInfo *method)

{
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  return;
}


// ===== public static LabelButton.MANJLBPDELA GetBtnColor(string OCNICPPCHLK)  [RVA 0x308ADBC]
// LabelButton$$GetBtnColor @ RVA 0x308ADBC

int32_t LabelButton__GetBtnColor(System_String_o *OCNICPPCHLK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_0456604f & 1) == 0) {
    FUN_01bab630(&StringLiteral_14941/*"White"*/);
    FUN_01bab630(&StringLiteral_6868/*"Gold"*/);
    FUN_01bab630(&StringLiteral_11121/*"Red"*/);
    FUN_01bab630(&StringLiteral_3453/*"Beige"*/);
    FUN_01bab630(&StringLiteral_6913/*"Green"*/);
    DAT_0456604f = 1;
  }
  bVar1 = System_String__op_Equality(OCNICPPCHLK,StringLiteral_11121/*"Red"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 0;
  }
  else {
    bVar1 = System_String__op_Equality(OCNICPPCHLK,StringLiteral_6913/*"Green"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 2;
    }
    else {
      bVar1 = System_String__op_Equality(OCNICPPCHLK,StringLiteral_14941/*"White"*/,(MethodInfo *)0x0);
      if ((bVar1) ||
         (bVar1 = System_String__op_Equality(OCNICPPCHLK,StringLiteral_3453/*"Beige"*/,(MethodInfo *)0x0),
         bVar1)) {
        iVar2 = 1;
      }
      else {
        bVar1 = System_String__op_Equality(OCNICPPCHLK,StringLiteral_6868/*"Gold"*/,(MethodInfo *)0x0);
        iVar2 = 6;
        if (!bVar1) {
          iVar2 = 1;
        }
      }
    }
  }
  return iVar2;
}


// ===== public FBBNEILNOKK get_Control()  [RVA 0x308AED0]
// LabelButton$$get_Control @ RVA 0x308AED0

int32_t LabelButton__get_Control(LabelButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._Control;
}


// ===== public void set_Control(FBBNEILNOKK CJNHFNHJHPE)  [RVA 0x308AED8]
// LabelButton$$set_Control @ RVA 0x308AED8

void LabelButton__set_Control(LabelButton_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._Control != CJNHFNHJHPE) {
    (__this->fields)._Control = CJNHFNHJHPE;
  }
  return;
}


// ===== public LayoutGroup get_Layout()  [RVA 0x308AEEC]
// LabelButton$$get_Layout @ RVA 0x308AEEC

UnityEngine_UI_LayoutGroup_o * LabelButton__get_Layout(LabelButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._Layout;
}


// ===== public void set_Color(Color CJNHFNHJHPE)  [RVA 0x308AEF4]
// LabelButton$$set_Color @ RVA 0x308AEF4

void LabelButton__set_Color
               (LabelButton_o *__this,UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  pNVar1 = (__this->fields).Label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._23_set_color.method);
    (__this->fields).EGMBJLELLPB.fields.r = CJNHFNHJHPE.fields.r;
    (__this->fields).EGMBJLELLPB.fields.g = CJNHFNHJHPE.fields.g;
    (__this->fields).EGMBJLELLPB.fields.b = CJNHFNHJHPE.fields.b;
    (__this->fields).EGMBJLELLPB.fields.a = CJNHFNHJHPE.fields.a;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public LabelButton.MANJLBPDELA get_ButtonColor()  [RVA 0x308AF50]
// LabelButton$$get_ButtonColor @ RVA 0x308AF50

/* WARNING: Type propagation algorithm not settling */

int32_t LabelButton__get_ButtonColor(LabelButton_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  System_String_array *pSVar3;
  UnityEngine_UI_Graphic_o *x;
  ulong uVar4;
  UnityEngine_Events_UnityAction_o *a;
  
  if ((DAT_04566050 & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_04566050 = 1;
    method = extraout_x1;
  }
  x = (__this->fields).super.super.super.super.m_TargetGraphic;
  if (x != (UnityEngine_UI_Graphic_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (x->klass->_2).naturalAligment) {
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo) {
        x = (UnityEngine_UI_Graphic_o *)0x0;
      }
      goto LAB_0318afe4;
    }
  }
  x = (UnityEngine_UI_Graphic_o *)0x0;
LAB_0318afe4:
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
LAB_0318b090:
    uVar4 = 1;
LAB_0318b094:
    return (int32_t)uVar4;
  }
  uVar4 = 0;
  do {
    if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = LabelButton_TypeInfo->static_fields->JMKEDHMEOAJ;
    if (pSVar3 == (System_String_array *)0x0) {
LAB_0318b0a8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((long)(int)pSVar3->max_length <= (long)uVar4) goto LAB_0318b090;
    if (x == (UnityEngine_UI_Graphic_o *)0x0) goto LAB_0318b0a8;
    a = x[1].fields.m_OnDirtyLayoutCallback;
    if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pSVar3 = LabelButton_TypeInfo->static_fields->JMKEDHMEOAJ;
      if (pSVar3 == (System_String_array *)0x0) goto LAB_0318b0a8;
    }
    if ((uint)pSVar3->max_length <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    bVar2 = System_String__op_Equality
                      ((System_String_o *)a,pSVar3->m_Items[uVar4],(MethodInfo *)0x0);
    if (bVar2) goto LAB_0318b094;
    uVar4 = uVar4 + 1;
  } while( true );
}


// ===== public void set_ControlPriority(HHNIGLIDHLK CJNHFNHJHPE)  [RVA 0x308B0B0]
// LabelButton$$set_ControlPriority @ RVA 0x308B0B0

void LabelButton__set_ControlPriority(LabelButton_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._ControlPriority != CJNHFNHJHPE) {
    (__this->fields)._ControlPriority = CJNHFNHJHPE;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3089688]
// LabelButton$$.ctor @ RVA 0x3089688

void LabelButton___ctor(LabelButton_o *__this,MethodInfo *method)

{
  (__this->fields)._Control = -1;
  (__this->fields)._TrackingDeviceID = -1;
  (__this->fields).EGMBJLELLPB.fields.b = 0.0;
  (__this->fields).EGMBJLELLPB.fields.a = 1.0;
  (__this->fields).EGMBJLELLPB.fields.r = 0.0;
  (__this->fields).EGMBJLELLPB.fields.g = 0.0;
  Nekki_SF2_GUI_ResolutionButton___ctor
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void NDGAACOPDKG()  [RVA 0x308AA1C]
// LabelButton$$NDGAACOPDKG @ RVA 0x308AA1C

void LabelButton__NDGAACOPDKG(LabelButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_04566051 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_ColorBlock_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566051 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.super.super.super.m_Transition == 1) {
    pNVar3 = (__this->fields).Label;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).Label;
      fVar4 = (__this->fields).EGMBJLELLPB.fields.r;
      fVar5 = (__this->fields).EGMBJLELLPB.fields.g;
      fVar6 = (__this->fields).EGMBJLELLPB.fields.b;
      fVar7 = (__this->fields).EGMBJLELLPB.fields.a;
      if ((__this->fields)._textInvolvedTintTransaction == false) {
        if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0318ab7c;
        UNRECOVERED_JUMPTABLE = (pNVar3->klass->vtable)._23_set_color.methodPtr;
        pMVar2 = (pNVar3->klass->vtable)._23_set_color.method;
      }
      else {
        if ((__this->fields).super.super.super.super.m_Interactable == false) {
          fVar8 = (__this->fields).super.super.super.super.m_Colors.fields.m_DisabledColor.fields.r;
          fVar9 = (__this->fields).super.super.super.super.m_Colors.fields.m_DisabledColor.fields.g;
          fVar10 = (__this->fields).super.super.super.super.m_Colors.fields.m_DisabledColor.fields.b
          ;
          fVar11 = (__this->fields).super.super.super.super.m_Colors.fields.m_DisabledColor.fields.a
          ;
          if ((UnityEngine_UI_ColorBlock_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
        }
        else {
          fVar8 = 1.0;
          fVar9 = 1.0;
          fVar10 = 1.0;
          fVar11 = 1.0;
        }
        if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
LAB_0318ab7c:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        fVar7 = fVar7 * fVar11;
        fVar6 = fVar6 * fVar10;
        fVar5 = fVar5 * fVar9;
        UNRECOVERED_JUMPTABLE = (pNVar3->klass->vtable)._23_set_color.methodPtr;
        pMVar2 = (pNVar3->klass->vtable)._23_set_color.method;
        fVar4 = fVar4 * fVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x0318ab78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                ((ulong)(uint)fVar4,(ulong)(uint)fVar5,(ulong)(uint)fVar6,(ulong)(uint)fVar7,pNVar3,
                 pMVar2);
      return;
    }
  }
  return;
}


// ===== public int get_TrackingDeviceID()  [RVA 0x308B0C4]
// LabelButton$$get_TrackingDeviceID @ RVA 0x308B0C4

int32_t LabelButton__get_TrackingDeviceID(LabelButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._TrackingDeviceID;
}


// ===== public void set_TrackingDeviceID(int CJNHFNHJHPE)  [RVA 0x308B0CC]
// LabelButton$$set_TrackingDeviceID @ RVA 0x308B0CC

void LabelButton__set_TrackingDeviceID(LabelButton_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._TrackingDeviceID != CJNHFNHJHPE) {
    (__this->fields)._TrackingDeviceID = CJNHFNHJHPE;
  }
  return;
}


// ===== public override void OnSelect(BaseEventData OHNNFPGGEFK)  [RVA 0x308985C]
// LabelButton$$OnSelect @ RVA 0x308985C

void LabelButton__OnSelect
               (LabelButton_o *__this,UnityEngine_EventSystems_BaseEventData_o *OHNNFPGGEFK,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  UnityEngine_UI_Selectable__OnSelect
            ((UnityEngine_UI_Selectable_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  LabelButton__NDGAACOPDKG(__this,method_00);
  return;
}


// ===== public ButtonHintUI get_Hint()  [RVA 0x308B0E0]
// LabelButton$$get_Hint @ RVA 0x308B0E0

Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *
LabelButton__get_Hint(LabelButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._Hint;
}


// ===== public virtual float get_Opacity()  [RVA 0x308B0E8]
// LabelButton$$get_Opacity @ RVA 0x308B0E8

float LabelButton__get_Opacity(LabelButton_o *__this,MethodInfo *method)

{
  return (__this->fields).MFCHJFPDLGC;
}


// ===== public Color get_Color()  [RVA 0x308B0F0]
// LabelButton$$get_Color @ RVA 0x308B0F0

UnityEngine_Color_o LabelButton__get_Color(LabelButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o UVar2;
  
  pNVar1 = (__this->fields).Label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0318b10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar2.fields.r =
         (*(pNVar1->klass->vtable)._22_get_color.methodPtr)
                   (pNVar1,(pNVar1->klass->vtable)._22_get_color.method);
    UVar2.fields.g = (float)in_s1;
    UVar2.fields.a = (float)in_s3;
    UVar2.fields.b = (float)in_s2;
    return (UnityEngine_Color_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string get_Text()  [RVA 0x308B114]
// LabelButton$$get_Text @ RVA 0x308B114

System_String_o * LabelButton__get_Text(LabelButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  System_String_o *pSVar2;
  
  pNVar1 = (__this->fields).Label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0318b130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)
             (*(pNVar1->klass->vtable)._74_get_text.methodPtr)
                       (pNVar1,(pNVar1->klass->vtable)._74_get_text.method);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Rect get_rect()  [RVA 0x308B138]
// LabelButton$$get_rect @ RVA 0x308B138

UnityEngine_Rect_o LabelButton__get_rect(LabelButton_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Rect_Fields UVar1;
  
  if ((DAT_04566052 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_04566052 = 1;
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,
                         Method_UnityEngine_Component_GetComponent<RectTransform>__);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = (UnityEngine_Rect_Fields)
            UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Rect_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void Awake()  [RVA 0x308B190]
// LabelButton$$Awake @ RVA 0x308B190

void LabelButton__Awake(LabelButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_UI_LayoutGroup_o *pUVar3;
  Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *pNVar4;
  float fVar5;
  float in_s1;
  float in_s2;
  float in_s3;
  
  if ((DAT_04566053 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<ButtonHintUI>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<LayoutGroup>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566053 = 1;
  }
  Nekki_SF2_GUI_ResolutionButton__Awake
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super.super._EnableClickAnimation = true;
  pNVar2 = (__this->fields).Label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    pNVar2 = (__this->fields).Label;
    if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar5 = (float)(*(pNVar2->klass->vtable)._22_get_color.methodPtr)
                             (pNVar2,(pNVar2->klass->vtable)._22_get_color.method);
    (__this->fields).EGMBJLELLPB.fields.r = fVar5;
    (__this->fields).EGMBJLELLPB.fields.g = in_s1;
    (__this->fields).EGMBJLELLPB.fields.b = in_s2;
    (__this->fields).EGMBJLELLPB.fields.a = in_s3;
    method_00 = extraout_x1_00;
  }
  LabelButton__NDGAACOPDKG(__this,method_00);
  pNVar2 = (__this->fields).Label;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (pNVar2->fields).super.FitImageLineHeightParam =
         (Nekki_SF2_GUI_TextPic_FitImageLineHeightParams_o *)__this;
    thunk_FUN_01c20e04(&(pNVar2->fields).super.FitImageLineHeightParam,__this);
  }
  pUVar3 = (__this->fields)._Layout;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_UI_LayoutGroup_o *)
             UnityEngine_Component__GetComponentInChildren<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponentInChildren<LayoutGroup>__);
    (__this->fields)._Layout = pUVar3;
    thunk_FUN_01c20e04(&(__this->fields)._Layout,pUVar3);
  }
  pNVar4 = (__this->fields)._Hint;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *)
             UnityEngine_Component__GetComponentInChildren<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponentInChildren<ButtonHintUI>__);
    (__this->fields)._Hint = pNVar4;
    thunk_FUN_01c20e04(&(__this->fields)._Hint,pNVar4);
    return;
  }
  return;
}


// ===== protected static void PGCFNOLMNDA(LabelButton.MANJLBPDELA EFJKPCADGJH, ResolutionImage IEPECMCLKJB)  [RVA 0x3089718]
// LabelButton$$PGCFNOLMNDA @ RVA 0x3089718

void LabelButton__PGCFNOLMNDA
               (int32_t EFJKPCADGJH,Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB,MethodInfo *method)

{
  undefined4 uVar1;
  bool bVar2;
  System_String_array *pSVar3;
  
  if ((DAT_04566054 & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_04566054 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)IEPECMCLKJB,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      uVar1 = StringLiteral_14092/*"UI/Atlases/"*/._4_4_;
      (IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14092/*"UI/Atlases/"*/
      ;
      (IEPECMCLKJB->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
      thunk_FUN_01c20e04(&(IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier);
      if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = LabelButton_TypeInfo->static_fields->JMKEDHMEOAJ;
      if (pSVar3 != (System_String_array *)0x0) {
        if ((uint)EFJKPCADGJH < (uint)pSVar3->max_length) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (IEPECMCLKJB,pSVar3->m_Items[EFJKPCADGJH],(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

