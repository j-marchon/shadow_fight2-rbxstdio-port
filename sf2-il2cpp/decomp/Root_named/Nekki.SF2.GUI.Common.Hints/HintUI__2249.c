// TypeDefIndex 2249
// Namespace: Nekki.SF2.GUI.Common.Hints
// public class HintUI : MonoBehaviour
// Fields:
//   private static readonly string ODBHBCHKHII; // 0x0
//   private static readonly string LCFAOLOGNAN; // 0x8
//   private static readonly Color HHNMFIEPBIK; // 0x10
//   private static readonly Color NJIIBKLILHG; // 0x20
//   private MIBHAJBEMIK _ID; // 0x20
//   private CHEKBFHAHDA _Style; // 0x24

// ===== public bool get_IsSeparator()  [RVA 0x32FC888]
// Nekki.SF2.GUI.Common.Hints.HintUI$$get_IsSeparator @ RVA 0x32FC888

bool Nekki_SF2_GUI_Common_Hints_HintUI__get_IsSeparator
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,MethodInfo *method)

{
  int32_t OHLKNCPBCBL;
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045676ec & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    DAT_045676ec = 1;
    method = extraout_x1;
  }
  OHLKNCPBCBL = (__this->fields)._ID;
  if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ECNCJPCKOLN_TypeInfo,method);
  }
  bVar1 = ECNCJPCKOLN__MJGNIHLBKJJ(OHLKNCPBCBL,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public MIBHAJBEMIK get_ID()  [RVA 0x32FC8E4]
// Nekki.SF2.GUI.Common.Hints.HintUI$$get_ID @ RVA 0x32FC8E4

int32_t Nekki_SF2_GUI_Common_Hints_HintUI__get_ID
                  (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,MethodInfo *method)

{
  return (__this->fields)._ID;
}


// ===== public CHEKBFHAHDA get_Style()  [RVA 0x32FC8EC]
// Nekki.SF2.GUI.Common.Hints.HintUI$$get_Style @ RVA 0x32FC8EC

int32_t Nekki_SF2_GUI_Common_Hints_HintUI__get_Style
                  (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,MethodInfo *method)

{
  return (__this->fields)._Style;
}


// ===== private void LDIOMNGBBHD(ResolutionImage[] EFOOOIEHBKP)  [RVA 0x32FC8F4]
// Nekki.SF2.GUI.Common.Hints.HintUI$$LDIOMNGBBHD @ RVA 0x32FC8F4

void Nekki_SF2_GUI_Common_Hints_HintUI__LDIOMNGBBHD
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,
               Nekki_SF2_GUI_ResolutionImage_array *EFOOOIEHBKP,MethodInfo *method)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (EFOOOIEHBKP == (Nekki_SF2_GUI_ResolutionImage_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (int)EFOOOIEHBKP->max_length) {
    uVar3 = 0;
    uVar2 = EFOOOIEHBKP->max_length & 0xffffffff;
    do {
      if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      Nekki_SF2_GUI_Common_Hints_HintUI__DNIJFEPCHFA(__this,EFOOOIEHBKP->m_Items[uVar3],method);
      uVar1 = (uint)EFOOOIEHBKP->max_length;
      uVar2 = (ulong)uVar1;
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)uVar1);
  }
  return;
}


// ===== private void NDOMIJALNGD(Text JLNPKGGFFDD)  [RVA 0x32FCA64]
// Nekki.SF2.GUI.Common.Hints.HintUI$$NDOMIJALNGD @ RVA 0x32FCA64

void Nekki_SF2_GUI_Common_Hints_HintUI__NDOMIJALNGD
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,UnityEngine_UI_Text_o *JLNPKGGFFDD,
               MethodInfo *method)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  Nekki_SF2_GUI_Common_Hints_HintUI_StaticFields *pNVar7;
  
  if ((DAT_045676ed & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo);
    DAT_045676ed = 1;
  }
  iVar5 = (__this->fields)._Style;
  if ((Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (JLNPKGGFFDD != (UnityEngine_UI_Text_o *)0x0) {
    bVar6 = iVar5 != 0;
    lVar1 = 0x2c;
    if (bVar6) {
      lVar1 = 0x1c;
    }
    lVar2 = 0x28;
    if (bVar6) {
      lVar2 = 0x18;
    }
    lVar3 = 0x24;
    if (bVar6) {
      lVar3 = 0x14;
    }
    pNVar7 = Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields;
    lVar4 = 0x20;
    if (bVar6) {
      lVar4 = 0x10;
    }
                    /* WARNING: Could not recover jumptable at 0x033fcb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(JLNPKGGFFDD->klass->vtable)._23_set_color.methodPtr)
              (*(undefined4 *)((long)&pNVar7->ODBHBCHKHII + lVar4),
               *(undefined4 *)((long)&pNVar7->ODBHBCHKHII + lVar3),
               *(undefined4 *)((long)&pNVar7->ODBHBCHKHII + lVar2),
               *(undefined4 *)((long)&pNVar7->ODBHBCHKHII + lVar1),JLNPKGGFFDD,
               (JLNPKGGFFDD->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AHDBBJNEIJP(Graphic DAHDMONMPFJ)  [RVA 0x32FCB28]
// Nekki.SF2.GUI.Common.Hints.HintUI$$AHDBBJNEIJP @ RVA 0x32FCB28

void Nekki_SF2_GUI_Common_Hints_HintUI__AHDBBJNEIJP
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,UnityEngine_UI_Graphic_o *DAHDMONMPFJ,
               MethodInfo *method)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  Nekki_SF2_GUI_Common_Hints_HintUI_StaticFields *pNVar7;
  
  if ((DAT_045676ee & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo);
    DAT_045676ee = 1;
  }
  iVar5 = (__this->fields)._Style;
  if ((Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAHDMONMPFJ != (UnityEngine_UI_Graphic_o *)0x0) {
    bVar6 = iVar5 != 0;
    lVar1 = 0x1c;
    if (bVar6) {
      lVar1 = 0x2c;
    }
    lVar2 = 0x18;
    if (bVar6) {
      lVar2 = 0x28;
    }
    lVar3 = 0x14;
    if (bVar6) {
      lVar3 = 0x24;
    }
    pNVar7 = Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields;
    lVar4 = 0x10;
    if (bVar6) {
      lVar4 = 0x20;
    }
                    /* WARNING: Could not recover jumptable at 0x033fcbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(DAHDMONMPFJ->klass->vtable)._23_set_color.methodPtr)
              (*(undefined4 *)((long)&pNVar7->ODBHBCHKHII + lVar4),
               *(undefined4 *)((long)&pNVar7->ODBHBCHKHII + lVar3),
               *(undefined4 *)((long)&pNVar7->ODBHBCHKHII + lVar2),
               *(undefined4 *)((long)&pNVar7->ODBHBCHKHII + lVar1),DAHDMONMPFJ,
               (DAHDMONMPFJ->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Style(CHEKBFHAHDA CJNHFNHJHPE)  [RVA 0x32FCBEC]
// Nekki.SF2.GUI.Common.Hints.HintUI$$set_Style @ RVA 0x32FCBEC

void Nekki_SF2_GUI_Common_Hints_HintUI__set_Style
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._Style == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._Style = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_Hints_HintUI__OLHNKIJCLJK(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== private void Awake()  [RVA 0x32FCD80]
// Nekki.SF2.GUI.Common.Hints.HintUI$$Awake @ RVA 0x32FCD80

void Nekki_SF2_GUI_Common_Hints_HintUI__Awake
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,MethodInfo *method)

{
  uint uVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  Nekki_SF2_GUI_ResolutionImage_array *EFOOOIEHBKP;
  UnityEngine_UI_Text_o *JLNPKGGFFDD;
  UnityEngine_UI_Graphic_o *DAHDMONMPFJ;
  MethodInfo *pMVar3;
  MethodInfo *in_x2;
  
  if ((DAT_045676f1 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<Graphic>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<Text>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Graphic>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<ResolutionImage>__);
    DAT_045676f1 = 1;
  }
  uVar1 = (__this->fields)._ID;
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    goto switchD_033fcc88_caseD_0;
  case 4:
  case 5:
  case 6:
    pMVar3 = Method_UnityEngine_Component_GetComponentsInChildren<ResolutionImage>__;
    EFOOOIEHBKP = (Nekki_SF2_GUI_ResolutionImage_array *)
                  UnityEngine_Component__GetComponentsInChildren<object>
                            ((UnityEngine_Component_o *)__this,true,
                             (MethodInfo_1E71BD0 *)
                             Method_UnityEngine_Component_GetComponentsInChildren<ResolutionImage>__
                            );
    Nekki_SF2_GUI_Common_Hints_HintUI__LDIOMNGBBHD(__this,EFOOOIEHBKP,pMVar3);
    return;
  case 7:
  case 8:
    pNVar2 = (Nekki_SF2_GUI_ResolutionImage_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    Nekki_SF2_GUI_Common_Hints_HintUI__DNIJFEPCHFA(__this,pNVar2,in_x2);
    pMVar3 = Method_UnityEngine_Component_GetComponentInChildren<Text>__;
    JLNPKGGFFDD = (UnityEngine_UI_Text_o *)
                  UnityEngine_Component__GetComponentInChildren<object>
                            ((UnityEngine_Component_o *)__this,true,
                             (MethodInfo_1E71400 *)
                             Method_UnityEngine_Component_GetComponentInChildren<Text>__);
    Nekki_SF2_GUI_Common_Hints_HintUI__NDOMIJALNGD(__this,JLNPKGGFFDD,pMVar3);
    return;
  case 9:
  case 10:
    DAHDMONMPFJ = (UnityEngine_UI_Graphic_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)__this,
                             Method_UnityEngine_Component_GetComponent<Graphic>__);
LAB_033fcd30:
    Nekki_SF2_GUI_Common_Hints_HintUI__AHDBBJNEIJP(__this,DAHDMONMPFJ,in_x2);
    return;
  default:
    if (5 < uVar1 - 100) {
      if ((uVar1 & 0xfffffffe) != 500) {
        return;
      }
      DAHDMONMPFJ = (UnityEngine_UI_Graphic_o *)
                    UnityEngine_Component__GetComponentInChildren<object>
                              ((UnityEngine_Component_o *)__this,
                               Method_UnityEngine_Component_GetComponentInChildren<Graphic>__);
      goto LAB_033fcd30;
    }
switchD_033fcc88_caseD_0:
    pNVar2 = (Nekki_SF2_GUI_ResolutionImage_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    Nekki_SF2_GUI_Common_Hints_HintUI__DNIJFEPCHFA(__this,pNVar2,in_x2);
    return;
  }
}


// ===== public void .ctor()  [RVA 0x32FCD84]
// Nekki.SF2.GUI.Common.Hints.HintUI$$.ctor @ RVA 0x32FCD84

void Nekki_SF2_GUI_Common_Hints_HintUI___ctor
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void SwitchStyle()  [RVA 0x32FCD8C]
// Nekki.SF2.GUI.Common.Hints.HintUI$$SwitchStyle @ RVA 0x32FCD8C

void Nekki_SF2_GUI_Common_Hints_HintUI__SwitchStyle
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (__this->fields)._Style;
  uVar2 = (uint)(uVar1 == 0);
  if (uVar1 == uVar2) {
    return;
  }
  (__this->fields)._Style = uVar2;
  Nekki_SF2_GUI_Common_Hints_HintUI__OLHNKIJCLJK(__this,method);
  return;
}


// ===== private void DNIJFEPCHFA(ResolutionImage DFMPBHNIPLA)  [RVA 0x32FC960]
// Nekki.SF2.GUI.Common.Hints.HintUI$$DNIJFEPCHFA @ RVA 0x32FC960

void Nekki_SF2_GUI_Common_Hints_HintUI__DNIJFEPCHFA
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,
               Nekki_SF2_GUI_ResolutionImage_o *DFMPBHNIPLA,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintUI_StaticFields *pNVar1;
  int iVar2;
  System_String_o *pSVar3;
  
  if ((DAT_045676ef & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045676ef = 1;
  }
  if (DFMPBHNIPLA != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pSVar3 = (DFMPBHNIPLA->fields)._TexturePath;
    if ((Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pSVar3 != (System_String_o *)0x0) {
      pSVar3 = System_String__Replace
                         (pSVar3,Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields->
                                 ODBHBCHKHII,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar3 = System_String__Replace
                           (pSVar3,Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields->
                                   LCFAOLOGNAN,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        iVar2 = (__this->fields)._Style;
        if ((Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo);
        }
        pNVar1 = Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields;
        if (iVar2 != 0) {
          pNVar1 = (Nekki_SF2_GUI_Common_Hints_HintUI_StaticFields *)
                   &Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields->LCFAOLOGNAN;
        }
        pSVar3 = PCOEHCPGBBG__OIOFKEFFDPO(pSVar3,pNVar1->ODBHBCHKHII,(MethodInfo *)0x0);
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(DFMPBHNIPLA,pSVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x32FCDAC]
// Nekki.SF2.GUI.Common.Hints.HintUI$$OnDestroy @ RVA 0x32FCDAC

void Nekki_SF2_GUI_Common_Hints_HintUI__OnDestroy
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,MethodInfo *method)

{
  if ((DAT_045676f0 & 1) == 0) {
    FUN_01bab630(&Util_TypeInfo);
    DAT_045676f0 = 1;
  }
  return;
}


// ===== private void OLHNKIJCLJK()  [RVA 0x32FCC04]
// Nekki.SF2.GUI.Common.Hints.HintUI$$OLHNKIJCLJK @ RVA 0x32FCC04

void Nekki_SF2_GUI_Common_Hints_HintUI__OLHNKIJCLJK
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,MethodInfo *method)

{
  uint uVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  Nekki_SF2_GUI_ResolutionImage_array *EFOOOIEHBKP;
  UnityEngine_UI_Text_o *JLNPKGGFFDD;
  UnityEngine_UI_Graphic_o *DAHDMONMPFJ;
  MethodInfo *in_x2;
  MethodInfo *pMVar3;
  
  if ((DAT_045676f1 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<Graphic>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<Text>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Graphic>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<ResolutionImage>__);
    DAT_045676f1 = 1;
  }
  uVar1 = (__this->fields)._ID;
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    goto switchD_033fcc88_caseD_0;
  case 4:
  case 5:
  case 6:
    pMVar3 = Method_UnityEngine_Component_GetComponentsInChildren<ResolutionImage>__;
    EFOOOIEHBKP = (Nekki_SF2_GUI_ResolutionImage_array *)
                  UnityEngine_Component__GetComponentsInChildren<object>
                            ((UnityEngine_Component_o *)__this,true,
                             (MethodInfo_1E71BD0 *)
                             Method_UnityEngine_Component_GetComponentsInChildren<ResolutionImage>__
                            );
    Nekki_SF2_GUI_Common_Hints_HintUI__LDIOMNGBBHD(__this,EFOOOIEHBKP,pMVar3);
    return;
  case 7:
  case 8:
    pNVar2 = (Nekki_SF2_GUI_ResolutionImage_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    Nekki_SF2_GUI_Common_Hints_HintUI__DNIJFEPCHFA(__this,pNVar2,in_x2);
    pMVar3 = Method_UnityEngine_Component_GetComponentInChildren<Text>__;
    JLNPKGGFFDD = (UnityEngine_UI_Text_o *)
                  UnityEngine_Component__GetComponentInChildren<object>
                            ((UnityEngine_Component_o *)__this,true,
                             (MethodInfo_1E71400 *)
                             Method_UnityEngine_Component_GetComponentInChildren<Text>__);
    Nekki_SF2_GUI_Common_Hints_HintUI__NDOMIJALNGD(__this,JLNPKGGFFDD,pMVar3);
    return;
  case 9:
  case 10:
    DAHDMONMPFJ = (UnityEngine_UI_Graphic_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)__this,
                             Method_UnityEngine_Component_GetComponent<Graphic>__);
LAB_033fcd30:
    Nekki_SF2_GUI_Common_Hints_HintUI__AHDBBJNEIJP(__this,DAHDMONMPFJ,in_x2);
    return;
  default:
    if (5 < uVar1 - 100) {
      if ((uVar1 & 0xfffffffe) != 500) {
        return;
      }
      DAHDMONMPFJ = (UnityEngine_UI_Graphic_o *)
                    UnityEngine_Component__GetComponentInChildren<object>
                              ((UnityEngine_Component_o *)__this,
                               Method_UnityEngine_Component_GetComponentInChildren<Graphic>__);
      goto LAB_033fcd30;
    }
switchD_033fcc88_caseD_0:
    pNVar2 = (Nekki_SF2_GUI_ResolutionImage_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    Nekki_SF2_GUI_Common_Hints_HintUI__DNIJFEPCHFA(__this,pNVar2,in_x2);
    return;
  }
}


// ===== private static void .cctor()  [RVA 0x32FCDD8]
// Nekki.SF2.GUI.Common.Hints.HintUI$$.cctor @ RVA 0x32FCDD8

void Nekki_SF2_GUI_Common_Hints_HintUI___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintUI_c *pNVar1;
  Nekki_SF2_GUI_Common_Hints_HintUI_StaticFields *pNVar2;
  
  if ((DAT_045676f2 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo);
    FUN_01bab630(&StringLiteral_16204/*"_light"*/);
    FUN_01bab630(&StringLiteral_16190/*"_dark"*/);
    DAT_045676f2 = 1;
  }
  Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields->ODBHBCHKHII = StringLiteral_16190/*"_dark"*/;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields,StringLiteral_16190/*"_dark"*/);
  Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields->LCFAOLOGNAN = StringLiteral_16204/*"_light"*/;
  thunk_FUN_01c20e04();
  pNVar1 = Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo;
  pNVar2 = Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields;
  (pNVar2->HHNMFIEPBIK).fields.b = 0.27450982;
  (pNVar2->HHNMFIEPBIK).fields.a = 1.0;
  (pNVar2->HHNMFIEPBIK).fields.r = 0.44313726;
  (pNVar2->HHNMFIEPBIK).fields.g = 0.32156864;
  pNVar2 = pNVar1->static_fields;
  (pNVar2->NJIIBKLILHG).fields.b = 0.67058825;
  (pNVar2->NJIIBKLILHG).fields.a = 1.0;
  (pNVar2->NJIIBKLILHG).fields.r = 0.8901961;
  (pNVar2->NJIIBKLILHG).fields.g = 0.8156863;
  return;
}

