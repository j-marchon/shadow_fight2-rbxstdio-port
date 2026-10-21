// TypeDefIndex 23
// Namespace: 
// [CompilerGenerated]
// private sealed class LoaderScreen.DJDIBKHLMKE : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public LoaderScreen <>4__this; // 0x20
//   private int <loadingScene>5__2; // 0x28
//   private AsyncOperation <load>5__3; // 0x30
//   private bool <playSound>5__4; // 0x38

// ===== public void .ctor(int <>1__state)  [RVA 0x2FF3C7C]
// Nekki.SF2.GUI.Scenes.LoaderScreen.DJDIBKHLMKE$$.ctor @ RVA 0x2FF3C7C

void Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE___ctor
               (Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x2FF5780]
// Nekki.SF2.GUI.Scenes.LoaderScreen.DJDIBKHLMKE$$System.IDisposable.Dispose @ RVA 0x2FF5780

void Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x2FF5784]
// Nekki.SF2.GUI.Scenes.LoaderScreen.DJDIBKHLMKE$$MoveNext @ RVA 0x2FF5784

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE__MoveNext
               (Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE_o *__this,MethodInfo *method)

{
  PJKHAJKEHEL_o *KCHOEJOHIMM;
  uint uVar1;
  byte bVar2;
  AFFHKININGD_c *pAVar3;
  bool bVar4;
  UnityEngine_AsyncOperation_o *pUVar5;
  Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this_00;
  NDPMLPGANCI_o *pNVar6;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar7;
  PJKHAJKEHEL_o *JEDELFOBLEN;
  long lVar8;
  Il2CppObject *pIVar9;
  System_Type_o *pSVar10;
  System_String_o *str1;
  System_String_o *pSVar11;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_02;
  MethodInfo *method_03;
  int32_t iVar12;
  Nekki_SF2_GUI_Scenes_LoaderScreen_StaticFields *pNVar13;
  GLINEGMOOBM_o *pGVar14;
  AFFHKININGD_o *pAVar15;
  Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this_01;
  Il2CppObject **ppIVar16;
  UnityEngine_Object_o *pUVar17;
  AFFHKININGD_o **ppAVar18;
  AFFHKININGD_o *pAVar19;
  CMAACCOMHBJ_o *pCVar20;
  System_Enum_o local_58;
  int32_t local_48;
  
  if ((DAT_04565a9d & 1) == 0) {
    FUN_01bab630(&AFFHKININGD_TypeInfo);
    FUN_01bab630(&DBMPKPJGIPI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    FUN_01bab630(&StringLiteral_8571/*"LoaderSScene::LoadLevelFight:\nseems Module.Instance.ScreenInfo.Data as FightList corrupted, possibly other GotoModul..."*/);
    FUN_01bab630(&StringLiteral_9316/*"NULL"*/);
    FUN_01bab630(&StringLiteral_8573/*"LoaderScene::LoadLevelFight: scene: "*/);
    DAT_04565a9d = 1;
    method = extraout_x1;
  }
  uVar1 = (__this->fields).__1__state;
  if (7 < uVar1) {
    return false;
  }
  __this_01 = (__this->fields).__4__this;
  switch(uVar1) {
  case 0:
    (__this->fields).__1__state = -1;
    if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar13 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields;
    (__this->fields)._loadingScene_5__2 = pNVar13->BJFGHDKLEKH;
    local_58.klass = (System_Enum_c *)DBMPKPJGIPI_TypeInfo;
    local_58.monitor = (void *)0xffffffffffffffff;
    local_48 = pNVar13->BJFGHDKLEKH;
    pSVar11 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
    pSVar11 = System_String__Concat(StringLiteral_8573/*"LoaderScene::LoadLevelFight: scene: "*/,pSVar11,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)0x0) {
      pIVar9 = (Il2CppObject *)Nekki_SF2_GUI_Scenes_LoaderScreen__IJCLAIMBHLE(__this_00,method_00);
      ppIVar16 = &(__this->fields).__2__current;
      *ppIVar16 = pIVar9;
      thunk_FUN_01c20e04(ppIVar16,pIVar9);
      (__this->fields).__1__state = 1;
      return true;
    }
    goto LAB_030f5ee4;
  case 1:
    (__this->fields).__1__state = -1;
    pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    pAVar3 = AFFHKININGD_TypeInfo;
    if (((pNVar6 == (NDPMLPGANCI_o *)0x0) ||
        (pGVar14 = (pNVar6->fields).KLPOKEJLDHG, pGVar14 == (GLINEGMOOBM_o *)0x0)) ||
       (__this_01 == (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)0x0)) goto LAB_030f5ee4;
    pAVar19 = (AFFHKININGD_o *)(pGVar14->fields).KOANCCDDBDA;
    if (pAVar19 == (AFFHKININGD_o *)0x0) {
      pAVar19 = (AFFHKININGD_o *)0x0;
      (__this_01->fields).FMPFMKFODMP = (AFFHKININGD_o *)0x0;
    }
    else {
      bVar2 = (AFFHKININGD_TypeInfo->_2).naturalAligment;
      if ((((Il2CppClass *)pAVar19->klass)->_2).naturalAligment < bVar2) {
        pAVar15 = (AFFHKININGD_o *)0x0;
      }
      else {
        pAVar15 = pAVar19;
        if ((((Il2CppClass *)pAVar19->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)AFFHKININGD_TypeInfo) {
          pAVar15 = (AFFHKININGD_o *)0x0;
        }
      }
                    /* try { // try from 030f5d0c to 031f5d0f has its CatchHandler @ 030f5f4c */
      (__this_01->fields).FMPFMKFODMP = pAVar15;
                    /* try { // try from 030f5d10 to 031f5d1f has its CatchHandler @ 030f5f54 */
      if ((((Il2CppClass *)pAVar19->klass)->_2).naturalAligment < bVar2) {
        pAVar19 = (AFFHKININGD_o *)0x0;
      }
      else {
                    /* try { // try from 030f5d38 to 031f5d3b has its CatchHandler @ 030f5f44 */
        if ((((Il2CppClass *)pAVar19->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)pAVar3) {
          pAVar19 = (AFFHKININGD_o *)0x0;
        }
      }
    }
    ppAVar18 = &(__this_01->fields).FMPFMKFODMP;
    thunk_FUN_01c20e04(ppAVar18,pAVar19);
    if (*ppAVar18 != (AFFHKININGD_o *)0x0) {
      iVar12 = (__this->fields)._loadingScene_5__2;
      if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 030f5d68 to 031f5d6f has its CatchHandler @ 030f5f58 */
      pUVar5 = UnityEngine_SceneManagement_SceneManager__LoadSceneAsync(iVar12,1,(MethodInfo *)0x0);
      (__this->fields)._load_5__3 = pUVar5;
      thunk_FUN_01c20e04();
      ppIVar16 = &(__this->fields).__2__current;
      *ppIVar16 = (Il2CppObject *)0x0;
                    /* try { // try from 030f5d94 to 031f5d97 has its CatchHandler @ 030f5f40 */
                    /* try { // try from 030f5d98 to 031f5da7 has its CatchHandler @ 030f5f48 */
      thunk_FUN_01c20e04(ppIVar16,0);
      (__this->fields).__1__state = 2;
      return true;
    }
    pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    pSVar11 = StringLiteral_8571/*"LoaderSScene::LoadLevelFight:\nseems Module.Instance.ScreenInfo.Data as FightList corrupted, possibly other GotoModul..."*/;
    if ((pNVar6 == (NDPMLPGANCI_o *)0x0) ||
       (pGVar14 = (pNVar6->fields).KLPOKEJLDHG, pGVar14 == (GLINEGMOOBM_o *)0x0)) goto LAB_030f5ee4;
                    /* try { // try from 030f5dc0 to 031f5e17 has its CatchHandler @ 030f5f58 */
    str1 = StringLiteral_9316/*"NULL"*/;
    if ((pGVar14->fields).KOANCCDDBDA != (Il2CppObject *)0x0) {
      pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (((pNVar6 == (NDPMLPGANCI_o *)0x0) ||
          (pGVar14 = (pNVar6->fields).KLPOKEJLDHG, pGVar14 == (GLINEGMOOBM_o *)0x0)) ||
         ((pIVar9 = (pGVar14->fields).KOANCCDDBDA, pIVar9 == (Il2CppObject *)0x0 ||
          (pSVar10 = System_Object__GetType(pIVar9,(MethodInfo *)0x0),
          pSVar10 == (System_Type_o *)0x0)))) goto LAB_030f5ee4;
      str1 = (System_String_o *)
             (*(pSVar10->klass->vtable)._3_ToString.methodPtr)
                       (pSVar10,(pSVar10->klass->vtable)._3_ToString.method);
    }
                    /* try { // try from 030f5e40 to 031f5f2f has its CatchHandler @ 030f5bb4 */
    pSVar11 = System_String__Concat(pSVar11,str1,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
    goto LAB_030f5e78;
  case 2:
    (__this->fields).__1__state = -1;
    if (__this_01 != (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)0x0) {
      pAVar19 = (__this_01->fields).FMPFMKFODMP;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__KADLADLLAHP
                (pAVar19,&(__this_01->fields).KCHOEJOHIMM,&(__this_01->fields).BGODEHNIMGC,
                 (MethodInfo *)0x0);
      pSVar7 = (__this_01->fields).BGODEHNIMGC;
      (__this_01->fields).AHAMOAJILMO = false;
      (__this_01->fields).IHEIBDOIGAE = false;
      if (pSVar7 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
        pAVar19 = (__this_01->fields).FMPFMKFODMP;
        KCHOEJOHIMM = (__this_01->fields).KCHOEJOHIMM;
        JEDELFOBLEN = (PJKHAJKEHEL_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar7,0,
                                 Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
        pSVar7 = (__this_01->fields).BGODEHNIMGC;
        pCVar20 = (__this_01->fields).FNCCNKDPDAB;
                    /* try { // try from 030f5a40 to 031f5a9f has its CatchHandler @ 030f5a40
                       catch() { ... } // from try @ 030f5a40 with catch @ 030f5a40
                       catch() { ... } // from try @ 030f5b10 with catch @ 030f5a40
                       catch() { ... } // from try @ 030f5b9c with catch @ 030f5a40 */
        if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo);
        }
        method_03 = (MethodInfo *)0x0;
        FCJBEKHDLAF__IBPFFBENEIN(pAVar19,KCHOEJOHIMM,JEDELFOBLEN,pSVar7,0,pCVar20,(MethodInfo *)0x0)
        ;
        (__this->fields)._playSound_5__4 = true;
        pCVar20 = (__this_01->fields).FNCCNKDPDAB;
        if ((pCVar20 != (CMAACCOMHBJ_o *)0x0) &&
           (pSVar7 = (pCVar20->fields).PNOOBNMLMAC,
           pSVar7 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0)) {
                    /* try { // try from 030f5aa0 to 031f5abf has its CatchHandler @ 030f5b5c */
          if (((pSVar7->fields)._size < 2) || ((pCVar20->fields).BLOEBCBBGBK == false)) {
            if ((pCVar20->fields).EOGKCNNHPFL == false) {
              (__this_01->fields).AHAMOAJILMO = true;
              (__this_01->fields).IHEIBDOIGAE = true;
            }
            else {
              (__this->fields)._playSound_5__4 = false;
              Nekki_SF2_GUI_Scenes_LoaderScreen__ODFHMBHFNJB(__this_01,method_01);
              Nekki_SF2_GUI_Scenes_LoaderScreen__DKNNDNIGMIM(__this_01,method_02);
                    /* try { // try from 030f5cc8 to 031f5cd3 has its CatchHandler @ 030f5f5c */
            }
          }
          else {
            (__this->fields)._playSound_5__4 = false;
            Nekki_SF2_GUI_Scenes_LoaderScreen__ODFHMBHFNJB(__this_01,method_01);
            pCVar20 = (__this_01->fields).FNCCNKDPDAB;
            if (pCVar20 == (CMAACCOMHBJ_o *)0x0) goto LAB_030f5ee4;
            Nekki_SF2_GUI_Scenes_LoaderScreen__CreateEnemiesScreen
                      (__this_01,(pCVar20->fields).PNOOBNMLMAC,(pCVar20->fields).DHKKFLABKEF,
                       (pCVar20->fields).DIOPDIKJLCA,method_03);
                    /* try { // try from 030f5acc to 031f5acf has its CatchHandler @ 030f5b54 */
          }
          ppIVar16 = &(__this->fields).__2__current;
          *ppIVar16 = (Il2CppObject *)0x0;
          thunk_FUN_01c20e04(ppIVar16,0);
          iVar12 = 3;
          goto LAB_030f5e28;
        }
      }
    }
    goto LAB_030f5ee4;
  default:
    pUVar5 = (__this->fields)._load_5__3;
    (__this->fields).__1__state = -1;
    if (pUVar5 == (UnityEngine_AsyncOperation_o *)0x0) goto LAB_030f5ee4;
    bVar4 = UnityEngine_AsyncOperation__get_isDone(pUVar5,(MethodInfo *)0x0);
    if (!bVar4) {
      ppIVar16 = &(__this->fields).__2__current;
      *ppIVar16 = (Il2CppObject *)0x0;
      thunk_FUN_01c20e04(ppIVar16,0);
      iVar12 = 4;
      goto LAB_030f5e28;
    }
    break;
  case 5:
    (__this->fields).__1__state = -1;
    break;
  case 6:
    (__this->fields).__1__state = -1;
    if (__this_01 == (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)0x0) goto LAB_030f5ee4;
    goto LAB_030f5b08;
  case 7:
                    /* try { // try from 030f5b90 to 031f5b9b has its CatchHandler @ 030f5bb0 */
    (__this->fields).__1__state = -1;
    if (__this_01 == (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)0x0) goto LAB_030f5ee4;
    goto LAB_030f5c44;
  }
  if (__this_01 == (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)0x0) {
LAB_030f5ee4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((__this_01->fields).DIKILJAKEOG == false) {
    ppIVar16 = &(__this->fields).__2__current;
    *ppIVar16 = (Il2CppObject *)0x0;
                    /* try { // try from 030f5af0 to 031f5b0f has its CatchHandler @ 030f5b58 */
    thunk_FUN_01c20e04(ppIVar16,0);
    iVar12 = 5;
  }
  else {
LAB_030f5b08:
    if ((__this_01->fields).IHEIBDOIGAE != false) {
                    /* try { // try from 030f5b10 to 031f5b73 has its CatchHandler @ 030f5a40 */
      lVar8 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01b81620();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01b81620();
      }
      pUVar17 = (UnityEngine_Object_o *)**(undefined8 **)(lVar8 + 0xb8);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f5acc with catch @ 030f5b54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f5af0 with catch @ 030f5b58
                        */
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f5aa0 with catch @ 030f5b5c
                        */
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar4 = UnityEngine_Object__op_Equality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
      ;
                    /* try { // try from 030f5b74 to 031f5b77 has its CatchHandler @ 030f5b84 */
      if (!bVar4) {
        method = extraout_x1_00;
        if ((__this_01->fields).IHEIBDOIGAE != false) {
                    /* try { // try from 030f5ba8 to 031f5baf has its CatchHandler @ 030f5bb0 */
          lVar8 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f5b90 with catch @ 030f5bb0
                       catch(type#2 @ 00000000) { ... } // from try @ 030f5ba8 with catch @ 030f5bb0
                        */
                    /* try { // try from 030f5bb4 to 031f5c8b has its CatchHandler @ 030f5bb4
                       catch() { ... } // from try @ 030f5bb4 with catch @ 030f5bb4
                       catch() { ... } // from try @ 030f5e40 with catch @ 030f5bb4
                       catch() { ... } // from try @ 030f5f40 with catch @ 030f5bb4
                       catch() { ... } // from try @ 030f5fa4 with catch @ 030f5bb4 */
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01b81620();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01b81620();
          }
          pUVar17 = (UnityEngine_Object_o *)**(undefined8 **)(lVar8 + 0xb8);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            (pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          method = extraout_x1_01;
          if (bVar4) {
            lVar8 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_01b81620();
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_01b81620();
            }
            if ((Nekki_SF2_GUI_Fight_FightScene_o *)**(undefined8 **)(lVar8 + 0xb8) ==
                (Nekki_SF2_GUI_Fight_FightScene_o *)0x0) goto LAB_030f5ee4;
            Nekki_SF2_GUI_Fight_FightScene__CreateFight
                      ((Nekki_SF2_GUI_Fight_FightScene_o *)**(undefined8 **)(lVar8 + 0xb8),
                       (__this_01->fields).FMPFMKFODMP,(__this_01->fields).KCHOEJOHIMM,
                       (__this_01->fields).BGODEHNIMGC,(MethodInfo *)0x0);
            method = extraout_x1_02;
          }
        }
LAB_030f5c44:
        if ((__this_01->fields).AHAMOAJILMO != false) {
          if ((__this->fields)._playSound_5__4 != false) {
            Nekki_SF2_GUI_Scenes_LoaderScreen__ODFHMBHFNJB(__this_01,method);
            method = extraout_x1_03;
          }
          Nekki_SF2_GUI_Scenes_LoaderScreen__NEJJBIDOKGN(__this_01,method);
          lVar8 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01b81620();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
                    /* try { // try from 030f5c8c to 031f5cab has its CatchHandler @ 030f5f64 */
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01b81620();
          }
          if ((Nekki_SF2_GUI_Fight_FightScene_o *)**(undefined8 **)(lVar8 + 0xb8) !=
              (Nekki_SF2_GUI_Fight_FightScene_o *)0x0) {
            Nekki_SF2_GUI_Fight_FightScene__StartFight
                      ((Nekki_SF2_GUI_Fight_FightScene_o *)**(undefined8 **)(lVar8 + 0xb8),
                       (MethodInfo *)0x0);
LAB_030f5e78:
            if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_MonoBehaviour__StopCoroutine
                      ((UnityEngine_MonoBehaviour_o *)__this_01,
                       Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->KCOCLOFNJIG,
                       (MethodInfo *)0x0);
            Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->KCOCLOFNJIG =
                 (UnityEngine_Coroutine_o *)0x0;
            thunk_FUN_01c20e04(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields,0);
            return false;
          }
          goto LAB_030f5ee4;
        }
        ppIVar16 = &(__this->fields).__2__current;
        *ppIVar16 = (Il2CppObject *)0x0;
        thunk_FUN_01c20e04(ppIVar16,0);
        iVar12 = 7;
        goto LAB_030f5e28;
      }
    }
    ppIVar16 = &(__this->fields).__2__current;
    *ppIVar16 = (Il2CppObject *)0x0;
                    /* catch() { ... } // from try @ 030f5b74 with catch @ 030f5b84 */
    thunk_FUN_01c20e04(ppIVar16,0);
    iVar12 = 6;
  }
LAB_030f5e28:
  (__this->fields).__1__state = iVar12;
  return true;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x2FF5EE8]
// Nekki.SF2.GUI.Scenes.LoaderScreen.DJDIBKHLMKE$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x2FF5EE8

Il2CppObject *
Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x2FF5EF0]
// Nekki.SF2.GUI.Scenes.LoaderScreen.DJDIBKHLMKE$$System.Collections.IEnumerator.Reset @ RVA 0x2FF5EF0

void Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x2FF5F28]
// Nekki.SF2.GUI.Scenes.LoaderScreen.DJDIBKHLMKE$$System.Collections.IEnumerator.get_Current @ RVA 0x2FF5F28

Il2CppObject *
Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Scenes_LoaderScreen_DJDIBKHLMKE_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

