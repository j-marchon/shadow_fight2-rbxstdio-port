// TypeDefIndex 1879
// Namespace: Nekki.SF2.GUI.GeneralMenu
// public class GeneralMenuScene : Scene<GeneralMenuScene>
// Fields:
//   private const string JAAMFAFECGB = "menu";
//   private MenuItemButton continueButton; // 0x90
//   private List<GeneralMenuList> menuList; // 0x98
//   private MenuItemSlider _soundSlider; // 0xA0
//   private MenuItemSlider _musicSlider; // 0xA8
//   private MenuItemList _languageList; // 0xB0
//   private MenuItemList _vibrationStrengthList; // 0xB8
//   private VideoClip _intro; // 0xC0
//   private VideoClip _gates; // 0xC8
//   private VideoClip _titan; // 0xD0
//   private VideoClip CPAKIIJDJMK; // 0xD8
//   private string _videoPath; // 0xE0
//   private float _ChangeLanguageDelay; // 0xE8
//   private HintList GDOFPOGOFJB; // 0xF0
//   private ControlsInfoScroll NOJAHBHFOJL; // 0xF8
//   private JIAOLFMAECH FFPCEMDJGIK; // 0x100
//   private JIAOLFMAECH AIAODGKGPEI; // 0x104
//   private IEnumerator FBFKCBHMMAC; // 0x108
//   private IEnumerator PDNOIJPIOLD; // 0x110

// ===== private void PKBPIMABPCB()  [RVA 0x324CE20]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$PKBPIMABPCB @ RVA 0x324CE20

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__PKBPIMABPCB
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *pSVar2;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  
  if ((DAT_04567106 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_GKHAKLDEIJI__);
    DAT_04567106 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar1->fields).KIHMKIEFOEI;
                    /* try { // try from 0334ce8c to 0344ce8f has its CatchHandler @ 0334cea8 */
                    /* try { // try from 0334ce90 to 0344ce93 has its CatchHandler @ 0334cc80 */
                    /* try { // try from 0334ce94 to 0344ce97 has its CatchHandler @ 0334cea4 */
                    /* try { // try from 0334ce98 to 0344cec7 has its CatchHandler @ 0334cc80 */
    pSVar2 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334ce0c with catch @ 0334cea0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334ce94 with catch @ 0334cea4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334ce8c with catch @ 0334cea8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334cdd0 with catch @ 0334ceac
                        */
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334cd74 with catch @ 0334ceb0
                        */
    if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
                    /* try { // try from 0334cec8 to 0344cecb has its CatchHandler @ 0334ced8 */
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar2,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* catch() { ... } // from try @ 0334cec8 with catch @ 0334ced8 */
        __this_01 = (pNVar1->fields).GMLEPHMBMPD;
        pSVar2 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        if (__this_01 != (JPGJLKENNCC_o *)0x0) {
                    /* try { // try from 0334cf10 to 0344cf37 has its CatchHandler @ 0334cf4c */
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar2,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NMDPFAGECON(float CJNHFNHJHPE)  [RVA 0x324CF24]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$NMDPFAGECON @ RVA 0x324CF24

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__NMDPFAGECON
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  EDFDANKEBGF__JGKCFCJLDKJ((MethodInfo *)0x0);
                    /* try { // try from 0334cf38 to 0344cf43 has its CatchHandler @ 0334cc80 */
                    /* try { // try from 0334cf44 to 0344cf4b has its CatchHandler @ 0334cf4c */
  MFIKGMIDDIG__DEDBAGNCFLE(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== public void ShowExit()  [RVA 0x324CF4C]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$ShowExit @ RVA 0x324CF4C

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__ShowExit
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0334cf10 with catch @ 0334cf4c
                       catch(type#2 @ 00000000) { ... } // from try @ 0334cf44 with catch @ 0334cf4c
                        */
  Nekki_SF2_Core_ApplicationController__Quit((MethodInfo *)0x0);
  return;
}


// ===== private void EHAJCBIIBKB(int JJMCKHDALCF)  [RVA 0x324CF54]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$EHAJCBIIBKB @ RVA 0x324CF54

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__EHAJCBIIBKB
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,int32_t JJMCKHDALCF,
               MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  long *plVar9;
  undefined8 *puVar10;
  DBNEEHGBCJD_o *FIKNJAFOLIM;
  PBAKFOBIHEG_o *pPVar11;
  MethodInfo *method_00;
  Il2CppClass *pIVar12;
  long lVar13;
  PBAKFOBIHEG_c *pPVar14;
  ulong uVar15;
  int *piVar16;
  int32_t *piVar17;
  System_Collections_IEnumerator_o *pSVar18;
  
  if ((DAT_04567107 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyList<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567107 = 1;
  }
  EDFDANKEBGF__JGKCFCJLDKJ((MethodInfo *)0x0);
  if (JJMCKHDALCF < 0) {
    return;
  }
  pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar7 != (Il2CppObject *)0x0) {
    pIVar12 = pIVar7->klass;
    uVar2._0_1_ = (pIVar12->_2).rank;
    uVar2._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar15 = (ulong)uVar2;
    if (uVar15 != 0) {
      piVar17 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar8 = pIVar12->vtable + (*piVar17 + 10);
          goto LAB_0334d034;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,10);
LAB_0334d034:
    plVar9 = (long *)(*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    if (plVar9 != (long *)0x0) {
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_DBNEEHGBCJD__c **)(piVar16 + -2) ==
              System_Collections_Generic_IReadOnlyCollection<DBNEEHGBCJD>_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0334d09c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_01b81914(plVar9,
                             System_Collections_Generic_IReadOnlyCollection<DBNEEHGBCJD>_TypeInfo,0)
      ;
LAB_0334d09c:
      iVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (iVar6 <= JJMCKHDALCF) {
        return;
      }
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar12 = pIVar7->klass;
        uVar3._0_1_ = (pIVar12->_2).rank;
        uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
        uVar15 = (ulong)uVar3;
        if (uVar15 != 0) {
          piVar17 = &((pIVar12->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar8 = pIVar12->vtable + (*piVar17 + 10);
              goto LAB_0334d110;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,10);
LAB_0334d110:
        plVar9 = (long *)(*pVVar8->methodPtr)(pIVar7,pVVar8->method);
        if (plVar9 != (long *)0x0) {
          lVar13 = *plVar9;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IReadOnlyList_DBNEEHGBCJD__c **)(piVar16 + -2) ==
                  System_Collections_Generic_IReadOnlyList<DBNEEHGBCJD>_TypeInfo) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0334d178;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01b81914(plVar9,
                                 System_Collections_Generic_IReadOnlyList<DBNEEHGBCJD>_TypeInfo,0);
LAB_0334d178:
          method_00 = (MethodInfo *)puVar10[1];
          FIKNJAFOLIM = (DBNEEHGBCJD_o *)(*(code *)*puVar10)(plVar9,JJMCKHDALCF);
          if (FIKNJAFOLIM == (DBNEEHGBCJD_o *)0x0) {
            return;
          }
          ppSVar1 = &(__this->fields).FBFKCBHMMAC;
          if ((__this->fields).FBFKCBHMMAC != (System_Collections_IEnumerator_o *)0x0) {
            pPVar11 = CoroutineManager__get_Current((MethodInfo *)0x0);
            if (pPVar11 == (PBAKFOBIHEG_o *)0x0) goto LAB_0334d2cc;
            pPVar14 = pPVar11->klass;
            pSVar18 = *ppSVar1;
            uVar4._0_1_ = (pPVar14->_2).rank;
            uVar4._1_1_ = (pPVar14->_2).minimumAlignment;
            uVar15 = (ulong)uVar4;
            if (uVar15 != 0) {
              piVar17 = &((pPVar14->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                    (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                  pVVar8 = pPVar14->vtable + (*piVar17 + 1);
                  goto LAB_0334d218;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pPVar11,PBAKFOBIHEG_TypeInfo,1);
LAB_0334d218:
            method_00 = pVVar8->method;
            (*pVVar8->methodPtr)(pPVar11,pSVar18);
          }
          pPVar11 = CoroutineManager__get_Current((MethodInfo *)0x0);
          pSVar18 = Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__KNHOFLGDIKD
                              (__this,FIKNJAFOLIM,method_00);
          if (pPVar11 != (PBAKFOBIHEG_o *)0x0) {
            pPVar14 = pPVar11->klass;
            uVar5._0_1_ = (pPVar14->_2).rank;
            uVar5._1_1_ = (pPVar14->_2).minimumAlignment;
            uVar15 = (ulong)uVar5;
            if (uVar15 != 0) {
              piVar17 = &((pPVar14->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                    (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                  pVVar8 = pPVar14->vtable + *piVar17;
                  goto LAB_0334d29c;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pPVar11,PBAKFOBIHEG_TypeInfo,0);
LAB_0334d29c:
            pSVar18 = (System_Collections_IEnumerator_o *)
                      (*pVVar8->methodPtr)(pPVar11,pSVar18,1,pVVar8->method);
            *ppSVar1 = pSVar18;
            thunk_FUN_01c20e04(ppSVar1,pSVar18);
            return;
          }
        }
      }
    }
  }
LAB_0334d2cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x324D358]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$.ctor @ RVA 0x324D358

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene___ctor
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  if ((DAT_04567108 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>__ctor__);
    FUN_01bab630(&StringLiteral_17611/*"database/{0}.mp4"*/);
    DAT_04567108 = 1;
  }
  (__this->fields)._videoPath = StringLiteral_17611/*"database/{0}.mp4"*/;
  thunk_FUN_01c20e04();
  (__this->fields)._ChangeLanguageDelay = 1.0;
  Nekki_SF2_GUI_Scene<object>___ctor
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>__ctor__
            );
  return;
}


// ===== protected override void GIENGNEGHPJ(object IMMNELPBGIF)  [RVA 0x324D3D4]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$GIENGNEGHPJ @ RVA 0x324D3D4

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__GIENGNEGHPJ
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar2;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *pNVar3;
  System_Collections_Generic_List_GeneralMenuList__o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar4;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o **ppNVar5;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04567109 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GeneralMenuList>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GeneralMenuList>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GeneralMenuList>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_GetEnumerator__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<ControlsInfoScroll>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<HintList>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>_GIENGNEGHPJ__);
    FUN_01bab630(&StringLiteral_19657/*"menu"*/);
    DAT_04567109 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pMVar4 = Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>_GIENGNEGHPJ__;
  Nekki_SF2_GUI_Scene<object>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Scene_T__o *)__this,IMMNELPBGIF,
             (MethodInfo_296FD38 *)Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>_GIENGNEGHPJ__);
  pNVar2 = (Nekki_SF2_GUI_Common_Hints_HintList_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<HintList>__);
  (__this->fields).GDOFPOGOFJB = pNVar2;
  thunk_FUN_01c20e04();
  pNVar3 = (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<ControlsInfoScroll>__);
  ppNVar5 = &(__this->fields).NOJAHBHFOJL;
  *ppNVar5 = pNVar3;
  thunk_FUN_01c20e04(ppNVar5);
  __this_00 = (__this->fields).menuList;
  if (__this_00 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<GeneralMenuList>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<GeneralMenuList>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<GeneralMenuList>_Dispose__);
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__CKOHHLKDFPJ(__this,method_00);
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__DADMLBCLHBI(__this,method_01);
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LoadSection(__this,0,pMVar4);
        pMVar4 = extraout_x1;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar4 = extraout_x1_00;
        }
        NLPJLHOEAOE_TypeInfo->static_fields->FBCOPFLPMED = 0;
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__FDIGBCFEHLG(__this,pMVar4);
        if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = PNLFHHJGDLI__FPPAOOIPKEO((MethodInfo *)0x0);
        if (!bVar1) {
          if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          PNLFHHJGDLI__ODFHMBHFNJB(StringLiteral_19657/*"menu"*/,true,(MethodInfo *)0x0);
        }
        return;
      }
      if ((Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)local_58.fields._current ==
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)0x0) break;
      Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__Init
                ((Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)local_58.fields._current,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CKOHHLKDFPJ()  [RVA 0x324D674]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$CKOHHLKDFPJ @ RVA 0x324D674

/* WARNING: Removing unreachable block (ram,0x0334df6c) */

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__CKOHHLKDFPJ
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  uint8_t uVar6;
  UnityEngine_Events_UnityAction_T0__o *pUVar7;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  long *plVar10;
  undefined8 *puVar11;
  System_String_o *pSVar12;
  Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *pNVar13;
  System_Collections_Generic_List_string__o *pSVar14;
  Il2CppClass *pIVar15;
  long lVar16;
  System_String_array *pSVar17;
  ulong uVar18;
  int *piVar19;
  int32_t *piVar20;
  Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *pNVar21;
  UnityEngine_Events_UnityEvent_float__o *pUVar22;
  UnityEngine_Events_UnityEvent_int__o *pUVar23;
  float fVar24;
  System_Enum_o local_b0;
  undefined1 local_a0;
  System_Enum_o local_98;
  undefined1 local_88;
  System_Enum_o local_80;
  undefined1 local_70;
  System_Enum_o local_68;
  undefined1 local_58;
  
  if ((DAT_0456710a & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_EHAJCBIIBKB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_IBFINJEFBBJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_JMKOPHMLNFF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_NMDPFAGECON__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&MJAIOOLPAMI_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<int>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_AddListener__);
    FUN_01bab630(&StringLiteral_11975/*"Settings_Vibration_"*/);
    DAT_0456710a = 1;
  }
  pNVar21 = (__this->fields)._soundSlider;
  bVar5 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
  fVar24 = 0.0;
  if (!bVar5) {
    fVar24 = MFIKGMIDDIG__IBNHGIOPFNP((MethodInfo *)0x0);
  }
  if (pNVar21 != (Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *)0x0) {
    Nekki_SF2_GUI_GeneralMenu_MenuItemSlider__set_value(pNVar21,fVar24,(MethodInfo *)0x0);
    pNVar21 = (__this->fields)._soundSlider;
    if (pNVar21 != (Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *)0x0) {
      pUVar22 = (UnityEngine_Events_UnityEvent_float__o *)(pNVar21->fields)._OnValueChanged;
      pUVar7 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
      UnityEngine_Events_UnityAction<float>___ctor();
      if (pUVar22 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
        UnityEngine_Events_UnityEvent<float>__AddListener
                  (pUVar22,pUVar7,Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
        pNVar21 = (__this->fields)._musicSlider;
        bVar5 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
        fVar24 = 0.0;
        if (!bVar5) {
          fVar24 = MFIKGMIDDIG__IEONOAEPPCN((MethodInfo *)0x0);
        }
        if (pNVar21 != (Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *)0x0) {
          Nekki_SF2_GUI_GeneralMenu_MenuItemSlider__set_value(pNVar21,fVar24,(MethodInfo *)0x0);
          pNVar21 = (__this->fields)._musicSlider;
          if (pNVar21 != (Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *)0x0) {
            pUVar22 = (UnityEngine_Events_UnityEvent_float__o *)(pNVar21->fields)._OnValueChanged;
            pUVar7 = (UnityEngine_Events_UnityAction_T0__o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
            UnityEngine_Events_UnityAction<float>___ctor();
            if (pUVar22 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
              UnityEngine_Events_UnityEvent<float>__AddListener
                        (pUVar22,pUVar7,Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
              pNVar13 = (__this->fields)._languageList;
              if ((pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) &&
                 (pSVar14 = (pNVar13->fields)._list,
                 pSVar14 != (System_Collections_Generic_List_string__o *)0x0)) {
                iVar1 = (pSVar14->fields)._size;
                (pSVar14->fields)._size = 0;
                (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
                if (0 < iVar1) {
                  System_Array__Clear((System_Array_o *)(pSVar14->fields)._items,0,iVar1,
                                      (MethodInfo *)0x0);
                }
                pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                   (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                if (pIVar8 != (Il2CppObject *)0x0) {
                  pIVar15 = pIVar8->klass;
                  uVar2._0_1_ = (pIVar15->_2).rank;
                  uVar2._1_1_ = (pIVar15->_2).minimumAlignment;
                  uVar18 = (ulong)uVar2;
                  if (uVar18 != 0) {
                    piVar20 = &((pIVar15->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
                          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                        pVVar9 = pIVar15->vtable + (*piVar20 + 10);
                        goto LAB_0334d910;
                      }
                      uVar18 = uVar18 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar18 != 0);
                  }
                  pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,10);
LAB_0334d910:
                  plVar10 = (long *)(*pVVar9->methodPtr)(pIVar8,pVVar9->method);
                  if (plVar10 != (long *)0x0) {
                    lVar16 = *plVar10;
                    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    if (uVar18 != 0) {
                      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(System_Collections_Generic_IEnumerable_DBNEEHGBCJD__c **)
                             (piVar19 + -2) ==
                            System_Collections_Generic_IEnumerable<DBNEEHGBCJD>_TypeInfo) {
                          puVar11 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                          goto LAB_0334d978;
                        }
                        uVar18 = uVar18 - 1;
                        piVar19 = piVar19 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar11 = (undefined8 *)
                              FUN_01b81914(plVar10,
                                           System_Collections_Generic_IEnumerable<DBNEEHGBCJD>_TypeInfo
                                           ,0);
LAB_0334d978:
                    plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
                    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    do {
                      lVar16 = *plVar10;
                      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                      if (uVar18 != 0) {
                        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        do {
                          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                              System_Collections_IEnumerator_TypeInfo) {
                            puVar11 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                            goto LAB_0334d9f8;
                          }
                          uVar18 = uVar18 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar11 = (undefined8 *)
                                FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,0);
LAB_0334d9f8:
                      uVar18 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                      if ((uVar18 & 1) == 0) {
                        if (plVar10 == (long *)0x0) goto LAB_0334db40;
                        lVar16 = *plVar10;
                        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                        if (uVar18 == 0) goto LAB_0334db18;
                        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        goto LAB_0334db00;
                      }
                      lVar16 = *plVar10;
                      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                      if (uVar18 != 0) {
                        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        do {
                          if (*(System_Collections_Generic_IEnumerator_DBNEEHGBCJD__c **)
                               (piVar19 + -2) ==
                              System_Collections_Generic_IEnumerator<DBNEEHGBCJD>_TypeInfo) {
                            puVar11 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                            goto LAB_0334da54;
                          }
                          uVar18 = uVar18 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar11 = (undefined8 *)
                                FUN_01b81914(plVar10,
                                             System_Collections_Generic_IEnumerator<DBNEEHGBCJD>_TypeInfo
                                             ,0);
LAB_0334da54:
                      lVar16 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                      pNVar13 = (__this->fields)._languageList;
                      if (pNVar13 == (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      if (*(System_String_o **)(lVar16 + 0x10) == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar14 = (pNVar13->fields)._list;
                      pSVar12 = System_String__ToUpper
                                          (*(System_String_o **)(lVar16 + 0x10),(MethodInfo *)0x0);
                      lVar16 = Method_System_Collections_Generic_List<string>_Add__;
                      if (pSVar14 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar17 = (pSVar14->fields)._items;
                      (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
                      if (pSVar17 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      uVar4 = (pSVar14->fields)._size;
                      if (uVar4 < (uint)pSVar17->max_length) {
                        (pSVar14->fields)._size = uVar4 + 1;
                        pSVar17->m_Items[(int)uVar4] = pSVar12;
                        thunk_FUN_01c20e04();
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar14,
                                   (Il2CppObject *)pSVar12,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                    } while( true );
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_0334df50;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_0334db00:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0334db34;
    }
  }
LAB_0334db18:
  puVar11 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_0334db34:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_0334db40:
  pNVar13 = (__this->fields)._languageList;
  pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar15 = pIVar8->klass;
    uVar3._0_1_ = (pIVar15->_2).rank;
    uVar3._1_1_ = (pIVar15->_2).minimumAlignment;
    uVar18 = (ulong)uVar3;
    if (uVar18 != 0) {
      piVar20 = &((pIVar15->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar9 = pIVar15->vtable + (*piVar20 + 6);
          goto LAB_0334dba8;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,6);
LAB_0334dba8:
    lVar16 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
    if ((lVar16 != 0) && (pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0)) {
      Nekki_SF2_GUI_GeneralMenu_MenuItemList__ChangeListIndex
                (pNVar13,*(int32_t *)(lVar16 + 0x40),(MethodInfo *)0x0);
      pNVar13 = (__this->fields)._languageList;
      if (pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) {
        pUVar23 = (UnityEngine_Events_UnityEvent_int__o *)(pNVar13->fields)._OnValueChanged;
        pUVar7 = (UnityEngine_Events_UnityAction_T0__o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction<int>_TypeInfo);
        UnityEngine_Events_UnityAction<int>___ctor();
        if (pUVar23 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
          UnityEngine_Events_UnityEvent<int>__AddListener
                    (pUVar23,pUVar7,Method_UnityEngine_Events_UnityEvent<int>_AddListener__);
          pNVar13 = (__this->fields)._vibrationStrengthList;
          if ((pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) &&
             (pSVar14 = (pNVar13->fields)._list,
             pSVar14 != (System_Collections_Generic_List_string__o *)0x0)) {
            iVar1 = (pSVar14->fields)._size;
            (pSVar14->fields)._size = 0;
            (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
            if (0 < iVar1) {
              System_Array__Clear((System_Array_o *)(pSVar14->fields)._items,0,iVar1,
                                  (MethodInfo *)0x0);
              pNVar13 = (__this->fields)._vibrationStrengthList;
              if (pNVar13 == (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) goto LAB_0334df50;
            }
            local_68.klass = (System_Enum_c *)MJAIOOLPAMI_TypeInfo;
            pSVar14 = (pNVar13->fields)._list;
            local_68.monitor = (void *)0xffffffffffffffff;
            local_58 = 0;
            pSVar12 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
            pSVar12 = System_String__Concat(StringLiteral_11975/*"Settings_Vibration_"*/,pSVar12,(MethodInfo *)0x0);
            lVar16 = Method_System_Collections_Generic_List<string>_Add__;
            if (pSVar14 != (System_Collections_Generic_List_string__o *)0x0) {
              pSVar17 = (pSVar14->fields)._items;
              (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
              if (pSVar17 != (System_String_array *)0x0) {
                uVar4 = (pSVar14->fields)._size;
                if (uVar4 < (uint)pSVar17->max_length) {
                  (pSVar14->fields)._size = uVar4 + 1;
                  pSVar17->m_Items[(int)uVar4] = pSVar12;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar14,
                             (Il2CppObject *)pSVar12,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
                pNVar13 = (__this->fields)._vibrationStrengthList;
                if (pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) {
                  local_80.klass = (System_Enum_c *)MJAIOOLPAMI_TypeInfo;
                  pSVar14 = (pNVar13->fields)._list;
                  local_80.monitor = (void *)0xffffffffffffffff;
                  local_70 = 1;
                  pSVar12 = System_Enum__ToString(&local_80,(MethodInfo *)0x0);
                  pSVar12 = System_String__Concat(StringLiteral_11975/*"Settings_Vibration_"*/,pSVar12,(MethodInfo *)0x0);
                  lVar16 = Method_System_Collections_Generic_List<string>_Add__;
                  if (pSVar14 != (System_Collections_Generic_List_string__o *)0x0) {
                    pSVar17 = (pSVar14->fields)._items;
                    (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
                    if (pSVar17 != (System_String_array *)0x0) {
                      uVar4 = (pSVar14->fields)._size;
                      if (uVar4 < (uint)pSVar17->max_length) {
                        (pSVar14->fields)._size = uVar4 + 1;
                        pSVar17->m_Items[(int)uVar4] = pSVar12;
                        thunk_FUN_01c20e04();
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar14,
                                   (Il2CppObject *)pSVar12,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                      pNVar13 = (__this->fields)._vibrationStrengthList;
                      if (pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) {
                        local_98.klass = (System_Enum_c *)MJAIOOLPAMI_TypeInfo;
                        pSVar14 = (pNVar13->fields)._list;
                        local_98.monitor = (void *)0xffffffffffffffff;
                        local_88 = 2;
                        pSVar12 = System_Enum__ToString(&local_98,(MethodInfo *)0x0);
                        pSVar12 = System_String__Concat
                                            (StringLiteral_11975/*"Settings_Vibration_"*/,pSVar12,(MethodInfo *)0x0);
                        lVar16 = Method_System_Collections_Generic_List<string>_Add__;
                        if (pSVar14 != (System_Collections_Generic_List_string__o *)0x0) {
                          pSVar17 = (pSVar14->fields)._items;
                          (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
                          if (pSVar17 != (System_String_array *)0x0) {
                            uVar4 = (pSVar14->fields)._size;
                            if (uVar4 < (uint)pSVar17->max_length) {
                              (pSVar14->fields)._size = uVar4 + 1;
                              pSVar17->m_Items[(int)uVar4] = pSVar12;
                              thunk_FUN_01c20e04();
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        ((System_Collections_Generic_List_object__o *)pSVar14,
                                         (Il2CppObject *)pSVar12,
                                         *(MethodInfo_26E4DAC **)
                                          (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                            }
                            pNVar13 = (__this->fields)._vibrationStrengthList;
                            if (pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) {
                              local_b0.klass = (System_Enum_c *)MJAIOOLPAMI_TypeInfo;
                              pSVar14 = (pNVar13->fields)._list;
                              local_b0.monitor = (void *)0xffffffffffffffff;
                              local_a0 = 3;
                              pSVar12 = System_Enum__ToString(&local_b0,(MethodInfo *)0x0);
                              pSVar12 = System_String__Concat
                                                  (StringLiteral_11975/*"Settings_Vibration_"*/,pSVar12,(MethodInfo *)0x0);
                              lVar16 = Method_System_Collections_Generic_List<string>_Add__;
                              if (pSVar14 != (System_Collections_Generic_List_string__o *)0x0) {
                                pSVar17 = (pSVar14->fields)._items;
                                (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
                                if (pSVar17 != (System_String_array *)0x0) {
                                  uVar4 = (pSVar14->fields)._size;
                                  if (uVar4 < (uint)pSVar17->max_length) {
                                    (pSVar14->fields)._size = uVar4 + 1;
                                    pSVar17->m_Items[(int)uVar4] = pSVar12;
                                    thunk_FUN_01c20e04();
                                  }
                                  else {
                                    System_Collections_Generic_List<object>__AddWithResize
                                              ((System_Collections_Generic_List_object__o *)pSVar14,
                                               (Il2CppObject *)pSVar12,
                                               *(MethodInfo_26E4DAC **)
                                                (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                                    ;
                                  }
                                  pNVar13 = (__this->fields)._vibrationStrengthList;
                                  uVar6 = HFNDCHDFFKO__LLJLCLHCDDO((MethodInfo *)0x0);
                                  if (pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) {
                                    Nekki_SF2_GUI_GeneralMenu_MenuItemList__ChangeListIndex
                                              (pNVar13,(uint)uVar6,(MethodInfo *)0x0);
                                    pNVar13 = (__this->fields)._vibrationStrengthList;
                                    if (pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0)
                                    {
                                      pUVar23 = (UnityEngine_Events_UnityEvent_int__o *)
                                                (pNVar13->fields)._OnValueChanged;
                                      pUVar7 = (UnityEngine_Events_UnityAction_T0__o *)
                                               thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<int>_TypeInfo);
                                      UnityEngine_Events_UnityAction<int>___ctor();
                                      if (pUVar23 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
                                        UnityEngine_Events_UnityEvent<int>__AddListener
                                                  (pUVar23,pUVar7,
                                                                                                      
                                                  Method_UnityEngine_Events_UnityEvent<int>_AddListener__
                                                  );
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
LAB_0334df50:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ContinueCurrentSlot()  [RVA 0x324E424]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$ContinueCurrentSlot @ RVA 0x324E424

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__ContinueCurrentSlot
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  Il2CppObject *message;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  int32_t local_34;
  
  if ((DAT_0456710b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456710b = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_0456647b == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456647b = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  local_34 = NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO;
  message = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
  if (DAT_0456647b == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456647b = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LoadGameAtSaveSlot
            (__this,NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO,in_x2);
  return;
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x324E650]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$CLNAOMIIBLH @ RVA 0x324E650

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__CLNAOMIIBLH
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((DAT_0456710c & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>_CLNAOMIIBLH__);
    DAT_0456710c = 1;
  }
  Nekki_SF2_GUI_Scene<object>__CLNAOMIIBLH
            ((Nekki_SF2_GUI_Scene_T__o *)__this,
             Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>_CLNAOMIIBLH__);
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__PKBPIMABPCB(__this,method_00);
  return;
}


// ===== private void GKHAKLDEIJI(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x324E6A0]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$GKHAKLDEIJI @ RVA 0x324E6A0

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__GKHAKLDEIJI
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GeneralMenuList__o *__this_00;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this_01;
  
  if ((DAT_0456710d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__,NAIJBCMHBFK,
                 OPHMGAKOJLP);
    DAT_0456710d = 1;
  }
  __this_00 = (__this->fields).menuList;
  if (__this_00 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (__this->fields).AIAODGKGPEI,
                           Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    bVar1 = DANCCJHADOA__NBEOBEKPHMN(AAJGEHHPMGH,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (__this_01 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)0x0) {
      Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__CallIndex
                (__this_01,(__this_01->fields).selection,AAJGEHHPMGH,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HintList get_HintList()  [RVA 0x324E730]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$get_HintList @ RVA 0x324E730

Nekki_SF2_GUI_Common_Hints_HintList_o *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__get_HintList
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  return (__this->fields).GDOFPOGOFJB;
}


// ===== public void LoadGameAtSaveSlot(int NFIGEAOPJKM)  [RVA 0x324E55C]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$LoadGameAtSaveSlot @ RVA 0x324E55C

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LoadGameAtSaveSlot
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,int32_t NFIGEAOPJKM,
               MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_0456710e & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456710e = 1;
  }
  if ((__this->fields).PDNOIJPIOLD != (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar4 = Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__IEJBEKPANNP(__this,NFIGEAOPJKM,0.12,method);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = pPVar3->klass;
  ppSVar1 = &(__this->fields).PDNOIJPIOLD;
  uVar2._0_1_ = (pPVar6->_2).rank;
  uVar2._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar2;
  if (uVar7 != 0) {
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar5 = pPVar6->vtable + *piVar8;
        goto LAB_0334e620;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_0334e620:
  pSVar4 = (System_Collections_IEnumerator_o *)(*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
  *ppSVar1 = pSVar4;
  thunk_FUN_01c20e04(ppSVar1,pSVar4);
  return;
}


// ===== private void AONJACIMAPN(FPPKHNNABAD NDBPOFMECGL)  [RVA 0x324E7C4]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$AONJACIMAPN @ RVA 0x324E7C4

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__AONJACIMAPN
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LoadSection
            (__this,(__this->fields).AIAODGKGPEI,method);
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__FDIGBCFEHLG(__this,method_00);
  return;
}


// ===== private void DADMLBCLHBI()  [RVA 0x324E02C]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$DADMLBCLHBI @ RVA 0x324E02C

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__DADMLBCLHBI
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *pSVar2;
  System_Enum_o *pSVar3;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_0456710f & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_GKHAKLDEIJI__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    DAT_0456710f = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar1->fields).KIHMKIEFOEI;
    pSVar2 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                    /* try { // try from 0334e0c4 to 0344e0cb has its CatchHandler @ 0334e1bc */
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                    /* try { // try from 0334e0d4 to 0344e0f3 has its CatchHandler @ 0334e218 */
    local_34 = 0;
    pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_34);
    if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
                    /* try { // try from 0334e0f4 to 0344e107 has its CatchHandler @ 0334e1b4 */
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar2,pSVar3,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
                    /* try { // try from 0334e108 to 0344e13f has its CatchHandler @ 0334e00c */
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_01 = (pNVar1->fields).GMLEPHMBMPD;
        pSVar2 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                    /* try { // try from 0334e140 to 0344e147 has its CatchHandler @ 0334e1b8 */
        local_38 = 0;
        pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_38);
        if (__this_01 != (JPGJLKENNCC_o *)0x0) {
                    /* try { // try from 0334e150 to 0344e16f has its CatchHandler @ 0334e1c0 */
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar2,pSVar3,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
                    /* try { // try from 0334e170 to 0344e183 has its CatchHandler @ 0334e1b0 */
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LoadSection(string ENECIBGGHJI)  [RVA 0x324E7E0]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$LoadSection @ RVA 0x324E7E0

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LoadSection
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,System_String_o *ENECIBGGHJI,
               MethodInfo *method)

{
  int32_t BACJDPMBFFE;
  System_String_o *message;
  MethodInfo *method_00;
  
  if ((DAT_04567110 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<JIAOLFMAECH>__);
    FUN_01bab630(&StringLiteral_4175/*"Cant find section named "*/);
    DAT_04567110 = 1;
  }
  method_00 = Method_PCOEHCPGBBG_AICKIDLLIBK<JIAOLFMAECH>__;
  BACJDPMBFFE = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                          (ENECIBGGHJI,5,
                           (MethodInfo_1F413A8 *)Method_PCOEHCPGBBG_AICKIDLLIBK<JIAOLFMAECH>__);
  if (BACJDPMBFFE == 5) {
    message = System_String__Concat(StringLiteral_4175/*"Cant find section named "*/,ENECIBGGHJI,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)message,(MethodInfo *)0x0);
    return;
  }
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LoadSection(__this,BACJDPMBFFE,method_00);
  return;
}


// ===== private IEnumerator DJDOKKJGOFJ(object IMMNELPBGIF, int NFIGEAOPJKM)  [RVA 0x324E8B4]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$DJDOKKJGOFJ @ RVA 0x324E8B4

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__DJDOKKJGOFJ
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,Il2CppObject *IMMNELPBGIF,
          int32_t NFIGEAOPJKM,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04567111 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA_TypeInfo);
    DAT_04567111 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[3].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 3,__this);
  __this_00[2].klass = (Il2CppClass *)IMMNELPBGIF;
  thunk_FUN_01c20e04(__this_00 + 2,IMMNELPBGIF);
  *(int32_t *)&__this_00[2].monitor = NFIGEAOPJKM;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void DeleteSlot(int NFIGEAOPJKM)  [RVA 0x324E96C]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$DeleteSlot @ RVA 0x324E96C

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__DeleteSlot
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,int32_t NFIGEAOPJKM,
               MethodInfo *method)

{
  bool bVar1;
  NLPJLHOEAOE_o *__this_00;
  System_Xml_XmlNode_o *pSVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  FPPKHNNABAD_o *__this_01;
  System_Action_FPPKHNNABAD__o *CJNHFNHJHPE;
  System_String_o *pSVar4;
  PKHMIGFEJCL_o *pPVar5;
  undefined8 *puVar6;
  int32_t local_24;
  
  local_24 = NFIGEAOPJKM;
  if ((DAT_04567112 & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_AONJACIMAPN__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15454/*"[DeleteSlot] Can't find slot at "*/);
    FUN_01bab630(&StringLiteral_4585/*"ConfirmDeleteSave"*/);
    FUN_01bab630(&StringLiteral_6730/*"GeneralMenuScene::DeleteSlot QUEST_EVENT_DELETE_SAVE quests run."*/);
    FUN_01bab630(&StringLiteral_6731/*"GeneralMenuScene::DeleteSlot there are no QUEST_EVENT_DELETE_SAVE quests!"*/);
    DAT_04567112 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
    pSVar2 = NLPJLHOEAOE__MBLEGLIMGHP(__this_00,NFIGEAOPJKM,(MethodInfo *)0x0);
    if (pSVar2 == (System_Xml_XmlNode_o *)0x0) {
      pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat(StringLiteral_15454/*"[DeleteSlot] Can't find slot at "*/,pSVar4,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
      return;
    }
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(pNVar3,0x3f,(MethodInfo *)0x0);
      if (!bVar1) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        puVar6 = &StringLiteral_6731/*"GeneralMenuScene::DeleteSlot there are no QUEST_EVENT_DELETE_SAVE quests!"*/;
LAB_0334eb84:
        UnityEngine_Debug__Log((Il2CppObject *)*puVar6,(MethodInfo *)0x0);
        return;
      }
      pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if ((pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
         (pPVar5 = (pNVar3->fields).QuestParameters, pPVar5 != (PKHMIGFEJCL_o *)0x0)) {
        (pPVar5->fields).DODHDMOKABD = NFIGEAOPJKM;
        pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          __this_01 = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName
                                (pNVar3,StringLiteral_4585/*"ConfirmDeleteSave"*/,(MethodInfo *)0x0);
          CJNHFNHJHPE = (System_Action_FPPKHNNABAD__o *)
                        thunk_FUN_01bda818(System_Action<FPPKHNNABAD>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_01 != (FPPKHNNABAD_o *)0x0) {
            FPPKHNNABAD__EIAAJACOKDP(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
            pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
              Nekki_SF2_Core_Quests_QuestsManager__RunQuests(pNVar3,(MethodInfo *)0x0);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              puVar6 = &StringLiteral_6730/*"GeneralMenuScene::DeleteSlot QUEST_EVENT_DELETE_SAVE quests run."*/;
              goto LAB_0334eb84;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator KNHOFLGDIKD(DBNEEHGBCJD FIKNJAFOLIM)  [RVA 0x324D2D0]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$KNHOFLGDIKD @ RVA 0x324D2D0

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__KNHOFLGDIKD
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,DBNEEHGBCJD_o *FIKNJAFOLIM,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04567113 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF_TypeInfo);
    DAT_04567113 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  __this_00[2].monitor = FIKNJAFOLIM;
  thunk_FUN_01c20e04(&__this_00[2].monitor,FIKNJAFOLIM);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void RefreshHints()  [RVA 0x324EBC8]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$RefreshHints @ RVA 0x324EBC8

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__RefreshHints
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GeneralMenuList__o *pSVar1;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this_00;
  Il2CppObject *pIVar2;
  
  if ((DAT_04567114 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    DAT_04567114 = 1;
  }
  pSVar1 = (__this->fields).menuList;
  if (pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    __this_00 = (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar1,
                           (__this->fields).AIAODGKGPEI,
                           Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    pSVar1 = (__this->fields).menuList;
    if (((pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
        (pIVar2 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar1,
                             (__this->fields).AIAODGKGPEI,
                             Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__),
        pIVar2 != (Il2CppObject *)0x0)) &&
       (__this_00 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)0x0)) {
      Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelectItemAt
                (__this_00,*(int32_t *)&pIVar2[3].klass,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GBJHCGNMCGE()  [RVA 0x324EC54]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$GBJHCGNMCGE @ RVA 0x324EC54

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__GBJHCGNMCGE
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *PKKMGBOIDJD;
  System_Enum_o *NCPANDOCILC;
  OCOAGJDCJPL_o *__this_00;
  undefined4 local_24;
  
  if ((DAT_04567115 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_BEBGOPNMHON__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    DAT_04567115 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar1->fields).KIHMKIEFOEI;
    PKKMGBOIDJD = (System_Action_T0__T1__T2__o *)
                  thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    local_24 = 0;
    NCPANDOCILC = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_24);
    if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,PKKMGBOIDJD,NCPANDOCILC,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LeaveSectionAnimation()  [RVA 0x324ED30]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$LeaveSectionAnimation @ RVA 0x324ED30

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LeaveSectionAnimation
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_GeneralMenuList__o *pSVar2;
  UnityEngine_Component_o *pUVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *pUVar6;
  DG_Tweening_Core_DOGetter_float__o *pDVar7;
  DG_Tweening_Core_DOSetter_float__o *pDVar8;
  UnityEngine_Transform_o *pUVar9;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar10;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_StaticFields *pUVar11;
  void **ppvVar12;
  Il2CppObject *pIVar13;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567116 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_FDIGBCFEHLG__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_PPFAJFDIMIH_DELKCAJHOKD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_PPFAJFDIMIH_LGHFBNHCKNF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_PPFAJFDIMIH_MNDICMPDNNL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_PPFAJFDIMIH_OBCPCJBFHII__);
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_PPFAJFDIMIH_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_04567116 = 1;
    method = extraout_x1;
  }
  pIVar1 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_PPFAJFDIMIH_TypeInfo,method
                             );
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).menuList;
  if (pSVar2 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    pUVar3 = (UnityEngine_Component_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,
                        (__this->fields).FFPCEMDJGIK,
                        Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    if (pUVar3 != (UnityEngine_Component_o *)0x0) {
      pIVar4 = (Il2CppClass *)
               UnityEngine_Component__GetComponent<object>
                         (pUVar3,Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
      if (pIVar1 != (Il2CppObject *)0x0) {
        pIVar13 = pIVar1 + 1;
        pIVar13->klass = pIVar4;
        thunk_FUN_01c20e04(pIVar13,pIVar4);
        pSVar2 = (__this->fields).menuList;
        if ((pSVar2 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
           (pUVar3 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,
                                (__this->fields).AIAODGKGPEI,
                                Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__),
           pUVar3 != (UnityEngine_Component_o *)0x0)) {
          pIVar5 = UnityEngine_Component__GetComponent<object>
                             (pUVar3,Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
          ppvVar12 = &pIVar1[1].monitor;
          *ppvVar12 = pIVar5;
          thunk_FUN_01c20e04(ppvVar12,pIVar5);
          pSVar2 = (__this->fields).menuList;
          if ((pSVar2 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
             ((pUVar3 = (UnityEngine_Component_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar2,
                                   (__this->fields).FFPCEMDJGIK,
                                   Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__
                                  ), pUVar3 != (UnityEngine_Component_o *)0x0 &&
              (pUVar6 = UnityEngine_Component__get_gameObject(pUVar3,(MethodInfo *)0x0),
              pUVar6 != (UnityEngine_GameObject_o *)0x0)))) {
            UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).menuList;
            if ((pSVar2 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
               ((pUVar3 = (UnityEngine_Component_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar2,
                                     (__this->fields).AIAODGKGPEI,
                                     Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__
                                    ), pUVar3 != (UnityEngine_Component_o *)0x0 &&
                (pUVar6 = UnityEngine_Component__get_gameObject(pUVar3,(MethodInfo *)0x0),
                pUVar6 != (UnityEngine_GameObject_o *)0x0)))) {
              UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
              if (pIVar13->klass != (Il2CppClass *)0x0) {
                UnityEngine_CanvasGroup__set_alpha
                          ((UnityEngine_CanvasGroup_o *)pIVar13->klass,1.0,(MethodInfo *)0x0);
                pDVar7 = (DG_Tweening_Core_DOGetter_float__o *)
                         thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
                DG_Tweening_Core_DOGetter<float>___ctor();
                pDVar8 = (DG_Tweening_Core_DOSetter_float__o *)
                         thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
                DG_Tweening_Core_DOSetter<float>___ctor();
                if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                DG_Tweening_DOTween__To(pDVar7,pDVar8,0.0,0.2,(MethodInfo *)0x0);
                if (pIVar13->klass != (Il2CppClass *)0x0) {
                  pUVar9 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pIVar13->klass,(MethodInfo *)0x0);
                  if (DAT_0455fa7f == '\0') {
                    FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                    DAT_0455fa7f = '\x01';
                  }
                  if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_localScale
                              (pUVar9,(UnityEngine_Vector3_o)
                                      (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).
                                      fields,(MethodInfo *)0x0);
                    if (pIVar13->klass != (Il2CppClass *)0x0) {
                      pUVar9 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)pIVar13->klass,
                                          (MethodInfo *)0x0);
                      pDVar10 = DG_Tweening_ShortcutExtensions__DOScale
                                          (pUVar9,0.8,0.2,(MethodInfo *)0x0);
                      DG_Tweening_TweenSettingsExtensions__SetEase<object>
                                ((Il2CppObject *)pDVar10,8,
                                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                                );
                      if (*ppvVar12 != (UnityEngine_CanvasGroup_o *)0x0) {
                        UnityEngine_CanvasGroup__set_alpha(*ppvVar12,0.0,(MethodInfo *)0x0);
                        pDVar7 = (DG_Tweening_Core_DOGetter_float__o *)
                                 thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
                        DG_Tweening_Core_DOGetter<float>___ctor();
                        pDVar8 = (DG_Tweening_Core_DOSetter_float__o *)
                                 thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
                        DG_Tweening_Core_DOSetter<float>___ctor();
                        DG_Tweening_DOTween__To(pDVar7,pDVar8,1.0,0.2,(MethodInfo *)0x0);
                        if (pIVar1[1].monitor != (UnityEngine_Component_o *)0x0) {
                          pUVar9 = UnityEngine_Component__get_transform
                                             (pIVar1[1].monitor,(MethodInfo *)0x0);
                          if (DAT_0455fa7f == '\0') {
                            FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                            DAT_0455fa7f = '\x01';
                          }
                          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                            pUVar11 = UnityEngine_Vector3_TypeInfo->static_fields;
                            value.fields.z = (pUVar11->oneVector).fields.z * 1.1;
                            value.fields.y = (pUVar11->oneVector).fields.y * 1.1;
                            value.fields.x = (pUVar11->oneVector).fields.x * 1.1;
                            UnityEngine_Transform__set_localScale(pUVar9,value,(MethodInfo *)0x0);
                            if (*ppvVar12 != (UnityEngine_Component_o *)0x0) {
                              pUVar9 = UnityEngine_Component__get_transform
                                                 (*ppvVar12,(MethodInfo *)0x0);
                              pDVar10 = DG_Tweening_ShortcutExtensions__DOScale
                                                  (pUVar9,1.0,0.2,(MethodInfo *)0x0);
                              pIVar1 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                                                 ((Il2CppObject *)pDVar10,9,
                                                  Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                                                 );
                              action = (DG_Tweening_TweenCallback_o *)
                                       thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                              DG_Tweening_TweenCallback___ctor();
                              DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                                        (pIVar1,action,
                                         Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                                        );
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


// ===== private IEnumerator IEJBEKPANNP(int NFIGEAOPJKM, float NDPMILBBAPD)  [RVA 0x324E738]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$IEJBEKPANNP @ RVA 0x324E738

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__IEJBEKPANNP
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,int32_t NFIGEAOPJKM,
          float NDPMILBBAPD,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04567117 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK_TypeInfo);
    DAT_04567117 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  *(int32_t *)&__this_00[2].monitor = NFIGEAOPJKM;
  *(float *)((long)&__this_00[2].monitor + 4) = NDPMILBBAPD;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void OpenControlsInfo()  [RVA 0x324F1DC]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$OpenControlsInfo @ RVA 0x324F1DC

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__OpenControlsInfo
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this_00;
  
  __this_00 = (__this->fields).NOJAHBHFOJL;
  if (__this_00 != (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *)0x0) {
    Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BEBGOPNMHON(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x324F1F8]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$BEBGOPNMHON @ RVA 0x324F1F8

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__BEBGOPNMHON
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GeneralMenuList__o *__this_00;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this_01;
  
  if ((DAT_04567118 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__,NAIJBCMHBFK,
                 OPHMGAKOJLP);
    DAT_04567118 = 1;
  }
  __this_00 = (__this->fields).menuList;
  if (__this_00 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (__this->fields).AIAODGKGPEI,
                           Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    bVar1 = DANCCJHADOA__NBEOBEKPHMN(AAJGEHHPMGH,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    bVar1 = DANCCJHADOA__MBCGIMNBKAB(AAJGEHHPMGH,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_01 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)0x0) {
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelecUpItem(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      bVar1 = DANCCJHADOA__OCGAEMGAAOJ(AAJGEHHPMGH,(MethodInfo *)0x0);
      if (__this_01 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)0x0) {
        if (bVar1) {
          Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelecDownItem(__this_01,(MethodInfo *)0x0);
          return;
        }
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__CallIndex
                  (__this_01,(__this_01->fields).selection,AAJGEHHPMGH,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PlayVideo(string MAFHEJCDJLH)  [RVA 0x324F2D4]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$PlayVideo @ RVA 0x324F2D4

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__PlayVideo
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,System_String_o *MAFHEJCDJLH,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Object_o *pUVar3;
  System_String_o *pSVar4;
  System_Action_o *EBIHGBKNHMF;
  UnityEngine_Video_VideoClip_o *pUVar5;
  VideoPlayerController_o *pVVar6;
  
  if ((DAT_04567119 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_LGJMONMLEFH__);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567119 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0334f508;
  if (*(char *)&pIVar2[2].klass == '\0') {
    return;
  }
  if (DAT_04566bb5 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo);
    DAT_04566bb5 = '\x01';
  }
  pVVar6 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pVVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  VideoPlayerController__Create((MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._intro;
  if (pUVar3 == (UnityEngine_Object_o *)0x0) goto LAB_0334f508;
  pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(MAFHEJCDJLH,pSVar4,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar5 = (__this->fields)._intro;
LAB_0334f464:
    (__this->fields).CPAKIIJDJMK = pUVar5;
    thunk_FUN_01c20e04();
  }
  else {
    pUVar3 = (UnityEngine_Object_o *)(__this->fields)._gates;
    if (pUVar3 == (UnityEngine_Object_o *)0x0) goto LAB_0334f508;
    pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(MAFHEJCDJLH,pSVar4,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar5 = (__this->fields)._gates;
      goto LAB_0334f464;
    }
    pUVar3 = (UnityEngine_Object_o *)(__this->fields)._titan;
    if (pUVar3 == (UnityEngine_Object_o *)0x0) goto LAB_0334f508;
    pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(MAFHEJCDJLH,pSVar4,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar5 = (__this->fields)._titan;
      goto LAB_0334f464;
    }
  }
  if (DAT_04566bb5 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo);
    DAT_04566bb5 = '\x01';
  }
  pVVar6 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
  pSVar4 = System_String__Format
                     ((__this->fields)._videoPath,(Il2CppObject *)MAFHEJCDJLH,(MethodInfo *)0x0);
  pUVar5 = (__this->fields).CPAKIIJDJMK;
  EBIHGBKNHMF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pVVar6 != (VideoPlayerController_o *)0x0) {
    VideoPlayerController__Play(pVVar6,pSVar4,pUVar5,EBIHGBKNHMF,(MethodInfo *)0x0);
    return;
  }
LAB_0334f508:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator ANICGJMJLNE(float NDPMILBBAPD)  [RVA 0x324F50C]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$ANICGJMJLNE @ RVA 0x324F50C

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__ANICGJMJLNE
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,float NDPMILBBAPD,MethodInfo *method
          )

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456711a & 1) == 0) {
                    /* try { // try from 0334f534 to 0344f783 has its CatchHandler @ 0334f534
                       catch() { ... } // from try @ 0334f534 with catch @ 0334f534
                       catch() { ... } // from try @ 0334f8c4 with catch @ 0334f534
                       catch() { ... } // from try @ 0334fa1c with catch @ 0334f534
                       catch() { ... } // from try @ 0334fbbc with catch @ 0334f534
                       catch() { ... } // from try @ 0334fc80 with catch @ 0334f534
                       catch() { ... } // from try @ 0334fc90 with catch @ 0334f534
                       catch() { ... } // from try @ 0334fd44 with catch @ 0334f534
                       catch() { ... } // from try @ 0334fdf8 with catch @ 0334f534
                       catch() { ... } // from try @ 0334fe44 with catch @ 0334f534
                       catch() { ... } // from try @ 0334fee0 with catch @ 0334f534 */
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF_TypeInfo);
    DAT_0456711a = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF_TypeInfo,
                                 method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  *(float *)&__this_00[2].monitor = NDPMILBBAPD;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void EnterSectionAnimation()  [RVA 0x324F5B0]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$EnterSectionAnimation @ RVA 0x324F5B0

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__EnterSectionAnimation
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_Generic_List_GeneralMenuList__o *pSVar1;
  UnityEngine_Component_o *pUVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  DG_Tweening_Core_DOGetter_float__o *pDVar6;
  DG_Tweening_Core_DOSetter_float__o *pDVar7;
  UnityEngine_Transform_o *pUVar8;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_StaticFields *pUVar9;
  void **ppvVar10;
  Il2CppObject *pIVar11;
  UnityEngine_Vector3_o value;
  
  if ((DAT_0456711b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_FDIGBCFEHLG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_EDMBLFFJOFC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_FJBEHIMBKEE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_HHHKPFDFBIF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_JCCLIDGKNBK__);
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_0456711b = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_TypeInfo,
                                 method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).menuList;
  if (pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    pUVar2 = (UnityEngine_Component_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,
                        (__this->fields).FFPCEMDJGIK,
                        Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    if (pUVar2 != (UnityEngine_Component_o *)0x0) {
      pIVar3 = (Il2CppClass *)
               UnityEngine_Component__GetComponent<object>
                         (pUVar2,Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
      if (__this_00 != (Il2CppObject *)0x0) {
        pIVar11 = __this_00 + 1;
        pIVar11->klass = pIVar3;
        thunk_FUN_01c20e04(pIVar11,pIVar3);
        pSVar1 = (__this->fields).menuList;
        if ((pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
           (pUVar2 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,
                                (__this->fields).AIAODGKGPEI,
                                Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__),
           pUVar2 != (UnityEngine_Component_o *)0x0)) {
          pIVar4 = UnityEngine_Component__GetComponent<object>
                             (pUVar2,Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
          ppvVar10 = &__this_00[1].monitor;
          *ppvVar10 = pIVar4;
          thunk_FUN_01c20e04(ppvVar10,pIVar4);
          pSVar1 = (__this->fields).menuList;
          if ((pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
             ((pUVar2 = (UnityEngine_Component_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar1,
                                   (__this->fields).FFPCEMDJGIK,
                                   Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__
                                  ), pUVar2 != (UnityEngine_Component_o *)0x0 &&
              (pUVar5 = UnityEngine_Component__get_gameObject(pUVar2,(MethodInfo *)0x0),
              pUVar5 != (UnityEngine_GameObject_o *)0x0)))) {
            UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
            pSVar1 = (__this->fields).menuList;
            if ((pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
               ((pUVar2 = (UnityEngine_Component_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar1,
                                     (__this->fields).AIAODGKGPEI,
                                     Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__
                                    ), pUVar2 != (UnityEngine_Component_o *)0x0 &&
                (pUVar5 = UnityEngine_Component__get_gameObject(pUVar2,(MethodInfo *)0x0),
                pUVar5 != (UnityEngine_GameObject_o *)0x0)))) {
              UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
              if (pIVar11->klass != (Il2CppClass *)0x0) {
                    /* try { // try from 0334f784 to 0344f7ab has its CatchHandler @ 0334fe44 */
                UnityEngine_CanvasGroup__set_alpha
                          ((UnityEngine_CanvasGroup_o *)pIVar11->klass,1.0,(MethodInfo *)0x0);
                pDVar6 = (DG_Tweening_Core_DOGetter_float__o *)
                         thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
                DG_Tweening_Core_DOGetter<float>___ctor();
                pDVar7 = (DG_Tweening_Core_DOSetter_float__o *)
                         thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
                    /* try { // try from 0334f7e0 to 0344f82b has its CatchHandler @ 0334fe4c */
                DG_Tweening_Core_DOSetter<float>___ctor();
                if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                DG_Tweening_DOTween__To(pDVar6,pDVar7,0.0,0.2,(MethodInfo *)0x0);
                if (pIVar11->klass != (Il2CppClass *)0x0) {
                  pUVar8 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pIVar11->klass,(MethodInfo *)0x0);
                    /* try { // try from 0334f830 to 0344f837 has its CatchHandler @ 0334fdbc */
                  if (DAT_0455fa7f == '\0') {
                    /* try { // try from 0334f83c to 0344f847 has its CatchHandler @ 0334fdc8 */
                    FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                    DAT_0455fa7f = '\x01';
                  }
                  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 0334f864 to 0344f86f has its CatchHandler @ 0334fdb4 */
                    UnityEngine_Transform__set_localScale
                              (pUVar8,(UnityEngine_Vector3_o)
                                      (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).
                                      fields,(MethodInfo *)0x0);
                    if (pIVar11->klass != (Il2CppClass *)0x0) {
                    /* try { // try from 0334f87c to 0344f887 has its CatchHandler @ 0334fdb8 */
                      pUVar8 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)pIVar11->klass,
                                          (MethodInfo *)0x0);
                    /* try { // try from 0334f890 to 0344f89f has its CatchHandler @ 0334fda0 */
                      DG_Tweening_ShortcutExtensions__DOScale(pUVar8,1.1,0.2,(MethodInfo *)0x0);
                      if (*ppvVar10 != (UnityEngine_CanvasGroup_o *)0x0) {
                    /* try { // try from 0334f8a4 to 0344f8af has its CatchHandler @ 0334fdb0 */
                    /* try { // try from 0334f8b8 to 0344f8c3 has its CatchHandler @ 0334fda4 */
                        UnityEngine_CanvasGroup__set_alpha(*ppvVar10,0.0,(MethodInfo *)0x0);
                        pDVar6 = (DG_Tweening_Core_DOGetter_float__o *)
                                 thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
                    /* try { // try from 0334f8c4 to 0344f9db has its CatchHandler @ 0334f534 */
                        DG_Tweening_Core_DOGetter<float>___ctor();
                        pDVar7 = (DG_Tweening_Core_DOSetter_float__o *)
                                 thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
                        DG_Tweening_Core_DOSetter<float>___ctor();
                        DG_Tweening_DOTween__To(pDVar6,pDVar7,1.0,0.2,(MethodInfo *)0x0);
                        if (__this_00[1].monitor != (UnityEngine_Component_o *)0x0) {
                          pUVar8 = UnityEngine_Component__get_transform
                                             (__this_00[1].monitor,(MethodInfo *)0x0);
                          if (DAT_0455fa7f == '\0') {
                            FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                            DAT_0455fa7f = '\x01';
                          }
                          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                            pUVar9 = UnityEngine_Vector3_TypeInfo->static_fields;
                            value.fields.z = (pUVar9->oneVector).fields.z * 0.8;
                            value.fields.y = (pUVar9->oneVector).fields.y * 0.8;
                            value.fields.x = (pUVar9->oneVector).fields.x * 0.8;
                            UnityEngine_Transform__set_localScale(pUVar8,value,(MethodInfo *)0x0);
                            if (*ppvVar10 != (UnityEngine_Component_o *)0x0) {
                              pUVar8 = UnityEngine_Component__get_transform
                                                 (*ppvVar10,(MethodInfo *)0x0);
                              t = DG_Tweening_ShortcutExtensions__DOScale
                                            (pUVar8,1.0,0.2,(MethodInfo *)0x0);
                              action = (DG_Tweening_TweenCallback_o *)
                                       thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                              DG_Tweening_TweenCallback___ctor();
                    /* try { // try from 0334f9dc to 0344f9e3 has its CatchHandler @ 0334fdcc */
                    /* try { // try from 0334f9ec to 0344f9f3 has its CatchHandler @ 0334fa2c */
                              DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                                        ((Il2CppObject *)t,action,
                                         Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                                        );
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


// ===== public void ShowCredits()  [RVA 0x324FA00]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$ShowCredits @ RVA 0x324FA00

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__ShowCredits
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *PKKMGBOIDJD;
  System_Action_o *CONGNMGDFPP;
  OCOAGJDCJPL_o *__this_00;
  
                    /* try { // try from 0334fa00 to 0344fa0b has its CatchHandler @ 0334fa20 */
                    /* try { // try from 0334fa10 to 0344fa13 has its CatchHandler @ 0334fa28 */
                    /* try { // try from 0334fa18 to 0344fa1b has its CatchHandler @ 0334fa24 */
  if ((DAT_0456711c & 1) == 0) {
                    /* try { // try from 0334fa1c to 0344fa43 has its CatchHandler @ 0334f534 */
                    /* catch() { ... } // from try @ 0334fa00 with catch @ 0334fa20 */
                    /* catch() { ... } // from try @ 0334fa18 with catch @ 0334fa24 */
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                    /* catch() { ... } // from try @ 0334fa10 with catch @ 0334fa28 */
                    /* catch() { ... } // from try @ 0334f9ec with catch @ 0334fa2c */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
                    /* try { // try from 0334fa44 to 0344fa5f has its CatchHandler @ 0334fd0c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_GBJHCGNMCGE__);
    DAT_0456711c = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar1->fields).KIHMKIEFOEI;
                    /* try { // try from 0334fa78 to 0344fa7b has its CatchHandler @ 0334fd84 */
                    /* try { // try from 0334fa7c to 0344fa8f has its CatchHandler @ 0334fd08 */
    PKKMGBOIDJD = (System_Action_T0__T1__T2__o *)
                  thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                    /* try { // try from 0334fa98 to 0344fabb has its CatchHandler @ 0334fd78 */
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,PKKMGBOIDJD,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
      CONGNMGDFPP = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0334fad8 to 0344fadf has its CatchHandler @ 0334fd74 */
                    /* try { // try from 0334fae0 to 0344fb07 has its CatchHandler @ 0334fd70 */
      System_Action___ctor();
      Nekki_SF2_GUI_Common_Credits_CreditsScreen__Create(CONGNMGDFPP,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowPvp()  [RVA 0x324FB00]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$ShowPvp @ RVA 0x324FB00

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__ShowPvp
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
                    /* try { // try from 0334fb0c to 0344fb13 has its CatchHandler @ 0334fd5c */
  if ((DAT_0456711d & 1) == 0) {
                    /* try { // try from 0334fb20 to 0344fb4b has its CatchHandler @ 0334fd58 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456711d = 1;
  }
  if ((__this->fields).PDNOIJPIOLD != (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* try { // try from 0334fb4c to 0344fb6f has its CatchHandler @ 0334fd54 */
  pSVar4 = Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__ANICGJMJLNE(__this,0.12,method_00);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = pPVar3->klass;
  ppSVar1 = &(__this->fields).PDNOIJPIOLD;
  uVar2._0_1_ = (pPVar6->_2).rank;
  uVar2._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar2;
  if (uVar7 != 0) {
                    /* try { // try from 0334fb80 to 0344fb9f has its CatchHandler @ 0334fd50 */
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 0334fbb0 to 0344fbbb has its CatchHandler @ 0334fd48 */
        pVVar5 = pPVar6->vtable + *piVar8;
        goto LAB_0334fbbc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* try { // try from 0334fba0 to 0344fbaf has its CatchHandler @ 0334fd4c */
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_0334fbbc:
                    /* try { // try from 0334fbbc to 0344fc67 has its CatchHandler @ 0334f534 */
  pSVar4 = (System_Collections_IEnumerator_o *)(*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
  *ppSVar1 = pSVar4;
  thunk_FUN_01c20e04(ppSVar1,pSVar4);
  return;
}


// ===== private void IBFINJEFBBJ(int DDFFFGBFMDM)  [RVA 0x324FBEC]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$IBFINJEFBBJ @ RVA 0x324FBEC

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__IBFINJEFBBJ
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,int32_t DDFFFGBFMDM,
               MethodInfo *method)

{
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  System_String_o *pSVar1;
  int32_t local_24;
  
  local_24 = DDFFFGBFMDM;
  if ((DAT_0456711e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_14782/*"Vibration setting changed: "*/);
    DAT_0456711e = 1;
  }
  EDFDANKEBGF__JGKCFCJLDKJ((MethodInfo *)0x0);
  HFNDCHDFFKO__HOEAAIJMFEC((uint8_t)DDFFFGBFMDM,(MethodInfo *)0x0);
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (DAT_04567181 == '\0') {
    FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
                    /* try { // try from 0334fc68 to 0344fc6b has its CatchHandler @ 0334fdc4 */
    DAT_04567181 = '\x01';
  }
                    /* try { // try from 0334fc6c to 0344fc73 has its CatchHandler @ 0334fe48 */
  if (__this_00 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
                    /* try { // try from 0334fc74 to 0344fc77 has its CatchHandler @ 0334fdc0 */
                    /* try { // try from 0334fc78 to 0344fc7b has its CatchHandler @ 0334fdac */
                    /* try { // try from 0334fc7c to 0344fc7f has its CatchHandler @ 0334fda8 */
                    /* try { // try from 0334fc80 to 0344fc8b has its CatchHandler @ 0334f534 */
                    /* try { // try from 0334fc8c to 0344fc8f has its CatchHandler @ 0334fd9c */
                    /* try { // try from 0334fc90 to 0344fcaf has its CatchHandler @ 0334f534 */
    Nekki_SF2_Core_InputControllers_GamePadController__VibrateAllDevices
              (__this_00,
               (GCAKLDNBADP_o)
               (MEFNOMDAJBF_TypeInfo->static_fields->_PPNPLFEPMNM_k__BackingField).fields,
               (MethodInfo *)0x0);
    pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
                    /* try { // try from 0334fcb0 to 0344fcbf has its CatchHandler @ 0334fd38 */
    pSVar1 = System_String__Concat(StringLiteral_14782/*"Vibration setting changed: "*/,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 0334fcc4 to 0344fccf has its CatchHandler @ 0334fd90 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0334fcd4 to 0344fcd7 has its CatchHandler @ 0334fd34 */
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
                    /* try { // try from 0334fcdc to 0344fcdf has its CatchHandler @ 0334fd30 */
                    /* try { // try from 0334fce4 to 0344fce7 has its CatchHandler @ 0334fd2c */
    UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 0334fcec to 0344fcef has its CatchHandler @ 0334fd24 */
                    /* try { // try from 0334fcf4 to 0344fcf7 has its CatchHandler @ 0334fd20 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FDIGBCFEHLG()  [RVA 0x324E384]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$FDIGBCFEHLG @ RVA 0x324E384

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__FDIGBCFEHLG
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GeneralMenuList__o *pSVar1;
  UnityEngine_Component_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if ((DAT_0456711f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    DAT_0456711f = 1;
  }
  pSVar1 = (__this->fields).menuList;
  if (pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    pUVar2 = (UnityEngine_Component_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,
                        (__this->fields).FFPCEMDJGIK,
                        Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    if ((pUVar2 != (UnityEngine_Component_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject(pUVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).menuList;
      if ((pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
         ((pUVar2 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar1,
                               (__this->fields).AIAODGKGPEI,
                               Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__),
          pUVar2 != (UnityEngine_Component_o *)0x0 &&
          (pUVar3 = UnityEngine_Component__get_gameObject(pUVar2,(MethodInfo *)0x0),
          pUVar3 != (UnityEngine_GameObject_o *)0x0)))) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PEPJDDDKFMF(bool HPACPFLKHPK)  [RVA 0x324FCFC]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$PEPJDDDKFMF @ RVA 0x324FCFC

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__PEPJDDDKFMF
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,bool HPACPFLKHPK,
               MethodInfo *method)

{
                    /* try { // try from 0334fcfc to 0344fcff has its CatchHandler @ 0334fd1c */
  (__this->fields).FBFKCBHMMAC = (System_Collections_IEnumerator_o *)0x0;
                    /* try { // try from 0334fd04 to 0344fd07 has its CatchHandler @ 0334fd18 */
                    /* catch() { ... } // from try @ 0334fa7c with catch @ 0334fd08 */
                    /* catch() { ... } // from try @ 0334fa44 with catch @ 0334fd0c */
  thunk_FUN_01c20e04(&(__this->fields).FBFKCBHMMAC,0);
  return;
}


// ===== private void LGJMONMLEFH()  [RVA 0x324FD10]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$LGJMONMLEFH @ RVA 0x324FD10

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LGJMONMLEFH
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  VideoPlayerController__Destroy((MethodInfo *)0x0);
  return;
}


// ===== public void LoadSection(JIAOLFMAECH BACJDPMBFFE)  [RVA 0x324E178]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$LoadSection @ RVA 0x324E178

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LoadSection
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,int32_t BACJDPMBFFE,
               MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  NLPJLHOEAOE_o *__this_02;
  System_Collections_Generic_List_GeneralMenuList__o *pSVar4;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this_03;
  Il2CppObject *pIVar5;
  System_Enum_o local_58;
  int32_t local_48;
  
                    /* try { // try from 0334e184 to 0344e1d7 has its CatchHandler @ 0334e00c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334e170 with catch @ 0334e1b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334e0f4 with catch @ 0334e1b4
                        */
  if ((DAT_04567120 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334e140 with catch @ 0334e1b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334e0c4 with catch @ 0334e1bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334e150 with catch @ 0334e1c0
                        */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&JIAOLFMAECH_TypeInfo);
                    /* try { // try from 0334e1d8 to 0344e1db has its CatchHandler @ 0334e1fc */
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
                    /* try { // try from 0334e1dc to 0344e203 has its CatchHandler @ 0334e00c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8564/*"LoadSection "*/);
    DAT_04567120 = 1;
  }
                    /* catch() { ... } // from try @ 0334e1d8 with catch @ 0334e1fc */
  local_58.klass = (System_Enum_c *)JIAOLFMAECH_TypeInfo;
                    /* try { // try from 0334e204 to 0344e217 has its CatchHandler @ 0334e278 */
  local_58.monitor = (void *)0xffffffffffffffff;
  local_48 = BACJDPMBFFE;
  pSVar3 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334e0d4 with catch @ 0334e218
                       try { // try from 0334e218 to 0344e22f has its CatchHandler @ 0334e00c */
  pSVar3 = System_String__Concat(StringLiteral_8564/*"LoadSection "*/,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0334e230 to 0344e233 has its CatchHandler @ 0334e254 */
                    /* try { // try from 0334e234 to 0344e25b has its CatchHandler @ 0334e00c */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  iVar1 = (__this->fields).AIAODGKGPEI;
                    /* catch() { ... } // from try @ 0334e230 with catch @ 0334e254 */
  (__this->fields).AIAODGKGPEI = BACJDPMBFFE;
  (__this->fields).FFPCEMDJGIK = iVar1;
                    /* try { // try from 0334e25c to 0344e263 has its CatchHandler @ 0334e278 */
  if (BACJDPMBFFE == 0) {
    __this_00 = (__this->fields).continueButton;
                    /* try { // try from 0334e264 to 0344e26f has its CatchHandler @ 0334e00c */
    if (__this_00 == (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)0x0) goto LAB_0334e380;
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0334e270 to 0344e277 has its CatchHandler @ 0334e278 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0334e204 with catch @ 0334e278
                       catch(type#2 @ 00000000) { ... } // from try @ 0334e25c with catch @ 0334e278
                       catch(type#2 @ 00000000) { ... } // from try @ 0334e270 with catch @ 0334e278
                        */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    __this_02 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_02 == (NLPJLHOEAOE_o *)0x0) goto LAB_0334e380;
    bVar2 = NLPJLHOEAOE__LHOFBEBHPDE(__this_02,(MethodInfo *)0x0);
    if (bVar2) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_0456647b == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_0456647b = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO != -1;
    }
    else {
      bVar2 = false;
    }
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_0334e380;
    UnityEngine_GameObject__SetActive(__this_01,bVar2,(MethodInfo *)0x0);
  }
  pSVar4 = (__this->fields).menuList;
  if (pSVar4 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    __this_03 = (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar4,
                           (__this->fields).AIAODGKGPEI,
                           Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    pSVar4 = (__this->fields).menuList;
    if (((pSVar4 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
        (pIVar5 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar4,
                             (__this->fields).AIAODGKGPEI,
                             Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__),
        pIVar5 != (Il2CppObject *)0x0)) &&
       (__this_03 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)0x0)) {
      Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelectItemAt
                (__this_03,*(int32_t *)&pIVar5[3].klass,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0334e380:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override DBMPKPJGIPI get_SceneId()  [RVA 0x324FD18]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$get_SceneId @ RVA 0x324FD18

int32_t Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__get_SceneId
                  (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0334fd04 with catch @ 0334fd18 */
                    /* catch() { ... } // from try @ 0334fcfc with catch @ 0334fd1c */
  return 8;
}


// ===== private void JMKOPHMLNFF(float CJNHFNHJHPE)  [RVA 0x324FD20]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$JMKOPHMLNFF @ RVA 0x324FD20

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__JMKOPHMLNFF
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0334fcf4 with catch @ 0334fd20 */
                    /* catch() { ... } // from try @ 0334fcec with catch @ 0334fd24 */
                    /* catch() { ... } // from try @ 0334fce4 with catch @ 0334fd2c */
                    /* catch() { ... } // from try @ 0334fcdc with catch @ 0334fd30 */
  EDFDANKEBGF__JGKCFCJLDKJ((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0334fcd4 with catch @ 0334fd34 */
                    /* catch() { ... } // from try @ 0334fcb0 with catch @ 0334fd38 */
                    /* try { // try from 0334fd40 to 0344fd43 has its CatchHandler @ 0334fef4 */
                    /* try { // try from 0334fd44 to 0344fdf3 has its CatchHandler @ 0334f534 */
  MFIKGMIDDIG__ICHPKMALDCH(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

