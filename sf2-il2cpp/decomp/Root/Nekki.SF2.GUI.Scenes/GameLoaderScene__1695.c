// TypeDefIndex 1695
// Namespace: Nekki.SF2.GUI.Scenes
// public class GameLoaderScene : Scene<GameLoaderScene>
// Fields:
//   private GameObject logo; // 0x90
//   private LockScreen _lockScreenPrefab; // 0x98
//   private LoaderScreen _loaderScreenPrefab; // 0xA0
//   private WideController loaderWideController; // 0xA8
//   private LabelButton _supportButton; // 0xB0
//   private static readonly string ILJEEJCKIHM; // 0x0
//   private static bool GKMKGHOCIPG; // 0x8
//   private IGFJINHNIBB ECJIJIFLMBK; // 0xB8

// ===== public void OnSupportButtonClicked()  [RVA 0x31D22B0]
// Nekki.SF2.GUI.Scenes.GameLoaderScene$$OnSupportButtonClicked @ RVA 0x31D22B0

void Nekki_SF2_GUI_Scenes_GameLoaderScene__OnSupportButtonClicked
               (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566cb4 & 1) == 0) {
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
    DAT_04566cb4 = 1;
    method = extraout_x1;
  }
  if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PFDCJGIIPLB_TypeInfo,method);
  }
  PFDCJGIIPLB__BKGENOHNNKM
            ((System_Collections_Generic_ICollection_string__o *)0x0,(MethodInfo *)0x0);
  return;
}


// ===== public void SetLogoEnabled(bool CJNHFNHJHPE)  [RVA 0x31D2304]
// Nekki.SF2.GUI.Scenes.GameLoaderScene$$SetLogoEnabled @ RVA 0x31D2304

void Nekki_SF2_GUI_Scenes_GameLoaderScene__SetLogoEnabled
               (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = (__this->fields).logo;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ(object IMMNELPBGIF)  [RVA 0x31D2324]
// Nekki.SF2.GUI.Scenes.GameLoaderScene$$GIENGNEGHPJ @ RVA 0x31D2324

void Nekki_SF2_GUI_Scenes_GameLoaderScene__GIENGNEGHPJ
               (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  Nekki_SF2_GUI_LockScreen_o *pNVar9;
  Nekki_SF2_GUI_Scenes_LoaderScreen_o *pNVar10;
  
  if ((DAT_04566cb5 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<LoaderScreen>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<LockScreen>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GameLoaderScene>_GIENGNEGHPJ__);
    DAT_04566cb5 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Scene_T__o *)__this,IMMNELPBGIF,
             Method_Nekki_SF2_GUI_Scene<GameLoaderScene>_GIENGNEGHPJ__);
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar4 = Nekki_SF2_GUI_Scenes_GameLoaderScene__CBIAIEJMKFO(__this,method_00);
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
          goto LAB_032d2428;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_032d2428:
    (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
    __this_00 = (__this->fields).logo;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      pNVar9 = (__this->fields)._lockScreenPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04566d6a == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
          DAT_04566d6a = '\x01';
        }
        if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar9 = Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          pNVar9 = (__this->fields)._lockScreenPrefab;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Object__Instantiate<object>
                    ((Il2CppObject *)pNVar9,Method_UnityEngine_Object_Instantiate<LockScreen>__);
        }
      }
      pNVar10 = (__this->fields)._loaderScreenPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_045624ed == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
          DAT_045624ed = '\x01';
        }
        if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar10 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->
                  _JPDNDPEAJAL_k__BackingField;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          pNVar10 = (__this->fields)._loaderScreenPrefab;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Object__Instantiate<object>
                    ((Il2CppObject *)pNVar10,Method_UnityEngine_Object_Instantiate<LoaderScreen>__);
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31D267C]
// Nekki.SF2.GUI.Scenes.GameLoaderScene$$.ctor @ RVA 0x31D267C

void Nekki_SF2_GUI_Scenes_GameLoaderScene___ctor
               (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *__this,MethodInfo *method)

{
  IGFJINHNIBB_o *__this_00;
  IGFJINHNIBB_o **ppIVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566cb6 & 1) == 0) {
    FUN_01bab630(&IGFJINHNIBB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GameLoaderScene>__ctor__);
    DAT_04566cb6 = 1;
    method = extraout_x1;
  }
  __this_00 = (IGFJINHNIBB_o *)thunk_FUN_01bda818(IGFJINHNIBB_TypeInfo,method);
  IGFJINHNIBB___ctor(__this_00,(MethodInfo *)0x0);
  ppIVar1 = &(__this->fields).ECJIJIFLMBK;
  *ppIVar1 = __this_00;
  thunk_FUN_01c20e04(ppIVar1,__this_00);
  Nekki_SF2_GUI_Scene<object>___ctor
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<GameLoaderScene>__ctor__)
  ;
  return;
}


// ===== private IEnumerator CBIAIEJMKFO()  [RVA 0x31D2610]
// Nekki.SF2.GUI.Scenes.GameLoaderScene$$CBIAIEJMKFO @ RVA 0x31D2610

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Scenes_GameLoaderScene__CBIAIEJMKFO
          (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566cb7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_GameLoaderScene_IEFKAMNCJDI_TypeInfo);
    DAT_04566cb7 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Scenes_GameLoaderScene_IEFKAMNCJDI_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void ResetLoadingModules()  [RVA 0x31D272C]
// Nekki.SF2.GUI.Scenes.GameLoaderScene$$ResetLoadingModules @ RVA 0x31D272C

void Nekki_SF2_GUI_Scenes_GameLoaderScene__ResetLoadingModules
               (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *__this,MethodInfo *method)

{
  IGFJINHNIBB_o *__this_00;
  
  __this_00 = (__this->fields).ECJIJIFLMBK;
  if (__this_00 != (IGFJINHNIBB_o *)0x0) {
    IGFJINHNIBB__DGLJCGNHLIG(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void Update()  [RVA 0x31D2748]
// Nekki.SF2.GUI.Scenes.GameLoaderScene$$Update @ RVA 0x31D2748

void Nekki_SF2_GUI_Scenes_GameLoaderScene__Update
               (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  IGFJINHNIBB_o *pIVar2;
  
  if ((DAT_04566cb8 & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GameLoaderScene>_Update__);
    DAT_04566cb8 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__Update
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<GameLoaderScene>_Update__
            );
  pIVar2 = (__this->fields).ECJIJIFLMBK;
  if (pIVar2 != (IGFJINHNIBB_o *)0x0) {
    IGFJINHNIBB__LLCONNGHGKD(pIVar2,(MethodInfo *)0x0);
    pIVar2 = (__this->fields).ECJIJIFLMBK;
    if (pIVar2 != (IGFJINHNIBB_o *)0x0) {
      if (((pIVar2->fields)._DGMNNLJEMIB_k__BackingField == false) ||
         (bVar1 = IGFJINHNIBB__KGGGJNCEPLF(pIVar2,(MethodInfo *)0x0), bVar1)) {
        return;
      }
      pIVar2 = (__this->fields).ECJIJIFLMBK;
      if (pIVar2 != (IGFJINHNIBB_o *)0x0) {
        IGFJINHNIBB__DGLJCGNHLIG(pIVar2,(MethodInfo *)0x0);
        if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        EOOEOHKLOFJ__EOJDBAHODGK((MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x31D28CC]
// Nekki.SF2.GUI.Scenes.GameLoaderScene$$.cctor @ RVA 0x31D28CC

void Nekki_SF2_GUI_Scenes_GameLoaderScene___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04566cb9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo);
    FUN_01bab630(&System_IO_Path_TypeInfo);
    FUN_01bab630(&StringLiteral_17610/*"database/intro.mp4"*/);
    DAT_04566cb9 = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = UnityEngine_Application__get_streamingAssetsPath((MethodInfo *)0x0);
  if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_IO_Path_TypeInfo);
  }
  pSVar1 = System_IO_Path__Combine(pSVar1,StringLiteral_17610/*"database/intro.mp4"*/,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->static_fields->ILJEEJCKIHM = pSVar1;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->static_fields,pSVar1);
  return;
}


// ===== private static void HJLLJGIBCNC()  [RVA 0x31D299C]
// Nekki.SF2.GUI.Scenes.GameLoaderScene$$HJLLJGIBCNC @ RVA 0x31D299C

void Nekki_SF2_GUI_Scenes_GameLoaderScene__HJLLJGIBCNC(MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_RaidBetaLogger_o *pNVar2;
  Nekki_SF2_GUI_Scenes_GameLoaderScene_StaticFields *pNVar3;
  
  if ((DAT_04566cba & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    FUN_01bab630(&StringLiteral_16560/*"auto, prev launch crashed, called from GameLoaderScene"*/);
    DAT_04566cba = 1;
  }
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar2 = Nekki_Utils_RaidBetaLogger__Instance((MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar2 = Nekki_Utils_RaidBetaLogger__Instance((MethodInfo *)0x0);
    if (pNVar2 == (Nekki_Utils_RaidBetaLogger_o *)0x0) {
LAB_032d2aec:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pNVar2->fields).FCLJIGKOBLI != false) {
      if ((Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->static_fields;
      if (pNVar3->GKMKGHOCIPG == false) {
        if ((Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pNVar3 = Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->static_fields;
        }
        pNVar3->GKMKGHOCIPG = true;
        if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar2 = Nekki_Utils_RaidBetaLogger__Instance((MethodInfo *)0x0);
        if (pNVar2 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
          Nekki_Utils_RaidBetaLogger__TrySendDump
                    (pNVar2,StringLiteral_16560/*"auto, prev launch crashed, called from GameLoaderScene"*/,false,(MethodInfo *)0x0);
          return;
        }
        goto LAB_032d2aec;
      }
    }
  }
  return;
}


// ===== public override DBMPKPJGIPI get_SceneId()  [RVA 0x31D2AF0]
// Nekki.SF2.GUI.Scenes.GameLoaderScene$$get_SceneId @ RVA 0x31D2AF0

int32_t Nekki_SF2_GUI_Scenes_GameLoaderScene__get_SceneId
                  (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x31D2AF8]
// Nekki.SF2.GUI.Scenes.GameLoaderScene$$CLNAOMIIBLH @ RVA 0x31D2AF8

void Nekki_SF2_GUI_Scenes_GameLoaderScene__CLNAOMIIBLH
               (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *__this,MethodInfo *method)

{
  if ((DAT_04566cbb & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GameLoaderScene>_CLNAOMIIBLH__);
    DAT_04566cbb = 1;
  }
  Nekki_SF2_GUI_Scene<object>__CLNAOMIIBLH
            ((Nekki_SF2_GUI_Scene_T__o *)__this,
             Method_Nekki_SF2_GUI_Scene<GameLoaderScene>_CLNAOMIIBLH__);
  return;
}

