// TypeDefIndex 1272
// Namespace: Nekki.SF2.GUI.Map
// public class ContentCompleteOrLocked : ContentBase
// Fields:
//   protected LabelAlias _lblLocked; // 0x28
//   protected LabelAlias _lblTime; // 0x30
//   protected Button _btnPlayVideo; // 0x38
//   private OOMHDDBCBJP ACMHOIKOLBE; // 0x40
//   private DNELIPCHKLK AABIECAIFGA; // 0x48
//   private long GKKNEFKGMKO; // 0x50

// ===== private void Update()  [RVA 0x314D228]
// Nekki.SF2.GUI.Map.ContentCompleteOrLocked$$Update @ RVA 0x314D228

void Nekki_SF2_GUI_Map_ContentCompleteOrLocked__Update
               (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  AFFHKININGD_o *__this_00;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *arg2;
  OOMHDDBCBJP_o *pOVar5;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar6;
  PAMEPBLOLPB_o *pPVar7;
  System_Action_OOMHDDBCBJP__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  DNELIPCHKLK_o *DBIAAJNKHLH;
  Nekki_SF2_GUI_LabelAlias_o *pNVar10;
  long lVar11;
  int32_t local_3c;
  int32_t local_38;
  int32_t local_34;
  System_TimeSpan_Fields local_28;
  
  if ((DAT_045667d8 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&StringLiteral_22269/*"{0:D2}:{1:D2}:{2:D2}"*/);
    FUN_01bab630(&StringLiteral_22268/*"{0:D2}:{1:D2}"*/);
    DAT_045667d8 = 1;
    method = extraout_x1;
  }
  DBIAAJNKHLH = (__this->fields).AABIECAIFGA;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE__OJDOCBFHNBN(DBIAAJNKHLH,(MethodInfo *)0x0);
  if (__this_00 == (AFFHKININGD_o *)0x0) {
    return;
  }
  bVar1 = AFFHKININGD__CAGKMGGOIOJ(__this_00,(MethodInfo *)0x0);
  if (!bVar1) {
    pNVar10 = (__this->fields)._lblTime;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar1) {
      pPVar7 = (__this_00->fields).JPBIBBBMCCD;
      if (pPVar7 == (PAMEPBLOLPB_o *)0x0) {
LAB_0324d4c8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar11 = (__this_00->fields).PIKNKFHOMLP - (pPVar7->fields).GKGHELAOIBG;
      if (lVar11 == (__this->fields).GKKNEFKGMKO) {
        return;
      }
      (__this->fields).GKKNEFKGMKO = lVar11;
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_28._ticks = (int64_t)System_TimeSpan__FromSeconds((double)lVar11,(MethodInfo *)0x0);
      iVar2 = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
      }
      if (iVar2 < 1) {
        local_34 = System_TimeSpan__get_Minutes((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
        pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
        local_38 = System_TimeSpan__get_Seconds((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
        pOVar5 = (OOMHDDBCBJP_o *)
                 System_String__Format(StringLiteral_22268/*"{0:D2}:{1:D2}"*/,pIVar3,pIVar4,(MethodInfo *)0x0);
      }
      else {
        local_34 = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
        pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
        local_38 = System_TimeSpan__get_Minutes((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
        local_3c = System_TimeSpan__get_Seconds((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
        arg2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
        pOVar5 = (OOMHDDBCBJP_o *)
                 System_String__Format(StringLiteral_22269/*"{0:D2}:{1:D2}:{2:D2}"*/,pIVar3,pIVar4,arg2,(MethodInfo *)0x0);
      }
      pNVar10 = (__this->fields)._lblTime;
      if (pNVar10 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0324d4c8;
      pIVar9 = (pNVar10->klass->vtable)._75_set_text.methodPtr;
      pMVar6 = (pNVar10->klass->vtable)._75_set_text.method;
      goto LAB_0324d4b0;
    }
  }
  pSVar8 = (__this->fields).super.OnUpdateBattleInfo;
  if (pSVar8 == (System_Action_OOMHDDBCBJP__o *)0x0) {
    return;
  }
  pOVar5 = (__this->fields).ACMHOIKOLBE;
  pIVar9 = (Il2CppMethodPointer)(pSVar8->fields).super.super.invoke_impl;
  pNVar10 = (Nekki_SF2_GUI_LabelAlias_o *)(pSVar8->fields).super.super.method_code;
  pMVar6 = (MethodInfo *)(pSVar8->fields).super.super.method;
LAB_0324d4b0:
  (*pIVar9)(pNVar10,pOVar5,pMVar6);
  return;
}


// ===== public void Init(OOMHDDBCBJP BANHBMINMMP, DNELIPCHKLK PBDMBCJNKII)  [RVA 0x314D4CC]
// Nekki.SF2.GUI.Map.ContentCompleteOrLocked$$Init @ RVA 0x314D4CC

void Nekki_SF2_GUI_Map_ContentCompleteOrLocked__Init
               (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               DNELIPCHKLK_o *PBDMBCJNKII,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  int32_t iVar5;
  OOMHDDBCBJP_o **ppOVar6;
  DNELIPCHKLK_o *__this_00;
  DNELIPCHKLK_o **ppDVar7;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  
  if ((DAT_045667d9 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_16667/*"battleLocked"*/);
    FUN_01bab630(&StringLiteral_16666/*"battleCompleted"*/);
    FUN_01bab630(&StringLiteral_16665/*"battleComingSoon"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045667d9 = 1;
  }
  ppOVar6 = &(__this->fields).ACMHOIKOLBE;
  *ppOVar6 = BANHBMINMMP;
  thunk_FUN_01c20e04(ppOVar6,BANHBMINMMP);
  __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
  DNELIPCHKLK___ctor(__this_00,PBDMBCJNKII,(MethodInfo *)0x0);
  ppDVar7 = &(__this->fields).AABIECAIFGA;
  *ppDVar7 = __this_00;
  thunk_FUN_01c20e04(ppDVar7,__this_00);
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    iVar4 = (*(BANHBMINMMP->klass->vtable)._15_AAHLCCCONKI.methodPtr)
                      (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._15_AAHLCCCONKI.method);
    pNVar8 = (__this->fields)._lblLocked;
    if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      puVar1 = &StringLiteral_16666/*"battleCompleted"*/;
      if (iVar4 != 1) {
        puVar1 = &StringLiteral_16667/*"battleLocked"*/;
      }
      puVar2 = &StringLiteral_16665/*"battleComingSoon"*/;
      if ((BANHBMINMMP->fields).KIHDFNGKPGN != 0) {
        puVar2 = puVar1;
      }
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar8,(System_String_o *)*puVar2,(MethodInfo *)0x0);
      pNVar8 = (__this->fields)._lblTime;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar3) {
        pNVar8 = (__this->fields)._lblTime;
        if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0324d690;
        (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                  (pNVar8,StringLiteral_1/*""*/,(pNVar8->klass->vtable)._75_set_text.method);
      }
      __this_01 = (__this->fields)._btnPlayVideo;
      if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
        __this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        iVar5 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
        if (iVar5 == 0x12) {
          bVar3 = true;
        }
        else {
          iVar5 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
          bVar3 = iVar5 == 0x15;
        }
        if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_02,bVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0324d690:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PlayVideo()  [RVA 0x314D694]
// Nekki.SF2.GUI.Map.ContentCompleteOrLocked$$PlayVideo @ RVA 0x314D694

void Nekki_SF2_GUI_Map_ContentCompleteOrLocked__PlayVideo
               (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *__this,MethodInfo *method)

{
  long lVar1;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  KAKGABBLHGP_o *__this_00;
  System_Action_KHODJHFHCDE__o **ppSVar2;
  undefined8 *puVar3;
  MethodInfo *in_x4;
  OOMHDDBCBJP_o *pOVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  System_String_o *pSVar8;
  System_Action_KHODJHFHCDE__o *pSVar9;
  
  if ((DAT_045667da & 1) == 0) {
    FUN_01bab630(&System_Action<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_PackType___TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentCompleteOrLocked_<>c_DDLAAAOPMGM__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ContentCompleteOrLocked_<>c_TypeInfo);
    DAT_045667da = 1;
  }
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  lVar1 = *(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  pOVar4 = (__this->fields).ACMHOIKOLBE;
  if (pOVar4 != (OOMHDDBCBJP_o *)0x0) {
    pSVar8 = (pOVar4->fields).ICPECIILDFJ;
    plVar7 = (long *)**(undefined8 **)(lVar1 + 0xb8);
    if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = NGFEKJBMGEB__JCKBLNHNAHE(pSVar8,(MethodInfo *)0x0);
    LFADLKGPBHC = (Core_Configs_Models_PackType_array *)
                  FUN_01bab718(Core_Configs_Models_PackType___TypeInfo,1);
    if (LFADLKGPBHC != (Core_Configs_Models_PackType_array *)0x0) {
      if ((int)LFADLKGPBHC->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      LFADLKGPBHC->m_Items[0] = 2;
      __this_00 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
      KAKGABBLHGP___ctor(__this_00,false,pSVar8,LFADLKGPBHC,in_x4);
      if ((Nekki_SF2_GUI_Map_ContentCompleteOrLocked_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar9 = Nekki_SF2_GUI_Map_ContentCompleteOrLocked_<>c_TypeInfo->static_fields->__9__8_0;
      if (pSVar9 == (System_Action_KHODJHFHCDE__o *)0x0) {
        if ((Nekki_SF2_GUI_Map_ContentCompleteOrLocked_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar9 = (System_Action_KHODJHFHCDE__o *)
                 thunk_FUN_01bda818(System_Action<KHODJHFHCDE>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar2 = &Nekki_SF2_GUI_Map_ContentCompleteOrLocked_<>c_TypeInfo->static_fields->__9__8_0;
        *ppSVar2 = pSVar9;
        thunk_FUN_01c20e04(ppSVar2,pSVar9);
      }
      if (plVar7 != (long *)0x0) {
        lVar1 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(JNDFOKIMHPB_c **)(piVar6 + -2) == JNDFOKIMHPB_TypeInfo) {
              puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0324d8bc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar7,JNDFOKIMHPB_TypeInfo,0);
LAB_0324d8bc:
                    /* WARNING: Could not recover jumptable at 0x0324d8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar3)(plVar7,__this_00,pSVar9,puVar3[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Button GetBtnPlayVideo()  [RVA 0x314D8E4]
// Nekki.SF2.GUI.Map.ContentCompleteOrLocked$$GetBtnPlayVideo @ RVA 0x314D8E4

UnityEngine_UI_Button_o *
Nekki_SF2_GUI_Map_ContentCompleteOrLocked__GetBtnPlayVideo
          (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *__this,MethodInfo *method)

{
  return (__this->fields)._btnPlayVideo;
}


// ===== public void .ctor()  [RVA 0x314D8EC]
// Nekki.SF2.GUI.Map.ContentCompleteOrLocked$$.ctor @ RVA 0x314D8EC

void Nekki_SF2_GUI_Map_ContentCompleteOrLocked___ctor
               (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *__this,MethodInfo *method)

{
  DNELIPCHKLK_o *__this_00;
  DNELIPCHKLK_o **ppDVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667db & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    DAT_045667db = 1;
    method = extraout_x1;
  }
  __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo,method);
  DNELIPCHKLK___ctor(__this_00,(MethodInfo *)0x0);
  ppDVar1 = &(__this->fields).AABIECAIFGA;
  *ppDVar1 = __this_00;
  thunk_FUN_01c20e04(ppDVar1,__this_00);
  (__this->fields).GKKNEFKGMKO = -1;
  Nekki_SF2_GUI_Map_ContentBase___ctor((Nekki_SF2_GUI_Map_ContentBase_o *)__this,(MethodInfo *)0x0);
  return;
}

