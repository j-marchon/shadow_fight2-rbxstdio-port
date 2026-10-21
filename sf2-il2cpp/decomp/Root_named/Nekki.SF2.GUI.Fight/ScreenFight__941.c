// TypeDefIndex 941
// Namespace: Nekki.SF2.GUI.Fight
// public class ScreenFight : MonoBehaviour
// Fields:
//   public ScreenFight.NBAJOLBLMOD OnStartScreen; // 0x20
//   public ScreenFight.NBAJOLBLMOD OnStopScreen; // 0x28
//   private const float FCLPKBDEOPH = 1.666;
//   private const float DOBCNNJALIK = 0.016;
//   private const float GJOEJJEDCID = 1.166;
//   private const float AOJNEOCHLJH = 5.833;
//   private const float OKIBFIKOMPI = 1.166;
//   private const float AFKKIJGCJPH = 1.166;
//   private const float LGNMBJJOGJG = 1.166;
//   private const float FLIKDDJBBMK = 1.166;
//   private const float CIJKMLDFGAP = 1.166;
//   private const string JLLLICEMAEI = "FightUI.perfect";
//   private const string CHLOKFGNHBN = "FightUI.great";
//   private const string IKANJCDDMMP = "FightUI.fight";
//   private const string GLLDNABPCGJ = "FightUI.round";
//   private const string NCADKBDLINB = "FightUI.timesup";
//   private const string PJFMBIPBBFN = "FightUI.ringout";
//   private const string MPDJBDFGLBN = "FightUI.youlose";
//   private const string FCMNNCHDLNF = "FightUI.youwin";
//   private ScreenFight.DMDCILOEFAN MPMMEGJACCD; // 0x30
//   public JLBCMPFKHEI Type; // 0x38
//   private int KKCHDELEFJF; // 0x3C
//   private string NLKCBHLEEDA; // 0x40
//   private bool FNHHIEKCLPI; // 0x48
//   private bool PCLDELEFHBP; // 0x49
//   private bool NIPJJFHOICB; // 0x4A
//   private float KILAOGMHCEO; // 0x4C
//   private GameObject vsScreenPrefab; // 0x50
//   private GameObject pvpVsScreenPrefab; // 0x58
//   private GameObject enemiesScreenPrefab; // 0x60
//   private ResolutionImage image; // 0x68
//   private LabelAlias round; // 0x70
//   private LabelAlias ruleDescription; // 0x78
//   private VsScreen LJDENNBMCIG; // 0x80
//   private EnemiesScreen MNMBNBKMJOF; // 0x88

// ===== public bool get_Pause()  [RVA 0x30A7598]
// Nekki.SF2.GUI.Fight.ScreenFight$$get_Pause @ RVA 0x30A7598

bool Nekki_SF2_GUI_Fight_ScreenFight__get_Pause
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  return (__this->fields).FNHHIEKCLPI;
}


// ===== public void CreateSkipRound()  [RVA 0x30A75A0]
// Nekki.SF2.GUI.Fight.ScreenFight$$CreateSkipRound @ RVA 0x30A75A0

void Nekki_SF2_GUI_Fight_ScreenFight__CreateSkipRound
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,method);
  (__this->fields).Type = 3;
  Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,0.016,method_00);
  return;
}


// ===== public void CreateYouLose()  [RVA 0x30A782C]
// Nekki.SF2.GUI.Fight.ScreenFight$$CreateYouLose @ RVA 0x30A782C

void Nekki_SF2_GUI_Fight_ScreenFight__CreateYouLose
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_0456617d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6377/*"FightUI.youlose"*/);
    DAT_0456617d = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,method);
  (__this->fields).Type = 0xb;
  pNVar2 = (__this->fields).image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (bVar1) {
    pNVar2 = (__this->fields).image;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,StringLiteral_6377/*"FightUI.youlose"*/,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).image;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar2->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar2,(pNVar2->klass->vtable)._45_SetNativeSize.method);
        pNVar2 = (__this->fields).image;
        if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
          method_00 = extraout_x1_01;
          goto LAB_031a78f8;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031a78f8:
  Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,1.166,method_00);
  return;
}


// ===== public void .ctor()  [RVA 0x30A7914]
// Nekki.SF2.GUI.Fight.ScreenFight$$.ctor @ RVA 0x30A7914

void Nekki_SF2_GUI_Fight_ScreenFight___ctor
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *pNVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o **ppNVar2;
  Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *__this_00;
  Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o **ppNVar3;
  MethodInfo *extraout_x1;
  undefined1 auVar4 [16];
  
  if ((DAT_0456617e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456617e = 1;
    method = extraout_x1;
  }
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_TypeInfo,method);
  pNVar1 = auVar4._0_8_;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD___ctor(pNVar1,auVar4._8_8_);
  ppNVar2 = &(__this->fields).OnStartScreen;
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_TypeInfo);
  pNVar1 = auVar4._0_8_;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD___ctor(pNVar1,auVar4._8_8_);
  ppNVar2 = &(__this->fields).OnStopScreen;
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  __this_00 = (Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  ppNVar3 = &(__this->fields).MPMMEGJACCD;
  *ppNVar3 = __this_00;
  thunk_FUN_01c20e04(ppNVar3,__this_00);
  (__this->fields).NLKCBHLEEDA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void CreateTimesUp()  [RVA 0x30A7A50]
// Nekki.SF2.GUI.Fight.ScreenFight$$CreateTimesUp @ RVA 0x30A7A50

void Nekki_SF2_GUI_Fight_ScreenFight__CreateTimesUp
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_0456617f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6376/*"FightUI.timesup"*/);
    DAT_0456617f = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,method);
  (__this->fields).Type = 9;
  pNVar2 = (__this->fields).image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (bVar1) {
    pNVar2 = (__this->fields).image;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,StringLiteral_6376/*"FightUI.timesup"*/,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).image;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar2->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar2,(pNVar2->klass->vtable)._45_SetNativeSize.method);
        pNVar2 = (__this->fields).image;
        if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
          method_00 = extraout_x1_01;
          goto LAB_031a7b1c;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031a7b1c:
  Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,1.166,method_00);
  return;
}


// ===== public void CreateWinner(bool MEDOMNAEFNH)  [RVA 0x30A7B38]
// Nekki.SF2.GUI.Fight.ScreenFight$$CreateWinner @ RVA 0x30A7B38

void Nekki_SF2_GUI_Fight_ScreenFight__CreateWinner
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,bool MEDOMNAEFNH,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *pMVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  int32_t iVar4;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  
  pMVar3 = (MethodInfo *)(ulong)MEDOMNAEFNH;
  if ((DAT_04566180 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6370/*"FightUI.great"*/);
    FUN_01bab630(&StringLiteral_6372/*"FightUI.perfect"*/);
    DAT_04566180 = 1;
    pMVar3 = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,pMVar3);
  if (__this != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
    iVar4 = 6;
    if (!MEDOMNAEFNH) {
      iVar4 = 7;
    }
    (__this->fields).Type = iVar4;
    pNVar5 = (__this->fields).image;
    puVar1 = &StringLiteral_6372/*"FightUI.perfect"*/;
    if (!MEDOMNAEFNH) {
      puVar1 = &StringLiteral_6370/*"FightUI.great"*/;
    }
    CJNHFNHJHPE = (System_String_o *)*puVar1;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    pMVar3 = extraout_x1_00;
    if (!bVar2) {
LAB_031a7c30:
      Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,1.166,pMVar3);
      return;
    }
    pNVar5 = (__this->fields).image;
    if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar5 = (__this->fields).image;
      if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar5->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar5,(pNVar5->klass->vtable)._45_SetNativeSize.method);
        pNVar5 = (__this->fields).image;
        if ((pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
          pMVar3 = extraout_x1_01;
          goto LAB_031a7c30;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IOEHKDBENCJ()  [RVA 0x30A7C4C]
// Nekki.SF2.GUI.Fight.ScreenFight$$IOEHKDBENCJ @ RVA 0x30A7C4C

void Nekki_SF2_GUI_Fight_ScreenFight__IOEHKDBENCJ
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *__this_01;
  
  if ((DAT_04566181 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_Invoke__);
    DAT_04566181 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields).OnStopScreen;
    (__this->fields).NIPJJFHOICB = false;
    if (__this_01 != (Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,(__this->fields).Type,
                 Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_Invoke__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ClearPictures()  [RVA 0x30A75C8]
// Nekki.SF2.GUI.Fight.ScreenFight$$ClearPictures @ RVA 0x30A75C8

void Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o **ppNVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  Nekki_SF2_GUI_Fight_VsScreen_o **ppNVar6;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o *x;
  Nekki_SF2_GUI_Fight_VsScreen_o *x_00;
  
  if ((DAT_04566182 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566182 = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields).image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields).image;
    if ((pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031a77a0;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields).round;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).round;
    if ((pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031a77a0;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields).ruleDescription;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).ruleDescription;
    if ((pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031a77a0;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  ppNVar6 = &(__this->fields).LJDENNBMCIG;
  x_00 = *ppNVar6;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar6 == (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) goto LAB_031a77a0;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar6,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    *ppNVar6 = (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0;
    thunk_FUN_01c20e04(ppNVar6,0);
  }
  ppNVar3 = &(__this->fields).MNMBNBKMJOF;
  x = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (*ppNVar3 != (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar3,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    *ppNVar3 = (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0;
    thunk_FUN_01c20e04(ppNVar3,0);
    return;
  }
LAB_031a77a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Clear()  [RVA 0x30A7CC0]
// Nekki.SF2.GUI.Fight.ScreenFight$$Clear @ RVA 0x30A7CC0

void Nekki_SF2_GUI_Fight_ScreenFight__Clear
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o **ppNVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  Nekki_SF2_GUI_Fight_VsScreen_o **ppNVar6;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o *x;
  Nekki_SF2_GUI_Fight_VsScreen_o *x_00;
  
  if ((DAT_04566182 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566182 = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields).image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields).image;
    if ((pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031a77a0;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields).round;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).round;
    if ((pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031a77a0;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields).ruleDescription;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).ruleDescription;
    if ((pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031a77a0;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  ppNVar6 = &(__this->fields).LJDENNBMCIG;
  x_00 = *ppNVar6;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar6 == (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) goto LAB_031a77a0;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar6,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    *ppNVar6 = (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0;
    thunk_FUN_01c20e04(ppNVar6,0);
  }
  ppNVar3 = &(__this->fields).MNMBNBKMJOF;
  x = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (*ppNVar3 != (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar3,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    *ppNVar3 = (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0;
    thunk_FUN_01c20e04(ppNVar3,0);
    return;
  }
LAB_031a77a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MHKDEDJMKLF(JLBCMPFKHEI FPGABKDNDPG)  [RVA 0x30A7CC4]
// Nekki.SF2.GUI.Fight.ScreenFight$$MHKDEDJMKLF @ RVA 0x30A7CC4

void Nekki_SF2_GUI_Fight_ScreenFight__MHKDEDJMKLF
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,int32_t FPGABKDNDPG,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *__this_00;
  
  if ((DAT_04566183 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ScreenFight_MHKDEDJMKLF__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<JLBCMPFKHEI>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_RemoveListener__);
    DAT_04566183 = 1;
  }
  if (FPGABKDNDPG == 8) {
    __this_00 = (__this->fields).OnStopScreen;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<JLBCMPFKHEI>_TypeInfo);
    UnityEngine_Events_UnityAction<Int32Enum>___ctor();
    if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__RemoveListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,
                 Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_RemoveListener__);
      Nekki_SF2_GUI_Fight_ScreenFight__DKNNDNIGMIM(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void CreateFightRule()  [RVA 0x30A7F48]
// Nekki.SF2.GUI.Fight.ScreenFight$$CreateFightRule @ RVA 0x30A7F48

void Nekki_SF2_GUI_Fight_ScreenFight__CreateFightRule
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_04566184 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566184 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).NLKCBHLEEDA,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,method_00);
  (__this->fields).Type = 4;
  pNVar2 = (__this->fields).ruleDescription;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_01 = extraout_x1;
  if (bVar1) {
    pNVar2 = (__this->fields).ruleDescription;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).ruleDescription;
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,(__this->fields).NLKCBHLEEDA,(MethodInfo *)0x0);
        method_01 = extraout_x1_00;
        goto LAB_031a8004;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031a8004:
  Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,5.833,method_01);
  return;
}


// ===== private void BMMLKHIHOEE(float PEIDCPCKOJA)  [RVA 0x30A77A4]
// Nekki.SF2.GUI.Fight.ScreenFight$$BMMLKHIHOEE @ RVA 0x30A77A4

void Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,float PEIDCPCKOJA,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *__this_01;
  
  if ((DAT_04566185 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_Invoke__);
    DAT_04566185 = 1;
  }
  (__this->fields).KILAOGMHCEO = PEIDCPCKOJA;
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    __this_01 = (__this->fields).OnStartScreen;
    (__this->fields).NIPJJFHOICB = true;
    if (__this_01 != (Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,(__this->fields).Type,
                 Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_Invoke__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DKNNDNIGMIM()  [RVA 0x30A7D80]
// Nekki.SF2.GUI.Fight.ScreenFight$$DKNNDNIGMIM @ RVA 0x30A7D80

void Nekki_SF2_GUI_Fight_ScreenFight__DKNNDNIGMIM
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Fight_VsScreen_o *pNVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_02;
  Il2CppObject *pIVar5;
  uint index;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *pNVar6;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Fight_VsScreen_o **ppNVar7;
  float PEIDCPCKOJA;
  
  if ((DAT_04566186 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<VsScreen>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566186 = 1;
    method = extraout_x1;
  }
  (__this->fields).Type = 1;
  lVar1 = 0x50;
  if ((__this->fields).PCLDELEFHBP != false) {
    lVar1 = 0x58;
  }
  x = *(UnityEngine_Object_o **)((long)&__this->klass + lVar1);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_01 = method_00;
  PEIDCPCKOJA = 0.0;
  if (!bVar3) {
    Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,method_00);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = (UnityEngine_GameObject_o *)
                UnityEngine_Object__Instantiate<object>
                          ((Il2CppObject *)x,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pNVar4 = (Nekki_SF2_GUI_Fight_VsScreen_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (__this_00,Method_UnityEngine_GameObject_GetComponent<VsScreen>__);
      ppNVar7 = &(__this->fields).LJDENNBMCIG;
      *ppNVar7 = pNVar4;
      thunk_FUN_01c20e04(ppNVar7,pNVar4);
      if (*ppNVar7 != (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) {
        __this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)*ppNVar7,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
          pNVar6 = (__this->fields).MPMMEGJACCD;
                    /* try { // try from 031a7ec4 to 032a80c7 has its CatchHandler @ 031a7ec4
                       catch() { ... } // from try @ 031a7ec4 with catch @ 031a7ec4
                       catch() { ... } // from try @ 031a81b4 with catch @ 031a7ec4
                       catch() { ... } // from try @ 031a81fc with catch @ 031a7ec4
                       catch() { ... } // from try @ 031a8390 with catch @ 031a7ec4
                       catch() { ... } // from try @ 031a83e0 with catch @ 031a7ec4 */
          if ((pNVar6 != (Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *)0x0) &&
             (__this_02 = (pNVar6->fields).LFMGOAKIOPC,
             __this_02 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0)) {
            iVar2 = (__this_02->fields)._size;
            index = (pNVar6->fields).OJNKIAFGCBL;
            method_01 = (MethodInfo *)(ulong)index;
            if (iVar2 <= (int)index) {
              PEIDCPCKOJA = 0.0;
              if (iVar2 < 1) goto LAB_031a7f2c;
              index = 0;
            }
            pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,
                                Method_System_Collections_Generic_List<ModelParameters>_get_Item__);
            pNVar6 = (__this->fields).MPMMEGJACCD;
            if ((pNVar6 != (Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *)0x0) &&
               (pNVar4 = (__this->fields).LJDENNBMCIG,
               pNVar4 != (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0)) {
              (*(pNVar4->klass->vtable)._5_Init.methodPtr)
                        (pNVar4,(pNVar6->fields).FAPMJJBOFEF,pIVar5,
                         (ulong)(__this->fields).PCLDELEFHBP,(pNVar4->klass->vtable)._5_Init.method)
              ;
              pNVar4 = (__this->fields).LJDENNBMCIG;
              if (pNVar4 != (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) {
                PEIDCPCKOJA = (pNVar4->fields).ACFFOAPPNBD;
                method_01 = extraout_x1_00;
                goto LAB_031a7f2c;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031a7f2c:
  Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,PEIDCPCKOJA,method_01);
  return;
}


// ===== private void Update()  [RVA 0x30A8020]
// Nekki.SF2.GUI.Fight.ScreenFight$$Update @ RVA 0x30A8020

void Nekki_SF2_GUI_Fight_ScreenFight__Update
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  
  if (((__this->fields).FNHHIEKCLPI == false) && ((__this->fields).NIPJJFHOICB != false)) {
    fVar2 = (__this->fields).KILAOGMHCEO;
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 - fVar1;
    (__this->fields).KILAOGMHCEO = fVar2;
    if (fVar2 <= 0.0) {
      Nekki_SF2_GUI_Fight_ScreenFight__IOEHKDBENCJ(__this,method_00);
      return;
    }
  }
  return;
}


// ===== public void set_Pause(bool CJNHFNHJHPE)  [RVA 0x30A8074]
// Nekki.SF2.GUI.Fight.ScreenFight$$set_Pause @ RVA 0x30A8074

void Nekki_SF2_GUI_Fight_ScreenFight__set_Pause
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FNHHIEKCLPI = CJNHFNHJHPE;
  return;
}


// ===== public void CreateRound(int CJNHFNHJHPE, bool HOOGEGENGCG = False)  [RVA 0x30A8080]
// Nekki.SF2.GUI.Fight.ScreenFight$$CreateRound @ RVA 0x30A8080

void Nekki_SF2_GUI_Fight_ScreenFight__CreateRound
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,int32_t CJNHFNHJHPE,bool HOOGEGENGCG,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *pSVar3;
  MethodInfo *pMVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  int32_t local_34;
  
  pMVar4 = (MethodInfo *)(ulong)(uint)CJNHFNHJHPE;
  if ((DAT_04566187 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6374/*"FightUI.round"*/);
                    /* try { // try from 031a80c8 to 032a80d3 has its CatchHandler @ 031a81cc */
    DAT_04566187 = 1;
    pMVar4 = extraout_x1;
  }
  local_34 = 0;
  Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,pMVar4);
                    /* try { // try from 031a80e0 to 032a80e7 has its CatchHandler @ 031a81c8 */
  (__this->fields).Type = 2;
  pNVar5 = (__this->fields).image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031a8104 to 032a810b has its CatchHandler @ 031a81bc */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).image;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031a8204;
                    /* try { // try from 031a8114 to 032a8127 has its CatchHandler @ 031a81b8 */
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,StringLiteral_6374/*"FightUI.round"*/,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).image;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031a8204;
                    /* try { // try from 031a8134 to 032a814f has its CatchHandler @ 031a81c0 */
    (*(pNVar5->klass->vtable)._45_SetNativeSize.methodPtr)
              (pNVar5,(pNVar5->klass->vtable)._45_SetNativeSize.method);
    pNVar5 = (__this->fields).image;
    if ((pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031a8204;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
  }
  pNVar6 = (__this->fields).round;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar4 = extraout_x1_00;
                    /* try { // try from 031a8184 to 032a81b3 has its CatchHandler @ 031a81c4 */
  if (bVar1) {
    if (HOOGEGENGCG) {
      CJNHFNHJHPE = (__this->fields).KKCHDELEFJF;
    }
    pNVar6 = (__this->fields).round;
    local_34 = CJNHFNHJHPE;
    if ((pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
                    /* try { // try from 031a81b4 to 032a81e3 has its CatchHandler @ 031a7ec4 */
      pNVar6 = (__this->fields).round;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a8114 with catch @ 031a81b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a8104 with catch @ 031a81bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a8134 with catch @ 031a81c0
                        */
      pSVar3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a8184 with catch @ 031a81c4
                        */
      if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a80e0 with catch @ 031a81c8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a80c8 with catch @ 031a81cc
                        */
        (*(pNVar6->klass->vtable)._75_set_text.methodPtr)
                  (pNVar6,pSVar3,(pNVar6->klass->vtable)._75_set_text.method);
        pMVar4 = extraout_x1_01;
        goto LAB_031a81e0;
      }
    }
LAB_031a8204:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031a81e0:
                    /* try { // try from 031a81e4 to 032a81fb has its CatchHandler @ 031a83d8 */
  Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,1.666,pMVar4);
                    /* try { // try from 031a81fc to 032a837f has its CatchHandler @ 031a7ec4 */
  return;
}


// ===== public void CreateYouWin()  [RVA 0x30A8208]
// Nekki.SF2.GUI.Fight.ScreenFight$$CreateYouWin @ RVA 0x30A8208

void Nekki_SF2_GUI_Fight_ScreenFight__CreateYouWin
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_04566188 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6378/*"FightUI.youwin"*/);
    DAT_04566188 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,method);
  (__this->fields).Type = 0xc;
  pNVar2 = (__this->fields).image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (bVar1) {
    pNVar2 = (__this->fields).image;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,StringLiteral_6378/*"FightUI.youwin"*/,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).image;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar2->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar2,(pNVar2->klass->vtable)._45_SetNativeSize.method);
        pNVar2 = (__this->fields).image;
        if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
          method_00 = extraout_x1_01;
          goto LAB_031a82d4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031a82d4:
  Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,1.166,method_00);
  return;
}


// ===== public void CreateFight()  [RVA 0x30A82F0]
// Nekki.SF2.GUI.Fight.ScreenFight$$CreateFight @ RVA 0x30A82F0

void Nekki_SF2_GUI_Fight_ScreenFight__CreateFight
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_04566189 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6369/*"FightUI.fight"*/);
    DAT_04566189 = 1;
  }
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if ((bVar1) && ((__this->fields).Type == 5)) {
      return;
    }
    Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,method_00);
    (__this->fields).Type = 5;
    pNVar3 = (__this->fields).image;
                    /* try { // try from 031a8380 to 032a838f has its CatchHandler @ 031a83d4 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031a8390 to 032a83db has its CatchHandler @ 031a7ec4 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_01 = extraout_x1;
    if (!bVar1) {
LAB_031a83f0:
      Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,1.166,method_01);
      return;
    }
    pNVar3 = (__this->fields).image;
    if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar3,StringLiteral_6369/*"FightUI.fight"*/,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).image;
      if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar3->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar3,(pNVar3->klass->vtable)._45_SetNativeSize.method);
        pNVar3 = (__this->fields).image;
                    /* catch() { ... } // from try @ 031a8380 with catch @ 031a83d4 */
                    /* catch() { ... } // from try @ 031a81e4 with catch @ 031a83d8 */
                    /* try { // try from 031a83dc to 032a83df has its CatchHandler @ 031a83e8 */
                    /* try { // try from 031a83e0 to 032a83eb has its CatchHandler @ 031a7ec4 */
        if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031a83dc with catch @ 031a83e8
                        */
                    /* try { // try from 031a83ec to 032a86a3 has its CatchHandler @ 031a83ec
                       catch() { ... } // from try @ 031a83ec with catch @ 031a83ec
                       catch() { ... } // from try @ 031a89e0 with catch @ 031a83ec
                       catch() { ... } // from try @ 031a8a48 with catch @ 031a83ec
                       catch() { ... } // from try @ 031a8b68 with catch @ 031a83ec
                       catch() { ... } // from try @ 031a8bb4 with catch @ 031a83ec
                       catch() { ... } // from try @ 031a8bfc with catch @ 031a83ec
                       catch() { ... } // from try @ 031a8d94 with catch @ 031a83ec
                       catch() { ... } // from try @ 031a8da8 with catch @ 031a83ec */
          UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
          method_01 = extraout_x1_00;
          goto LAB_031a83f0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CreateRingOut()  [RVA 0x30A840C]
// Nekki.SF2.GUI.Fight.ScreenFight$$CreateRingOut @ RVA 0x30A840C

void Nekki_SF2_GUI_Fight_ScreenFight__CreateRingOut
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_0456618a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6373/*"FightUI.ringout"*/);
    DAT_0456618a = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,method);
  (__this->fields).Type = 10;
  pNVar2 = (__this->fields).image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (bVar1) {
    pNVar2 = (__this->fields).image;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,StringLiteral_6373/*"FightUI.ringout"*/,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).image;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar2->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar2,(pNVar2->klass->vtable)._45_SetNativeSize.method);
        pNVar2 = (__this->fields).image;
        if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
          method_00 = extraout_x1_01;
          goto LAB_031a84d8;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031a84d8:
  Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,1.166,method_00);
  return;
}


// ===== public void CreateEnemiesScreen(List<ModelParameters> DFGLEOANOFI, int DPJIDNBJIBG, bool CGMFGFBHMHK)  [RVA 0x30A84F4]
// Nekki.SF2.GUI.Fight.ScreenFight$$CreateEnemiesScreen @ RVA 0x30A84F4

void Nekki_SF2_GUI_Fight_ScreenFight__CreateEnemiesScreen
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,
               System_Collections_Generic_List_PJKHAJKEHEL__o *DFGLEOANOFI,int32_t DPJIDNBJIBG,
               bool CGMFGFBHMHK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o *pNVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *__this_01;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o **ppNVar4;
  
  if ((DAT_0456618b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<EnemiesScreen>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ScreenFight_MHKDEDJMKLF__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<JLBCMPFKHEI>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_AddListener__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456618b = 1;
  }
  (__this->fields).Type = 8;
  x = (UnityEngine_Object_o *)(__this->fields).enemiesScreenPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,0.0,method_00);
    return;
  }
  Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,method_00);
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).enemiesScreenPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar2,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pNVar3 = (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar2,Method_UnityEngine_GameObject_GetComponent<EnemiesScreen>__);
      ppNVar4 = &(__this->fields).MNMBNBKMJOF;
      *ppNVar4 = pNVar3;
      thunk_FUN_01c20e04(ppNVar4,pNVar3);
      if (*ppNVar4 != (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) {
        __this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)*ppNVar4,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
          if (*ppNVar4 != (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) {
            Nekki_SF2_GUI_Fight_EnemiesScreen__Init
                      (*ppNVar4,DFGLEOANOFI,DPJIDNBJIBG,CGMFGFBHMHK,StringLiteral_1/*""*/,
                       (MethodInfo *)0x0);
                    /* try { // try from 031a86a4 to 032a86ab has its CatchHandler @ 031a8a94 */
            if (*ppNVar4 != (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) {
              Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE
                        (__this,((*ppNVar4)->fields).ACFFOAPPNBD,method_01);
                    /* try { // try from 031a86b8 to 032a86df has its CatchHandler @ 031a8a9c */
              __this_01 = (__this->fields).OnStopScreen;
              call = (UnityEngine_Events_UnityAction_T0__o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction<JLBCMPFKHEI>_TypeInfo);
                    /* try { // try from 031a86e0 to 032a86fb has its CatchHandler @ 031a8a8c */
              UnityEngine_Events_UnityAction<Int32Enum>___ctor();
              if (__this_01 != (Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *)0x0) {
                UnityEngine_Events_UnityEvent<Int32Enum>__AddListener
                          ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,call,
                           Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_AddListener__);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031a8714 to 032a871b has its CatchHandler @ 031a8a74 */
  FUN_01bab8c8();
}


// ===== public void PreInit(FightList FBFPLEFCDOK)  [RVA 0x30A8718]
// Nekki.SF2.GUI.Fight.ScreenFight$$PreInit @ RVA 0x30A8718

void Nekki_SF2_GUI_Fight_ScreenFight__PreInit
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,FightList_o *FBFPLEFCDOK,
               MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if (FBFPLEFCDOK != (FightList_o *)0x0) {
                    /* try { // try from 031a8728 to 032a872f has its CatchHandler @ 031a8a90 */
                    /* try { // try from 031a8738 to 032a875f has its CatchHandler @ 031a8a98 */
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (FBFPLEFCDOK->fields).GENLHJOKOIJ.fields,(MethodInfo *)0x0);
    iVar2 = FightList__IKDFBAOFNPB(FBFPLEFCDOK,(MethodInfo *)0x0);
    (__this->fields).KKCHDELEFJF = iVar2 * iVar1;
    pSVar3 = FightList__CJPIFPJMENP(FBFPLEFCDOK,(MethodInfo *)0x0);
    ppSVar4 = &(__this->fields).NLKCBHLEEDA;
                    /* try { // try from 031a8760 to 032a8777 has its CatchHandler @ 031a8a88 */
    *ppSVar4 = pSVar3;
    thunk_FUN_01c20e04(ppSVar4,pSVar3);
    (__this->fields).FNHHIEKCLPI = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CreateVS(ModelParameters OKBIKHHKOEN, List<ModelParameters> DFGLEOANOFI, int FJJJGOHDLBH, bool CGMFGFBHMHK, bool BLOEBCBBGBK, bool EOGKCNNHPFL, bool HIOHGCIKLNF)  [RVA 0x30A8784]
// Nekki.SF2.GUI.Fight.ScreenFight$$CreateVS @ RVA 0x30A8784

void Nekki_SF2_GUI_Fight_ScreenFight__CreateVS
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,ModelParameters_o *OKBIKHHKOEN,
               System_Collections_Generic_List_PJKHAJKEHEL__o *DFGLEOANOFI,int32_t FJJJGOHDLBH,
               bool CGMFGFBHMHK,bool BLOEBCBBGBK,bool EOGKCNNHPFL,bool HIOHGCIKLNF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *pNVar1;
  System_Collections_Generic_List_PJKHAJKEHEL__o **ppSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)(ulong)CGMFGFBHMHK;
                    /* try { // try from 031a8790 to 032a8797 has its CatchHandler @ 031a8a70 */
  pNVar1 = (__this->fields).MPMMEGJACCD;
  if (pNVar1 != (Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *)0x0) {
    (pNVar1->fields).FAPMJJBOFEF = OKBIKHHKOEN;
    thunk_FUN_01c20e04();
    pNVar1 = (__this->fields).MPMMEGJACCD;
    if (pNVar1 != (Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *)0x0) {
      ppSVar2 = &(pNVar1->fields).LFMGOAKIOPC;
      *ppSVar2 = DFGLEOANOFI;
      thunk_FUN_01c20e04(ppSVar2,DFGLEOANOFI);
      pNVar1 = (__this->fields).MPMMEGJACCD;
      if (pNVar1 != (Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *)0x0) {
        (pNVar1->fields).OJNKIAFGCBL = FJJJGOHDLBH;
        (__this->fields).PCLDELEFHBP = HIOHGCIKLNF;
        if ((0 < FJJJGOHDLBH) && (BLOEBCBBGBK)) {
                    /* try { // try from 031a8804 to 032a8827 has its CatchHandler @ 031a8a78 */
          Nekki_SF2_GUI_Fight_ScreenFight__CreateEnemiesScreen
                    (__this,DFGLEOANOFI,FJJJGOHDLBH,CGMFGFBHMHK,method_01);
          return;
        }
        (__this->fields).Type = 1;
                    /* try { // try from 031a8828 to 032a883f has its CatchHandler @ 031a8a58 */
        Nekki_SF2_GUI_Fight_ScreenFight__IOEHKDBENCJ(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

