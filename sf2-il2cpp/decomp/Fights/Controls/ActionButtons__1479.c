// TypeDefIndex 1479
// Namespace: Nekki.SF2.Core.Fights.Controls
// public class ActionButtons : MonoBehaviour
// Fields:
//   private Action<GGFFOJJGHGP> OANGGKCBAOJ; // 0x20
//   private Action<GGFFOJJGHGP> IKGMIOGGAAG; // 0x28
//   private Action<GGFFOJJGHGP> GAIOLDHGLHA; // 0x30
//   private LabelAlias _raidChargeCount; // 0x38
//   private ProgressButton _btnKick; // 0x40
//   private ProgressButton _btnPunch; // 0x48
//   private ProgressButton _btnMissile; // 0x50
//   private ProgressButton _btnMagic; // 0x58
//   private ProgressButton _btnRaidCharge; // 0x60

// ===== public void add_OnButtonRelease(Action<GGFFOJJGHGP> CJNHFNHJHPE)  [RVA 0x31963C8]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$add_OnButtonRelease @ RVA 0x31963C8

void Nekki_SF2_Core_Fights_Controls_ActionButtons__add_OnButtonRelease
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,
               System_Action_GGFFOJJGHGP__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GGFFOJJGHGP__o *pSVar5;
  System_Action_GGFFOJJGHGP__o **ppSVar6;
  System_Action_GGFFOJJGHGP__o *a;
  
  if ((DAT_04566a76 & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    DAT_04566a76 = 1;
  }
  ppSVar6 = &(__this->fields).GAIOLDHGLHA;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<GGFFOJJGHGP>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GGFFOJJGHGP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GGFFOJJGHGP__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private float DGIACOJNMJC(int DFIBGGDJPLM)  [RVA 0x3196478]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$DGIACOJNMJC @ RVA 0x3196478

float Nekki_SF2_Core_Fights_Controls_ActionButtons__DGIACOJNMJC
                (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,int32_t DFIBGGDJPLM,
                MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (1.7 <= 45.0 / (float)DFIBGGDJPLM) {
    fVar1 = 45.0 / (float)DFIBGGDJPLM;
  }
  return fVar1;
}


// ===== public void .ctor()  [RVA 0x31964A0]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$.ctor @ RVA 0x31964A0

void Nekki_SF2_Core_Fights_Controls_ActionButtons___ctor
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_GGFFOJJGHGP__o *pSVar2;
  
  if ((DAT_04566a77 & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_AACKEMPJLGA__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_BEPDJIOJPLN__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_EPCFMPGEDGE__);
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo);
    DAT_04566a77 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->static_fields->__9__35_0;
  if (pSVar2 == (System_Action_GGFFOJJGHGP__o *)0x0) {
    if ((Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_GGFFOJJGHGP__o *)thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->static_fields->__9__35_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
    ppSVar1 = &(__this->fields).OANGGKCBAOJ;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    if ((Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->static_fields->__9__35_1;
    if (pSVar2 == (System_Action_GGFFOJJGHGP__o *)0x0) {
      if ((Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Action_GGFFOJJGHGP__o *)
               thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->static_fields->__9__35_1
      ;
      *ppSVar1 = pSVar2;
      thunk_FUN_01c20e04(ppSVar1,pSVar2);
    }
    ppSVar1 = &(__this->fields).IKGMIOGGAAG;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    if ((Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->static_fields->__9__35_2;
    if (pSVar2 == (System_Action_GGFFOJJGHGP__o *)0x0) {
      if ((Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Action_GGFFOJJGHGP__o *)
               thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->static_fields->__9__35_2
      ;
      *ppSVar1 = pSVar2;
      thunk_FUN_01c20e04(ppSVar1,pSVar2);
    }
    ppSVar1 = &(__this->fields).GAIOLDHGLHA;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ProgressButton GetButtonKick()  [RVA 0x31966C0]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$GetButtonKick @ RVA 0x31966C0

Nekki_SF2_GUI_ProgressButton_o *
Nekki_SF2_Core_Fights_Controls_ActionButtons__GetButtonKick
          (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,MethodInfo *method)

{
  return (__this->fields)._btnKick;
}


// ===== public void remove_OnButtonPress(Action<GGFFOJJGHGP> CJNHFNHJHPE)  [RVA 0x31966C8]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$remove_OnButtonPress @ RVA 0x31966C8

void Nekki_SF2_Core_Fights_Controls_ActionButtons__remove_OnButtonPress
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,
               System_Action_GGFFOJJGHGP__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GGFFOJJGHGP__o *pSVar5;
  System_Action_GGFFOJJGHGP__o **ppSVar6;
  System_Action_GGFFOJJGHGP__o *source;
  
  if ((DAT_04566a78 & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    DAT_04566a78 = 1;
  }
  ppSVar6 = &(__this->fields).IKGMIOGGAAG;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<GGFFOJJGHGP>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GGFFOJJGHGP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GGFFOJJGHGP__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public List<ProgressButton> GetButtons()  [RVA 0x3196778]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$GetButtons @ RVA 0x3196778

System_Collections_Generic_List_ProgressButton__o *
Nekki_SF2_Core_Fights_Controls_ActionButtons__GetButtons
          (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_ProgressButton__o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ProgressButton_o *pNVar3;
  Nekki_SF2_GUI_ProgressButton_array *pNVar4;
  
  if ((DAT_04566a79 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ProgressButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ProgressButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ProgressButton>_TypeInfo);
    DAT_04566a79 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ProgressButton__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ProgressButton>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ProgressButton>__ctor__);
  lVar2 = Method_System_Collections_Generic_List<ProgressButton>_Add__;
  if (__this_00 != (System_Collections_Generic_List_ProgressButton__o *)0x0) {
    pNVar3 = (__this->fields)._btnKick;
    pNVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pNVar4 != (Nekki_SF2_GUI_ProgressButton_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pNVar4->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pNVar4->m_Items[(int)uVar1] = pNVar3;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pNVar3,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      lVar2 = Method_System_Collections_Generic_List<ProgressButton>_Add__;
      pNVar3 = (__this->fields)._btnPunch;
      pNVar4 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pNVar4 != (Nekki_SF2_GUI_ProgressButton_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pNVar4->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pNVar4->m_Items[(int)uVar1] = pNVar3;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pNVar3,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x31968B8]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$Init @ RVA 0x31968B8

void Nekki_SF2_Core_Fights_Controls_ActionButtons__Init
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *pNVar1;
  System_Action_object__o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Vector3_o UVar7;
  
  if ((DAT_04566a7a & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_ActionButtons_ButtonClick__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_ActionButtons_ButtonPress__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_ActionButtons_ButtonRelease__);
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&StringLiteral_6338/*"FightButtons.btn_throw_action"*/);
    FUN_01bab630(&StringLiteral_6336/*"FightButtons.btn_magic_action"*/);
    FUN_01bab630(&StringLiteral_6337/*"FightButtons.btn_punch_action"*/);
    FUN_01bab630(&StringLiteral_6335/*"FightButtons.btn_kick_action"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_6334/*"FightButtons.btn_charge_action"*/);
    DAT_04566a7a = 1;
  }
  pNVar1 = (__this->fields)._btnKick;
  if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
    Nekki_SF2_GUI_ProgressButton__Init(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._btnKick;
    if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
      (pNVar1->fields).super.super.ButtonId = 10;
      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_6335/*"FightButtons.btn_kick_action"*/,
                 (MethodInfo *)0x0);
      pNVar1 = (__this->fields)._btnKick;
      pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
        SFButton__AddEventListener((SFButton_o *)pNVar1,2,pSVar2,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._btnKick;
        pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
          SFButton__AddEventListener((SFButton_o *)pNVar1,0,pSVar2,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._btnKick;
          pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
            SFButton__AddEventListener((SFButton_o *)pNVar1,1,pSVar2,(MethodInfo *)0x0);
            pNVar1 = (__this->fields)._btnPunch;
            if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
              Nekki_SF2_GUI_ProgressButton__Init(pNVar1,(MethodInfo *)0x0);
              pNVar1 = (__this->fields)._btnPunch;
              if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                (pNVar1->fields).super.super.ButtonId = 9;
                Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                          ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,
                           StringLiteral_6337/*"FightButtons.btn_punch_action"*/,(MethodInfo *)0x0);
                pNVar1 = (__this->fields)._btnPunch;
                pSVar2 = (System_Action_object__o *)
                         thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                System_Action<object>___ctor();
                if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                  SFButton__AddEventListener((SFButton_o *)pNVar1,2,pSVar2,(MethodInfo *)0x0);
                  pNVar1 = (__this->fields)._btnPunch;
                  pSVar2 = (System_Action_object__o *)
                           thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                  System_Action<object>___ctor();
                  if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                    SFButton__AddEventListener((SFButton_o *)pNVar1,0,pSVar2,(MethodInfo *)0x0);
                    pNVar1 = (__this->fields)._btnPunch;
                    pSVar2 = (System_Action_object__o *)
                             thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    System_Action<object>___ctor();
                    if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                      SFButton__AddEventListener((SFButton_o *)pNVar1,1,pSVar2,(MethodInfo *)0x0);
                      pNVar1 = (__this->fields)._btnMissile;
                      if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                        Nekki_SF2_GUI_ProgressButton__Init(pNVar1,(MethodInfo *)0x0);
                        pNVar1 = (__this->fields)._btnMissile;
                        if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                          (pNVar1->fields).super.super.ButtonId = 0xb;
                          Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                    ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,
                                     StringLiteral_6338/*"FightButtons.btn_throw_action"*/,(MethodInfo *)0x0);
                          pNVar1 = (__this->fields)._btnMissile;
                          pSVar2 = (System_Action_object__o *)
                                   thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                          System_Action<object>___ctor();
                          if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                            SFButton__AddEventListener
                                      ((SFButton_o *)pNVar1,2,pSVar2,(MethodInfo *)0x0);
                            pNVar1 = (__this->fields)._btnMissile;
                            pSVar2 = (System_Action_object__o *)
                                     thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                            System_Action<object>___ctor();
                            if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                              SFButton__AddEventListener
                                        ((SFButton_o *)pNVar1,0,pSVar2,(MethodInfo *)0x0);
                              pNVar1 = (__this->fields)._btnMissile;
                              pSVar2 = (System_Action_object__o *)
                                       thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                              System_Action<object>___ctor();
                              if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                                SFButton__AddEventListener
                                          ((SFButton_o *)pNVar1,1,pSVar2,(MethodInfo *)0x0);
                                pNVar1 = (__this->fields)._btnMagic;
                                if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                                  Nekki_SF2_GUI_ProgressButton__Init(pNVar1,(MethodInfo *)0x0);
                                  pNVar1 = (__this->fields)._btnMagic;
                                  if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                                    (pNVar1->fields).super.super.ButtonId = 0xc;
                                    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                              ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar1,
                                               StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_6336/*"FightButtons.btn_magic_action"*/,
                                               (MethodInfo *)0x0);
                                    pNVar1 = (__this->fields)._btnMagic;
                                    pSVar2 = (System_Action_object__o *)
                                             thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                                    System_Action<object>___ctor();
                                    if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                                      SFButton__AddEventListener
                                                ((SFButton_o *)pNVar1,2,pSVar2,(MethodInfo *)0x0);
                                      pNVar1 = (__this->fields)._btnMagic;
                                      pSVar2 = (System_Action_object__o *)
                                               thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                                      System_Action<object>___ctor();
                                      if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                                        SFButton__AddEventListener
                                                  ((SFButton_o *)pNVar1,0,pSVar2,(MethodInfo *)0x0);
                                        pNVar1 = (__this->fields)._btnMagic;
                                        pSVar2 = (System_Action_object__o *)
                                                 thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                                        System_Action<object>___ctor();
                                        if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                                          SFButton__AddEventListener
                                                    ((SFButton_o *)pNVar1,1,pSVar2,(MethodInfo *)0x0
                                                    );
                                          pNVar1 = (__this->fields)._btnRaidCharge;
                                          if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                                            Nekki_SF2_GUI_ProgressButton__Init
                                                      (pNVar1,(MethodInfo *)0x0);
                                            pNVar1 = (__this->fields)._btnRaidCharge;
                                            if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                                              (pNVar1->fields).super.super.ButtonId = 0xd;
                                              Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                                        ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar1,
                                                         StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_6334/*"FightButtons.btn_charge_action"*/,
                                                         (MethodInfo *)0x0);
                                              pNVar1 = (__this->fields)._btnRaidCharge;
                                              pSVar2 = (System_Action_object__o *)
                                                       thunk_FUN_01bda818(
                                                  System_Action<object>_TypeInfo);
                                              System_Action<object>___ctor();
                                              if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                                                SFButton__AddEventListener
                                                          ((SFButton_o *)pNVar1,2,pSVar2,
                                                           (MethodInfo *)0x0);
                                                pNVar1 = (__this->fields)._btnRaidCharge;
                                                pSVar2 = (System_Action_object__o *)
                                                         thunk_FUN_01bda818(
                                                  System_Action<object>_TypeInfo);
                                                System_Action<object>___ctor();
                                                if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0)
                                                {
                                                  SFButton__AddEventListener
                                                            ((SFButton_o *)pNVar1,0,pSVar2,
                                                             (MethodInfo *)0x0);
                                                  pNVar1 = (__this->fields)._btnRaidCharge;
                                                  pSVar2 = (System_Action_object__o *)
                                                           thunk_FUN_01bda818(
                                                  System_Action<object>_TypeInfo);
                                                  System_Action<object>___ctor();
                                                  if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)
                                                                0x0) {
                                                    SFButton__AddEventListener
                                                              ((SFButton_o *)pNVar1,1,pSVar2,
                                                               (MethodInfo *)0x0);
                                                    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                                                    pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>
                                                                       (
                                                  Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__
                                                  );
                                                  if (pIVar3 != (Il2CppObject *)0x0) {
                                                    if (*(char *)((long)&pIVar3[2].klass + 1) ==
                                                        '\0') {
                                                      pNVar1 = (__this->fields)._btnMissile;
                                                      if (pNVar1 == (Nekki_SF2_GUI_ProgressButton_o
                                                                     *)0x0) goto LAB_03296f48;
                                                      pUVar4 = UnityEngine_Component__get_transform
                                                                         ((UnityEngine_Component_o *
                                                                          )pNVar1,(MethodInfo *)0x0)
                                                      ;
                                                      pNVar1 = (__this->fields)._btnKick;
                                                      if (((pNVar1 == (
                                                  Nekki_SF2_GUI_ProgressButton_o *)0x0) ||
                                                  (pUVar5 = UnityEngine_Component__get_transform
                                                                      ((UnityEngine_Component_o *)
                                                                       pNVar1,(MethodInfo *)0x0),
                                                  pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
                                                  (UVar7 = UnityEngine_Transform__get_position
                                                                     (pUVar5,(MethodInfo *)0x0),
                                                  pUVar4 == (UnityEngine_Transform_o *)0x0))
                                                  goto LAB_03296f48;
                                                  UnityEngine_Transform__set_position
                                                            (pUVar4,UVar7,(MethodInfo *)0x0);
                                                  pNVar1 = (__this->fields)._btnMagic;
                                                  if (pNVar1 == (Nekki_SF2_GUI_ProgressButton_o *)
                                                                0x0) goto LAB_03296f48;
                                                  pUVar4 = UnityEngine_Component__get_transform
                                                                     ((UnityEngine_Component_o *)
                                                                      pNVar1,(MethodInfo *)0x0);
                                                  pNVar1 = (__this->fields)._btnPunch;
                                                  if (((pNVar1 == (Nekki_SF2_GUI_ProgressButton_o *)
                                                                  0x0) ||
                                                      (pUVar5 = UnityEngine_Component__get_transform
                                                                          ((UnityEngine_Component_o
                                                                            *)pNVar1,
                                                                           (MethodInfo *)0x0),
                                                      pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
                                                     (UVar7 = UnityEngine_Transform__get_position
                                                                        (pUVar5,(MethodInfo *)0x0),
                                                     pUVar4 == (UnityEngine_Transform_o *)0x0))
                                                  goto LAB_03296f48;
                                                  UnityEngine_Transform__set_position
                                                            (pUVar4,UVar7,(MethodInfo *)0x0);
                                                  pNVar1 = (__this->fields)._btnKick;
                                                  if ((pNVar1 == (Nekki_SF2_GUI_ProgressButton_o *)
                                                                 0x0) ||
                                                     (pUVar6 = UnityEngine_Component__get_gameObject
                                                                         ((UnityEngine_Component_o *
                                                                          )pNVar1,(MethodInfo *)0x0)
                                                     , pUVar6 == (UnityEngine_GameObject_o *)0x0))
                                                  goto LAB_03296f48;
                                                  UnityEngine_GameObject__SetActive
                                                            (pUVar6,false,(MethodInfo *)0x0);
                                                  pNVar1 = (__this->fields)._btnPunch;
                                                  if ((pNVar1 == (Nekki_SF2_GUI_ProgressButton_o *)
                                                                 0x0) ||
                                                     (pUVar6 = UnityEngine_Component__get_gameObject
                                                                         ((UnityEngine_Component_o *
                                                                          )pNVar1,(MethodInfo *)0x0)
                                                     , pUVar6 == (UnityEngine_GameObject_o *)0x0))
                                                  goto LAB_03296f48;
                                                  UnityEngine_GameObject__SetActive
                                                            (pUVar6,false,(MethodInfo *)0x0);
                                                  pNVar1 = (__this->fields)._btnRaidCharge;
                                                  if ((pNVar1 == (Nekki_SF2_GUI_ProgressButton_o *)
                                                                 0x0) ||
                                                     (pUVar6 = UnityEngine_Component__get_gameObject
                                                                         ((UnityEngine_Component_o *
                                                                          )pNVar1,(MethodInfo *)0x0)
                                                     , pUVar6 == (UnityEngine_GameObject_o *)0x0))
                                                  goto LAB_03296f48;
                                                  UnityEngine_GameObject__SetActive
                                                            (pUVar6,false,(MethodInfo *)0x0);
                                                  }
                                                  pNVar1 = (__this->fields)._btnMagic;
                                                  if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)
                                                                0x0) {
                                                    Nekki_SF2_GUI_ProgressButton__SetPercentage
                                                              (pNVar1,100.0,1.0,(MethodInfo *)0x0);
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
LAB_03296f48:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ResetRaidChargeButton()  [RVA 0x3196F4C]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$ResetRaidChargeButton @ RVA 0x3196F4C

void Nekki_SF2_Core_Fights_Controls_ActionButtons__ResetRaidChargeButton
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *__this_00;
  
  __this_00 = (__this->fields)._btnRaidCharge;
  if (__this_00 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
    Nekki_SF2_GUI_ProgressButton__ResetPercentage(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowRanged(bool CJNHFNHJHPE)  [RVA 0x3196F68]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$ShowRanged @ RVA 0x3196F68

void Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowRanged
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._btnMissile;
  if ((__this_00 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnButtonPress(Action<GGFFOJJGHGP> CJNHFNHJHPE)  [RVA 0x3196F98]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$add_OnButtonPress @ RVA 0x3196F98

void Nekki_SF2_Core_Fights_Controls_ActionButtons__add_OnButtonPress
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,
               System_Action_GGFFOJJGHGP__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GGFFOJJGHGP__o *pSVar5;
  System_Action_GGFFOJJGHGP__o **ppSVar6;
  System_Action_GGFFOJJGHGP__o *a;
  
  if ((DAT_04566a7b & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    DAT_04566a7b = 1;
  }
  ppSVar6 = &(__this->fields).IKGMIOGGAAG;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<GGFFOJJGHGP>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GGFFOJJGHGP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GGFFOJJGHGP__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public ProgressButton GetButtonRaidCharge()  [RVA 0x3197048]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$GetButtonRaidCharge @ RVA 0x3197048

Nekki_SF2_GUI_ProgressButton_o *
Nekki_SF2_Core_Fights_Controls_ActionButtons__GetButtonRaidCharge
          (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,MethodInfo *method)

{
  return (__this->fields)._btnRaidCharge;
}


// ===== public void SetButtonRaidChargePos(float KEFILECBPMF, float BHOOMCEABGH)  [RVA 0x3197050]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$SetButtonRaidChargePos @ RVA 0x3197050

void Nekki_SF2_Core_Fights_Controls_ActionButtons__SetButtonRaidChargePos
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,float KEFILECBPMF,
               float BHOOMCEABGH,MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o UVar3;
  
  pNVar1 = (__this->fields)._btnRaidCharge;
  if ((pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar3.fields.y = BHOOMCEABGH;
    UVar3.fields.x = KEFILECBPMF;
    UVar3.fields.z = 0.0;
    UnityEngine_Transform__set_position(pUVar2,UVar3,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._raidChargeCount;
    if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._btnRaidCharge;
      if (((pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) &&
          (__this_01 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
          __this_01 != (UnityEngine_Transform_o *)0x0)) &&
         (UVar3 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__set_position(pUVar2,UVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ButtonPress(object IMMNELPBGIF)  [RVA 0x31970DC]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$ButtonPress @ RVA 0x31970DC

void Nekki_SF2_Core_Fights_Controls_ActionButtons__ButtonPress
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t OOJKNECICBP;
  int32_t *piVar1;
  OIIEGNHALFL_o *__this_00;
  System_Action_GGFFOJJGHGP__o *pSVar2;
  
  if ((DAT_04566a7c & 1) == 0) {
    FUN_01bab630(&DMMJFKCBHEK_TypeInfo);
    FUN_01bab630(&OIIEGNHALFL_TypeInfo);
    DAT_04566a7c = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (DMMJFKCBHEK_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int32_t *)thunk_FUN_01bda96c(IMMNELPBGIF);
    OOJKNECICBP = *piVar1;
    pSVar2 = (__this->fields).IKGMIOGGAAG;
    __this_00 = (OIIEGNHALFL_o *)thunk_FUN_01bda818(OIIEGNHALFL_TypeInfo);
    OIIEGNHALFL___ctor(__this_00,OOJKNECICBP,(MethodInfo *)0x0);
    if (pSVar2 != (System_Action_GGFFOJJGHGP__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03297190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,__this_00,
                 (pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetBulletsCountToActBtn(DMMJFKCBHEK CEJGCIAOOKI, int PIOBNKACDJE)  [RVA 0x31971A0]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$SetBulletsCountToActBtn @ RVA 0x31971A0

void Nekki_SF2_Core_Fights_Controls_ActionButtons__SetBulletsCountToActBtn
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,int32_t CEJGCIAOOKI,
               int32_t PIOBNKACDJE,MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  int32_t local_14;
  
  if (CEJGCIAOOKI == 0xd) {
    pNVar2 = (__this->fields)._raidChargeCount;
    local_14 = PIOBNKACDJE;
    pSVar1 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
    if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
              (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
  }
  return;
}


// ===== public void ShowPunch(bool CJNHFNHJHPE)  [RVA 0x31971F0]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$ShowPunch @ RVA 0x31971F0

void Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowPunch
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._btnPunch;
  if ((__this_00 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnButtonClick(Action<GGFFOJJGHGP> CJNHFNHJHPE)  [RVA 0x3197220]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$remove_OnButtonClick @ RVA 0x3197220

void Nekki_SF2_Core_Fights_Controls_ActionButtons__remove_OnButtonClick
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,
               System_Action_GGFFOJJGHGP__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GGFFOJJGHGP__o *pSVar5;
  System_Action_GGFFOJJGHGP__o **ppSVar6;
  System_Action_GGFFOJJGHGP__o *source;
  
  if ((DAT_04566a7d & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    DAT_04566a7d = 1;
  }
  ppSVar6 = &(__this->fields).OANGGKCBAOJ;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<GGFFOJJGHGP>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GGFFOJJGHGP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GGFFOJJGHGP__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void ShowMagic(bool CJNHFNHJHPE)  [RVA 0x31972D0]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$ShowMagic @ RVA 0x31972D0

void Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowMagic
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._btnMagic;
  if ((__this_00 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnButtonClick(Action<GGFFOJJGHGP> CJNHFNHJHPE)  [RVA 0x3197300]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$add_OnButtonClick @ RVA 0x3197300

void Nekki_SF2_Core_Fights_Controls_ActionButtons__add_OnButtonClick
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,
               System_Action_GGFFOJJGHGP__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GGFFOJJGHGP__o *pSVar5;
  System_Action_GGFFOJJGHGP__o **ppSVar6;
  System_Action_GGFFOJJGHGP__o *a;
  
  if ((DAT_04566a7e & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    DAT_04566a7e = 1;
  }
  ppSVar6 = &(__this->fields).OANGGKCBAOJ;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<GGFFOJJGHGP>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GGFFOJJGHGP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GGFFOJJGHGP__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void ButtonRelease(object IMMNELPBGIF)  [RVA 0x31973B0]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$ButtonRelease @ RVA 0x31973B0

void Nekki_SF2_Core_Fights_Controls_ActionButtons__ButtonRelease
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t OOJKNECICBP;
  int32_t *piVar1;
  OIIEGNHALFL_o *__this_00;
  System_Action_GGFFOJJGHGP__o *pSVar2;
  
  if ((DAT_04566a7f & 1) == 0) {
    FUN_01bab630(&DMMJFKCBHEK_TypeInfo);
    FUN_01bab630(&OIIEGNHALFL_TypeInfo);
    DAT_04566a7f = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (DMMJFKCBHEK_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int32_t *)thunk_FUN_01bda96c(IMMNELPBGIF);
    OOJKNECICBP = *piVar1;
    pSVar2 = (__this->fields).GAIOLDHGLHA;
    __this_00 = (OIIEGNHALFL_o *)thunk_FUN_01bda818(OIIEGNHALFL_TypeInfo);
    OIIEGNHALFL___ctor(__this_00,OOJKNECICBP,(MethodInfo *)0x0);
    if (pSVar2 != (System_Action_GGFFOJJGHGP__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03297464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,__this_00,
                 (pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowKick(bool CJNHFNHJHPE)  [RVA 0x3197474]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$ShowKick @ RVA 0x3197474

void Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowKick
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._btnKick;
  if ((__this_00 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowRaidCharge(bool CJNHFNHJHPE)  [RVA 0x31974A4]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$ShowRaidCharge @ RVA 0x31974A4

void Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowRaidCharge
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  
  __this_00 = (__this->fields)._btnRaidCharge;
  if ((__this_00 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._raidChargeCount;
    if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ProgressButton GetButtonPunch()  [RVA 0x3197500]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$GetButtonPunch @ RVA 0x3197500

Nekki_SF2_GUI_ProgressButton_o *
Nekki_SF2_Core_Fights_Controls_ActionButtons__GetButtonPunch
          (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,MethodInfo *method)

{
  return (__this->fields)._btnPunch;
}


// ===== public void remove_OnButtonRelease(Action<GGFFOJJGHGP> CJNHFNHJHPE)  [RVA 0x3197508]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$remove_OnButtonRelease @ RVA 0x3197508

void Nekki_SF2_Core_Fights_Controls_ActionButtons__remove_OnButtonRelease
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,
               System_Action_GGFFOJJGHGP__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GGFFOJJGHGP__o *pSVar5;
  System_Action_GGFFOJJGHGP__o **ppSVar6;
  System_Action_GGFFOJJGHGP__o *source;
  
  if ((DAT_04566a80 & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    DAT_04566a80 = 1;
  }
  ppSVar6 = &(__this->fields).GAIOLDHGLHA;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<GGFFOJJGHGP>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GGFFOJJGHGP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GGFFOJJGHGP__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public virtual void SetVisible(bool MNODCIGLHEL)  [RVA 0x31975B8]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$SetVisible @ RVA 0x31975B8

void Nekki_SF2_Core_Fights_Controls_ActionButtons__SetVisible
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,bool MNODCIGLHEL,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,MNODCIGLHEL,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ResetMagicButton()  [RVA 0x31975E0]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$ResetMagicButton @ RVA 0x31975E0

void Nekki_SF2_Core_Fights_Controls_ActionButtons__ResetMagicButton
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *__this_00;
  
  __this_00 = (__this->fields)._btnMagic;
  if (__this_00 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
    Nekki_SF2_GUI_ProgressButton__ResetPercentage(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ButtonClick(object IMMNELPBGIF)  [RVA 0x31975FC]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$ButtonClick @ RVA 0x31975FC

void Nekki_SF2_Core_Fights_Controls_ActionButtons__ButtonClick
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t OOJKNECICBP;
  int32_t *piVar1;
  OIIEGNHALFL_o *__this_00;
  System_Action_GGFFOJJGHGP__o *pSVar2;
  
  if ((DAT_04566a81 & 1) == 0) {
    FUN_01bab630(&DMMJFKCBHEK_TypeInfo);
    FUN_01bab630(&OIIEGNHALFL_TypeInfo);
    DAT_04566a81 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (DMMJFKCBHEK_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int32_t *)thunk_FUN_01bda96c(IMMNELPBGIF);
    OOJKNECICBP = *piVar1;
    pSVar2 = (__this->fields).OANGGKCBAOJ;
    __this_00 = (OIIEGNHALFL_o *)thunk_FUN_01bda818(OIIEGNHALFL_TypeInfo);
    OIIEGNHALFL___ctor(__this_00,OOJKNECICBP,(MethodInfo *)0x0);
    if (pSVar2 != (System_Action_GGFFOJJGHGP__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032976b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,__this_00,
                 (pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetNeededPercentageToActBtn(DMMJFKCBHEK CEJGCIAOOKI, float GCFNBDDDGIF, float PNEIGGOFIOA = 0.5)  [RVA 0x31976C0]
// Nekki.SF2.Core.Fights.Controls.ActionButtons$$SetNeededPercentageToActBtn @ RVA 0x31976C0

void Nekki_SF2_Core_Fights_Controls_ActionButtons__SetNeededPercentageToActBtn
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,int32_t CEJGCIAOOKI,
               float GCFNBDDDGIF,float PNEIGGOFIOA,MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *__this_00;
  
  switch(CEJGCIAOOKI) {
  case 9:
    __this_00 = (__this->fields)._btnPunch;
    break;
  case 10:
  case 0xe:
    __this_00 = (__this->fields)._btnKick;
    break;
  case 0xb:
    __this_00 = (__this->fields)._btnMissile;
    break;
  case 0xc:
    __this_00 = (__this->fields)._btnMagic;
    break;
  case 0xd:
    __this_00 = (__this->fields)._btnRaidCharge;
    break;
  default:
    return;
  }
  if (__this_00 == (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  Nekki_SF2_GUI_ProgressButton__SetPercentage(__this_00,GCFNBDDDGIF,PNEIGGOFIOA,(MethodInfo *)0x0);
  return;
}

