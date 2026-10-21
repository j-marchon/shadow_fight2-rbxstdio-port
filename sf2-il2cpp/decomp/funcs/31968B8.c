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
    FUN_01bab630(&StringLiteral_6338);
    FUN_01bab630(&StringLiteral_6336);
    FUN_01bab630(&StringLiteral_6337);
    FUN_01bab630(&StringLiteral_6335);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_6334);
    DAT_04566a7a = 1;
  }
  pNVar1 = (__this->fields)._btnKick;
  if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
    Nekki_SF2_GUI_ProgressButton__Init(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._btnKick;
    if (pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
      (pNVar1->fields).super.super.ButtonId = 10;
      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar1,StringLiteral_14092,StringLiteral_6335,
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
                          ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar1,StringLiteral_14092,
                           StringLiteral_6337,(MethodInfo *)0x0);
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
                                    ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar1,StringLiteral_14092,
                                     StringLiteral_6338,(MethodInfo *)0x0);
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
                                               StringLiteral_14092,StringLiteral_6336,
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
                                                         StringLiteral_14092,StringLiteral_6334,
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

