// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$IMGIKOELJFM @ RVA 0x356A6AC

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__IMGIKOELJFM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  int32_t iVar3;
  FEKEAPCCOOB_o *pFVar4;
  System_Collections_Generic_List_ResolutionButton__o *pSVar5;
  UnityEngine_UI_Button_o *pUVar6;
  TabView_o *pTVar7;
  Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *pNVar8;
  Il2CppObject *pIVar9;
  long lVar10;
  VirtualInvokeData *pVVar11;
  System_String_o *EHNFGMGKCHO;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  MethodInfo *pMVar12;
  long lVar13;
  Il2CppClass *pIVar14;
  ulong uVar15;
  int32_t *piVar16;
  FEKEAPCCOOB_o **ppFVar17;
  int DPJIDNBJIBG;
  undefined8 uVar18;
  
  if ((DAT_04568c24 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&FEKEAPCCOOB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionButton>_get_Item__);
    FUN_01bab630(&StringLiteral_21395);
    FUN_01bab630(&StringLiteral_18775);
    FUN_01bab630(&StringLiteral_21393);
    FUN_01bab630(&StringLiteral_21396);
    FUN_01bab630(&StringLiteral_21392);
    FUN_01bab630(&StringLiteral_21394);
    DAT_04568c24 = 1;
    method = extraout_x1;
  }
  pFVar4 = (FEKEAPCCOOB_o *)thunk_FUN_01bda818(FEKEAPCCOOB_TypeInfo,method);
  FEKEAPCCOOB___ctor(pFVar4,(MethodInfo *)0x0);
  ppFVar17 = &(__this->fields).HIOOMAJPEJP;
  *ppFVar17 = pFVar4;
  thunk_FUN_01c20e04(ppFVar17,pFVar4);
  if (*ppFVar17 != (FEKEAPCCOOB_o *)0x0) {
    FEKEAPCCOOB__GIENGNEGHPJ(*ppFVar17,(JEFOMACMAAD_o *)__this,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._tabButtons;
    if (pSVar5 != (System_Collections_Generic_List_ResolutionButton__o *)0x0) {
      pFVar4 = (__this->fields).HIOOMAJPEJP;
      pUVar6 = (UnityEngine_UI_Button_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,0,
                          Method_System_Collections_Generic_List<ResolutionButton>_get_Item__);
      pMVar12 = StringLiteral_21392;
      Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__JDGPBNKJFBK
                ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)pUVar6,
                 (Nekki_SF2_GUI_ResolutionButton_o *)pUVar6,(System_String_o *)StringLiteral_21392,
                 in_x3);
      pTVar7 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__NBMBGKIMBBE(__this,1,pMVar12);
      if (pFVar4 != (FEKEAPCCOOB_o *)0x0) {
        pMVar12 = (MethodInfo *)0x0;
        FEKEAPCCOOB__GDCPIEANEJF(pFVar4,pUVar6,pTVar7,(MethodInfo *)0x0);
        pSVar5 = (__this->fields)._tabButtons;
        if (pSVar5 != (System_Collections_Generic_List_ResolutionButton__o *)0x0) {
          pFVar4 = (__this->fields).HIOOMAJPEJP;
          pUVar6 = (UnityEngine_UI_Button_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar5,1,
                              Method_System_Collections_Generic_List<ResolutionButton>_get_Item__);
          Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__JDGPBNKJFBK
                    ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)pUVar6,
                     (Nekki_SF2_GUI_ResolutionButton_o *)pUVar6,StringLiteral_21393,pMVar12);
          pNVar8 = (__this->fields)._generalPlayerInfoView;
          if (pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *)0x0) {
            (*(pNVar8->klass->vtable)._20_Init.methodPtr)
                      (pNVar8,(__this->fields).MLAAJICBOAD,(pNVar8->klass->vtable)._20_Init.method);
            if (pFVar4 != (FEKEAPCCOOB_o *)0x0) {
              pMVar12 = (MethodInfo *)0x0;
              FEKEAPCCOOB__GDCPIEANEJF
                        (pFVar4,pUVar6,(TabView_o *)(__this->fields)._generalPlayerInfoView,
                         (MethodInfo *)0x0);
              pSVar5 = (__this->fields)._tabButtons;
              if (pSVar5 != (System_Collections_Generic_List_ResolutionButton__o *)0x0) {
                pFVar4 = (__this->fields).HIOOMAJPEJP;
                pUVar6 = (UnityEngine_UI_Button_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar5,2,
                                    Method_System_Collections_Generic_List<ResolutionButton>_get_Item__
                                   );
                Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__JDGPBNKJFBK
                          ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)pUVar6,
                           (Nekki_SF2_GUI_ResolutionButton_o *)pUVar6,StringLiteral_21394,pMVar12);
                if (pFVar4 != (FEKEAPCCOOB_o *)0x0) {
                  pMVar12 = (MethodInfo *)0x0;
                  FEKEAPCCOOB__GDCPIEANEJF(pFVar4,pUVar6,(TabView_o *)0x0,(MethodInfo *)0x0);
                  pSVar5 = (__this->fields)._tabButtons;
                  if (pSVar5 != (System_Collections_Generic_List_ResolutionButton__o *)0x0) {
                    pFVar4 = (__this->fields).HIOOMAJPEJP;
                    pUVar6 = (UnityEngine_UI_Button_o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar5,3,
                                        Method_System_Collections_Generic_List<ResolutionButton>_get_Item__
                                       );
                    method_00 = StringLiteral_21395;
                    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__JDGPBNKJFBK
                              ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)pUVar6,
                               (Nekki_SF2_GUI_ResolutionButton_o *)pUVar6,
                               (System_String_o *)StringLiteral_21395,pMVar12);
                    pTVar7 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__NBMBGKIMBBE
                                       (__this,3,method_00);
                    if (pFVar4 != (FEKEAPCCOOB_o *)0x0) {
                      pMVar12 = (MethodInfo *)0x0;
                      FEKEAPCCOOB__GDCPIEANEJF(pFVar4,pUVar6,pTVar7,(MethodInfo *)0x0);
                      pSVar5 = (__this->fields)._tabButtons;
                      if (pSVar5 != (System_Collections_Generic_List_ResolutionButton__o *)0x0) {
                        pFVar4 = (__this->fields).HIOOMAJPEJP;
                        pUVar6 = (UnityEngine_UI_Button_o *)
                                 System_Collections_Generic_List<object>__get_Item
                                           ((System_Collections_Generic_List_object__o *)pSVar5,4,
                                            Method_System_Collections_Generic_List<ResolutionButton>_get_Item__
                                           );
                        Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__JDGPBNKJFBK
                                  ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)pUVar6,
                                   (Nekki_SF2_GUI_ResolutionButton_o *)pUVar6,StringLiteral_21396,
                                   pMVar12);
                        if (pFVar4 != (FEKEAPCCOOB_o *)0x0) {
                          FEKEAPCCOOB__GDCPIEANEJF(pFVar4,pUVar6,(TabView_o *)0x0,(MethodInfo *)0x0)
                          ;
                          if (*ppFVar17 != (FEKEAPCCOOB_o *)0x0) {
                            iVar3 = FEKEAPCCOOB__KPOBFGCNFAG(*ppFVar17,(MethodInfo *)0x0);
                            if (0 < iVar3) {
                              DPJIDNBJIBG = 0;
                              do {
                                pFVar4 = *ppFVar17;
                                pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                                   (
                                                  Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__
                                                  );
                                lVar10 = Method_System_Array_Empty<string>__;
                                lVar13 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
                                if (lVar13 == 0) {
                                  FUN_01b8167c(Method_System_Array_Empty<string>__);
                                  lVar13 = *(long *)(lVar10 + 0x38);
                                }
                                lVar13 = *(long *)(lVar13 + 0x10);
                                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                                  lVar13 = FUN_01b81620();
                                }
                                if (*(int *)(lVar13 + 0xe0) == 0) {
                                  thunk_FUN_01ba7564();
                                }
                                lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                                  lVar10 = FUN_01b81620();
                                }
                                uVar2 = StringLiteral_18775;
                                if (pIVar9 == (Il2CppObject *)0x0) goto LAB_0366aac4;
                                pIVar14 = pIVar9->klass;
                                uVar18 = **(undefined8 **)(lVar10 + 0xb8);
                                uVar1._0_1_ = (pIVar14->_2).rank;
                                uVar1._1_1_ = (pIVar14->_2).minimumAlignment;
                                uVar15 = (ulong)uVar1;
                                if (uVar15 != 0) {
                                  piVar16 = &((pIVar14->_1).interfaceOffsets)->offset;
                                  do {
                                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->
                                        interfaceType == (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                                      pVVar11 = pIVar14->vtable + (*piVar16 + 0xc);
                                      goto LAB_0366aa48;
                                    }
                                    uVar15 = uVar15 - 1;
                                    piVar16 = piVar16 + 4;
                                  } while (uVar15 != 0);
                                }
                                pVVar11 = (VirtualInvokeData *)
                                          FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0366aa48:
                                EHNFGMGKCHO = (System_String_o *)
                                              (*pVVar11->methodPtr)
                                                        (pIVar9,uVar2,uVar18,pVVar11->method);
                                if (pFVar4 == (FEKEAPCCOOB_o *)0x0) goto LAB_0366aac4;
                                FEKEAPCCOOB__KPEEOJBFOCH
                                          (pFVar4,DPJIDNBJIBG,EHNFGMGKCHO,(MethodInfo *)0x0);
                                DPJIDNBJIBG = DPJIDNBJIBG + 1;
                              } while (DPJIDNBJIBG != iVar3);
                            }
                            pFVar4 = (__this->fields).HIOOMAJPEJP;
                            (__this->fields).OAFGKHIPFOF = true;
                            if (pFVar4 != (FEKEAPCCOOB_o *)0x0) {
                              FEKEAPCCOOB__AAOLKEFFIIN(pFVar4,0,(MethodInfo *)0x0);
                              (__this->fields).OAFGKHIPFOF = false;
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
LAB_0366aac4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

